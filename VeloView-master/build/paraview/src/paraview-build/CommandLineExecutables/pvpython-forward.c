/*=========================================================================

Program:   VTK
Module:    vtk-forward.c.in

Copyright (c) Kitware, Inc.
All rights reserved.
See Copyright.txt or http://www.vtk.org/HTML/Copyright.html for details.

This software is distributed WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#define vtksys_SHARED_FORWARD_DIR_BUILD "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/bin"
#define vtksys_SHARED_FORWARD_PATH_BUILD "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/bin"
#define vtksys_SHARED_FORWARD_PATH_INSTALL "../lib/paraview-4.3"
#define vtksys_SHARED_FORWARD_EXE_BUILD "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/bin/pvpython"
#define vtksys_SHARED_FORWARD_EXE_INSTALL "../lib/paraview-4.3/pvpython"
#define vtksys_SHARED_FORWARD_OPTION_PRINT "--print"
#define vtksys_SHARED_FORWARD_OPTION_LDD "--ldd"

#include <vtksys/SharedForward.h>

int main(int argc, char** argv)
{
  return vtksys_shared_forward_to_real(argc, argv);
}
