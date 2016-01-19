// python wrapper for vtkTypeInt32Array
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTypeInt32Array.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTypeInt32Array(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypeInt32ArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkIntArrayNew
extern "C" { PyObject *PyVTKClass_vtkIntArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkIntArrayNew
#endif

static const char **PyvtkTypeInt32Array_Doc();


static PyObject *
PyvtkTypeInt32Array_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeInt32Array *op = static_cast<vtkTypeInt32Array *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTypeInt32Array::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeInt32Array_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeInt32Array *op = static_cast<vtkTypeInt32Array *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypeInt32Array::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeInt32Array_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeInt32Array *op = static_cast<vtkTypeInt32Array *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTypeInt32Array *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypeInt32Array::NewInstance());

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
PyvtkTypeInt32Array_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTypeInt32Array *tempr = vtkTypeInt32Array::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTypeInt32Array_Methods[] = {
  {(char*)"GetClassName", PyvtkTypeInt32Array_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTypeInt32Array_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTypeInt32Array_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTypeInt32Array\nC++: vtkTypeInt32Array *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTypeInt32Array_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTypeInt32Array\nC++: vtkTypeInt32Array *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTypeInt32Array_StaticNew()
{
  return vtkTypeInt32Array::New();
}

PyObject *PyVTKClass_vtkTypeInt32ArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTypeInt32Array_StaticNew,
    PyvtkTypeInt32Array_Methods,
    "vtkTypeInt32Array", modulename,
    NULL, NULL,
    PyvtkTypeInt32Array_Doc(),
    PyVTKClass_vtkIntArrayNew(modulename));
  return cls;
}

const char **PyvtkTypeInt32Array_Doc()
{
  static const char *docstring[] = {
    "vtkTypeInt32Array - dynamic, self-adjusting array of vtkTypeInt32\n\n",
    "Superclass: vtkIntArray\n\n",
    "vtkTypeInt32Array is an array of values of type vtkTypeInt32.  It\nprovides methods for insertion and retrieval of values and will\nautomatically resize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTypeInt32Array(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTypeInt32ArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTypeInt32Array", o) != 0)
    {
    Py_DECREF(o);
    }

}

