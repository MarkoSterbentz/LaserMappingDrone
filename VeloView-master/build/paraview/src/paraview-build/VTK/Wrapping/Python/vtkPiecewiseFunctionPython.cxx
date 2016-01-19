// python wrapper for vtkPiecewiseFunction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPiecewiseFunction.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPiecewiseFunction(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPiecewiseFunctionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkPiecewiseFunction_Doc();


static PyObject *
PyvtkPiecewiseFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPiecewiseFunction::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPiecewiseFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPiecewiseFunction::NewInstance());

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
PyvtkPiecewiseFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPiecewiseFunction *tempr = vtkPiecewiseFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkPiecewiseFunction::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkPiecewiseFunction::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkPiecewiseFunction::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkPiecewiseFunction::GetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_AddPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->AddPoint(temp0, temp1) :
      op->vtkPiecewiseFunction::AddPoint(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPiecewiseFunction_AddPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

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
    int tempr = (ap.IsBound() ?
      op->AddPoint(temp0, temp1, temp2, temp3) :
      op->vtkPiecewiseFunction::AddPoint(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPiecewiseFunction_AddPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPiecewiseFunction_AddPoint_s1(self, args);
    case 4:
      return PyvtkPiecewiseFunction_AddPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddPoint");
  return NULL;
}



static PyObject *
PyvtkPiecewiseFunction_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->RemovePoint(temp0) :
      op->vtkPiecewiseFunction::RemovePoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_RemoveAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllPoints();
      }
    else
      {
      op->vtkPiecewiseFunction::RemoveAllPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_AddSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

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
      op->AddSegment(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPiecewiseFunction::AddSegment(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkPiecewiseFunction::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetNodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNodeValue(temp0, temp1) :
      op->vtkPiecewiseFunction::GetNodeValue(temp0, temp1));

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
PyvtkPiecewiseFunction_SetNodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetNodeValue(temp0, temp1) :
      op->vtkPiecewiseFunction::SetNodeValue(temp0, temp1));

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
PyvtkPiecewiseFunction_GetDataPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDataPointer() :
      op->vtkPiecewiseFunction::GetDataPointer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_FillFromDataPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillFromDataPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int temp0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
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
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->FillFromDataPointer(temp0, temp1);
      }
    else
      {
      op->vtkPiecewiseFunction::FillFromDataPointer(temp0, temp1);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkPiecewiseFunction::GetRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_AdjustRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AdjustRange(temp0) :
      op->vtkPiecewiseFunction::AdjustRange(temp0));

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

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  double temp1;
  int temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  int temp4 = 1;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new double[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->GetTable(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkPiecewiseFunction::GetTable(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_BuildFunctionFromTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildFunctionFromTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  double temp1;
  int temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  int temp4 = 1;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new double[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->BuildFunctionFromTable(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkPiecewiseFunction::BuildFunctionFromTable(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_SetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClamping(temp0);
      }
    else
      {
      op->vtkPiecewiseFunction::SetClamping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClamping() :
      op->vtkPiecewiseFunction::GetClamping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_ClampingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOn();
      }
    else
      {
      op->vtkPiecewiseFunction::ClampingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_ClampingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOff();
      }
    else
      {
      op->vtkPiecewiseFunction::ClampingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetType() :
      op->vtkPiecewiseFunction::GetType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetFirstNonZeroValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstNonZeroValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFirstNonZeroValue() :
      op->vtkPiecewiseFunction::GetFirstNonZeroValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPiecewiseFunction::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkPiecewiseFunction *tempr = vtkPiecewiseFunction::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPiecewiseFunction_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkPiecewiseFunction *tempr = vtkPiecewiseFunction::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPiecewiseFunction_GetData_Methods[] = {
  {NULL, PyvtkPiecewiseFunction_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkPiecewiseFunction_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPiecewiseFunction_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPiecewiseFunction_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkPiecewiseFunction_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkPiecewiseFunction_SetAllowDuplicateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowDuplicateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllowDuplicateScalars(temp0);
      }
    else
      {
      op->vtkPiecewiseFunction::SetAllowDuplicateScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetAllowDuplicateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowDuplicateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAllowDuplicateScalars() :
      op->vtkPiecewiseFunction::GetAllowDuplicateScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_AllowDuplicateScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowDuplicateScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowDuplicateScalarsOn();
      }
    else
      {
      op->vtkPiecewiseFunction::AllowDuplicateScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_AllowDuplicateScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowDuplicateScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowDuplicateScalarsOff();
      }
    else
      {
      op->vtkPiecewiseFunction::AllowDuplicateScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPiecewiseFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkPiecewiseFunction_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPiecewiseFunction_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPiecewiseFunction_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPiecewiseFunction_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DeepCopy", PyvtkPiecewiseFunction_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *f)\n\n"},
  {(char*)"ShallowCopy", PyvtkPiecewiseFunction_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *f)\n\n"},
  {(char*)"GetDataObjectType", PyvtkPiecewiseFunction_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"GetSize", PyvtkPiecewiseFunction_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the number of points used to specify the function\n"},
  {(char*)"AddPoint", PyvtkPiecewiseFunction_AddPoint, METH_VARARGS,
   (char*)"V.AddPoint(float, float) -> int\nC++: int AddPoint(double x, double y)\nV.AddPoint(float, float, float, float) -> int\nC++: int AddPoint(double x, double y, double midpoint,\n    double sharpness)\n\nAdd/Remove points to/from the function. If a duplicate point is\nadded then the function value is changed at that location. Return\nthe index of the point (0 based), or -1 on error.\n"},
  {(char*)"RemovePoint", PyvtkPiecewiseFunction_RemovePoint, METH_VARARGS,
   (char*)"V.RemovePoint(float) -> int\nC++: int RemovePoint(double x)\n\nAdd/Remove points to/from the function. If a duplicate point is\nadded then the function value is changed at that location. Return\nthe index of the point (0 based), or -1 on error.\n"},
  {(char*)"RemoveAllPoints", PyvtkPiecewiseFunction_RemoveAllPoints, METH_VARARGS,
   (char*)"V.RemoveAllPoints()\nC++: void RemoveAllPoints()\n\nRemoves all points from the function.\n"},
  {(char*)"AddSegment", PyvtkPiecewiseFunction_AddSegment, METH_VARARGS,
   (char*)"V.AddSegment(float, float, float, float)\nC++: void AddSegment(double x1, double y1, double x2, double y2)\n\nAdd a line segment to the function. All points defined between\nthe two points specified are removed from the function. This is a\nlegacy method that does not allow the specification of the\nsharpness and midpoint values for the two nodes.\n"},
  {(char*)"GetValue", PyvtkPiecewiseFunction_GetValue, METH_VARARGS,
   (char*)"V.GetValue(float) -> float\nC++: double GetValue(double x)\n\nReturns the value of the function at the specified location using\nthe specified interpolation.\n"},
  {(char*)"GetNodeValue", PyvtkPiecewiseFunction_GetNodeValue, METH_VARARGS,
   (char*)"V.GetNodeValue(int, [float, float, float, float]) -> int\nC++: int GetNodeValue(int index, double val[4])\n\nFor the node specified by index, set/get the location (X), value\n(Y), midpoint, and sharpness values at the node. Returns -1 if\nthe index is out of range, returns 1 otherwise.\n"},
  {(char*)"SetNodeValue", PyvtkPiecewiseFunction_SetNodeValue, METH_VARARGS,
   (char*)"V.SetNodeValue(int, [float, float, float, float]) -> int\nC++: int SetNodeValue(int index, double val[4])\n\nFor the node specified by index, set/get the location (X), value\n(Y), midpoint, and sharpness values at the node. Returns -1 if\nthe index is out of range, returns 1 otherwise.\n"},
  {(char*)"GetDataPointer", PyvtkPiecewiseFunction_GetDataPointer, METH_VARARGS,
   (char*)"V.GetDataPointer() -> (float, ...)\nC++: double *GetDataPointer()\n\nReturns a pointer to the data stored in the table. Fills from a\npointer to data stored in a similar table. These are legacy\nmethods which will be maintained for compatibility - however,\nnote that the vtkPiecewiseFunction no longer stores the nodes in\na double array internally.\n"},
  {(char*)"FillFromDataPointer", PyvtkPiecewiseFunction_FillFromDataPointer, METH_VARARGS,
   (char*)"V.FillFromDataPointer(int, [float, ...])\nC++: void FillFromDataPointer(int, double *)\n\nReturns a pointer to the data stored in the table. Fills from a\npointer to data stored in a similar table. These are legacy\nmethods which will be maintained for compatibility - however,\nnote that the vtkPiecewiseFunction no longer stores the nodes in\na double array internally.\n"},
  {(char*)"GetRange", PyvtkPiecewiseFunction_GetRange, METH_VARARGS,
   (char*)"V.GetRange() -> (float, float)\nC++: double *GetRange()\n\n"},
  {(char*)"AdjustRange", PyvtkPiecewiseFunction_AdjustRange, METH_VARARGS,
   (char*)"V.AdjustRange([float, float]) -> int\nC++: int AdjustRange(double range[2])\n\nRemove all points out of the new range, and make sure there is a\npoint at each end of that range. Return 1 on success, 0\notherwise.\n"},
  {(char*)"GetTable", PyvtkPiecewiseFunction_GetTable, METH_VARARGS,
   (char*)"V.GetTable(float, float, int, [float, ...], int)\nC++: void GetTable(double x1, double x2, int size, double *table,\n    int stride=1)\n\nFills in an array of function values evaluated at regular\nintervals. Parameter \"stride\" is used to step through the output\n\"table\".\n"},
  {(char*)"BuildFunctionFromTable", PyvtkPiecewiseFunction_BuildFunctionFromTable, METH_VARARGS,
   (char*)"V.BuildFunctionFromTable(float, float, int, [float, ...], int)\nC++: void BuildFunctionFromTable(double x1, double x2, int size,\n    double *table, int stride=1)\n\nConstructs a piecewise function from a table.  Function range is\nis set to [x1, x2], function size is set to size, and function\npoints are regularly spaced between x1 and x2.  Parameter\n\"stride\" is is step through the input table.\n"},
  {(char*)"SetClamping", PyvtkPiecewiseFunction_SetClamping, METH_VARARGS,
   (char*)"V.SetClamping(int)\nC++: void SetClamping(int a)\n\nWhen zero range clamping is Off, GetValue() returns 0.0 when a\nvalue is requested outside of the points specified. When zero\nrange clamping is On, GetValue() returns the value at the value\nat the lowest point for a request below all points specified and\nreturns the value at the highest point for a request above all\npoints specified. On is the default.\n"},
  {(char*)"GetClamping", PyvtkPiecewiseFunction_GetClamping, METH_VARARGS,
   (char*)"V.GetClamping() -> int\nC++: int GetClamping()\n\nWhen zero range clamping is Off, GetValue() returns 0.0 when a\nvalue is requested outside of the points specified. When zero\nrange clamping is On, GetValue() returns the value at the value\nat the lowest point for a request below all points specified and\nreturns the value at the highest point for a request above all\npoints specified. On is the default.\n"},
  {(char*)"ClampingOn", PyvtkPiecewiseFunction_ClampingOn, METH_VARARGS,
   (char*)"V.ClampingOn()\nC++: void ClampingOn()\n\nWhen zero range clamping is Off, GetValue() returns 0.0 when a\nvalue is requested outside of the points specified. When zero\nrange clamping is On, GetValue() returns the value at the value\nat the lowest point for a request below all points specified and\nreturns the value at the highest point for a request above all\npoints specified. On is the default.\n"},
  {(char*)"ClampingOff", PyvtkPiecewiseFunction_ClampingOff, METH_VARARGS,
   (char*)"V.ClampingOff()\nC++: void ClampingOff()\n\nWhen zero range clamping is Off, GetValue() returns 0.0 when a\nvalue is requested outside of the points specified. When zero\nrange clamping is On, GetValue() returns the value at the value\nat the lowest point for a request below all points specified and\nreturns the value at the highest point for a request above all\npoints specified. On is the default.\n"},
  {(char*)"GetType", PyvtkPiecewiseFunction_GetType, METH_VARARGS,
   (char*)"V.GetType() -> string\nC++: const char *GetType()\n\nReturn the type of function: Function Types:\n   0 : Constant        (No change in slope between end points)\n   1 : NonDecreasing   (Always increasing or zero slope)\n   2 : NonIncreasing   (Always decreasing or zero slope)\n   3 : Varied          (Contains both decreasing and increasing\nslopes)\n"},
  {(char*)"GetFirstNonZeroValue", PyvtkPiecewiseFunction_GetFirstNonZeroValue, METH_VARARGS,
   (char*)"V.GetFirstNonZeroValue() -> float\nC++: double GetFirstNonZeroValue()\n\nReturns the first point location which precedes a non-zero\nsegment of the function. Note that the value at this point may be\nzero.\n"},
  {(char*)"Initialize", PyvtkPiecewiseFunction_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nClears out the current function. A newly created\nvtkPiecewiseFunction is alreay initialized, so there is no need\nto call this method which in turn simply calls RemoveAllPoints()\n"},
  {(char*)"GetData", PyvtkPiecewiseFunction_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkPiecewiseFunction\nC++: static vtkPiecewiseFunction *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkPiecewiseFunction\nC++: static vtkPiecewiseFunction *GetData(vtkInformationVector *v,\n     int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {(char*)"SetAllowDuplicateScalars", PyvtkPiecewiseFunction_SetAllowDuplicateScalars, METH_VARARGS,
   (char*)"V.SetAllowDuplicateScalars(int)\nC++: void SetAllowDuplicateScalars(int a)\n\nToggle whether to allow duplicate scalar values in the piecewise\nfunction (off by default).\n"},
  {(char*)"GetAllowDuplicateScalars", PyvtkPiecewiseFunction_GetAllowDuplicateScalars, METH_VARARGS,
   (char*)"V.GetAllowDuplicateScalars() -> int\nC++: int GetAllowDuplicateScalars()\n\nToggle whether to allow duplicate scalar values in the piecewise\nfunction (off by default).\n"},
  {(char*)"AllowDuplicateScalarsOn", PyvtkPiecewiseFunction_AllowDuplicateScalarsOn, METH_VARARGS,
   (char*)"V.AllowDuplicateScalarsOn()\nC++: void AllowDuplicateScalarsOn()\n\nToggle whether to allow duplicate scalar values in the piecewise\nfunction (off by default).\n"},
  {(char*)"AllowDuplicateScalarsOff", PyvtkPiecewiseFunction_AllowDuplicateScalarsOff, METH_VARARGS,
   (char*)"V.AllowDuplicateScalarsOff()\nC++: void AllowDuplicateScalarsOff()\n\nToggle whether to allow duplicate scalar values in the piecewise\nfunction (off by default).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPiecewiseFunction_StaticNew()
{
  return vtkPiecewiseFunction::New();
}

PyObject *PyVTKClass_vtkPiecewiseFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPiecewiseFunction_StaticNew,
    PyvtkPiecewiseFunction_Methods,
    "vtkPiecewiseFunction", modulename,
    NULL, NULL,
    PyvtkPiecewiseFunction_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkPiecewiseFunction_Doc()
{
  static const char *docstring[] = {
    "vtkPiecewiseFunction - Defines a 1D piecewise function.\n\n",
    "Superclass: vtkDataObject\n\n",
    "Defines a piecewise function mapping. This mapping allows the\naddition of control points, and allows the user to control the\nfunction between the control points. A piecewise hermite curve is\nused between control points, based on the sharpness and midpoint\nparameters. A sharpness of 0 yields a piecewise linear function and a\nsharpness of 1 yields a piecewise constant function. The midpoint is\nthe n",
    "ormalized distance between control points at which the curve\nreaches the median Y value. The midpoint and sharpness values\nspecified when adding a node are used to control the transition to\nthe next node (the last node's values are ignored) Outside the range\nof nodes, the values are 0 if Clamping is off, or the nearest node\npoint if Clamping is on. Using the legacy methods for adding points \n(whic",
    "h do not have Sharpness and Midpoint parameters) will default to\nMidpoint = 0.5 (halfway between the control points) and Sharpness =\n0.0 (linear).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPiecewiseFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPiecewiseFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPiecewiseFunction", o) != 0)
    {
    Py_DECREF(o);
    }

}

