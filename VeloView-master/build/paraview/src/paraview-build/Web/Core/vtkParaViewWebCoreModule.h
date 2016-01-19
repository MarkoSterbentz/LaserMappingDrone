
#ifndef VTKPARAVIEWWEBCORE_EXPORT_H
#define VTKPARAVIEWWEBCORE_EXPORT_H

#ifdef VTKPARAVIEWWEBCORE_STATIC_DEFINE
#  define VTKPARAVIEWWEBCORE_EXPORT
#  define VTKPARAVIEWWEBCORE_NO_EXPORT
#else
#  ifndef VTKPARAVIEWWEBCORE_EXPORT
#    ifdef vtkParaViewWebCore_EXPORTS
        /* We are building this library */
#      define VTKPARAVIEWWEBCORE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPARAVIEWWEBCORE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPARAVIEWWEBCORE_NO_EXPORT
#    define VTKPARAVIEWWEBCORE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPARAVIEWWEBCORE_DEPRECATED
#  define VTKPARAVIEWWEBCORE_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPARAVIEWWEBCORE_DEPRECATED_EXPORT VTKPARAVIEWWEBCORE_EXPORT __attribute__ ((__deprecated__))
#  define VTKPARAVIEWWEBCORE_DEPRECATED_NO_EXPORT VTKPARAVIEWWEBCORE_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPARAVIEWWEBCORE_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkPVServerManagerDefaultModule.h"
#include "vtkWebGLExporterModule.h"

#endif
