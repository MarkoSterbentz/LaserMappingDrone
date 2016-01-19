/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkIOParallelExodusObjectFactory.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#include "vtkIOParallelExodusObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.

#include "vtkPExodusIIWriter.h"

vtkStandardNewMacro(vtkIOParallelExodusObjectFactory)

// Now create the functions to create overrides with.

  VTK_CREATE_CREATE_FUNCTION(vtkPExodusIIWriter)

vtkIOParallelExodusObjectFactory::vtkIOParallelExodusObjectFactory()
{

    this->RegisterOverride("vtkExodusIIWriter",
                           "vtkPExodusIIWriter",
                           "Override for vtkIOParallelExodus module", 1,
                           vtkObjectFactoryCreatevtkPExodusIIWriter);
}

const char * vtkIOParallelExodusObjectFactory::GetVTKSourceVersion()
{
  return VTK_SOURCE_VERSION;
}

void vtkIOParallelExodusObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkIOParallelExodusCount;

VTKIOPARALLELEXODUS_EXPORT void vtkIOParallelExodus_AutoInit_Construct()
{
  if(++vtkIOParallelExodusCount == 1)
    {
    vtkIOParallelExodusObjectFactory* factory = vtkIOParallelExodusObjectFactory::New();
    if (factory)
      {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
      }
    }
}

VTKIOPARALLELEXODUS_EXPORT void vtkIOParallelExodus_AutoInit_Destruct()
{
  if(--vtkIOParallelExodusCount == 0)
    {
    // Do not call vtkObjectFactory::UnRegisterFactory because
    // vtkObjectFactory.cxx statically unregisters all factories.
    }
}
