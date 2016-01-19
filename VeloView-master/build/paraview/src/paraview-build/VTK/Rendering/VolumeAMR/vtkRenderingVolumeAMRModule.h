
#ifndef VTKRENDERINGVOLUMEAMR_EXPORT_H
#define VTKRENDERINGVOLUMEAMR_EXPORT_H

#ifdef VTKRENDERINGVOLUMEAMR_STATIC_DEFINE
#  define VTKRENDERINGVOLUMEAMR_EXPORT
#  define VTKRENDERINGVOLUMEAMR_NO_EXPORT
#else
#  ifndef VTKRENDERINGVOLUMEAMR_EXPORT
#    ifdef vtkRenderingVolumeAMR_EXPORTS
        /* We are building this library */
#      define VTKRENDERINGVOLUMEAMR_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKRENDERINGVOLUMEAMR_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKRENDERINGVOLUMEAMR_NO_EXPORT
#    define VTKRENDERINGVOLUMEAMR_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKRENDERINGVOLUMEAMR_DEPRECATED
#  define VTKRENDERINGVOLUMEAMR_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKRENDERINGVOLUMEAMR_DEPRECATED_EXPORT VTKRENDERINGVOLUMEAMR_EXPORT __attribute__ ((__deprecated__))
#  define VTKRENDERINGVOLUMEAMR_DEPRECATED_NO_EXPORT VTKRENDERINGVOLUMEAMR_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKRENDERINGVOLUMEAMR_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkFiltersAMRModule.h"
#include "vtkRenderingVolumeOpenGLModule.h"

#endif
