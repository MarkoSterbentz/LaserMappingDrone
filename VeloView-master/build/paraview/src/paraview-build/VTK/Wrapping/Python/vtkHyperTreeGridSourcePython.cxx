// python wrapper for vtkHyperTreeGridSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkHyperTreeGridSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHyperTreeGridSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHyperTreeGridSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkHyperTreeGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkHyperTreeGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkHyperTreeGridAlgorithmNew
#endif

static const char **PyvtkHyperTreeGridSource_Doc();


static PyObject *
PyvtkHyperTreeGridSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHyperTreeGridSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperTreeGridSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridSource::NewInstance());

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
PyvtkHyperTreeGridSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHyperTreeGridSource *tempr = vtkHyperTreeGridSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumLevel() :
      op->vtkHyperTreeGridSource::GetMaximumLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLevel(temp0);
      }
    else
      {
      op->vtkHyperTreeGridSource::SetMaximumLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

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
      op->vtkHyperTreeGridSource::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

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
      op->vtkHyperTreeGridSource::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkHyperTreeGridSource_SetOrigin_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridSource_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkHyperTreeGridSource_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkHyperTreeGridSource::GetOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetGridScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

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
      op->SetGridScale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHyperTreeGridSource::SetGridScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetGridScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGridScale(temp0);
      }
    else
      {
      op->vtkHyperTreeGridSource::SetGridScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetGridScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkHyperTreeGridSource_SetGridScale_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridSource_SetGridScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGridScale");
  return NULL;
}



static PyObject *
PyvtkHyperTreeGridSource_GetGridScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetGridScale() :
      op->vtkHyperTreeGridSource::GetGridScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetGridSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetGridSize(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHyperTreeGridSource::SetGridSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetGridSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  unsigned int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGridSize(temp0);
      }
    else
      {
      op->vtkHyperTreeGridSource::SetGridSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetGridSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkHyperTreeGridSource_SetGridSize_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridSource_SetGridSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGridSize");
  return NULL;
}



static PyObject *
PyvtkHyperTreeGridSource_GetGridSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetGridSize() :
      op->vtkHyperTreeGridSource::GetGridSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetTransposedRootIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransposedRootIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTransposedRootIndexing(temp0);
      }
    else
      {
      op->vtkHyperTreeGridSource::SetTransposedRootIndexing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetTransposedRootIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransposedRootIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetTransposedRootIndexing() :
      op->vtkHyperTreeGridSource::GetTransposedRootIndexing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetIndexingModeToKJI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexingModeToKJI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndexingModeToKJI();
      }
    else
      {
      op->vtkHyperTreeGridSource::SetIndexingModeToKJI();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetIndexingModeToIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexingModeToIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndexingModeToIJK();
      }
    else
      {
      op->vtkHyperTreeGridSource::SetIndexingModeToIJK();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetBranchFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBranchFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBranchFactor(temp0);
      }
    else
      {
      op->vtkHyperTreeGridSource::SetBranchFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetBranchFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBranchFactorMinValue() :
      op->vtkHyperTreeGridSource::GetBranchFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetBranchFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBranchFactorMaxValue() :
      op->vtkHyperTreeGridSource::GetBranchFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetBranchFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBranchFactor() :
      op->vtkHyperTreeGridSource::GetBranchFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  unsigned int temp0;
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
      op->vtkHyperTreeGridSource::SetDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetDimensionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDimensionMinValue() :
      op->vtkHyperTreeGridSource::GetDimensionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetDimensionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDimensionMaxValue() :
      op->vtkHyperTreeGridSource::GetDimensionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkHyperTreeGridSource::GetDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetUseDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDescriptor(temp0);
      }
    else
      {
      op->vtkHyperTreeGridSource::SetUseDescriptor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetUseDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseDescriptor() :
      op->vtkHyperTreeGridSource::GetUseDescriptor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_UseDescriptorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDescriptorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDescriptorOn();
      }
    else
      {
      op->vtkHyperTreeGridSource::UseDescriptorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_UseDescriptorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDescriptorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDescriptorOff();
      }
    else
      {
      op->vtkHyperTreeGridSource::UseDescriptorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetUseMaterialMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMaterialMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseMaterialMask(temp0);
      }
    else
      {
      op->vtkHyperTreeGridSource::SetUseMaterialMask(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetUseMaterialMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMaterialMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseMaterialMask() :
      op->vtkHyperTreeGridSource::GetUseMaterialMask());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_UseMaterialMaskOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMaterialMaskOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseMaterialMaskOn();
      }
    else
      {
      op->vtkHyperTreeGridSource::UseMaterialMaskOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_UseMaterialMaskOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMaterialMaskOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseMaterialMaskOff();
      }
    else
      {
      op->vtkHyperTreeGridSource::UseMaterialMaskOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDescriptor(temp0);
      }
    else
      {
      op->vtkHyperTreeGridSource::SetDescriptor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetDescriptor() :
      op->vtkHyperTreeGridSource::GetDescriptor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetMaterialMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaterialMask(temp0);
      }
    else
      {
      op->vtkHyperTreeGridSource::SetMaterialMask(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetMaterialMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetMaterialMask() :
      op->vtkHyperTreeGridSource::GetMaterialMask());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetDescriptorBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescriptorBits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  vtkBitArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBitArray"))
    {
    if (ap.IsBound())
      {
      op->SetDescriptorBits(temp0);
      }
    else
      {
      op->vtkHyperTreeGridSource::SetDescriptorBits(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetDescriptorBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptorBits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->GetDescriptorBits() :
      op->vtkHyperTreeGridSource::GetDescriptorBits());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetLevelZeroMaterialIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelZeroMaterialIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->SetLevelZeroMaterialIndex(temp0);
      }
    else
      {
      op->vtkHyperTreeGridSource::SetLevelZeroMaterialIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetMaterialMaskBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialMaskBits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  vtkBitArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBitArray"))
    {
    if (ap.IsBound())
      {
      op->SetMaterialMaskBits(temp0);
      }
    else
      {
      op->vtkHyperTreeGridSource::SetMaterialMaskBits(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetMaterialMaskBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialMaskBits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->GetMaterialMaskBits() :
      op->vtkHyperTreeGridSource::GetMaterialMaskBits());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetQuadric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  vtkQuadric *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkQuadric"))
    {
    if (ap.IsBound())
      {
      op->SetQuadric(temp0);
      }
    else
      {
      op->vtkHyperTreeGridSource::SetQuadric(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetQuadric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkQuadric *tempr = (ap.IsBound() ?
      op->GetQuadric() :
      op->vtkHyperTreeGridSource::GetQuadric());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetQuadricCoefficients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  double temp0[10];
  double save0[10];
  const int size0 = 10;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetQuadricCoefficients(temp0);
      }
    else
      {
      op->vtkHyperTreeGridSource::SetQuadricCoefficients(temp0);
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

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetQuadricCoefficients_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  double temp0[10];
  double save0[10];
  const int size0 = 10;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetQuadricCoefficients(temp0);
      }
    else
      {
      op->vtkHyperTreeGridSource::GetQuadricCoefficients(temp0);
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

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_GetQuadricCoefficients_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetQuadricCoefficients() :
      op->vtkHyperTreeGridSource::GetQuadricCoefficients());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_GetQuadricCoefficients(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkHyperTreeGridSource_GetQuadricCoefficients_s1(self, args);
    case 0:
      return PyvtkHyperTreeGridSource_GetQuadricCoefficients_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetQuadricCoefficients");
  return NULL;
}



static PyObject *
PyvtkHyperTreeGridSource_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkHyperTreeGridSource::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_ConvertDescriptorStringToBitArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertDescriptorStringToBitArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  std::string temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->ConvertDescriptorStringToBitArray(temp0) :
      op->vtkHyperTreeGridSource::ConvertDescriptorStringToBitArray(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_ConvertMaterialMaskStringToBitArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertMaterialMaskStringToBitArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  std::string temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->ConvertMaterialMaskStringToBitArray(temp0) :
      op->vtkHyperTreeGridSource::ConvertMaterialMaskStringToBitArray(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridSource_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperTreeGridSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperTreeGridSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperTreeGridSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHyperTreeGridSource\nC++: vtkHyperTreeGridSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperTreeGridSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperTreeGridSource\nC++: vtkHyperTreeGridSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMaximumLevel", PyvtkHyperTreeGridSource_GetMaximumLevel, METH_VARARGS,
   (char*)"V.GetMaximumLevel() -> int\nC++: unsigned int GetMaximumLevel()\n\nReturn the maximum number of levels of the hypertree.\n\\post positive_result: result>=1\n"},
  {(char*)"SetMaximumLevel", PyvtkHyperTreeGridSource_SetMaximumLevel, METH_VARARGS,
   (char*)"V.SetMaximumLevel(int)\nC++: void SetMaximumLevel(unsigned int levels)\n\nSet the maximum number of levels of the hypertree.\n\\pre positive_levels: levels>=1\n\\post is_set: this->GetLevels()==levels\n"},
  {(char*)"SetOrigin", PyvtkHyperTreeGridSource_SetOrigin, METH_VARARGS,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {(char*)"GetOrigin", PyvtkHyperTreeGridSource_GetOrigin, METH_VARARGS,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {(char*)"SetGridScale", PyvtkHyperTreeGridSource_SetGridScale, METH_VARARGS,
   (char*)"V.SetGridScale(float, float, float)\nC++: void SetGridScale(double, double, double)\nV.SetGridScale((float, float, float))\nC++: void SetGridScale(double a[3])\n\n"},
  {(char*)"GetGridScale", PyvtkHyperTreeGridSource_GetGridScale, METH_VARARGS,
   (char*)"V.GetGridScale() -> (float, float, float)\nC++: double *GetGridScale()\n\n"},
  {(char*)"SetGridSize", PyvtkHyperTreeGridSource_SetGridSize, METH_VARARGS,
   (char*)"V.SetGridSize(int, int, int)\nC++: void SetGridSize(unsigned int, unsigned int, unsigned int)\nV.SetGridSize((int, int, int))\nC++: void SetGridSize(unsigned int a[3])\n\n"},
  {(char*)"GetGridSize", PyvtkHyperTreeGridSource_GetGridSize, METH_VARARGS,
   (char*)"V.GetGridSize() -> (int, int, int)\nC++: unsigned int *GetGridSize()\n\n"},
  {(char*)"SetTransposedRootIndexing", PyvtkHyperTreeGridSource_SetTransposedRootIndexing, METH_VARARGS,
   (char*)"V.SetTransposedRootIndexing(bool)\nC++: void SetTransposedRootIndexing(bool a)\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {(char*)"GetTransposedRootIndexing", PyvtkHyperTreeGridSource_GetTransposedRootIndexing, METH_VARARGS,
   (char*)"V.GetTransposedRootIndexing() -> bool\nC++: bool GetTransposedRootIndexing()\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {(char*)"SetIndexingModeToKJI", PyvtkHyperTreeGridSource_SetIndexingModeToKJI, METH_VARARGS,
   (char*)"V.SetIndexingModeToKJI()\nC++: void SetIndexingModeToKJI()\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {(char*)"SetIndexingModeToIJK", PyvtkHyperTreeGridSource_SetIndexingModeToIJK, METH_VARARGS,
   (char*)"V.SetIndexingModeToIJK()\nC++: void SetIndexingModeToIJK()\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {(char*)"SetBranchFactor", PyvtkHyperTreeGridSource_SetBranchFactor, METH_VARARGS,
   (char*)"V.SetBranchFactor(int)\nC++: void SetBranchFactor(unsigned int)\n\nSet/Get the subdivision factor in the grid refinement scheme\n"},
  {(char*)"GetBranchFactorMinValue", PyvtkHyperTreeGridSource_GetBranchFactorMinValue, METH_VARARGS,
   (char*)"V.GetBranchFactorMinValue() -> int\nC++: unsigned int GetBranchFactorMinValue()\n\nSet/Get the subdivision factor in the grid refinement scheme\n"},
  {(char*)"GetBranchFactorMaxValue", PyvtkHyperTreeGridSource_GetBranchFactorMaxValue, METH_VARARGS,
   (char*)"V.GetBranchFactorMaxValue() -> int\nC++: unsigned int GetBranchFactorMaxValue()\n\nSet/Get the subdivision factor in the grid refinement scheme\n"},
  {(char*)"GetBranchFactor", PyvtkHyperTreeGridSource_GetBranchFactor, METH_VARARGS,
   (char*)"V.GetBranchFactor() -> int\nC++: unsigned int GetBranchFactor()\n\nSet/Get the subdivision factor in the grid refinement scheme\n"},
  {(char*)"SetDimension", PyvtkHyperTreeGridSource_SetDimension, METH_VARARGS,
   (char*)"V.SetDimension(int)\nC++: void SetDimension(unsigned int)\n\nSet/Get the dimensionality of the grid\n"},
  {(char*)"GetDimensionMinValue", PyvtkHyperTreeGridSource_GetDimensionMinValue, METH_VARARGS,
   (char*)"V.GetDimensionMinValue() -> int\nC++: unsigned int GetDimensionMinValue()\n\nSet/Get the dimensionality of the grid\n"},
  {(char*)"GetDimensionMaxValue", PyvtkHyperTreeGridSource_GetDimensionMaxValue, METH_VARARGS,
   (char*)"V.GetDimensionMaxValue() -> int\nC++: unsigned int GetDimensionMaxValue()\n\nSet/Get the dimensionality of the grid\n"},
  {(char*)"GetDimension", PyvtkHyperTreeGridSource_GetDimension, METH_VARARGS,
   (char*)"V.GetDimension() -> int\nC++: unsigned int GetDimension()\n\nSet/Get the dimensionality of the grid\n"},
  {(char*)"SetUseDescriptor", PyvtkHyperTreeGridSource_SetUseDescriptor, METH_VARARGS,
   (char*)"V.SetUseDescriptor(bool)\nC++: void SetUseDescriptor(bool a)\n\nSet/get whether the descriptor string should be used. NB:\nOtherwise a quadric definition is expected. Default: true\n"},
  {(char*)"GetUseDescriptor", PyvtkHyperTreeGridSource_GetUseDescriptor, METH_VARARGS,
   (char*)"V.GetUseDescriptor() -> bool\nC++: bool GetUseDescriptor()\n\nSet/get whether the descriptor string should be used. NB:\nOtherwise a quadric definition is expected. Default: true\n"},
  {(char*)"UseDescriptorOn", PyvtkHyperTreeGridSource_UseDescriptorOn, METH_VARARGS,
   (char*)"V.UseDescriptorOn()\nC++: void UseDescriptorOn()\n\nSet/get whether the descriptor string should be used. NB:\nOtherwise a quadric definition is expected. Default: true\n"},
  {(char*)"UseDescriptorOff", PyvtkHyperTreeGridSource_UseDescriptorOff, METH_VARARGS,
   (char*)"V.UseDescriptorOff()\nC++: void UseDescriptorOff()\n\nSet/get whether the descriptor string should be used. NB:\nOtherwise a quadric definition is expected. Default: true\n"},
  {(char*)"SetUseMaterialMask", PyvtkHyperTreeGridSource_SetUseMaterialMask, METH_VARARGS,
   (char*)"V.SetUseMaterialMask(bool)\nC++: void SetUseMaterialMask(bool a)\n\nSet/get whether the material mask should be used. NB: This is\nonly used when UseDescriptor is ON Default: false\n"},
  {(char*)"GetUseMaterialMask", PyvtkHyperTreeGridSource_GetUseMaterialMask, METH_VARARGS,
   (char*)"V.GetUseMaterialMask() -> bool\nC++: bool GetUseMaterialMask()\n\nSet/get whether the material mask should be used. NB: This is\nonly used when UseDescriptor is ON Default: false\n"},
  {(char*)"UseMaterialMaskOn", PyvtkHyperTreeGridSource_UseMaterialMaskOn, METH_VARARGS,
   (char*)"V.UseMaterialMaskOn()\nC++: void UseMaterialMaskOn()\n\nSet/get whether the material mask should be used. NB: This is\nonly used when UseDescriptor is ON Default: false\n"},
  {(char*)"UseMaterialMaskOff", PyvtkHyperTreeGridSource_UseMaterialMaskOff, METH_VARARGS,
   (char*)"V.UseMaterialMaskOff()\nC++: void UseMaterialMaskOff()\n\nSet/get whether the material mask should be used. NB: This is\nonly used when UseDescriptor is ON Default: false\n"},
  {(char*)"SetDescriptor", PyvtkHyperTreeGridSource_SetDescriptor, METH_VARARGS,
   (char*)"V.SetDescriptor(string)\nC++: void SetDescriptor(char *)\n\nSet/Get the string used to describe the grid\n"},
  {(char*)"GetDescriptor", PyvtkHyperTreeGridSource_GetDescriptor, METH_VARARGS,
   (char*)"V.GetDescriptor() -> string\nC++: char *GetDescriptor()\n\nSet/Get the string used to describe the grid\n"},
  {(char*)"SetMaterialMask", PyvtkHyperTreeGridSource_SetMaterialMask, METH_VARARGS,
   (char*)"V.SetMaterialMask(string)\nC++: void SetMaterialMask(char *)\n\nSet/Get the string used to as a material mask\n"},
  {(char*)"GetMaterialMask", PyvtkHyperTreeGridSource_GetMaterialMask, METH_VARARGS,
   (char*)"V.GetMaterialMask() -> string\nC++: char *GetMaterialMask()\n\nSet/Get the string used to as a material mask\n"},
  {(char*)"SetDescriptorBits", PyvtkHyperTreeGridSource_SetDescriptorBits, METH_VARARGS,
   (char*)"V.SetDescriptorBits(vtkBitArray)\nC++: virtual void SetDescriptorBits(vtkBitArray *)\n\nSet/Get the bitarray used to describe the grid\n"},
  {(char*)"GetDescriptorBits", PyvtkHyperTreeGridSource_GetDescriptorBits, METH_VARARGS,
   (char*)"V.GetDescriptorBits() -> vtkBitArray\nC++: vtkBitArray *GetDescriptorBits()\n\nSet/Get the bitarray used to describe the grid\n"},
  {(char*)"SetLevelZeroMaterialIndex", PyvtkHyperTreeGridSource_SetLevelZeroMaterialIndex, METH_VARARGS,
   (char*)"V.SetLevelZeroMaterialIndex(vtkIdTypeArray)\nC++: virtual void SetLevelZeroMaterialIndex(vtkIdTypeArray *)\n\nSet the index array used to as a material mask\n"},
  {(char*)"SetMaterialMaskBits", PyvtkHyperTreeGridSource_SetMaterialMaskBits, METH_VARARGS,
   (char*)"V.SetMaterialMaskBits(vtkBitArray)\nC++: virtual void SetMaterialMaskBits(vtkBitArray *)\n\nSet/Get the bitarray used as a material mask\n"},
  {(char*)"GetMaterialMaskBits", PyvtkHyperTreeGridSource_GetMaterialMaskBits, METH_VARARGS,
   (char*)"V.GetMaterialMaskBits() -> vtkBitArray\nC++: vtkBitArray *GetMaterialMaskBits()\n\nSet/Get the bitarray used as a material mask\n"},
  {(char*)"SetQuadric", PyvtkHyperTreeGridSource_SetQuadric, METH_VARARGS,
   (char*)"V.SetQuadric(vtkQuadric)\nC++: virtual void SetQuadric(vtkQuadric *)\n\nSet/Get the quadric function\n"},
  {(char*)"GetQuadric", PyvtkHyperTreeGridSource_GetQuadric, METH_VARARGS,
   (char*)"V.GetQuadric() -> vtkQuadric\nC++: vtkQuadric *GetQuadric()\n\nSet/Get the quadric function\n"},
  {(char*)"SetQuadricCoefficients", PyvtkHyperTreeGridSource_SetQuadricCoefficients, METH_VARARGS,
   (char*)"V.SetQuadricCoefficients([float, float, float, float, float,\n    float, float, float, float, float])\nC++: void SetQuadricCoefficients(double[10])\n\nHelpers to set/get the 10 coefficients of the quadric function\n"},
  {(char*)"GetQuadricCoefficients", PyvtkHyperTreeGridSource_GetQuadricCoefficients, METH_VARARGS,
   (char*)"V.GetQuadricCoefficients([float, float, float, float, float,\n    float, float, float, float, float])\nC++: void GetQuadricCoefficients(double[10])\nV.GetQuadricCoefficients() -> (float, ...)\nC++: double *GetQuadricCoefficients()\n\nHelpers to set/get the 10 coefficients of the quadric function\n"},
  {(char*)"GetMTime", PyvtkHyperTreeGridSource_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride GetMTime because we delegate to a vtkQuadric\n"},
  {(char*)"ConvertDescriptorStringToBitArray", PyvtkHyperTreeGridSource_ConvertDescriptorStringToBitArray, METH_VARARGS,
   (char*)"V.ConvertDescriptorStringToBitArray(string) -> vtkBitArray\nC++: vtkBitArray *ConvertDescriptorStringToBitArray(\n    const std::string &)\n\nHelpers to convert string descriptors & mask to bit arrays\n"},
  {(char*)"ConvertMaterialMaskStringToBitArray", PyvtkHyperTreeGridSource_ConvertMaterialMaskStringToBitArray, METH_VARARGS,
   (char*)"V.ConvertMaterialMaskStringToBitArray(string) -> vtkBitArray\nC++: vtkBitArray *ConvertMaterialMaskStringToBitArray(\n    const std::string &)\n\nHelpers to convert string descriptors & mask to bit arrays\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperTreeGridSource_StaticNew()
{
  return vtkHyperTreeGridSource::New();
}

PyObject *PyVTKClass_vtkHyperTreeGridSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperTreeGridSource_StaticNew,
    PyvtkHyperTreeGridSource_Methods,
    "vtkHyperTreeGridSource", modulename,
    NULL, NULL,
    PyvtkHyperTreeGridSource_Doc(),
    PyVTKClass_vtkHyperTreeGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHyperTreeGridSource_Doc()
{
  static const char *docstring[] = {
    "vtkHyperTreeGridSource - Create a synthetic grid of hypertrees.\n\n",
    "Superclass: vtkHyperTreeGridAlgorithm\n\n",
    "This class uses input parameters, most notably a string descriptor,\nto generate a vtkHyperTreeGrid instance representing the\ncorresponding tree-based AMR grid. This descriptor uses the following\nconventions, e.g., to describe a 1-D ternary subdivision with 2 root\ncells L0    L1        L2 RR  | .R. ... | ... For this tree: The top\nlevel of the tree is not considered a grid level NB: For ease of\nleg",
    "ibility, white spaces are allowed and ignored.\n\nThanks:\n\nThis class was written by Philippe Pebay and Joachim Pouderoux,\nKitware 2013 This work was supported in part by Commissariat a\nl'Energie Atomique (CEA/DIF)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperTreeGridSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperTreeGridSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperTreeGridSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

