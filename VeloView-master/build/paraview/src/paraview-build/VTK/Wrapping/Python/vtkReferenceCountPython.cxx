// python wrapper for vtkReferenceCount
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkReferenceCount.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkReferenceCount(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkReferenceCountNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkReferenceCount_Doc();


static PyObject *
PyvtkReferenceCount_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReferenceCount *op = static_cast<vtkReferenceCount *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkReferenceCount::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReferenceCount_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReferenceCount *op = static_cast<vtkReferenceCount *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkReferenceCount::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReferenceCount_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReferenceCount *op = static_cast<vtkReferenceCount *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkReferenceCount *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkReferenceCount::NewInstance());

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
PyvtkReferenceCount_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkReferenceCount *tempr = vtkReferenceCount::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkReferenceCount_Methods[] = {
  {(char*)"GetClassName", PyvtkReferenceCount_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkReferenceCount_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkReferenceCount_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkReferenceCount\nC++: vtkReferenceCount *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkReferenceCount_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkReferenceCount\nC++: vtkReferenceCount *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkReferenceCount_StaticNew()
{
  return vtkReferenceCount::New();
}

PyObject *PyVTKClass_vtkReferenceCountNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkReferenceCount_StaticNew,
    PyvtkReferenceCount_Methods,
    "vtkReferenceCount", modulename,
    NULL, NULL,
    PyvtkReferenceCount_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkReferenceCount_Doc()
{
  static const char *docstring[] = {
    "vtkReferenceCount - Obsolete / empty subclass of object.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkReferenceCount functionality has now been moved into vtkObject\n\nSee Also:\n\nvtkObject\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkReferenceCount(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkReferenceCountNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkReferenceCount", o) != 0)
    {
    Py_DECREF(o);
    }

}

