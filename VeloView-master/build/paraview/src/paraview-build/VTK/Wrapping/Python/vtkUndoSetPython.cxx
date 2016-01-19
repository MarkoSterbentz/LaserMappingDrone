// python wrapper for vtkUndoSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUndoSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUndoSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUndoSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkUndoSet_Doc();


static PyObject *
PyvtkUndoSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUndoSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUndoSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUndoSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUndoSet::NewInstance());

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
PyvtkUndoSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUndoSet *tempr = vtkUndoSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoSet_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Undo() :
      op->vtkUndoSet::Undo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoSet_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Redo() :
      op->vtkUndoSet::Redo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoSet_AddElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  vtkUndoElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUndoElement"))
    {
    int tempr = (ap.IsBound() ?
      op->AddElement(temp0) :
      op->vtkUndoSet::AddElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoSet_RemoveElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveElement(temp0);
      }
    else
      {
      op->vtkUndoSet::RemoveElement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUndoSet_GetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkUndoElement *tempr = (ap.IsBound() ?
      op->GetElement(temp0) :
      op->vtkUndoSet::GetElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndoSet_RemoveAllElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllElements();
      }
    else
      {
      op->vtkUndoSet::RemoveAllElements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUndoSet_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkUndoSet::GetNumberOfElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUndoSet_Methods[] = {
  {(char*)"GetClassName", PyvtkUndoSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUndoSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUndoSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUndoSet\nC++: vtkUndoSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUndoSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUndoSet\nC++: vtkUndoSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Undo", PyvtkUndoSet_Undo, METH_VARARGS,
   (char*)"V.Undo() -> int\nC++: virtual int Undo()\n\nPerform an Undo.\n"},
  {(char*)"Redo", PyvtkUndoSet_Redo, METH_VARARGS,
   (char*)"V.Redo() -> int\nC++: virtual int Redo()\n\nPerform a Redo.\n"},
  {(char*)"AddElement", PyvtkUndoSet_AddElement, METH_VARARGS,
   (char*)"V.AddElement(vtkUndoElement) -> int\nC++: int AddElement(vtkUndoElement *elem)\n\nAdd an element to this set. If the newly added element, elem, and\nthe most recently added element are both Mergeable, then an\nattempt is made to merge the new element with the previous one.\nOn successful merging, the new element is discarded, otherwise it\nis appended to the set.\n\\returns the index at which the element got added/merged.\n"},
  {(char*)"RemoveElement", PyvtkUndoSet_RemoveElement, METH_VARARGS,
   (char*)"V.RemoveElement(int)\nC++: void RemoveElement(int index)\n\nRemove an element at a particular index.\n"},
  {(char*)"GetElement", PyvtkUndoSet_GetElement, METH_VARARGS,
   (char*)"V.GetElement(int) -> vtkUndoElement\nC++: vtkUndoElement *GetElement(int index)\n\nGet an element at a particular index\n"},
  {(char*)"RemoveAllElements", PyvtkUndoSet_RemoveAllElements, METH_VARARGS,
   (char*)"V.RemoveAllElements()\nC++: void RemoveAllElements()\n\nRemove all elemments.\n"},
  {(char*)"GetNumberOfElements", PyvtkUndoSet_GetNumberOfElements, METH_VARARGS,
   (char*)"V.GetNumberOfElements() -> int\nC++: int GetNumberOfElements()\n\nGet number of elements in the set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUndoSet_StaticNew()
{
  return vtkUndoSet::New();
}

PyObject *PyVTKClass_vtkUndoSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUndoSet_StaticNew,
    PyvtkUndoSet_Methods,
    "vtkUndoSet", modulename,
    NULL, NULL,
    PyvtkUndoSet_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkUndoSet_Doc()
{
  static const char *docstring[] = {
    "vtkUndoSet - Maintains a collection of vtkUndoElement that can be\n\n",
    "Superclass: vtkObject\n\n",
    "This is a concrete class that stores a collection of vtkUndoElement\nobjects. A vtkUndoSet object represents an atomic undo-redoable\noperation. It can contain one or more vtkUndoElement objects. When\nadded vtkUndoElement objects to a vtkUndoSet they must be added in\nthe sequence of operation. When undoing the operations are performed\nin reverse order, while when redoing they are performed in forwar",
    "d\norder.\n\nvtkUndoElement, vtkUndoSet and vtkUndoStack form the undo/redo\nframework core.\n\nSee Also:\n\nvtkUndoStack vtkUndoElement\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUndoSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUndoSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUndoSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

