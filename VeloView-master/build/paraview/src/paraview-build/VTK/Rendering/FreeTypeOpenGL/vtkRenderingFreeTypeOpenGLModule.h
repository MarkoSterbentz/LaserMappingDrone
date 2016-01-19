
#ifndef VTKRENDERINGFREETYPEOPENGL_EXPORT_H
#define VTKRENDERINGFREETYPEOPENGL_EXPORT_H

#ifdef VTKRENDERINGFREETYPEOPENGL_STATIC_DEFINE
#  define VTKRENDERINGFREETYPEOPENGL_EXPORT
#  define VTKRENDERINGFREETYPEOPENGL_NO_EXPORT
#else
#  ifndef VTKRENDERINGFREETYPEOPENGL_EXPORT
#    ifdef vtkRenderingFreeTypeOpenGL_EXPORTS
        /* We are building this library */
#      define VTKRENDERINGFREETYPEOPENGL_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKRENDERINGFREETYPEOPENGL_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKRENDERINGFREETYPEOPENGL_NO_EXPORT
#    define VTKRENDERINGFREETYPEOPENGL_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKRENDERINGFREETYPEOPENGL_DEPRECATED
#  define VTKRENDERINGFREETYPEOPENGL_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKRENDERINGFREETYPEOPENGL_DEPRECATED_EXPORT VTKRENDERINGFREETYPEOPENGL_EXPORT __attribute__ ((__deprecated__))
#  define VTKRENDERINGFREETYPEOPENGL_DEPRECATED_NO_EXPORT VTKRENDERINGFREETYPEOPENGL_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKRENDERINGFREETYPEOPENGL_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkRenderingCoreModule.h"
#include "vtkRenderingFreeTypeModule.h"
#include "vtkRenderingOpenGLModule.h"

/* AutoInit implementations.  */
#if defined(vtkRenderingFreeTypeOpenGL_INCLUDE)
# include vtkRenderingFreeTypeOpenGL_INCLUDE
#endif
#if defined(vtkRenderingFreeTypeOpenGL_AUTOINIT)
# include "vtkAutoInit.h"
VTK_AUTOINIT(vtkRenderingFreeTypeOpenGL)
#endif

#endif
