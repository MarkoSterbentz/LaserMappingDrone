
#ifndef VTKIOPARALLELEXODUS_EXPORT_H
#define VTKIOPARALLELEXODUS_EXPORT_H

#ifdef VTKIOPARALLELEXODUS_STATIC_DEFINE
#  define VTKIOPARALLELEXODUS_EXPORT
#  define VTKIOPARALLELEXODUS_NO_EXPORT
#else
#  ifndef VTKIOPARALLELEXODUS_EXPORT
#    ifdef vtkIOParallelExodus_EXPORTS
        /* We are building this library */
#      define VTKIOPARALLELEXODUS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKIOPARALLELEXODUS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKIOPARALLELEXODUS_NO_EXPORT
#    define VTKIOPARALLELEXODUS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKIOPARALLELEXODUS_DEPRECATED
#  define VTKIOPARALLELEXODUS_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKIOPARALLELEXODUS_DEPRECATED_EXPORT VTKIOPARALLELEXODUS_EXPORT __attribute__ ((__deprecated__))
#  define VTKIOPARALLELEXODUS_DEPRECATED_NO_EXPORT VTKIOPARALLELEXODUS_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKIOPARALLELEXODUS_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkIOExodusModule.h"
#include "vtkIOExodusModule.h"

/* AutoInit implementations.  */
#if defined(vtkIOParallelExodus_INCLUDE)
# include vtkIOParallelExodus_INCLUDE
#endif
#if defined(vtkIOParallelExodus_AUTOINIT)
# include "vtkAutoInit.h"
VTK_AUTOINIT(vtkIOParallelExodus)
#endif

#endif
