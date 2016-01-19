
#ifndef VTKIOPARALLELLSDYNA_EXPORT_H
#define VTKIOPARALLELLSDYNA_EXPORT_H

#ifdef VTKIOPARALLELLSDYNA_STATIC_DEFINE
#  define VTKIOPARALLELLSDYNA_EXPORT
#  define VTKIOPARALLELLSDYNA_NO_EXPORT
#else
#  ifndef VTKIOPARALLELLSDYNA_EXPORT
#    ifdef vtkIOParallelLSDyna_EXPORTS
        /* We are building this library */
#      define VTKIOPARALLELLSDYNA_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKIOPARALLELLSDYNA_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKIOPARALLELLSDYNA_NO_EXPORT
#    define VTKIOPARALLELLSDYNA_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKIOPARALLELLSDYNA_DEPRECATED
#  define VTKIOPARALLELLSDYNA_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKIOPARALLELLSDYNA_DEPRECATED_EXPORT VTKIOPARALLELLSDYNA_EXPORT __attribute__ ((__deprecated__))
#  define VTKIOPARALLELLSDYNA_DEPRECATED_NO_EXPORT VTKIOPARALLELLSDYNA_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKIOPARALLELLSDYNA_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkIOLSDynaModule.h"

#endif
