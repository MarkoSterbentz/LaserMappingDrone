
#ifndef VTKTESTINGRENDERING_EXPORT_H
#define VTKTESTINGRENDERING_EXPORT_H

#ifdef VTKTESTINGRENDERING_STATIC_DEFINE
#  define VTKTESTINGRENDERING_EXPORT
#  define VTKTESTINGRENDERING_NO_EXPORT
#else
#  ifndef VTKTESTINGRENDERING_EXPORT
#    ifdef vtkTestingRendering_EXPORTS
        /* We are building this library */
#      define VTKTESTINGRENDERING_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKTESTINGRENDERING_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKTESTINGRENDERING_NO_EXPORT
#    define VTKTESTINGRENDERING_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKTESTINGRENDERING_DEPRECATED
#  define VTKTESTINGRENDERING_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKTESTINGRENDERING_DEPRECATED_EXPORT VTKTESTINGRENDERING_EXPORT __attribute__ ((__deprecated__))
#  define VTKTESTINGRENDERING_DEPRECATED_NO_EXPORT VTKTESTINGRENDERING_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKTESTINGRENDERING_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkRenderingCoreModule.h"

#endif
