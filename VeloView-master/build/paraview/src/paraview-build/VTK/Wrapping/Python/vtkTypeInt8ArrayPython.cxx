// python wrapper for vtkTypeInt8Array
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTypeInt8Array.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTypeInt8Array(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypeInt8ArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCharArrayNew
extern "C" { PyObject *PyVTKClass_vtkCharArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkCharArrayNew
#endif

static const char **PyvtkTypeInt8Array_Doc();


static PyObject *
PyvtkTypeInt8Array_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeInt8Array *op = static_cast<vtkTypeInt8Array *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTypeInt8Array::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeInt8Array_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeInt8Array *op = static_cast<vtkTypeInt8Array *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypeInt8Array::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeInt8Array_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeInt8Array *op = static_cast<vtkTypeInt8Array *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTypeInt8Array *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypeInt8Array::NewInstance());

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
PyvtkTypeInt8Array_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTypeInt8Array *tempr = vtkTypeInt8Array::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTypeInt8Array_Methods[] = {
  {(char*)"GetClassName", PyvtkTypeInt8Array_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTypeInt8Array_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTypeInt8Array_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTypeInt8Array\nC++: vtkTypeInt8Array *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTypeInt8Array_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTypeInt8Array\nC++: vtkTypeInt8Array *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTypeInt8Array_StaticNew()
{
  return vtkTypeInt8Array::New();
}

PyObject *PyVTKClass_vtkTypeInt8ArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTypeInt8Array_StaticNew,
    PyvtkTypeInt8Array_Methods,
    "vtkTypeInt8Array", modulename,
    NULL, NULL,
    PyvtkTypeInt8Array_Doc(),
    PyVTKClass_vtkCharArrayNew(modulename));
  return cls;
}

const char **PyvtkTypeInt8Array_Doc()
{
  static const char *docstring[] = {
    "vtkTypeInt8Array - dynamic, self-adjusting array of vtkTypeInt8\n\n",
    "Superclass: vtkCharArray\n\n",
    "vtkTypeInt8Array is an array of values of type vtkTypeInt8.  It\nprovides methods for insertion and retrieval of values and will\nautomatically resize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTypeInt8Array(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTypeInt8ArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTypeInt8Array", o) != 0)
    {
    Py_DECREF(o);
    }

}

