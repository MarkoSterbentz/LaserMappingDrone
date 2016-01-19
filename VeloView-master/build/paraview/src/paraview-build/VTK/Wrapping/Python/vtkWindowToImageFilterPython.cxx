// python wrapper for vtkWindowToImageFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkWindowToImageFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWindowToImageFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWindowToImageFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkWindowToImageFilter_Doc();


static PyObject *
PyvtkWindowToImageFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWindowToImageFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWindowToImageFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWindowToImageFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWindowToImageFilter::NewInstance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
        {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
        }
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWindowToImageFilter *tempr = vtkWindowToImageFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkWindowToImageFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWindow *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkWindowToImageFilter::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMagnification(temp0);
      }
    else
      {
      op->vtkWindowToImageFilter::SetMagnification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_GetMagnificationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMagnificationMinValue() :
      op->vtkWindowToImageFilter::GetMagnificationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_GetMagnificationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMagnificationMaxValue() :
      op->vtkWindowToImageFilter::GetMagnificationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_GetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMagnification() :
      op->vtkWindowToImageFilter::GetMagnification());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetFixBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFixBoundary(temp0);
      }
    else
      {
      op->vtkWindowToImageFilter::SetFixBoundary(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_GetFixBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetFixBoundary() :
      op->vtkWindowToImageFilter::GetFixBoundary());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_FixBoundaryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FixBoundaryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FixBoundaryOn();
      }
    else
      {
      op->vtkWindowToImageFilter::FixBoundaryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_FixBoundaryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FixBoundaryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FixBoundaryOff();
      }
    else
      {
      op->vtkWindowToImageFilter::FixBoundaryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_ReadFrontBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFrontBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadFrontBufferOn();
      }
    else
      {
      op->vtkWindowToImageFilter::ReadFrontBufferOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_ReadFrontBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFrontBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadFrontBufferOff();
      }
    else
      {
      op->vtkWindowToImageFilter::ReadFrontBufferOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_GetReadFrontBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFrontBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReadFrontBuffer() :
      op->vtkWindowToImageFilter::GetReadFrontBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetReadFrontBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFrontBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadFrontBuffer(temp0);
      }
    else
      {
      op->vtkWindowToImageFilter::SetReadFrontBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_ShouldRerenderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShouldRerenderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShouldRerenderOn();
      }
    else
      {
      op->vtkWindowToImageFilter::ShouldRerenderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_ShouldRerenderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShouldRerenderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShouldRerenderOff();
      }
    else
      {
      op->vtkWindowToImageFilter::ShouldRerenderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetShouldRerender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShouldRerender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShouldRerender(temp0);
      }
    else
      {
      op->vtkWindowToImageFilter::SetShouldRerender(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_GetShouldRerender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShouldRerender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShouldRerender() :
      op->vtkWindowToImageFilter::GetShouldRerender());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetViewport_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetViewport(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkWindowToImageFilter::SetViewport(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindowToImageFilter_SetViewport_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetViewport(temp0);
      }
    else
      {
      op->vtkWindowToImageFilter::SetViewport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindowToImageFilter_SetViewport(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkWindowToImageFilter_SetViewport_s1(self, args);
    case 1:
      return PyvtkWindowToImageFilter_SetViewport_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetViewport");
  return NULL;
}



static PyObject *
PyvtkWindowToImageFilter_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetViewport() :
      op->vtkWindowToImageFilter::GetViewport());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetInputBufferType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputBufferType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputBufferType(temp0);
      }
    else
      {
      op->vtkWindowToImageFilter::SetInputBufferType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_GetInputBufferType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputBufferType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInputBufferType() :
      op->vtkWindowToImageFilter::GetInputBufferType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetInputBufferTypeToRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputBufferTypeToRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInputBufferTypeToRGB();
      }
    else
      {
      op->vtkWindowToImageFilter::SetInputBufferTypeToRGB();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetInputBufferTypeToRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputBufferTypeToRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInputBufferTypeToRGBA();
      }
    else
      {
      op->vtkWindowToImageFilter::SetInputBufferTypeToRGBA();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetInputBufferTypeToZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputBufferTypeToZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInputBufferTypeToZBuffer();
      }
    else
      {
      op->vtkWindowToImageFilter::SetInputBufferTypeToZBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkWindowToImageFilter::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkWindowToImageFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkWindowToImageFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWindowToImageFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWindowToImageFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWindowToImageFilter\nC++: vtkWindowToImageFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWindowToImageFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWindowToImageFilter\nC++: vtkWindowToImageFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInput", PyvtkWindowToImageFilter_SetInput, METH_VARARGS,
   (char*)"V.SetInput(vtkWindow)\nC++: void SetInput(vtkWindow *input)\n\nIndicates what renderer to get the pixel data from. Initial value\nis 0.\n"},
  {(char*)"GetInput", PyvtkWindowToImageFilter_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkWindow\nC++: vtkWindow *GetInput()\n\nReturns which renderer is being used as the source for the pixel\ndata. Initial value is 0.\n"},
  {(char*)"SetMagnification", PyvtkWindowToImageFilter_SetMagnification, METH_VARARGS,
   (char*)"V.SetMagnification(int)\nC++: void SetMagnification(int)\n\nThe magnification of the current render window. Initial value is\n1.\n"},
  {(char*)"GetMagnificationMinValue", PyvtkWindowToImageFilter_GetMagnificationMinValue, METH_VARARGS,
   (char*)"V.GetMagnificationMinValue() -> int\nC++: int GetMagnificationMinValue()\n\nThe magnification of the current render window. Initial value is\n1.\n"},
  {(char*)"GetMagnificationMaxValue", PyvtkWindowToImageFilter_GetMagnificationMaxValue, METH_VARARGS,
   (char*)"V.GetMagnificationMaxValue() -> int\nC++: int GetMagnificationMaxValue()\n\nThe magnification of the current render window. Initial value is\n1.\n"},
  {(char*)"GetMagnification", PyvtkWindowToImageFilter_GetMagnification, METH_VARARGS,
   (char*)"V.GetMagnification() -> int\nC++: int GetMagnification()\n\nThe magnification of the current render window. Initial value is\n1.\n"},
  {(char*)"SetFixBoundary", PyvtkWindowToImageFilter_SetFixBoundary, METH_VARARGS,
   (char*)"V.SetFixBoundary(bool)\nC++: void SetFixBoundary(bool a)\n\nWhen this->Magnification > 1, this class render the full image in\ntiles. Sometimes that results in artificial artifacts at internal\ntile seams. To overcome this issue, set this flag to true.\n"},
  {(char*)"GetFixBoundary", PyvtkWindowToImageFilter_GetFixBoundary, METH_VARARGS,
   (char*)"V.GetFixBoundary() -> bool\nC++: bool GetFixBoundary()\n\nWhen this->Magnification > 1, this class render the full image in\ntiles. Sometimes that results in artificial artifacts at internal\ntile seams. To overcome this issue, set this flag to true.\n"},
  {(char*)"FixBoundaryOn", PyvtkWindowToImageFilter_FixBoundaryOn, METH_VARARGS,
   (char*)"V.FixBoundaryOn()\nC++: void FixBoundaryOn()\n\nWhen this->Magnification > 1, this class render the full image in\ntiles. Sometimes that results in artificial artifacts at internal\ntile seams. To overcome this issue, set this flag to true.\n"},
  {(char*)"FixBoundaryOff", PyvtkWindowToImageFilter_FixBoundaryOff, METH_VARARGS,
   (char*)"V.FixBoundaryOff()\nC++: void FixBoundaryOff()\n\nWhen this->Magnification > 1, this class render the full image in\ntiles. Sometimes that results in artificial artifacts at internal\ntile seams. To overcome this issue, set this flag to true.\n"},
  {(char*)"ReadFrontBufferOn", PyvtkWindowToImageFilter_ReadFrontBufferOn, METH_VARARGS,
   (char*)"V.ReadFrontBufferOn()\nC++: void ReadFrontBufferOn()\n\nSet/Get the flag that determines which buffer to read from. The\ndefault is to read from the front buffer.\n"},
  {(char*)"ReadFrontBufferOff", PyvtkWindowToImageFilter_ReadFrontBufferOff, METH_VARARGS,
   (char*)"V.ReadFrontBufferOff()\nC++: void ReadFrontBufferOff()\n\nSet/Get the flag that determines which buffer to read from. The\ndefault is to read from the front buffer.\n"},
  {(char*)"GetReadFrontBuffer", PyvtkWindowToImageFilter_GetReadFrontBuffer, METH_VARARGS,
   (char*)"V.GetReadFrontBuffer() -> int\nC++: int GetReadFrontBuffer()\n\nSet/Get the flag that determines which buffer to read from. The\ndefault is to read from the front buffer.\n"},
  {(char*)"SetReadFrontBuffer", PyvtkWindowToImageFilter_SetReadFrontBuffer, METH_VARARGS,
   (char*)"V.SetReadFrontBuffer(int)\nC++: void SetReadFrontBuffer(int a)\n\nSet/Get the flag that determines which buffer to read from. The\ndefault is to read from the front buffer.\n"},
  {(char*)"ShouldRerenderOn", PyvtkWindowToImageFilter_ShouldRerenderOn, METH_VARARGS,
   (char*)"V.ShouldRerenderOn()\nC++: void ShouldRerenderOn()\n\nSet/get whether to re-render the input window. Initial value is\ntrue. (This option makes no difference if Magnification > 1.)\n"},
  {(char*)"ShouldRerenderOff", PyvtkWindowToImageFilter_ShouldRerenderOff, METH_VARARGS,
   (char*)"V.ShouldRerenderOff()\nC++: void ShouldRerenderOff()\n\nSet/get whether to re-render the input window. Initial value is\ntrue. (This option makes no difference if Magnification > 1.)\n"},
  {(char*)"SetShouldRerender", PyvtkWindowToImageFilter_SetShouldRerender, METH_VARARGS,
   (char*)"V.SetShouldRerender(int)\nC++: void SetShouldRerender(int a)\n\nSet/get whether to re-render the input window. Initial value is\ntrue. (This option makes no difference if Magnification > 1.)\n"},
  {(char*)"GetShouldRerender", PyvtkWindowToImageFilter_GetShouldRerender, METH_VARARGS,
   (char*)"V.GetShouldRerender() -> int\nC++: int GetShouldRerender()\n\nSet/get whether to re-render the input window. Initial value is\ntrue. (This option makes no difference if Magnification > 1.)\n"},
  {(char*)"SetViewport", PyvtkWindowToImageFilter_SetViewport, METH_VARARGS,
   (char*)"V.SetViewport(float, float, float, float)\nC++: void SetViewport(double, double, double, double)\nV.SetViewport((float, float, float, float))\nC++: void SetViewport(double a[4])\n\n"},
  {(char*)"GetViewport", PyvtkWindowToImageFilter_GetViewport, METH_VARARGS,
   (char*)"V.GetViewport() -> (float, float, float, float)\nC++: double *GetViewport()\n\nSet/get the extents to be used to generate the image. Initial\nvalue is {0,0,1,1} (This option does not work if Magnification >\n1.)\n"},
  {(char*)"SetInputBufferType", PyvtkWindowToImageFilter_SetInputBufferType, METH_VARARGS,
   (char*)"V.SetInputBufferType(int)\nC++: void SetInputBufferType(int a)\n\nSet/get the window buffer from which data will be read.  Choices\ninclude VTK_RGB (read the color image from the window), VTK_RGBA\n(same, but include the alpha channel), and VTK_ZBUFFER (depth\nbuffer, returned as a float array). Initial value is VTK_RGB.\n"},
  {(char*)"GetInputBufferType", PyvtkWindowToImageFilter_GetInputBufferType, METH_VARARGS,
   (char*)"V.GetInputBufferType() -> int\nC++: int GetInputBufferType()\n\nSet/get the window buffer from which data will be read.  Choices\ninclude VTK_RGB (read the color image from the window), VTK_RGBA\n(same, but include the alpha channel), and VTK_ZBUFFER (depth\nbuffer, returned as a float array). Initial value is VTK_RGB.\n"},
  {(char*)"SetInputBufferTypeToRGB", PyvtkWindowToImageFilter_SetInputBufferTypeToRGB, METH_VARARGS,
   (char*)"V.SetInputBufferTypeToRGB()\nC++: void SetInputBufferTypeToRGB()\n\nSet/get the window buffer from which data will be read.  Choices\ninclude VTK_RGB (read the color image from the window), VTK_RGBA\n(same, but include the alpha channel), and VTK_ZBUFFER (depth\nbuffer, returned as a float array). Initial value is VTK_RGB.\n"},
  {(char*)"SetInputBufferTypeToRGBA", PyvtkWindowToImageFilter_SetInputBufferTypeToRGBA, METH_VARARGS,
   (char*)"V.SetInputBufferTypeToRGBA()\nC++: void SetInputBufferTypeToRGBA()\n\nSet/get the window buffer from which data will be read.  Choices\ninclude VTK_RGB (read the color image from the window), VTK_RGBA\n(same, but include the alpha channel), and VTK_ZBUFFER (depth\nbuffer, returned as a float array). Initial value is VTK_RGB.\n"},
  {(char*)"SetInputBufferTypeToZBuffer", PyvtkWindowToImageFilter_SetInputBufferTypeToZBuffer, METH_VARARGS,
   (char*)"V.SetInputBufferTypeToZBuffer()\nC++: void SetInputBufferTypeToZBuffer()\n\nSet/get the window buffer from which data will be read.  Choices\ninclude VTK_RGB (read the color image from the window), VTK_RGBA\n(same, but include the alpha channel), and VTK_ZBUFFER (depth\nbuffer, returned as a float array). Initial value is VTK_RGB.\n"},
  {(char*)"GetOutput", PyvtkWindowToImageFilter_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkImageData\nC++: vtkImageData *GetOutput()\n\nGet the output data object for a port on this algorithm.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWindowToImageFilter_StaticNew()
{
  return vtkWindowToImageFilter::New();
}

PyObject *PyVTKClass_vtkWindowToImageFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWindowToImageFilter_StaticNew,
    PyvtkWindowToImageFilter_Methods,
    "vtkWindowToImageFilter", modulename,
    NULL, NULL,
    PyvtkWindowToImageFilter_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkWindowToImageFilter_Doc()
{
  static const char *docstring[] = {
    "vtkWindowToImageFilter - Use a vtkWindow as input to image pipeline\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkWindowToImageFilter provides methods needed to read the data in a\nvtkWindow and use it as input to the imaging pipeline. This is useful\nfor saving an image to a file for example. The window can be read as\neither RGB or RGBA pixels;  in addition, the depth buffer can also be\nread.   RGB and RGBA pixels are of type unsigned char, while Z-Buffer\ndata is returned as floats.  Use this filter to conv",
    "ert RenderWindows\nor ImageWindows to an image format.\n\nCaveats:\n\nA vtkWindow doesn't behave like other parts of the VTK pipeline: its\nmodification time doesn't get updated when an image is rendered.  As\na result, naive use of vtkWindowToImageFilter will produce an image\nof the first image that the window rendered, but which is never\nupdated on subsequent window updates.  This behavior is unexpecte",
    "d\nand in general undesirable.\n\nTo force an update of the output image, call vtkWindowToImageFilter's\nModified method after rendering to the window.\n\nIn VTK versions 4 and later, this filter is part of the canonical way\nto output an image of a window to a file (replacing the obsolete\nSaveImageAsPPM method for vtkRenderWindows that existed in 3.2 and\nearlier).  Connect this filter to the output of t",
    "he window, and\nfilter's output to a writer such as vtkPNGWriter.\n\nReading back alpha planes is dependent on the correct operation of\nthe render window's GetRGBACharPixelData method, which in turn is\ndependent on the configuration of the window's alpha planes.  As of\nVTK 4.4+, machine-independent behavior is not automatically assured\nbecause of these dependencies.\n\nSee Also:\n\nvtkWindow vtkRenderLar",
    "geImage\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWindowToImageFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWindowToImageFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWindowToImageFilter", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTK_ZBUFFER", o);
    Py_DECREF(o);
    }
}

