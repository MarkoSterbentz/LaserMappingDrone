
#ifndef VTKPVCOMMON_EXPORT_H
#define VTKPVCOMMON_EXPORT_H

#ifdef VTKPVCOMMON_STATIC_DEFINE
#  define VTKPVCOMMON_EXPORT
#  define VTKPVCOMMON_NO_EXPORT
#else
#  ifndef VTKPVCOMMON_EXPORT
#    ifdef vtkPVCommon_EXPORTS
        /* We are building this library */
#      define VTKPVCOMMON_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPVCOMMON_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPVCOMMON_NO_EXPORT
#    define VTKPVCOMMON_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPVCOMMON_DEPRECATED
#  define VTKPVCOMMON_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPVCOMMON_DEPRECATED_EXPORT VTKPVCOMMON_EXPORT __attribute__ ((__deprecated__))
#  define VTKPVCOMMON_DEPRECATED_NO_EXPORT VTKPVCOMMON_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPVCOMMON_NO_DEPRECATED
#endif



#endif
