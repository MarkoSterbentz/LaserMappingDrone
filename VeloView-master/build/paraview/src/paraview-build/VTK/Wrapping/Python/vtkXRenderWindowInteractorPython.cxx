// python wrapper for vtkXRenderWindowInteractor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXRenderWindowInteractor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXRenderWindowInteractor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXRenderWindowInteractorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRenderWindowInteractorNew
extern "C" { PyObject *PyVTKClass_vtkRenderWindowInteractorNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderWindowInteractorNew
#endif

static const char **PyvtkXRenderWindowInteractor_Doc();


static PyObject *
PyvtkXRenderWindowInteractor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXRenderWindowInteractor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXRenderWindowInteractor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXRenderWindowInteractor::NewInstance());

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
PyvtkXRenderWindowInteractor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXRenderWindowInteractor *tempr = vtkXRenderWindowInteractor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkXRenderWindowInteractor::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_TerminateApp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TerminateApp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TerminateApp();
      }
    else
      {
      op->vtkXRenderWindowInteractor::TerminateApp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_GetBreakLoopFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBreakLoopFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBreakLoopFlag() :
      op->vtkXRenderWindowInteractor::GetBreakLoopFlag());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_SetBreakLoopFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBreakLoopFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBreakLoopFlag(temp0);
      }
    else
      {
      op->vtkXRenderWindowInteractor::SetBreakLoopFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_BreakLoopFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BreakLoopFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BreakLoopFlagOff();
      }
    else
      {
      op->vtkXRenderWindowInteractor::BreakLoopFlagOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_BreakLoopFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BreakLoopFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BreakLoopFlagOn();
      }
    else
      {
      op->vtkXRenderWindowInteractor::BreakLoopFlagOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_Enable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Enable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Enable();
      }
    else
      {
      op->vtkXRenderWindowInteractor::Enable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_Disable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Disable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Disable();
      }
    else
      {
      op->vtkXRenderWindowInteractor::Disable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_UpdateSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->UpdateSize(temp0, temp1);
      }
    else
      {
      op->vtkXRenderWindowInteractor::UpdateSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_GetMousePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMousePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetMousePosition(temp0, temp1);
      }
    else
      {
      op->vtkXRenderWindowInteractor::GetMousePosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyMethodDef PyvtkXRenderWindowInteractor_Methods[] = {
  {(char*)"GetClassName", PyvtkXRenderWindowInteractor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXRenderWindowInteractor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXRenderWindowInteractor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXRenderWindowInteractor\nC++: vtkXRenderWindowInteractor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXRenderWindowInteractor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXRenderWindowInteractor\nC++: vtkXRenderWindowInteractor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkXRenderWindowInteractor_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nInitializes the event handlers without an XtAppContext.  This is\ngood for when you don't have a user interface, but you still want\nto have mouse interaction.\n"},
  {(char*)"TerminateApp", PyvtkXRenderWindowInteractor_TerminateApp, METH_VARARGS,
   (char*)"V.TerminateApp()\nC++: void TerminateApp()\n\nBreak the event loop on 'q','e' keypress. Want more ???\n"},
  {(char*)"GetBreakLoopFlag", PyvtkXRenderWindowInteractor_GetBreakLoopFlag, METH_VARARGS,
   (char*)"V.GetBreakLoopFlag() -> int\nC++: int GetBreakLoopFlag()\n\nThe BreakLoopFlag is checked in the Start() method. Setting it to\nanything other than zero will cause the interactor loop to\nterminate and return to the calling function.\n"},
  {(char*)"SetBreakLoopFlag", PyvtkXRenderWindowInteractor_SetBreakLoopFlag, METH_VARARGS,
   (char*)"V.SetBreakLoopFlag(int)\nC++: void SetBreakLoopFlag(int)\n\nThe BreakLoopFlag is checked in the Start() method. Setting it to\nanything other than zero will cause the interactor loop to\nterminate and return to the calling function.\n"},
  {(char*)"BreakLoopFlagOff", PyvtkXRenderWindowInteractor_BreakLoopFlagOff, METH_VARARGS,
   (char*)"V.BreakLoopFlagOff()\nC++: void BreakLoopFlagOff()\n\nThe BreakLoopFlag is checked in the Start() method. Setting it to\nanything other than zero will cause the interactor loop to\nterminate and return to the calling function.\n"},
  {(char*)"BreakLoopFlagOn", PyvtkXRenderWindowInteractor_BreakLoopFlagOn, METH_VARARGS,
   (char*)"V.BreakLoopFlagOn()\nC++: void BreakLoopFlagOn()\n\nThe BreakLoopFlag is checked in the Start() method. Setting it to\nanything other than zero will cause the interactor loop to\nterminate and return to the calling function.\n"},
  {(char*)"Enable", PyvtkXRenderWindowInteractor_Enable, METH_VARARGS,
   (char*)"V.Enable()\nC++: virtual void Enable()\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {(char*)"Disable", PyvtkXRenderWindowInteractor_Disable, METH_VARARGS,
   (char*)"V.Disable()\nC++: virtual void Disable()\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {(char*)"UpdateSize", PyvtkXRenderWindowInteractor_UpdateSize, METH_VARARGS,
   (char*)"V.UpdateSize(int, int)\nC++: virtual void UpdateSize(int, int)\n\nUpdate the Size data member and set the associated RenderWindow's\nsize.\n"},
  {(char*)"GetMousePosition", PyvtkXRenderWindowInteractor_GetMousePosition, METH_VARARGS,
   (char*)"V.GetMousePosition([int, ...], [int, ...])\nC++: virtual void GetMousePosition(int *x, int *y)\n\nRe-defines virtual function to get mouse position by querying\nX-server.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXRenderWindowInteractor_StaticNew()
{
  return vtkXRenderWindowInteractor::New();
}

PyObject *PyVTKClass_vtkXRenderWindowInteractorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXRenderWindowInteractor_StaticNew,
    PyvtkXRenderWindowInteractor_Methods,
    "vtkXRenderWindowInteractor", modulename,
    NULL, NULL,
    PyvtkXRenderWindowInteractor_Doc(),
    PyVTKClass_vtkRenderWindowInteractorNew(modulename));
  return cls;
}

const char **PyvtkXRenderWindowInteractor_Doc()
{
  static const char *docstring[] = {
    "vtkXRenderWindowInteractor - an X event driven interface for a\nRenderWindow\n\n",
    "Superclass: vtkRenderWindowInteractor\n\n",
    "vtkXRenderWindowInteractor is a convenience object that provides\nevent bindings to common graphics functions. For example, camera and\nactor functions such as zoom-in/zoom-out, azimuth, roll, and pan. IT\nis one of the window system specific subclasses of\nvtkRenderWindowInteractor. Please see vtkRenderWindowInteractor\ndocumentation for event bindings.\n\nSee Also:\n\nvtkRenderWindowInteractor vtkXRender",
    "Window\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXRenderWindowInteractor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXRenderWindowInteractorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXRenderWindowInteractor", o) != 0)
    {
    Py_DECREF(o);
    }

}

