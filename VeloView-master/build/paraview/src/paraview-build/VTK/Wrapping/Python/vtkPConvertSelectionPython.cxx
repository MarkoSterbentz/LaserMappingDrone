// python wrapper for vtkPConvertSelection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPConvertSelection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPConvertSelection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPConvertSelectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkConvertSelectionNew
extern "C" { PyObject *PyVTKClass_vtkConvertSelectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkConvertSelectionNew
#endif

static const char **PyvtkPConvertSelection_Doc();


static PyObject *
PyvtkPConvertSelection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPConvertSelection *op = static_cast<vtkPConvertSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPConvertSelection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPConvertSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPConvertSelection *op = static_cast<vtkPConvertSelection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPConvertSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPConvertSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPConvertSelection *op = static_cast<vtkPConvertSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPConvertSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPConvertSelection::NewInstance());

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
PyvtkPConvertSelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPConvertSelection *tempr = vtkPConvertSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPConvertSelection_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPConvertSelection *op = static_cast<vtkPConvertSelection *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPConvertSelection::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPConvertSelection_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPConvertSelection *op = static_cast<vtkPConvertSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPConvertSelection::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPConvertSelection_Methods[] = {
  {(char*)"GetClassName", PyvtkPConvertSelection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPConvertSelection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPConvertSelection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPConvertSelection\nC++: vtkPConvertSelection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPConvertSelection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPConvertSelection\nC++: vtkPConvertSelection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPConvertSelection_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *)\n\nGet/Set the parallel controller.\n"},
  {(char*)"GetController", PyvtkPConvertSelection_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the parallel controller.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPConvertSelection_StaticNew()
{
  return vtkPConvertSelection::New();
}

PyObject *PyVTKClass_vtkPConvertSelectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPConvertSelection_StaticNew,
    PyvtkPConvertSelection_Methods,
    "vtkPConvertSelection", modulename,
    NULL, NULL,
    PyvtkPConvertSelection_Doc(),
    PyVTKClass_vtkConvertSelectionNew(modulename));
  return cls;
}

const char **PyvtkPConvertSelection_Doc()
{
  static const char *docstring[] = {
    "vtkPConvertSelection - parallel aware vtkConvertSelection subclass.\n\n",
    "Superclass: vtkConvertSelection\n\n",
    "vtkPConvertSelection is a parallel aware vtkConvertSelection\nsubclass.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPConvertSelection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPConvertSelectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPConvertSelection", o) != 0)
    {
    Py_DECREF(o);
    }

}

