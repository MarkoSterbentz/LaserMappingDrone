// python wrapper for vtkTypeFloat32Array
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTypeFloat32Array.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTypeFloat32Array(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypeFloat32ArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkFloatArrayNew
extern "C" { PyObject *PyVTKClass_vtkFloatArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkFloatArrayNew
#endif

static const char **PyvtkTypeFloat32Array_Doc();


static PyObject *
PyvtkTypeFloat32Array_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeFloat32Array *op = static_cast<vtkTypeFloat32Array *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTypeFloat32Array::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeFloat32Array_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeFloat32Array *op = static_cast<vtkTypeFloat32Array *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypeFloat32Array::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypeFloat32Array_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeFloat32Array *op = static_cast<vtkTypeFloat32Array *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTypeFloat32Array *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypeFloat32Array::NewInstance());

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
PyvtkTypeFloat32Array_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTypeFloat32Array *tempr = vtkTypeFloat32Array::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTypeFloat32Array_Methods[] = {
  {(char*)"GetClassName", PyvtkTypeFloat32Array_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTypeFloat32Array_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTypeFloat32Array_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTypeFloat32Array\nC++: vtkTypeFloat32Array *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTypeFloat32Array_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTypeFloat32Array\nC++: vtkTypeFloat32Array *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTypeFloat32Array_StaticNew()
{
  return vtkTypeFloat32Array::New();
}

PyObject *PyVTKClass_vtkTypeFloat32ArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTypeFloat32Array_StaticNew,
    PyvtkTypeFloat32Array_Methods,
    "vtkTypeFloat32Array", modulename,
    NULL, NULL,
    PyvtkTypeFloat32Array_Doc(),
    PyVTKClass_vtkFloatArrayNew(modulename));
  return cls;
}

const char **PyvtkTypeFloat32Array_Doc()
{
  static const char *docstring[] = {
    "vtkTypeFloat32Array - dynamic, self-adjusting array of vtkTypeFloat32\n\n",
    "Superclass: vtkFloatArray\n\n",
    "vtkTypeFloat32Array is an array of values of type vtkTypeFloat32.  It\nprovides methods for insertion and retrieval of values and will\nautomatically resize itself to hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTypeFloat32Array(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTypeFloat32ArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTypeFloat32Array", o) != 0)
    {
    Py_DECREF(o);
    }

}

