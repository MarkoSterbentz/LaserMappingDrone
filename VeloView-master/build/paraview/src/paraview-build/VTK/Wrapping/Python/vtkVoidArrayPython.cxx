// python wrapper for vtkVoidArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVoidArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVoidArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVoidArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkVoidArray_Doc();


static PyObject *
PyvtkVoidArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVoidArray::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoidArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVoidArray::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoidArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVoidArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVoidArray::NewInstance());

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
PyvtkVoidArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVoidArray *tempr = vtkVoidArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoidArray_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1 = 1000;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkVoidArray::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoidArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkVoidArray::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoidArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkVoidArray::GetDataType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoidArray_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkVoidArray::GetDataTypeSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoidArray_SetNumberOfPointers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPointers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPointers(temp0);
      }
    else
      {
      op->vtkVoidArray::SetNumberOfPointers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoidArray_GetNumberOfPointers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPointers() :
      op->vtkVoidArray::GetNumberOfPointers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoidArray_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkVoidArray::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoidArray_SetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  vtkIdType temp0;
  void  *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetVoidPointer(temp0, temp1);
      }
    else
      {
      op->vtkVoidArray::SetVoidPointer(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoidArray_InsertVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  vtkIdType temp0;
  void  *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->InsertVoidPointer(temp0, temp1);
      }
    else
      {
      op->vtkVoidArray::InsertVoidPointer(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoidArray_InsertNextVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextVoidPointer(temp0) :
      op->vtkVoidArray::InsertNextVoidPointer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoidArray_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkVoidArray::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoidArray_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkVoidArray::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoidArray_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  vtkVoidArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVoidArray"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkVoidArray::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkVoidArray_Methods[] = {
  {(char*)"GetClassName", PyvtkVoidArray_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVoidArray_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVoidArray_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVoidArray\nC++: vtkVoidArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVoidArray_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVoidArray\nC++: vtkVoidArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Allocate", PyvtkVoidArray_Allocate, METH_VARARGS,
   (char*)"V.Allocate(int, int) -> int\nC++: int Allocate(vtkIdType sz, vtkIdType ext=1000)\n\nAllocate memory for this array. Delete old storage only if\nnecessary. Note that the parameter ext is no longer used.\n"},
  {(char*)"Initialize", PyvtkVoidArray_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nRelease storage and reset array to initial state.\n"},
  {(char*)"GetDataType", PyvtkVoidArray_GetDataType, METH_VARARGS,
   (char*)"V.GetDataType() -> int\nC++: int GetDataType()\n\nReturn the type of data.\n"},
  {(char*)"GetDataTypeSize", PyvtkVoidArray_GetDataTypeSize, METH_VARARGS,
   (char*)"V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nReturn the size of the data contained in the array.\n"},
  {(char*)"SetNumberOfPointers", PyvtkVoidArray_SetNumberOfPointers, METH_VARARGS,
   (char*)"V.SetNumberOfPointers(int)\nC++: void SetNumberOfPointers(vtkIdType number)\n\nSet the number of void* pointers held in the array.\n"},
  {(char*)"GetNumberOfPointers", PyvtkVoidArray_GetNumberOfPointers, METH_VARARGS,
   (char*)"V.GetNumberOfPointers() -> int\nC++: vtkIdType GetNumberOfPointers()\n\nGet the number of void* pointers held in the array.\n"},
  {(char*)"GetVoidPointer", PyvtkVoidArray_GetVoidPointer, METH_VARARGS,
   (char*)"V.GetVoidPointer(int) ->\nC++: void *GetVoidPointer(vtkIdType id)\n\nGet the void* pointer at the ith location.\n"},
  {(char*)"SetVoidPointer", PyvtkVoidArray_SetVoidPointer, METH_VARARGS,
   (char*)"V.SetVoidPointer(int, )\nC++: void SetVoidPointer(vtkIdType id, void *ptr)\n\nSet the void* pointer value at the ith location in the array.\n"},
  {(char*)"InsertVoidPointer", PyvtkVoidArray_InsertVoidPointer, METH_VARARGS,
   (char*)"V.InsertVoidPointer(int, )\nC++: void InsertVoidPointer(vtkIdType i, void *ptr)\n\nInsert (memory allocation performed) the void* into the ith\nlocation in the array.\n"},
  {(char*)"InsertNextVoidPointer", PyvtkVoidArray_InsertNextVoidPointer, METH_VARARGS,
   (char*)"V.InsertNextVoidPointer() -> int\nC++: vtkIdType InsertNextVoidPointer(void *tuple)\n\nInsert (memory allocation performed) the void* pointer at the end\nof the array.\n"},
  {(char*)"Reset", PyvtkVoidArray_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\nReuse already allocated data; make the container look like it is\nempty.\n"},
  {(char*)"Squeeze", PyvtkVoidArray_Squeeze, METH_VARARGS,
   (char*)"V.Squeeze()\nC++: void Squeeze()\n\nResize the array to just fit the inserted memory. Reclaims extra\nmemory.\n"},
  {(char*)"DeepCopy", PyvtkVoidArray_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkVoidArray)\nC++: void DeepCopy(vtkVoidArray *va)\n\nDeep copy of another void array.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVoidArray_StaticNew()
{
  return vtkVoidArray::New();
}

PyObject *PyVTKClass_vtkVoidArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVoidArray_StaticNew,
    PyvtkVoidArray_Methods,
    "vtkVoidArray", modulename,
    NULL, NULL,
    PyvtkVoidArray_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkVoidArray_Doc()
{
  static const char *docstring[] = {
    "vtkVoidArray - dynamic, self-adjusting array of void* pointers\n\n",
    "Superclass: vtkObject\n\n",
    "vtkVoidArray is an array of pointers to void. It provides methods for\ninsertion and retrieval of these pointers values, and will\nautomatically resize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVoidArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVoidArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVoidArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

