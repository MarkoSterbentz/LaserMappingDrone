// python wrapper for vtkNetworkHierarchy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkNetworkHierarchy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNetworkHierarchy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNetworkHierarchyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeAlgorithmNew
#endif

static const char **PyvtkNetworkHierarchy_Doc();


static PyObject *
PyvtkNetworkHierarchy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkHierarchy *op = static_cast<vtkNetworkHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNetworkHierarchy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetworkHierarchy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkHierarchy *op = static_cast<vtkNetworkHierarchy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNetworkHierarchy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetworkHierarchy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkHierarchy *op = static_cast<vtkNetworkHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNetworkHierarchy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNetworkHierarchy::NewInstance());

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
PyvtkNetworkHierarchy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNetworkHierarchy *tempr = vtkNetworkHierarchy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetworkHierarchy_GetIPArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIPArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkHierarchy *op = static_cast<vtkNetworkHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetIPArrayName() :
      op->vtkNetworkHierarchy::GetIPArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetworkHierarchy_SetIPArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIPArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkHierarchy *op = static_cast<vtkNetworkHierarchy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIPArrayName(temp0);
      }
    else
      {
      op->vtkNetworkHierarchy::SetIPArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkNetworkHierarchy_Methods[] = {
  {(char*)"GetClassName", PyvtkNetworkHierarchy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNetworkHierarchy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNetworkHierarchy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNetworkHierarchy\nC++: vtkNetworkHierarchy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNetworkHierarchy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNetworkHierarchy\nC++: vtkNetworkHierarchy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetIPArrayName", PyvtkNetworkHierarchy_GetIPArrayName, METH_VARARGS,
   (char*)"V.GetIPArrayName() -> string\nC++: char *GetIPArrayName()\n\nUsed to store the ip array name\n"},
  {(char*)"SetIPArrayName", PyvtkNetworkHierarchy_SetIPArrayName, METH_VARARGS,
   (char*)"V.SetIPArrayName(string)\nC++: void SetIPArrayName(char *)\n\nUsed to store the ip array name\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNetworkHierarchy_StaticNew()
{
  return vtkNetworkHierarchy::New();
}

PyObject *PyVTKClass_vtkNetworkHierarchyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNetworkHierarchy_StaticNew,
    PyvtkNetworkHierarchy_Methods,
    "vtkNetworkHierarchy", modulename,
    NULL, NULL,
    PyvtkNetworkHierarchy_Doc(),
    PyVTKClass_vtkTreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkNetworkHierarchy_Doc()
{
  static const char *docstring[] = {
    "vtkNetworkHierarchy - Filter that takes a graph and makes a\n\n",
    "Superclass: vtkTreeAlgorithm\n\n",
    "Use SetInputArrayToProcess(0, ...) to set the array to that has the\nnetwork ip addresses. Currently this array must be a vtkStringArray.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNetworkHierarchy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNetworkHierarchyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNetworkHierarchy", o) != 0)
    {
    Py_DECREF(o);
    }

}

