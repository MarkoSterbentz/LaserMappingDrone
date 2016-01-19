/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkRenderingOpenGLConfigure.h.in

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef vtkRenderingOpenGLConfigure_h
#define vtkRenderingOpenGLConfigure_h

/* This header contains build settings for the vtkRenderingOpenGL module. */

/* Whether VTK was built to support Carbon or Cocoa on the Mac.  */
/* #undef VTK_USE_CARBON */
/* #undef VTK_USE_COCOA */

/*--------------------------------------------------------------------------*/
/* Rendering Configuration                                                  */
#define VTK_USE_X
#define VTK_USE_OPENGL_LIBRARY
/* #undef VTK_OPENGL_HAS_OSMESA */
/* #undef VTK_USE_OFFSCREEN */

/* #undef VTK_USE_GLSL_SHADERS */

/* #undef VTK_MATERIALS_DIRS */
#ifdef VTK_MATERIALS_DIRS
#  undef VTK_MATERIALS_DIRS
#  define VTK_MATERIALS_DIRS ""
#endif

/* Options for GPUInfo */
/* #undef VTK_USE_DIRECTX */
/* #undef VTK_USE_CORE_GRAPHICS */
/* #undef VTK_USE_NVCONTROL */

/*--------------------------------------------------------------------------*/
/* Setup VTK based on platform features and configuration.                  */

/* OGLR */
/* OGLR is for GLX. It can be on Unix, Mac or Windows */
#if ((defined(VTK_USE_OPENGL_LIBRARY) && defined(VTK_USE_X) && \
      !defined(_WIN32)) ||                                     \
     (defined(VTK_USE_X) && defined(_WIN32))) && \
     !(defined (VTK_USE_CARBON) || defined(VTK_USE_COCOA))
# define VTK_USE_OGLR
#endif

#if (defined(VTK_OPENGL_HAS_OSMESA) && !defined(VTK_USE_OGLR) &&  \
    !defined(_WIN32) && !defined(VTK_USE_CARBON) && !defined(VTK_USE_COCOA))
# define VTK_USE_OSMESA
#endif

#endif
