
#ifndef VTKPVCLIENTSERVERCORERENDERING_EXPORT_H
#define VTKPVCLIENTSERVERCORERENDERING_EXPORT_H

#ifdef VTKPVCLIENTSERVERCORERENDERING_STATIC_DEFINE
#  define VTKPVCLIENTSERVERCORERENDERING_EXPORT
#  define VTKPVCLIENTSERVERCORERENDERING_NO_EXPORT
#else
#  ifndef VTKPVCLIENTSERVERCORERENDERING_EXPORT
#    ifdef vtkPVClientServerCoreRendering_EXPORTS
        /* We are building this library */
#      define VTKPVCLIENTSERVERCORERENDERING_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPVCLIENTSERVERCORERENDERING_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPVCLIENTSERVERCORERENDERING_NO_EXPORT
#    define VTKPVCLIENTSERVERCORERENDERING_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPVCLIENTSERVERCORERENDERING_DEPRECATED
#  define VTKPVCLIENTSERVERCORERENDERING_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPVCLIENTSERVERCORERENDERING_DEPRECATED_EXPORT VTKPVCLIENTSERVERCORERENDERING_EXPORT __attribute__ ((__deprecated__))
#  define VTKPVCLIENTSERVERCORERENDERING_DEPRECATED_NO_EXPORT VTKPVCLIENTSERVERCORERENDERING_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPVCLIENTSERVERCORERENDERING_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkDomainsChemistryModule.h"
#include "vtkFiltersAMRModule.h"
#include "vtkPVClientServerCoreCoreModule.h"
#include "vtkPVVTKExtensionsDefaultModule.h"
#include "vtkPVVTKExtensionsRenderingModule.h"
#include "vtkRenderingLabelModule.h"
#include "vtkRenderingVolumeAMRModule.h"
#include "vtkRenderingVolumeOpenGLModule.h"
#include "vtkViewsContext2DModule.h"
#include "vtkViewsCoreModule.h"
#include "vtkWebGLExporterModule.h"

#endif
