/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkTestStreamEOF.cxx.in

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

// Many C++ streams libraries have buggy conditions when reading
// reaches the end of a file.  When an ifstream attempts to read past
// the end of the file, the "eof" and "fail" bits are set.  Clearing
// the fail bit should be enough to allow seekg() to work and tellg()
// to report the file position.  Some stream libraries have bugs in
// this case.  This source file tests the severity of the eof
// conditions for a compiler.
//
// Severity levels are reported in terms of the extent of the
// work-around required:
//
//    0 - No bug exists.
//    1 - User must clear eof bit.
//    2 - User must clear eof bit and re-seek to end.
//    3 - User must clear eof bit and call _M_seek_return on the filebuf.
//  126 - Could not open sample input file.
//  127 - Unknown severity level.
//
// Severity level 3 is only known to exist for -LANG:std streams on
// the SGI MIPSpro 7.30 - 7.3.1.1 compiler versions.  The cause of the
// bug is a code pattern like this:
//
//  _M_in_error_mode = true;
//  while(!_M_in_error_mode) { _M_in_error_mode = false; }
//
// It requires directly calling a non-public member function in the
// filebuf instance on the stream to escape the bad state.
// Unfortunately there is no way to detect the patch level of the
// compiler from the preprocessor, so we need to actually try the
// call.

#if defined(__sgi) && !defined(__GNUC__) && defined(_COMPILER_VERSION)
# if _COMPILER_VERSION == 730
#  define VTK_SGI_730
# endif
#endif

#if defined(_MSC_VER)
# pragma warning (push, 1)
#endif

// Include the streams library.  Hack access to SGI stream
// implementation for MIPSpro 7.3 compiler.
#if defined(VTK_SGI_730)
# define protected public
# define private public
#endif
#include <fstream>
 using std::ifstream;
 using std::ios;
#if defined(VTK_SGI_730)
# undef protected
# undef private
#endif

#if defined(_MSC_VER)
# pragma warning (pop)
#endif

int main()
{
  const char* fname = "/home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/CMake/vtkTestStreamEOF.cxx.in";

  // Open the file.
#if defined(_WIN32)
  ifstream fin(fname, ios::binary | ios::in);
#else
  ifstream fin(fname, ios::in);
#endif

  // Make sure we opened the file.
  if(!fin)
    {
    return 126;
    }

  // Go to eof in a way that exposes the bug everywhere.
  char c = 0;
  fin.seekg(-1, ios::end);
  while(fin.get(c));

  // Clear the fail bit so tellg() is supposed to return something
  // other than -1.
  fin.clear(fin.rdstate() & ~ios::failbit);
  if(fin.tellg() >= 0)
    {
    // Nothing is wrong with eof for this streams library.
    return 0;
    }

  // Some streams return -1 from tellg() if eof is set.
  fin.clear(fin.rdstate() & ~ios::failbit & ~ios::eofbit);
  if(fin.tellg() >= 0)
    {
    return 1;
    }

  // Some streams still return -1 from tellg.  Try seeking to get it
  // out of this strange state.
  fin.clear(fin.rdstate() & ~ios::failbit & ~ios::eofbit);
  fin.seekg(0, ios::end);
  if(fin.tellg() >= 0)
    {
    return 2;
    }

  // Only SGI 7.30 to 7.3.1.1 is known to get this far.  Try to escape
  // the bad state.
#if defined(VTK_SGI_730)
  fin.clear(fin.rdstate() & ~ios::failbit & ~ios::eofbit);
  fin.rdbuf()->_M_seek_return(0, 0);
  if(fin.tellg() >= 0)
    {
    return 3;
    }
#endif

  return 127;
}
