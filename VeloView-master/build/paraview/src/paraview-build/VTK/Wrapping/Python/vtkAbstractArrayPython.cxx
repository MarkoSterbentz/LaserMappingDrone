// python wrapper for vtkAbstractArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVariant.h"
#include "vtkAbstractArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAbstractArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAbstractArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAbstractArray_Doc();


static PyObject *
PyvtkAbstractArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAbstractArray::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractArray::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractArray::NewInstance());

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
PyvtkAbstractArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAbstractArray *tempr = vtkAbstractArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1 = 1000;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    int tempr = op->Allocate(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Initialize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetDataType();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetDataTypeSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetDataTypeSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractArray_GetDataTypeSize_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeSize");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkAbstractArray::GetDataTypeSize(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractArray_GetDataTypeSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkAbstractArray_GetDataTypeSize_s1(self, args);
    case 1:
      return PyvtkAbstractArray_GetDataTypeSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDataTypeSize");
  return NULL;
}



static PyObject *
PyvtkAbstractArray_GetElementComponentSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementComponentSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetElementComponentSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfComponents(temp0);
      }
    else
      {
      op->vtkAbstractArray::SetNumberOfComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetNumberOfComponentsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsMinValue() :
      op->vtkAbstractArray::GetNumberOfComponentsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetNumberOfComponentsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsMaxValue() :
      op->vtkAbstractArray::GetNumberOfComponentsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkAbstractArray::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_SetComponentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetComponentName(temp0, temp1);
      }
    else
      {
      op->vtkAbstractArray::SetComponentName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetComponentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetComponentName(temp0) :
      op->vtkAbstractArray::GetComponentName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_HasAComponentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAComponentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasAComponentName() :
      op->vtkAbstractArray::HasAComponentName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_CopyComponentNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyComponentNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    int tempr = (ap.IsBound() ?
      op->CopyComponentNames(temp0) :
      op->vtkAbstractArray::CopyComponentNames(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetNumberOfTuples(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkAbstractArray::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_SetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

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
PyvtkAbstractArray_InsertTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

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
PyvtkAbstractArray_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdList *temp0 = NULL;
  vtkIdList *temp1 = NULL;
  vtkAbstractArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
    {
    op->InsertTuples(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractArray_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
    {
    op->InsertTuples(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractArray_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAbstractArray_InsertTuples_s1(self, args);
    case 4:
      return PyvtkAbstractArray_InsertTuples_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return NULL;
}



static PyObject *
PyvtkAbstractArray_InsertNextTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

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
PyvtkAbstractArray_GetTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

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
      op->vtkAbstractArray::GetTuples(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractArray_GetTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

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
      op->vtkAbstractArray::GetTuples(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractArray_GetTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAbstractArray_GetTuples_s1(self, args);
    case 3:
      return PyvtkAbstractArray_GetTuples_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTuples");
  return NULL;
}



static PyObject *
PyvtkAbstractArray_HasStandardMemoryLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasStandardMemoryLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasStandardMemoryLayout() :
      op->vtkAbstractArray::HasStandardMemoryLayout());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    void  *tempr = op->GetVoidPointer(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

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
      op->vtkAbstractArray::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_InterpolateTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray") &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    op->InterpolateTuple(temp0, temp1, temp2, temp3);

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
PyvtkAbstractArray_InterpolateTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkAbstractArray *temp2 = NULL;
  vtkIdType temp3;
  vtkAbstractArray *temp4 = NULL;
  double temp5;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray") &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkAbstractArray") &&
      ap.GetValue(temp5))
    {
    op->InterpolateTuple(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractArray_InterpolateTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkAbstractArray_InterpolateTuple_s1(self, args);
    case 6:
      return PyvtkAbstractArray_InterpolateTuple_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InterpolateTuple");
  return NULL;
}



static PyObject *
PyvtkAbstractArray_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Squeeze();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = op->Resize(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkAbstractArray::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkAbstractArray::GetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetMaxId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxId() :
      op->vtkAbstractArray::GetMaxId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_SetVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->SetVoidArray(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_ExportToVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportToVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ExportToVoidPointer(temp0);
      }
    else
      {
      op->vtkAbstractArray::ExportToVoidPointer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    unsigned long tempr = op->GetActualMemorySize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetName(temp0);
      }
    else
      {
      op->vtkAbstractArray::SetName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkAbstractArray::GetName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetDataTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDataTypeAsString() :
      op->vtkAbstractArray::GetDataTypeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_CreateArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateArray");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAbstractArray *tempr = vtkAbstractArray::CreateArray(temp0);

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
PyvtkAbstractArray_IsNumeric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNumeric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->IsNumeric();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkArrayIterator *tempr = op->NewIterator();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetDataSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetDataSize() :
      op->vtkAbstractArray::GetDataSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_LookupValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    vtkIdType tempr = op->LookupValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkAbstractArray_LookupValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    op->LookupValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkAbstractArray_LookupValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAbstractArray_LookupValue_s1(self, args);
    case 2:
      return PyvtkAbstractArray_LookupValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "LookupValue");
  return NULL;
}



static PyObject *
PyvtkAbstractArray_GetVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkAbstractArray::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_InsertVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->InsertVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkAbstractArray::InsertVariantValue(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkAbstractArray_SetVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    op->SetVariantValue(temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkAbstractArray_DataChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->DataChanged();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_ClearLookup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLookup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->ClearLookup();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetProminentComponentValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProminentComponentValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  int temp0;
  vtkVariantArray *temp1 = NULL;
  double temp2 = 1.e-6;
  double temp3 = 1.e-3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkVariantArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    if (ap.IsBound())
      {
      op->GetProminentComponentValues(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkAbstractArray::GetProminentComponentValues(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInformation() :
      op->vtkAbstractArray::GetInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_HasInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasInformation() :
      op->vtkAbstractArray::HasInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_CopyInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1 = 1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    int tempr = (ap.IsBound() ?
      op->CopyInformation(temp0, temp1) :
      op->vtkAbstractArray::CopyInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GUI_HIDE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GUI_HIDE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkAbstractArray::GUI_HIDE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_PER_COMPONENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PER_COMPONENT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationInformationVectorKey *tempr = vtkAbstractArray::PER_COMPONENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_DISCRETE_VALUES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DISCRETE_VALUES");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationVariantVectorKey *tempr = vtkAbstractArray::DISCRETE_VALUES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_DISCRETE_VALUE_SAMPLE_PARAMETERS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DISCRETE_VALUE_SAMPLE_PARAMETERS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleVectorKey *tempr = vtkAbstractArray::DISCRETE_VALUE_SAMPLE_PARAMETERS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetMaxDiscreteValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDiscreteValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaxDiscreteValues() :
      op->vtkAbstractArray::GetMaxDiscreteValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_SetMaxDiscreteValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxDiscreteValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxDiscreteValues(temp0);
      }
    else
      {
      op->vtkAbstractArray::SetMaxDiscreteValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkAbstractArray::GetArrayType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractArray_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractArray_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractArray_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractArray_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAbstractArray\nC++: vtkAbstractArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAbstractArray_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAbstractArray\nC++: vtkAbstractArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Allocate", PyvtkAbstractArray_Allocate, METH_VARARGS,
   (char*)"V.Allocate(int, int) -> int\nC++: virtual int Allocate(vtkIdType sz, vtkIdType ext=1000)\n\nAllocate memory for this array. Delete old storage only if\nnecessary. Note that ext is no longer used.\n"},
  {(char*)"Initialize", PyvtkAbstractArray_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nRelease storage and reset array to initial state.\n"},
  {(char*)"GetDataType", PyvtkAbstractArray_GetDataType, METH_VARARGS,
   (char*)"V.GetDataType() -> int\nC++: virtual int GetDataType()\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkSetGet.h.\n"},
  {(char*)"GetDataTypeSize", PyvtkAbstractArray_GetDataTypeSize, METH_VARARGS,
   (char*)"V.GetDataTypeSize() -> int\nC++: virtual int GetDataTypeSize()\nV.GetDataTypeSize(int) -> int\nC++: static int GetDataTypeSize(int type)\n\nReturn the size of the underlying data type.  For a bit, 0 is\nreturned.  For string 0 is returned. Arrays with variable length\ncomponents return 0.\n"},
  {(char*)"GetElementComponentSize", PyvtkAbstractArray_GetElementComponentSize, METH_VARARGS,
   (char*)"V.GetElementComponentSize() -> int\nC++: virtual int GetElementComponentSize()\n\nReturn the size, in bytes, of the lowest-level element of an\narray.  For vtkDataArray and subclasses this is the size of the\ndata type.  For vtkStringArray, this is\nsizeof(vtkStdString::value_type), which winds up being\nsizeof(char).\n"},
  {(char*)"SetNumberOfComponents", PyvtkAbstractArray_SetNumberOfComponents, METH_VARARGS,
   (char*)"V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int)\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {(char*)"GetNumberOfComponentsMinValue", PyvtkAbstractArray_GetNumberOfComponentsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfComponentsMinValue() -> int\nC++: int GetNumberOfComponentsMinValue()\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {(char*)"GetNumberOfComponentsMaxValue", PyvtkAbstractArray_GetNumberOfComponentsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfComponentsMaxValue() -> int\nC++: int GetNumberOfComponentsMaxValue()\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {(char*)"GetNumberOfComponents", PyvtkAbstractArray_GetNumberOfComponents, METH_VARARGS,
   (char*)"V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {(char*)"SetComponentName", PyvtkAbstractArray_SetComponentName, METH_VARARGS,
   (char*)"V.SetComponentName(int, string)\nC++: void SetComponentName(vtkIdType component, const char *name)\n\nSet the name for a component. Must be >= 1.\n"},
  {(char*)"GetComponentName", PyvtkAbstractArray_GetComponentName, METH_VARARGS,
   (char*)"V.GetComponentName(int) -> string\nC++: const char *GetComponentName(vtkIdType component)\n\n"},
  {(char*)"HasAComponentName", PyvtkAbstractArray_HasAComponentName, METH_VARARGS,
   (char*)"V.HasAComponentName() -> bool\nC++: bool HasAComponentName()\n\nReturns if any component has had a name assigned\n"},
  {(char*)"CopyComponentNames", PyvtkAbstractArray_CopyComponentNames, METH_VARARGS,
   (char*)"V.CopyComponentNames(vtkAbstractArray) -> int\nC++: int CopyComponentNames(vtkAbstractArray *da)\n\nCopies the component names from the inputed array to the current\narray make sure that the current array has the same number of\ncomponents as the input array\n"},
  {(char*)"SetNumberOfTuples", PyvtkAbstractArray_SetNumberOfTuples, METH_VARARGS,
   (char*)"V.SetNumberOfTuples(int)\nC++: virtual void SetNumberOfTuples(vtkIdType number)\n\nSet the number of tuples (a component group) in the array. Note\nthat this may allocate space depending on the number of\ncomponents. Also note that if allocation is performed no copy is\nperformed so existing data will be lost (if data conservation is\nsought, one may use the Resize method instead).\n"},
  {(char*)"GetNumberOfTuples", PyvtkAbstractArray_GetNumberOfTuples, METH_VARARGS,
   (char*)"V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nGet the number of tuples (a component group) in the array.\n"},
  {(char*)"SetTuple", PyvtkAbstractArray_SetTuple, METH_VARARGS,
   (char*)"V.SetTuple(int, int, vtkAbstractArray)\nC++: virtual void SetTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source)\n\nSet the tuple at the ith location using the jth tuple in the\nsource array. This method assumes that the two arrays have the\nsame type and structure. Note that range checking and memory\nallocation is not performed; use in conjunction with\nSetNumberOfTuples() to allocate space.\n"},
  {(char*)"InsertTuple", PyvtkAbstractArray_InsertTuple, METH_VARARGS,
   (char*)"V.InsertTuple(int, int, vtkAbstractArray)\nC++: virtual void InsertTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source)\n\nInsert the jth tuple in the source array, at ith location in this\narray. Note that memory allocation is performed as necessary to\nhold the data.\n"},
  {(char*)"InsertTuples", PyvtkAbstractArray_InsertTuples, METH_VARARGS,
   (char*)"V.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: virtual void InsertTuples(vtkIdList *dstIds,\n    vtkIdList *srcIds, vtkAbstractArray *source)\nV.InsertTuples(int, int, int, vtkAbstractArray)\nC++: virtual void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source)\n\nCopy the tuples indexed in srcIds from the source array to the\ntuple locations indexed by dstIds in this array. Note that memory\nallocation is performed as necessary to hold the data.\n"},
  {(char*)"InsertNextTuple", PyvtkAbstractArray_InsertNextTuple, METH_VARARGS,
   (char*)"V.InsertNextTuple(int, vtkAbstractArray) -> int\nC++: virtual vtkIdType InsertNextTuple(vtkIdType j,\n    vtkAbstractArray *source)\n\nInsert the jth tuple in the source array, at the end in this\narray. Note that memory allocation is performed as necessary to\nhold the data. Returns the location at which the data was\ninserted.\n"},
  {(char*)"GetTuples", PyvtkAbstractArray_GetTuples, METH_VARARGS,
   (char*)"V.GetTuples(vtkIdList, vtkAbstractArray)\nC++: virtual void GetTuples(vtkIdList *ptIds,\n    vtkAbstractArray *output)\nV.GetTuples(int, int, vtkAbstractArray)\nC++: virtual void GetTuples(vtkIdType p1, vtkIdType p2,\n    vtkAbstractArray *output)\n\nGiven a list of point ids, return an array of tuples. You must\ninsure that the output array has been previously allocated with\nenough space to hold the data.\n"},
  {(char*)"HasStandardMemoryLayout", PyvtkAbstractArray_HasStandardMemoryLayout, METH_VARARGS,
   (char*)"V.HasStandardMemoryLayout() -> bool\nC++: virtual bool HasStandardMemoryLayout()\n\nReturns true if this array uses the standard memory layout\ndefined in the VTK user guide, e.g. a contiguous array: {t1c1,\nt1c2, t1c3, ... t1cM, t2c1, ... tNcM} where t1c2 is the second\ncomponent of the first tuple.\n\nIf the array does not have the standard memory layout\nGetVoidPointer should not be used, as a deep copy of the data\nmust be made. Instead, use a vtkTypedDataArrayIterator to get\npointer-like semantics that can safely access the data values.\n\nSubclasses that return false here must derive from\nvtkMappedDataArray to ensure that they will work safely with the\nrest of the pipeline.\n"},
  {(char*)"GetVoidPointer", PyvtkAbstractArray_GetVoidPointer, METH_VARARGS,
   (char*)"V.GetVoidPointer(int) ->\nC++: virtual void *GetVoidPointer(vtkIdType id)\n\nReturn a void pointer. For image pipeline interface and other\nspecial pointer manipulation. If the data is simply being\niterated over, consider using vtkDataArrayIteratorMacro for\nsafety and efficiency, rather than using this member directly.\n"},
  {(char*)"DeepCopy", PyvtkAbstractArray_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkAbstractArray)\nC++: virtual void DeepCopy(vtkAbstractArray *da)\n\nDeep copy of data. Implementation left to subclasses, which\nshould support as many type conversions as possible given the\ndata type.\n\nSubclasses should call vtkAbstractArray::DeepCopy() so that the\ninformation object (if one exists) is copied from da.\n"},
  {(char*)"InterpolateTuple", PyvtkAbstractArray_InterpolateTuple, METH_VARARGS,
   (char*)"V.InterpolateTuple(int, vtkIdList, vtkAbstractArray, [float, ...])\nC++: virtual void InterpolateTuple(vtkIdType i,\n    vtkIdList *ptIndices, vtkAbstractArray *source,\n    double *weights)\nV.InterpolateTuple(int, int, vtkAbstractArray, int,\n    vtkAbstractArray, float)\nC++: virtual void InterpolateTuple(vtkIdType i, vtkIdType id1,\n    vtkAbstractArray *source1, vtkIdType id2,\n    vtkAbstractArray *source2, double t)\n\nSet the ith tuple in this array as the interpolated tuple value,\ngiven the ptIndices in the source array and associated\ninterpolation weights. This method assumes that the two arrays\nare of the same type and strcuture.\n"},
  {(char*)"Squeeze", PyvtkAbstractArray_Squeeze, METH_VARARGS,
   (char*)"V.Squeeze()\nC++: virtual void Squeeze()\n\nResize object to just fit data requirement. Reclaims extra\nmemory.\n"},
  {(char*)"Resize", PyvtkAbstractArray_Resize, METH_VARARGS,
   (char*)"V.Resize(int) -> int\nC++: virtual int Resize(vtkIdType numTuples)\n\nResize the array while conserving the data.  Returns 1 if\nresizing succeeded and 0 otherwise.\n"},
  {(char*)"Reset", PyvtkAbstractArray_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\nReset to an empty state, without freeing any memory.\n"},
  {(char*)"GetSize", PyvtkAbstractArray_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: vtkIdType GetSize()\n\nReturn the size of the data.\n"},
  {(char*)"GetMaxId", PyvtkAbstractArray_GetMaxId, METH_VARARGS,
   (char*)"V.GetMaxId() -> int\nC++: vtkIdType GetMaxId()\n\nWhat is the maximum id currently in the array.\n"},
  {(char*)"SetVoidArray", PyvtkAbstractArray_SetVoidArray, METH_VARARGS,
   (char*)"V.SetVoidArray(, int, int)\nC++: virtual void SetVoidArray(void *array, vtkIdType size,\n    int save)\n\nThis method lets the user specify data to be held by the array. \nThe array argument is a pointer to the data.  size is the size of\nthe array supplied by the user.  Set save to 1 to keep the class\nfrom deleting the array when it cleans up or reallocates memory.\nThe class uses the actual array provided; it does not copy the\ndata from the supplied array.\n"},
  {(char*)"ExportToVoidPointer", PyvtkAbstractArray_ExportToVoidPointer, METH_VARARGS,
   (char*)"V.ExportToVoidPointer()\nC++: virtual void ExportToVoidPointer(void *out_ptr)\n\nThis method copies the array data to the void pointer specified\nby the user.  It is up to the user to allocate enough memory for\nthe void pointer.\n"},
  {(char*)"GetActualMemorySize", PyvtkAbstractArray_GetActualMemorySize, METH_VARARGS,
   (char*)"V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the memory in kilobytes consumed by this data array. Used\nto support streaming and reading/writing data. The value returned\nis guaranteed to be greater than or equal to the memory required\nto actually represent the data represented by this object. The\ninformation returned is valid only after the pipeline has been\nupdated.\n"},
  {(char*)"SetName", PyvtkAbstractArray_SetName, METH_VARARGS,
   (char*)"V.SetName(string)\nC++: void SetName(char *)\n\nSet/get array's name\n"},
  {(char*)"GetName", PyvtkAbstractArray_GetName, METH_VARARGS,
   (char*)"V.GetName() -> string\nC++: char *GetName()\n\nSet/get array's name\n"},
  {(char*)"GetDataTypeAsString", PyvtkAbstractArray_GetDataTypeAsString, METH_VARARGS,
   (char*)"V.GetDataTypeAsString() -> string\nC++: virtual const char *GetDataTypeAsString(void)\n\nGet the name of a data type as a string.\n"},
  {(char*)"CreateArray", PyvtkAbstractArray_CreateArray, METH_VARARGS | METH_STATIC,
   (char*)"V.CreateArray(int) -> vtkAbstractArray\nC++: static vtkAbstractArray *CreateArray(int dataType)\n\nCreates an array for dataType where dataType is one of VTK_BIT,\nVTK_CHAR, VTK_UNSIGNED_CHAR, VTK_SHORT, VTK_UNSIGNED_SHORT,\nVTK_INT, VTK_UNSIGNED_INT, VTK_LONG, VTK_UNSIGNED_LONG,\nVTK_DOUBLE, VTK_DOUBLE, VTK_ID_TYPE, VTK_STRING. Note that the\ndata array returned has to be deleted by the user.\n"},
  {(char*)"IsNumeric", PyvtkAbstractArray_IsNumeric, METH_VARARGS,
   (char*)"V.IsNumeric() -> int\nC++: virtual int IsNumeric()\n\nThis method is here to make backward compatibility easier.  It\nmust return true if and only if an array contains numeric data.\n"},
  {(char*)"NewIterator", PyvtkAbstractArray_NewIterator, METH_VARARGS,
   (char*)"V.NewIterator() -> vtkArrayIterator\nC++: virtual vtkArrayIterator *NewIterator()\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {(char*)"GetDataSize", PyvtkAbstractArray_GetDataSize, METH_VARARGS,
   (char*)"V.GetDataSize() -> int\nC++: virtual vtkIdType GetDataSize()\n\nReturns the size of the data in DataTypeSize units. Thus, the\nnumber of bytes for the data can be computed by GetDataSize() *\nGetDataTypeSize(). Non-contiguous or variable- size arrays need\nto override this method.\n"},
  {(char*)"LookupValue", PyvtkAbstractArray_LookupValue, METH_VARARGS,
   (char*)"V.LookupValue(vtkVariant) -> int\nC++: virtual vtkIdType LookupValue(vtkVariant value)\nV.LookupValue(vtkVariant, vtkIdList)\nC++: virtual void LookupValue(vtkVariant value, vtkIdList *ids)\n\nReturn the indices where a specific value appears.\n"},
  {(char*)"GetVariantValue", PyvtkAbstractArray_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(vtkIdType idx)\n\nRetrieve value from the array as a variant.\n"},
  {(char*)"InsertVariantValue", PyvtkAbstractArray_InsertVariantValue, METH_VARARGS,
   (char*)"V.InsertVariantValue(int, vtkVariant)\nC++: virtual void InsertVariantValue(vtkIdType idx,\n    vtkVariant value)\n\nInsert a value into the array from a variant.  This method does\nbounds checking.\n"},
  {(char*)"SetVariantValue", PyvtkAbstractArray_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: virtual void SetVariantValue(vtkIdType idx, vtkVariant value)\n\nSet a value in the array from a variant.  This method does NOT do\nbounds checking.\n"},
  {(char*)"DataChanged", PyvtkAbstractArray_DataChanged, METH_VARARGS,
   (char*)"V.DataChanged()\nC++: virtual void DataChanged()\n\nTell the array explicitly that the data has changed. This is only\nnecessary to call when you modify the array contents without\nusing the array's API (i.e. you retrieve a pointer to the data\nand modify the array contents).  You need to call this so that\nthe fast lookup will know to rebuild itself.  Otherwise, the\nlookup functions will give incorrect results.\n"},
  {(char*)"ClearLookup", PyvtkAbstractArray_ClearLookup, METH_VARARGS,
   (char*)"V.ClearLookup()\nC++: virtual void ClearLookup()\n\nDelete the associated fast lookup data structure on this array,\nif it exists.  The lookup will be rebuilt on the next call to a\nlookup function.\n"},
  {(char*)"GetProminentComponentValues", PyvtkAbstractArray_GetProminentComponentValues, METH_VARARGS,
   (char*)"V.GetProminentComponentValues(int, vtkVariantArray, float, float)\nC++: virtual void GetProminentComponentValues(int comp,\n    vtkVariantArray *values, double uncertainty=1.e-6,\n    double minimumProminence=1.e-3)\n\nPopulate the given vtkVariantArray with a set of distinct values\ntaken on by the requested component (or, when passed -1, by the\ntuples as a whole). If the set of prominent values has more than\n32 entries, then the array is assumed to be continuous in nature\nand no values are returned.\n\nThis method takes 2 parameters: uncertainty and\nminimumProminence. Note that this set of returned values may not\nbe complete ifuncertainty and minimumProminence are both larger\nthan 0.0; in order to perform interactively, a subsample of the\narray is used to determine the set of values.\n\nThe first parameter ( uncertainty, U) is the maximum acceptable\nprobability that a prominent value will not be detected. Setting\nthis to 0 will cause every value in the array to be examined.\n\nThe second parameter ( minimumProminence, P) specifies the\nsmallest relative frequency (in [0,1]) with which a value in the\narray may occur and still be considered prominent. Setting this\nto 0 will force every value in the array to be traversed. Using\nnumbers close to 0 for this parameter quickly causes the number\nof samples required to obtain the given uncertainty to subsume\nthe entire array, as rare occurrences require frequent sampling\nto detect.\n\nFor an array with T tuples and given uncertainty U and mininumum\nprominence P, we sample N values, with N = f(T; P, U). We want f\nto be sublinear in T in order to interactively handle large\narrays; in practice, we can make f independent of T:$ N >=\n\\frac{5}{P}\\mathrm{ln}\\left(\\frac{1}{PU}) $, but note that small\nvalues of P are costly to achieve. The default parameters will\nlocate prominent values that occur at least 1 out of every 1000\nsamples with a confidence of 0.999999 (= 1 - 1e6). Thanks to\nSeshadri Comandur (Sandia National Laborat ...\n [Truncated]\n"},
  {(char*)"GetInformation", PyvtkAbstractArray_GetInformation, METH_VARARGS,
   (char*)"V.GetInformation() -> vtkInformation\nC++: vtkInformation *GetInformation()\n\nGet an information object that can be used to annotate the array.\nThis will always return an instance of vtkInformation, if one is\nnot currently associated with the array it will be created.\n"},
  {(char*)"HasInformation", PyvtkAbstractArray_HasInformation, METH_VARARGS,
   (char*)"V.HasInformation() -> bool\nC++: bool HasInformation()\n\nInquire if this array has an instance of vtkInformation already\nassociated with it.\n"},
  {(char*)"CopyInformation", PyvtkAbstractArray_CopyInformation, METH_VARARGS,
   (char*)"V.CopyInformation(vtkInformation, int) -> int\nC++: virtual int CopyInformation(vtkInformation *infoFrom,\n    int deep=1)\n\nCopy information instance. Arrays use information objects in a\nvariety of ways. It is important to have flexibility in this\nregard because certain keys should not be coppied, while others\nmust be.\n\nNOTE: Subclasses must always call their superclass's\nCopyInformation method, so that all classes in the hierarchy get\na chance to remove keys they do not wish to be coppied. The\nsubclass will not need to explicilty copy the keys as it's\nhandled here.\n"},
  {(char*)"GUI_HIDE", PyvtkAbstractArray_GUI_HIDE, METH_VARARGS | METH_STATIC,
   (char*)"V.GUI_HIDE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *GUI_HIDE()\n\nThis key is a hint to end user interface that this array is\ninternal and should not be shown to the end user.\n"},
  {(char*)"PER_COMPONENT", PyvtkAbstractArray_PER_COMPONENT, METH_VARARGS | METH_STATIC,
   (char*)"V.PER_COMPONENT() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *PER_COMPONENT()\n\nThis key is used to hold a vector of COMPONENT_VALUES (and, for\nvtkDataArray subclasses, COMPONENT_RANGE) keys -- one for each\ncomponent of the array.  You may add additional per-component\nkey-value pairs to information objects in this vector. However if\nyou do so, you must be sure to either (1) set COMPONENT_VALUES to\nan invalid variant and set COMPONENT_RANGE to {VTK_DOUBLE_MAX,\nVTK_DOUBLE_MIN} or (2) call ComputeUniqueValues(component) and\nComputeRange(component) beforemodifying the information object.\nOtherwise it is possible for modifications to the array to take\nplace without the bounds on the component being updated since the\nmodification time of the vtkInformation object is used to\ndetermine when the COMPONENT_RANGE values are out of date.\n"},
  {(char*)"DISCRETE_VALUES", PyvtkAbstractArray_DISCRETE_VALUES, METH_VARARGS | METH_STATIC,
   (char*)"V.DISCRETE_VALUES() -> vtkInformationVariantVectorKey\nC++: static vtkInformationVariantVectorKey *DISCRETE_VALUES()\n\nA key used to hold discrete values taken on either by the tuples\nof the array (when present in this->GetInformation()) or\nindividual components (when present in one entry of the\nPER_COMPONENT() information vector).\n"},
  {(char*)"DISCRETE_VALUE_SAMPLE_PARAMETERS", PyvtkAbstractArray_DISCRETE_VALUE_SAMPLE_PARAMETERS, METH_VARARGS | METH_STATIC,
   (char*)"V.DISCRETE_VALUE_SAMPLE_PARAMETERS()\n    -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *DISCRETE_VALUE_SAMPLE_PARAMETERS(\n    )\n\nA key used to hold conditions under which cached discrete values\nwere generated; the value is a 2-vector of doubles. The first\nentry corresponds to the maximum uncertainty that prominent\nvalues exist but have not been detected. The second entry\ncorresponds to the smallest relative frequency a value is allowed\nto have and still appear on the list.\n"},
  {(char*)"GetMaxDiscreteValues", PyvtkAbstractArray_GetMaxDiscreteValues, METH_VARARGS,
   (char*)"V.GetMaxDiscreteValues() -> int\nC++: unsigned int GetMaxDiscreteValues()\n\nGet/Set the maximum number of prominent values this array may\ncontain before it is considered continuous.  Default value is 32.\n"},
  {(char*)"SetMaxDiscreteValues", PyvtkAbstractArray_SetMaxDiscreteValues, METH_VARARGS,
   (char*)"V.SetMaxDiscreteValues(int)\nC++: void SetMaxDiscreteValues(unsigned int a)\n\nGet/Set the maximum number of prominent values this array may\ncontain before it is considered continuous.  Default value is 32.\n"},
  {(char*)"GetArrayType", PyvtkAbstractArray_GetArrayType, METH_VARARGS,
   (char*)"V.GetArrayType() -> int\nC++: virtual int GetArrayType()\n\nMethod for type-checking in FastDownCast implementations.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractArray_Methods,
    "vtkAbstractArray", modulename,
    NULL, NULL,
    PyvtkAbstractArray_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 6; c++)
      {
      static const struct { const char *name; int value; }
        constants[6] = {
          { "MAX_DISCRETE_VALUES", vtkAbstractArray::MAX_DISCRETE_VALUES },
          { "AbstractArray", vtkAbstractArray::AbstractArray },
          { "DataArray", vtkAbstractArray::DataArray },
          { "TypedDataArray", vtkAbstractArray::TypedDataArray },
          { "DataArrayTemplate", vtkAbstractArray::DataArrayTemplate },
          { "MappedDataArray", vtkAbstractArray::MappedDataArray },
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

const char **PyvtkAbstractArray_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractArray - Abstract superclass for all arrays\n\n",
    "Superclass: vtkObject\n\n",
    "vtkAbstractArray is an abstract superclass for data array objects.\nThis class defines an API that all subclasses must support.  The data\ntype must be assignable and copy-constructible, but no other\nassumptions about its type are made.  Most of the subclasses of this\narray deal with numeric data either as scalars or tuples of scalars. \nA program can use the IsNumeric() method to check whether an in",
    "stance\nof vtkAbstractArray contains numbers.  It is also possible to test\nfor this by attempting to SafeDownCast an array to an instance of\nvtkDataArray, although this assumes that all numeric arrays will\nalways be descended from vtkDataArray.\n\nEvery array has a character-string name. The naming of the array\noccurs automatically when it is instantiated, but you are free to\nchange this name using t",
    "he SetName() method.  (The array name is used\nfor data manipulation.)\n\nSee Also:\n\nvtkDataArray vtkStringArray vtkCellArray\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

