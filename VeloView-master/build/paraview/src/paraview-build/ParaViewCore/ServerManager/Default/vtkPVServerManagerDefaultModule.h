
#ifndef VTKPVSERVERMANAGERDEFAULT_EXPORT_H
#define VTKPVSERVERMANAGERDEFAULT_EXPORT_H

#ifdef VTKPVSERVERMANAGERDEFAULT_STATIC_DEFINE
#  define VTKPVSERVERMANAGERDEFAULT_EXPORT
#  define VTKPVSERVERMANAGERDEFAULT_NO_EXPORT
#else
#  ifndef VTKPVSERVERMANAGERDEFAULT_EXPORT
#    ifdef vtkPVServerManagerDefault_EXPORTS
        /* We are building this library */
#      define VTKPVSERVERMANAGERDEFAULT_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPVSERVERMANAGERDEFAULT_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPVSERVERMANAGERDEFAULT_NO_EXPORT
#    define VTKPVSERVERMANAGERDEFAULT_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPVSERVERMANAGERDEFAULT_DEPRECATED
#  define VTKPVSERVERMANAGERDEFAULT_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPVSERVERMANAGERDEFAULT_DEPRECATED_EXPORT VTKPVSERVERMANAGERDEFAULT_EXPORT __attribute__ ((__deprecated__))
#  define VTKPVSERVERMANAGERDEFAULT_DEPRECATED_NO_EXPORT VTKPVSERVERMANAGERDEFAULT_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPVSERVERMANAGERDEFAULT_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkPVServerManagerRenderingModule.h"

#endif
