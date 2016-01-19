
#ifndef VTKPVCLIENTSERVERCOREDEFAULT_EXPORT_H
#define VTKPVCLIENTSERVERCOREDEFAULT_EXPORT_H

#ifdef VTKPVCLIENTSERVERCOREDEFAULT_STATIC_DEFINE
#  define VTKPVCLIENTSERVERCOREDEFAULT_EXPORT
#  define VTKPVCLIENTSERVERCOREDEFAULT_NO_EXPORT
#else
#  ifndef VTKPVCLIENTSERVERCOREDEFAULT_EXPORT
#    ifdef vtkPVClientServerCoreDefault_EXPORTS
        /* We are building this library */
#      define VTKPVCLIENTSERVERCOREDEFAULT_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPVCLIENTSERVERCOREDEFAULT_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPVCLIENTSERVERCOREDEFAULT_NO_EXPORT
#    define VTKPVCLIENTSERVERCOREDEFAULT_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPVCLIENTSERVERCOREDEFAULT_DEPRECATED
#  define VTKPVCLIENTSERVERCOREDEFAULT_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPVCLIENTSERVERCOREDEFAULT_DEPRECATED_EXPORT VTKPVCLIENTSERVERCOREDEFAULT_EXPORT __attribute__ ((__deprecated__))
#  define VTKPVCLIENTSERVERCOREDEFAULT_DEPRECATED_NO_EXPORT VTKPVCLIENTSERVERCOREDEFAULT_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPVCLIENTSERVERCOREDEFAULT_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkPVClientServerCoreRenderingModule.h"
#include "vtkPVVTKExtensionsDefaultModule.h"

#endif
