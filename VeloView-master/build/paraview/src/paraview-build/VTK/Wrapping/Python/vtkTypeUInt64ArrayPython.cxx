// python wrapper for vtkTypeUInt64Array
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTypeUInt64Array.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTypeUInt64Array(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypeUInt64ArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnsignedLongLongArrayNew
extern "C" { PyObject *PyVTKClass_vtkUnsignedLongLongArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnsignedLongLongArrayNew
#endif

static const char **PyvtkTypeUInt64Array_Doc();


static PyObject *
PyvtkTypeUInt64Array_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt64Array *op = static_cast<vtkTypeUInt64Array *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTypeUInt64Array::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeUInt64Array_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt64Array *op = static_cast<vtkTypeUInt64Array *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypeUInt64Array::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeUInt64Array_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt64Array *op = static_cast<vtkTypeUInt64Array *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTypeUInt64Array *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypeUInt64Array::NewInstance());

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
PyvtkTypeUInt64Array_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTypeUInt64Array *tempr = vtkTypeUInt64Array::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTypeUInt64Array_Methods[] = {
  {(char*)"GetClassName", PyvtkTypeUInt64Array_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTypeUInt64Array_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTypeUInt64Array_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTypeUInt64Array\nC++: vtkTypeUInt64Array *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTypeUInt64Array_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTypeUInt64Array\nC++: vtkTypeUInt64Array *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTypeUInt64Array_StaticNew()
{
  return vtkTypeUInt64Array::New();
}

PyObject *PyVTKClass_vtkTypeUInt64ArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTypeUInt64Array_StaticNew,
    PyvtkTypeUInt64Array_Methods,
    "vtkTypeUInt64Array", modulename,
    NULL, NULL,
    PyvtkTypeUInt64Array_Doc(),
    PyVTKClass_vtkUnsignedLongLongArrayNew(modulename));
  return cls;
}

const char **PyvtkTypeUInt64Array_Doc()
{
  static const char *docstring[] = {
    "vtkTypeUInt64Array - dynamic, self-adjusting array of vtkTypeUInt64\n\n",
    "Superclass: vtkUnsignedLongLongArray\n\n",
    "vtkTypeUInt64Array is an array of values of type vtkTypeUInt64.  It\nprovides methods for insertion and retrieval of values and will\nautomatically resize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTypeUInt64Array(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTypeUInt64ArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTypeUInt64Array", o) != 0)
    {
    Py_DECREF(o);
    }

}

