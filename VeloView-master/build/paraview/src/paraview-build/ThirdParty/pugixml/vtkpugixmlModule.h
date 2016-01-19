
#ifndef VTKPUGIXML_EXPORT_H
#define VTKPUGIXML_EXPORT_H

#ifdef VTKPUGIXML_STATIC_DEFINE
#  define VTKPUGIXML_EXPORT
#  define VTKPUGIXML_NO_EXPORT
#else
#  ifndef VTKPUGIXML_EXPORT
#    ifdef vtkpugixml_EXPORTS
        /* We are building this library */
#      define VTKPUGIXML_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPUGIXML_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPUGIXML_NO_EXPORT
#    define VTKPUGIXML_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPUGIXML_DEPRECATED
#  define VTKPUGIXML_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPUGIXML_DEPRECATED_EXPORT VTKPUGIXML_EXPORT __attribute__ ((__deprecated__))
#  define VTKPUGIXML_DEPRECATED_NO_EXPORT VTKPUGIXML_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPUGIXML_NO_DEPRECATED
#endif



#endif
