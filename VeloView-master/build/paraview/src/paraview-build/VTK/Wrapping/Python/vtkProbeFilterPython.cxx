// python wrapper for vtkProbeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProbeFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProbeFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProbeFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkProbeFilter_Doc();


static PyObject *
PyvtkProbeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProbeFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProbeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProbeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProbeFilter::NewInstance());

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
PyvtkProbeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProbeFilter *tempr = vtkProbeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetSourceData(temp0);
      }
    else
      {
      op->vtkProbeFilter::SetSourceData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkProbeFilter::GetSource());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSourceConnection(temp0);
      }
    else
      {
      op->vtkProbeFilter::SetSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetSpatialMatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpatialMatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpatialMatch(temp0);
      }
    else
      {
      op->vtkProbeFilter::SetSpatialMatch(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetSpatialMatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpatialMatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSpatialMatch() :
      op->vtkProbeFilter::GetSpatialMatch());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SpatialMatchOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpatialMatchOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SpatialMatchOn();
      }
    else
      {
      op->vtkProbeFilter::SpatialMatchOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SpatialMatchOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpatialMatchOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SpatialMatchOff();
      }
    else
      {
      op->vtkProbeFilter::SpatialMatchOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetValidPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetValidPoints() :
      op->vtkProbeFilter::GetValidPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetValidPointMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidPointMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValidPointMaskArrayName(temp0);
      }
    else
      {
      op->vtkProbeFilter::SetValidPointMaskArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetValidPointMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPointMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetValidPointMaskArrayName() :
      op->vtkProbeFilter::GetValidPointMaskArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetPassCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassCellArrays(temp0);
      }
    else
      {
      op->vtkProbeFilter::SetPassCellArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_PassCellArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassCellArraysOn();
      }
    else
      {
      op->vtkProbeFilter::PassCellArraysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_PassCellArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassCellArraysOff();
      }
    else
      {
      op->vtkProbeFilter::PassCellArraysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetPassCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassCellArrays() :
      op->vtkProbeFilter::GetPassCellArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetPassPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassPointArrays(temp0);
      }
    else
      {
      op->vtkProbeFilter::SetPassPointArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_PassPointArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassPointArraysOn();
      }
    else
      {
      op->vtkProbeFilter::PassPointArraysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_PassPointArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassPointArraysOff();
      }
    else
      {
      op->vtkProbeFilter::PassPointArraysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetPassPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassPointArrays() :
      op->vtkProbeFilter::GetPassPointArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetPassFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassFieldArrays(temp0);
      }
    else
      {
      op->vtkProbeFilter::SetPassFieldArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_PassFieldArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassFieldArraysOn();
      }
    else
      {
      op->vtkProbeFilter::PassFieldArraysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_PassFieldArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassFieldArraysOff();
      }
    else
      {
      op->vtkProbeFilter::PassFieldArraysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetPassFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassFieldArrays() :
      op->vtkProbeFilter::GetPassFieldArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkProbeFilter::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkProbeFilter::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetComputeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeTolerance(temp0);
      }
    else
      {
      op->vtkProbeFilter::SetComputeTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_ComputeToleranceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeToleranceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeToleranceOn();
      }
    else
      {
      op->vtkProbeFilter::ComputeToleranceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_ComputeToleranceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeToleranceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeToleranceOff();
      }
    else
      {
      op->vtkProbeFilter::ComputeToleranceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetComputeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetComputeTolerance() :
      op->vtkProbeFilter::GetComputeTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProbeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkProbeFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProbeFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProbeFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProbeFilter\nC++: vtkProbeFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProbeFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProbeFilter\nC++: vtkProbeFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSourceData", PyvtkProbeFilter_SetSourceData, METH_VARARGS,
   (char*)"V.SetSourceData(vtkDataObject)\nC++: void SetSourceData(vtkDataObject *source)\n\nSpecify the point locations used to probe input. Any geometry can\nbe used.\n"},
  {(char*)"GetSource", PyvtkProbeFilter_GetSource, METH_VARARGS,
   (char*)"V.GetSource() -> vtkDataObject\nC++: vtkDataObject *GetSource()\n\nSpecify the point locations used to probe input. Any geometry can\nbe used.\n"},
  {(char*)"SetSourceConnection", PyvtkProbeFilter_SetSourceConnection, METH_VARARGS,
   (char*)"V.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the point locations used to probe input. Any geometry can\nbe used. New style. Equivalent to SetInputConnection(1,\nalgOutput).\n"},
  {(char*)"SetSpatialMatch", PyvtkProbeFilter_SetSpatialMatch, METH_VARARGS,
   (char*)"V.SetSpatialMatch(int)\nC++: void SetSpatialMatch(int a)\n\nThis flag is used only when a piece is requested to update.  By\ndefault the flag is off.  Because no spatial correspondence\nbetween input pieces and source pieces is known, all of the\nsource has to be requested no matter what piece of the output is\nrequested.  When there is a spatial correspondence, the\nuser/application can set this flag.  This hint allows the breakup\nof the probe operation to be much more efficient.  When piece m\nof n is requested for update by the user, then only n of m needs\nto be requested of the source.\n"},
  {(char*)"GetSpatialMatch", PyvtkProbeFilter_GetSpatialMatch, METH_VARARGS,
   (char*)"V.GetSpatialMatch() -> int\nC++: int GetSpatialMatch()\n\nThis flag is used only when a piece is requested to update.  By\ndefault the flag is off.  Because no spatial correspondence\nbetween input pieces and source pieces is known, all of the\nsource has to be requested no matter what piece of the output is\nrequested.  When there is a spatial correspondence, the\nuser/application can set this flag.  This hint allows the breakup\nof the probe operation to be much more efficient.  When piece m\nof n is requested for update by the user, then only n of m needs\nto be requested of the source.\n"},
  {(char*)"SpatialMatchOn", PyvtkProbeFilter_SpatialMatchOn, METH_VARARGS,
   (char*)"V.SpatialMatchOn()\nC++: void SpatialMatchOn()\n\nThis flag is used only when a piece is requested to update.  By\ndefault the flag is off.  Because no spatial correspondence\nbetween input pieces and source pieces is known, all of the\nsource has to be requested no matter what piece of the output is\nrequested.  When there is a spatial correspondence, the\nuser/application can set this flag.  This hint allows the breakup\nof the probe operation to be much more efficient.  When piece m\nof n is requested for update by the user, then only n of m needs\nto be requested of the source.\n"},
  {(char*)"SpatialMatchOff", PyvtkProbeFilter_SpatialMatchOff, METH_VARARGS,
   (char*)"V.SpatialMatchOff()\nC++: void SpatialMatchOff()\n\nThis flag is used only when a piece is requested to update.  By\ndefault the flag is off.  Because no spatial correspondence\nbetween input pieces and source pieces is known, all of the\nsource has to be requested no matter what piece of the output is\nrequested.  When there is a spatial correspondence, the\nuser/application can set this flag.  This hint allows the breakup\nof the probe operation to be much more efficient.  When piece m\nof n is requested for update by the user, then only n of m needs\nto be requested of the source.\n"},
  {(char*)"GetValidPoints", PyvtkProbeFilter_GetValidPoints, METH_VARARGS,
   (char*)"V.GetValidPoints() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetValidPoints()\n\nGet the list of point ids in the output that contain attribute\ndata interpolated from the source.\n"},
  {(char*)"SetValidPointMaskArrayName", PyvtkProbeFilter_SetValidPointMaskArrayName, METH_VARARGS,
   (char*)"V.SetValidPointMaskArrayName(string)\nC++: void SetValidPointMaskArrayName(char *)\n\nReturns the name of the char array added to the output with\nvalues 1 for valid points and 0 for invalid points. Set to\n\"vtkValidPointMask\" by default.\n"},
  {(char*)"GetValidPointMaskArrayName", PyvtkProbeFilter_GetValidPointMaskArrayName, METH_VARARGS,
   (char*)"V.GetValidPointMaskArrayName() -> string\nC++: char *GetValidPointMaskArrayName()\n\nReturns the name of the char array added to the output with\nvalues 1 for valid points and 0 for invalid points. Set to\n\"vtkValidPointMask\" by default.\n"},
  {(char*)"SetPassCellArrays", PyvtkProbeFilter_SetPassCellArrays, METH_VARARGS,
   (char*)"V.SetPassCellArrays(int)\nC++: void SetPassCellArrays(int a)\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {(char*)"PassCellArraysOn", PyvtkProbeFilter_PassCellArraysOn, METH_VARARGS,
   (char*)"V.PassCellArraysOn()\nC++: void PassCellArraysOn()\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {(char*)"PassCellArraysOff", PyvtkProbeFilter_PassCellArraysOff, METH_VARARGS,
   (char*)"V.PassCellArraysOff()\nC++: void PassCellArraysOff()\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {(char*)"GetPassCellArrays", PyvtkProbeFilter_GetPassCellArrays, METH_VARARGS,
   (char*)"V.GetPassCellArrays() -> int\nC++: int GetPassCellArrays()\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {(char*)"SetPassPointArrays", PyvtkProbeFilter_SetPassPointArrays, METH_VARARGS,
   (char*)"V.SetPassPointArrays(int)\nC++: void SetPassPointArrays(int a)\n\nShallow copy the input point data arrays to the output Off by\ndefault.\n"},
  {(char*)"PassPointArraysOn", PyvtkProbeFilter_PassPointArraysOn, METH_VARARGS,
   (char*)"V.PassPointArraysOn()\nC++: void PassPointArraysOn()\n\nShallow copy the input point data arrays to the output Off by\ndefault.\n"},
  {(char*)"PassPointArraysOff", PyvtkProbeFilter_PassPointArraysOff, METH_VARARGS,
   (char*)"V.PassPointArraysOff()\nC++: void PassPointArraysOff()\n\nShallow copy the input point data arrays to the output Off by\ndefault.\n"},
  {(char*)"GetPassPointArrays", PyvtkProbeFilter_GetPassPointArrays, METH_VARARGS,
   (char*)"V.GetPassPointArrays() -> int\nC++: int GetPassPointArrays()\n\nShallow copy the input point data arrays to the output Off by\ndefault.\n"},
  {(char*)"SetPassFieldArrays", PyvtkProbeFilter_SetPassFieldArrays, METH_VARARGS,
   (char*)"V.SetPassFieldArrays(int)\nC++: void SetPassFieldArrays(int a)\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {(char*)"PassFieldArraysOn", PyvtkProbeFilter_PassFieldArraysOn, METH_VARARGS,
   (char*)"V.PassFieldArraysOn()\nC++: void PassFieldArraysOn()\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {(char*)"PassFieldArraysOff", PyvtkProbeFilter_PassFieldArraysOff, METH_VARARGS,
   (char*)"V.PassFieldArraysOff()\nC++: void PassFieldArraysOff()\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {(char*)"GetPassFieldArrays", PyvtkProbeFilter_GetPassFieldArrays, METH_VARARGS,
   (char*)"V.GetPassFieldArrays() -> int\nC++: int GetPassFieldArrays()\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {(char*)"SetTolerance", PyvtkProbeFilter_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double a)\n\nSet the tolerance used to compute whether a point in the source\nis in a cell of the input.  This value is only used if\nComputeTolerance is off.\n"},
  {(char*)"GetTolerance", PyvtkProbeFilter_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nSet the tolerance used to compute whether a point in the source\nis in a cell of the input.  This value is only used if\nComputeTolerance is off.\n"},
  {(char*)"SetComputeTolerance", PyvtkProbeFilter_SetComputeTolerance, METH_VARARGS,
   (char*)"V.SetComputeTolerance(bool)\nC++: void SetComputeTolerance(bool a)\n\nSet whether to use the Tolerance field or precompute the\ntolerance. When on, the tolerance will be computed and the field\nvalue is ignored. Off by default.\n"},
  {(char*)"ComputeToleranceOn", PyvtkProbeFilter_ComputeToleranceOn, METH_VARARGS,
   (char*)"V.ComputeToleranceOn()\nC++: void ComputeToleranceOn()\n\nSet whether to use the Tolerance field or precompute the\ntolerance. When on, the tolerance will be computed and the field\nvalue is ignored. Off by default.\n"},
  {(char*)"ComputeToleranceOff", PyvtkProbeFilter_ComputeToleranceOff, METH_VARARGS,
   (char*)"V.ComputeToleranceOff()\nC++: void ComputeToleranceOff()\n\nSet whether to use the Tolerance field or precompute the\ntolerance. When on, the tolerance will be computed and the field\nvalue is ignored. Off by default.\n"},
  {(char*)"GetComputeTolerance", PyvtkProbeFilter_GetComputeTolerance, METH_VARARGS,
   (char*)"V.GetComputeTolerance() -> bool\nC++: bool GetComputeTolerance()\n\nSet whether to use the Tolerance field or precompute the\ntolerance. When on, the tolerance will be computed and the field\nvalue is ignored. Off by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProbeFilter_StaticNew()
{
  return vtkProbeFilter::New();
}

PyObject *PyVTKClass_vtkProbeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProbeFilter_StaticNew,
    PyvtkProbeFilter_Methods,
    "vtkProbeFilter", modulename,
    NULL, NULL,
    PyvtkProbeFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkProbeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkProbeFilter - sample data values at specified point locations\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkProbeFilter is a filter that computes point attributes (e.g.,\nscalars, vectors, etc.) at specified point positions. The filter has\ntwo inputs: the Input and Source. The Input geometric structure is\npassed through the filter. The point attributes are computed at the\nInput point positions by interpolating into the source data. For\nexample, we can compute data values on a plane (plane specified as",
    "\nInput) from a volume (Source). The cell data of the source data is\ncopied to the output based on in which source cell each input point\nis. If an array of the same name exists both in source's point and\ncell data, only the one from the point data is probed.\n\nThis filter can be used to resample data, or convert one dataset form\ninto another. For example, an unstructured grid (vtkUnstructuredGrid)\nc",
    "an be probed with a volume (three-dimensional vtkImageData), and\nthen volume rendering techniques can be used to visualize the\nresults. Another example: a line or curve can be used to probe data\nto produce x-y plots along that line or curve.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProbeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProbeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProbeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

