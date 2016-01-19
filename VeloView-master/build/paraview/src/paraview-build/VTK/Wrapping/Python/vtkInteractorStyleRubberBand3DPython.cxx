// python wrapper for vtkInteractorStyleRubberBand3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInteractorStyleRubberBand3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInteractorStyleRubberBand3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInteractorStyleRubberBand3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleTrackballCameraNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
#endif

static const char **PyvtkInteractorStyleRubberBand3D_Doc();


static PyObject *
PyvtkInteractorStyleRubberBand3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInteractorStyleRubberBand3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleRubberBand3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInteractorStyleRubberBand3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleRubberBand3D::NewInstance());

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
PyvtkInteractorStyleRubberBand3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInteractorStyleRubberBand3D *tempr = vtkInteractorStyleRubberBand3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnMouseWheelForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseWheelForward();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnMouseWheelForward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnMouseWheelBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseWheelBackward();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnMouseWheelBackward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_SetRenderOnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderOnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderOnMouseMove(temp0);
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::SetRenderOnMouseMove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_GetRenderOnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderOnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRenderOnMouseMove() :
      op->vtkInteractorStyleRubberBand3D::GetRenderOnMouseMove());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_RenderOnMouseMoveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOnMouseMoveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderOnMouseMoveOn();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::RenderOnMouseMoveOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_RenderOnMouseMoveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOnMouseMoveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderOnMouseMoveOff();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::RenderOnMouseMoveOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_GetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteraction() :
      op->vtkInteractorStyleRubberBand3D::GetInteraction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_GetStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetStartPosition() :
      op->vtkInteractorStyleRubberBand3D::GetStartPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_GetEndPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetEndPosition() :
      op->vtkInteractorStyleRubberBand3D::GetEndPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleRubberBand3D_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleRubberBand3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleRubberBand3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleRubberBand3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInteractorStyleRubberBand3D\nC++: vtkInteractorStyleRubberBand3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleRubberBand3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleRubberBand3D\nC++: vtkInteractorStyleRubberBand3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleRubberBand3D_OnLeftButtonDown, METH_VARARGS,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleRubberBand3D_OnLeftButtonUp, METH_VARARGS,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\n"},
  {(char*)"OnMiddleButtonDown", PyvtkInteractorStyleRubberBand3D_OnMiddleButtonDown, METH_VARARGS,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\n"},
  {(char*)"OnMiddleButtonUp", PyvtkInteractorStyleRubberBand3D_OnMiddleButtonUp, METH_VARARGS,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\n"},
  {(char*)"OnRightButtonDown", PyvtkInteractorStyleRubberBand3D_OnRightButtonDown, METH_VARARGS,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\n"},
  {(char*)"OnRightButtonUp", PyvtkInteractorStyleRubberBand3D_OnRightButtonUp, METH_VARARGS,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleRubberBand3D_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\n"},
  {(char*)"OnMouseWheelForward", PyvtkInteractorStyleRubberBand3D_OnMouseWheelForward, METH_VARARGS,
   (char*)"V.OnMouseWheelForward()\nC++: virtual void OnMouseWheelForward()\n\n"},
  {(char*)"OnMouseWheelBackward", PyvtkInteractorStyleRubberBand3D_OnMouseWheelBackward, METH_VARARGS,
   (char*)"V.OnMouseWheelBackward()\nC++: virtual void OnMouseWheelBackward()\n\n"},
  {(char*)"SetRenderOnMouseMove", PyvtkInteractorStyleRubberBand3D_SetRenderOnMouseMove, METH_VARARGS,
   (char*)"V.SetRenderOnMouseMove(bool)\nC++: void SetRenderOnMouseMove(bool a)\n\nWhether to invoke a render when the mouse moves.\n"},
  {(char*)"GetRenderOnMouseMove", PyvtkInteractorStyleRubberBand3D_GetRenderOnMouseMove, METH_VARARGS,
   (char*)"V.GetRenderOnMouseMove() -> bool\nC++: bool GetRenderOnMouseMove()\n\nWhether to invoke a render when the mouse moves.\n"},
  {(char*)"RenderOnMouseMoveOn", PyvtkInteractorStyleRubberBand3D_RenderOnMouseMoveOn, METH_VARARGS,
   (char*)"V.RenderOnMouseMoveOn()\nC++: void RenderOnMouseMoveOn()\n\nWhether to invoke a render when the mouse moves.\n"},
  {(char*)"RenderOnMouseMoveOff", PyvtkInteractorStyleRubberBand3D_RenderOnMouseMoveOff, METH_VARARGS,
   (char*)"V.RenderOnMouseMoveOff()\nC++: void RenderOnMouseMoveOff()\n\nWhether to invoke a render when the mouse moves.\n"},
  {(char*)"GetInteraction", PyvtkInteractorStyleRubberBand3D_GetInteraction, METH_VARARGS,
   (char*)"V.GetInteraction() -> int\nC++: int GetInteraction()\n\nCurrent interaction state\n"},
  {(char*)"GetStartPosition", PyvtkInteractorStyleRubberBand3D_GetStartPosition, METH_VARARGS,
   (char*)"V.GetStartPosition() -> (int, int)\nC++: int *GetStartPosition()\n\n"},
  {(char*)"GetEndPosition", PyvtkInteractorStyleRubberBand3D_GetEndPosition, METH_VARARGS,
   (char*)"V.GetEndPosition() -> (int, int)\nC++: int *GetEndPosition()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleRubberBand3D_StaticNew()
{
  return vtkInteractorStyleRubberBand3D::New();
}

PyObject *PyVTKClass_vtkInteractorStyleRubberBand3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleRubberBand3D_StaticNew,
    PyvtkInteractorStyleRubberBand3D_Methods,
    "vtkInteractorStyleRubberBand3D", modulename,
    NULL, NULL,
    PyvtkInteractorStyleRubberBand3D_Doc(),
    PyVTKClass_vtkInteractorStyleTrackballCameraNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 7; c++)
      {
      static const struct { const char *name; int value; }
        constants[7] = {
          { "SELECT_NORMAL", vtkInteractorStyleRubberBand3D::SELECT_NORMAL },
          { "SELECT_UNION", vtkInteractorStyleRubberBand3D::SELECT_UNION },
          { "NONE", vtkInteractorStyleRubberBand3D::NONE },
          { "PANNING", vtkInteractorStyleRubberBand3D::PANNING },
          { "ZOOMING", vtkInteractorStyleRubberBand3D::ZOOMING },
          { "ROTATING", vtkInteractorStyleRubberBand3D::ROTATING },
          { "SELECTING", vtkInteractorStyleRubberBand3D::SELECTING },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkInteractorStyleRubberBand3D_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleRubberBand3D - A rubber band interactor for a 3D\nview\n\n",
    "Superclass: vtkInteractorStyleTrackballCamera\n\n",
    "vtkInteractorStyleRubberBand3D manages interaction in a 3D view. The\nstyle also allows draws a rubber band using the left button. All\ncamera changes invoke InteractionBeginEvent when the button is\npressed, InteractionEvent when the mouse (or wheel) is moved, and\nInteractionEndEvent when the button is released.  The bindings are as\nfollows: Left mouse - Select (invokes a SelectionChangedEvent). Rig",
    "ht\nmouse - Rotate. Shift + right mouse - Zoom. Middle mouse - Pan.\nScroll wheel - Zoom.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleRubberBand3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleRubberBand3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleRubberBand3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

