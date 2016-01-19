/*=========================================================================

  Program:   ParaView
  Module:    vtkSMMessage.h

  Copyright (c) Kitware, Inc.
  All rights reserved.
  See Copyright.txt or http://www.paraview.org/HTML/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#ifndef __vtk_protobuf_h
#define __vtk_protobuf_h

/* Use the protobuf library configured for VTK.  */
/* #undef VTK_USE_SYSTEM_PROTOBUF */
#ifdef VTK_USE_SYSTEM_PROTOBUF
# error "Using System protobuf is not supported by ParaView"
#else
# include "vtkConfigure.h"
# if defined(_MSC_VER) && defined(VTK_BUILD_SHARED_LIBS)
// When building on Windows with shared libraries enabled, any VTK/ParaView code
// that imports the protobuf headers needs to have this definitions otherwise
// the export signatures will not match and we get tons of warnings.
# define PROTOBUF_USE_DLLS
# endif
#endif

/* Include the top-level header here.  */

#endif
