// python wrapper for vtkSpline
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSpline.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSpline(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSplineNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSpline_Doc();


static PyObject *
PyvtkSpline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSpline::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpline::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSpline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpline::NewInstance());

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
PyvtkSpline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSpline *tempr = vtkSpline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_SetParametricRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetParametricRange(temp0, temp1);
      }
    else
      {
      op->vtkSpline::SetParametricRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSpline_SetParametricRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetParametricRange(temp0);
      }
    else
      {
      op->vtkSpline::SetParametricRange(temp0);
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
PyvtkSpline_SetParametricRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSpline_SetParametricRange_s1(self, args);
    case 1:
      return PyvtkSpline_SetParametricRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetParametricRange");
  return NULL;
}



static PyObject *
PyvtkSpline_GetParametricRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetParametricRange(temp0);
      }
    else
      {
      op->vtkSpline::GetParametricRange(temp0);
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
PyvtkSpline_SetClampValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClampValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClampValue(temp0);
      }
    else
      {
      op->vtkSpline::SetClampValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_GetClampValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClampValue() :
      op->vtkSpline::GetClampValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_ClampValueOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampValueOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampValueOn();
      }
    else
      {
      op->vtkSpline::ClampValueOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_ClampValueOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampValueOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampValueOff();
      }
    else
      {
      op->vtkSpline::ClampValueOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_Compute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Compute();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = op->Evaluate(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkSpline::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_AddPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddPoint(temp0, temp1);
      }
    else
      {
      op->vtkSpline::AddPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemovePoint(temp0);
      }
    else
      {
      op->vtkSpline::RemovePoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_RemoveAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllPoints();
      }
    else
      {
      op->vtkSpline::RemoveAllPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_SetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClosed(temp0);
      }
    else
      {
      op->vtkSpline::SetClosed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_GetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClosed() :
      op->vtkSpline::GetClosed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_ClosedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedOn();
      }
    else
      {
      op->vtkSpline::ClosedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_ClosedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedOff();
      }
    else
      {
      op->vtkSpline::ClosedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_SetLeftConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLeftConstraint(temp0);
      }
    else
      {
      op->vtkSpline::SetLeftConstraint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_GetLeftConstraintMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftConstraintMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLeftConstraintMinValue() :
      op->vtkSpline::GetLeftConstraintMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_GetLeftConstraintMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftConstraintMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLeftConstraintMaxValue() :
      op->vtkSpline::GetLeftConstraintMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_GetLeftConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLeftConstraint() :
      op->vtkSpline::GetLeftConstraint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_SetRightConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRightConstraint(temp0);
      }
    else
      {
      op->vtkSpline::SetRightConstraint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_GetRightConstraintMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightConstraintMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRightConstraintMinValue() :
      op->vtkSpline::GetRightConstraintMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_GetRightConstraintMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightConstraintMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRightConstraintMaxValue() :
      op->vtkSpline::GetRightConstraintMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_GetRightConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRightConstraint() :
      op->vtkSpline::GetRightConstraint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_SetLeftValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLeftValue(temp0);
      }
    else
      {
      op->vtkSpline::SetLeftValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_GetLeftValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLeftValue() :
      op->vtkSpline::GetLeftValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_SetRightValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRightValue(temp0);
      }
    else
      {
      op->vtkSpline::SetRightValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_GetRightValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRightValue() :
      op->vtkSpline::GetRightValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSpline::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpline_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  vtkSpline *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkSpline::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSpline_Methods[] = {
  {(char*)"GetClassName", PyvtkSpline_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSpline_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSpline_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSpline\nC++: vtkSpline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSpline_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSpline\nC++: vtkSpline *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetParametricRange", PyvtkSpline_SetParametricRange, METH_VARARGS,
   (char*)"V.SetParametricRange(float, float)\nC++: void SetParametricRange(double tMin, double tMax)\nV.SetParametricRange([float, float])\nC++: void SetParametricRange(double tRange[2])\n\nSet/Get the parametric range. If not set, the range is determined\nimplicitly by keeping track of the (min,max) parameter values for\nt. If set, the AddPoint() method will clamp the t value to lie\nwithin the specified range.\n"},
  {(char*)"GetParametricRange", PyvtkSpline_GetParametricRange, METH_VARARGS,
   (char*)"V.GetParametricRange([float, float])\nC++: void GetParametricRange(double tRange[2])\n\nSet/Get the parametric range. If not set, the range is determined\nimplicitly by keeping track of the (min,max) parameter values for\nt. If set, the AddPoint() method will clamp the t value to lie\nwithin the specified range.\n"},
  {(char*)"SetClampValue", PyvtkSpline_SetClampValue, METH_VARARGS,
   (char*)"V.SetClampValue(int)\nC++: void SetClampValue(int a)\n\nSet/Get ClampValue. If On, results of the interpolation will be\nclamped to the min/max of the input data.\n"},
  {(char*)"GetClampValue", PyvtkSpline_GetClampValue, METH_VARARGS,
   (char*)"V.GetClampValue() -> int\nC++: int GetClampValue()\n\nSet/Get ClampValue. If On, results of the interpolation will be\nclamped to the min/max of the input data.\n"},
  {(char*)"ClampValueOn", PyvtkSpline_ClampValueOn, METH_VARARGS,
   (char*)"V.ClampValueOn()\nC++: void ClampValueOn()\n\nSet/Get ClampValue. If On, results of the interpolation will be\nclamped to the min/max of the input data.\n"},
  {(char*)"ClampValueOff", PyvtkSpline_ClampValueOff, METH_VARARGS,
   (char*)"V.ClampValueOff()\nC++: void ClampValueOff()\n\nSet/Get ClampValue. If On, results of the interpolation will be\nclamped to the min/max of the input data.\n"},
  {(char*)"Compute", PyvtkSpline_Compute, METH_VARARGS,
   (char*)"V.Compute()\nC++: virtual void Compute()\n\nCompute the coefficients for the spline.\n"},
  {(char*)"Evaluate", PyvtkSpline_Evaluate, METH_VARARGS,
   (char*)"V.Evaluate(float) -> float\nC++: virtual double Evaluate(double t)\n\nInterpolate the value of the spline at parametric location of t.\n"},
  {(char*)"GetNumberOfPoints", PyvtkSpline_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: int GetNumberOfPoints()\n\nReturn the number of points inserted thus far.\n"},
  {(char*)"AddPoint", PyvtkSpline_AddPoint, METH_VARARGS,
   (char*)"V.AddPoint(float, float)\nC++: void AddPoint(double t, double x)\n\nAdd a pair of points to be fit with the spline.\n"},
  {(char*)"RemovePoint", PyvtkSpline_RemovePoint, METH_VARARGS,
   (char*)"V.RemovePoint(float)\nC++: void RemovePoint(double t)\n\nRemove a point from the data to be fit with the spline.\n"},
  {(char*)"RemoveAllPoints", PyvtkSpline_RemoveAllPoints, METH_VARARGS,
   (char*)"V.RemoveAllPoints()\nC++: void RemoveAllPoints()\n\nRemove all points from the data.\n"},
  {(char*)"SetClosed", PyvtkSpline_SetClosed, METH_VARARGS,
   (char*)"V.SetClosed(int)\nC++: void SetClosed(int a)\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.\n"},
  {(char*)"GetClosed", PyvtkSpline_GetClosed, METH_VARARGS,
   (char*)"V.GetClosed() -> int\nC++: int GetClosed()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.\n"},
  {(char*)"ClosedOn", PyvtkSpline_ClosedOn, METH_VARARGS,
   (char*)"V.ClosedOn()\nC++: void ClosedOn()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.\n"},
  {(char*)"ClosedOff", PyvtkSpline_ClosedOff, METH_VARARGS,
   (char*)"V.ClosedOff()\nC++: void ClosedOff()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.\n"},
  {(char*)"SetLeftConstraint", PyvtkSpline_SetLeftConstraint, METH_VARARGS,
   (char*)"V.SetLeftConstraint(int)\nC++: void SetLeftConstraint(int)\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n0: the first derivative at left(right) most point is determined\nfrom the line defined from the first(last) two points.\n\n1: the first derivative at left(right) most point is set to\nLeft(Right)Value.\n\n2: the second derivative at left(right) most point is set to\nLeft(Right)Value.\n\n3: the second derivative at left(right)most points is\nLeft(Right)Value times second derivative at first interior point.\n"},
  {(char*)"GetLeftConstraintMinValue", PyvtkSpline_GetLeftConstraintMinValue, METH_VARARGS,
   (char*)"V.GetLeftConstraintMinValue() -> int\nC++: int GetLeftConstraintMinValue()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n0: the first derivative at left(right) most point is determined\nfrom the line defined from the first(last) two points.\n\n1: the first derivative at left(right) most point is set to\nLeft(Right)Value.\n\n2: the second derivative at left(right) most point is set to\nLeft(Right)Value.\n\n3: the second derivative at left(right)most points is\nLeft(Right)Value times second derivative at first interior point.\n"},
  {(char*)"GetLeftConstraintMaxValue", PyvtkSpline_GetLeftConstraintMaxValue, METH_VARARGS,
   (char*)"V.GetLeftConstraintMaxValue() -> int\nC++: int GetLeftConstraintMaxValue()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n0: the first derivative at left(right) most point is determined\nfrom the line defined from the first(last) two points.\n\n1: the first derivative at left(right) most point is set to\nLeft(Right)Value.\n\n2: the second derivative at left(right) most point is set to\nLeft(Right)Value.\n\n3: the second derivative at left(right)most points is\nLeft(Right)Value times second derivative at first interior point.\n"},
  {(char*)"GetLeftConstraint", PyvtkSpline_GetLeftConstraint, METH_VARARGS,
   (char*)"V.GetLeftConstraint() -> int\nC++: int GetLeftConstraint()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n0: the first derivative at left(right) most point is determined\nfrom the line defined from the first(last) two points.\n\n1: the first derivative at left(right) most point is set to\nLeft(Right)Value.\n\n2: the second derivative at left(right) most point is set to\nLeft(Right)Value.\n\n3: the second derivative at left(right)most points is\nLeft(Right)Value times second derivative at first interior point.\n"},
  {(char*)"SetRightConstraint", PyvtkSpline_SetRightConstraint, METH_VARARGS,
   (char*)"V.SetRightConstraint(int)\nC++: void SetRightConstraint(int)\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n0: the first derivative at left(right) most point is determined\nfrom the line defined from the first(last) two points.\n\n1: the first derivative at left(right) most point is set to\nLeft(Right)Value.\n\n2: the second derivative at left(right) most point is set to\nLeft(Right)Value.\n\n3: the second derivative at left(right)most points is\nLeft(Right)Value times second derivative at first interior point.\n"},
  {(char*)"GetRightConstraintMinValue", PyvtkSpline_GetRightConstraintMinValue, METH_VARARGS,
   (char*)"V.GetRightConstraintMinValue() -> int\nC++: int GetRightConstraintMinValue()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n0: the first derivative at left(right) most point is determined\nfrom the line defined from the first(last) two points.\n\n1: the first derivative at left(right) most point is set to\nLeft(Right)Value.\n\n2: the second derivative at left(right) most point is set to\nLeft(Right)Value.\n\n3: the second derivative at left(right)most points is\nLeft(Right)Value times second derivative at first interior point.\n"},
  {(char*)"GetRightConstraintMaxValue", PyvtkSpline_GetRightConstraintMaxValue, METH_VARARGS,
   (char*)"V.GetRightConstraintMaxValue() -> int\nC++: int GetRightConstraintMaxValue()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n0: the first derivative at left(right) most point is determined\nfrom the line defined from the first(last) two points.\n\n1: the first derivative at left(right) most point is set to\nLeft(Right)Value.\n\n2: the second derivative at left(right) most point is set to\nLeft(Right)Value.\n\n3: the second derivative at left(right)most points is\nLeft(Right)Value times second derivative at first interior point.\n"},
  {(char*)"GetRightConstraint", PyvtkSpline_GetRightConstraint, METH_VARARGS,
   (char*)"V.GetRightConstraint() -> int\nC++: int GetRightConstraint()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n0: the first derivative at left(right) most point is determined\nfrom the line defined from the first(last) two points.\n\n1: the first derivative at left(right) most point is set to\nLeft(Right)Value.\n\n2: the second derivative at left(right) most point is set to\nLeft(Right)Value.\n\n3: the second derivative at left(right)most points is\nLeft(Right)Value times second derivative at first interior point.\n"},
  {(char*)"SetLeftValue", PyvtkSpline_SetLeftValue, METH_VARARGS,
   (char*)"V.SetLeftValue(float)\nC++: void SetLeftValue(double a)\n\nThe values of the derivative on the left and right sides. The\nvalue is used only if the left(right) constraint is type 1-3.\n"},
  {(char*)"GetLeftValue", PyvtkSpline_GetLeftValue, METH_VARARGS,
   (char*)"V.GetLeftValue() -> float\nC++: double GetLeftValue()\n\nThe values of the derivative on the left and right sides. The\nvalue is used only if the left(right) constraint is type 1-3.\n"},
  {(char*)"SetRightValue", PyvtkSpline_SetRightValue, METH_VARARGS,
   (char*)"V.SetRightValue(float)\nC++: void SetRightValue(double a)\n\nThe values of the derivative on the left and right sides. The\nvalue is used only if the left(right) constraint is type 1-3.\n"},
  {(char*)"GetRightValue", PyvtkSpline_GetRightValue, METH_VARARGS,
   (char*)"V.GetRightValue() -> float\nC++: double GetRightValue()\n\nThe values of the derivative on the left and right sides. The\nvalue is used only if the left(right) constraint is type 1-3.\n"},
  {(char*)"GetMTime", PyvtkSpline_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the Piecewise function.\n"},
  {(char*)"DeepCopy", PyvtkSpline_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkSpline)\nC++: virtual void DeepCopy(vtkSpline *s)\n\nDeep copy of spline data.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSplineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSpline_Methods,
    "vtkSpline", modulename,
    NULL, NULL,
    PyvtkSpline_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSpline_Doc()
{
  static const char *docstring[] = {
    "vtkSpline - spline abstract class for interpolating splines\n\n",
    "Superclass: vtkObject\n\n",
    "vtkSpline interpolates a set of data points (i.e., interpolation\nmeans that the spline passes through the points).  vtkSpline is an\nabstract class: its subclasses vtkCardinalSpline and\nvtkKochenekSpline do the interpolation. Note that this spline maps\nthe 1D parametric coordinate t into a single value x. Thus if you\nwant to use the spline to interpolate points (i.e. x[3]), you have to\ncreate three",
    " splines for each of the x-y-z coordinates. Fortunately,\nthe vtkParametricSpline class does this for you.\n\nTypically a spline is used by adding a sequence of parametric\ncoordinate / data (t,x) values followed by use of an evaluation\nfunction (e.g., vtkCardinalSpline::Evaluate()).  Since these splines\nare 1D, a point in this context is an independent / dependent\nvariable pair.\n\nSplines can also be ",
    "set up to be closed or open. Closed splines\ncontinue from the last point to the first point with continuous\nfunction and derivative values. (You don't need to duplicate the\nfirst point to close the spline, just set ClosedOn.)\n\nThis implementation of splines does not use a normalized parametric\ncoordinate. If the spline is open, then the parameter space is (tMin\n<= t <= tMax) where tMin and tMax ar",
    "e the minimum and maximum\nparametric values seen when performing AddPoint(). If the spline is\nclosed, then the parameter space is (tMin <= t <= (tMax+1)) where\ntMin and tMax are the minimum and maximum parametric values seen when\nperforming AddPoint(). Note, however, that this behavior can be\nchanged by explicitly setting the ParametricRange(tMin,tMax). If set,\nthe parameter space remains (tMin <=",
    " t <= tMax), except that\nadditions of data with parametric values outside this range are\nclamped within this range.\n\nSee Also:\n\nvtkCardinalSpline vtkKochenekSpline vtkParametricSpline\nvtkParametricFunctionSource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSpline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSplineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSpline", o) != 0)
    {
    Py_DECREF(o);
    }

}

