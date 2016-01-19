// python wrapper for vtkSMInsituStateLoader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMInsituStateLoader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMInsituStateLoader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMInsituStateLoaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMStateLoaderNew
extern "C" { PyObject *PyVTKClass_vtkSMStateLoaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMStateLoaderNew
#endif

static const char **PyvtkSMInsituStateLoader_Doc();


static PyObject *
PyvtkSMInsituStateLoader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInsituStateLoader *op = static_cast<vtkSMInsituStateLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMInsituStateLoader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInsituStateLoader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInsituStateLoader *op = static_cast<vtkSMInsituStateLoader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMInsituStateLoader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInsituStateLoader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInsituStateLoader *op = static_cast<vtkSMInsituStateLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMInsituStateLoader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMInsituStateLoader::NewInstance());

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
PyvtkSMInsituStateLoader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMInsituStateLoader *tempr = vtkSMInsituStateLoader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMInsituStateLoader_Methods[] = {
  {(char*)"GetClassName", PyvtkSMInsituStateLoader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMInsituStateLoader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMInsituStateLoader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMInsituStateLoader\nC++: vtkSMInsituStateLoader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMInsituStateLoader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMInsituStateLoader\nC++: vtkSMInsituStateLoader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMInsituStateLoader_StaticNew()
{
  return vtkSMInsituStateLoader::New();
}

PyObject *PyVTKClass_vtkSMInsituStateLoaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMInsituStateLoader_StaticNew,
    PyvtkSMInsituStateLoader_Methods,
    "vtkSMInsituStateLoader", modulename,
    NULL, NULL,
    PyvtkSMInsituStateLoader_Doc(),
    PyVTKClass_vtkSMStateLoaderNew(modulename));
  return cls;
}

const char **PyvtkSMInsituStateLoader_Doc()
{
  static const char *docstring[] = {
    "vtkSMInsituStateLoader\n\n",
    "Superclass: vtkSMStateLoader\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMInsituStateLoader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMInsituStateLoaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMInsituStateLoader", o) != 0)
    {
    Py_DECREF(o);
    }

}

