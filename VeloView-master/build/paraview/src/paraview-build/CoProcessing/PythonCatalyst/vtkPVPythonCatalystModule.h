
#ifndef VTKPVPYTHONCATALYST_EXPORT_H
#define VTKPVPYTHONCATALYST_EXPORT_H

#ifdef VTKPVPYTHONCATALYST_STATIC_DEFINE
#  define VTKPVPYTHONCATALYST_EXPORT
#  define VTKPVPYTHONCATALYST_NO_EXPORT
#else
#  ifndef VTKPVPYTHONCATALYST_EXPORT
#    ifdef vtkPVPythonCatalyst_EXPORTS
        /* We are building this library */
#      define VTKPVPYTHONCATALYST_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPVPYTHONCATALYST_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPVPYTHONCATALYST_NO_EXPORT
#    define VTKPVPYTHONCATALYST_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPVPYTHONCATALYST_DEPRECATED
#  define VTKPVPYTHONCATALYST_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPVPYTHONCATALYST_DEPRECATED_EXPORT VTKPVPYTHONCATALYST_EXPORT __attribute__ ((__deprecated__))
#  define VTKPVPYTHONCATALYST_DEPRECATED_NO_EXPORT VTKPVPYTHONCATALYST_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPVPYTHONCATALYST_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkPVCatalystModule.h"

#endif
