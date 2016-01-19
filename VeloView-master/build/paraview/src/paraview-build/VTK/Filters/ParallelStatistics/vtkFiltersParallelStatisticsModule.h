
#ifndef VTKFILTERSPARALLELSTATISTICS_EXPORT_H
#define VTKFILTERSPARALLELSTATISTICS_EXPORT_H

#ifdef VTKFILTERSPARALLELSTATISTICS_STATIC_DEFINE
#  define VTKFILTERSPARALLELSTATISTICS_EXPORT
#  define VTKFILTERSPARALLELSTATISTICS_NO_EXPORT
#else
#  ifndef VTKFILTERSPARALLELSTATISTICS_EXPORT
#    ifdef vtkFiltersParallelStatistics_EXPORTS
        /* We are building this library */
#      define VTKFILTERSPARALLELSTATISTICS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKFILTERSPARALLELSTATISTICS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKFILTERSPARALLELSTATISTICS_NO_EXPORT
#    define VTKFILTERSPARALLELSTATISTICS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKFILTERSPARALLELSTATISTICS_DEPRECATED
#  define VTKFILTERSPARALLELSTATISTICS_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKFILTERSPARALLELSTATISTICS_DEPRECATED_EXPORT VTKFILTERSPARALLELSTATISTICS_EXPORT __attribute__ ((__deprecated__))
#  define VTKFILTERSPARALLELSTATISTICS_DEPRECATED_NO_EXPORT VTKFILTERSPARALLELSTATISTICS_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKFILTERSPARALLELSTATISTICS_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkFiltersStatisticsModule.h"

#endif
