
#ifndef VTKIOVPIC_EXPORT_H
#define VTKIOVPIC_EXPORT_H

#ifdef VTKIOVPIC_STATIC_DEFINE
#  define VTKIOVPIC_EXPORT
#  define VTKIOVPIC_NO_EXPORT
#else
#  ifndef VTKIOVPIC_EXPORT
#    ifdef vtkIOVPIC_EXPORTS
        /* We are building this library */
#      define VTKIOVPIC_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKIOVPIC_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKIOVPIC_NO_EXPORT
#    define VTKIOVPIC_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKIOVPIC_DEPRECATED
#  define VTKIOVPIC_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKIOVPIC_DEPRECATED_EXPORT VTKIOVPIC_EXPORT __attribute__ ((__deprecated__))
#  define VTKIOVPIC_DEPRECATED_NO_EXPORT VTKIOVPIC_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKIOVPIC_NO_DEPRECATED
#endif



#endif
