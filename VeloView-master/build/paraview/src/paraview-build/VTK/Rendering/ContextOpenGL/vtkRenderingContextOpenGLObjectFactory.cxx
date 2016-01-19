/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkRenderingContextOpenGLObjectFactory.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#include "vtkRenderingContextOpenGLObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.

#include "vtkOpenGLContextActor.h"
#include "vtkOpenGLContextDevice2D.h"
#include "vtkOpenGLContextDevice3D.h"
#include "vtkOpenGLContextBufferId.h"

vtkStandardNewMacro(vtkRenderingContextOpenGLObjectFactory)

// Now create the functions to create overrides with.

  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLContextActor)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLContextDevice2D)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLContextDevice3D)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLContextBufferId)

vtkRenderingContextOpenGLObjectFactory::vtkRenderingContextOpenGLObjectFactory()
{

    this->RegisterOverride("vtkContextActor",
                           "vtkOpenGLContextActor",
                           "Override for vtkRenderingContextOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLContextActor);
    this->RegisterOverride("vtkContextDevice2D",
                           "vtkOpenGLContextDevice2D",
                           "Override for vtkRenderingContextOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLContextDevice2D);
    this->RegisterOverride("vtkContextDevice3D",
                           "vtkOpenGLContextDevice3D",
                           "Override for vtkRenderingContextOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLContextDevice3D);
    this->RegisterOverride("vtkAbstractContextBufferId",
                           "vtkOpenGLContextBufferId",
                           "Override for vtkRenderingContextOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLContextBufferId);
}

const char * vtkRenderingContextOpenGLObjectFactory::GetVTKSourceVersion()
{
  return VTK_SOURCE_VERSION;
}

void vtkRenderingContextOpenGLObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkRenderingContextOpenGLCount;

VTKRENDERINGCONTEXTOPENGL_EXPORT void vtkRenderingContextOpenGL_AutoInit_Construct()
{
  if(++vtkRenderingContextOpenGLCount == 1)
    {
    vtkRenderingContextOpenGLObjectFactory* factory = vtkRenderingContextOpenGLObjectFactory::New();
    if (factory)
      {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
      }
    }
}

VTKRENDERINGCONTEXTOPENGL_EXPORT void vtkRenderingContextOpenGL_AutoInit_Destruct()
{
  if(--vtkRenderingContextOpenGLCount == 0)
    {
    // Do not call vtkObjectFactory::UnRegisterFactory because
    // vtkObjectFactory.cxx statically unregisters all factories.
    }
}
