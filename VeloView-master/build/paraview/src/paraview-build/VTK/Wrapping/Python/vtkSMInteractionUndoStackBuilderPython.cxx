// python wrapper for vtkSMInteractionUndoStackBuilder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMInteractionUndoStackBuilder.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMInteractionUndoStackBuilder(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMInteractionUndoStackBuilderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMInteractionUndoStackBuilder_Doc();


static PyObject *
PyvtkSMInteractionUndoStackBuilder_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMInteractionUndoStackBuilder::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMInteractionUndoStackBuilder::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMInteractionUndoStackBuilder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMInteractionUndoStackBuilder::NewInstance());

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
PyvtkSMInteractionUndoStackBuilder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMInteractionUndoStackBuilder *tempr = vtkSMInteractionUndoStackBuilder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_SetRenderView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  vtkSMRenderViewProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMRenderViewProxy"))
    {
    if (ap.IsBound())
      {
      op->SetRenderView(temp0);
      }
    else
      {
      op->vtkSMInteractionUndoStackBuilder::SetRenderView(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_GetRenderView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMRenderViewProxy *tempr = (ap.IsBound() ?
      op->GetRenderView() :
      op->vtkSMInteractionUndoStackBuilder::GetRenderView());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_GetUndoStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUndoStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMUndoStack *tempr = (ap.IsBound() ?
      op->GetUndoStack() :
      op->vtkSMInteractionUndoStackBuilder::GetUndoStack());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_SetUndoStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndoStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

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
      op->vtkSMInteractionUndoStackBuilder::SetUndoStack(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSMInteractionUndoStackBuilder::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_StartInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartInteraction();
      }
    else
      {
      op->vtkSMInteractionUndoStackBuilder::StartInteraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_EndInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndInteraction();
      }
    else
      {
      op->vtkSMInteractionUndoStackBuilder::EndInteraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMInteractionUndoStackBuilder_Methods[] = {
  {(char*)"GetClassName", PyvtkSMInteractionUndoStackBuilder_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMInteractionUndoStackBuilder_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMInteractionUndoStackBuilder_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMInteractionUndoStackBuilder\nC++: vtkSMInteractionUndoStackBuilder *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMInteractionUndoStackBuilder_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMInteractionUndoStackBuilder\nC++: vtkSMInteractionUndoStackBuilder *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRenderView", PyvtkSMInteractionUndoStackBuilder_SetRenderView, METH_VARARGS,
   (char*)"V.SetRenderView(vtkSMRenderViewProxy)\nC++: void SetRenderView(vtkSMRenderViewProxy *)\n\nGet/Set the render view proxy for which we are monitoring the\ninteractions.\n"},
  {(char*)"GetRenderView", PyvtkSMInteractionUndoStackBuilder_GetRenderView, METH_VARARGS,
   (char*)"V.GetRenderView() -> vtkSMRenderViewProxy\nC++: vtkSMRenderViewProxy *GetRenderView()\n\nGet/Set the render view proxy for which we are monitoring the\ninteractions.\n"},
  {(char*)"GetUndoStack", PyvtkSMInteractionUndoStackBuilder_GetUndoStack, METH_VARARGS,
   (char*)"V.GetUndoStack() -> vtkSMUndoStack\nC++: vtkSMUndoStack *GetUndoStack()\n\nGet/Set the undo stack that this builder will build.\n"},
  {(char*)"SetUndoStack", PyvtkSMInteractionUndoStackBuilder_SetUndoStack, METH_VARARGS,
   (char*)"V.SetUndoStack(vtkSMUndoStack)\nC++: virtual void SetUndoStack(vtkSMUndoStack *)\n\nGet/Set the undo stack that this builder will build.\n"},
  {(char*)"Clear", PyvtkSMInteractionUndoStackBuilder_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nClear the undo set currently being recorded.\n"},
  {(char*)"StartInteraction", PyvtkSMInteractionUndoStackBuilder_StartInteraction, METH_VARARGS,
   (char*)"V.StartInteraction()\nC++: void StartInteraction()\n\nCalled to record the state at the beginning of an interaction.\nUsually, this method isn't called directly, since the builder\nlistens to interaction events on the interactor and calls it\nautomatically. May be used when changing the camera\nprogramatically.\n"},
  {(char*)"EndInteraction", PyvtkSMInteractionUndoStackBuilder_EndInteraction, METH_VARARGS,
   (char*)"V.EndInteraction()\nC++: void EndInteraction()\n\nCalled to record the state at the end of an interaction and push\nit on the stack. Usually, this method isn't called directly,\nsince the builder listens to interaction events on the interactor\nand calls it automatically. May be used when changing the camera\nprogramatically.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMInteractionUndoStackBuilder_StaticNew()
{
  return vtkSMInteractionUndoStackBuilder::New();
}

PyObject *PyVTKClass_vtkSMInteractionUndoStackBuilderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMInteractionUndoStackBuilder_StaticNew,
    PyvtkSMInteractionUndoStackBuilder_Methods,
    "vtkSMInteractionUndoStackBuilder", modulename,
    NULL, NULL,
    PyvtkSMInteractionUndoStackBuilder_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMInteractionUndoStackBuilder_Doc()
{
  static const char *docstring[] = {
    "vtkSMInteractionUndoStackBuilder - builder server manager undo\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMInteractionUndoStackBuilder specializes in interaction. This\nclass can create undo elements for only one render view at a time.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMInteractionUndoStackBuilder(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMInteractionUndoStackBuilderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMInteractionUndoStackBuilder", o) != 0)
    {
    Py_DECREF(o);
    }

}

