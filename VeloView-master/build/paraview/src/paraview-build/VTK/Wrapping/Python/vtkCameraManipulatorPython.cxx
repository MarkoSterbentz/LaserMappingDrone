// python wrapper for vtkCameraManipulator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCameraManipulator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCameraManipulator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCameraManipulatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCameraManipulator_Doc();


static PyObject *
PyvtkCameraManipulator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCameraManipulator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraManipulator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCameraManipulator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraManipulator::NewInstance());

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
PyvtkCameraManipulator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCameraManipulator *tempr = vtkCameraManipulator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_StartInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartInteraction();
      }
    else
      {
      op->vtkCameraManipulator::StartInteraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_EndInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndInteraction();
      }
    else
      {
      op->vtkCameraManipulator::EndInteraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

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
      op->vtkCameraManipulator::OnMouseMove(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_OnButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

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
      op->vtkCameraManipulator::OnButtonDown(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_OnButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

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
      op->vtkCameraManipulator::OnButtonUp(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_SetButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetButton(temp0);
      }
    else
      {
      op->vtkCameraManipulator::SetButton(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_GetButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetButton() :
      op->vtkCameraManipulator::GetButton());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_SetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShift(temp0);
      }
    else
      {
      op->vtkCameraManipulator::SetShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_GetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShift() :
      op->vtkCameraManipulator::GetShift());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_ShiftOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShiftOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShiftOn();
      }
    else
      {
      op->vtkCameraManipulator::ShiftOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_ShiftOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShiftOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShiftOff();
      }
    else
      {
      op->vtkCameraManipulator::ShiftOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_SetControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetControl(temp0);
      }
    else
      {
      op->vtkCameraManipulator::SetControl(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_GetControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetControl() :
      op->vtkCameraManipulator::GetControl());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_ControlOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ControlOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ControlOn();
      }
    else
      {
      op->vtkCameraManipulator::ControlOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_ControlOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ControlOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ControlOff();
      }
    else
      {
      op->vtkCameraManipulator::ControlOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCameraManipulator::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCameraManipulator_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkCameraManipulator::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCameraManipulator_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCameraManipulator_SetCenter_s1(self, args);
    case 1:
      return PyvtkCameraManipulator_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkCameraManipulator_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkCameraManipulator::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_SetRotationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRotationFactor(temp0);
      }
    else
      {
      op->vtkCameraManipulator::SetRotationFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_GetRotationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRotationFactor() :
      op->vtkCameraManipulator::GetRotationFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_SetManipulatorName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManipulatorName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetManipulatorName(temp0);
      }
    else
      {
      op->vtkCameraManipulator::SetManipulatorName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_GetManipulatorName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManipulatorName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetManipulatorName() :
      op->vtkCameraManipulator::GetManipulatorName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_SetGUIHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGUIHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  vtkCameraManipulatorGUIHelper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCameraManipulatorGUIHelper"))
    {
    if (ap.IsBound())
      {
      op->SetGUIHelper(temp0);
      }
    else
      {
      op->vtkCameraManipulator::SetGUIHelper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulator_GetGUIHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGUIHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCameraManipulatorGUIHelper *tempr = (ap.IsBound() ?
      op->GetGUIHelper() :
      op->vtkCameraManipulator::GetGUIHelper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCameraManipulator_Methods[] = {
  {(char*)"GetClassName", PyvtkCameraManipulator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCameraManipulator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCameraManipulator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCameraManipulator\nC++: vtkCameraManipulator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCameraManipulator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCameraManipulator\nC++: vtkCameraManipulator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"StartInteraction", PyvtkCameraManipulator_StartInteraction, METH_VARARGS,
   (char*)"V.StartInteraction()\nC++: virtual void StartInteraction()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"EndInteraction", PyvtkCameraManipulator_EndInteraction, METH_VARARGS,
   (char*)"V.EndInteraction()\nC++: virtual void EndInteraction()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMouseMove", PyvtkCameraManipulator_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: virtual void OnMouseMove(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *iren)\n\n"},
  {(char*)"OnButtonDown", PyvtkCameraManipulator_OnButtonDown, METH_VARARGS,
   (char*)"V.OnButtonDown(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: virtual void OnButtonDown(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *iren)\n\n"},
  {(char*)"OnButtonUp", PyvtkCameraManipulator_OnButtonUp, METH_VARARGS,
   (char*)"V.OnButtonUp(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: virtual void OnButtonUp(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *iren)\n\n"},
  {(char*)"SetButton", PyvtkCameraManipulator_SetButton, METH_VARARGS,
   (char*)"V.SetButton(int)\nC++: void SetButton(int a)\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {(char*)"GetButton", PyvtkCameraManipulator_GetButton, METH_VARARGS,
   (char*)"V.GetButton() -> int\nC++: int GetButton()\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {(char*)"SetShift", PyvtkCameraManipulator_SetShift, METH_VARARGS,
   (char*)"V.SetShift(int)\nC++: void SetShift(int a)\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {(char*)"GetShift", PyvtkCameraManipulator_GetShift, METH_VARARGS,
   (char*)"V.GetShift() -> int\nC++: int GetShift()\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {(char*)"ShiftOn", PyvtkCameraManipulator_ShiftOn, METH_VARARGS,
   (char*)"V.ShiftOn()\nC++: void ShiftOn()\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {(char*)"ShiftOff", PyvtkCameraManipulator_ShiftOff, METH_VARARGS,
   (char*)"V.ShiftOff()\nC++: void ShiftOff()\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {(char*)"SetControl", PyvtkCameraManipulator_SetControl, METH_VARARGS,
   (char*)"V.SetControl(int)\nC++: void SetControl(int a)\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {(char*)"GetControl", PyvtkCameraManipulator_GetControl, METH_VARARGS,
   (char*)"V.GetControl() -> int\nC++: int GetControl()\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {(char*)"ControlOn", PyvtkCameraManipulator_ControlOn, METH_VARARGS,
   (char*)"V.ControlOn()\nC++: void ControlOn()\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {(char*)"ControlOff", PyvtkCameraManipulator_ControlOff, METH_VARARGS,
   (char*)"V.ControlOff()\nC++: void ControlOff()\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {(char*)"SetCenter", PyvtkCameraManipulator_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkCameraManipulator_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {(char*)"SetRotationFactor", PyvtkCameraManipulator_SetRotationFactor, METH_VARARGS,
   (char*)"V.SetRotationFactor(float)\nC++: void SetRotationFactor(double a)\n\nSet and get the rotation factor.\n"},
  {(char*)"GetRotationFactor", PyvtkCameraManipulator_GetRotationFactor, METH_VARARGS,
   (char*)"V.GetRotationFactor() -> float\nC++: double GetRotationFactor()\n\nSet and get the rotation factor.\n"},
  {(char*)"SetManipulatorName", PyvtkCameraManipulator_SetManipulatorName, METH_VARARGS,
   (char*)"V.SetManipulatorName(string)\nC++: void SetManipulatorName(char *)\n\nSet and get the manipulator name.\n"},
  {(char*)"GetManipulatorName", PyvtkCameraManipulator_GetManipulatorName, METH_VARARGS,
   (char*)"V.GetManipulatorName() -> string\nC++: char *GetManipulatorName()\n\nSet and get the manipulator name.\n"},
  {(char*)"SetGUIHelper", PyvtkCameraManipulator_SetGUIHelper, METH_VARARGS,
   (char*)"V.SetGUIHelper(vtkCameraManipulatorGUIHelper)\nC++: void SetGUIHelper(vtkCameraManipulatorGUIHelper *)\n\nGet/Set the GUI helper.\n"},
  {(char*)"GetGUIHelper", PyvtkCameraManipulator_GetGUIHelper, METH_VARARGS,
   (char*)"V.GetGUIHelper() -> vtkCameraManipulatorGUIHelper\nC++: vtkCameraManipulatorGUIHelper *GetGUIHelper()\n\nGet/Set the GUI helper.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCameraManipulator_StaticNew()
{
  return vtkCameraManipulator::New();
}

PyObject *PyVTKClass_vtkCameraManipulatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCameraManipulator_StaticNew,
    PyvtkCameraManipulator_Methods,
    "vtkCameraManipulator", modulename,
    NULL, NULL,
    PyvtkCameraManipulator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCameraManipulator_Doc()
{
  static const char *docstring[] = {
    "vtkCameraManipulator - Abstraction of style away from button.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCameraManipulator is a superclass foractions inside an interactor\nstyle and associated with a single button. An example might be\nrubber-band bounding-box zoom. This abstraction allows a camera\nmanipulator to be assigned to any button.  This super class might\nbecome a subclass of vtkInteractorObserver in the future.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCameraManipulator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCameraManipulatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCameraManipulator", o) != 0)
    {
    Py_DECREF(o);
    }

}

