// python wrapper for vtkHyperOctreeSampleFunction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHyperOctreeSampleFunction.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHyperOctreeSampleFunction(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHyperOctreeSampleFunctionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkHyperOctreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkHyperOctreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkHyperOctreeAlgorithmNew
#endif

static const char **PyvtkHyperOctreeSampleFunction_Doc();


static PyObject *
PyvtkHyperOctreeSampleFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHyperOctreeSampleFunction::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperOctreeSampleFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperOctreeSampleFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperOctreeSampleFunction::NewInstance());

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
PyvtkHyperOctreeSampleFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHyperOctreeSampleFunction *tempr = vtkHyperOctreeSampleFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLevels() :
      op->vtkHyperOctreeSampleFunction::GetLevels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevels(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetLevels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetMinLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMinLevels() :
      op->vtkHyperOctreeSampleFunction::GetMinLevels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetMinLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinLevels(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetMinLevels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetThreshold() :
      op->vtkHyperOctreeSampleFunction::GetThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThreshold(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkHyperOctreeSampleFunction::GetDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimension(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

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
      op->SetSize(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeSampleFunction_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeSampleFunction_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkHyperOctreeSampleFunction_SetSize_s1(self, args);
    case 1:
      return PyvtkHyperOctreeSampleFunction_SetSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return NULL;
}



static PyObject *
PyvtkHyperOctreeSampleFunction_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkHyperOctreeSampleFunction::GetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeSampleFunction_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeSampleFunction_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkHyperOctreeSampleFunction_SetOrigin_s1(self, args);
    case 1:
      return PyvtkHyperOctreeSampleFunction_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkHyperOctreeSampleFunction_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkHyperOctreeSampleFunction::GetOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkHyperOctreeSampleFunction::GetWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWidth(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkHyperOctreeSampleFunction::GetHeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeight(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDepth() :
      op->vtkHyperOctreeSampleFunction::GetDepth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepth(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetDepth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetImplicitFunction(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetImplicitFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetImplicitFunction() :
      op->vtkHyperOctreeSampleFunction::GetImplicitFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarType(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkHyperOctreeSampleFunction::GetOutputScalarType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToDouble();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToFloat();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToLong();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedLong();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToInt();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToShort();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToChar();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkHyperOctreeSampleFunction::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperOctreeSampleFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperOctreeSampleFunction_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperOctreeSampleFunction_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperOctreeSampleFunction_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHyperOctreeSampleFunction\nC++: vtkHyperOctreeSampleFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperOctreeSampleFunction_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperOctreeSampleFunction\nC++: vtkHyperOctreeSampleFunction *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetLevels", PyvtkHyperOctreeSampleFunction_GetLevels, METH_VARARGS,
   (char*)"V.GetLevels() -> int\nC++: int GetLevels()\n\nReturn the maximum number of levels of the hyperoctree.\n\\post positive_result: result>=1\n"},
  {(char*)"SetLevels", PyvtkHyperOctreeSampleFunction_SetLevels, METH_VARARGS,
   (char*)"V.SetLevels(int)\nC++: void SetLevels(int levels)\n\nSet the maximum number of levels of the hyperoctree. If\nGetMinLevels()>=levels, GetMinLevels() is changed to levels-1.\n\\pre positive_levels: levels>=1\n\\post is_set: this->GetLevels()==levels\n\\post min_is_valid: this->GetMinLevels()<this->GetLevels()\n"},
  {(char*)"GetMinLevels", PyvtkHyperOctreeSampleFunction_GetMinLevels, METH_VARARGS,
   (char*)"V.GetMinLevels() -> int\nC++: int GetMinLevels()\n\nReturn the minimal number of levels of systematic subdivision.\n\\post positive_result: result>=0\n"},
  {(char*)"SetMinLevels", PyvtkHyperOctreeSampleFunction_SetMinLevels, METH_VARARGS,
   (char*)"V.SetMinLevels(int)\nC++: void SetMinLevels(int minLevels)\n\nSet the minimal number of levels of systematic subdivision.\n\\pre positive_minLevels: minLevels>=0\n\\post is_set: this->GetMinLevels()==minLevels\n"},
  {(char*)"GetThreshold", PyvtkHyperOctreeSampleFunction_GetThreshold, METH_VARARGS,
   (char*)"V.GetThreshold() -> float\nC++: double GetThreshold()\n\nReturn the threshold over which a subdivision is required.\n\\post positive_result: result>0\n"},
  {(char*)"SetThreshold", PyvtkHyperOctreeSampleFunction_SetThreshold, METH_VARARGS,
   (char*)"V.SetThreshold(float)\nC++: void SetThreshold(double threshold)\n\nSet the threshold over which a subdivision is required.\n\\pre positive_threshold: threshold>=0\n\\post is_set: this->GetThreshold()==threshold\n"},
  {(char*)"GetDimension", PyvtkHyperOctreeSampleFunction_GetDimension, METH_VARARGS,
   (char*)"V.GetDimension() -> int\nC++: int GetDimension()\n\nReturn the dimension of the tree (1D:binary tree(2 children),\n2D:quadtree(4 children), 3D:octree (8 children))\n\\post valid_result: result>=1 && result<=3\n"},
  {(char*)"SetDimension", PyvtkHyperOctreeSampleFunction_SetDimension, METH_VARARGS,
   (char*)"V.SetDimension(int)\nC++: void SetDimension(int dim)\n\n"},
  {(char*)"SetSize", PyvtkHyperOctreeSampleFunction_SetSize, METH_VARARGS,
   (char*)"V.SetSize(float, float, float)\nC++: void SetSize(double, double, double)\nV.SetSize((float, float, float))\nC++: void SetSize(double a[3])\n\n"},
  {(char*)"GetSize", PyvtkHyperOctreeSampleFunction_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> (float, float, float)\nC++: double *GetSize()\n\n"},
  {(char*)"SetOrigin", PyvtkHyperOctreeSampleFunction_SetOrigin, METH_VARARGS,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {(char*)"GetOrigin", PyvtkHyperOctreeSampleFunction_GetOrigin, METH_VARARGS,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {(char*)"GetWidth", PyvtkHyperOctreeSampleFunction_GetWidth, METH_VARARGS,
   (char*)"V.GetWidth() -> float\nC++: double GetWidth()\n\nReturn the length along the x-axis.\n\\post positive_result: result>0\n"},
  {(char*)"SetWidth", PyvtkHyperOctreeSampleFunction_SetWidth, METH_VARARGS,
   (char*)"V.SetWidth(float)\nC++: void SetWidth(double width)\n\nSet the length along the x-axis.\n\\pre positive_width: width>0\n\\post width_is_set: GetWidth()==width\n"},
  {(char*)"GetHeight", PyvtkHyperOctreeSampleFunction_GetHeight, METH_VARARGS,
   (char*)"V.GetHeight() -> float\nC++: double GetHeight()\n\nReturn the length along the y-axis. Relevant only if\nGetDimension()>=2\n\\post positive_result: result>0\n"},
  {(char*)"SetHeight", PyvtkHyperOctreeSampleFunction_SetHeight, METH_VARARGS,
   (char*)"V.SetHeight(float)\nC++: void SetHeight(double height)\n\nSet the length along the y-axis. Relevant only if\nGetDimension()>=2\n\\pre positive_height: height>0\n\\post height_is_set: GetHeight()==height\n"},
  {(char*)"GetDepth", PyvtkHyperOctreeSampleFunction_GetDepth, METH_VARARGS,
   (char*)"V.GetDepth() -> float\nC++: double GetDepth()\n\nReturn the length along the z-axis. Relevant only if\nGetDimension()>=3\n\\post positive_result: result>0\n"},
  {(char*)"SetDepth", PyvtkHyperOctreeSampleFunction_SetDepth, METH_VARARGS,
   (char*)"V.SetDepth(float)\nC++: void SetDepth(double depth)\n\nReturn the length along the z-axis. Relevant only if\nGetDimension()>=3\n\\pre positive_depth: depth>0\n\\post depth_is_set: GetDepth()==depth\n"},
  {(char*)"SetImplicitFunction", PyvtkHyperOctreeSampleFunction_SetImplicitFunction, METH_VARARGS,
   (char*)"V.SetImplicitFunction(vtkImplicitFunction)\nC++: virtual void SetImplicitFunction(vtkImplicitFunction *)\n\nSpecify the implicit function to use to generate data.\n"},
  {(char*)"GetImplicitFunction", PyvtkHyperOctreeSampleFunction_GetImplicitFunction, METH_VARARGS,
   (char*)"V.GetImplicitFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetImplicitFunction()\n\nSpecify the implicit function to use to generate data.\n"},
  {(char*)"SetOutputScalarType", PyvtkHyperOctreeSampleFunction_SetOutputScalarType, METH_VARARGS,
   (char*)"V.SetOutputScalarType(int)\nC++: void SetOutputScalarType(int a)\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"GetOutputScalarType", PyvtkHyperOctreeSampleFunction_GetOutputScalarType, METH_VARARGS,
   (char*)"V.GetOutputScalarType() -> int\nC++: int GetOutputScalarType()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToDouble", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToDouble, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToFloat", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToFloat, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToLong", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToLong, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToLong()\nC++: void SetOutputScalarTypeToLong()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedLong", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToUnsignedLong, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToUnsignedLong()\nC++: void SetOutputScalarTypeToUnsignedLong()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToInt", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToInt, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToInt()\nC++: void SetOutputScalarTypeToInt()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedInt", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToUnsignedInt, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToUnsignedInt()\nC++: void SetOutputScalarTypeToUnsignedInt()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToShort", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToShort, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToShort()\nC++: void SetOutputScalarTypeToShort()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedShort", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToUnsignedShort, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToUnsignedShort()\nC++: void SetOutputScalarTypeToUnsignedShort()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToChar", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToChar, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToChar()\nC++: void SetOutputScalarTypeToChar()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedChar", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToUnsignedChar, METH_VARARGS,
   (char*)"V.SetOutputScalarTypeToUnsignedChar()\nC++: void SetOutputScalarTypeToUnsignedChar()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"GetMTime", PyvtkHyperOctreeSampleFunction_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the implicit function.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperOctreeSampleFunction_StaticNew()
{
  return vtkHyperOctreeSampleFunction::New();
}

PyObject *PyVTKClass_vtkHyperOctreeSampleFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperOctreeSampleFunction_StaticNew,
    PyvtkHyperOctreeSampleFunction_Methods,
    "vtkHyperOctreeSampleFunction", modulename,
    NULL, NULL,
    PyvtkHyperOctreeSampleFunction_Doc(),
    PyVTKClass_vtkHyperOctreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHyperOctreeSampleFunction_Doc()
{
  static const char *docstring[] = {
    "vtkHyperOctreeSampleFunction - sample an implicit function over an\n\n",
    "Superclass: vtkHyperOctreeAlgorithm\n\n",
    "vtkHyperOctreeSampleFunction is a source object that evaluates an\nimplicit function to drive the subdivision process. The user can\nspecify the threshold over which a subdivision occurs, the maximum\nand minimum level of subdivisions and the dimension of the\nhyperoctree.\n\nSee Also:\n\nvtkSampleFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperOctreeSampleFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperOctreeSampleFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperOctreeSampleFunction", o) != 0)
    {
    Py_DECREF(o);
    }

}

