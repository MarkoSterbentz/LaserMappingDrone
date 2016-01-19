
#ifndef VTKPVVTKEXTENSIONSDEFAULT_EXPORT_H
#define VTKPVVTKEXTENSIONSDEFAULT_EXPORT_H

#ifdef VTKPVVTKEXTENSIONSDEFAULT_STATIC_DEFINE
#  define VTKPVVTKEXTENSIONSDEFAULT_EXPORT
#  define VTKPVVTKEXTENSIONSDEFAULT_NO_EXPORT
#else
#  ifndef VTKPVVTKEXTENSIONSDEFAULT_EXPORT
#    ifdef vtkPVVTKExtensionsDefault_EXPORTS
        /* We are building this library */
#      define VTKPVVTKEXTENSIONSDEFAULT_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPVVTKEXTENSIONSDEFAULT_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPVVTKEXTENSIONSDEFAULT_NO_EXPORT
#    define VTKPVVTKEXTENSIONSDEFAULT_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPVVTKEXTENSIONSDEFAULT_DEPRECATED
#  define VTKPVVTKEXTENSIONSDEFAULT_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPVVTKEXTENSIONSDEFAULT_DEPRECATED_EXPORT VTKPVVTKEXTENSIONSDEFAULT_EXPORT __attribute__ ((__deprecated__))
#  define VTKPVVTKEXTENSIONSDEFAULT_DEPRECATED_NO_EXPORT VTKPVVTKEXTENSIONSDEFAULT_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPVVTKEXTENSIONSDEFAULT_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkFiltersAMRModule.h"
#include "vtkFiltersParallelStatisticsModule.h"
#include "vtkIOImportModule.h"
#include "vtkIOParallelModule.h"
#include "vtkIOParallelExodusModule.h"
#include "vtkIOParallelXMLModule.h"
#include "vtkInteractionWidgetsModule.h"
#include "vtkPVVTKExtensionsCoreModule.h"
#include "vtkPVVTKExtensionsRenderingModule.h"

#endif
