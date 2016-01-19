// python wrapper for vtkBitArrayIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBitArrayIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBitArrayIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBitArrayIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayIteratorNew
extern "C" { PyObject *PyVTKClass_vtkArrayIteratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayIteratorNew
#endif

static const char **PyvtkBitArrayIterator_Doc();


static PyObject *
PyvtkBitArrayIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBitArrayIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBitArrayIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBitArrayIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBitArrayIterator::NewInstance());

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
PyvtkBitArrayIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBitArrayIterator *tempr = vtkBitArrayIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkBitArrayIterator::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkBitArrayIterator::GetArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_GetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTuple(temp0) :
      op->vtkBitArrayIterator::GetTuple(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkBitArrayIterator::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkBitArrayIterator::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkBitArrayIterator::GetNumberOfValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkBitArrayIterator::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkBitArrayIterator::GetDataType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkBitArrayIterator::GetDataTypeSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArrayIterator_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArrayIterator *op = static_cast<vtkBitArrayIterator *>(vp);

  vtkIdType temp0;
  int temp1;
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
      op->vtkBitArrayIterator::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBitArrayIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkBitArrayIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBitArrayIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBitArrayIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBitArrayIterator\nC++: vtkBitArrayIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBitArrayIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBitArrayIterator\nC++: vtkBitArrayIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkBitArrayIterator_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkAbstractArray)\nC++: virtual void Initialize(vtkAbstractArray *array)\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-intialized.\n"},
  {(char*)"GetArray", PyvtkBitArrayIterator_GetArray, METH_VARARGS,
   (char*)"V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {(char*)"GetTuple", PyvtkBitArrayIterator_GetTuple, METH_VARARGS,
   (char*)"V.GetTuple(int) -> (int, ...)\nC++: int *GetTuple(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {(char*)"GetValue", PyvtkBitArrayIterator_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: int GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {(char*)"GetNumberOfTuples", PyvtkBitArrayIterator_GetNumberOfTuples, METH_VARARGS,
   (char*)"V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {(char*)"GetNumberOfValues", PyvtkBitArrayIterator_GetNumberOfValues, METH_VARARGS,
   (char*)"V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {(char*)"GetNumberOfComponents", PyvtkBitArrayIterator_GetNumberOfComponents, METH_VARARGS,
   (char*)"V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {(char*)"GetDataType", PyvtkBitArrayIterator_GetDataType, METH_VARARGS,
   (char*)"V.GetDataType() -> int\nC++: int GetDataType()\n\nGet the data type from the underlying array.\n"},
  {(char*)"GetDataTypeSize", PyvtkBitArrayIterator_GetDataTypeSize, METH_VARARGS,
   (char*)"V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {(char*)"SetValue", PyvtkBitArrayIterator_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, int value)\n\nSets the value at the index. This does not verify if the index is\nvalid. The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBitArrayIterator_StaticNew()
{
  return vtkBitArrayIterator::New();
}

PyObject *PyVTKClass_vtkBitArrayIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBitArrayIterator_StaticNew,
    PyvtkBitArrayIterator_Methods,
    "vtkBitArrayIterator", modulename,
    NULL, NULL,
    PyvtkBitArrayIterator_Doc(),
    PyVTKClass_vtkArrayIteratorNew(modulename));
  return cls;
}

const char **PyvtkBitArrayIterator_Doc()
{
  static const char *docstring[] = {
    "vtkBitArrayIterator - Iterator for vtkBitArray.\n\n",
    "Superclass: vtkArrayIterator\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBitArrayIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBitArrayIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBitArrayIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

