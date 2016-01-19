// python wrapper for vtkInteractorStyleUser
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInteractorStyleUser.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInteractorStyleUser(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInteractorStyleUserNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleNew
#endif

static const char **PyvtkInteractorStyleUser_Doc();


static PyObject *
PyvtkInteractorStyleUser_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInteractorStyleUser::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleUser::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInteractorStyleUser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleUser::NewInstance());

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
PyvtkInteractorStyleUser_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInteractorStyleUser *tempr = vtkInteractorStyleUser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetLastPos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastPos");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetLastPos() :
      op->vtkInteractorStyleUser::GetLastPos());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetOldPos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOldPos");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetOldPos() :
      op->vtkInteractorStyleUser::GetOldPos());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetShiftKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShiftKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShiftKey() :
      op->vtkInteractorStyleUser::GetShiftKey());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetCtrlKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCtrlKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCtrlKey() :
      op->vtkInteractorStyleUser::GetCtrlKey());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetChar() :
      op->vtkInteractorStyleUser::GetChar());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetKeySym() :
      op->vtkInteractorStyleUser::GetKeySym());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetButton() :
      op->vtkInteractorStyleUser::GetButton());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleUser::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleUser::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleUser::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkInteractorStyleUser::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkInteractorStyleUser::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkInteractorStyleUser::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkInteractorStyleUser::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnChar();
      }
    else
      {
      op->vtkInteractorStyleUser::OnChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnKeyPress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyPress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnKeyPress();
      }
    else
      {
      op->vtkInteractorStyleUser::OnKeyPress();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnKeyRelease(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyRelease");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnKeyRelease();
      }
    else
      {
      op->vtkInteractorStyleUser::OnKeyRelease();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnExpose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnExpose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnExpose();
      }
    else
      {
      op->vtkInteractorStyleUser::OnExpose();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnConfigure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnConfigure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnConfigure();
      }
    else
      {
      op->vtkInteractorStyleUser::OnConfigure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnEnter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnEnter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnEnter();
      }
    else
      {
      op->vtkInteractorStyleUser::OnEnter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnLeave(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeave");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeave();
      }
    else
      {
      op->vtkInteractorStyleUser::OnLeave();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnTimer();
      }
    else
      {
      op->vtkInteractorStyleUser::OnTimer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleUser_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleUser_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleUser_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleUser_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInteractorStyleUser\nC++: vtkInteractorStyleUser *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleUser_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleUser\nC++: vtkInteractorStyleUser *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetLastPos", PyvtkInteractorStyleUser_GetLastPos, METH_VARARGS,
   (char*)"V.GetLastPos() -> (int, int)\nC++: int *GetLastPos()\n\n"},
  {(char*)"GetOldPos", PyvtkInteractorStyleUser_GetOldPos, METH_VARARGS,
   (char*)"V.GetOldPos() -> (int, int)\nC++: int *GetOldPos()\n\n"},
  {(char*)"GetShiftKey", PyvtkInteractorStyleUser_GetShiftKey, METH_VARARGS,
   (char*)"V.GetShiftKey() -> int\nC++: int GetShiftKey()\n\nTest whether modifiers were held down when mouse button or key\nwas pressed\n"},
  {(char*)"GetCtrlKey", PyvtkInteractorStyleUser_GetCtrlKey, METH_VARARGS,
   (char*)"V.GetCtrlKey() -> int\nC++: int GetCtrlKey()\n\nTest whether modifiers were held down when mouse button or key\nwas pressed\n"},
  {(char*)"GetChar", PyvtkInteractorStyleUser_GetChar, METH_VARARGS,
   (char*)"V.GetChar() -> int\nC++: int GetChar()\n\nGet the character for a Char event.\n"},
  {(char*)"GetKeySym", PyvtkInteractorStyleUser_GetKeySym, METH_VARARGS,
   (char*)"V.GetKeySym() -> string\nC++: char *GetKeySym()\n\nGet the KeySym (in the same format as Tk KeySyms) for a KeyPress\nor KeyRelease method.\n"},
  {(char*)"GetButton", PyvtkInteractorStyleUser_GetButton, METH_VARARGS,
   (char*)"V.GetButton() -> int\nC++: int GetButton()\n\nGet the mouse button that was last pressed inside the window\n(returns zero when the button is released).\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleUser_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nGeneric event bindings\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleUser_OnLeftButtonDown, METH_VARARGS,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nGeneric event bindings\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleUser_OnLeftButtonUp, METH_VARARGS,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nGeneric event bindings\n"},
  {(char*)"OnMiddleButtonDown", PyvtkInteractorStyleUser_OnMiddleButtonDown, METH_VARARGS,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\nGeneric event bindings\n"},
  {(char*)"OnMiddleButtonUp", PyvtkInteractorStyleUser_OnMiddleButtonUp, METH_VARARGS,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\nGeneric event bindings\n"},
  {(char*)"OnRightButtonDown", PyvtkInteractorStyleUser_OnRightButtonDown, METH_VARARGS,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\nGeneric event bindings\n"},
  {(char*)"OnRightButtonUp", PyvtkInteractorStyleUser_OnRightButtonUp, METH_VARARGS,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\nGeneric event bindings\n"},
  {(char*)"OnChar", PyvtkInteractorStyleUser_OnChar, METH_VARARGS,
   (char*)"V.OnChar()\nC++: virtual void OnChar()\n\nKeyboard functions\n"},
  {(char*)"OnKeyPress", PyvtkInteractorStyleUser_OnKeyPress, METH_VARARGS,
   (char*)"V.OnKeyPress()\nC++: virtual void OnKeyPress()\n\nKeyboard functions\n"},
  {(char*)"OnKeyRelease", PyvtkInteractorStyleUser_OnKeyRelease, METH_VARARGS,
   (char*)"V.OnKeyRelease()\nC++: virtual void OnKeyRelease()\n\nKeyboard functions\n"},
  {(char*)"OnExpose", PyvtkInteractorStyleUser_OnExpose, METH_VARARGS,
   (char*)"V.OnExpose()\nC++: virtual void OnExpose()\n\nThese are more esoteric events, but are useful in some cases.\n"},
  {(char*)"OnConfigure", PyvtkInteractorStyleUser_OnConfigure, METH_VARARGS,
   (char*)"V.OnConfigure()\nC++: virtual void OnConfigure()\n\nThese are more esoteric events, but are useful in some cases.\n"},
  {(char*)"OnEnter", PyvtkInteractorStyleUser_OnEnter, METH_VARARGS,
   (char*)"V.OnEnter()\nC++: virtual void OnEnter()\n\nThese are more esoteric events, but are useful in some cases.\n"},
  {(char*)"OnLeave", PyvtkInteractorStyleUser_OnLeave, METH_VARARGS,
   (char*)"V.OnLeave()\nC++: virtual void OnLeave()\n\nThese are more esoteric events, but are useful in some cases.\n"},
  {(char*)"OnTimer", PyvtkInteractorStyleUser_OnTimer, METH_VARARGS,
   (char*)"V.OnTimer()\nC++: virtual void OnTimer()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleUser_StaticNew()
{
  return vtkInteractorStyleUser::New();
}

PyObject *PyVTKClass_vtkInteractorStyleUserNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleUser_StaticNew,
    PyvtkInteractorStyleUser_Methods,
    "vtkInteractorStyleUser", modulename,
    NULL, NULL,
    PyvtkInteractorStyleUser_Doc(),
    PyVTKClass_vtkInteractorStyleNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleUser_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleUser - provides customizable interaction routines\n\n",
    "Superclass: vtkInteractorStyle\n\n",
    "The most common way to customize user interaction is to write a\nsubclass of vtkInteractorStyle: vtkInteractorStyleUser allows you to\ncustomize the interaction to without subclassing vtkInteractorStyle. \nThis is particularly useful for setting up custom interaction modes\nin scripting languages such as Tcl and Python.  This class allows you\nto hook into the MouseMove, ButtonPress/Release, KeyPress/R",
    "elease,\netc. events.  If you want to hook into just a single mouse button,\nbut leave the interaction modes for the others unchanged, you must\nuse e.g. SetMiddleButtonPressMethod() instead of the more general\nSetButtonPressMethod().\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleUser(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleUserNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleUser", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(8);
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTKIS_USERINTERACTION", o);
    Py_DECREF(o);
    }
}

