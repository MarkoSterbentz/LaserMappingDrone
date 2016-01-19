/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkRenderingMatplotlibObjectFactory.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#include "vtkRenderingMatplotlibObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.

#include "vtkMatplotlibMathTextUtilities.h"

vtkStandardNewMacro(vtkRenderingMatplotlibObjectFactory)

// Now create the functions to create overrides with.

  VTK_CREATE_CREATE_FUNCTION(vtkMatplotlibMathTextUtilities)

vtkRenderingMatplotlibObjectFactory::vtkRenderingMatplotlibObjectFactory()
{

    this->RegisterOverride("vtkMathTextUtilities",
                           "vtkMatplotlibMathTextUtilities",
                           "Override for vtkRenderingMatplotlib module", 1,
                           vtkObjectFactoryCreatevtkMatplotlibMathTextUtilities);
}

const char * vtkRenderingMatplotlibObjectFactory::GetVTKSourceVersion()
{
  return VTK_SOURCE_VERSION;
}

void vtkRenderingMatplotlibObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkRenderingMatplotlibCount;

VTKRENDERINGMATPLOTLIB_EXPORT void vtkRenderingMatplotlib_AutoInit_Construct()
{
  if(++vtkRenderingMatplotlibCount == 1)
    {
    vtkRenderingMatplotlibObjectFactory* factory = vtkRenderingMatplotlibObjectFactory::New();
    if (factory)
      {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
      }
    }
}

VTKRENDERINGMATPLOTLIB_EXPORT void vtkRenderingMatplotlib_AutoInit_Destruct()
{
  if(--vtkRenderingMatplotlibCount == 0)
    {
    // Do not call vtkObjectFactory::UnRegisterFactory because
    // vtkObjectFactory.cxx statically unregisters all factories.
    }
}
