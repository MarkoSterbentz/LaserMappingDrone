// python wrapper for vtkSMUndoStackBuilder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMUndoStackBuilder.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMUndoStackBuilder(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMUndoStackBuilderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMUndoStackBuilder_Doc();


static PyObject *
PyvtkSMUndoStackBuilder_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMUndoStackBuilder::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMUndoStackBuilder::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMUndoStackBuilder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMUndoStackBuilder::NewInstance());

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
PyvtkSMUndoStackBuilder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMUndoStackBuilder *tempr = vtkSMUndoStackBuilder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Begin(temp0);
      }
    else
      {
      op->vtkSMUndoStackBuilder::Begin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->End();
      }
    else
      {
      op->vtkSMUndoStackBuilder::End();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_EndAndPushToStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndAndPushToStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndAndPushToStack();
      }
    else
      {
      op->vtkSMUndoStackBuilder::EndAndPushToStack();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_PushToStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushToStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PushToStack();
      }
    else
      {
      op->vtkSMUndoStackBuilder::PushToStack();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSMUndoStackBuilder::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_Add(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Add");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  vtkUndoElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUndoElement"))
    {
    bool tempr = (ap.IsBound() ?
      op->Add(temp0) :
      op->vtkSMUndoStackBuilder::Add(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_GetUndoStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUndoStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMUndoStack *tempr = (ap.IsBound() ?
      op->GetUndoStack() :
      op->vtkSMUndoStackBuilder::GetUndoStack());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_SetUndoStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndoStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  vtkSMUndoStack *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMUndoStack"))
    {
    if (ap.IsBound())
      {
      op->SetUndoStack(temp0);
      }
    else
      {
      op->vtkSMUndoStackBuilder::SetUndoStack(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_SetIgnoreAllChanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreAllChanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIgnoreAllChanges(temp0);
      }
    else
      {
      op->vtkSMUndoStackBuilder::SetIgnoreAllChanges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_GetIgnoreAllChanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreAllChanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIgnoreAllChanges() :
      op->vtkSMUndoStackBuilder::GetIgnoreAllChanges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_OnStateChange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnStateChange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  vtkSMSession *temp0 = NULL;
  unsigned int temp1;
  vtkSMMessage *temp2 = NULL;
  vtkSMMessage *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSMSession") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMMessage") &&
      ap.GetVTKObject(temp3, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->OnStateChange(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSMUndoStackBuilder::OnStateChange(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_OnCreateObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnCreateObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  vtkSMSession *temp0 = NULL;
  vtkSMMessage *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSession") &&
      ap.GetVTKObject(temp1, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->OnCreateObject(temp0, temp1);
      }
    else
      {
      op->vtkSMUndoStackBuilder::OnCreateObject(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMUndoStackBuilder_Methods[] = {
  {(char*)"GetClassName", PyvtkSMUndoStackBuilder_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMUndoStackBuilder_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMUndoStackBuilder_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMUndoStackBuilder\nC++: vtkSMUndoStackBuilder *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMUndoStackBuilder_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMUndoStackBuilder\nC++: vtkSMUndoStackBuilder *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Begin", PyvtkSMUndoStackBuilder_Begin, METH_VARARGS,
   (char*)"V.Begin(string)\nC++: virtual void Begin(const char *label)\n\nBegins monitoring of the vtkSMProxyManager for undoable\noperations. All noted actions are converted to UndoElements and\ncollected. One vtkUndoElement is created per action. All undo\nelements become a part of a vtkUndoSet which is pushed on to the\nUndo Stack on PushToStack().label is a suggestion for the UndoSet\nthat will be built. If the UndoSet already has elements implying\nit hasn't been pushed to the stack then the label is ignored.\n"},
  {(char*)"End", PyvtkSMUndoStackBuilder_End, METH_VARARGS,
   (char*)"V.End()\nC++: virtual void End()\n\nStops monitoring of the vtkSMProxyManager for undoable\noperations. Any changes made to the proxy manager will not be\nconverted to UndoElements. This method does not push the\nvtkUndoSet of undo elements built. One must call PushToStack() to\npush the UndoSet to the Undo stack. Alternatively, one can use\nthe EndAndPushToStack() method which combines End() and\nPushToStack().\n"},
  {(char*)"EndAndPushToStack", PyvtkSMUndoStackBuilder_EndAndPushToStack, METH_VARARGS,
   (char*)"V.EndAndPushToStack()\nC++: void EndAndPushToStack()\n\nConvenience method call End(); PushToStack(); in that order.\n"},
  {(char*)"PushToStack", PyvtkSMUndoStackBuilder_PushToStack, METH_VARARGS,
   (char*)"V.PushToStack()\nC++: virtual void PushToStack()\n\nIf any undoable changes were recorded by the builder, this will\npush the vtkUndoSet formed on to the UndoStack. The UndoStack\nwhich the builder is building must be set by using\nSetUndoStack(). If the UndoSet is empty, it is not pushed on the\nstack. After pushing, the UndoSet is cleared so the builder is\nready to collect new modifications.\n"},
  {(char*)"Clear", PyvtkSMUndoStackBuilder_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: virtual void Clear()\n\nDiscard all recorded changes that haven't been pushed on the\nUndoStack.\n"},
  {(char*)"Add", PyvtkSMUndoStackBuilder_Add, METH_VARARGS,
   (char*)"V.Add(vtkUndoElement) -> bool\nC++: virtual bool Add(vtkUndoElement *element)\n\n"},
  {(char*)"GetUndoStack", PyvtkSMUndoStackBuilder_GetUndoStack, METH_VARARGS,
   (char*)"V.GetUndoStack() -> vtkSMUndoStack\nC++: vtkSMUndoStack *GetUndoStack()\n\nGet/Set the undo stack that this builder will build.\n"},
  {(char*)"SetUndoStack", PyvtkSMUndoStackBuilder_SetUndoStack, METH_VARARGS,
   (char*)"V.SetUndoStack(vtkSMUndoStack)\nC++: virtual void SetUndoStack(vtkSMUndoStack *)\n\nGet/Set the undo stack that this builder will build.\n"},
  {(char*)"SetIgnoreAllChanges", PyvtkSMUndoStackBuilder_SetIgnoreAllChanges, METH_VARARGS,
   (char*)"V.SetIgnoreAllChanges(bool)\nC++: void SetIgnoreAllChanges(bool a)\n\nIf IgnoreAllChanges is true, any server manager changes will be\nignored even if the changes happened within a Begin()-End() call.\nThis provides a mechanism for the application to perform\nnon-undoable operations irrespective of whether a undo set if\nbeing built. By default, it is set to false.\n"},
  {(char*)"GetIgnoreAllChanges", PyvtkSMUndoStackBuilder_GetIgnoreAllChanges, METH_VARARGS,
   (char*)"V.GetIgnoreAllChanges() -> bool\nC++: bool GetIgnoreAllChanges()\n\nIf IgnoreAllChanges is true, any server manager changes will be\nignored even if the changes happened within a Begin()-End() call.\nThis provides a mechanism for the application to perform\nnon-undoable operations irrespective of whether a undo set if\nbeing built. By default, it is set to false.\n"},
  {(char*)"OnStateChange", PyvtkSMUndoStackBuilder_OnStateChange, METH_VARARGS,
   (char*)"V.OnStateChange(vtkSMSession, int, vtkSMMessage, vtkSMMessage)\nC++: virtual void OnStateChange(vtkSMSession *session,\n    vtkTypeUInt32 globalId, const vtkSMMessage *previousState,\n    const vtkSMMessage *newState)\n\n"},
  {(char*)"OnCreateObject", PyvtkSMUndoStackBuilder_OnCreateObject, METH_VARARGS,
   (char*)"V.OnCreateObject(vtkSMSession, vtkSMMessage)\nC++: virtual void OnCreateObject(vtkSMSession *session,\n    vtkSMMessage *newState)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMUndoStackBuilder_StaticNew()
{
  return vtkSMUndoStackBuilder::New();
}

PyObject *PyVTKClass_vtkSMUndoStackBuilderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMUndoStackBuilder_StaticNew,
    PyvtkSMUndoStackBuilder_Methods,
    "vtkSMUndoStackBuilder", modulename,
    NULL, NULL,
    PyvtkSMUndoStackBuilder_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMUndoStackBuilder_Doc()
{
  static const char *docstring[] = {
    "vtkSMUndoStackBuilder - builds server manager undo sets and \n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMUndoStackBuilder records Server Manager changes that are\nundo/redo able and collects them. To begin recording such changes one\nmust call Begin(). To end recording use End(). One can have multiple\nblocks of Begin-End before pushing the changes on the Undo Stack. To\npush all collected changes onto the Undo Stack as a single undoable\nstep, use PushToStack(). Applications can subclass\nvtkSMUndoSt",
    "ackBuilder to record GUI related changes and add them to\nthe undo stack.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMUndoStackBuilder(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMUndoStackBuilderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMUndoStackBuilder", o) != 0)
    {
    Py_DECREF(o);
    }

}

