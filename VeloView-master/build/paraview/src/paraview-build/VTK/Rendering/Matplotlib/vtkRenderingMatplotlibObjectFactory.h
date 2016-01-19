/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkRenderingMatplotlibObjectFactory.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef __vtkRenderingMatplotlibObjectFactory_h
#define __vtkRenderingMatplotlibObjectFactory_h

#include "vtkRenderingMatplotlibModule.h" // For export macro
#include "vtkObjectFactory.h"

class VTKRENDERINGMATPLOTLIB_EXPORT vtkRenderingMatplotlibObjectFactory : public vtkObjectFactory
{
public:
  static vtkRenderingMatplotlibObjectFactory * New();
  vtkTypeMacro(vtkRenderingMatplotlibObjectFactory, vtkObjectFactory)

  const char * GetDescription() { return "vtkRenderingMatplotlib factory overrides."; }

  const char * GetVTKSourceVersion();

  void PrintSelf(ostream &os, vtkIndent indent);

protected:
  vtkRenderingMatplotlibObjectFactory();

private:
  vtkRenderingMatplotlibObjectFactory(const vtkRenderingMatplotlibObjectFactory&); // Not implemented
  void operator=(const vtkRenderingMatplotlibObjectFactory&);      // Not implemented
};

#endif // __vtkRenderingMatplotlibObjectFactory_h
