// python wrapper for vtkTypeUInt8Array
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTypeUInt8Array.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTypeUInt8Array(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypeUInt8ArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnsignedCharArrayNew
extern "C" { PyObject *PyVTKClass_vtkUnsignedCharArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnsignedCharArrayNew
#endif

static const char **PyvtkTypeUInt8Array_Doc();


static PyObject *
PyvtkTypeUInt8Array_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt8Array *op = static_cast<vtkTypeUInt8Array *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTypeUInt8Array::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeUInt8Array_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt8Array *op = static_cast<vtkTypeUInt8Array *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypeUInt8Array::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeUInt8Array_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt8Array *op = static_cast<vtkTypeUInt8Array *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTypeUInt8Array *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypeUInt8Array::NewInstance());

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
PyvtkTypeUInt8Array_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTypeUInt8Array *tempr = vtkTypeUInt8Array::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTypeUInt8Array_Methods[] = {
  {(char*)"GetClassName", PyvtkTypeUInt8Array_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTypeUInt8Array_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTypeUInt8Array_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTypeUInt8Array\nC++: vtkTypeUInt8Array *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTypeUInt8Array_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTypeUInt8Array\nC++: vtkTypeUInt8Array *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTypeUInt8Array_StaticNew()
{
  return vtkTypeUInt8Array::New();
}

PyObject *PyVTKClass_vtkTypeUInt8ArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTypeUInt8Array_StaticNew,
    PyvtkTypeUInt8Array_Methods,
    "vtkTypeUInt8Array", modulename,
    NULL, NULL,
    PyvtkTypeUInt8Array_Doc(),
    PyVTKClass_vtkUnsignedCharArrayNew(modulename));
  return cls;
}

const char **PyvtkTypeUInt8Array_Doc()
{
  static const char *docstring[] = {
    "vtkTypeUInt8Array - dynamic, self-adjusting array of vtkTypeUInt8\n\n",
    "Superclass: vtkUnsignedCharArray\n\n",
    "vtkTypeUInt8Array is an array of values of type vtkTypeUInt8.  It\nprovides methods for insertion and retrieval of values and will\nautomatically resize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTypeUInt8Array(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTypeUInt8ArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTypeUInt8Array", o) != 0)
    {
    Py_DECREF(o);
    }

}

