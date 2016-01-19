// python wrapper for vtkSMGlobalPropertiesLinkUndoElement
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMGlobalPropertiesLinkUndoElement.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMGlobalPropertiesLinkUndoElement(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMGlobalPropertiesLinkUndoElementNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMUndoElementNew
extern "C" { PyObject *PyVTKClass_vtkSMUndoElementNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMUndoElementNew
#endif

static const char **PyvtkSMGlobalPropertiesLinkUndoElement_Doc();


static PyObject *
PyvtkSMGlobalPropertiesLinkUndoElement_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesLinkUndoElement *op = static_cast<vtkSMGlobalPropertiesLinkUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMGlobalPropertiesLinkUndoElement::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesLinkUndoElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesLinkUndoElement *op = static_cast<vtkSMGlobalPropertiesLinkUndoElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMGlobalPropertiesLinkUndoElement::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesLinkUndoElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesLinkUndoElement *op = static_cast<vtkSMGlobalPropertiesLinkUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMGlobalPropertiesLinkUndoElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMGlobalPropertiesLinkUndoElement::NewInstance());

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
PyvtkSMGlobalPropertiesLinkUndoElement_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMGlobalPropertiesLinkUndoElement *tempr = vtkSMGlobalPropertiesLinkUndoElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesLinkUndoElement_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesLinkUndoElement *op = static_cast<vtkSMGlobalPropertiesLinkUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Undo() :
      op->vtkSMGlobalPropertiesLinkUndoElement::Undo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesLinkUndoElement_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesLinkUndoElement *op = static_cast<vtkSMGlobalPropertiesLinkUndoElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Redo() :
      op->vtkSMGlobalPropertiesLinkUndoElement::Redo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesLinkUndoElement_SetLinkState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinkState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesLinkUndoElement *op = static_cast<vtkSMGlobalPropertiesLinkUndoElement *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkSMProxy *temp2 = NULL;
  char *temp3 = NULL;
  bool temp4 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMProxy") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetLinkState(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkSMGlobalPropertiesLinkUndoElement::SetLinkState(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMGlobalPropertiesLinkUndoElement_Methods[] = {
  {(char*)"GetClassName", PyvtkSMGlobalPropertiesLinkUndoElement_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMGlobalPropertiesLinkUndoElement_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMGlobalPropertiesLinkUndoElement_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMGlobalPropertiesLinkUndoElement\nC++: vtkSMGlobalPropertiesLinkUndoElement *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMGlobalPropertiesLinkUndoElement_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMGlobalPropertiesLinkUndoElement\nC++: vtkSMGlobalPropertiesLinkUndoElement *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"Undo", PyvtkSMGlobalPropertiesLinkUndoElement_Undo, METH_VARARGS,
   (char*)"V.Undo() -> int\nC++: virtual int Undo()\n\nUndo the operation encapsulated by this element.\n"},
  {(char*)"Redo", PyvtkSMGlobalPropertiesLinkUndoElement_Redo, METH_VARARGS,
   (char*)"V.Redo() -> int\nC++: virtual int Redo()\n\nRedo the operation encaspsulated by this element.\n"},
  {(char*)"SetLinkState", PyvtkSMGlobalPropertiesLinkUndoElement_SetLinkState, METH_VARARGS,
   (char*)"V.SetLinkState(string, string, vtkSMProxy, string, bool)\nC++: void SetLinkState(const char *mgrname,\n    const char *globalpropname, vtkSMProxy *proxy,\n    const char *propname, bool isAddAction)\n\nProvide the informations needed to restore the previous state\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMGlobalPropertiesLinkUndoElement_StaticNew()
{
  return vtkSMGlobalPropertiesLinkUndoElement::New();
}

PyObject *PyVTKClass_vtkSMGlobalPropertiesLinkUndoElementNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMGlobalPropertiesLinkUndoElement_StaticNew,
    PyvtkSMGlobalPropertiesLinkUndoElement_Methods,
    "vtkSMGlobalPropertiesLinkUndoElement", modulename,
    NULL, NULL,
    PyvtkSMGlobalPropertiesLinkUndoElement_Doc(),
    PyVTKClass_vtkSMUndoElementNew(modulename));
  return cls;
}

const char **PyvtkSMGlobalPropertiesLinkUndoElement_Doc()
{
  static const char *docstring[] = {
    "vtkSMGlobalPropertiesLinkUndoElement\n\n",
    "Superclass: vtkSMUndoElement\n\n",
    "This UndoElement is used to link or unlink GlobalPropertyManager\nproperty to a property of an arbitrary Proxy. This class is\nautomatically build inside the vtkSMProxyManager when\nGlobalPropertyLinks are changed. FIXME: This class is currrently\nnon-functional. I need to re-energize this class. It's falling down\nthe priority chain for now.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMGlobalPropertiesLinkUndoElement(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMGlobalPropertiesLinkUndoElementNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMGlobalPropertiesLinkUndoElement", o) != 0)
    {
    Py_DECREF(o);
    }

}

