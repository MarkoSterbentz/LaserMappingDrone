/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkRenderingFreeTypeOpenGLObjectFactory.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#include "vtkRenderingFreeTypeOpenGLObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.

#include "vtkOpenGLFreeTypeTextMapper.h"

vtkStandardNewMacro(vtkRenderingFreeTypeOpenGLObjectFactory)

// Now create the functions to create overrides with.

  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLFreeTypeTextMapper)

vtkRenderingFreeTypeOpenGLObjectFactory::vtkRenderingFreeTypeOpenGLObjectFactory()
{

    this->RegisterOverride("vtkTextMapper",
                           "vtkOpenGLFreeTypeTextMapper",
                           "Override for vtkRenderingFreeTypeOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLFreeTypeTextMapper);
}

const char * vtkRenderingFreeTypeOpenGLObjectFactory::GetVTKSourceVersion()
{
  return VTK_SOURCE_VERSION;
}

void vtkRenderingFreeTypeOpenGLObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkRenderingFreeTypeOpenGLCount;

VTKRENDERINGFREETYPEOPENGL_EXPORT void vtkRenderingFreeTypeOpenGL_AutoInit_Construct()
{
  if(++vtkRenderingFreeTypeOpenGLCount == 1)
    {
    vtkRenderingFreeTypeOpenGLObjectFactory* factory = vtkRenderingFreeTypeOpenGLObjectFactory::New();
    if (factory)
      {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
      }
    }
}

VTKRENDERINGFREETYPEOPENGL_EXPORT void vtkRenderingFreeTypeOpenGL_AutoInit_Destruct()
{
  if(--vtkRenderingFreeTypeOpenGLCount == 0)
    {
    // Do not call vtkObjectFactory::UnRegisterFactory because
    // vtkObjectFactory.cxx statically unregisters all factories.
    }
}
