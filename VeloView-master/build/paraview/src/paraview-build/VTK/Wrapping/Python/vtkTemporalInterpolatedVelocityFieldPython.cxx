// python wrapper for vtkTemporalInterpolatedVelocityField
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericCell.h"
#include "vtkTemporalInterpolatedVelocityField.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTemporalInterpolatedVelocityField(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTemporalInterpolatedVelocityFieldNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkFunctionSetNew
extern "C" { PyObject *PyVTKClass_vtkFunctionSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkFunctionSetNew
#endif

static const char **PyvtkTemporalInterpolatedVelocityField_Doc();


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTemporalInterpolatedVelocityField::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTemporalInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalInterpolatedVelocityField::NewInstance());

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
PyvtkTemporalInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTemporalInterpolatedVelocityField *tempr = vtkTemporalInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
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
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->FunctionValues(temp0, temp1) :
      op->vtkTemporalInterpolatedVelocityField::FunctionValues(temp0, temp1));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_FunctionValuesAtT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValuesAtT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->FunctionValuesAtT(temp0, temp1, temp2) :
      op->vtkTemporalInterpolatedVelocityField::FunctionValuesAtT(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SelectVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectVectors(temp0);
      }
    else
      {
      op->vtkTemporalInterpolatedVelocityField::SelectVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SetDataSetAtTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetAtTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  int temp1;
  double temp2;
  vtkDataSet *temp3 = NULL;
  bool temp4 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataSet") &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetDataSetAtTime(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkTemporalInterpolatedVelocityField::SetDataSetAtTime(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetCachedCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCachedCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  vtkIdType temp0[2];
  vtkIdType save0[2];
  const int size0 = 2;
  int temp1[2];
  int save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetCachedCellIds(temp0, temp1) :
      op->vtkTemporalInterpolatedVelocityField::GetCachedCellIds(temp0, temp1));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SetCachedCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCachedCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  vtkIdType temp0[2];
  vtkIdType save0[2];
  const int size0 = 2;
  int temp1[2];
  int save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetCachedCellIds(temp0, temp1);
      }
    else
      {
      op->vtkTemporalInterpolatedVelocityField::SetCachedCellIds(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_ClearCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearCache();
      }
    else
      {
      op->vtkTemporalInterpolatedVelocityField::ClearCache();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_TestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

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

    int tempr = (ap.IsBound() ?
      op->TestPoint(temp0) :
      op->vtkTemporalInterpolatedVelocityField::TestPoint(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_QuickTestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QuickTestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

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

    int tempr = (ap.IsBound() ?
      op->QuickTestPoint(temp0) :
      op->vtkTemporalInterpolatedVelocityField::QuickTestPoint(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetLastGoodVelocity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastGoodVelocity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetLastGoodVelocity() :
      op->vtkTemporalInterpolatedVelocityField::GetLastGoodVelocity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetCurrentWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCurrentWeight() :
      op->vtkTemporalInterpolatedVelocityField::GetCurrentWeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  vtkPointData *temp0 = NULL;
  vtkPointData *temp1 = NULL;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPointData") &&
      ap.GetVTKObject(temp1, "vtkPointData") &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->InterpolatePoint(temp0, temp1, temp2) :
      op->vtkTemporalInterpolatedVelocityField::InterpolatePoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  vtkPointData *temp1 = NULL;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPointData") &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->InterpolatePoint(temp0, temp1, temp2) :
      op->vtkTemporalInterpolatedVelocityField::InterpolatePoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_Methods[] = {
  {NULL, PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_s1, METH_VARARGS,
   (char*)"@OOL *vtkPointData *vtkPointData"},
  {NULL, PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_s2, METH_VARARGS,
   (char*)"@iOL *vtkPointData"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTemporalInterpolatedVelocityField_InterpolatePoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InterpolatePoint");
  return NULL;
}



static PyObject *
PyvtkTemporalInterpolatedVelocityField_ShowCacheResults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCacheResults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowCacheResults();
      }
    else
      {
      op->vtkTemporalInterpolatedVelocityField::ShowCacheResults();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_IsStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsStatic(temp0) :
      op->vtkTemporalInterpolatedVelocityField::IsStatic(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_AdvanceOneTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdvanceOneTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AdvanceOneTimeStep();
      }
    else
      {
      op->vtkTemporalInterpolatedVelocityField::AdvanceOneTimeStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalInterpolatedVelocityField_Methods[] = {
  {(char*)"GetClassName", PyvtkTemporalInterpolatedVelocityField_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTemporalInterpolatedVelocityField_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTemporalInterpolatedVelocityField_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTemporalInterpolatedVelocityField\nC++: vtkTemporalInterpolatedVelocityField *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTemporalInterpolatedVelocityField_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTemporalInterpolatedVelocityField\nC++: vtkTemporalInterpolatedVelocityField *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"FunctionValues", PyvtkTemporalInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   (char*)"V.FunctionValues([float, ...], [float, ...]) -> int\nC++: virtual int FunctionValues(double *x, double *u)\n\nEvaluate the velocity field, f, at (x, y, z, t). For now, t is\nignored.\n"},
  {(char*)"FunctionValuesAtT", PyvtkTemporalInterpolatedVelocityField_FunctionValuesAtT, METH_VARARGS,
   (char*)"V.FunctionValuesAtT(int, [float, ...], [float, ...]) -> int\nC++: int FunctionValuesAtT(int T, double *x, double *u)\n\nEvaluate the velocity field, f, at (x, y, z, t). For now, t is\nignored.\n"},
  {(char*)"SelectVectors", PyvtkTemporalInterpolatedVelocityField_SelectVectors, METH_VARARGS,
   (char*)"V.SelectVectors(string)\nC++: void SelectVectors(const char *fieldName)\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this is NULL and the filter will use the\nactive vector array.\n"},
  {(char*)"SetDataSetAtTime", PyvtkTemporalInterpolatedVelocityField_SetDataSetAtTime, METH_VARARGS,
   (char*)"V.SetDataSetAtTime(int, int, float, vtkDataSet, bool)\nC++: void SetDataSetAtTime(int I, int N, double T,\n    vtkDataSet *dataset, bool staticdataset)\n\nIn order to use this class, two sets of data must be supplied,\ncorresponding to times T1 and T2. Data is added via this\nfunction.\n"},
  {(char*)"GetCachedCellIds", PyvtkTemporalInterpolatedVelocityField_GetCachedCellIds, METH_VARARGS,
   (char*)"V.GetCachedCellIds([int, int], [int, int]) -> bool\nC++: bool GetCachedCellIds(vtkIdType id[2], int ds[2])\n\nBetween iterations of the Particle Tracer, Id's of the Cell are\nstored and then at the start of the next particle the Ids are set\nto 'pre-fill' the cache.\n"},
  {(char*)"SetCachedCellIds", PyvtkTemporalInterpolatedVelocityField_SetCachedCellIds, METH_VARARGS,
   (char*)"V.SetCachedCellIds([int, int], [int, int])\nC++: void SetCachedCellIds(vtkIdType id[2], int ds[2])\n\nBetween iterations of the Particle Tracer, Id's of the Cell are\nstored and then at the start of the next particle the Ids are set\nto 'pre-fill' the cache.\n"},
  {(char*)"ClearCache", PyvtkTemporalInterpolatedVelocityField_ClearCache, METH_VARARGS,
   (char*)"V.ClearCache()\nC++: void ClearCache()\n\nSet the last cell id to -1 so that the next search does not start\nfrom the previous cell\n"},
  {(char*)"TestPoint", PyvtkTemporalInterpolatedVelocityField_TestPoint, METH_VARARGS,
   (char*)"V.TestPoint([float, ...]) -> int\nC++: int TestPoint(double *x)\n\nA utility function which evaluates the point at T1, T2 to see if\nit is inside the data at both times or only one.\n"},
  {(char*)"QuickTestPoint", PyvtkTemporalInterpolatedVelocityField_QuickTestPoint, METH_VARARGS,
   (char*)"V.QuickTestPoint([float, ...]) -> int\nC++: int QuickTestPoint(double *x)\n\nA utility function which evaluates the point at T1, T2 to see if\nit is inside the data at both times or only one.\n"},
  {(char*)"GetLastGoodVelocity", PyvtkTemporalInterpolatedVelocityField_GetLastGoodVelocity, METH_VARARGS,
   (char*)"V.GetLastGoodVelocity() -> (float, float, float)\nC++: double *GetLastGoodVelocity()\n\n"},
  {(char*)"GetCurrentWeight", PyvtkTemporalInterpolatedVelocityField_GetCurrentWeight, METH_VARARGS,
   (char*)"V.GetCurrentWeight() -> float\nC++: double GetCurrentWeight()\n\nGet the most recent weight between 0->1 from T1->T2. Initial\nvalue is 0.\n"},
  {(char*)"InterpolatePoint", PyvtkTemporalInterpolatedVelocityField_InterpolatePoint, METH_VARARGS,
   (char*)"V.InterpolatePoint(vtkPointData, vtkPointData, int) -> bool\nC++: bool InterpolatePoint(vtkPointData *outPD1,\n    vtkPointData *outPD2, vtkIdType outIndex)\nV.InterpolatePoint(int, vtkPointData, int) -> bool\nC++: bool InterpolatePoint(int T, vtkPointData *outPD1,\n    vtkIdType outIndex)\n\n"},
  {(char*)"ShowCacheResults", PyvtkTemporalInterpolatedVelocityField_ShowCacheResults, METH_VARARGS,
   (char*)"V.ShowCacheResults()\nC++: void ShowCacheResults()\n\n"},
  {(char*)"IsStatic", PyvtkTemporalInterpolatedVelocityField_IsStatic, METH_VARARGS,
   (char*)"V.IsStatic(int) -> bool\nC++: bool IsStatic(int datasetIndex)\n\n"},
  {(char*)"AdvanceOneTimeStep", PyvtkTemporalInterpolatedVelocityField_AdvanceOneTimeStep, METH_VARARGS,
   (char*)"V.AdvanceOneTimeStep()\nC++: void AdvanceOneTimeStep()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTemporalInterpolatedVelocityField_StaticNew()
{
  return vtkTemporalInterpolatedVelocityField::New();
}

PyObject *PyVTKClass_vtkTemporalInterpolatedVelocityFieldNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTemporalInterpolatedVelocityField_StaticNew,
    PyvtkTemporalInterpolatedVelocityField_Methods,
    "vtkTemporalInterpolatedVelocityField", modulename,
    NULL, NULL,
    PyvtkTemporalInterpolatedVelocityField_Doc(),
    PyVTKClass_vtkFunctionSetNew(modulename));
  return cls;
}

const char **PyvtkTemporalInterpolatedVelocityField_Doc()
{
  static const char *docstring[] = {
    "vtkTemporalInterpolatedVelocityField - A helper class for\n\n",
    "Superclass: vtkFunctionSet\n\n",
    "vtkTemporalInterpolatedVelocityField is a general purpose helper for\nthe temporal particle tracing code (vtkTemporalStreamTracer)\n\nIt maintains two copies of vtkCachingInterpolatedVelocityField\ninternally and uses them to obtain velocity values at time T0 and T1.\n\nIn fact the class does quite a bit more than this because when the\ngeometry of the datasets is the same at T0 and T1, we can re-use\ncac",
    "hed cell Ids and weights used in the cell interpolation routines.\nAdditionally, the same weights can be used when interpolating (point)\nscalar values and computing vorticity etc.\n\nCaveats:\n\nvtkTemporalInterpolatedVelocityField is probably not thread safe. A\nnew instance should be created by each thread.\n\nDatasets are added in lists. The list for T1 must be idential to that\nfor T0 in structure/topo",
    "logy and dataset order, and any datasets\nmarked as static, must remain so for all T - changing a dataset from\nstatic to dynamic between time steps will result in undefined\nbehaviour (=crash probably)\n\nSee Also:\n\nvtkCachingInterpolatedVelocityField vtkTemporalStreamTracer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTemporalInterpolatedVelocityField(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTemporalInterpolatedVelocityFieldNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTemporalInterpolatedVelocityField", o) != 0)
    {
    Py_DECREF(o);
    }

}

