
#ifndef VTKCLIENTSERVER_EXPORT_H
#define VTKCLIENTSERVER_EXPORT_H

#ifdef VTKCLIENTSERVER_STATIC_DEFINE
#  define VTKCLIENTSERVER_EXPORT
#  define VTKCLIENTSERVER_NO_EXPORT
#else
#  ifndef VTKCLIENTSERVER_EXPORT
#    ifdef vtkClientServer_EXPORTS
        /* We are building this library */
#      define VTKCLIENTSERVER_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKCLIENTSERVER_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKCLIENTSERVER_NO_EXPORT
#    define VTKCLIENTSERVER_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKCLIENTSERVER_DEPRECATED
#  define VTKCLIENTSERVER_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKCLIENTSERVER_DEPRECATED_EXPORT VTKCLIENTSERVER_EXPORT __attribute__ ((__deprecated__))
#  define VTKCLIENTSERVER_DEPRECATED_NO_EXPORT VTKCLIENTSERVER_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKCLIENTSERVER_NO_DEPRECATED
#endif



#endif
