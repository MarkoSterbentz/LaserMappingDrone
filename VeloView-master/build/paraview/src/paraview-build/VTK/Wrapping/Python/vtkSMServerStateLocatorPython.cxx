// python wrapper for vtkSMServerStateLocator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMServerStateLocator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMServerStateLocator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMServerStateLocatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMStateLocatorNew
extern "C" { PyObject *PyVTKClass_vtkSMStateLocatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMStateLocatorNew
#endif

static const char **PyvtkSMServerStateLocator_Doc();


static PyObject *
PyvtkSMServerStateLocator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMServerStateLocator *op = static_cast<vtkSMServerStateLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMServerStateLocator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMServerStateLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMServerStateLocator *op = static_cast<vtkSMServerStateLocator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMServerStateLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMServerStateLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMServerStateLocator *op = static_cast<vtkSMServerStateLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMServerStateLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMServerStateLocator::NewInstance());

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
PyvtkSMServerStateLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMServerStateLocator *tempr = vtkSMServerStateLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMServerStateLocator_GetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMServerStateLocator *op = static_cast<vtkSMServerStateLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSession *tempr = (ap.IsBound() ?
      op->GetSession() :
      op->vtkSMServerStateLocator::GetSession());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMServerStateLocator_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMServerStateLocator *op = static_cast<vtkSMServerStateLocator *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    if (ap.IsBound())
      {
      op->SetSession(temp0);
      }
    else
      {
      op->vtkSMServerStateLocator::SetSession(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMServerStateLocator_FindState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMServerStateLocator *op = static_cast<vtkSMServerStateLocator *>(vp);

  unsigned int temp0;
  vtkSMMessage *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMMessage") &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->FindState(temp0, temp1, temp2) :
      op->vtkSMServerStateLocator::FindState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMServerStateLocator_Methods[] = {
  {(char*)"GetClassName", PyvtkSMServerStateLocator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMServerStateLocator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMServerStateLocator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMServerStateLocator\nC++: vtkSMServerStateLocator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMServerStateLocator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMServerStateLocator\nC++: vtkSMServerStateLocator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSession", PyvtkSMServerStateLocator_GetSession, METH_VARARGS,
   (char*)"V.GetSession() -> vtkSMSession\nC++: vtkSMSession *GetSession()\n\nSet/Get a parent locator to search which is used as a backup\nlocation to search from if a given state was not found locally.\n"},
  {(char*)"SetSession", PyvtkSMServerStateLocator_SetSession, METH_VARARGS,
   (char*)"V.SetSession(vtkSMSession)\nC++: void SetSession(vtkSMSession *session)\n\nSet/Get a parent locator to search which is used as a backup\nlocation to search from if a given state was not found locally.\n"},
  {(char*)"FindState", PyvtkSMServerStateLocator_FindState, METH_VARARGS,
   (char*)"V.FindState(int, vtkSMMessage, bool) -> bool\nC++: virtual bool FindState(vtkTypeUInt32 globalID,\n    vtkSMMessage *stateToFill, bool useParent)\n\nFill the provided State message with the state found inside the\ncurrent locator or one of its parent. The method return true if\nthe state was successfully filled. In that case useParent is not\nused and is set to false.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMServerStateLocator_StaticNew()
{
  return vtkSMServerStateLocator::New();
}

PyObject *PyVTKClass_vtkSMServerStateLocatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMServerStateLocator_StaticNew,
    PyvtkSMServerStateLocator_Methods,
    "vtkSMServerStateLocator", modulename,
    NULL, NULL,
    PyvtkSMServerStateLocator_Doc(),
    PyVTKClass_vtkSMStateLocatorNew(modulename));
  return cls;
}

const char **PyvtkSMServerStateLocator_Doc()
{
  static const char *docstring[] = {
    "vtkSMServerStateLocator - Class used to retreive a given message\nstate based\n\n",
    "Superclass: vtkSMStateLocator\n\n",
    "Retreive a given state from the server.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMServerStateLocator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMServerStateLocatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMServerStateLocator", o) != 0)
    {
    Py_DECREF(o);
    }

}

