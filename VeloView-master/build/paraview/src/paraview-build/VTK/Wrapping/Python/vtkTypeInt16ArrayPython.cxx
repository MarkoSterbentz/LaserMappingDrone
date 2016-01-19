// python wrapper for vtkTypeInt16Array
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTypeInt16Array.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTypeInt16Array(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypeInt16ArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkShortArrayNew
extern "C" { PyObject *PyVTKClass_vtkShortArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkShortArrayNew
#endif

static const char **PyvtkTypeInt16Array_Doc();


static PyObject *
PyvtkTypeInt16Array_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeInt16Array *op = static_cast<vtkTypeInt16Array *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTypeInt16Array::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeInt16Array_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeInt16Array *op = static_cast<vtkTypeInt16Array *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypeInt16Array::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeInt16Array_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeInt16Array *op = static_cast<vtkTypeInt16Array *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTypeInt16Array *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypeInt16Array::NewInstance());

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
PyvtkTypeInt16Array_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTypeInt16Array *tempr = vtkTypeInt16Array::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTypeInt16Array_Methods[] = {
  {(char*)"GetClassName", PyvtkTypeInt16Array_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTypeInt16Array_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTypeInt16Array_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTypeInt16Array\nC++: vtkTypeInt16Array *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTypeInt16Array_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTypeInt16Array\nC++: vtkTypeInt16Array *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTypeInt16Array_StaticNew()
{
  return vtkTypeInt16Array::New();
}

PyObject *PyVTKClass_vtkTypeInt16ArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTypeInt16Array_StaticNew,
    PyvtkTypeInt16Array_Methods,
    "vtkTypeInt16Array", modulename,
    NULL, NULL,
    PyvtkTypeInt16Array_Doc(),
    PyVTKClass_vtkShortArrayNew(modulename));
  return cls;
}

const char **PyvtkTypeInt16Array_Doc()
{
  static const char *docstring[] = {
    "vtkTypeInt16Array - dynamic, self-adjusting array of vtkTypeInt16\n\n",
    "Superclass: vtkShortArray\n\n",
    "vtkTypeInt16Array is an array of values of type vtkTypeInt16.  It\nprovides methods for insertion and retrieval of values and will\nautomatically resize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTypeInt16Array(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTypeInt16ArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTypeInt16Array", o) != 0)
    {
    Py_DECREF(o);
    }

}

