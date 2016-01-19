
#ifndef PQPYTHON_EXPORT_H
#define PQPYTHON_EXPORT_H

#ifdef PQPYTHON_STATIC_DEFINE
#  define PQPYTHON_EXPORT
#  define PQPYTHON_NO_EXPORT
#else
#  ifndef PQPYTHON_EXPORT
#    ifdef pqPython_EXPORTS
        /* We are building this library */
#      define PQPYTHON_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define PQPYTHON_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef PQPYTHON_NO_EXPORT
#    define PQPYTHON_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef PQPYTHON_DEPRECATED
#  define PQPYTHON_DEPRECATED __attribute__ ((__deprecated__))
#  define PQPYTHON_DEPRECATED_EXPORT PQPYTHON_EXPORT __attribute__ ((__deprecated__))
#  define PQPYTHON_DEPRECATED_NO_EXPORT PQPYTHON_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define PQPYTHON_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "pqCoreModule.h"

#endif
