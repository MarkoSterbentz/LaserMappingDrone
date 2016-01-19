
#ifndef VTKPVANIMATION_EXPORT_H
#define VTKPVANIMATION_EXPORT_H

#ifdef VTKPVANIMATION_STATIC_DEFINE
#  define VTKPVANIMATION_EXPORT
#  define VTKPVANIMATION_NO_EXPORT
#else
#  ifndef VTKPVANIMATION_EXPORT
#    ifdef vtkPVAnimation_EXPORTS
        /* We are building this library */
#      define VTKPVANIMATION_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPVANIMATION_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPVANIMATION_NO_EXPORT
#    define VTKPVANIMATION_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPVANIMATION_DEPRECATED
#  define VTKPVANIMATION_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPVANIMATION_DEPRECATED_EXPORT VTKPVANIMATION_EXPORT __attribute__ ((__deprecated__))
#  define VTKPVANIMATION_DEPRECATED_NO_EXPORT VTKPVANIMATION_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPVANIMATION_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkPVServerManagerCoreModule.h"
#include "vtkPVVTKExtensionsDefaultModule.h"

#endif
