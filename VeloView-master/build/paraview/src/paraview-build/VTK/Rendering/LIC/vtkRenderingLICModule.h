
#ifndef VTKRENDERINGLIC_EXPORT_H
#define VTKRENDERINGLIC_EXPORT_H

#ifdef VTKRENDERINGLIC_STATIC_DEFINE
#  define VTKRENDERINGLIC_EXPORT
#  define VTKRENDERINGLIC_NO_EXPORT
#else
#  ifndef VTKRENDERINGLIC_EXPORT
#    ifdef vtkRenderingLIC_EXPORTS
        /* We are building this library */
#      define VTKRENDERINGLIC_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKRENDERINGLIC_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKRENDERINGLIC_NO_EXPORT
#    define VTKRENDERINGLIC_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKRENDERINGLIC_DEPRECATED
#  define VTKRENDERINGLIC_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKRENDERINGLIC_DEPRECATED_EXPORT VTKRENDERINGLIC_EXPORT __attribute__ ((__deprecated__))
#  define VTKRENDERINGLIC_DEPRECATED_NO_EXPORT VTKRENDERINGLIC_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKRENDERINGLIC_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkIOXMLModule.h"
#include "vtkRenderingOpenGLModule.h"

/* AutoInit implementations.  */
#if defined(vtkRenderingLIC_INCLUDE)
# include vtkRenderingLIC_INCLUDE
#endif
#if defined(vtkRenderingLIC_AUTOINIT)
# include "vtkAutoInit.h"
VTK_AUTOINIT(vtkRenderingLIC)
#endif

#endif
