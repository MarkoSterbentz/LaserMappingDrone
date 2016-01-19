
#ifndef VTKRENDERINGGL2PS_EXPORT_H
#define VTKRENDERINGGL2PS_EXPORT_H

#ifdef VTKRENDERINGGL2PS_STATIC_DEFINE
#  define VTKRENDERINGGL2PS_EXPORT
#  define VTKRENDERINGGL2PS_NO_EXPORT
#else
#  ifndef VTKRENDERINGGL2PS_EXPORT
#    ifdef vtkRenderingGL2PS_EXPORTS
        /* We are building this library */
#      define VTKRENDERINGGL2PS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKRENDERINGGL2PS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKRENDERINGGL2PS_NO_EXPORT
#    define VTKRENDERINGGL2PS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKRENDERINGGL2PS_DEPRECATED
#  define VTKRENDERINGGL2PS_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKRENDERINGGL2PS_DEPRECATED_EXPORT VTKRENDERINGGL2PS_EXPORT __attribute__ ((__deprecated__))
#  define VTKRENDERINGGL2PS_DEPRECATED_NO_EXPORT VTKRENDERINGGL2PS_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKRENDERINGGL2PS_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkRenderingContextOpenGLModule.h"

#endif
