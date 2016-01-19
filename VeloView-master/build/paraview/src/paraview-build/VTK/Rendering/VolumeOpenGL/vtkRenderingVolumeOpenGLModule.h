
#ifndef VTKRENDERINGVOLUMEOPENGL_EXPORT_H
#define VTKRENDERINGVOLUMEOPENGL_EXPORT_H

#ifdef VTKRENDERINGVOLUMEOPENGL_STATIC_DEFINE
#  define VTKRENDERINGVOLUMEOPENGL_EXPORT
#  define VTKRENDERINGVOLUMEOPENGL_NO_EXPORT
#else
#  ifndef VTKRENDERINGVOLUMEOPENGL_EXPORT
#    ifdef vtkRenderingVolumeOpenGL_EXPORTS
        /* We are building this library */
#      define VTKRENDERINGVOLUMEOPENGL_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKRENDERINGVOLUMEOPENGL_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKRENDERINGVOLUMEOPENGL_NO_EXPORT
#    define VTKRENDERINGVOLUMEOPENGL_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKRENDERINGVOLUMEOPENGL_DEPRECATED
#  define VTKRENDERINGVOLUMEOPENGL_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKRENDERINGVOLUMEOPENGL_DEPRECATED_EXPORT VTKRENDERINGVOLUMEOPENGL_EXPORT __attribute__ ((__deprecated__))
#  define VTKRENDERINGVOLUMEOPENGL_DEPRECATED_NO_EXPORT VTKRENDERINGVOLUMEOPENGL_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKRENDERINGVOLUMEOPENGL_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkRenderingOpenGLModule.h"
#include "vtkRenderingVolumeModule.h"

/* AutoInit implementations.  */
#if defined(vtkRenderingVolumeOpenGL_INCLUDE)
# include vtkRenderingVolumeOpenGL_INCLUDE
#endif
#if defined(vtkRenderingVolumeOpenGL_AUTOINIT)
# include "vtkAutoInit.h"
VTK_AUTOINIT(vtkRenderingVolumeOpenGL)
#endif

#endif
