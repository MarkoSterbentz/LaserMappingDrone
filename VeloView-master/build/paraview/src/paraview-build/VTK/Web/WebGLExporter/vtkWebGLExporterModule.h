
#ifndef VTKWEBGLEXPORTER_EXPORT_H
#define VTKWEBGLEXPORTER_EXPORT_H

#ifdef VTKWEBGLEXPORTER_STATIC_DEFINE
#  define VTKWEBGLEXPORTER_EXPORT
#  define VTKWEBGLEXPORTER_NO_EXPORT
#else
#  ifndef VTKWEBGLEXPORTER_EXPORT
#    ifdef vtkWebGLExporter_EXPORTS
        /* We are building this library */
#      define VTKWEBGLEXPORTER_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKWEBGLEXPORTER_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKWEBGLEXPORTER_NO_EXPORT
#    define VTKWEBGLEXPORTER_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKWEBGLEXPORTER_DEPRECATED
#  define VTKWEBGLEXPORTER_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKWEBGLEXPORTER_DEPRECATED_EXPORT VTKWEBGLEXPORTER_EXPORT __attribute__ ((__deprecated__))
#  define VTKWEBGLEXPORTER_DEPRECATED_NO_EXPORT VTKWEBGLEXPORTER_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKWEBGLEXPORTER_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkIOExportModule.h"

#endif
