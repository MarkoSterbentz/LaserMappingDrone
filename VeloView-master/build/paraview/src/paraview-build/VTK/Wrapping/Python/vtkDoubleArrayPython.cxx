// python wrapper for vtkDoubleArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDoubleArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDoubleArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDoubleArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataArrayNew
extern "C" { PyObject *PyVTKClass_vtkDataArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataArrayNew
#endif

static const char **PyvtkDoubleArray_Doc();


static PyObject *
PyvtkDoubleArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDoubleArray::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDoubleArray::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDoubleArray::NewInstance());

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
PyvtkDoubleArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDoubleArray *tempr = vtkDoubleArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkDoubleArray::GetDataType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_GetTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

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
      op->vtkDoubleArray::GetTupleValue(temp0, temp1);
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
PyvtkDoubleArray_SetTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

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
      op->vtkDoubleArray::SetTupleValue(temp0, temp1);
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
PyvtkDoubleArray_InsertTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

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
      op->vtkDoubleArray::InsertTupleValue(temp0, temp1);
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
PyvtkDoubleArray_InsertNextTupleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTupleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

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

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextTupleValue(temp0) :
      op->vtkDoubleArray::InsertNextTupleValue(temp0));

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
PyvtkDoubleArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkDoubleArray::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  vtkIdType temp0;
  double temp1;
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
      op->vtkDoubleArray::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

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
      op->vtkDoubleArray::SetNumberOfValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  vtkIdType temp0;
  double temp1;
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
      op->vtkDoubleArray::InsertValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextValue(temp0) :
      op->vtkDoubleArray::InsertNextValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_GetValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  int temp0;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetValueRange(temp0) :
      op->vtkDoubleArray::GetValueRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkDoubleArray_GetValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetValueRange() :
      op->vtkDoubleArray::GetValueRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkDoubleArray_GetValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkDoubleArray_GetValueRange_s1(self, args);
    case 0:
      return PyvtkDoubleArray_GetValueRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValueRange");
  return NULL;
}



static PyObject *
PyvtkDoubleArray_WritePointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WritePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double *tempr = (ap.IsBound() ?
      op->WritePointer(temp0, temp1) :
      op->vtkDoubleArray::WritePointer(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDoubleArray *op = static_cast<vtkDoubleArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPointer(temp0) :
      op->vtkDoubleArray::GetPointer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_GetDataTypeValueMin(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMin");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = vtkDoubleArray::GetDataTypeValueMin();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDoubleArray_GetDataTypeValueMax(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMax");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = vtkDoubleArray::GetDataTypeValueMax();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDoubleArray_Methods[] = {
  {(char*)"GetClassName", PyvtkDoubleArray_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDoubleArray_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDoubleArray_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDoubleArray\nC++: vtkDoubleArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDoubleArray_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDoubleArray\nC++: vtkDoubleArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataType", PyvtkDoubleArray_GetDataType, METH_VARARGS,
   (char*)"V.GetDataType() -> int\nC++: int GetDataType()\n\n"},
  {(char*)"GetTupleValue", PyvtkDoubleArray_GetTupleValue, METH_VARARGS,
   (char*)"V.GetTupleValue(int, [float, ...])\nC++: void GetTupleValue(vtkIdType i, double *tuple)\n\n"},
  {(char*)"SetTupleValue", PyvtkDoubleArray_SetTupleValue, METH_VARARGS,
   (char*)"V.SetTupleValue(int, (float, ...))\nC++: void SetTupleValue(vtkIdType i, const double *tuple)\n\n"},
  {(char*)"InsertTupleValue", PyvtkDoubleArray_InsertTupleValue, METH_VARARGS,
   (char*)"V.InsertTupleValue(int, (float, ...))\nC++: void InsertTupleValue(vtkIdType i, const double *tuple)\n\n"},
  {(char*)"InsertNextTupleValue", PyvtkDoubleArray_InsertNextTupleValue, METH_VARARGS,
   (char*)"V.InsertNextTupleValue((float, ...)) -> int\nC++: vtkIdType InsertNextTupleValue(const double *tuple)\n\n"},
  {(char*)"GetValue", PyvtkDoubleArray_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> float\nC++: double GetValue(vtkIdType id)\n\n"},
  {(char*)"SetValue", PyvtkDoubleArray_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(vtkIdType id, double value)\n\n"},
  {(char*)"SetNumberOfValues", PyvtkDoubleArray_SetNumberOfValues, METH_VARARGS,
   (char*)"V.SetNumberOfValues(int)\nC++: void SetNumberOfValues(vtkIdType number)\n\n"},
  {(char*)"InsertValue", PyvtkDoubleArray_InsertValue, METH_VARARGS,
   (char*)"V.InsertValue(int, float)\nC++: void InsertValue(vtkIdType id, double f)\n\n"},
  {(char*)"InsertNextValue", PyvtkDoubleArray_InsertNextValue, METH_VARARGS,
   (char*)"V.InsertNextValue(float) -> int\nC++: vtkIdType InsertNextValue(double f)\n\n"},
  {(char*)"GetValueRange", PyvtkDoubleArray_GetValueRange, METH_VARARGS,
   (char*)"V.GetValueRange(int) -> (float, float)\nC++: double *GetValueRange(int comp)\nV.GetValueRange() -> (float, float)\nC++: double *GetValueRange()\n\n"},
  {(char*)"WritePointer", PyvtkDoubleArray_WritePointer, METH_VARARGS,
   (char*)"V.WritePointer(int, int) -> (float, ...)\nC++: double *WritePointer(vtkIdType id, vtkIdType number)\n\n"},
  {(char*)"GetPointer", PyvtkDoubleArray_GetPointer, METH_VARARGS,
   (char*)"V.GetPointer(int) -> (float, ...)\nC++: double *GetPointer(vtkIdType id)\n\n"},
  {(char*)"GetDataTypeValueMin", PyvtkDoubleArray_GetDataTypeValueMin, METH_VARARGS | METH_STATIC,
   (char*)"V.GetDataTypeValueMin() -> float\nC++: static double GetDataTypeValueMin()\n\nGet the minimum data value in its native type.\n"},
  {(char*)"GetDataTypeValueMax", PyvtkDoubleArray_GetDataTypeValueMax, METH_VARARGS | METH_STATIC,
   (char*)"V.GetDataTypeValueMax() -> float\nC++: static double GetDataTypeValueMax()\n\nGet the maximum data value in its native type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDoubleArray_StaticNew()
{
  return vtkDoubleArray::New();
}

PyObject *PyVTKClass_vtkDoubleArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDoubleArray_StaticNew,
    PyvtkDoubleArray_Methods,
    "vtkDoubleArray", modulename,
    NULL, NULL,
    PyvtkDoubleArray_Doc(),
    PyVTKClass_vtkDataArrayNew(modulename));
  return cls;
}

const char **PyvtkDoubleArray_Doc()
{
  static const char *docstring[] = {
    "vtkDoubleArray - dynamic, self-adjusting array of double\n\n",
    "Superclass: vtkDataArray\n\n",
    "vtkDoubleArray is an array of values of type double.  It provides\nmethods for insertion and retrieval of values and will automatically\nresize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDoubleArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDoubleArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDoubleArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

