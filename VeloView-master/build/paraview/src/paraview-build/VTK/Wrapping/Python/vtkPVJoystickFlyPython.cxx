// python wrapper for vtkPVJoystickFly
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVJoystickFly.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVJoystickFly(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVJoystickFlyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCameraManipulatorNew
extern "C" { PyObject *PyVTKClass_vtkCameraManipulatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkCameraManipulatorNew
#endif

static const char **PyvtkPVJoystickFly_Doc();


static PyObject *
PyvtkPVJoystickFly_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVJoystickFly::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVJoystickFly::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVJoystickFly *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVJoystickFly::NewInstance());

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
PyvtkPVJoystickFly_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVJoystickFly *tempr = vtkPVJoystickFly::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

  int temp0;
  int temp1;
  vtkRenderer *temp2 = NULL;
  vtkRenderWindowInteractor *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderer") &&
      ap.GetVTKObject(temp3, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVJoystickFly::OnMouseMove(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_OnButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

  int temp0;
  int temp1;
  vtkRenderer *temp2 = NULL;
  vtkRenderWindowInteractor *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderer") &&
      ap.GetVTKObject(temp3, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->OnButtonDown(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVJoystickFly::OnButtonDown(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_OnButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

  int temp0;
  int temp1;
  vtkRenderer *temp2 = NULL;
  vtkRenderWindowInteractor *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderer") &&
      ap.GetVTKObject(temp3, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->OnButtonUp(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVJoystickFly::OnButtonUp(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_SetFlySpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlySpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFlySpeed(temp0);
      }
    else
      {
      op->vtkPVJoystickFly::SetFlySpeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_GetFlySpeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlySpeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFlySpeedMinValue() :
      op->vtkPVJoystickFly::GetFlySpeedMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_GetFlySpeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlySpeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFlySpeedMaxValue() :
      op->vtkPVJoystickFly::GetFlySpeedMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_GetFlySpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlySpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFlySpeed() :
      op->vtkPVJoystickFly::GetFlySpeed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVJoystickFly_Methods[] = {
  {(char*)"GetClassName", PyvtkPVJoystickFly_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVJoystickFly_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVJoystickFly_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVJoystickFly\nC++: vtkPVJoystickFly *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVJoystickFly_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVJoystickFly\nC++: vtkPVJoystickFly *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnMouseMove", PyvtkPVJoystickFly_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: virtual void OnMouseMove(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *rwi)\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnButtonDown", PyvtkPVJoystickFly_OnButtonDown, METH_VARARGS,
   (char*)"V.OnButtonDown(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: virtual void OnButtonDown(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *rwi)\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnButtonUp", PyvtkPVJoystickFly_OnButtonUp, METH_VARARGS,
   (char*)"V.OnButtonUp(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: virtual void OnButtonUp(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *rwi)\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"SetFlySpeed", PyvtkPVJoystickFly_SetFlySpeed, METH_VARARGS,
   (char*)"V.SetFlySpeed(float)\nC++: void SetFlySpeed(double)\n\nSet and get the speed of flying.\n"},
  {(char*)"GetFlySpeedMinValue", PyvtkPVJoystickFly_GetFlySpeedMinValue, METH_VARARGS,
   (char*)"V.GetFlySpeedMinValue() -> float\nC++: double GetFlySpeedMinValue()\n\nSet and get the speed of flying.\n"},
  {(char*)"GetFlySpeedMaxValue", PyvtkPVJoystickFly_GetFlySpeedMaxValue, METH_VARARGS,
   (char*)"V.GetFlySpeedMaxValue() -> float\nC++: double GetFlySpeedMaxValue()\n\nSet and get the speed of flying.\n"},
  {(char*)"GetFlySpeed", PyvtkPVJoystickFly_GetFlySpeed, METH_VARARGS,
   (char*)"V.GetFlySpeed() -> float\nC++: double GetFlySpeed()\n\nSet and get the speed of flying.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPVJoystickFlyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPVJoystickFly_Methods,
    "vtkPVJoystickFly", modulename,
    NULL, NULL,
    PyvtkPVJoystickFly_Doc(),
    PyVTKClass_vtkCameraManipulatorNew(modulename));
  return cls;
}

const char **PyvtkPVJoystickFly_Doc()
{
  static const char *docstring[] = {
    "vtkPVJoystickFly - Fly camera towards or away from the object\n\n",
    "Superclass: vtkCameraManipulator\n\n",
    "vtkPVJoystickFly allows the user to interactively manipulate the\ncamera, the viewpoint of the scene.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVJoystickFly(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVJoystickFlyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVJoystickFly", o) != 0)
    {
    Py_DECREF(o);
    }

}

