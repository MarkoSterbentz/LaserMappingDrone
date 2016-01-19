// python wrapper for vtkUndoStack
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUndoStack.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUndoStack(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUndoStackNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkUndoStack_Doc();

#ifndef DECLARED_PyvtkUndoStack_EventIds_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkUndoStack_EventIds_Type;
#define DECLARED_PyvtkUndoStack_EventIds_Type
#endif

PyTypeObject PyvtkUndoStack_EventIds_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"EventIds", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkUndoStack_EventIds_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkUndoStack_EventIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkUndoStack_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUndoStack::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUndoStack::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUndoStack *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUndoStack::NewInstance());

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
PyvtkUndoStack_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUndoStack *tempr = vtkUndoStack::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  char *temp0 = NULL;
  vtkUndoSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUndoSet"))
    {
    if (ap.IsBound())
      {
      op->Push(temp0, temp1);
      }
    else
      {
      op->vtkUndoStack::Push(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_GetUndoSetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUndoSetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetUndoSetLabel(temp0) :
      op->vtkUndoStack::GetUndoSetLabel(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_GetRedoSetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedoSetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetRedoSetLabel(temp0) :
      op->vtkUndoStack::GetRedoSetLabel(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_GetNumberOfUndoSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUndoSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfUndoSets() :
      op->vtkUndoStack::GetNumberOfUndoSets());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_GetNumberOfRedoSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRedoSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfRedoSets() :
      op->vtkUndoStack::GetNumberOfRedoSets());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_CanUndo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanUndo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->CanUndo() :
      op->vtkUndoStack::CanUndo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_CanRedo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanRedo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->CanRedo() :
      op->vtkUndoStack::CanRedo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_GetNextUndoSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextUndoSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUndoSet *tempr = (ap.IsBound() ?
      op->GetNextUndoSet() :
      op->vtkUndoStack::GetNextUndoSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_GetNextRedoSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextRedoSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUndoSet *tempr = (ap.IsBound() ?
      op->GetNextRedoSet() :
      op->vtkUndoStack::GetNextRedoSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Undo() :
      op->vtkUndoStack::Undo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Redo() :
      op->vtkUndoStack::Redo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_PopUndoStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopUndoStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PopUndoStack();
      }
    else
      {
      op->vtkUndoStack::PopUndoStack();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_PopRedoStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopRedoStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PopRedoStack();
      }
    else
      {
      op->vtkUndoStack::PopRedoStack();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkUndoStack::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_GetInUndo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInUndo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetInUndo() :
      op->vtkUndoStack::GetInUndo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_GetInRedo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInRedo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetInRedo() :
      op->vtkUndoStack::GetInRedo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_SetStackDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStackDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStackDepth(temp0);
      }
    else
      {
      op->vtkUndoStack::SetStackDepth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_GetStackDepthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStackDepthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStackDepthMinValue() :
      op->vtkUndoStack::GetStackDepthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_GetStackDepthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStackDepthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStackDepthMaxValue() :
      op->vtkUndoStack::GetStackDepthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoStack_GetStackDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStackDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStackDepth() :
      op->vtkUndoStack::GetStackDepth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUndoStack_Methods[] = {
  {(char*)"GetClassName", PyvtkUndoStack_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUndoStack_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUndoStack_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUndoStack\nC++: vtkUndoStack *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUndoStack_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUndoStack\nC++: vtkUndoStack *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Push", PyvtkUndoStack_Push, METH_VARARGS,
   (char*)"V.Push(string, vtkUndoSet)\nC++: virtual void Push(const char *label, vtkUndoSet *changeSet)\n\nPush an undo set on the Undo stack. This will clear any sets in\nthe Redo stack.\n"},
  {(char*)"GetUndoSetLabel", PyvtkUndoStack_GetUndoSetLabel, METH_VARARGS,
   (char*)"V.GetUndoSetLabel(int) -> string\nC++: const char *GetUndoSetLabel(unsigned int position)\n\nReturns the label for the set at the given Undo position. 0 is\nthe current undo set, 1 is the one preceding to the current one\nand so on.\n\\returns NULL is no set exists at the given index, otherwise the\n    label\nfor the change set.\n"},
  {(char*)"GetRedoSetLabel", PyvtkUndoStack_GetRedoSetLabel, METH_VARARGS,
   (char*)"V.GetRedoSetLabel(int) -> string\nC++: const char *GetRedoSetLabel(unsigned int position)\n\nReturns the label for the set at the given Redo position. 0 is\nthe next set to redo, 1 is the one after the next one and so on.\n\\returns NULL is no set exists at the given index, otherwise the\n    label\nfor the change set.\n"},
  {(char*)"GetNumberOfUndoSets", PyvtkUndoStack_GetNumberOfUndoSets, METH_VARARGS,
   (char*)"V.GetNumberOfUndoSets() -> int\nC++: unsigned int GetNumberOfUndoSets()\n\nReturns the number of sets on the undo stack.\n"},
  {(char*)"GetNumberOfRedoSets", PyvtkUndoStack_GetNumberOfRedoSets, METH_VARARGS,
   (char*)"V.GetNumberOfRedoSets() -> int\nC++: unsigned int GetNumberOfRedoSets()\n\nReturns the number of sets on the undo stack.\n"},
  {(char*)"CanUndo", PyvtkUndoStack_CanUndo, METH_VARARGS,
   (char*)"V.CanUndo() -> int\nC++: int CanUndo()\n\nReturns if undo operation can be performed.\n"},
  {(char*)"CanRedo", PyvtkUndoStack_CanRedo, METH_VARARGS,
   (char*)"V.CanRedo() -> int\nC++: int CanRedo()\n\nReturns if redo operation can be performed.\n"},
  {(char*)"GetNextUndoSet", PyvtkUndoStack_GetNextUndoSet, METH_VARARGS,
   (char*)"V.GetNextUndoSet() -> vtkUndoSet\nC++: virtual vtkUndoSet *GetNextUndoSet()\n\nGet the UndoSet on the top of the Undo stack, if any.\n"},
  {(char*)"GetNextRedoSet", PyvtkUndoStack_GetNextRedoSet, METH_VARARGS,
   (char*)"V.GetNextRedoSet() -> vtkUndoSet\nC++: virtual vtkUndoSet *GetNextRedoSet()\n\nGet the UndoSet on the top of the Redo stack, if any.\n"},
  {(char*)"Undo", PyvtkUndoStack_Undo, METH_VARARGS,
   (char*)"V.Undo() -> int\nC++: virtual int Undo()\n\nPerforms an Undo using the set on the top of the undo stack. The\nset is poped from the undo stack and pushed at the top of the\nredo stack. Before undo begins, it fires vtkCommand::StartEvent\nand when undo completes, it fires vtkCommand::EndEvent.\n\\returns the status of the operation.\n"},
  {(char*)"Redo", PyvtkUndoStack_Redo, METH_VARARGS,
   (char*)"V.Redo() -> int\nC++: virtual int Redo()\n\nPerforms a Redo using the set on the top of the redo stack. The\nset is poped from the redo stack and pushed at the top of the\nundo stack. Before redo begins, it fires vtkCommand::StartEvent\nand when redo completes, it fires vtkCommand::EndEvent.\n\\returns the status of the operation.\n"},
  {(char*)"PopUndoStack", PyvtkUndoStack_PopUndoStack, METH_VARARGS,
   (char*)"V.PopUndoStack()\nC++: void PopUndoStack()\n\nPop the undo stack. The UndoElement on the top of the undo stack\nis popped from the undo stack and pushed on the redo stack. This\nis same as Undo() except that the vtkUndoElement::Undo() is not\ninvoked.\n"},
  {(char*)"PopRedoStack", PyvtkUndoStack_PopRedoStack, METH_VARARGS,
   (char*)"V.PopRedoStack()\nC++: void PopRedoStack()\n\nPop the redo stack. The UndoElement on the top of the redo stack\nis popped and then pushed on the undo stack. This is same as\nRedo() except that vtkUndoElement::Redo() is not invoked.\n"},
  {(char*)"Clear", PyvtkUndoStack_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nClears all the undo/redo elements from the stack.\n"},
  {(char*)"GetInUndo", PyvtkUndoStack_GetInUndo, METH_VARARGS,
   (char*)"V.GetInUndo() -> bool\nC++: bool GetInUndo()\n\nReturns if the stack is currently being undone.\n"},
  {(char*)"GetInRedo", PyvtkUndoStack_GetInRedo, METH_VARARGS,
   (char*)"V.GetInRedo() -> bool\nC++: bool GetInRedo()\n\nReturns if the stack is currently being redone.\n"},
  {(char*)"SetStackDepth", PyvtkUndoStack_SetStackDepth, METH_VARARGS,
   (char*)"V.SetStackDepth(int)\nC++: void SetStackDepth(int)\n\nGet set the maximum stack depth. As more entries are pushed on\nthe stack, if its size exceeds this limit then old entries will\nbe removed. Default is 10.\n"},
  {(char*)"GetStackDepthMinValue", PyvtkUndoStack_GetStackDepthMinValue, METH_VARARGS,
   (char*)"V.GetStackDepthMinValue() -> int\nC++: int GetStackDepthMinValue()\n\nGet set the maximum stack depth. As more entries are pushed on\nthe stack, if its size exceeds this limit then old entries will\nbe removed. Default is 10.\n"},
  {(char*)"GetStackDepthMaxValue", PyvtkUndoStack_GetStackDepthMaxValue, METH_VARARGS,
   (char*)"V.GetStackDepthMaxValue() -> int\nC++: int GetStackDepthMaxValue()\n\nGet set the maximum stack depth. As more entries are pushed on\nthe stack, if its size exceeds this limit then old entries will\nbe removed. Default is 10.\n"},
  {(char*)"GetStackDepth", PyvtkUndoStack_GetStackDepth, METH_VARARGS,
   (char*)"V.GetStackDepth() -> int\nC++: int GetStackDepth()\n\nGet set the maximum stack depth. As more entries are pushed on\nthe stack, if its size exceeds this limit then old entries will\nbe removed. Default is 10.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUndoStack_StaticNew()
{
  return vtkUndoStack::New();
}

PyObject *PyVTKClass_vtkUndoStackNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUndoStack_StaticNew,
    PyvtkUndoStack_Methods,
    "vtkUndoStack", modulename,
    NULL, NULL,
    PyvtkUndoStack_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkUndoStack_EventIds_Type);
    PyvtkUndoStack_EventIds_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkUndoStack_EventIds_Type;
    if (o && PyDict_SetItemString(d, (char *)"EventIds", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkUndoStack::EventIds cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "UndoSetRemovedEvent", vtkUndoStack::UndoSetRemovedEvent },
          { "UndoSetClearedEvent", vtkUndoStack::UndoSetClearedEvent },
        };

      o = PyvtkUndoStack_EventIds_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkUndoStack_Doc()
{
  static const char *docstring[] = {
    "vtkUndoStack - undo/redo stack.\n\n",
    "Superclass: vtkObject\n\n",
    "This an undo stack. Each undo/redo-able operation is a vtkUndoSet\nobject. This class fires a vtkCommand::ModifiedEvent when  the\nundo/redo stack changes.\n\nOn Undo, vtkUndoSet::Undo is called on the vtkUndoSet at the top of\nthe undo stack and the set is pushed onto the top of the redo stack.\nOn Redo, vtkUndoSet::Redo is called on the vtkUndoSet at the top of\nthe redo stack and the set is pushed ont",
    "o the top of the undo stack.\nWhen a vtkUndoSet is pushed on the undo stack, the redo stack is\ncleared.\n\nEach undo set are assigned user-readable labels providing information\nabout the operation(s) that will be undone/redone.\n\nvtkUndoElement, vtkUndoSet and vtkUndoStack form the undo/redo\nframework core.\n\nSee Also:\n\nvtkUndoSet vtkUndoElement\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUndoStack(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUndoStackNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUndoStack", o) != 0)
    {
    Py_DECREF(o);
    }

}

