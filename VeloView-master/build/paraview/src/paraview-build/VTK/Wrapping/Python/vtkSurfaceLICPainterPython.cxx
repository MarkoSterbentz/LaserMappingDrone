// python wrapper for vtkSurfaceLICPainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSurfaceLICPainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSurfaceLICPainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSurfaceLICPainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPainterNew
extern "C" { PyObject *PyVTKClass_vtkPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPainterNew
#endif

static const char **PyvtkSurfaceLICPainter_Doc();


static PyObject *
PyvtkSurfaceLICPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSurfaceLICPainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSurfaceLICPainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSurfaceLICPainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSurfaceLICPainter::NewInstance());

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
PyvtkSurfaceLICPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSurfaceLICPainter *tempr = vtkSurfaceLICPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkSurfaceLICPainter::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnable(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetEnable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnable() :
      op->vtkSurfaceLICPainter::GetEnable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetEnableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetEnableOn();
      }
    else
      {
      op->vtkSurfaceLICPainter::SetEnableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetEnableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetEnableOff();
      }
    else
      {
      op->vtkSurfaceLICPainter::SetEnableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetInputArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSurfaceLICPainter_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetInputArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSurfaceLICPainter_SetInputArrayToProcess_Methods[] = {
  {NULL, PyvtkSurfaceLICPainter_SetInputArrayToProcess_s1, METH_VARARGS,
   (char*)"@iz"},
  {NULL, PyvtkSurfaceLICPainter_SetInputArrayToProcess_s2, METH_VARARGS,
   (char*)"@ii"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSurfaceLICPainter_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSurfaceLICPainter_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return NULL;
}



static PyObject *
PyvtkSurfaceLICPainter_SetNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSteps(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetNumberOfSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSteps() :
      op->vtkSurfaceLICPainter::GetNumberOfSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStepSize(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetStepSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStepSize() :
      op->vtkSurfaceLICPainter::GetStepSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetNormalizeVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalizeVectors(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetNormalizeVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_NormalizeVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalizeVectorsOn();
      }
    else
      {
      op->vtkSurfaceLICPainter::NormalizeVectorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_NormalizeVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalizeVectorsOff();
      }
    else
      {
      op->vtkSurfaceLICPainter::NormalizeVectorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetNormalizeVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormalizeVectors() :
      op->vtkSurfaceLICPainter::GetNormalizeVectors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetMaskOnSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskOnSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskOnSurface(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetMaskOnSurface(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_MaskOnSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskOnSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MaskOnSurfaceOn();
      }
    else
      {
      op->vtkSurfaceLICPainter::MaskOnSurfaceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_MaskOnSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskOnSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MaskOnSurfaceOff();
      }
    else
      {
      op->vtkSurfaceLICPainter::MaskOnSurfaceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetMaskOnSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskOnSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaskOnSurface() :
      op->vtkSurfaceLICPainter::GetMaskOnSurface());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetMaskThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskThreshold(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetMaskThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetMaskThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaskThreshold() :
      op->vtkSurfaceLICPainter::GetMaskThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetMaskColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetMaskColor(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetMaskColor(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkSurfaceLICPainter_SetMaskColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetMaskColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetMaskColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSurfaceLICPainter_SetMaskColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSurfaceLICPainter_SetMaskColor_s1(self, args);
    case 3:
      return PyvtkSurfaceLICPainter_SetMaskColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaskColor");
  return NULL;
}



static PyObject *
PyvtkSurfaceLICPainter_GetMaskColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetMaskColor() :
      op->vtkSurfaceLICPainter::GetMaskColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetMaskIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskIntensity(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetMaskIntensity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetMaskIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaskIntensity() :
      op->vtkSurfaceLICPainter::GetMaskIntensity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetEnhancedLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnhancedLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnhancedLIC(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetEnhancedLIC(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetEnhancedLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnhancedLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnhancedLIC() :
      op->vtkSurfaceLICPainter::GetEnhancedLIC());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_EnhancedLICOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnhancedLICOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnhancedLICOn();
      }
    else
      {
      op->vtkSurfaceLICPainter::EnhancedLICOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_EnhancedLICOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnhancedLICOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnhancedLICOff();
      }
    else
      {
      op->vtkSurfaceLICPainter::EnhancedLICOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetEnhanceContrast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnhanceContrast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnhanceContrast(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetEnhanceContrast(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetEnhanceContrast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnhanceContrast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnhanceContrast() :
      op->vtkSurfaceLICPainter::GetEnhanceContrast());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetLowLICContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowLICContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLowLICContrastEnhancementFactor() :
      op->vtkSurfaceLICPainter::GetLowLICContrastEnhancementFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetHighLICContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighLICContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHighLICContrastEnhancementFactor() :
      op->vtkSurfaceLICPainter::GetHighLICContrastEnhancementFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetLowLICContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowLICContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLowLICContrastEnhancementFactor(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetLowLICContrastEnhancementFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetHighLICContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighLICContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHighLICContrastEnhancementFactor(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetHighLICContrastEnhancementFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetLowColorContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowColorContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLowColorContrastEnhancementFactor() :
      op->vtkSurfaceLICPainter::GetLowColorContrastEnhancementFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetHighColorContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighColorContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHighColorContrastEnhancementFactor() :
      op->vtkSurfaceLICPainter::GetHighColorContrastEnhancementFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetLowColorContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowColorContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLowColorContrastEnhancementFactor(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetLowColorContrastEnhancementFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetHighColorContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighColorContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHighColorContrastEnhancementFactor(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetHighColorContrastEnhancementFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetAntiAlias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAntiAlias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAntiAlias(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetAntiAlias(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_AntiAliasOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AntiAliasOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AntiAliasOn();
      }
    else
      {
      op->vtkSurfaceLICPainter::AntiAliasOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_AntiAliasOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AntiAliasOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AntiAliasOff();
      }
    else
      {
      op->vtkSurfaceLICPainter::AntiAliasOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetAntiAlias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAntiAlias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAntiAlias() :
      op->vtkSurfaceLICPainter::GetAntiAlias());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorMode(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetColorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkSurfaceLICPainter::GetColorMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetLICIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLICIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLICIntensity(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetLICIntensity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetLICIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLICIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLICIntensity() :
      op->vtkSurfaceLICPainter::GetLICIntensity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetMapModeBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapModeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMapModeBias(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetMapModeBias(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetMapModeBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapModeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMapModeBias() :
      op->vtkSurfaceLICPainter::GetMapModeBias());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetNoiseDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoiseDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetNoiseDataSet(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetNoiseDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetNoiseDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetNoiseDataSet() :
      op->vtkSurfaceLICPainter::GetNoiseDataSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetGenerateNoiseTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateNoiseTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateNoiseTexture(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetGenerateNoiseTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetGenerateNoiseTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateNoiseTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateNoiseTexture() :
      op->vtkSurfaceLICPainter::GetGenerateNoiseTexture());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetNoiseType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoiseType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNoiseType(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetNoiseType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetNoiseType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNoiseType() :
      op->vtkSurfaceLICPainter::GetNoiseType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetNoiseTextureSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoiseTextureSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNoiseTextureSize(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetNoiseTextureSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetNoiseTextureSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseTextureSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNoiseTextureSize() :
      op->vtkSurfaceLICPainter::GetNoiseTextureSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetNoiseGrainSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoiseGrainSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNoiseGrainSize(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetNoiseGrainSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetNoiseGrainSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseGrainSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNoiseGrainSize() :
      op->vtkSurfaceLICPainter::GetNoiseGrainSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetMinNoiseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinNoiseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinNoiseValue(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetMinNoiseValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetMaxNoiseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNoiseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxNoiseValue(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetMaxNoiseValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetMinNoiseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinNoiseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinNoiseValue() :
      op->vtkSurfaceLICPainter::GetMinNoiseValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetMaxNoiseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNoiseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaxNoiseValue() :
      op->vtkSurfaceLICPainter::GetMaxNoiseValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetNumberOfNoiseLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfNoiseLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfNoiseLevels(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetNumberOfNoiseLevels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetNumberOfNoiseLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNoiseLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNoiseLevels() :
      op->vtkSurfaceLICPainter::GetNumberOfNoiseLevels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetImpulseNoiseProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImpulseNoiseProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImpulseNoiseProbability(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetImpulseNoiseProbability(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetImpulseNoiseProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImpulseNoiseProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetImpulseNoiseProbability() :
      op->vtkSurfaceLICPainter::GetImpulseNoiseProbability());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetImpulseNoiseBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImpulseNoiseBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImpulseNoiseBackgroundValue(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetImpulseNoiseBackgroundValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetImpulseNoiseBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImpulseNoiseBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetImpulseNoiseBackgroundValue() :
      op->vtkSurfaceLICPainter::GetImpulseNoiseBackgroundValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetNoiseGeneratorSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoiseGeneratorSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNoiseGeneratorSeed(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetNoiseGeneratorSeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetNoiseGeneratorSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseGeneratorSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNoiseGeneratorSeed() :
      op->vtkSurfaceLICPainter::GetNoiseGeneratorSeed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetCompositeStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompositeStrategy(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetCompositeStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetCompositeStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompositeStrategy() :
      op->vtkSurfaceLICPainter::GetCompositeStrategy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_IsSupported(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    bool tempr = vtkSurfaceLICPainter::IsSupported(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_WriteTimerLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteTimerLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->WriteTimerLog(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::WriteTimerLog(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSurfaceLICPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkSurfaceLICPainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSurfaceLICPainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSurfaceLICPainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSurfaceLICPainter\nC++: vtkSurfaceLICPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSurfaceLICPainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSurfaceLICPainter\nC++: vtkSurfaceLICPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkSurfaceLICPainter_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *win)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release. In this case, releases the display\nlists.\n"},
  {(char*)"GetOutput", PyvtkSurfaceLICPainter_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkDataObject\nC++: virtual vtkDataObject *GetOutput()\n\nGet the output data object from this painter. Overridden to pass\nthe input points (or cells) vectors as the tcoords to the\ndeletage painters. This is required by the internal GLSL shader\nprograms used for generating LIC.\n"},
  {(char*)"SetEnable", PyvtkSurfaceLICPainter_SetEnable, METH_VARARGS,
   (char*)"V.SetEnable(int)\nC++: void SetEnable(int val)\n\nEnable/Disable this painter.\n"},
  {(char*)"GetEnable", PyvtkSurfaceLICPainter_GetEnable, METH_VARARGS,
   (char*)"V.GetEnable() -> int\nC++: int GetEnable()\n\nEnable/Disable this painter.\n"},
  {(char*)"SetEnableOn", PyvtkSurfaceLICPainter_SetEnableOn, METH_VARARGS,
   (char*)"V.SetEnableOn()\nC++: void SetEnableOn()\n\nEnable/Disable this painter.\n"},
  {(char*)"SetEnableOff", PyvtkSurfaceLICPainter_SetEnableOff, METH_VARARGS,
   (char*)"V.SetEnableOff()\nC++: void SetEnableOff()\n\nEnable/Disable this painter.\n"},
  {(char*)"SetInputArrayToProcess", PyvtkSurfaceLICPainter_SetInputArrayToProcess, METH_VARARGS,
   (char*)"V.SetInputArrayToProcess(int, string)\nC++: void SetInputArrayToProcess(int fieldAssociation,\n    const char *name)\nV.SetInputArrayToProcess(int, int)\nC++: void SetInputArrayToProcess(int fieldAssociation,\n    int fieldAttributeType)\n\nSet the vectors to used for applying LIC. By default point\nvectors are used. Arguments are same as those passed to\nvtkAlgorithm::SetInputArrayToProcess except the first 3 arguments\ni.e. idx, port, connection.\n"},
  {(char*)"SetNumberOfSteps", PyvtkSurfaceLICPainter_SetNumberOfSteps, METH_VARARGS,
   (char*)"V.SetNumberOfSteps(int)\nC++: void SetNumberOfSteps(int val)\n\nGet/Set the number of integration steps in each direction.\n"},
  {(char*)"GetNumberOfSteps", PyvtkSurfaceLICPainter_GetNumberOfSteps, METH_VARARGS,
   (char*)"V.GetNumberOfSteps() -> int\nC++: int GetNumberOfSteps()\n\nGet/Set the number of integration steps in each direction.\n"},
  {(char*)"SetStepSize", PyvtkSurfaceLICPainter_SetStepSize, METH_VARARGS,
   (char*)"V.SetStepSize(float)\nC++: void SetStepSize(double val)\n\nGet/Set the step size (in pixels).\n"},
  {(char*)"GetStepSize", PyvtkSurfaceLICPainter_GetStepSize, METH_VARARGS,
   (char*)"V.GetStepSize() -> float\nC++: double GetStepSize()\n\nGet/Set the step size (in pixels).\n"},
  {(char*)"SetNormalizeVectors", PyvtkSurfaceLICPainter_SetNormalizeVectors, METH_VARARGS,
   (char*)"V.SetNormalizeVectors(int)\nC++: void SetNormalizeVectors(int val)\n\nNormalize vectors during integration. When set(the default) the\ninput vector field is normalized during integration, and each\nintegration occurs over the same arclength. When not set each\nintegration occurs over an arc length proportional to the field\nmagnitude as is customary in traditional numerical methods. See, \"Imaging Vector Fields Using Line Integral\nConvolution\" for an axample where normalization is used. See,\n\"Image Space Based Visualization of Unsteady Flow on Surfaces\"\nfor an example of where no normalization is used.\n"},
  {(char*)"NormalizeVectorsOn", PyvtkSurfaceLICPainter_NormalizeVectorsOn, METH_VARARGS,
   (char*)"V.NormalizeVectorsOn()\nC++: void NormalizeVectorsOn()\n\nNormalize vectors during integration. When set(the default) the\ninput vector field is normalized during integration, and each\nintegration occurs over the same arclength. When not set each\nintegration occurs over an arc length proportional to the field\nmagnitude as is customary in traditional numerical methods. See, \"Imaging Vector Fields Using Line Integral\nConvolution\" for an axample where normalization is used. See,\n\"Image Space Based Visualization of Unsteady Flow on Surfaces\"\nfor an example of where no normalization is used.\n"},
  {(char*)"NormalizeVectorsOff", PyvtkSurfaceLICPainter_NormalizeVectorsOff, METH_VARARGS,
   (char*)"V.NormalizeVectorsOff()\nC++: void NormalizeVectorsOff()\n\nNormalize vectors during integration. When set(the default) the\ninput vector field is normalized during integration, and each\nintegration occurs over the same arclength. When not set each\nintegration occurs over an arc length proportional to the field\nmagnitude as is customary in traditional numerical methods. See, \"Imaging Vector Fields Using Line Integral\nConvolution\" for an axample where normalization is used. See,\n\"Image Space Based Visualization of Unsteady Flow on Surfaces\"\nfor an example of where no normalization is used.\n"},
  {(char*)"GetNormalizeVectors", PyvtkSurfaceLICPainter_GetNormalizeVectors, METH_VARARGS,
   (char*)"V.GetNormalizeVectors() -> int\nC++: int GetNormalizeVectors()\n\nNormalize vectors during integration. When set(the default) the\ninput vector field is normalized during integration, and each\nintegration occurs over the same arclength. When not set each\nintegration occurs over an arc length proportional to the field\nmagnitude as is customary in traditional numerical methods. See, \"Imaging Vector Fields Using Line Integral\nConvolution\" for an axample where normalization is used. See,\n\"Image Space Based Visualization of Unsteady Flow on Surfaces\"\nfor an example of where no normalization is used.\n"},
  {(char*)"SetMaskOnSurface", PyvtkSurfaceLICPainter_SetMaskOnSurface, METH_VARARGS,
   (char*)"V.SetMaskOnSurface(int)\nC++: void SetMaskOnSurface(int val)\n\nWhen set MaskOnSurface computes |V| for use in the fragment\nmasking tests on the surface. When not set the original\nun-projected un-transformed |V| is used.\n"},
  {(char*)"MaskOnSurfaceOn", PyvtkSurfaceLICPainter_MaskOnSurfaceOn, METH_VARARGS,
   (char*)"V.MaskOnSurfaceOn()\nC++: void MaskOnSurfaceOn()\n\nWhen set MaskOnSurface computes |V| for use in the fragment\nmasking tests on the surface. When not set the original\nun-projected un-transformed |V| is used.\n"},
  {(char*)"MaskOnSurfaceOff", PyvtkSurfaceLICPainter_MaskOnSurfaceOff, METH_VARARGS,
   (char*)"V.MaskOnSurfaceOff()\nC++: void MaskOnSurfaceOff()\n\nWhen set MaskOnSurface computes |V| for use in the fragment\nmasking tests on the surface. When not set the original\nun-projected un-transformed |V| is used.\n"},
  {(char*)"GetMaskOnSurface", PyvtkSurfaceLICPainter_GetMaskOnSurface, METH_VARARGS,
   (char*)"V.GetMaskOnSurface() -> int\nC++: int GetMaskOnSurface()\n\nWhen set MaskOnSurface computes |V| for use in the fragment\nmasking tests on the surface. When not set the original\nun-projected un-transformed |V| is used.\n"},
  {(char*)"SetMaskThreshold", PyvtkSurfaceLICPainter_SetMaskThreshold, METH_VARARGS,
   (char*)"V.SetMaskThreshold(float)\nC++: void SetMaskThreshold(double val)\n\nThe MaskThreshold controls the rendering of fragments in stagnant\nregions of flow.  // In these regions LIC noise texture will be\nmasked, where |V| < MaskThreshold is satisifed. The masking\nprocess blends a the MaskColor with the scalar color of the\nsurface proportional to MaskIntesnsity. See MaskIntensity for\nmore information on the blending algorithm. This blending allows\none control over the masking process so that masked fragments may\nbe: highlighted (by setting a unique mask color and mask\nintensity > 0), made invisible with and without passing the\nun-convolved noise texture (by setting mask intensity 0), made to\nblend into the LIC.\n\nMaskThreshold units are in the original vector space. Note that\nthe threshold can be applied to the original vector field or to\nthe surface projected vector field. See MaskOnSurface.\n"},
  {(char*)"GetMaskThreshold", PyvtkSurfaceLICPainter_GetMaskThreshold, METH_VARARGS,
   (char*)"V.GetMaskThreshold() -> float\nC++: double GetMaskThreshold()\n\nThe MaskThreshold controls the rendering of fragments in stagnant\nregions of flow.  // In these regions LIC noise texture will be\nmasked, where |V| < MaskThreshold is satisifed. The masking\nprocess blends a the MaskColor with the scalar color of the\nsurface proportional to MaskIntesnsity. See MaskIntensity for\nmore information on the blending algorithm. This blending allows\none control over the masking process so that masked fragments may\nbe: highlighted (by setting a unique mask color and mask\nintensity > 0), made invisible with and without passing the\nun-convolved noise texture (by setting mask intensity 0), made to\nblend into the LIC.\n\nMaskThreshold units are in the original vector space. Note that\nthe threshold can be applied to the original vector field or to\nthe surface projected vector field. See MaskOnSurface.\n"},
  {(char*)"SetMaskColor", PyvtkSurfaceLICPainter_SetMaskColor, METH_VARARGS,
   (char*)"V.SetMaskColor([float, ...])\nC++: void SetMaskColor(double *val)\nV.SetMaskColor(float, float, float)\nC++: void SetMaskColor(double r, double g, double b)\n\nThe MaskColor is used on masked fragments. The default of (0.5,\n0.5, 0.5) makes the masked fragments look similar to the LIC'd\nfragments. The mask color is applied only when MaskIntensity > 0.\n"},
  {(char*)"GetMaskColor", PyvtkSurfaceLICPainter_GetMaskColor, METH_VARARGS,
   (char*)"V.GetMaskColor() -> (float, float, float)\nC++: double *GetMaskColor()\n\n"},
  {(char*)"SetMaskIntensity", PyvtkSurfaceLICPainter_SetMaskIntensity, METH_VARARGS,
   (char*)"V.SetMaskIntensity(float)\nC++: void SetMaskIntensity(double val)\n\nThe MaskIntensity controls the blending of the mask color and the\ngeometry color. The color of masked fragments is given by:\n\n\n    c = maskColor * maskIntensity + geomColor * (1 -\nmaskIntensity)\n\nThe default value of 0.0 results in the geometry color being\nused.\n"},
  {(char*)"GetMaskIntensity", PyvtkSurfaceLICPainter_GetMaskIntensity, METH_VARARGS,
   (char*)"V.GetMaskIntensity() -> float\nC++: double GetMaskIntensity()\n\nThe MaskIntensity controls the blending of the mask color and the\ngeometry color. The color of masked fragments is given by:\n\n\n    c = maskColor * maskIntensity + geomColor * (1 -\nmaskIntensity)\n\nThe default value of 0.0 results in the geometry color being\nused.\n"},
  {(char*)"SetEnhancedLIC", PyvtkSurfaceLICPainter_SetEnhancedLIC, METH_VARARGS,
   (char*)"V.SetEnhancedLIC(int)\nC++: void SetEnhancedLIC(int val)\n\nEnhancedLIC mean compute the LIC twice with the second pass using\nthe edge-enhanced result of the first pass as a noise texture.\nEdge enhancedment is made by a simple Laplace convolution.\n"},
  {(char*)"GetEnhancedLIC", PyvtkSurfaceLICPainter_GetEnhancedLIC, METH_VARARGS,
   (char*)"V.GetEnhancedLIC() -> int\nC++: int GetEnhancedLIC()\n\nEnhancedLIC mean compute the LIC twice with the second pass using\nthe edge-enhanced result of the first pass as a noise texture.\nEdge enhancedment is made by a simple Laplace convolution.\n"},
  {(char*)"EnhancedLICOn", PyvtkSurfaceLICPainter_EnhancedLICOn, METH_VARARGS,
   (char*)"V.EnhancedLICOn()\nC++: void EnhancedLICOn()\n\nEnhancedLIC mean compute the LIC twice with the second pass using\nthe edge-enhanced result of the first pass as a noise texture.\nEdge enhancedment is made by a simple Laplace convolution.\n"},
  {(char*)"EnhancedLICOff", PyvtkSurfaceLICPainter_EnhancedLICOff, METH_VARARGS,
   (char*)"V.EnhancedLICOff()\nC++: void EnhancedLICOff()\n\nEnhancedLIC mean compute the LIC twice with the second pass using\nthe edge-enhanced result of the first pass as a noise texture.\nEdge enhancedment is made by a simple Laplace convolution.\n"},
  {(char*)"SetEnhanceContrast", PyvtkSurfaceLICPainter_SetEnhanceContrast, METH_VARARGS,
   (char*)"V.SetEnhanceContrast(int)\nC++: void SetEnhanceContrast(int val)\n\nEnable/Disable contrast and dynamic range correction stages.\nContrast enhancement can be enabled during LIC computations (See\nvtkLineINtegralComvolution2D) and after the scalar colors have\nbeen combined with the LIC.\n\nThe best appraoch for using this feature is to enable LIC\nenhancement, and only if the image is to dark or dull enable\nCOLOR enhancement.\n\nBoth stages are implemented by a histogram stretching algorithm.\nDuring LIC stages the contrast enhancement is applied to gray\nscale LIC image. During the scalar coloring stage the contrast\nenhancement is applied to the lightness channel of the color\nimage in HSL color space. The histogram stretching is implemented\nas follows:\n\n\n    L = (L-m)/(M-m)\n\nwhere, L is the fragment intensity/lightness, m is the\nintensity/lightness to map to 0, M is the intensity/lightness to\nmap to 1. The default values of m and M are the min and max taken\nover all fragments.\n\nThis increase the dynamic range and contrast in the LIC'd image,\nboth of which are natuarly attenuated by the convolution\nproccess.\n\nValues\n\n\n  ENHANCE_CONTRAST_OFF   -- don't enhance LIC or scalar colors\n  ENHANCE_CONTRAST_LIC   -- enhance in LIC high-pass input and\noutput\n  ENHANCE_CONTRAST_COLOR -- enhance after scalars are combined\nwith LIC\n  ENHANCE_CONTRAST_BOTH  -- enhance in LIC stages and after\nscalar colors\n\nThis feature is disabled by default.\n"},
  {(char*)"GetEnhanceContrast", PyvtkSurfaceLICPainter_GetEnhanceContrast, METH_VARARGS,
   (char*)"V.GetEnhanceContrast() -> int\nC++: int GetEnhanceContrast()\n\nEnable/Disable contrast and dynamic range correction stages.\nContrast enhancement can be enabled during LIC computations (See\nvtkLineINtegralComvolution2D) and after the scalar colors have\nbeen combined with the LIC.\n\nThe best appraoch for using this feature is to enable LIC\nenhancement, and only if the image is to dark or dull enable\nCOLOR enhancement.\n\nBoth stages are implemented by a histogram stretching algorithm.\nDuring LIC stages the contrast enhancement is applied to gray\nscale LIC image. During the scalar coloring stage the contrast\nenhancement is applied to the lightness channel of the color\nimage in HSL color space. The histogram stretching is implemented\nas follows:\n\n\n    L = (L-m)/(M-m)\n\nwhere, L is the fragment intensity/lightness, m is the\nintensity/lightness to map to 0, M is the intensity/lightness to\nmap to 1. The default values of m and M are the min and max taken\nover all fragments.\n\nThis increase the dynamic range and contrast in the LIC'd image,\nboth of which are natuarly attenuated by the convolution\nproccess.\n\nValues\n\n\n  ENHANCE_CONTRAST_OFF   -- don't enhance LIC or scalar colors\n  ENHANCE_CONTRAST_LIC   -- enhance in LIC high-pass input and\noutput\n  ENHANCE_CONTRAST_COLOR -- enhance after scalars are combined\nwith LIC\n  ENHANCE_CONTRAST_BOTH  -- enhance in LIC stages and after\nscalar colors\n\nThis feature is disabled by default.\n"},
  {(char*)"GetLowLICContrastEnhancementFactor", PyvtkSurfaceLICPainter_GetLowLICContrastEnhancementFactor, METH_VARARGS,
   (char*)"V.GetLowLICContrastEnhancementFactor() -> float\nC++: double GetLowLICContrastEnhancementFactor()\n\nThis feature is used to fine tune the contrast enhancement. There\nare two modes AUTOMATIC and MANUAL.In AUTOMATIC mode values are\nprovided indicating the fraction of the range to adjust M and m\nby, during contrast enahncement histogram stretching. M and m are\nthe intensity/lightness values that map to 1 and 0. (see\nEnhanceContrast for an explanation of the mapping procedure). m\nand M are computed using the factors as follows:\n\n\n    m = min(C) + mFactor * (max(C) - min(C))\n    M = max(C) - MFactor * (max(C) - min(C))\n\nthe default values for mFactor and MFactor are 0 which result in\nm = min(C), M = max(C), taken over the entire image. Modifying\nmFactor and MFactor above or below zero provide control over the\nsaturation/ de-saturation during contrast enhancement.\n"},
  {(char*)"GetHighLICContrastEnhancementFactor", PyvtkSurfaceLICPainter_GetHighLICContrastEnhancementFactor, METH_VARARGS,
   (char*)"V.GetHighLICContrastEnhancementFactor() -> float\nC++: double GetHighLICContrastEnhancementFactor()\n\nThis feature is used to fine tune the contrast enhancement. There\nare two modes AUTOMATIC and MANUAL.In AUTOMATIC mode values are\nprovided indicating the fraction of the range to adjust M and m\nby, during contrast enahncement histogram stretching. M and m are\nthe intensity/lightness values that map to 1 and 0. (see\nEnhanceContrast for an explanation of the mapping procedure). m\nand M are computed using the factors as follows:\n\n\n    m = min(C) + mFactor * (max(C) - min(C))\n    M = max(C) - MFactor * (max(C) - min(C))\n\nthe default values for mFactor and MFactor are 0 which result in\nm = min(C), M = max(C), taken over the entire image. Modifying\nmFactor and MFactor above or below zero provide control over the\nsaturation/ de-saturation during contrast enhancement.\n"},
  {(char*)"SetLowLICContrastEnhancementFactor", PyvtkSurfaceLICPainter_SetLowLICContrastEnhancementFactor, METH_VARARGS,
   (char*)"V.SetLowLICContrastEnhancementFactor(float)\nC++: void SetLowLICContrastEnhancementFactor(double val)\n\nThis feature is used to fine tune the contrast enhancement. There\nare two modes AUTOMATIC and MANUAL.In AUTOMATIC mode values are\nprovided indicating the fraction of the range to adjust M and m\nby, during contrast enahncement histogram stretching. M and m are\nthe intensity/lightness values that map to 1 and 0. (see\nEnhanceContrast for an explanation of the mapping procedure). m\nand M are computed using the factors as follows:\n\n\n    m = min(C) + mFactor * (max(C) - min(C))\n    M = max(C) - MFactor * (max(C) - min(C))\n\nthe default values for mFactor and MFactor are 0 which result in\nm = min(C), M = max(C), taken over the entire image. Modifying\nmFactor and MFactor above or below zero provide control over the\nsaturation/ de-saturation during contrast enhancement.\n"},
  {(char*)"SetHighLICContrastEnhancementFactor", PyvtkSurfaceLICPainter_SetHighLICContrastEnhancementFactor, METH_VARARGS,
   (char*)"V.SetHighLICContrastEnhancementFactor(float)\nC++: void SetHighLICContrastEnhancementFactor(double val)\n\nThis feature is used to fine tune the contrast enhancement. There\nare two modes AUTOMATIC and MANUAL.In AUTOMATIC mode values are\nprovided indicating the fraction of the range to adjust M and m\nby, during contrast enahncement histogram stretching. M and m are\nthe intensity/lightness values that map to 1 and 0. (see\nEnhanceContrast for an explanation of the mapping procedure). m\nand M are computed using the factors as follows:\n\n\n    m = min(C) + mFactor * (max(C) - min(C))\n    M = max(C) - MFactor * (max(C) - min(C))\n\nthe default values for mFactor and MFactor are 0 which result in\nm = min(C), M = max(C), taken over the entire image. Modifying\nmFactor and MFactor above or below zero provide control over the\nsaturation/ de-saturation during contrast enhancement.\n"},
  {(char*)"GetLowColorContrastEnhancementFactor", PyvtkSurfaceLICPainter_GetLowColorContrastEnhancementFactor, METH_VARARGS,
   (char*)"V.GetLowColorContrastEnhancementFactor() -> float\nC++: double GetLowColorContrastEnhancementFactor()\n\n"},
  {(char*)"GetHighColorContrastEnhancementFactor", PyvtkSurfaceLICPainter_GetHighColorContrastEnhancementFactor, METH_VARARGS,
   (char*)"V.GetHighColorContrastEnhancementFactor() -> float\nC++: double GetHighColorContrastEnhancementFactor()\n\n"},
  {(char*)"SetLowColorContrastEnhancementFactor", PyvtkSurfaceLICPainter_SetLowColorContrastEnhancementFactor, METH_VARARGS,
   (char*)"V.SetLowColorContrastEnhancementFactor(float)\nC++: void SetLowColorContrastEnhancementFactor(double val)\n\n"},
  {(char*)"SetHighColorContrastEnhancementFactor", PyvtkSurfaceLICPainter_SetHighColorContrastEnhancementFactor, METH_VARARGS,
   (char*)"V.SetHighColorContrastEnhancementFactor(float)\nC++: void SetHighColorContrastEnhancementFactor(double val)\n\n"},
  {(char*)"SetAntiAlias", PyvtkSurfaceLICPainter_SetAntiAlias, METH_VARARGS,
   (char*)"V.SetAntiAlias(int)\nC++: void SetAntiAlias(int val)\n\nEnable/Disable the anti-aliasing pass. This optional pass\n(disabled by default) can be enabled to reduce jagged patterns in\nthe final LIC image. Values greater than 0 control the number of\niterations, 1 is typically sufficient.\n"},
  {(char*)"AntiAliasOn", PyvtkSurfaceLICPainter_AntiAliasOn, METH_VARARGS,
   (char*)"V.AntiAliasOn()\nC++: void AntiAliasOn()\n\nEnable/Disable the anti-aliasing pass. This optional pass\n(disabled by default) can be enabled to reduce jagged patterns in\nthe final LIC image. Values greater than 0 control the number of\niterations, 1 is typically sufficient.\n"},
  {(char*)"AntiAliasOff", PyvtkSurfaceLICPainter_AntiAliasOff, METH_VARARGS,
   (char*)"V.AntiAliasOff()\nC++: void AntiAliasOff()\n\nEnable/Disable the anti-aliasing pass. This optional pass\n(disabled by default) can be enabled to reduce jagged patterns in\nthe final LIC image. Values greater than 0 control the number of\niterations, 1 is typically sufficient.\n"},
  {(char*)"GetAntiAlias", PyvtkSurfaceLICPainter_GetAntiAlias, METH_VARARGS,
   (char*)"V.GetAntiAlias() -> int\nC++: int GetAntiAlias()\n\nEnable/Disable the anti-aliasing pass. This optional pass\n(disabled by default) can be enabled to reduce jagged patterns in\nthe final LIC image. Values greater than 0 control the number of\niterations, 1 is typically sufficient.\n"},
  {(char*)"SetColorMode", PyvtkSurfaceLICPainter_SetColorMode, METH_VARARGS,
   (char*)"V.SetColorMode(int)\nC++: void SetColorMode(int val)\n\nSet/Get the color mode. The color mode controls how scalar colors\nare combined with the LIC in the final image. The BLEND mode\ncombines scalar colors with LIC intensities with proportional\nblending controled by the LICIntensity parameter. The MAP mode\ncombines scalar colors with LIC, by multiplication the HSL\nrepresntation of color's lightness.\n\nThe default is COLOR_MODE_BLEND.\n"},
  {(char*)"GetColorMode", PyvtkSurfaceLICPainter_GetColorMode, METH_VARARGS,
   (char*)"V.GetColorMode() -> int\nC++: int GetColorMode()\n\nSet/Get the color mode. The color mode controls how scalar colors\nare combined with the LIC in the final image. The BLEND mode\ncombines scalar colors with LIC intensities with proportional\nblending controled by the LICIntensity parameter. The MAP mode\ncombines scalar colors with LIC, by multiplication the HSL\nrepresntation of color's lightness.\n\nThe default is COLOR_MODE_BLEND.\n"},
  {(char*)"SetLICIntensity", PyvtkSurfaceLICPainter_SetLICIntensity, METH_VARARGS,
   (char*)"V.SetLICIntensity(float)\nC++: void SetLICIntensity(double val)\n\nFactor used when blend mode is set to COLOR_MODE_BLEND. This\ncontrols the contribution of the LIC in the final output image as\nfollows:\n\n\n  c = LIC * LICIntensity + scalar * (1 - LICIntensity);\n\n0.0 produces same result as disabling LIC altogether, while 1.0\nimplies show LIC result alone.\n"},
  {(char*)"GetLICIntensity", PyvtkSurfaceLICPainter_GetLICIntensity, METH_VARARGS,
   (char*)"V.GetLICIntensity() -> float\nC++: double GetLICIntensity()\n\nFactor used when blend mode is set to COLOR_MODE_BLEND. This\ncontrols the contribution of the LIC in the final output image as\nfollows:\n\n\n  c = LIC * LICIntensity + scalar * (1 - LICIntensity);\n\n0.0 produces same result as disabling LIC altogether, while 1.0\nimplies show LIC result alone.\n"},
  {(char*)"SetMapModeBias", PyvtkSurfaceLICPainter_SetMapModeBias, METH_VARARGS,
   (char*)"V.SetMapModeBias(float)\nC++: void SetMapModeBias(double val)\n\nFactor used when blend mode is set to COLOR_MODE_MAP. This adds a\nbias to the LIC image. The purpose of this is to adjust the\nbrightness when a brighter image is desired. The default of 0.0\nresults in no change. Values gretaer than 0.0 will brighten the\nimage while values less than 0.0 darken the image.\n"},
  {(char*)"GetMapModeBias", PyvtkSurfaceLICPainter_GetMapModeBias, METH_VARARGS,
   (char*)"V.GetMapModeBias() -> float\nC++: double GetMapModeBias()\n\nFactor used when blend mode is set to COLOR_MODE_MAP. This adds a\nbias to the LIC image. The purpose of this is to adjust the\nbrightness when a brighter image is desired. The default of 0.0\nresults in no change. Values gretaer than 0.0 will brighten the\nimage while values less than 0.0 darken the image.\n"},
  {(char*)"SetNoiseDataSet", PyvtkSurfaceLICPainter_SetNoiseDataSet, METH_VARARGS,
   (char*)"V.SetNoiseDataSet(vtkImageData)\nC++: void SetNoiseDataSet(vtkImageData *data)\n\nSet the data containing a noise array as active scalars. Active\nscalars array will be converted into a texture for use as noise\nin the LIC process. Noise datasets are expected to be gray scale.\n"},
  {(char*)"GetNoiseDataSet", PyvtkSurfaceLICPainter_GetNoiseDataSet, METH_VARARGS,
   (char*)"V.GetNoiseDataSet() -> vtkImageData\nC++: vtkImageData *GetNoiseDataSet()\n\nSet the data containing a noise array as active scalars. Active\nscalars array will be converted into a texture for use as noise\nin the LIC process. Noise datasets are expected to be gray scale.\n"},
  {(char*)"SetGenerateNoiseTexture", PyvtkSurfaceLICPainter_SetGenerateNoiseTexture, METH_VARARGS,
   (char*)"V.SetGenerateNoiseTexture(int)\nC++: void SetGenerateNoiseTexture(int shouldGenerate)\n\nSet/Get the noise texture source. When not set the default\n200x200 white noise texture is used (see\nVTKData/Data/Data/noise.png). When set a noise texture is\ngenerated based on the following parameters:\n\n\n   NoiseType               - select noise type. Gaussian,\nUniform, etc\n   NoiseTextureSize        - number of pixels in square noise\ntexture(side)\n   NoiseGrainSize          - number of pixels each noise value\nspans(side)\n   MinNoiseValue           - minimum noise color >=0 && <\nMaxNoiseValue\n   MaxNoiseValue           - maximum noise color <=1 ** >\nMinNoiseValue\n   NumberOfNoiseLevels     - number of discrete noise colors\n   ImpulseNoiseProbability - impulse noise is generated when < 1\n   ImpulseNoiseBackgroundValue  - the background color for\nuntouched pixels\n   NoiseGeneratorSeed      - seed the random number generators\n\nChanging the noise texture gives one greater control over the\nlook of the final image. The default is 0 which results in the\nuse of a static 200x200 Gaussian noise texture. See\nVTKData/Data/Data/noise.png.\n"},
  {(char*)"GetGenerateNoiseTexture", PyvtkSurfaceLICPainter_GetGenerateNoiseTexture, METH_VARARGS,
   (char*)"V.GetGenerateNoiseTexture() -> int\nC++: int GetGenerateNoiseTexture()\n\nSet/Get the noise texture source. When not set the default\n200x200 white noise texture is used (see\nVTKData/Data/Data/noise.png). When set a noise texture is\ngenerated based on the following parameters:\n\n\n   NoiseType               - select noise type. Gaussian,\nUniform, etc\n   NoiseTextureSize        - number of pixels in square noise\ntexture(side)\n   NoiseGrainSize          - number of pixels each noise value\nspans(side)\n   MinNoiseValue           - minimum noise color >=0 && <\nMaxNoiseValue\n   MaxNoiseValue           - maximum noise color <=1 ** >\nMinNoiseValue\n   NumberOfNoiseLevels     - number of discrete noise colors\n   ImpulseNoiseProbability - impulse noise is generated when < 1\n   ImpulseNoiseBackgroundValue  - the background color for\nuntouched pixels\n   NoiseGeneratorSeed      - seed the random number generators\n\nChanging the noise texture gives one greater control over the\nlook of the final image. The default is 0 which results in the\nuse of a static 200x200 Gaussian noise texture. See\nVTKData/Data/Data/noise.png.\n"},
  {(char*)"SetNoiseType", PyvtkSurfaceLICPainter_SetNoiseType, METH_VARARGS,
   (char*)"V.SetNoiseType(int)\nC++: void SetNoiseType(int type)\n\nSelect the statistical distribution of randomly generated noise\nvalues. With uniform noise there is greater control over the\nrange of values in the noise texture. The Default is\nNOISE_TYPE_GAUSSIAN.\n"},
  {(char*)"GetNoiseType", PyvtkSurfaceLICPainter_GetNoiseType, METH_VARARGS,
   (char*)"V.GetNoiseType() -> int\nC++: int GetNoiseType()\n\nSelect the statistical distribution of randomly generated noise\nvalues. With uniform noise there is greater control over the\nrange of values in the noise texture. The Default is\nNOISE_TYPE_GAUSSIAN.\n"},
  {(char*)"SetNoiseTextureSize", PyvtkSurfaceLICPainter_SetNoiseTextureSize, METH_VARARGS,
   (char*)"V.SetNoiseTextureSize(int)\nC++: void SetNoiseTextureSize(int length)\n\nSet/Get the side length in pixels of the noise texture. The\ntexture will be length^2 pixels in area.\n"},
  {(char*)"GetNoiseTextureSize", PyvtkSurfaceLICPainter_GetNoiseTextureSize, METH_VARARGS,
   (char*)"V.GetNoiseTextureSize() -> int\nC++: int GetNoiseTextureSize()\n\nSet/Get the side length in pixels of the noise texture. The\ntexture will be length^2 pixels in area.\n"},
  {(char*)"SetNoiseGrainSize", PyvtkSurfaceLICPainter_SetNoiseGrainSize, METH_VARARGS,
   (char*)"V.SetNoiseGrainSize(int)\nC++: void SetNoiseGrainSize(int val)\n\nSet/Get the side length in pixels of the noise values in the\nnoise texture. Each noise value will be length^2 pixels in area.\n"},
  {(char*)"GetNoiseGrainSize", PyvtkSurfaceLICPainter_GetNoiseGrainSize, METH_VARARGS,
   (char*)"V.GetNoiseGrainSize() -> int\nC++: int GetNoiseGrainSize()\n\nSet/Get the side length in pixels of the noise values in the\nnoise texture. Each noise value will be length^2 pixels in area.\n"},
  {(char*)"SetMinNoiseValue", PyvtkSurfaceLICPainter_SetMinNoiseValue, METH_VARARGS,
   (char*)"V.SetMinNoiseValue(float)\nC++: void SetMinNoiseValue(double val)\n\nSet/Get the minimum and mximum  gray scale values that the\ngenerated noise can take on. The generated noise will be in the\nrange of MinNoiseValue to MaxNoiseValue. Values are clamped\nwithin 0 to 1. MinNoiseValue must be less than MaxNoiseValue.\n"},
  {(char*)"SetMaxNoiseValue", PyvtkSurfaceLICPainter_SetMaxNoiseValue, METH_VARARGS,
   (char*)"V.SetMaxNoiseValue(float)\nC++: void SetMaxNoiseValue(double val)\n\nSet/Get the minimum and mximum  gray scale values that the\ngenerated noise can take on. The generated noise will be in the\nrange of MinNoiseValue to MaxNoiseValue. Values are clamped\nwithin 0 to 1. MinNoiseValue must be less than MaxNoiseValue.\n"},
  {(char*)"GetMinNoiseValue", PyvtkSurfaceLICPainter_GetMinNoiseValue, METH_VARARGS,
   (char*)"V.GetMinNoiseValue() -> float\nC++: double GetMinNoiseValue()\n\nSet/Get the minimum and mximum  gray scale values that the\ngenerated noise can take on. The generated noise will be in the\nrange of MinNoiseValue to MaxNoiseValue. Values are clamped\nwithin 0 to 1. MinNoiseValue must be less than MaxNoiseValue.\n"},
  {(char*)"GetMaxNoiseValue", PyvtkSurfaceLICPainter_GetMaxNoiseValue, METH_VARARGS,
   (char*)"V.GetMaxNoiseValue() -> float\nC++: double GetMaxNoiseValue()\n\nSet/Get the minimum and mximum  gray scale values that the\ngenerated noise can take on. The generated noise will be in the\nrange of MinNoiseValue to MaxNoiseValue. Values are clamped\nwithin 0 to 1. MinNoiseValue must be less than MaxNoiseValue.\n"},
  {(char*)"SetNumberOfNoiseLevels", PyvtkSurfaceLICPainter_SetNumberOfNoiseLevels, METH_VARARGS,
   (char*)"V.SetNumberOfNoiseLevels(int)\nC++: void SetNumberOfNoiseLevels(int val)\n\nSet/Get the number of discrete values a noise pixel may take on.\nDefault 1024.\n"},
  {(char*)"GetNumberOfNoiseLevels", PyvtkSurfaceLICPainter_GetNumberOfNoiseLevels, METH_VARARGS,
   (char*)"V.GetNumberOfNoiseLevels() -> int\nC++: int GetNumberOfNoiseLevels()\n\nSet/Get the number of discrete values a noise pixel may take on.\nDefault 1024.\n"},
  {(char*)"SetImpulseNoiseProbability", PyvtkSurfaceLICPainter_SetImpulseNoiseProbability, METH_VARARGS,
   (char*)"V.SetImpulseNoiseProbability(float)\nC++: void SetImpulseNoiseProbability(double val)\n\nControl the density of of the noise. A value of 1.0 produces\nuniform random noise while values < 1.0 produce impulse noise\nwith the given probabilty.\n"},
  {(char*)"GetImpulseNoiseProbability", PyvtkSurfaceLICPainter_GetImpulseNoiseProbability, METH_VARARGS,
   (char*)"V.GetImpulseNoiseProbability() -> float\nC++: double GetImpulseNoiseProbability()\n\nControl the density of of the noise. A value of 1.0 produces\nuniform random noise while values < 1.0 produce impulse noise\nwith the given probabilty.\n"},
  {(char*)"SetImpulseNoiseBackgroundValue", PyvtkSurfaceLICPainter_SetImpulseNoiseBackgroundValue, METH_VARARGS,
   (char*)"V.SetImpulseNoiseBackgroundValue(float)\nC++: void SetImpulseNoiseBackgroundValue(double val)\n\nThe color to use for untouched pixels when impulse noise\nprobability < 1.\n"},
  {(char*)"GetImpulseNoiseBackgroundValue", PyvtkSurfaceLICPainter_GetImpulseNoiseBackgroundValue, METH_VARARGS,
   (char*)"V.GetImpulseNoiseBackgroundValue() -> float\nC++: double GetImpulseNoiseBackgroundValue()\n\nThe color to use for untouched pixels when impulse noise\nprobability < 1.\n"},
  {(char*)"SetNoiseGeneratorSeed", PyvtkSurfaceLICPainter_SetNoiseGeneratorSeed, METH_VARARGS,
   (char*)"V.SetNoiseGeneratorSeed(int)\nC++: void SetNoiseGeneratorSeed(int val)\n\nSet/Get the seed value used by the random number generator.\n"},
  {(char*)"GetNoiseGeneratorSeed", PyvtkSurfaceLICPainter_GetNoiseGeneratorSeed, METH_VARARGS,
   (char*)"V.GetNoiseGeneratorSeed() -> int\nC++: int GetNoiseGeneratorSeed()\n\nSet/Get the seed value used by the random number generator.\n"},
  {(char*)"SetCompositeStrategy", PyvtkSurfaceLICPainter_SetCompositeStrategy, METH_VARARGS,
   (char*)"V.SetCompositeStrategy(int)\nC++: void SetCompositeStrategy(int val)\n\nControl the screen space decomposition where LIC is computed.\n"},
  {(char*)"GetCompositeStrategy", PyvtkSurfaceLICPainter_GetCompositeStrategy, METH_VARARGS,
   (char*)"V.GetCompositeStrategy() -> int\nC++: int GetCompositeStrategy()\n\nControl the screen space decomposition where LIC is computed.\n"},
  {(char*)"IsSupported", PyvtkSurfaceLICPainter_IsSupported, METH_VARARGS | METH_STATIC,
   (char*)"V.IsSupported(vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *context)\n\nReturns true if the rendering context supports extensions needed\nby this painter.\n"},
  {(char*)"WriteTimerLog", PyvtkSurfaceLICPainter_WriteTimerLog, METH_VARARGS,
   (char*)"V.WriteTimerLog(string)\nC++: virtual void WriteTimerLog(const char *)\n\nMethods used for parallel benchmarks. Use cmake to define\nvtkSurfaceLICPainterTIME to enable benchmarks. During each update\ntiming information is stored, it can be written to disk by\ncalling WriteLog.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSurfaceLICPainter_StaticNew()
{
  return vtkSurfaceLICPainter::New();
}

PyObject *PyVTKClass_vtkSurfaceLICPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSurfaceLICPainter_StaticNew,
    PyvtkSurfaceLICPainter_Methods,
    "vtkSurfaceLICPainter", modulename,
    NULL, NULL,
    PyvtkSurfaceLICPainter_Doc(),
    PyVTKClass_vtkPainterNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 13; c++)
      {
      static const struct { const char *name; int value; }
        constants[13] = {
          { "ENHANCE_CONTRAST_OFF", vtkSurfaceLICPainter::ENHANCE_CONTRAST_OFF },
          { "ENHANCE_CONTRAST_LIC", vtkSurfaceLICPainter::ENHANCE_CONTRAST_LIC },
          { "ENHANCE_CONTRAST_COLOR", vtkSurfaceLICPainter::ENHANCE_CONTRAST_COLOR },
          { "ENHANCE_CONTRAST_BOTH", vtkSurfaceLICPainter::ENHANCE_CONTRAST_BOTH },
          { "COLOR_MODE_BLEND", vtkSurfaceLICPainter::COLOR_MODE_BLEND },
          { "COLOR_MODE_MAP", vtkSurfaceLICPainter::COLOR_MODE_MAP },
          { "NOISE_TYPE_UNIFORM", vtkSurfaceLICPainter::NOISE_TYPE_UNIFORM },
          { "NOISE_TYPE_GAUSSIAN", vtkSurfaceLICPainter::NOISE_TYPE_GAUSSIAN },
          { "NOISE_TYPE_PERLIN", vtkSurfaceLICPainter::NOISE_TYPE_PERLIN },
          { "COMPOSITE_INPLACE", vtkSurfaceLICPainter::COMPOSITE_INPLACE },
          { "COMPOSITE_INPLACE_DISJOINT", vtkSurfaceLICPainter::COMPOSITE_INPLACE_DISJOINT },
          { "COMPOSITE_BALANCED", vtkSurfaceLICPainter::COMPOSITE_BALANCED },
          { "COMPOSITE_AUTO", vtkSurfaceLICPainter::COMPOSITE_AUTO },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSurfaceLICPainter_Doc()
{
  static const char *docstring[] = {
    "vtkSurfaceLICPainter - painter that performs LIC on the surface of\n\n",
    "Superclass: vtkPainter\n\n",
    "vtkSurfaceLICPainter painter performs LIC on the surface of arbitrary\n geometry. Point vectors are used as the vector field for generating\nthe LIC.\n The implementation was originallu  based on \"Image Space Based\nVisualization\n on Unsteady Flow on Surfaces\" by Laramee, Jobard and Hauser appeared\nin\n proceedings of IEEE Visualization '03, pages 131-138.\n\n\n Internal pipeline:\n\nnoise\n    |\n    [ PROJ ",
    "(GAT) (COMP) LIC2D (SCAT) SHADE (CCE) DEP]\n    |                                               | vectors        \n                                surface LIC  PROj  - prject vectors\nonto surface GAT   - gather data for compositing and guard pixel\ngeneration  (parallel only) COMP  - composite gathered data LIC2D -\nline intengral convolution, see vtkLineIntegralConvolution2D. SCAT  -\nscatter result (",
    "parallel only, not all compositors use it) SHADE -\ncombine LIC and scalar colors CCE   - color contrast enhancement\n(optional) DEP   - depth test and copy to back buffer\n\nThe result of each stage is cached in a texture so that during\ninteraction a stage may be skipped if the user has not modified its\nparamters or input data.\n\nThe parallel parts of algorithm are implemented in\nvtkPSurfaceLICPainter",
    ". Note that for MPI enabled builds this class\nwill be automatically created by the object factory.\n\nSee also:\n\nvtkSurfaceLICDefaultPainter vtkLineIntegralConvolution2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSurfaceLICPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSurfaceLICPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSurfaceLICPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

