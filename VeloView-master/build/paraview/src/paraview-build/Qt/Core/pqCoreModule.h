
#ifndef PQCORE_EXPORT_H
#define PQCORE_EXPORT_H

#ifdef PQCORE_STATIC_DEFINE
#  define PQCORE_EXPORT
#  define PQCORE_NO_EXPORT
#else
#  ifndef PQCORE_EXPORT
#    ifdef pqCore_EXPORTS
        /* We are building this library */
#      define PQCORE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define PQCORE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef PQCORE_NO_EXPORT
#    define PQCORE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef PQCORE_DEPRECATED
#  define PQCORE_DEPRECATED __attribute__ ((__deprecated__))
#  define PQCORE_DEPRECATED_EXPORT PQCORE_EXPORT __attribute__ ((__deprecated__))
#  define PQCORE_DEPRECATED_NO_EXPORT PQCORE_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define PQCORE_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "pqWidgetsModule.h"
#include "vtkGUISupportQtModule.h"

#endif
