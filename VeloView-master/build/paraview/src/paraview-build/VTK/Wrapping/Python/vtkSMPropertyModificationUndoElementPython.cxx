// python wrapper for vtkSMPropertyModificationUndoElement
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMPropertyModificationUndoElement.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMPropertyModificationUndoElement(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMPropertyModificationUndoElementNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMUndoElementNew
extern "C" { PyObject *PyVTKClass_vtkSMUndoElementNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMUndoElementNew
#endif

static const char **PyvtkSMPropertyModificationUndoElement_Doc();


static PyObject *
PyvtkSMPropertyModificationUndoElement_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyModificationUndoElement *op = static_cast<vtkSMPropertyModificationUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMPropertyModificationUndoElement::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyModificationUndoElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyModificationUndoElement *op = static_cast<vtkSMPropertyModificationUndoElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPropertyModificationUndoElement::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyModificationUndoElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyModificationUndoElement *op = static_cast<vtkSMPropertyModificationUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMPropertyModificationUndoElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPropertyModificationUndoElement::NewInstance());

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
PyvtkSMPropertyModificationUndoElement_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMPropertyModificationUndoElement *tempr = vtkSMPropertyModificationUndoElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyModificationUndoElement_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyModificationUndoElement *op = static_cast<vtkSMPropertyModificationUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Undo() :
      op->vtkSMPropertyModificationUndoElement::Undo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyModificationUndoElement_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyModificationUndoElement *op = static_cast<vtkSMPropertyModificationUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Redo() :
      op->vtkSMPropertyModificationUndoElement::Redo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyModificationUndoElement_ModifiedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ModifiedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyModificationUndoElement *op = static_cast<vtkSMPropertyModificationUndoElement *>(vp);

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ModifiedProperty(temp0, temp1);
      }
    else
      {
      op->vtkSMPropertyModificationUndoElement::ModifiedProperty(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyModificationUndoElement_Merge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Merge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyModificationUndoElement *op = static_cast<vtkSMPropertyModificationUndoElement *>(vp);

  vtkUndoElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUndoElement"))
    {
    bool tempr = (ap.IsBound() ?
      op->Merge(temp0) :
      op->vtkSMPropertyModificationUndoElement::Merge(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMPropertyModificationUndoElement_Methods[] = {
  {(char*)"GetClassName", PyvtkSMPropertyModificationUndoElement_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMPropertyModificationUndoElement_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMPropertyModificationUndoElement_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMPropertyModificationUndoElement\nC++: vtkSMPropertyModificationUndoElement *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMPropertyModificationUndoElement_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMPropertyModificationUndoElement\nC++: vtkSMPropertyModificationUndoElement *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"Undo", PyvtkSMPropertyModificationUndoElement_Undo, METH_VARARGS,
   (char*)"V.Undo() -> int\nC++: virtual int Undo()\n\nUndo the operation encapsulated by this element.\n"},
  {(char*)"Redo", PyvtkSMPropertyModificationUndoElement_Redo, METH_VARARGS,
   (char*)"V.Redo() -> int\nC++: virtual int Redo()\n\nRedo the operation encaspsulated by this element.\n"},
  {(char*)"ModifiedProperty", PyvtkSMPropertyModificationUndoElement_ModifiedProperty, METH_VARARGS,
   (char*)"V.ModifiedProperty(vtkSMProxy, string)\nC++: void ModifiedProperty(vtkSMProxy *proxy,\n    const char *propertyname)\n\nSet the property/proxy that was modified.\n"},
  {(char*)"Merge", PyvtkSMPropertyModificationUndoElement_Merge, METH_VARARGS,
   (char*)"V.Merge(vtkUndoElement) -> bool\nC++: virtual bool Merge(vtkUndoElement *new_element)\n\nCalled on the older element in the UndoSet to merge with the\nelement being added if  both the elements are mergeable.\nvtkSMPropertyModificationUndoElement is mergeable with\nvtkSMPropertyModificationUndoElement alone if both represent\nchange to the same property. Returns if the merge was successful.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMPropertyModificationUndoElement_StaticNew()
{
  return vtkSMPropertyModificationUndoElement::New();
}

PyObject *PyVTKClass_vtkSMPropertyModificationUndoElementNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMPropertyModificationUndoElement_StaticNew,
    PyvtkSMPropertyModificationUndoElement_Methods,
    "vtkSMPropertyModificationUndoElement", modulename,
    NULL, NULL,
    PyvtkSMPropertyModificationUndoElement_Doc(),
    PyVTKClass_vtkSMUndoElementNew(modulename));
  return cls;
}

const char **PyvtkSMPropertyModificationUndoElement_Doc()
{
  static const char *docstring[] = {
    "vtkSMPropertyModificationUndoElement\n\n",
    "Superclass: vtkSMUndoElement\n\n",
    "This is the concrete implementation for the Undo element for a\nproperty modification event. The undo action sets the property to the\nvalue that was pushed on to the server previous to the modification.\nThe redo action sets the property to the modified value.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMPropertyModificationUndoElement(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMPropertyModificationUndoElementNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMPropertyModificationUndoElement", o) != 0)
    {
    Py_DECREF(o);
    }

}

