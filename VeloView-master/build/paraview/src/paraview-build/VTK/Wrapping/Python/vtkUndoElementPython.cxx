// python wrapper for vtkUndoElement
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUndoElement.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUndoElement(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUndoElementNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkUndoElement_Doc();


static PyObject *
PyvtkUndoElement_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoElement *op = static_cast<vtkUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUndoElement::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoElement *op = static_cast<vtkUndoElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUndoElement::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoElement *op = static_cast<vtkUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUndoElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUndoElement::NewInstance());

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
PyvtkUndoElement_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUndoElement *tempr = vtkUndoElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoElement_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoElement *op = static_cast<vtkUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->Undo();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoElement_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoElement *op = static_cast<vtkUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->Redo();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoElement_GetMergeable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoElement *op = static_cast<vtkUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetMergeable() :
      op->vtkUndoElement::GetMergeable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoElement_Merge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Merge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoElement *op = static_cast<vtkUndoElement *>(vp);

  vtkUndoElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUndoElement"))
    {
    bool tempr = (ap.IsBound() ?
      op->Merge(temp0) :
      op->vtkUndoElement::Merge(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoElement_SetUndoSetWorkingContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndoSetWorkingContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoElement *op = static_cast<vtkUndoElement *>(vp);

  vtkCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->SetUndoSetWorkingContext(temp0);
      }
    else
      {
      op->vtkUndoElement::SetUndoSetWorkingContext(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUndoElement_Methods[] = {
  {(char*)"GetClassName", PyvtkUndoElement_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUndoElement_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUndoElement_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUndoElement\nC++: vtkUndoElement *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUndoElement_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUndoElement\nC++: vtkUndoElement *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Undo", PyvtkUndoElement_Undo, METH_VARARGS,
   (char*)"V.Undo() -> int\nC++: virtual int Undo()\n\nUndo the operation encapsulated by this element.\n\\return the status of the operation, 1 on success, 0 otherwise.\n"},
  {(char*)"Redo", PyvtkUndoElement_Redo, METH_VARARGS,
   (char*)"V.Redo() -> int\nC++: virtual int Redo()\n\nRedo the operation encaspsulated by this element.\n\\return the status of the operation, 1 on success, 0 otherwise.\n"},
  {(char*)"GetMergeable", PyvtkUndoElement_GetMergeable, METH_VARARGS,
   (char*)"V.GetMergeable() -> bool\nC++: bool GetMergeable()\n\nReturns if this undo element can be merged with other undo\nelements. When an undo element is added to a vtkUndoSet unsing\nAddElement, an attempt is made to \"merge\" the element with the\nmost recently added undo element, if any, if both the undo\nelements are mergeable.\n"},
  {(char*)"Merge", PyvtkUndoElement_Merge, METH_VARARGS,
   (char*)"V.Merge(vtkUndoElement) -> bool\nC++: virtual bool Merge(vtkUndoElement *new_element)\n\nCalled on the older element in the UndoSet to merge with the\nelement being added if  both the elements are mergeable. Returns\nif the merge was successful. Default implementation doesn't do\nanything.\n"},
  {(char*)"SetUndoSetWorkingContext", PyvtkUndoElement_SetUndoSetWorkingContext, METH_VARARGS,
   (char*)"V.SetUndoSetWorkingContext(vtkCollection)\nC++: virtual void SetUndoSetWorkingContext(vtkCollection *workCTX)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkUndoElementNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkUndoElement_Methods,
    "vtkUndoElement", modulename,
    NULL, NULL,
    PyvtkUndoElement_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkUndoElement_Doc()
{
  static const char *docstring[] = {
    "vtkUndoElement - unit undo-redo-able operation.\n\n",
    "Superclass: vtkObject\n\n",
    "This is an abstract class that defines the API for an undo-redo-able\noperation. One or more vtkUndoElement objects can define a single\nundo-redo step. Every concrete implementation of this class must know\nhow to undo as well as redo the operation, and save and load the\nstate as an XML.\n\nvtkUndoElement, vtkUndoSet and vtkUndoStack form the undo/redo\nframework core.\n\nSee Also:\n\nvtkUndoStack vtkUndoS",
    "et\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUndoElement(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUndoElementNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUndoElement", o) != 0)
    {
    Py_DECREF(o);
    }

}

