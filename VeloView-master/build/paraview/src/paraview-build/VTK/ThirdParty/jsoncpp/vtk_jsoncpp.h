/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtk_jsoncpp.h.in

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#ifndef vtk_jsoncpp_h
#define vtk_jsoncpp_h

/* Use the JsonCpp library configured for VTK.  */
/* #undef VTK_USE_SYSTEM_JSONCPP */
#ifdef VTK_USE_SYSTEM_JSONCPP
# include <json/json.h>
# ifndef JSON_FORWARDS_H_INCLUDED
#  error Incorrect header included, check your include paths for conflicts
# endif
#else
// Needed for Windows declspec import logic
# if defined(_WIN32) && defined(VTK_BUILD_SHARED_LIBS)
#  define JSON_DLL
# endif
# include <vtkjsoncpp/json/json.h>
#endif

#endif
