/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkPVServerManagerRenderingObjectFactory.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#include "vtkPVServerManagerRenderingObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.

#include "vtkSMParaViewPipelineControllerWithRendering.h"

vtkStandardNewMacro(vtkPVServerManagerRenderingObjectFactory)

// Now create the functions to create overrides with.

VTK_CREATE_CREATE_FUNCTION(vtkSMParaViewPipelineControllerWithRendering)

vtkPVServerManagerRenderingObjectFactory::vtkPVServerManagerRenderingObjectFactory()
{

  this->RegisterOverride("vtkSMParaViewPipelineController",
                         "vtkSMParaViewPipelineControllerWithRendering",
                         "Override for vtkPVServerManagerRendering module", 1,
                         vtkObjectFactoryCreatevtkSMParaViewPipelineControllerWithRendering);
}

const char * vtkPVServerManagerRenderingObjectFactory::GetVTKSourceVersion()
{
  return VTK_SOURCE_VERSION;
}

void vtkPVServerManagerRenderingObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkPVServerManagerRenderingCount;

VTKPVSERVERMANAGERRENDERING_EXPORT void vtkPVServerManagerRendering_AutoInit_Construct()
{
  if(++vtkPVServerManagerRenderingCount == 1)
    {
    vtkPVServerManagerRenderingObjectFactory* factory = vtkPVServerManagerRenderingObjectFactory::New();
    if (factory)
      {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
      }
    }
}

VTKPVSERVERMANAGERRENDERING_EXPORT void vtkPVServerManagerRendering_AutoInit_Destruct()
{
  if(--vtkPVServerManagerRenderingCount == 0)
    {
    // Do not call vtkObjectFactory::UnRegisterFactory because
    // vtkObjectFactory.cxx statically unregisters all factories.
    }
}
