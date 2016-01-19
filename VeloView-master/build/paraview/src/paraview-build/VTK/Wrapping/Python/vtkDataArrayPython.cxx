// python wrapper for vtkDataArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractArrayNew
extern "C" { PyObject *PyVTKClass_vtkAbstractArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractArrayNew
#endif

static const char **PyvtkDataArray_Doc();


static PyObject *
PyvtkDataArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataArray::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataArray::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataArray::NewInstance());

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
PyvtkDataArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataArray *tempr = vtkDataArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_FastDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FastDownCast");

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    vtkDataArray *tempr = vtkDataArray::FastDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_IsNumeric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNumeric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsNumeric() :
      op->vtkDataArray::IsNumeric());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_GetElementComponentSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementComponentSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetElementComponentSize() :
      op->vtkDataArray::GetElementComponentSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_SetTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkAbstractArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
    {
    op->SetTuple(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataArray_SetTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double *temp1 = NULL;
  double small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[size1];
      }
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    op->SetTuple(temp0, temp1);

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
PyvtkDataArray_SetTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDataArray_SetTuple_s1(self, args);
    case 2:
      return PyvtkDataArray_SetTuple_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTuple");
  return NULL;
}



static PyObject *
PyvtkDataArray_InsertTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkAbstractArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
    {
    op->InsertTuple(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataArray_InsertTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double *temp1 = NULL;
  double small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[size1];
      }
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    op->InsertTuple(temp0, temp1);

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
PyvtkDataArray_InsertTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDataArray_InsertTuple_s1(self, args);
    case 2:
      return PyvtkDataArray_InsertTuple_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuple");
  return NULL;
}



static PyObject *
PyvtkDataArray_InsertNextTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  vtkAbstractArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
    {
    vtkIdType tempr = op->InsertNextTuple(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataArray_InsertNextTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = op->GetNumberOfComponents();
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkIdType tempr = op->InsertNextTuple(temp0);

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
PyvtkDataArray_InsertNextTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDataArray_InsertNextTuple_s1(self, args);
    case 1:
      return PyvtkDataArray_InsertNextTuple_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextTuple");
  return NULL;
}



static PyObject *
PyvtkDataArray_GetTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdList *temp0 = NULL;
  vtkAbstractArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      op->GetTuples(temp0, temp1);
      }
    else
      {
      op->vtkDataArray::GetTuples(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataArray_GetTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkAbstractArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      op->GetTuples(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataArray::GetTuples(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataArray_GetTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDataArray_GetTuples_s1(self, args);
    case 3:
      return PyvtkDataArray_GetTuples_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTuples");
  return NULL;
}



static PyObject *
PyvtkDataArray_InterpolateTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  vtkAbstractArray *temp2 = NULL;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
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

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray") &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->InterpolateTuple(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataArray::InterpolateTuple(temp0, temp1, temp2, temp3);
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
PyvtkDataArray_InterpolateTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkAbstractArray *temp2 = NULL;
  vtkIdType temp3;
  vtkAbstractArray *temp4 = NULL;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray") &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkAbstractArray") &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->InterpolateTuple(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkDataArray::InterpolateTuple(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataArray_InterpolateTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkDataArray_InterpolateTuple_s1(self, args);
    case 6:
      return PyvtkDataArray_InterpolateTuple_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InterpolateTuple");
  return NULL;
}



static PyObject *
PyvtkDataArray_GetTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int sizer = op->GetNumberOfComponents();
    double *tempr = op->GetTuple(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkDataArray_GetTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    op->GetTuple(temp0, temp1);

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
PyvtkDataArray_GetTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkDataArray_GetTuple_s1(self, args);
    case 2:
      return PyvtkDataArray_GetTuple_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTuple");
  return NULL;
}



static PyObject *
PyvtkDataArray_GetTuple1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTuple1(temp0) :
      op->vtkDataArray::GetTuple1(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_GetTuple2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTuple2(temp0) :
      op->vtkDataArray::GetTuple2(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_GetTuple3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTuple3(temp0) :
      op->vtkDataArray::GetTuple3(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_GetTuple4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTuple4(temp0) :
      op->vtkDataArray::GetTuple4(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_GetTuple6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple6");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTuple6(temp0) :
      op->vtkDataArray::GetTuple6(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_GetTuple9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple9");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  int sizer = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTuple9(temp0) :
      op->vtkDataArray::GetTuple9(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_SetTuple1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTuple1(temp0, temp1);
      }
    else
      {
      op->vtkDataArray::SetTuple1(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_SetTuple2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
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
      op->SetTuple2(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataArray::SetTuple2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_SetTuple3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
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
      op->SetTuple3(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataArray::SetTuple3(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_SetTuple4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetTuple4(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkDataArray::SetTuple4(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_SetTuple6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple6");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    if (ap.IsBound())
      {
      op->SetTuple6(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkDataArray::SetTuple6(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_SetTuple9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple9");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  double temp9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9))
    {
    if (ap.IsBound())
      {
      op->SetTuple9(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
      }
    else
      {
      op->vtkDataArray::SetTuple9(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_InsertTuple1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->InsertTuple1(temp0, temp1);
      }
    else
      {
      op->vtkDataArray::InsertTuple1(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_InsertTuple2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
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
      op->InsertTuple2(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataArray::InsertTuple2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_InsertTuple3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
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
      op->InsertTuple3(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataArray::InsertTuple3(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_InsertTuple4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->InsertTuple4(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkDataArray::InsertTuple4(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_InsertTuple9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple9");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  double temp9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9))
    {
    if (ap.IsBound())
      {
      op->InsertTuple9(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
      }
    else
      {
      op->vtkDataArray::InsertTuple9(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_InsertNextTuple1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->InsertNextTuple1(temp0);
      }
    else
      {
      op->vtkDataArray::InsertNextTuple1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_InsertNextTuple2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->InsertNextTuple2(temp0, temp1);
      }
    else
      {
      op->vtkDataArray::InsertNextTuple2(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_InsertNextTuple3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

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
      op->InsertNextTuple3(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataArray::InsertNextTuple3(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_InsertNextTuple4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

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
      op->InsertNextTuple4(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataArray::InsertNextTuple4(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_InsertNextTuple9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple9");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
    {
    if (ap.IsBound())
      {
      op->InsertNextTuple9(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkDataArray::InsertNextTuple9(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_RemoveTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->RemoveTuple(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_RemoveFirstTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFirstTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->RemoveFirstTuple();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_RemoveLastTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLastTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->RemoveLastTuple();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = (ap.IsBound() ?
      op->GetComponent(temp0, temp1) :
      op->vtkDataArray::GetComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  int temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetComponent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataArray::SetComponent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_InsertComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  int temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->InsertComponent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataArray::InsertComponent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  vtkDoubleArray *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDoubleArray"))
    {
    if (ap.IsBound())
      {
      op->GetData(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkDataArray::GetData(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_DeepCopy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkDataArray::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataArray_DeepCopy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkDataArray::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDataArray_DeepCopy_Methods[] = {
  {NULL, PyvtkDataArray_DeepCopy_s1, METH_VARARGS,
   (char*)"@O *vtkAbstractArray"},
  {NULL, PyvtkDataArray_DeepCopy_s2, METH_VARARGS,
   (char*)"@O *vtkDataArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDataArray_DeepCopy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataArray_DeepCopy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DeepCopy");
  return NULL;
}



static PyObject *
PyvtkDataArray_FillComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->FillComponent(temp0, temp1);
      }
    else
      {
      op->vtkDataArray::FillComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_CopyComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  int temp0;
  vtkDataArray *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyComponent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataArray::CopyComponent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_WriteVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    void  *tempr = op->WriteVoidPointer(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkDataArray::GetActualMemorySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_CreateDefaultLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLookupTable();
      }
    else
      {
      op->vtkDataArray::CreateDefaultLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkLookupTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkDataArray::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkDataArray::GetLookupTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_GetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetRange(temp0, temp1);
      }
    else
      {
      op->vtkDataArray::GetRange(temp0, temp1);
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
PyvtkDataArray_GetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  int temp0;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetRange(temp0) :
      op->vtkDataArray::GetRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkDataArray_GetRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkDataArray::GetRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkDataArray_GetRange_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

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
      op->GetRange(temp0);
      }
    else
      {
      op->vtkDataArray::GetRange(temp0);
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

static PyMethodDef PyvtkDataArray_GetRange_Methods[] = {
  {NULL, PyvtkDataArray_GetRange_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, PyvtkDataArray_GetRange_s4, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDataArray_GetRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataArray_GetRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDataArray_GetRange_s1(self, args);
    case 0:
      return PyvtkDataArray_GetRange_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetRange");
  return NULL;
}



static PyObject *
PyvtkDataArray_GetDataTypeRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

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
      op->GetDataTypeRange(temp0);
      }
    else
      {
      op->vtkDataArray::GetDataTypeRange(temp0);
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
PyvtkDataArray_GetDataTypeRange_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeRange");

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkDataArray::GetDataTypeRange(temp0, temp1);

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
PyvtkDataArray_GetDataTypeRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkDataArray_GetDataTypeRange_s1(self, args);
    case 2:
      return PyvtkDataArray_GetDataTypeRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDataTypeRange");
  return NULL;
}



static PyObject *
PyvtkDataArray_GetDataTypeMin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDataTypeMin() :
      op->vtkDataArray::GetDataTypeMin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataArray_GetDataTypeMin_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeMin");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = vtkDataArray::GetDataTypeMin(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataArray_GetDataTypeMin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataArray_GetDataTypeMin_s1(self, args);
    case 1:
      return PyvtkDataArray_GetDataTypeMin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDataTypeMin");
  return NULL;
}



static PyObject *
PyvtkDataArray_GetDataTypeMax_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDataTypeMax() :
      op->vtkDataArray::GetDataTypeMax());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataArray_GetDataTypeMax_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeMax");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = vtkDataArray::GetDataTypeMax(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataArray_GetDataTypeMax(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataArray_GetDataTypeMax_s1(self, args);
    case 1:
      return PyvtkDataArray_GetDataTypeMax_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDataTypeMax");
  return NULL;
}



static PyObject *
PyvtkDataArray_GetMaxNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNorm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaxNorm() :
      op->vtkDataArray::GetMaxNorm());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_CreateDataArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateDataArray");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataArray *tempr = vtkDataArray::CreateDataArray(temp0);

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
PyvtkDataArray_COMPONENT_RANGE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COMPONENT_RANGE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleVectorKey *tempr = vtkDataArray::COMPONENT_RANGE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_L2_NORM_RANGE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "L2_NORM_RANGE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleVectorKey *tempr = vtkDataArray::L2_NORM_RANGE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_CopyInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1 = 1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    int tempr = (ap.IsBound() ?
      op->CopyInformation(temp0, temp1) :
      op->vtkDataArray::CopyInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataArray_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkDataArray::GetArrayType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataArray_Methods[] = {
  {(char*)"GetClassName", PyvtkDataArray_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataArray_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataArray_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataArray\nC++: vtkDataArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataArray_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataArray\nC++: vtkDataArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"FastDownCast", PyvtkDataArray_FastDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.FastDownCast(vtkAbstractArray) -> vtkDataArray\nC++: static vtkDataArray *FastDownCast(vtkAbstractArray *source)\n\nPerform a fast, safe cast from a vtkAbstractArray to a\nvtkDataArray. This method checks if source->GetArrayType()\nreturns DataArrayFastCast or a more derived type, and performs a\nstatic_cast to return source as a vtkDataArray pointer.\nOtherwise, NULL is returned.\n"},
  {(char*)"IsNumeric", PyvtkDataArray_IsNumeric, METH_VARARGS,
   (char*)"V.IsNumeric() -> int\nC++: virtual int IsNumeric()\n\nThis method is here to make backward compatibility easier.  It\nmust return true if and only if an array contains numeric data.\nAll vtkDataArray subclasses contain numeric data, hence this\nmethod always returns 1(true).\n"},
  {(char*)"GetElementComponentSize", PyvtkDataArray_GetElementComponentSize, METH_VARARGS,
   (char*)"V.GetElementComponentSize() -> int\nC++: virtual int GetElementComponentSize()\n\nReturn the size, in bytes, of the lowest-level element of an\narray.  For vtkDataArray and subclasses this is the size of the\ndata type.\n"},
  {(char*)"SetTuple", PyvtkDataArray_SetTuple, METH_VARARGS,
   (char*)"V.SetTuple(int, int, vtkAbstractArray)\nC++: virtual void SetTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source)\nV.SetTuple(int, (float, ...))\nC++: virtual void SetTuple(vtkIdType i, const double *tuple)\n\nSet the tuple at the ith location using the jth tuple in the\nsource array. This method assumes that the two arrays have the\nsame type and structure. Note that range checking and memory\nallocation is not performed; use in conjunction with\nSetNumberOfTuples() to allocate space.\n"},
  {(char*)"InsertTuple", PyvtkDataArray_InsertTuple, METH_VARARGS,
   (char*)"V.InsertTuple(int, int, vtkAbstractArray)\nC++: virtual void InsertTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source)\nV.InsertTuple(int, (float, ...))\nC++: virtual void InsertTuple(vtkIdType i, const double *tuple)\n\nInsert the jth tuple in the source array, at ith location in this\narray. Note that memory allocation is performed as necessary to\nhold the data. This pure virtual function is redeclared here to\navoid declaration hidden warnings.\n"},
  {(char*)"InsertNextTuple", PyvtkDataArray_InsertNextTuple, METH_VARARGS,
   (char*)"V.InsertNextTuple(int, vtkAbstractArray) -> int\nC++: virtual vtkIdType InsertNextTuple(vtkIdType j,\n    vtkAbstractArray *source)\nV.InsertNextTuple((float, ...)) -> int\nC++: virtual vtkIdType InsertNextTuple(const double *tuple)\n\nInsert the jth tuple in the source array, at the end in this\narray. Note that memory allocation is performed as necessary to\nhold the data. Returns the location at which the data was\ninserted. This pure virtual function is redeclared here to avoid\ndeclaration hidden warnings.\n"},
  {(char*)"GetTuples", PyvtkDataArray_GetTuples, METH_VARARGS,
   (char*)"V.GetTuples(vtkIdList, vtkAbstractArray)\nC++: virtual void GetTuples(vtkIdList *ptIds,\n    vtkAbstractArray *output)\nV.GetTuples(int, int, vtkAbstractArray)\nC++: virtual void GetTuples(vtkIdType p1, vtkIdType p2,\n    vtkAbstractArray *output)\n\nGiven a list of point ids, return an array of tuples. You must\ninsure that the output array has been previously allocated with\nenough space to hold the data.\n"},
  {(char*)"InterpolateTuple", PyvtkDataArray_InterpolateTuple, METH_VARARGS,
   (char*)"V.InterpolateTuple(int, vtkIdList, vtkAbstractArray, [float, ...])\nC++: virtual void InterpolateTuple(vtkIdType i,\n    vtkIdList *ptIndices, vtkAbstractArray *source,\n    double *weights)\nV.InterpolateTuple(int, int, vtkAbstractArray, int,\n    vtkAbstractArray, float)\nC++: virtual void InterpolateTuple(vtkIdType i, vtkIdType id1,\n    vtkAbstractArray *source1, vtkIdType id2,\n    vtkAbstractArray *source2, double t)\n\nSet the ith tuple in this array as the interpolated tuple value,\ngiven the ptIndices in the source array and associated\ninterpolation weights. This method assumes that the two arrays\nare of the same type and strcuture.\n"},
  {(char*)"GetTuple", PyvtkDataArray_GetTuple, METH_VARARGS,
   (char*)"V.GetTuple(int) -> (float, ...)\nC++: virtual double *GetTuple(vtkIdType i)\nV.GetTuple(int, [float, ...])\nC++: virtual void GetTuple(vtkIdType i, double *tuple)\n\nGet the data tuple at ith location. Return it as a pointer to an\narray. Note: this method is not thread-safe, and the pointer is\nonly valid as long as another method invocation to a vtk object\nis not performed.\n"},
  {(char*)"GetTuple1", PyvtkDataArray_GetTuple1, METH_VARARGS,
   (char*)"V.GetTuple1(int) -> float\nC++: double GetTuple1(vtkIdType i)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {(char*)"GetTuple2", PyvtkDataArray_GetTuple2, METH_VARARGS,
   (char*)"V.GetTuple2(int) -> (float, float)\nC++: double *GetTuple2(vtkIdType i)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {(char*)"GetTuple3", PyvtkDataArray_GetTuple3, METH_VARARGS,
   (char*)"V.GetTuple3(int) -> (float, float, float)\nC++: double *GetTuple3(vtkIdType i)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {(char*)"GetTuple4", PyvtkDataArray_GetTuple4, METH_VARARGS,
   (char*)"V.GetTuple4(int) -> (float, float, float, float)\nC++: double *GetTuple4(vtkIdType i)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {(char*)"GetTuple6", PyvtkDataArray_GetTuple6, METH_VARARGS,
   (char*)"V.GetTuple6(int) -> (float, ...)\nC++: double *GetTuple6(vtkIdType i)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {(char*)"GetTuple9", PyvtkDataArray_GetTuple9, METH_VARARGS,
   (char*)"V.GetTuple9(int) -> (float, float, float, float, float, float,\n    float, float, float)\nC++: double *GetTuple9(vtkIdType i)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {(char*)"SetTuple1", PyvtkDataArray_SetTuple1, METH_VARARGS,
   (char*)"V.SetTuple1(int, float)\nC++: void SetTuple1(vtkIdType i, double value)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {(char*)"SetTuple2", PyvtkDataArray_SetTuple2, METH_VARARGS,
   (char*)"V.SetTuple2(int, float, float)\nC++: void SetTuple2(vtkIdType i, double val0, double val1)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {(char*)"SetTuple3", PyvtkDataArray_SetTuple3, METH_VARARGS,
   (char*)"V.SetTuple3(int, float, float, float)\nC++: void SetTuple3(vtkIdType i, double val0, double val1,\n    double val2)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {(char*)"SetTuple4", PyvtkDataArray_SetTuple4, METH_VARARGS,
   (char*)"V.SetTuple4(int, float, float, float, float)\nC++: void SetTuple4(vtkIdType i, double val0, double val1,\n    double val2, double val3)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {(char*)"SetTuple6", PyvtkDataArray_SetTuple6, METH_VARARGS,
   (char*)"V.SetTuple6(int, float, float, float, float, float, float)\nC++: void SetTuple6(vtkIdType i, double val0, double val1,\n    double val2, double val3, double val4, double val5)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {(char*)"SetTuple9", PyvtkDataArray_SetTuple9, METH_VARARGS,
   (char*)"V.SetTuple9(int, float, float, float, float, float, float, float,\n    float, float)\nC++: void SetTuple9(vtkIdType i, double val0, double val1,\n    double val2, double val3, double val4, double val5,\n    double val6, double val7, double val8)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {(char*)"InsertTuple1", PyvtkDataArray_InsertTuple1, METH_VARARGS,
   (char*)"V.InsertTuple1(int, float)\nC++: void InsertTuple1(vtkIdType i, double value)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {(char*)"InsertTuple2", PyvtkDataArray_InsertTuple2, METH_VARARGS,
   (char*)"V.InsertTuple2(int, float, float)\nC++: void InsertTuple2(vtkIdType i, double val0, double val1)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {(char*)"InsertTuple3", PyvtkDataArray_InsertTuple3, METH_VARARGS,
   (char*)"V.InsertTuple3(int, float, float, float)\nC++: void InsertTuple3(vtkIdType i, double val0, double val1,\n    double val2)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {(char*)"InsertTuple4", PyvtkDataArray_InsertTuple4, METH_VARARGS,
   (char*)"V.InsertTuple4(int, float, float, float, float)\nC++: void InsertTuple4(vtkIdType i, double val0, double val1,\n    double val2, double val3)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {(char*)"InsertTuple9", PyvtkDataArray_InsertTuple9, METH_VARARGS,
   (char*)"V.InsertTuple9(int, float, float, float, float, float, float,\n    float, float, float)\nC++: void InsertTuple9(vtkIdType i, double val0, double val1,\n    double val2, double val3, double val4, double val5,\n    double val6, double val7, double val8)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {(char*)"InsertNextTuple1", PyvtkDataArray_InsertNextTuple1, METH_VARARGS,
   (char*)"V.InsertNextTuple1(float)\nC++: void InsertNextTuple1(double value)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {(char*)"InsertNextTuple2", PyvtkDataArray_InsertNextTuple2, METH_VARARGS,
   (char*)"V.InsertNextTuple2(float, float)\nC++: void InsertNextTuple2(double val0, double val1)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {(char*)"InsertNextTuple3", PyvtkDataArray_InsertNextTuple3, METH_VARARGS,
   (char*)"V.InsertNextTuple3(float, float, float)\nC++: void InsertNextTuple3(double val0, double val1, double val2)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {(char*)"InsertNextTuple4", PyvtkDataArray_InsertNextTuple4, METH_VARARGS,
   (char*)"V.InsertNextTuple4(float, float, float, float)\nC++: void InsertNextTuple4(double val0, double val1, double val2,\n    double val3)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {(char*)"InsertNextTuple9", PyvtkDataArray_InsertNextTuple9, METH_VARARGS,
   (char*)"V.InsertNextTuple9(float, float, float, float, float, float,\n    float, float, float)\nC++: void InsertNextTuple9(double val0, double val1, double val2,\n    double val3, double val4, double val5, double val6,\n    double val7, double val8)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {(char*)"RemoveTuple", PyvtkDataArray_RemoveTuple, METH_VARARGS,
   (char*)"V.RemoveTuple(int)\nC++: virtual void RemoveTuple(vtkIdType id)\n\nThese methods remove tuples from the data array. They shift data\nand resize array, so the data array is still valid after this\noperation. Note, this operation is fairly slow.\n"},
  {(char*)"RemoveFirstTuple", PyvtkDataArray_RemoveFirstTuple, METH_VARARGS,
   (char*)"V.RemoveFirstTuple()\nC++: virtual void RemoveFirstTuple()\n\nThese methods remove tuples from the data array. They shift data\nand resize array, so the data array is still valid after this\noperation. Note, this operation is fairly slow.\n"},
  {(char*)"RemoveLastTuple", PyvtkDataArray_RemoveLastTuple, METH_VARARGS,
   (char*)"V.RemoveLastTuple()\nC++: virtual void RemoveLastTuple()\n\nThese methods remove tuples from the data array. They shift data\nand resize array, so the data array is still valid after this\noperation. Note, this operation is fairly slow.\n"},
  {(char*)"GetComponent", PyvtkDataArray_GetComponent, METH_VARARGS,
   (char*)"V.GetComponent(int, int) -> float\nC++: virtual double GetComponent(vtkIdType i, int j)\n\nReturn the data component at the ith tuple and jth component\nlocation. Note that i is less than NumberOfTuples and j is less\nthan NumberOfComponents.\n"},
  {(char*)"SetComponent", PyvtkDataArray_SetComponent, METH_VARARGS,
   (char*)"V.SetComponent(int, int, float)\nC++: virtual void SetComponent(vtkIdType i, int j, double c)\n\nSet the data component at the ith tuple and jth component\nlocation. Note that i is less than NumberOfTuples and j is less\nthan\n NumberOfComponents. Make sure enough memory has been allocated\n(use SetNumberOfTuples() and SetNumberOfComponents()).\n"},
  {(char*)"InsertComponent", PyvtkDataArray_InsertComponent, METH_VARARGS,
   (char*)"V.InsertComponent(int, int, float)\nC++: virtual void InsertComponent(vtkIdType i, int j, double c)\n\nInsert the data component at ith tuple and jth component\nlocation. Note that memory allocation is performed as necessary\nto hold the data.\n"},
  {(char*)"GetData", PyvtkDataArray_GetData, METH_VARARGS,
   (char*)"V.GetData(int, int, int, int, vtkDoubleArray)\nC++: virtual void GetData(vtkIdType tupleMin, vtkIdType tupleMax,\n    int compMin, int compMax, vtkDoubleArray *data)\n\nGet the data as a double array in the range (tupleMin,tupleMax)\nand (compMin, compMax). The resulting double array consists of\nall data in the tuple range specified and only the component\nrange specified. This process typically requires casting the data\nfrom native form into doubleing point values. This method is\nprovided as a convenience for data exchange, and is not very\nfast.\n"},
  {(char*)"DeepCopy", PyvtkDataArray_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkAbstractArray)\nC++: virtual void DeepCopy(vtkAbstractArray *aa)\nV.DeepCopy(vtkDataArray)\nC++: virtual void DeepCopy(vtkDataArray *da)\n\nDeep copy of data. Copies data from different data arrays even if\nthey are different types (using doubleing-point exchange).\n"},
  {(char*)"FillComponent", PyvtkDataArray_FillComponent, METH_VARARGS,
   (char*)"V.FillComponent(int, float)\nC++: virtual void FillComponent(int j, double c)\n\nFill a component of a data array with a specified value. This\nmethod sets the specified component to specified value for all\ntuples in the data array.  This methods can be used to initialize\nor reinitialize a single component of a multi-component array.\n"},
  {(char*)"CopyComponent", PyvtkDataArray_CopyComponent, METH_VARARGS,
   (char*)"V.CopyComponent(int, vtkDataArray, int)\nC++: virtual void CopyComponent(int j, vtkDataArray *from,\n    int fromComponent)\n\nCopy a component from one data array into a component on this\ndata array. This method copies the specified component\n(\"fromComponent\") from the specified data array (\"from\") to the\nspecified component (\"j\") over all the tuples in this data array.\n This method can be used to extract a component (column) from one\ndata array and paste that data into a component on this data\narray.\n"},
  {(char*)"WriteVoidPointer", PyvtkDataArray_WriteVoidPointer, METH_VARARGS,
   (char*)"V.WriteVoidPointer(int, int) ->\nC++: virtual void *WriteVoidPointer(vtkIdType id,\n    vtkIdType number)\n\nGet the address of a particular data index. Make sure data is\nallocated for the number of items requested. Set MaxId according\nto the number of data values requested.\n"},
  {(char*)"GetActualMemorySize", PyvtkDataArray_GetActualMemorySize, METH_VARARGS,
   (char*)"V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the memory in kilobytes consumed by this data array. Used\nto support streaming and reading/writing data. The value returned\nis guaranteed to be greater than or equal to the memory required\nto actually represent the data represented by this object. The\ninformation returned is valid only after the pipeline has been\nupdated.\n"},
  {(char*)"CreateDefaultLookupTable", PyvtkDataArray_CreateDefaultLookupTable, METH_VARARGS,
   (char*)"V.CreateDefaultLookupTable()\nC++: void CreateDefaultLookupTable()\n\nCreate default lookup table. Generally used to create one when\nnone is available.\n"},
  {(char*)"SetLookupTable", PyvtkDataArray_SetLookupTable, METH_VARARGS,
   (char*)"V.SetLookupTable(vtkLookupTable)\nC++: void SetLookupTable(vtkLookupTable *lut)\n\nSet/get the lookup table associated with this scalar data, if\nany.\n"},
  {(char*)"GetLookupTable", PyvtkDataArray_GetLookupTable, METH_VARARGS,
   (char*)"V.GetLookupTable() -> vtkLookupTable\nC++: vtkLookupTable *GetLookupTable()\n\nSet/get the lookup table associated with this scalar data, if\nany.\n"},
  {(char*)"GetRange", PyvtkDataArray_GetRange, METH_VARARGS,
   (char*)"V.GetRange([float, float], int)\nC++: void GetRange(double range[2], int comp)\nV.GetRange(int) -> (float, float)\nC++: double *GetRange(int comp)\nV.GetRange() -> (float, float)\nC++: double *GetRange()\nV.GetRange([float, float])\nC++: void GetRange(double range[2])\n\nThe range of the data array values for the given component will\nbe returned in the provided range array argument. If comp is -1,\nthe range of the magnitude (L2 norm) over all components will be\nprovided. The range is computed and then cached, and will not be\nre-computed on subsequent calls to GetRange() unless the array is\nmodified or the requested component changes. THIS METHOD IS NOT\nTHREAD SAFE.\n"},
  {(char*)"GetDataTypeRange", PyvtkDataArray_GetDataTypeRange, METH_VARARGS,
   (char*)"V.GetDataTypeRange([float, float])\nC++: void GetDataTypeRange(double range[2])\nV.GetDataTypeRange(int, [float, float])\nC++: static void GetDataTypeRange(int type, double range[2])\n\nThese methods return the Min and Max possible range of the native\ndata type. For example if a vtkScalars consists of unsigned char\ndata these will return (0,255).\n"},
  {(char*)"GetDataTypeMin", PyvtkDataArray_GetDataTypeMin, METH_VARARGS,
   (char*)"V.GetDataTypeMin() -> float\nC++: double GetDataTypeMin()\nV.GetDataTypeMin(int) -> float\nC++: static double GetDataTypeMin(int type)\n\nThese methods return the Min and Max possible range of the native\ndata type. For example if a vtkScalars consists of unsigned char\ndata these will return (0,255).\n"},
  {(char*)"GetDataTypeMax", PyvtkDataArray_GetDataTypeMax, METH_VARARGS,
   (char*)"V.GetDataTypeMax() -> float\nC++: double GetDataTypeMax()\nV.GetDataTypeMax(int) -> float\nC++: static double GetDataTypeMax(int type)\n\nThese methods return the Min and Max possible range of the native\ndata type. For example if a vtkScalars consists of unsigned char\ndata these will return (0,255).\n"},
  {(char*)"GetMaxNorm", PyvtkDataArray_GetMaxNorm, METH_VARARGS,
   (char*)"V.GetMaxNorm() -> float\nC++: virtual double GetMaxNorm()\n\nReturn the maximum norm for the tuples. Note that the max. is\ncomputed every time GetMaxNorm is called.\n"},
  {(char*)"CreateDataArray", PyvtkDataArray_CreateDataArray, METH_VARARGS | METH_STATIC,
   (char*)"V.CreateDataArray(int) -> vtkDataArray\nC++: static vtkDataArray *CreateDataArray(int dataType)\n\nCreates an array for dataType where dataType is one of VTK_BIT,\nVTK_CHAR, VTK_SIGNED_CHAR, VTK_UNSIGNED_CHAR, VTK_SHORT,\nVTK_UNSIGNED_SHORT, VTK_INT, VTK_UNSIGNED_INT, VTK_LONG,\nVTK_UNSIGNED_LONG, VTK_DOUBLE, VTK_DOUBLE, VTK_ID_TYPE. Note that\nthe data array returned has be deleted by the user.\n"},
  {(char*)"COMPONENT_RANGE", PyvtkDataArray_COMPONENT_RANGE, METH_VARARGS | METH_STATIC,
   (char*)"V.COMPONENT_RANGE() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *COMPONENT_RANGE()\n\nThis key is used to hold tight bounds on the range of one\ncomponent over all tuples of the array. Two values (a minimum and\nmaximum) are stored for each component. When GetRange() is called\nwhen no tuples are present in the array this value is set to {\nVTK_DOUBLE_MAX, VTK_DOUBLE_MIN }.\n"},
  {(char*)"L2_NORM_RANGE", PyvtkDataArray_L2_NORM_RANGE, METH_VARARGS | METH_STATIC,
   (char*)"V.L2_NORM_RANGE() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *L2_NORM_RANGE()\n\nThis key is used to hold tight bounds on the $L_2$ norm of tuples\nin the array. Two values (a minimum and maximum) are stored for\neach component. When GetRange() is called when no tuples are\npresent in the array this value is set to { VTK_DOUBLE_MAX,\nVTK_DOUBLE_MIN }.\n"},
  {(char*)"CopyInformation", PyvtkDataArray_CopyInformation, METH_VARARGS,
   (char*)"V.CopyInformation(vtkInformation, int) -> int\nC++: virtual int CopyInformation(vtkInformation *infoFrom,\n    int deep=1)\n\nCopy information instance. Arrays use information objects in a\nvariety of ways. It is important to have flexibility in this\nregard because certain keys should not be coppied, while others\nmust be. NOTE: Up to the implmeneter to make sure that keys not\ninteneded to be coppied are excluded here.\n"},
  {(char*)"GetArrayType", PyvtkDataArray_GetArrayType, METH_VARARGS,
   (char*)"V.GetArrayType() -> int\nC++: virtual int GetArrayType()\n\nMethod for type-checking in FastDownCast implementations.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDataArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDataArray_Methods,
    "vtkDataArray", modulename,
    NULL, NULL,
    PyvtkDataArray_Doc(),
    PyVTKClass_vtkAbstractArrayNew(modulename));
  return cls;
}

const char **PyvtkDataArray_Doc()
{
  static const char *docstring[] = {
    "vtkDataArray - abstract superclass for arrays of numeric data\n\n",
    "Superclass: vtkAbstractArray\n\n",
    "vtkDataArray is an abstract superclass for data array objects\ncontaining numeric data.  It extends the API defined in\nvtkAbstractArray.  vtkDataArray is an abstract superclass for data\narray objects. This class defines an API that all array objects must\nsupport. Note that the concrete subclasses of this class represent\ndata in native form (char, int, etc.) and often have specialized more\nefficient",
    " methods for operating on this data (for example, getting\npointers to data or getting/inserting data in native form). \nSubclasses of vtkDataArray are assumed to contain data whose\ncomponents are meaningful when cast to and from double.\n\nSee Also:\n\nvtkBitArray vtkCharArray vtkUnsignedCharArray vtkShortArray\nvtkUnsignedShortArray vtkIntArray vtkUnsignedIntArray vtkLongArray\nvtkUnsignedLongArray vtkD",
    "oubleArray vtkDoubleArray\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

