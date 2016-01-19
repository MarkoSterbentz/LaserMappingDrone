
#ifndef PQWIDGETS_EXPORT_H
#define PQWIDGETS_EXPORT_H

#ifdef PQWIDGETS_STATIC_DEFINE
#  define PQWIDGETS_EXPORT
#  define PQWIDGETS_NO_EXPORT
#else
#  ifndef PQWIDGETS_EXPORT
#    ifdef pqWidgets_EXPORTS
        /* We are building this library */
#      define PQWIDGETS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define PQWIDGETS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef PQWIDGETS_NO_EXPORT
#    define PQWIDGETS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef PQWIDGETS_DEPRECATED
#  define PQWIDGETS_DEPRECATED __attribute__ ((__deprecated__))
#  define PQWIDGETS_DEPRECATED_EXPORT PQWIDGETS_EXPORT __attribute__ ((__deprecated__))
#  define PQWIDGETS_DEPRECATED_NO_EXPORT PQWIDGETS_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define PQWIDGETS_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkGUISupportQtModule.h"
#include "vtkPVServerManagerCoreModule.h"

#endif
