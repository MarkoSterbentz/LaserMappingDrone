// python wrapper for vtkSMUndoElement
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMUndoElement.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMUndoElement(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMUndoElementNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUndoElementNew
extern "C" { PyObject *PyVTKClass_vtkUndoElementNew(const char *); }
#define DECLARED_PyVTKClass_vtkUndoElementNew
#endif

static const char **PyvtkSMUndoElement_Doc();


static PyObject *
PyvtkSMUndoElement_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoElement *op = static_cast<vtkSMUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMUndoElement::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoElement *op = static_cast<vtkSMUndoElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMUndoElement::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoElement *op = static_cast<vtkSMUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMUndoElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMUndoElement::NewInstance());

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
PyvtkSMUndoElement_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMUndoElement *tempr = vtkSMUndoElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoElement_GetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoElement *op = static_cast<vtkSMUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSession *tempr = (ap.IsBound() ?
      op->GetSession() :
      op->vtkSMUndoElement::GetSession());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoElement_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoElement *op = static_cast<vtkSMUndoElement *>(vp);

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
      op->vtkSMUndoElement::SetSession(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoElement_GetSessionProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSessionProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoElement *op = static_cast<vtkSMUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSessionProxyManager *tempr = (ap.IsBound() ?
      op->GetSessionProxyManager() :
      op->vtkSMUndoElement::GetSessionProxyManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMUndoElement_Methods[] = {
  {(char*)"GetClassName", PyvtkSMUndoElement_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMUndoElement_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMUndoElement_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMUndoElement\nC++: vtkSMUndoElement *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMUndoElement_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMUndoElement\nC++: vtkSMUndoElement *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSession", PyvtkSMUndoElement_GetSession, METH_VARARGS,
   (char*)"V.GetSession() -> vtkSMSession\nC++: virtual vtkSMSession *GetSession()\n\n"},
  {(char*)"SetSession", PyvtkSMUndoElement_SetSession, METH_VARARGS,
   (char*)"V.SetSession(vtkSMSession)\nC++: virtual void SetSession(vtkSMSession *)\n\n"},
  {(char*)"GetSessionProxyManager", PyvtkSMUndoElement_GetSessionProxyManager, METH_VARARGS,
   (char*)"V.GetSessionProxyManager() -> vtkSMSessionProxyManager\nC++: virtual vtkSMSessionProxyManager *GetSessionProxyManager()\n\nReturn the corresponding ProxyManager if any.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSMUndoElementNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSMUndoElement_Methods,
    "vtkSMUndoElement", modulename,
    NULL, NULL,
    PyvtkSMUndoElement_Doc(),
    PyVTKClass_vtkUndoElementNew(modulename));
  return cls;
}

const char **PyvtkSMUndoElement_Doc()
{
  static const char *docstring[] = {
    "vtkSMUndoElement - abstract superclass for Server Manager undo \n\n",
    "Superclass: vtkUndoElement\n\n",
    "Abstract superclass for Server Manager undo elements. This class\nkeeps the session, so undoelement could work accross a set of\ncommunication Sessions.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMUndoElement(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMUndoElementNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMUndoElement", o) != 0)
    {
    Py_DECREF(o);
    }

}

