// python wrapper for vtkSMRemoteObjectUpdateUndoElement
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMRemoteObjectUpdateUndoElement.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMRemoteObjectUpdateUndoElement(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMRemoteObjectUpdateUndoElementNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMUndoElementNew
extern "C" { PyObject *PyVTKClass_vtkSMUndoElementNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMUndoElementNew
#endif

static const char **PyvtkSMRemoteObjectUpdateUndoElement_Doc();


static PyObject *
PyvtkSMRemoteObjectUpdateUndoElement_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObjectUpdateUndoElement *op = static_cast<vtkSMRemoteObjectUpdateUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMRemoteObjectUpdateUndoElement::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObjectUpdateUndoElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObjectUpdateUndoElement *op = static_cast<vtkSMRemoteObjectUpdateUndoElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMRemoteObjectUpdateUndoElement::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObjectUpdateUndoElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObjectUpdateUndoElement *op = static_cast<vtkSMRemoteObjectUpdateUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMRemoteObjectUpdateUndoElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMRemoteObjectUpdateUndoElement::NewInstance());

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
PyvtkSMRemoteObjectUpdateUndoElement_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMRemoteObjectUpdateUndoElement *tempr = vtkSMRemoteObjectUpdateUndoElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObjectUpdateUndoElement_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObjectUpdateUndoElement *op = static_cast<vtkSMRemoteObjectUpdateUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Undo() :
      op->vtkSMRemoteObjectUpdateUndoElement::Undo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObjectUpdateUndoElement_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObjectUpdateUndoElement *op = static_cast<vtkSMRemoteObjectUpdateUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Redo() :
      op->vtkSMRemoteObjectUpdateUndoElement::Redo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObjectUpdateUndoElement_SetProxyLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxyLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObjectUpdateUndoElement *op = static_cast<vtkSMRemoteObjectUpdateUndoElement *>(vp);

  vtkSMProxyLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxyLocator"))
    {
    if (ap.IsBound())
      {
      op->SetProxyLocator(temp0);
      }
    else
      {
      op->vtkSMRemoteObjectUpdateUndoElement::SetProxyLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObjectUpdateUndoElement_SetUndoRedoState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndoRedoState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObjectUpdateUndoElement *op = static_cast<vtkSMRemoteObjectUpdateUndoElement *>(vp);

  vtkSMMessage *temp0 = NULL;
  vtkSMMessage *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMMessage") &&
      ap.GetVTKObject(temp1, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->SetUndoRedoState(temp0, temp1);
      }
    else
      {
      op->vtkSMRemoteObjectUpdateUndoElement::SetUndoRedoState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObjectUpdateUndoElement_GetGlobalId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObjectUpdateUndoElement *op = static_cast<vtkSMRemoteObjectUpdateUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetGlobalId() :
      op->vtkSMRemoteObjectUpdateUndoElement::GetGlobalId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMRemoteObjectUpdateUndoElement_Methods[] = {
  {(char*)"GetClassName", PyvtkSMRemoteObjectUpdateUndoElement_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMRemoteObjectUpdateUndoElement_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMRemoteObjectUpdateUndoElement_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMRemoteObjectUpdateUndoElement\nC++: vtkSMRemoteObjectUpdateUndoElement *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMRemoteObjectUpdateUndoElement_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMRemoteObjectUpdateUndoElement\nC++: vtkSMRemoteObjectUpdateUndoElement *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"Undo", PyvtkSMRemoteObjectUpdateUndoElement_Undo, METH_VARARGS,
   (char*)"V.Undo() -> int\nC++: virtual int Undo()\n\nUndo the operation encapsulated by this element.\n\\return the status of the operation, 1 on success, 0 otherwise.\n"},
  {(char*)"Redo", PyvtkSMRemoteObjectUpdateUndoElement_Redo, METH_VARARGS,
   (char*)"V.Redo() -> int\nC++: virtual int Redo()\n\nRedo the operation encaspsulated by this element.\n\\return the status of the operation, 1 on success, 0 otherwise.\n"},
  {(char*)"SetProxyLocator", PyvtkSMRemoteObjectUpdateUndoElement_SetProxyLocator, METH_VARARGS,
   (char*)"V.SetProxyLocator(vtkSMProxyLocator)\nC++: virtual void SetProxyLocator(vtkSMProxyLocator *)\n\nSet ProxyLocator to use if any.\n"},
  {(char*)"SetUndoRedoState", PyvtkSMRemoteObjectUpdateUndoElement_SetUndoRedoState, METH_VARARGS,
   (char*)"V.SetUndoRedoState(vtkSMMessage, vtkSMMessage)\nC++: virtual void SetUndoRedoState(const vtkSMMessage *before,\n    const vtkSMMessage *after)\n\nSet the state of the UndoElement\n"},
  {(char*)"GetGlobalId", PyvtkSMRemoteObjectUpdateUndoElement_GetGlobalId, METH_VARARGS,
   (char*)"V.GetGlobalId() -> int\nC++: virtual vtkTypeUInt32 GetGlobalId()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMRemoteObjectUpdateUndoElement_StaticNew()
{
  return vtkSMRemoteObjectUpdateUndoElement::New();
}

PyObject *PyVTKClass_vtkSMRemoteObjectUpdateUndoElementNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMRemoteObjectUpdateUndoElement_StaticNew,
    PyvtkSMRemoteObjectUpdateUndoElement_Methods,
    "vtkSMRemoteObjectUpdateUndoElement", modulename,
    NULL, NULL,
    PyvtkSMRemoteObjectUpdateUndoElement_Doc(),
    PyVTKClass_vtkSMUndoElementNew(modulename));
  return cls;
}

const char **PyvtkSMRemoteObjectUpdateUndoElement_Doc()
{
  static const char *docstring[] = {
    "vtkSMRemoteObjectUpdateUndoElement - vtkSMRemoteObject undo element.\n\n",
    "Superclass: vtkSMUndoElement\n\n",
    "This class keeps the before and after state of the RemoteObject in\nthe vtkSMMessage form. It works with any proxy and RemoteObject. It\nis a very generic undoElement.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMRemoteObjectUpdateUndoElement(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMRemoteObjectUpdateUndoElementNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMRemoteObjectUpdateUndoElement", o) != 0)
    {
    Py_DECREF(o);
    }

}

