/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkPythonConfigure.h.in

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#ifndef vtkPythonConfigure_h
#define vtkPythonConfigure_h

/* This header is configured by VTK's build process.  */

/* Python version that VTK was configured with */
#define VTK_PYTHON_MAJOR_VERSION 2
#define VTK_PYTHON_MINOR_VERSION 7
#define VTK_PYTHON_MICRO_VERSION 6
#define VTK_PYTHON_VERSION_HEX ((2 << 24) | (7 << 16) | (6 << 8))

/* E.g. on BlueGene and Cray there is no multithreading */
#define VTK_NO_PYTHON_THREADS

/* Whether the real python debug library has been provided.  */
/* #undef VTK_WINDOWS_PYTHON_DEBUGGABLE */

#endif
