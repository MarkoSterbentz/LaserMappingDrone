// python wrapper for vtkGradientFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGradientFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGradientFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGradientFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkGradientFilter_Doc();


static PyObject *
PyvtkGradientFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGradientFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGradientFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGradientFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGradientFilter::NewInstance());

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
PyvtkGradientFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGradientFilter *tempr = vtkGradientFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetInputScalars_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputScalars(temp0, temp1);
      }
    else
      {
      op->vtkGradientFilter::SetInputScalars(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGradientFilter_SetInputScalars_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputScalars(temp0, temp1);
      }
    else
      {
      op->vtkGradientFilter::SetInputScalars(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGradientFilter_SetInputScalars_Methods[] = {
  {NULL, PyvtkGradientFilter_SetInputScalars_s1, METH_VARARGS,
   (char*)"@iz"},
  {NULL, PyvtkGradientFilter_SetInputScalars_s2, METH_VARARGS,
   (char*)"@ii"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGradientFilter_SetInputScalars(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGradientFilter_SetInputScalars_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputScalars");
  return NULL;
}



static PyObject *
PyvtkGradientFilter_GetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetResultArrayName() :
      op->vtkGradientFilter::GetResultArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResultArrayName(temp0);
      }
    else
      {
      op->vtkGradientFilter::SetResultArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetVorticityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVorticityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetVorticityArrayName() :
      op->vtkGradientFilter::GetVorticityArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetVorticityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVorticityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVorticityArrayName(temp0);
      }
    else
      {
      op->vtkGradientFilter::SetVorticityArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetQCriterionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQCriterionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetQCriterionArrayName() :
      op->vtkGradientFilter::GetQCriterionArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetQCriterionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQCriterionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQCriterionArrayName(temp0);
      }
    else
      {
      op->vtkGradientFilter::SetQCriterionArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetFasterApproximation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFasterApproximation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFasterApproximation() :
      op->vtkGradientFilter::GetFasterApproximation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetFasterApproximation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFasterApproximation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFasterApproximation(temp0);
      }
    else
      {
      op->vtkGradientFilter::SetFasterApproximation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_FasterApproximationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FasterApproximationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FasterApproximationOn();
      }
    else
      {
      op->vtkGradientFilter::FasterApproximationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_FasterApproximationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FasterApproximationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FasterApproximationOff();
      }
    else
      {
      op->vtkGradientFilter::FasterApproximationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeVorticity(temp0);
      }
    else
      {
      op->vtkGradientFilter::SetComputeVorticity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeVorticity() :
      op->vtkGradientFilter::GetComputeVorticity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeVorticityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVorticityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeVorticityOn();
      }
    else
      {
      op->vtkGradientFilter::ComputeVorticityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeVorticityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVorticityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeVorticityOff();
      }
    else
      {
      op->vtkGradientFilter::ComputeVorticityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetComputeQCriterion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeQCriterion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeQCriterion(temp0);
      }
    else
      {
      op->vtkGradientFilter::SetComputeQCriterion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetComputeQCriterion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeQCriterion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeQCriterion() :
      op->vtkGradientFilter::GetComputeQCriterion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeQCriterionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeQCriterionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeQCriterionOn();
      }
    else
      {
      op->vtkGradientFilter::ComputeQCriterionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeQCriterionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeQCriterionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeQCriterionOff();
      }
    else
      {
      op->vtkGradientFilter::ComputeQCriterionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGradientFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkGradientFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGradientFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGradientFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGradientFilter\nC++: vtkGradientFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGradientFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGradientFilter\nC++: vtkGradientFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInputScalars", PyvtkGradientFilter_SetInputScalars, METH_VARARGS,
   (char*)"V.SetInputScalars(int, string)\nC++: virtual void SetInputScalars(int fieldAssociation,\n    const char *name)\nV.SetInputScalars(int, int)\nC++: virtual void SetInputScalars(int fieldAssociation,\n    int fieldAttributeType)\n\nThese are basically a convenience method that calls\nSetInputArrayToProcess to set the array used as the input\nscalars.  The fieldAssociation comes from the\nvtkDataObject::FieldAssocations enum.  The fieldAttributeType\ncomes from the vtkDataSetAttributes::AttributeTypes enum.\n"},
  {(char*)"GetResultArrayName", PyvtkGradientFilter_GetResultArrayName, METH_VARARGS,
   (char*)"V.GetResultArrayName() -> string\nC++: char *GetResultArrayName()\n\nGet/Set the name of the gradient array to create.  If NULL (the\ndefault) then the output array will be named \"Gradients\".\n"},
  {(char*)"SetResultArrayName", PyvtkGradientFilter_SetResultArrayName, METH_VARARGS,
   (char*)"V.SetResultArrayName(string)\nC++: void SetResultArrayName(char *)\n\nGet/Set the name of the gradient array to create.  If NULL (the\ndefault) then the output array will be named \"Gradients\".\n"},
  {(char*)"GetVorticityArrayName", PyvtkGradientFilter_GetVorticityArrayName, METH_VARARGS,
   (char*)"V.GetVorticityArrayName() -> string\nC++: char *GetVorticityArrayName()\n\nGet/Set the name of the vorticity array to create. This is only\nused if ComputeVorticity is non-zero. If NULL (the default) then\nthe output array will be named \"Vorticity\".\n"},
  {(char*)"SetVorticityArrayName", PyvtkGradientFilter_SetVorticityArrayName, METH_VARARGS,
   (char*)"V.SetVorticityArrayName(string)\nC++: void SetVorticityArrayName(char *)\n\nGet/Set the name of the vorticity array to create. This is only\nused if ComputeVorticity is non-zero. If NULL (the default) then\nthe output array will be named \"Vorticity\".\n"},
  {(char*)"GetQCriterionArrayName", PyvtkGradientFilter_GetQCriterionArrayName, METH_VARARGS,
   (char*)"V.GetQCriterionArrayName() -> string\nC++: char *GetQCriterionArrayName()\n\nGet/Set the name of the Q criterion array to create. This is only\nused if ComputeQCriterion is non-zero. If NULL (the default) then\nthe output array will be named \"Q-criterion\".\n"},
  {(char*)"SetQCriterionArrayName", PyvtkGradientFilter_SetQCriterionArrayName, METH_VARARGS,
   (char*)"V.SetQCriterionArrayName(string)\nC++: void SetQCriterionArrayName(char *)\n\nGet/Set the name of the Q criterion array to create. This is only\nused if ComputeQCriterion is non-zero. If NULL (the default) then\nthe output array will be named \"Q-criterion\".\n"},
  {(char*)"GetFasterApproximation", PyvtkGradientFilter_GetFasterApproximation, METH_VARARGS,
   (char*)"V.GetFasterApproximation() -> int\nC++: int GetFasterApproximation()\n\nWhen this flag is on (default is off), the gradient filter will\nprovide a less accurate (but close) algorithm that performs fewer\nderivative calculations (and is therefore faster).  The error\ncontains some smoothing of the output data and some possible\nerrors on the boundary.  This parameter has no effect when\nperforming the gradient of cell data. This only applies if the\ninput grid is a vtkUnstructuredGrid or a vtkPolyData.\n"},
  {(char*)"SetFasterApproximation", PyvtkGradientFilter_SetFasterApproximation, METH_VARARGS,
   (char*)"V.SetFasterApproximation(int)\nC++: void SetFasterApproximation(int a)\n\nWhen this flag is on (default is off), the gradient filter will\nprovide a less accurate (but close) algorithm that performs fewer\nderivative calculations (and is therefore faster).  The error\ncontains some smoothing of the output data and some possible\nerrors on the boundary.  This parameter has no effect when\nperforming the gradient of cell data. This only applies if the\ninput grid is a vtkUnstructuredGrid or a vtkPolyData.\n"},
  {(char*)"FasterApproximationOn", PyvtkGradientFilter_FasterApproximationOn, METH_VARARGS,
   (char*)"V.FasterApproximationOn()\nC++: void FasterApproximationOn()\n\nWhen this flag is on (default is off), the gradient filter will\nprovide a less accurate (but close) algorithm that performs fewer\nderivative calculations (and is therefore faster).  The error\ncontains some smoothing of the output data and some possible\nerrors on the boundary.  This parameter has no effect when\nperforming the gradient of cell data. This only applies if the\ninput grid is a vtkUnstructuredGrid or a vtkPolyData.\n"},
  {(char*)"FasterApproximationOff", PyvtkGradientFilter_FasterApproximationOff, METH_VARARGS,
   (char*)"V.FasterApproximationOff()\nC++: void FasterApproximationOff()\n\nWhen this flag is on (default is off), the gradient filter will\nprovide a less accurate (but close) algorithm that performs fewer\nderivative calculations (and is therefore faster).  The error\ncontains some smoothing of the output data and some possible\nerrors on the boundary.  This parameter has no effect when\nperforming the gradient of cell data. This only applies if the\ninput grid is a vtkUnstructuredGrid or a vtkPolyData.\n"},
  {(char*)"SetComputeVorticity", PyvtkGradientFilter_SetComputeVorticity, METH_VARARGS,
   (char*)"V.SetComputeVorticity(int)\nC++: void SetComputeVorticity(int a)\n\nSet the resultant array to be vorticity/curl of the input array. \nThe input array must have 3 components.\n"},
  {(char*)"GetComputeVorticity", PyvtkGradientFilter_GetComputeVorticity, METH_VARARGS,
   (char*)"V.GetComputeVorticity() -> int\nC++: int GetComputeVorticity()\n\nSet the resultant array to be vorticity/curl of the input array. \nThe input array must have 3 components.\n"},
  {(char*)"ComputeVorticityOn", PyvtkGradientFilter_ComputeVorticityOn, METH_VARARGS,
   (char*)"V.ComputeVorticityOn()\nC++: void ComputeVorticityOn()\n\nSet the resultant array to be vorticity/curl of the input array. \nThe input array must have 3 components.\n"},
  {(char*)"ComputeVorticityOff", PyvtkGradientFilter_ComputeVorticityOff, METH_VARARGS,
   (char*)"V.ComputeVorticityOff()\nC++: void ComputeVorticityOff()\n\nSet the resultant array to be vorticity/curl of the input array. \nThe input array must have 3 components.\n"},
  {(char*)"SetComputeQCriterion", PyvtkGradientFilter_SetComputeQCriterion, METH_VARARGS,
   (char*)"V.SetComputeQCriterion(int)\nC++: void SetComputeQCriterion(int a)\n\nAdd Q-criterion to the output field data.  The name of the array\nwill be \"Q-Criterion\" and will be the same type as the input\narray.  The input array must have 3 components in order to\ncompute this.  Note that Q-citerion is a balance of the rate of\nvorticity and the rate of strain.\n"},
  {(char*)"GetComputeQCriterion", PyvtkGradientFilter_GetComputeQCriterion, METH_VARARGS,
   (char*)"V.GetComputeQCriterion() -> int\nC++: int GetComputeQCriterion()\n\nAdd Q-criterion to the output field data.  The name of the array\nwill be \"Q-Criterion\" and will be the same type as the input\narray.  The input array must have 3 components in order to\ncompute this.  Note that Q-citerion is a balance of the rate of\nvorticity and the rate of strain.\n"},
  {(char*)"ComputeQCriterionOn", PyvtkGradientFilter_ComputeQCriterionOn, METH_VARARGS,
   (char*)"V.ComputeQCriterionOn()\nC++: void ComputeQCriterionOn()\n\nAdd Q-criterion to the output field data.  The name of the array\nwill be \"Q-Criterion\" and will be the same type as the input\narray.  The input array must have 3 components in order to\ncompute this.  Note that Q-citerion is a balance of the rate of\nvorticity and the rate of strain.\n"},
  {(char*)"ComputeQCriterionOff", PyvtkGradientFilter_ComputeQCriterionOff, METH_VARARGS,
   (char*)"V.ComputeQCriterionOff()\nC++: void ComputeQCriterionOff()\n\nAdd Q-criterion to the output field data.  The name of the array\nwill be \"Q-Criterion\" and will be the same type as the input\narray.  The input array must have 3 components in order to\ncompute this.  Note that Q-citerion is a balance of the rate of\nvorticity and the rate of strain.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGradientFilter_StaticNew()
{
  return vtkGradientFilter::New();
}

PyObject *PyVTKClass_vtkGradientFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGradientFilter_StaticNew,
    PyvtkGradientFilter_Methods,
    "vtkGradientFilter", modulename,
    NULL, NULL,
    PyvtkGradientFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGradientFilter_Doc()
{
  static const char *docstring[] = {
    "vtkGradientFilter - A general filter for gradient estimation.\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "Estimates the gradient of a field in a data set.  The gradient\ncalculation is dependent on the input dataset type.  The created\ngradient array is of the same type as the array it is calculated from\n(e.g. point data or cell data) as well as data type (e.g. float,\ndouble).  At the boundary the gradient is not central differencing. \nThe output array has 3*number of components of the input data array.",
    " \nThe ordering for the output tuple will be {du/dx, du/dy, du/dz,\ndv/dx, dv/dy, dv/dz, dw/dx, dw/dy, dw/dz} for an input array {u, v,\nw}. There are also the options to additionally compute the vorticity\nand Q criterion of a vector field.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGradientFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGradientFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGradientFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

