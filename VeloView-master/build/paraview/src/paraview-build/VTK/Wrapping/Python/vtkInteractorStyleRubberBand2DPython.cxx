// python wrapper for vtkInteractorStyleRubberBand2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInteractorStyleRubberBand2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInteractorStyleRubberBand2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInteractorStyleRubberBand2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleNew
#endif

static const char **PyvtkInteractorStyleRubberBand2D_Doc();


static PyObject *
PyvtkInteractorStyleRubberBand2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInteractorStyleRubberBand2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleRubberBand2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInteractorStyleRubberBand2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleRubberBand2D::NewInstance());

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
PyvtkInteractorStyleRubberBand2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInteractorStyleRubberBand2D *tempr = vtkInteractorStyleRubberBand2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnMouseWheelForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseWheelForward();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnMouseWheelForward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnMouseWheelBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseWheelBackward();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnMouseWheelBackward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_SetRenderOnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderOnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

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
      op->vtkInteractorStyleRubberBand2D::SetRenderOnMouseMove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_GetRenderOnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderOnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRenderOnMouseMove() :
      op->vtkInteractorStyleRubberBand2D::GetRenderOnMouseMove());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_RenderOnMouseMoveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOnMouseMoveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderOnMouseMoveOn();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::RenderOnMouseMoveOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_RenderOnMouseMoveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOnMouseMoveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderOnMouseMoveOff();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::RenderOnMouseMoveOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_GetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteraction() :
      op->vtkInteractorStyleRubberBand2D::GetInteraction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_GetStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetStartPosition() :
      op->vtkInteractorStyleRubberBand2D::GetStartPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_GetEndPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetEndPosition() :
      op->vtkInteractorStyleRubberBand2D::GetEndPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleRubberBand2D_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleRubberBand2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleRubberBand2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleRubberBand2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInteractorStyleRubberBand2D\nC++: vtkInteractorStyleRubberBand2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleRubberBand2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleRubberBand2D\nC++: vtkInteractorStyleRubberBand2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleRubberBand2D_OnLeftButtonDown, METH_VARARGS,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleRubberBand2D_OnLeftButtonUp, METH_VARARGS,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\n"},
  {(char*)"OnMiddleButtonDown", PyvtkInteractorStyleRubberBand2D_OnMiddleButtonDown, METH_VARARGS,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\n"},
  {(char*)"OnMiddleButtonUp", PyvtkInteractorStyleRubberBand2D_OnMiddleButtonUp, METH_VARARGS,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\n"},
  {(char*)"OnRightButtonDown", PyvtkInteractorStyleRubberBand2D_OnRightButtonDown, METH_VARARGS,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\n"},
  {(char*)"OnRightButtonUp", PyvtkInteractorStyleRubberBand2D_OnRightButtonUp, METH_VARARGS,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleRubberBand2D_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\n"},
  {(char*)"OnMouseWheelForward", PyvtkInteractorStyleRubberBand2D_OnMouseWheelForward, METH_VARARGS,
   (char*)"V.OnMouseWheelForward()\nC++: virtual void OnMouseWheelForward()\n\n"},
  {(char*)"OnMouseWheelBackward", PyvtkInteractorStyleRubberBand2D_OnMouseWheelBackward, METH_VARARGS,
   (char*)"V.OnMouseWheelBackward()\nC++: virtual void OnMouseWheelBackward()\n\n"},
  {(char*)"SetRenderOnMouseMove", PyvtkInteractorStyleRubberBand2D_SetRenderOnMouseMove, METH_VARARGS,
   (char*)"V.SetRenderOnMouseMove(bool)\nC++: void SetRenderOnMouseMove(bool a)\n\nWhether to invoke a render when the mouse moves.\n"},
  {(char*)"GetRenderOnMouseMove", PyvtkInteractorStyleRubberBand2D_GetRenderOnMouseMove, METH_VARARGS,
   (char*)"V.GetRenderOnMouseMove() -> bool\nC++: bool GetRenderOnMouseMove()\n\nWhether to invoke a render when the mouse moves.\n"},
  {(char*)"RenderOnMouseMoveOn", PyvtkInteractorStyleRubberBand2D_RenderOnMouseMoveOn, METH_VARARGS,
   (char*)"V.RenderOnMouseMoveOn()\nC++: void RenderOnMouseMoveOn()\n\nWhether to invoke a render when the mouse moves.\n"},
  {(char*)"RenderOnMouseMoveOff", PyvtkInteractorStyleRubberBand2D_RenderOnMouseMoveOff, METH_VARARGS,
   (char*)"V.RenderOnMouseMoveOff()\nC++: void RenderOnMouseMoveOff()\n\nWhether to invoke a render when the mouse moves.\n"},
  {(char*)"GetInteraction", PyvtkInteractorStyleRubberBand2D_GetInteraction, METH_VARARGS,
   (char*)"V.GetInteraction() -> int\nC++: int GetInteraction()\n\nCurrent interaction state\n"},
  {(char*)"GetStartPosition", PyvtkInteractorStyleRubberBand2D_GetStartPosition, METH_VARARGS,
   (char*)"V.GetStartPosition() -> (int, int)\nC++: int *GetStartPosition()\n\n"},
  {(char*)"GetEndPosition", PyvtkInteractorStyleRubberBand2D_GetEndPosition, METH_VARARGS,
   (char*)"V.GetEndPosition() -> (int, int)\nC++: int *GetEndPosition()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleRubberBand2D_StaticNew()
{
  return vtkInteractorStyleRubberBand2D::New();
}

PyObject *PyVTKClass_vtkInteractorStyleRubberBand2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleRubberBand2D_StaticNew,
    PyvtkInteractorStyleRubberBand2D_Methods,
    "vtkInteractorStyleRubberBand2D", modulename,
    NULL, NULL,
    PyvtkInteractorStyleRubberBand2D_Doc(),
    PyVTKClass_vtkInteractorStyleNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 6; c++)
      {
      static const struct { const char *name; int value; }
        constants[6] = {
          { "SELECT_NORMAL", vtkInteractorStyleRubberBand2D::SELECT_NORMAL },
          { "SELECT_UNION", vtkInteractorStyleRubberBand2D::SELECT_UNION },
          { "NONE", vtkInteractorStyleRubberBand2D::NONE },
          { "PANNING", vtkInteractorStyleRubberBand2D::PANNING },
          { "ZOOMING", vtkInteractorStyleRubberBand2D::ZOOMING },
          { "SELECTING", vtkInteractorStyleRubberBand2D::SELECTING },
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

const char **PyvtkInteractorStyleRubberBand2D_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleRubberBand2D - A rubber band interactor for a 2D\nview\n\n",
    "Superclass: vtkInteractorStyle\n\n",
    "vtkInteractorStyleRubberBand2D manages interaction in a 2D view.\nCamera rotation is not allowed with this interactor style. Zooming\naffects the camera's parallel scale only, and assumes that the camera\nis in parallel projection mode. The style also allows draws a rubber\nband using the left button. All camera changes invoke\nInteractionBeginEvent when the button is pressed, InteractionEvent\nwhen the",
    " mouse (or wheel) is moved, and InteractionEndEvent when the\nbutton is released.  The bindings are as follows: Left mouse - Select\n(invokes a SelectionChangedEvent). Right mouse - Zoom. Middle mouse -\nPan. Scroll wheel - Zoom.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleRubberBand2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleRubberBand2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleRubberBand2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

