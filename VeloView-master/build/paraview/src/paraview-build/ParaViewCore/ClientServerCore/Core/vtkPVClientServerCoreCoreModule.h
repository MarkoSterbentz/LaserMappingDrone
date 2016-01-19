
#ifndef VTKPVCLIENTSERVERCORECORE_EXPORT_H
#define VTKPVCLIENTSERVERCORECORE_EXPORT_H

#ifdef VTKPVCLIENTSERVERCORECORE_STATIC_DEFINE
#  define VTKPVCLIENTSERVERCORECORE_EXPORT
#  define VTKPVCLIENTSERVERCORECORE_NO_EXPORT
#else
#  ifndef VTKPVCLIENTSERVERCORECORE_EXPORT
#    ifdef vtkPVClientServerCoreCore_EXPORTS
        /* We are building this library */
#      define VTKPVCLIENTSERVERCORECORE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPVCLIENTSERVERCORECORE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPVCLIENTSERVERCORECORE_NO_EXPORT
#    define VTKPVCLIENTSERVERCORECORE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPVCLIENTSERVERCORECORE_DEPRECATED
#  define VTKPVCLIENTSERVERCORECORE_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPVCLIENTSERVERCORECORE_DEPRECATED_EXPORT VTKPVCLIENTSERVERCORECORE_EXPORT __attribute__ ((__deprecated__))
#  define VTKPVCLIENTSERVERCORECORE_DEPRECATED_NO_EXPORT VTKPVCLIENTSERVERCORECORE_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPVCLIENTSERVERCORECORE_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkFiltersExtractionModule.h"
#include "vtkFiltersParallelModule.h"
#include "vtkPVVTKExtensionsCoreModule.h"

#endif
