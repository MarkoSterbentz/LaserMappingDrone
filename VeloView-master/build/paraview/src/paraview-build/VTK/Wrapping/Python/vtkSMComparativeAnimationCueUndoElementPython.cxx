// python wrapper for vtkSMComparativeAnimationCueUndoElement
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMComparativeAnimationCueUndoElement.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMComparativeAnimationCueUndoElement(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMComparativeAnimationCueUndoElementNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMUndoElementNew
extern "C" { PyObject *PyVTKClass_vtkSMUndoElementNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMUndoElementNew
#endif

static const char **PyvtkSMComparativeAnimationCueUndoElement_Doc();


static PyObject *
PyvtkSMComparativeAnimationCueUndoElement_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueUndoElement *op = static_cast<vtkSMComparativeAnimationCueUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMComparativeAnimationCueUndoElement::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueUndoElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueUndoElement *op = static_cast<vtkSMComparativeAnimationCueUndoElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMComparativeAnimationCueUndoElement::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueUndoElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueUndoElement *op = static_cast<vtkSMComparativeAnimationCueUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMComparativeAnimationCueUndoElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMComparativeAnimationCueUndoElement::NewInstance());

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
PyvtkSMComparativeAnimationCueUndoElement_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMComparativeAnimationCueUndoElement *tempr = vtkSMComparativeAnimationCueUndoElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueUndoElement_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueUndoElement *op = static_cast<vtkSMComparativeAnimationCueUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Undo() :
      op->vtkSMComparativeAnimationCueUndoElement::Undo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueUndoElement_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueUndoElement *op = static_cast<vtkSMComparativeAnimationCueUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Redo() :
      op->vtkSMComparativeAnimationCueUndoElement::Redo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueUndoElement_SetXMLStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMLStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueUndoElement *op = static_cast<vtkSMComparativeAnimationCueUndoElement *>(vp);

  unsigned int temp0;
  vtkPVXMLElement *temp1 = NULL;
  vtkPVXMLElement *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp2, "vtkPVXMLElement"))
    {
    if (ap.IsBound())
      {
      op->SetXMLStates(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMComparativeAnimationCueUndoElement::SetXMLStates(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMComparativeAnimationCueUndoElement_Methods[] = {
  {(char*)"GetClassName", PyvtkSMComparativeAnimationCueUndoElement_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMComparativeAnimationCueUndoElement_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMComparativeAnimationCueUndoElement_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMComparativeAnimationCueUndoElement\nC++: vtkSMComparativeAnimationCueUndoElement *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMComparativeAnimationCueUndoElement_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkSMComparativeAnimationCueUndoElement\nC++: vtkSMComparativeAnimationCueUndoElement *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"Undo", PyvtkSMComparativeAnimationCueUndoElement_Undo, METH_VARARGS,
   (char*)"V.Undo() -> int\nC++: virtual int Undo()\n\n"},
  {(char*)"Redo", PyvtkSMComparativeAnimationCueUndoElement_Redo, METH_VARARGS,
   (char*)"V.Redo() -> int\nC++: virtual int Redo()\n\n"},
  {(char*)"SetXMLStates", PyvtkSMComparativeAnimationCueUndoElement_SetXMLStates, METH_VARARGS,
   (char*)"V.SetXMLStates(int, vtkPVXMLElement, vtkPVXMLElement)\nC++: void SetXMLStates(vtkTypeUInt32 id, vtkPVXMLElement *before,\n    vtkPVXMLElement *after)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMComparativeAnimationCueUndoElement_StaticNew()
{
  return vtkSMComparativeAnimationCueUndoElement::New();
}

PyObject *PyVTKClass_vtkSMComparativeAnimationCueUndoElementNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMComparativeAnimationCueUndoElement_StaticNew,
    PyvtkSMComparativeAnimationCueUndoElement_Methods,
    "vtkSMComparativeAnimationCueUndoElement", modulename,
    NULL, NULL,
    PyvtkSMComparativeAnimationCueUndoElement_Doc(),
    PyVTKClass_vtkSMUndoElementNew(modulename));
  return cls;
}

const char **PyvtkSMComparativeAnimationCueUndoElement_Doc()
{
  static const char *docstring[] = {
    "vtkSMComparativeAnimationCueUndoElement - UndoElement for\nComparativeAnimationCue\n\n",
    "Superclass: vtkSMUndoElement\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMComparativeAnimationCueUndoElement(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMComparativeAnimationCueUndoElementNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMComparativeAnimationCueUndoElement", o) != 0)
    {
    Py_DECREF(o);
    }

}

