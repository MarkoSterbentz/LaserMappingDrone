// python wrapper for vtkObserverMediator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkObserverMediator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkObserverMediator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkObserverMediatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkObserverMediator_Doc();


static PyObject *
PyvtkObserverMediator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverMediator *op = static_cast<vtkObserverMediator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkObserverMediator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObserverMediator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverMediator *op = static_cast<vtkObserverMediator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkObserverMediator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObserverMediator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverMediator *op = static_cast<vtkObserverMediator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkObserverMediator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkObserverMediator::NewInstance());

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
PyvtkObserverMediator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkObserverMediator *tempr = vtkObserverMediator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObserverMediator_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverMediator *op = static_cast<vtkObserverMediator *>(vp);

  vtkRenderWindowInteractor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->SetInteractor(temp0);
      }
    else
      {
      op->vtkObserverMediator::SetInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObserverMediator_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverMediator *op = static_cast<vtkObserverMediator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkObserverMediator::GetInteractor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObserverMediator_RequestCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverMediator *op = static_cast<vtkObserverMediator *>(vp);

  vtkInteractorObserver *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInteractorObserver") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->RequestCursorShape(temp0, temp1) :
      op->vtkObserverMediator::RequestCursorShape(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObserverMediator_RemoveAllCursorShapeRequests(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllCursorShapeRequests");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverMediator *op = static_cast<vtkObserverMediator *>(vp);

  vtkInteractorObserver *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInteractorObserver"))
    {
    if (ap.IsBound())
      {
      op->RemoveAllCursorShapeRequests(temp0);
      }
    else
      {
      op->vtkObserverMediator::RemoveAllCursorShapeRequests(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkObserverMediator_Methods[] = {
  {(char*)"GetClassName", PyvtkObserverMediator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard macros.\n"},
  {(char*)"IsA", PyvtkObserverMediator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard macros.\n"},
  {(char*)"NewInstance", PyvtkObserverMediator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkObserverMediator\nC++: vtkObserverMediator *NewInstance()\n\nStandard macros.\n"},
  {(char*)"SafeDownCast", PyvtkObserverMediator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkObserverMediator\nC++: vtkObserverMediator *SafeDownCast(vtkObject* o)\n\nStandard macros.\n"},
  {(char*)"SetInteractor", PyvtkObserverMediator_SetInteractor, METH_VARARGS,
   (char*)"V.SetInteractor(vtkRenderWindowInteractor)\nC++: void SetInteractor(vtkRenderWindowInteractor *iren)\n\nSpecify the instance of vtkRenderWindow whose cursor shape is to\nbe managed.\n"},
  {(char*)"GetInteractor", PyvtkObserverMediator_GetInteractor, METH_VARARGS,
   (char*)"V.GetInteractor() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor()\n\nSpecify the instance of vtkRenderWindow whose cursor shape is to\nbe managed.\n"},
  {(char*)"RequestCursorShape", PyvtkObserverMediator_RequestCursorShape, METH_VARARGS,
   (char*)"V.RequestCursorShape(vtkInteractorObserver, int) -> int\nC++: int RequestCursorShape(vtkInteractorObserver *,\n    int cursorShape)\n\nMethod used to request a cursor shape. Note that the shape is\nspecified using one of the integral values determined in\nvtkRenderWindow.h. The method returns a non-zero value if the\nshape was successfully changed.\n"},
  {(char*)"RemoveAllCursorShapeRequests", PyvtkObserverMediator_RemoveAllCursorShapeRequests, METH_VARARGS,
   (char*)"V.RemoveAllCursorShapeRequests(vtkInteractorObserver)\nC++: void RemoveAllCursorShapeRequests(vtkInteractorObserver *)\n\nRemove all requests for cursor shape from a given interactor.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkObserverMediator_StaticNew()
{
  return vtkObserverMediator::New();
}

PyObject *PyVTKClass_vtkObserverMediatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkObserverMediator_StaticNew,
    PyvtkObserverMediator_Methods,
    "vtkObserverMediator", modulename,
    NULL, NULL,
    PyvtkObserverMediator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkObserverMediator_Doc()
{
  static const char *docstring[] = {
    "vtkObserverMediator - manage contention for cursors and other\nresources\n\n",
    "Superclass: vtkObject\n\n",
    "The vtkObserverMediator is a helper class that manages requests for\ncursor changes from multiple interactor observers (e.g. widgets). It\nkeeps a list of widgets (and their priorities) and their current\nrequests for cursor shape. It then satisfies requests based on widget\npriority and the relative importance of the request (e.g., a lower\npriority widget requesting a particular cursor shape will ove",
    "rrule a\nhigher priority widget requesting a default shape).\n\nSee Also:\n\nvtkAbstractWidget vtkWidgetRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkObserverMediator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkObserverMediatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkObserverMediator", o) != 0)
    {
    Py_DECREF(o);
    }

}

