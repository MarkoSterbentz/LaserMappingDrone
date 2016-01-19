// python wrapper for vtkIdTypeArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkIdTypeArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkIdTypeArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkIdTypeArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataArrayNew
extern "C" { PyObject *PyVTKClass_vtkDataArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataArrayNew
#endif

static const char **PyvtkIdTypeArray_Doc();


static PyObject *
PyvtkIdTypeArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkIdTypeArray::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdTypeArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIdTypeArray::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdTypeArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIdTypeArray::NewInstance());

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
PyvtkIdTypeArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkIdTypeArray *tempr = vtkIdTypeArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdTypeArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkIdTypeArray::GetDataType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdTypeArray_GetTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
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
      op->GetTupleValue(temp0, temp1);
      }
    else
      {
      op->vtkIdTypeArray::GetTupleValue(temp0, temp1);
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
PyvtkIdTypeArray_SetTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  vtkIdType *temp1 = NULL;
  vtkIdType small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[size1];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetTupleValue(temp0, temp1);
      }
    else
      {
      op->vtkIdTypeArray::SetTupleValue(temp0, temp1);
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
PyvtkIdTypeArray_InsertTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  vtkIdType *temp1 = NULL;
  vtkIdType small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[size1];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->InsertTupleValue(temp0, temp1);
      }
    else
      {
      op->vtkIdTypeArray::InsertTupleValue(temp0, temp1);
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
PyvtkIdTypeArray_InsertNextTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = op->GetNumberOfComponents();
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextTupleValue(temp0) :
      op->vtkIdTypeArray::InsertNextTupleValue(temp0));

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
PyvtkIdTypeArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkIdTypeArray::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdTypeArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkIdTypeArray::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdTypeArray_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfValues(temp0);
      }
    else
      {
      op->vtkIdTypeArray::SetNumberOfValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdTypeArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->InsertValue(temp0, temp1);
      }
    else
      {
      op->vtkIdTypeArray::InsertValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdTypeArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextValue(temp0) :
      op->vtkIdTypeArray::InsertNextValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdTypeArray_GetValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetValueRange(temp0) :
      op->vtkIdTypeArray::GetValueRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkIdTypeArray_GetValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetValueRange() :
      op->vtkIdTypeArray::GetValueRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkIdTypeArray_GetValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkIdTypeArray_GetValueRange_s1(self, args);
    case 0:
      return PyvtkIdTypeArray_GetValueRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValueRange");
  return NULL;
}



static PyObject *
PyvtkIdTypeArray_WritePointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WritePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->WritePointer(temp0, temp1) :
      op->vtkIdTypeArray::WritePointer(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdTypeArray_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetPointer(temp0) :
      op->vtkIdTypeArray::GetPointer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdTypeArray_GetDataTypeValueMin(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMin");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkIdType tempr = vtkIdTypeArray::GetDataTypeValueMin();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdTypeArray_GetDataTypeValueMax(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMax");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkIdType tempr = vtkIdTypeArray::GetDataTypeValueMax();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkIdTypeArray_Methods[] = {
  {(char*)"GetClassName", PyvtkIdTypeArray_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIdTypeArray_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIdTypeArray_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkIdTypeArray\nC++: vtkIdTypeArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIdTypeArray_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIdTypeArray\nC++: vtkIdTypeArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataType", PyvtkIdTypeArray_GetDataType, METH_VARARGS,
   (char*)"V.GetDataType() -> int\nC++: int GetDataType()\n\n"},
  {(char*)"GetTupleValue", PyvtkIdTypeArray_GetTupleValue, METH_VARARGS,
   (char*)"V.GetTupleValue(int, [int, ...])\nC++: void GetTupleValue(vtkIdType i, vtkIdType *tuple)\n\n"},
  {(char*)"SetTupleValue", PyvtkIdTypeArray_SetTupleValue, METH_VARARGS,
   (char*)"V.SetTupleValue(int, (int, ...))\nC++: void SetTupleValue(vtkIdType i, const vtkIdType *tuple)\n\n"},
  {(char*)"InsertTupleValue", PyvtkIdTypeArray_InsertTupleValue, METH_VARARGS,
   (char*)"V.InsertTupleValue(int, (int, ...))\nC++: void InsertTupleValue(vtkIdType i, const vtkIdType *tuple)\n\n"},
  {(char*)"InsertNextTupleValue", PyvtkIdTypeArray_InsertNextTupleValue, METH_VARARGS,
   (char*)"V.InsertNextTupleValue((int, ...)) -> int\nC++: vtkIdType InsertNextTupleValue(const vtkIdType *tuple)\n\n"},
  {(char*)"GetValue", PyvtkIdTypeArray_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: vtkIdType GetValue(vtkIdType id)\n\n"},
  {(char*)"SetValue", PyvtkIdTypeArray_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, vtkIdType value)\n\n"},
  {(char*)"SetNumberOfValues", PyvtkIdTypeArray_SetNumberOfValues, METH_VARARGS,
   (char*)"V.SetNumberOfValues(int)\nC++: void SetNumberOfValues(vtkIdType number)\n\n"},
  {(char*)"InsertValue", PyvtkIdTypeArray_InsertValue, METH_VARARGS,
   (char*)"V.InsertValue(int, int)\nC++: void InsertValue(vtkIdType id, vtkIdType f)\n\n"},
  {(char*)"InsertNextValue", PyvtkIdTypeArray_InsertNextValue, METH_VARARGS,
   (char*)"V.InsertNextValue(int) -> int\nC++: vtkIdType InsertNextValue(vtkIdType f)\n\n"},
  {(char*)"GetValueRange", PyvtkIdTypeArray_GetValueRange, METH_VARARGS,
   (char*)"V.GetValueRange(int) -> (int, ...)\nC++: vtkIdType *GetValueRange(int comp)\nV.GetValueRange() -> (int, ...)\nC++: vtkIdType *GetValueRange()\n\n"},
  {(char*)"WritePointer", PyvtkIdTypeArray_WritePointer, METH_VARARGS,
   (char*)"V.WritePointer(int, int) -> (int, ...)\nC++: vtkIdType *WritePointer(vtkIdType id, vtkIdType number)\n\n"},
  {(char*)"GetPointer", PyvtkIdTypeArray_GetPointer, METH_VARARGS,
   (char*)"V.GetPointer(int) -> (int, ...)\nC++: vtkIdType *GetPointer(vtkIdType id)\n\n"},
  {(char*)"GetDataTypeValueMin", PyvtkIdTypeArray_GetDataTypeValueMin, METH_VARARGS | METH_STATIC,
   (char*)"V.GetDataTypeValueMin() -> int\nC++: static vtkIdType GetDataTypeValueMin()\n\nGet the minimum data value in its native type.\n"},
  {(char*)"GetDataTypeValueMax", PyvtkIdTypeArray_GetDataTypeValueMax, METH_VARARGS | METH_STATIC,
   (char*)"V.GetDataTypeValueMax() -> int\nC++: static vtkIdType GetDataTypeValueMax()\n\nGet the maximum data value in its native type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIdTypeArray_StaticNew()
{
  return vtkIdTypeArray::New();
}

PyObject *PyVTKClass_vtkIdTypeArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIdTypeArray_StaticNew,
    PyvtkIdTypeArray_Methods,
    "vtkIdTypeArray", modulename,
    NULL, NULL,
    PyvtkIdTypeArray_Doc(),
    PyVTKClass_vtkDataArrayNew(modulename));
  return cls;
}

const char **PyvtkIdTypeArray_Doc()
{
  static const char *docstring[] = {
    "vtkIdTypeArray - dynamic, self-adjusting array of vtkIdType\n\n",
    "Superclass: vtkDataArray\n\n",
    "vtkIdTypeArray is an array of values of type vtkIdType. It provides\nmethods for insertion and retrieval of values and will automatically\nresize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIdTypeArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIdTypeArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIdTypeArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

