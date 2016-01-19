/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkRenderingFreeTypeOpenGLObjectFactory.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef __vtkRenderingFreeTypeOpenGLObjectFactory_h
#define __vtkRenderingFreeTypeOpenGLObjectFactory_h

#include "vtkRenderingFreeTypeOpenGLModule.h" // For export macro
#include "vtkObjectFactory.h"

class VTKRENDERINGFREETYPEOPENGL_EXPORT vtkRenderingFreeTypeOpenGLObjectFactory : public vtkObjectFactory
{
public:
  static vtkRenderingFreeTypeOpenGLObjectFactory * New();
  vtkTypeMacro(vtkRenderingFreeTypeOpenGLObjectFactory, vtkObjectFactory)

  const char * GetDescription() { return "vtkRenderingFreeTypeOpenGL factory overrides."; }

  const char * GetVTKSourceVersion();

  void PrintSelf(ostream &os, vtkIndent indent);

protected:
  vtkRenderingFreeTypeOpenGLObjectFactory();

private:
  vtkRenderingFreeTypeOpenGLObjectFactory(const vtkRenderingFreeTypeOpenGLObjectFactory&); // Not implemented
  void operator=(const vtkRenderingFreeTypeOpenGLObjectFactory&);      // Not implemented
};

#endif // __vtkRenderingFreeTypeOpenGLObjectFactory_h
