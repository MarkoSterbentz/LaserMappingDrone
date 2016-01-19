
#ifndef VTKPVVTKEXTENSIONSCORE_EXPORT_H
#define VTKPVVTKEXTENSIONSCORE_EXPORT_H

#ifdef VTKPVVTKEXTENSIONSCORE_STATIC_DEFINE
#  define VTKPVVTKEXTENSIONSCORE_EXPORT
#  define VTKPVVTKEXTENSIONSCORE_NO_EXPORT
#else
#  ifndef VTKPVVTKEXTENSIONSCORE_EXPORT
#    ifdef vtkPVVTKExtensionsCore_EXPORTS
        /* We are building this library */
#      define VTKPVVTKEXTENSIONSCORE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPVVTKEXTENSIONSCORE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPVVTKEXTENSIONSCORE_NO_EXPORT
#    define VTKPVVTKEXTENSIONSCORE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPVVTKEXTENSIONSCORE_DEPRECATED
#  define VTKPVVTKEXTENSIONSCORE_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPVVTKEXTENSIONSCORE_DEPRECATED_EXPORT VTKPVVTKEXTENSIONSCORE_EXPORT __attribute__ ((__deprecated__))
#  define VTKPVVTKEXTENSIONSCORE_DEPRECATED_NO_EXPORT VTKPVVTKEXTENSIONSCORE_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPVVTKEXTENSIONSCORE_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkFiltersCoreModule.h"

#endif
