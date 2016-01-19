// python wrapper for vtkParametricFunction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkParametricFunction.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkParametricFunction(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkParametricFunctionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkParametricFunction_Doc();


static PyObject *
PyvtkParametricFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkParametricFunction::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParametricFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricFunction::NewInstance());

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
PyvtkParametricFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkParametricFunction *tempr = vtkParametricFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetDimension();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[9];
  double save2[9];
  const int size2 = 9;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    op->Evaluate(temp0, temp1, temp2);

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

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[9];
  double save2[9];
  const int size2 = 9;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    double tempr = op->EvaluateScalar(temp0, temp1, temp2);

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

  return result;
}


static PyObject *
PyvtkParametricFunction_SetMinimumU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumU(temp0);
      }
    else
      {
      op->vtkParametricFunction::SetMinimumU(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMinimumU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumU() :
      op->vtkParametricFunction::GetMinimumU());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetMaximumU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumU(temp0);
      }
    else
      {
      op->vtkParametricFunction::SetMaximumU(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMaximumU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumU() :
      op->vtkParametricFunction::GetMaximumU());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetMinimumV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumV(temp0);
      }
    else
      {
      op->vtkParametricFunction::SetMinimumV(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMinimumV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumV() :
      op->vtkParametricFunction::GetMinimumV());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetMaximumV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumV(temp0);
      }
    else
      {
      op->vtkParametricFunction::SetMaximumV(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMaximumV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumV() :
      op->vtkParametricFunction::GetMaximumV());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetMinimumW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumW(temp0);
      }
    else
      {
      op->vtkParametricFunction::SetMinimumW(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMinimumW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumW() :
      op->vtkParametricFunction::GetMinimumW());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetMaximumW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumW(temp0);
      }
    else
      {
      op->vtkParametricFunction::SetMaximumW(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMaximumW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumW() :
      op->vtkParametricFunction::GetMaximumW());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetJoinU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJoinU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetJoinU(temp0);
      }
    else
      {
      op->vtkParametricFunction::SetJoinU(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinUMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinUMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetJoinUMinValue() :
      op->vtkParametricFunction::GetJoinUMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinUMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinUMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetJoinUMaxValue() :
      op->vtkParametricFunction::GetJoinUMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetJoinU() :
      op->vtkParametricFunction::GetJoinU());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinUOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinUOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->JoinUOn();
      }
    else
      {
      op->vtkParametricFunction::JoinUOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinUOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinUOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->JoinUOff();
      }
    else
      {
      op->vtkParametricFunction::JoinUOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetJoinV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJoinV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetJoinV(temp0);
      }
    else
      {
      op->vtkParametricFunction::SetJoinV(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinVMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinVMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetJoinVMinValue() :
      op->vtkParametricFunction::GetJoinVMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinVMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinVMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetJoinVMaxValue() :
      op->vtkParametricFunction::GetJoinVMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetJoinV() :
      op->vtkParametricFunction::GetJoinV());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinVOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinVOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->JoinVOn();
      }
    else
      {
      op->vtkParametricFunction::JoinVOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinVOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinVOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->JoinVOff();
      }
    else
      {
      op->vtkParametricFunction::JoinVOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetJoinW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJoinW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetJoinW(temp0);
      }
    else
      {
      op->vtkParametricFunction::SetJoinW(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinWMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinWMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetJoinWMinValue() :
      op->vtkParametricFunction::GetJoinWMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinWMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinWMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetJoinWMaxValue() :
      op->vtkParametricFunction::GetJoinWMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetJoinW() :
      op->vtkParametricFunction::GetJoinW());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinWOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinWOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->JoinWOn();
      }
    else
      {
      op->vtkParametricFunction::JoinWOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinWOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinWOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->JoinWOff();
      }
    else
      {
      op->vtkParametricFunction::JoinWOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetTwistU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwistU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTwistU(temp0);
      }
    else
      {
      op->vtkParametricFunction::SetTwistU(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistUMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistUMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTwistUMinValue() :
      op->vtkParametricFunction::GetTwistUMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistUMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistUMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTwistUMaxValue() :
      op->vtkParametricFunction::GetTwistUMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTwistU() :
      op->vtkParametricFunction::GetTwistU());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistUOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistUOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwistUOn();
      }
    else
      {
      op->vtkParametricFunction::TwistUOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistUOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistUOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwistUOff();
      }
    else
      {
      op->vtkParametricFunction::TwistUOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetTwistV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwistV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTwistV(temp0);
      }
    else
      {
      op->vtkParametricFunction::SetTwistV(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistVMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistVMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTwistVMinValue() :
      op->vtkParametricFunction::GetTwistVMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistVMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistVMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTwistVMaxValue() :
      op->vtkParametricFunction::GetTwistVMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTwistV() :
      op->vtkParametricFunction::GetTwistV());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistVOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistVOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwistVOn();
      }
    else
      {
      op->vtkParametricFunction::TwistVOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistVOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistVOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwistVOff();
      }
    else
      {
      op->vtkParametricFunction::TwistVOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetTwistW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwistW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTwistW(temp0);
      }
    else
      {
      op->vtkParametricFunction::SetTwistW(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistWMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistWMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTwistWMinValue() :
      op->vtkParametricFunction::GetTwistWMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistWMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistWMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTwistWMaxValue() :
      op->vtkParametricFunction::GetTwistWMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTwistW() :
      op->vtkParametricFunction::GetTwistW());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistWOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistWOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwistWOn();
      }
    else
      {
      op->vtkParametricFunction::TwistWOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistWOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistWOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwistWOff();
      }
    else
      {
      op->vtkParametricFunction::TwistWOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetClockwiseOrdering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClockwiseOrdering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClockwiseOrdering(temp0);
      }
    else
      {
      op->vtkParametricFunction::SetClockwiseOrdering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetClockwiseOrderingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClockwiseOrderingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClockwiseOrderingMinValue() :
      op->vtkParametricFunction::GetClockwiseOrderingMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetClockwiseOrderingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClockwiseOrderingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClockwiseOrderingMaxValue() :
      op->vtkParametricFunction::GetClockwiseOrderingMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetClockwiseOrdering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClockwiseOrdering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClockwiseOrdering() :
      op->vtkParametricFunction::GetClockwiseOrdering());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_ClockwiseOrderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClockwiseOrderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClockwiseOrderingOn();
      }
    else
      {
      op->vtkParametricFunction::ClockwiseOrderingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_ClockwiseOrderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClockwiseOrderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClockwiseOrderingOff();
      }
    else
      {
      op->vtkParametricFunction::ClockwiseOrderingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetDerivativesAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDerivativesAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDerivativesAvailable(temp0);
      }
    else
      {
      op->vtkParametricFunction::SetDerivativesAvailable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetDerivativesAvailableMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDerivativesAvailableMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDerivativesAvailableMinValue() :
      op->vtkParametricFunction::GetDerivativesAvailableMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetDerivativesAvailableMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDerivativesAvailableMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDerivativesAvailableMaxValue() :
      op->vtkParametricFunction::GetDerivativesAvailableMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetDerivativesAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDerivativesAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDerivativesAvailable() :
      op->vtkParametricFunction::GetDerivativesAvailable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_DerivativesAvailableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DerivativesAvailableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DerivativesAvailableOn();
      }
    else
      {
      op->vtkParametricFunction::DerivativesAvailableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunction_DerivativesAvailableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DerivativesAvailableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DerivativesAvailableOff();
      }
    else
      {
      op->vtkParametricFunction::DerivativesAvailableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkParametricFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkParametricFunction_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParametricFunction_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParametricFunction_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkParametricFunction\nC++: vtkParametricFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParametricFunction_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParametricFunction\nC++: vtkParametricFunction *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDimension", PyvtkParametricFunction_GetDimension, METH_VARARGS,
   (char*)"V.GetDimension() -> int\nC++: virtual int GetDimension()\n\n"},
  {(char*)"Evaluate", PyvtkParametricFunction_Evaluate, METH_VARARGS,
   (char*)"V.Evaluate([float, float, float], [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\nC++: virtual void Evaluate(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nPerforms the mapping $f(uvw)->(Pt,Duvw)$f. This is a pure virtual\nfunction that must be instantiated in a derived class.\n\nuvw are the parameters, with u corresponding to uvw[0], v to\nuvw[1] and w to uvw[2] respectively. Pt is the returned Cartesian\npoint, Duvw are the derivatives of this point with respect to u,\nv and w. Note that the first three values in Duvw are Du, the\nnext three are Dv, and the final three are Dw. Du Dv Dw are the\npartial derivatives of the function at the point Pt with respect\nto u, v and w respectively.\n"},
  {(char*)"EvaluateScalar", PyvtkParametricFunction_EvaluateScalar, METH_VARARGS,
   (char*)"V.EvaluateScalar([float, float, float], [float, float, float],\n    [float, float, float, float, float, float, float, float,\n    float]) -> float\nC++: virtual double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw. This is a pure virtual function that must be instantiated\nin a derived class.\n\nuvw are the parameters with Pt being the the cartesian point,\nDuvw are the derivatives of this point with respect to u, v, and\nw. Pt, Duvw are obtained from Evaluate().\n"},
  {(char*)"SetMinimumU", PyvtkParametricFunction_SetMinimumU, METH_VARARGS,
   (char*)"V.SetMinimumU(float)\nC++: void SetMinimumU(double a)\n\nSet/Get the minimum u-value.\n"},
  {(char*)"GetMinimumU", PyvtkParametricFunction_GetMinimumU, METH_VARARGS,
   (char*)"V.GetMinimumU() -> float\nC++: double GetMinimumU()\n\nSet/Get the minimum u-value.\n"},
  {(char*)"SetMaximumU", PyvtkParametricFunction_SetMaximumU, METH_VARARGS,
   (char*)"V.SetMaximumU(float)\nC++: void SetMaximumU(double a)\n\nSet/Get the maximum u-value.\n"},
  {(char*)"GetMaximumU", PyvtkParametricFunction_GetMaximumU, METH_VARARGS,
   (char*)"V.GetMaximumU() -> float\nC++: double GetMaximumU()\n\nSet/Get the maximum u-value.\n"},
  {(char*)"SetMinimumV", PyvtkParametricFunction_SetMinimumV, METH_VARARGS,
   (char*)"V.SetMinimumV(float)\nC++: void SetMinimumV(double a)\n\nSet/Get the minimum v-value.\n"},
  {(char*)"GetMinimumV", PyvtkParametricFunction_GetMinimumV, METH_VARARGS,
   (char*)"V.GetMinimumV() -> float\nC++: double GetMinimumV()\n\nSet/Get the minimum v-value.\n"},
  {(char*)"SetMaximumV", PyvtkParametricFunction_SetMaximumV, METH_VARARGS,
   (char*)"V.SetMaximumV(float)\nC++: void SetMaximumV(double a)\n\nSet/Get the maximum v-value.\n"},
  {(char*)"GetMaximumV", PyvtkParametricFunction_GetMaximumV, METH_VARARGS,
   (char*)"V.GetMaximumV() -> float\nC++: double GetMaximumV()\n\nSet/Get the maximum v-value.\n"},
  {(char*)"SetMinimumW", PyvtkParametricFunction_SetMinimumW, METH_VARARGS,
   (char*)"V.SetMinimumW(float)\nC++: void SetMinimumW(double a)\n\nSet/Get the minimum w-value.\n"},
  {(char*)"GetMinimumW", PyvtkParametricFunction_GetMinimumW, METH_VARARGS,
   (char*)"V.GetMinimumW() -> float\nC++: double GetMinimumW()\n\nSet/Get the minimum w-value.\n"},
  {(char*)"SetMaximumW", PyvtkParametricFunction_SetMaximumW, METH_VARARGS,
   (char*)"V.SetMaximumW(float)\nC++: void SetMaximumW(double a)\n\nSet/Get the maximum w-value.\n"},
  {(char*)"GetMaximumW", PyvtkParametricFunction_GetMaximumW, METH_VARARGS,
   (char*)"V.GetMaximumW() -> float\nC++: double GetMaximumW()\n\nSet/Get the maximum w-value.\n"},
  {(char*)"SetJoinU", PyvtkParametricFunction_SetJoinU, METH_VARARGS,
   (char*)"V.SetJoinU(int)\nC++: void SetJoinU(int)\n\nSet/Get the flag which joins the first triangle strip to the last\none.\n"},
  {(char*)"GetJoinUMinValue", PyvtkParametricFunction_GetJoinUMinValue, METH_VARARGS,
   (char*)"V.GetJoinUMinValue() -> int\nC++: int GetJoinUMinValue()\n\nSet/Get the flag which joins the first triangle strip to the last\none.\n"},
  {(char*)"GetJoinUMaxValue", PyvtkParametricFunction_GetJoinUMaxValue, METH_VARARGS,
   (char*)"V.GetJoinUMaxValue() -> int\nC++: int GetJoinUMaxValue()\n\nSet/Get the flag which joins the first triangle strip to the last\none.\n"},
  {(char*)"GetJoinU", PyvtkParametricFunction_GetJoinU, METH_VARARGS,
   (char*)"V.GetJoinU() -> int\nC++: int GetJoinU()\n\nSet/Get the flag which joins the first triangle strip to the last\none.\n"},
  {(char*)"JoinUOn", PyvtkParametricFunction_JoinUOn, METH_VARARGS,
   (char*)"V.JoinUOn()\nC++: void JoinUOn()\n\nSet/Get the flag which joins the first triangle strip to the last\none.\n"},
  {(char*)"JoinUOff", PyvtkParametricFunction_JoinUOff, METH_VARARGS,
   (char*)"V.JoinUOff()\nC++: void JoinUOff()\n\nSet/Get the flag which joins the first triangle strip to the last\none.\n"},
  {(char*)"SetJoinV", PyvtkParametricFunction_SetJoinV, METH_VARARGS,
   (char*)"V.SetJoinV(int)\nC++: void SetJoinV(int)\n\nSet/Get the flag which joins the the ends of the triangle strips.\n"},
  {(char*)"GetJoinVMinValue", PyvtkParametricFunction_GetJoinVMinValue, METH_VARARGS,
   (char*)"V.GetJoinVMinValue() -> int\nC++: int GetJoinVMinValue()\n\nSet/Get the flag which joins the the ends of the triangle strips.\n"},
  {(char*)"GetJoinVMaxValue", PyvtkParametricFunction_GetJoinVMaxValue, METH_VARARGS,
   (char*)"V.GetJoinVMaxValue() -> int\nC++: int GetJoinVMaxValue()\n\nSet/Get the flag which joins the the ends of the triangle strips.\n"},
  {(char*)"GetJoinV", PyvtkParametricFunction_GetJoinV, METH_VARARGS,
   (char*)"V.GetJoinV() -> int\nC++: int GetJoinV()\n\nSet/Get the flag which joins the the ends of the triangle strips.\n"},
  {(char*)"JoinVOn", PyvtkParametricFunction_JoinVOn, METH_VARARGS,
   (char*)"V.JoinVOn()\nC++: void JoinVOn()\n\nSet/Get the flag which joins the the ends of the triangle strips.\n"},
  {(char*)"JoinVOff", PyvtkParametricFunction_JoinVOff, METH_VARARGS,
   (char*)"V.JoinVOff()\nC++: void JoinVOff()\n\nSet/Get the flag which joins the the ends of the triangle strips.\n"},
  {(char*)"SetJoinW", PyvtkParametricFunction_SetJoinW, METH_VARARGS,
   (char*)"V.SetJoinW(int)\nC++: void SetJoinW(int)\n\nSet/Get the flag which joins the the ends of the triangle strips.\n"},
  {(char*)"GetJoinWMinValue", PyvtkParametricFunction_GetJoinWMinValue, METH_VARARGS,
   (char*)"V.GetJoinWMinValue() -> int\nC++: int GetJoinWMinValue()\n\nSet/Get the flag which joins the the ends of the triangle strips.\n"},
  {(char*)"GetJoinWMaxValue", PyvtkParametricFunction_GetJoinWMaxValue, METH_VARARGS,
   (char*)"V.GetJoinWMaxValue() -> int\nC++: int GetJoinWMaxValue()\n\nSet/Get the flag which joins the the ends of the triangle strips.\n"},
  {(char*)"GetJoinW", PyvtkParametricFunction_GetJoinW, METH_VARARGS,
   (char*)"V.GetJoinW() -> int\nC++: int GetJoinW()\n\nSet/Get the flag which joins the the ends of the triangle strips.\n"},
  {(char*)"JoinWOn", PyvtkParametricFunction_JoinWOn, METH_VARARGS,
   (char*)"V.JoinWOn()\nC++: void JoinWOn()\n\nSet/Get the flag which joins the the ends of the triangle strips.\n"},
  {(char*)"JoinWOff", PyvtkParametricFunction_JoinWOff, METH_VARARGS,
   (char*)"V.JoinWOff()\nC++: void JoinWOff()\n\nSet/Get the flag which joins the the ends of the triangle strips.\n"},
  {(char*)"SetTwistU", PyvtkParametricFunction_SetTwistU, METH_VARARGS,
   (char*)"V.SetTwistU(int)\nC++: void SetTwistU(int)\n\nSet/Get the flag which joins the first triangle strip to the last\none with a twist. JoinU must also be set if this is set. Used\nwhen building some non-orientable surfaces.\n"},
  {(char*)"GetTwistUMinValue", PyvtkParametricFunction_GetTwistUMinValue, METH_VARARGS,
   (char*)"V.GetTwistUMinValue() -> int\nC++: int GetTwistUMinValue()\n\nSet/Get the flag which joins the first triangle strip to the last\none with a twist. JoinU must also be set if this is set. Used\nwhen building some non-orientable surfaces.\n"},
  {(char*)"GetTwistUMaxValue", PyvtkParametricFunction_GetTwistUMaxValue, METH_VARARGS,
   (char*)"V.GetTwistUMaxValue() -> int\nC++: int GetTwistUMaxValue()\n\nSet/Get the flag which joins the first triangle strip to the last\none with a twist. JoinU must also be set if this is set. Used\nwhen building some non-orientable surfaces.\n"},
  {(char*)"GetTwistU", PyvtkParametricFunction_GetTwistU, METH_VARARGS,
   (char*)"V.GetTwistU() -> int\nC++: int GetTwistU()\n\nSet/Get the flag which joins the first triangle strip to the last\none with a twist. JoinU must also be set if this is set. Used\nwhen building some non-orientable surfaces.\n"},
  {(char*)"TwistUOn", PyvtkParametricFunction_TwistUOn, METH_VARARGS,
   (char*)"V.TwistUOn()\nC++: void TwistUOn()\n\nSet/Get the flag which joins the first triangle strip to the last\none with a twist. JoinU must also be set if this is set. Used\nwhen building some non-orientable surfaces.\n"},
  {(char*)"TwistUOff", PyvtkParametricFunction_TwistUOff, METH_VARARGS,
   (char*)"V.TwistUOff()\nC++: void TwistUOff()\n\nSet/Get the flag which joins the first triangle strip to the last\none with a twist. JoinU must also be set if this is set. Used\nwhen building some non-orientable surfaces.\n"},
  {(char*)"SetTwistV", PyvtkParametricFunction_SetTwistV, METH_VARARGS,
   (char*)"V.SetTwistV(int)\nC++: void SetTwistV(int)\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinV must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {(char*)"GetTwistVMinValue", PyvtkParametricFunction_GetTwistVMinValue, METH_VARARGS,
   (char*)"V.GetTwistVMinValue() -> int\nC++: int GetTwistVMinValue()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinV must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {(char*)"GetTwistVMaxValue", PyvtkParametricFunction_GetTwistVMaxValue, METH_VARARGS,
   (char*)"V.GetTwistVMaxValue() -> int\nC++: int GetTwistVMaxValue()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinV must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {(char*)"GetTwistV", PyvtkParametricFunction_GetTwistV, METH_VARARGS,
   (char*)"V.GetTwistV() -> int\nC++: int GetTwistV()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinV must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {(char*)"TwistVOn", PyvtkParametricFunction_TwistVOn, METH_VARARGS,
   (char*)"V.TwistVOn()\nC++: void TwistVOn()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinV must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {(char*)"TwistVOff", PyvtkParametricFunction_TwistVOff, METH_VARARGS,
   (char*)"V.TwistVOff()\nC++: void TwistVOff()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinV must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {(char*)"SetTwistW", PyvtkParametricFunction_SetTwistW, METH_VARARGS,
   (char*)"V.SetTwistW(int)\nC++: void SetTwistW(int)\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinW must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {(char*)"GetTwistWMinValue", PyvtkParametricFunction_GetTwistWMinValue, METH_VARARGS,
   (char*)"V.GetTwistWMinValue() -> int\nC++: int GetTwistWMinValue()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinW must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {(char*)"GetTwistWMaxValue", PyvtkParametricFunction_GetTwistWMaxValue, METH_VARARGS,
   (char*)"V.GetTwistWMaxValue() -> int\nC++: int GetTwistWMaxValue()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinW must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {(char*)"GetTwistW", PyvtkParametricFunction_GetTwistW, METH_VARARGS,
   (char*)"V.GetTwistW() -> int\nC++: int GetTwistW()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinW must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {(char*)"TwistWOn", PyvtkParametricFunction_TwistWOn, METH_VARARGS,
   (char*)"V.TwistWOn()\nC++: void TwistWOn()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinW must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {(char*)"TwistWOff", PyvtkParametricFunction_TwistWOff, METH_VARARGS,
   (char*)"V.TwistWOff()\nC++: void TwistWOff()\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinW must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {(char*)"SetClockwiseOrdering", PyvtkParametricFunction_SetClockwiseOrdering, METH_VARARGS,
   (char*)"V.SetClockwiseOrdering(int)\nC++: void SetClockwiseOrdering(int)\n\nSet/Get the flag which determines the ordering of the the\nvertices forming the triangle strips. The ordering of the points\nbeing inserted into the triangle strip is important because it\ndetermines the direction of the normals for the lighting. If set,\nthe ordering is clockwise, otherwise the ordering is\nanti-clockwise. Default is true (i.e. clockwise ordering).\n"},
  {(char*)"GetClockwiseOrderingMinValue", PyvtkParametricFunction_GetClockwiseOrderingMinValue, METH_VARARGS,
   (char*)"V.GetClockwiseOrderingMinValue() -> int\nC++: int GetClockwiseOrderingMinValue()\n\nSet/Get the flag which determines the ordering of the the\nvertices forming the triangle strips. The ordering of the points\nbeing inserted into the triangle strip is important because it\ndetermines the direction of the normals for the lighting. If set,\nthe ordering is clockwise, otherwise the ordering is\nanti-clockwise. Default is true (i.e. clockwise ordering).\n"},
  {(char*)"GetClockwiseOrderingMaxValue", PyvtkParametricFunction_GetClockwiseOrderingMaxValue, METH_VARARGS,
   (char*)"V.GetClockwiseOrderingMaxValue() -> int\nC++: int GetClockwiseOrderingMaxValue()\n\nSet/Get the flag which determines the ordering of the the\nvertices forming the triangle strips. The ordering of the points\nbeing inserted into the triangle strip is important because it\ndetermines the direction of the normals for the lighting. If set,\nthe ordering is clockwise, otherwise the ordering is\nanti-clockwise. Default is true (i.e. clockwise ordering).\n"},
  {(char*)"GetClockwiseOrdering", PyvtkParametricFunction_GetClockwiseOrdering, METH_VARARGS,
   (char*)"V.GetClockwiseOrdering() -> int\nC++: int GetClockwiseOrdering()\n\nSet/Get the flag which determines the ordering of the the\nvertices forming the triangle strips. The ordering of the points\nbeing inserted into the triangle strip is important because it\ndetermines the direction of the normals for the lighting. If set,\nthe ordering is clockwise, otherwise the ordering is\nanti-clockwise. Default is true (i.e. clockwise ordering).\n"},
  {(char*)"ClockwiseOrderingOn", PyvtkParametricFunction_ClockwiseOrderingOn, METH_VARARGS,
   (char*)"V.ClockwiseOrderingOn()\nC++: void ClockwiseOrderingOn()\n\nSet/Get the flag which determines the ordering of the the\nvertices forming the triangle strips. The ordering of the points\nbeing inserted into the triangle strip is important because it\ndetermines the direction of the normals for the lighting. If set,\nthe ordering is clockwise, otherwise the ordering is\nanti-clockwise. Default is true (i.e. clockwise ordering).\n"},
  {(char*)"ClockwiseOrderingOff", PyvtkParametricFunction_ClockwiseOrderingOff, METH_VARARGS,
   (char*)"V.ClockwiseOrderingOff()\nC++: void ClockwiseOrderingOff()\n\nSet/Get the flag which determines the ordering of the the\nvertices forming the triangle strips. The ordering of the points\nbeing inserted into the triangle strip is important because it\ndetermines the direction of the normals for the lighting. If set,\nthe ordering is clockwise, otherwise the ordering is\nanti-clockwise. Default is true (i.e. clockwise ordering).\n"},
  {(char*)"SetDerivativesAvailable", PyvtkParametricFunction_SetDerivativesAvailable, METH_VARARGS,
   (char*)"V.SetDerivativesAvailable(int)\nC++: void SetDerivativesAvailable(int)\n\nSet/Get the flag which determines whether derivatives are\navailable from the parametric function (i.e., whether the\nEvaluate() method returns valid derivatives).\n"},
  {(char*)"GetDerivativesAvailableMinValue", PyvtkParametricFunction_GetDerivativesAvailableMinValue, METH_VARARGS,
   (char*)"V.GetDerivativesAvailableMinValue() -> int\nC++: int GetDerivativesAvailableMinValue()\n\nSet/Get the flag which determines whether derivatives are\navailable from the parametric function (i.e., whether the\nEvaluate() method returns valid derivatives).\n"},
  {(char*)"GetDerivativesAvailableMaxValue", PyvtkParametricFunction_GetDerivativesAvailableMaxValue, METH_VARARGS,
   (char*)"V.GetDerivativesAvailableMaxValue() -> int\nC++: int GetDerivativesAvailableMaxValue()\n\nSet/Get the flag which determines whether derivatives are\navailable from the parametric function (i.e., whether the\nEvaluate() method returns valid derivatives).\n"},
  {(char*)"GetDerivativesAvailable", PyvtkParametricFunction_GetDerivativesAvailable, METH_VARARGS,
   (char*)"V.GetDerivativesAvailable() -> int\nC++: int GetDerivativesAvailable()\n\nSet/Get the flag which determines whether derivatives are\navailable from the parametric function (i.e., whether the\nEvaluate() method returns valid derivatives).\n"},
  {(char*)"DerivativesAvailableOn", PyvtkParametricFunction_DerivativesAvailableOn, METH_VARARGS,
   (char*)"V.DerivativesAvailableOn()\nC++: void DerivativesAvailableOn()\n\nSet/Get the flag which determines whether derivatives are\navailable from the parametric function (i.e., whether the\nEvaluate() method returns valid derivatives).\n"},
  {(char*)"DerivativesAvailableOff", PyvtkParametricFunction_DerivativesAvailableOff, METH_VARARGS,
   (char*)"V.DerivativesAvailableOff()\nC++: void DerivativesAvailableOff()\n\nSet/Get the flag which determines whether derivatives are\navailable from the parametric function (i.e., whether the\nEvaluate() method returns valid derivatives).\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkParametricFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkParametricFunction_Methods,
    "vtkParametricFunction", modulename,
    NULL, NULL,
    PyvtkParametricFunction_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkParametricFunction_Doc()
{
  static const char *docstring[] = {
    "vtkParametricFunction - abstract interface for parametric functions\n\n",
    "Superclass: vtkObject\n\n",
    "vtkParametricFunction is an abstract interface for functions defined\nby parametric mapping i.e. f(u,v,w)->(x,y,z) where u_min <= u <\nu_max, v_min <= v < v_max, w_min <= w < w_max. (For notational\nconvenience, we will write f(u)->x and assume that u means (u,v,w)\nand x means (x,y,z).)\n\nThe interface contains the pure virtual function, Evaluate(), that\ngenerates a point and the derivatives at that p",
    "oint which are then\nused to construct the surface. A second pure virtual function,\nEvaluateScalar(), can be used to generate a scalar for the surface.\nFinally, the GetDimension() virtual function is used to differentiate\n1D, 2D, and 3D parametric functions. Since this abstract class\ndefines a pure virtual API, its subclasses must implement the pure\nvirtual functions GetDimension(), Evaluate() and ",
    "EvaluateScalar().\n\nThis class has also methods for defining a range of parametric values\n(u,v,w).\n\nThanks:\n\nAndrew Maclean andrew.amaclean@gmail.com for creating and\ncontributing the class.\n\nSee Also:\n\nvtkParametricFunctionSource - tessellates a parametric function\n\nImplementations of derived classes implementing non-orentable\nsurfaces: vtkParametricBoy vtkParametricCrossCap\nvtkParametricFigure8Kl",
    "ein vtkParametricKlein vtkParametricMobius\nvtkParametricRoman\n\nImplementations of derived classes implementing orientable surfaces:\nvtkParametricConicSpiral vtkParametricDini vtkParametricEllipsoid\nvtkParametricEnneper vtkParametricRandomHills\nvtkParametricSuperEllipsoid vtkParametricSuperToroid\nvtkParametricTorus\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParametricFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParametricFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParametricFunction", o) != 0)
    {
    Py_DECREF(o);
    }

}

