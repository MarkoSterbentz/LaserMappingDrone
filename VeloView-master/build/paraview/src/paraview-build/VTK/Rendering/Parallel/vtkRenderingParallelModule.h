
#ifndef VTKRENDERINGPARALLEL_EXPORT_H
#define VTKRENDERINGPARALLEL_EXPORT_H

#ifdef VTKRENDERINGPARALLEL_STATIC_DEFINE
#  define VTKRENDERINGPARALLEL_EXPORT
#  define VTKRENDERINGPARALLEL_NO_EXPORT
#else
#  ifndef VTKRENDERINGPARALLEL_EXPORT
#    ifdef vtkRenderingParallel_EXPORTS
        /* We are building this library */
#      define VTKRENDERINGPARALLEL_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKRENDERINGPARALLEL_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKRENDERINGPARALLEL_NO_EXPORT
#    define VTKRENDERINGPARALLEL_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKRENDERINGPARALLEL_DEPRECATED
#  define VTKRENDERINGPARALLEL_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKRENDERINGPARALLEL_DEPRECATED_EXPORT VTKRENDERINGPARALLEL_EXPORT __attribute__ ((__deprecated__))
#  define VTKRENDERINGPARALLEL_DEPRECATED_NO_EXPORT VTKRENDERINGPARALLEL_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKRENDERINGPARALLEL_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkFiltersParallelModule.h"
#include "vtkRenderingOpenGLModule.h"

#endif
