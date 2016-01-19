// python wrapper for vtkDebugLeaks
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkDebugLeaks.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDebugLeaks(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDebugLeaksNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDebugLeaks_Doc();


static PyObject *
PyvtkDebugLeaks_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDebugLeaks *op = static_cast<vtkDebugLeaks *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDebugLeaks::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDebugLeaks_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDebugLeaks *op = static_cast<vtkDebugLeaks *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDebugLeaks::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDebugLeaks_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDebugLeaks *op = static_cast<vtkDebugLeaks *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDebugLeaks *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDebugLeaks::NewInstance());

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
PyvtkDebugLeaks_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDebugLeaks *tempr = vtkDebugLeaks::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDebugLeaks_ConstructClass(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConstructClass");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDebugLeaks::ConstructClass(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDebugLeaks_DestructClass(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DestructClass");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDebugLeaks::DestructClass(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDebugLeaks_PrintCurrentLeaks(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PrintCurrentLeaks");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkDebugLeaks::PrintCurrentLeaks();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDebugLeaks_GetExitError(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetExitError");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkDebugLeaks::GetExitError();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDebugLeaks_SetExitError(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetExitError");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDebugLeaks::SetExitError(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDebugLeaks_Methods[] = {
  {(char*)"GetClassName", PyvtkDebugLeaks_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDebugLeaks_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDebugLeaks_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDebugLeaks\nC++: vtkDebugLeaks *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDebugLeaks_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDebugLeaks\nC++: vtkDebugLeaks *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ConstructClass", PyvtkDebugLeaks_ConstructClass, METH_VARARGS | METH_STATIC,
   (char*)"V.ConstructClass(string)\nC++: static void ConstructClass(const char *classname)\n\nCall this when creating a class of a given name.\n"},
  {(char*)"DestructClass", PyvtkDebugLeaks_DestructClass, METH_VARARGS | METH_STATIC,
   (char*)"V.DestructClass(string)\nC++: static void DestructClass(const char *classname)\n\nCall this when deleting a class of a given name.\n"},
  {(char*)"PrintCurrentLeaks", PyvtkDebugLeaks_PrintCurrentLeaks, METH_VARARGS | METH_STATIC,
   (char*)"V.PrintCurrentLeaks() -> int\nC++: static int PrintCurrentLeaks()\n\nPrint all the values in the table.  Returns non-zero if there\nwere leaks.\n"},
  {(char*)"GetExitError", PyvtkDebugLeaks_GetExitError, METH_VARARGS | METH_STATIC,
   (char*)"V.GetExitError() -> int\nC++: static int GetExitError()\n\nGet/Set flag for exiting with an error when leaks are present.\nDefault is on when VTK_DEBUG_LEAKS is on and off otherwise.\n"},
  {(char*)"SetExitError", PyvtkDebugLeaks_SetExitError, METH_VARARGS | METH_STATIC,
   (char*)"V.SetExitError(int)\nC++: static void SetExitError(int)\n\nGet/Set flag for exiting with an error when leaks are present.\nDefault is on when VTK_DEBUG_LEAKS is on and off otherwise.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDebugLeaks_StaticNew()
{
  return vtkDebugLeaks::New();
}

PyObject *PyVTKClass_vtkDebugLeaksNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDebugLeaks_StaticNew,
    PyvtkDebugLeaks_Methods,
    "vtkDebugLeaks", modulename,
    NULL, NULL,
    PyvtkDebugLeaks_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkDebugLeaks_Doc()
{
  static const char *docstring[] = {
    "vtkDebugLeaks - identify memory leaks at program termination\n\n",
    "Superclass: vtkObject\n\n",
    "vtkDebugLeaks is used to report memory leaks at the exit of the\nprogram. It uses the vtkObjectFactory to intercept the construction\nof all VTK objects. It uses the UnRegister method of vtkObject to\nintercept the destruction of all objects. A table of object name to\nnumber of instances is kept. At the exit of the program if there are\nstill VTK objects around it will print them out.  To enable this\n",
    "class add the flag\n-DVTK_DEBUG_LEAKS to the compile line, and rebuild vtkObject and\n    vtkObjectFactory.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDebugLeaks(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDebugLeaksNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDebugLeaks", o) != 0)
    {
    Py_DECREF(o);
    }

}

