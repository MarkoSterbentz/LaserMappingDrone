/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkRenderingOpenGLObjectFactory.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#include "vtkRenderingOpenGLObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.

#include "vtkPainterPolyDataMapper.h"
#include "vtkXRenderWindowInteractor.h"
#include "vtkXOpenGLRenderWindow.h"
#include "vtkDummyGPUInfoList.h"
#include "vtkOpenGLActor.h"
#include "vtkOpenGLCamera.h"
#include "vtkOpenGLClipPlanesPainter.h"
#include "vtkOpenGLCoincidentTopologyResolutionPainter.h"
#include "vtkOpenGLCompositePainter.h"
#include "vtkOpenGLDisplayListPainter.h"
#include "vtkOpenGLGlyph3DMapper.h"
#include "vtkOpenGLHardwareSelector.h"
#include "vtkOpenGLImageSliceMapper.h"
#include "vtkOpenGLLabeledContourMapper.h"
#include "vtkOpenGLLight.h"
#include "vtkOpenGLLightingPainter.h"
#include "vtkOpenGLPainterDeviceAdapter.h"
#include "vtkOpenGLProperty.h"
#include "vtkOpenGLRenderer.h"
#include "vtkOpenGLRepresentationPainter.h"
#include "vtkOpenGLScalarsToColorsPainter.h"
#include "vtkOpenGLTexture.h"
#include "vtkOpenGLImageMapper.h"
#include "vtkOpenGLPolyDataMapper2D.h"

vtkStandardNewMacro(vtkRenderingOpenGLObjectFactory)

// Now create the functions to create overrides with.

  VTK_CREATE_CREATE_FUNCTION(vtkPainterPolyDataMapper)
  VTK_CREATE_CREATE_FUNCTION(vtkXRenderWindowInteractor)
  VTK_CREATE_CREATE_FUNCTION(vtkXOpenGLRenderWindow)
  VTK_CREATE_CREATE_FUNCTION(vtkDummyGPUInfoList)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLActor)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLCamera)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLClipPlanesPainter)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLCoincidentTopologyResolutionPainter)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLCompositePainter)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLDisplayListPainter)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLGlyph3DMapper)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLHardwareSelector)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLImageSliceMapper)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLLabeledContourMapper)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLLight)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLLightingPainter)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLPainterDeviceAdapter)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLProperty)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLRenderer)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLRepresentationPainter)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLScalarsToColorsPainter)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLTexture)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLImageMapper)
  VTK_CREATE_CREATE_FUNCTION(vtkOpenGLPolyDataMapper2D)

vtkRenderingOpenGLObjectFactory::vtkRenderingOpenGLObjectFactory()
{

    this->RegisterOverride("vtkPolyDataMapper",
                           "vtkPainterPolyDataMapper",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkPainterPolyDataMapper);
    this->RegisterOverride("vtkRenderWindowInteractor",
                           "vtkXRenderWindowInteractor",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkXRenderWindowInteractor);
    this->RegisterOverride("vtkRenderWindow",
                           "vtkXOpenGLRenderWindow",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkXOpenGLRenderWindow);
    this->RegisterOverride("vtkGPUInfoList",
                           "vtkDummyGPUInfoList",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkDummyGPUInfoList);
    this->RegisterOverride("vtkActor",
                           "vtkOpenGLActor",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLActor);
    this->RegisterOverride("vtkCamera",
                           "vtkOpenGLCamera",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLCamera);
    this->RegisterOverride("vtkClipPlanesPainter",
                           "vtkOpenGLClipPlanesPainter",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLClipPlanesPainter);
    this->RegisterOverride("vtkCoincidentTopologyResolutionPainter",
                           "vtkOpenGLCoincidentTopologyResolutionPainter",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLCoincidentTopologyResolutionPainter);
    this->RegisterOverride("vtkCompositePainter",
                           "vtkOpenGLCompositePainter",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLCompositePainter);
    this->RegisterOverride("vtkDisplayListPainter",
                           "vtkOpenGLDisplayListPainter",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLDisplayListPainter);
    this->RegisterOverride("vtkGlyph3DMapper",
                           "vtkOpenGLGlyph3DMapper",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLGlyph3DMapper);
    this->RegisterOverride("vtkHardwareSelector",
                           "vtkOpenGLHardwareSelector",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLHardwareSelector);
    this->RegisterOverride("vtkImageSliceMapper",
                           "vtkOpenGLImageSliceMapper",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLImageSliceMapper);
    this->RegisterOverride("vtkLabeledContourMapper",
                           "vtkOpenGLLabeledContourMapper",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLLabeledContourMapper);
    this->RegisterOverride("vtkLight",
                           "vtkOpenGLLight",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLLight);
    this->RegisterOverride("vtkLightingPainter",
                           "vtkOpenGLLightingPainter",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLLightingPainter);
    this->RegisterOverride("vtkPainterDeviceAdapter",
                           "vtkOpenGLPainterDeviceAdapter",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLPainterDeviceAdapter);
    this->RegisterOverride("vtkProperty",
                           "vtkOpenGLProperty",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLProperty);
    this->RegisterOverride("vtkRenderer",
                           "vtkOpenGLRenderer",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLRenderer);
    this->RegisterOverride("vtkRepresentationPainter",
                           "vtkOpenGLRepresentationPainter",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLRepresentationPainter);
    this->RegisterOverride("vtkScalarsToColorsPainter",
                           "vtkOpenGLScalarsToColorsPainter",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLScalarsToColorsPainter);
    this->RegisterOverride("vtkTexture",
                           "vtkOpenGLTexture",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLTexture);
    this->RegisterOverride("vtkImageMapper",
                           "vtkOpenGLImageMapper",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLImageMapper);
    this->RegisterOverride("vtkPolyDataMapper2D",
                           "vtkOpenGLPolyDataMapper2D",
                           "Override for vtkRenderingOpenGL module", 1,
                           vtkObjectFactoryCreatevtkOpenGLPolyDataMapper2D);
}

const char * vtkRenderingOpenGLObjectFactory::GetVTKSourceVersion()
{
  return VTK_SOURCE_VERSION;
}

void vtkRenderingOpenGLObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkRenderingOpenGLCount;

VTKRENDERINGOPENGL_EXPORT void vtkRenderingOpenGL_AutoInit_Construct()
{
  if(++vtkRenderingOpenGLCount == 1)
    {
    vtkRenderingOpenGLObjectFactory* factory = vtkRenderingOpenGLObjectFactory::New();
    if (factory)
      {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
      }
    }
}

VTKRENDERINGOPENGL_EXPORT void vtkRenderingOpenGL_AutoInit_Destruct()
{
  if(--vtkRenderingOpenGLCount == 0)
    {
    // Do not call vtkObjectFactory::UnRegisterFactory because
    // vtkObjectFactory.cxx statically unregisters all factories.
    }
}
