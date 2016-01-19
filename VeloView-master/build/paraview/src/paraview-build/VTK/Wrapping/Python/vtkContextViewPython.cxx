// python wrapper for vtkContextView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkContextView.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkContextView(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkContextViewNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRenderViewBaseNew
extern "C" { PyObject *PyVTKClass_vtkRenderViewBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderViewBaseNew
#endif

static const char **PyvtkContextView_Doc();


static PyObject *
PyvtkContextView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextView *op = static_cast<vtkContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkContextView::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextView *op = static_cast<vtkContextView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContextView::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextView *op = static_cast<vtkContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContextView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContextView::NewInstance());

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
PyvtkContextView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkContextView *tempr = vtkContextView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextView_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextView *op = static_cast<vtkContextView *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    if (ap.IsBound())
      {
      op->SetContext(temp0);
      }
    else
      {
      op->vtkContextView::SetContext(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextView_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextView *op = static_cast<vtkContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContext2D *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkContextView::GetContext());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextView_SetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextView *op = static_cast<vtkContextView *>(vp);

  vtkContextScene *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContextScene"))
    {
    if (ap.IsBound())
      {
      op->SetScene(temp0);
      }
    else
      {
      op->vtkContextView::SetScene(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextView_GetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextView *op = static_cast<vtkContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContextScene *tempr = (ap.IsBound() ?
      op->GetScene() :
      op->vtkContextView::GetScene());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkContextView_Methods[] = {
  {(char*)"GetClassName", PyvtkContextView_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkContextView_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkContextView_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkContextView\nC++: vtkContextView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkContextView_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkContextView\nC++: vtkContextView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetContext", PyvtkContextView_SetContext, METH_VARARGS,
   (char*)"V.SetContext(vtkContext2D)\nC++: virtual void SetContext(vtkContext2D *context)\n\nSet the vtkContext2D for the view.\n"},
  {(char*)"GetContext", PyvtkContextView_GetContext, METH_VARARGS,
   (char*)"V.GetContext() -> vtkContext2D\nC++: virtual vtkContext2D *GetContext()\n\nGet the vtkContext2D for the view.\n"},
  {(char*)"SetScene", PyvtkContextView_SetScene, METH_VARARGS,
   (char*)"V.SetScene(vtkContextScene)\nC++: virtual void SetScene(vtkContextScene *scene)\n\nSet the scene object for the view.\n"},
  {(char*)"GetScene", PyvtkContextView_GetScene, METH_VARARGS,
   (char*)"V.GetScene() -> vtkContextScene\nC++: virtual vtkContextScene *GetScene()\n\nGet the scene of the view.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkContextView_StaticNew()
{
  return vtkContextView::New();
}

PyObject *PyVTKClass_vtkContextViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkContextView_StaticNew,
    PyvtkContextView_Methods,
    "vtkContextView", modulename,
    NULL, NULL,
    PyvtkContextView_Doc(),
    PyVTKClass_vtkRenderViewBaseNew(modulename));
  return cls;
}

const char **PyvtkContextView_Doc()
{
  static const char *docstring[] = {
    "vtkContextView - provides a view of the vtkContextScene.\n\n",
    "Superclass: vtkRenderViewBase\n\n",
    "This class is derived from vtkRenderViewBase and provides a view of a\nvtkContextScene, with a default interactor style, renderer etc. It is\nthe simplest way to create a vtkRenderWindow and display a 2D scene\ninside of it.\n\nBy default the scene has a white background.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContextView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContextViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContextView", o) != 0)
    {
    Py_DECREF(o);
    }

}

