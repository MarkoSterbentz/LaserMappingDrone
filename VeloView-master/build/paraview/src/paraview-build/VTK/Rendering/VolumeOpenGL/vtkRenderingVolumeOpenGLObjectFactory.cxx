/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkRenderingVolumeOpenGLObjectFactory.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#include "vtkRenderingVolumeOpenGLObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.

#include "vtkOpenGLHAVSVolumeMapper.h"
#include "vtkOpenGLProjectedAAHexahedraMapper.h"
#include "vtkOpenGLProjectedTetrahedraMapper.h"
#include "vtkOpenGLRayCastImageDisplayHelper.h"
#include "vtkOpenGLVolumeTextureMapper2D.h"
#include "vtkOpenGLVolumeTextureMapper3D.h"
#include "vtkOpenGLGPUVolumeRayCastMapper.h"

vtkStandardNewMacro(vtkRenderingVolumeOpenGLObjectFactory)

// Now create the functions to create overrides with.

  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLHAVSVolumeMapper)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLProjectedAAHexahedraMapper)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLProjectedTetrahedraMapper)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLRayCastImageDisplayHelper)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLVolumeTextureMapper2D)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLVolumeTextureMapper3D)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLGPUVolumeRayCastMapper)

vtkRenderingVolumeOpenGLObjectFactory::vtkRenderingVolumeOpenGLObjectFactory()
{

    this->RegisterOverride("vtkHAVSVolumeMapper",
                           "vtkOpenGLHAVSVolumeMapper",
                           "Override for vtkRenderingVolumeOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLHAVSVolumeMapper);
    this->RegisterOverride("vtkProjectedAAHexahedraMapper",
                           "vtkOpenGLProjectedAAHexahedraMapper",
                           "Override for vtkRenderingVolumeOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLProjectedAAHexahedraMapper);
    this->RegisterOverride("vtkProjectedTetrahedraMapper",
                           "vtkOpenGLProjectedTetrahedraMapper",
                           "Override for vtkRenderingVolumeOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLProjectedTetrahedraMapper);
    this->RegisterOverride("vtkRayCastImageDisplayHelper",
                           "vtkOpenGLRayCastImageDisplayHelper",
                           "Override for vtkRenderingVolumeOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLRayCastImageDisplayHelper);
    this->RegisterOverride("vtkVolumeTextureMapper2D",
                           "vtkOpenGLVolumeTextureMapper2D",
                           "Override for vtkRenderingVolumeOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLVolumeTextureMapper2D);
    this->RegisterOverride("vtkVolumeTextureMapper3D",
                           "vtkOpenGLVolumeTextureMapper3D",
                           "Override for vtkRenderingVolumeOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLVolumeTextureMapper3D);
    this->RegisterOverride("vtkGPUVolumeRayCastMapper",
                           "vtkOpenGLGPUVolumeRayCastMapper",
                           "Override for vtkRenderingVolumeOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLGPUVolumeRayCastMapper);
}

const char * vtkRenderingVolumeOpenGLObjectFactory::GetVTKSourceVersion()
{
  return VTK_SOURCE_VERSION;
}

void vtkRenderingVolumeOpenGLObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkRenderingVolumeOpenGLCount;

VTKRENDERINGVOLUMEOPENGL_EXPORT void vtkRenderingVolumeOpenGL_AutoInit_Construct()
{
  if(++vtkRenderingVolumeOpenGLCount == 1)
    {
    vtkRenderingVolumeOpenGLObjectFactory* factory = vtkRenderingVolumeOpenGLObjectFactory::New();
    if (factory)
      {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
      }
    }
}

VTKRENDERINGVOLUMEOPENGL_EXPORT void vtkRenderingVolumeOpenGL_AutoInit_Destruct()
{
  if(--vtkRenderingVolumeOpenGLCount == 0)
    {
    // Do not call vtkObjectFactory::UnRegisterFactory because
    // vtkObjectFactory.cxx statically unregisters all factories.
    }
}
