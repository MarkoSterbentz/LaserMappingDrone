// python wrapper for vtkTypeUInt32Array
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTypeUInt32Array.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTypeUInt32Array(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypeUInt32ArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnsignedIntArrayNew
extern "C" { PyObject *PyVTKClass_vtkUnsignedIntArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnsignedIntArrayNew
#endif

static const char **PyvtkTypeUInt32Array_Doc();


static PyObject *
PyvtkTypeUInt32Array_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt32Array *op = static_cast<vtkTypeUInt32Array *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTypeUInt32Array::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeUInt32Array_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt32Array *op = static_cast<vtkTypeUInt32Array *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypeUInt32Array::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeUInt32Array_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt32Array *op = static_cast<vtkTypeUInt32Array *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTypeUInt32Array *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypeUInt32Array::NewInstance());

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
PyvtkTypeUInt32Array_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTypeUInt32Array *tempr = vtkTypeUInt32Array::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTypeUInt32Array_Methods[] = {
  {(char*)"GetClassName", PyvtkTypeUInt32Array_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTypeUInt32Array_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTypeUInt32Array_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTypeUInt32Array\nC++: vtkTypeUInt32Array *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTypeUInt32Array_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTypeUInt32Array\nC++: vtkTypeUInt32Array *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTypeUInt32Array_StaticNew()
{
  return vtkTypeUInt32Array::New();
}

PyObject *PyVTKClass_vtkTypeUInt32ArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTypeUInt32Array_StaticNew,
    PyvtkTypeUInt32Array_Methods,
    "vtkTypeUInt32Array", modulename,
    NULL, NULL,
    PyvtkTypeUInt32Array_Doc(),
    PyVTKClass_vtkUnsignedIntArrayNew(modulename));
  return cls;
}

const char **PyvtkTypeUInt32Array_Doc()
{
  static const char *docstring[] = {
    "vtkTypeUInt32Array - dynamic, self-adjusting array of vtkTypeUInt32\n\n",
    "Superclass: vtkUnsignedIntArray\n\n",
    "vtkTypeUInt32Array is an array of values of type vtkTypeUInt32.  It\nprovides methods for insertion and retrieval of values and will\nautomatically resize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTypeUInt32Array(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTypeUInt32ArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTypeUInt32Array", o) != 0)
    {
    Py_DECREF(o);
    }

}

