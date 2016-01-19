// python wrapper for vtkPVInteractorStyle
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVInteractorStyle.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVInteractorStyle(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVInteractorStyleNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleTrackballCameraNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
#endif

static const char **PyvtkPVInteractorStyle_Doc();


static PyObject *
PyvtkPVInteractorStyle_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVInteractorStyle::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVInteractorStyle::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVInteractorStyle *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVInteractorStyle::NewInstance());

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
PyvtkPVInteractorStyle_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVInteractorStyle *tempr = vtkPVInteractorStyle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkPVInteractorStyle::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkPVInteractorStyle::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkPVInteractorStyle::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkPVInteractorStyle::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkPVInteractorStyle::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkPVInteractorStyle::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkPVInteractorStyle::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_AddManipulator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddManipulator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  vtkCameraManipulator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCameraManipulator"))
    {
    if (ap.IsBound())
      {
      op->AddManipulator(temp0);
      }
    else
      {
      op->vtkPVInteractorStyle::AddManipulator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_RemoveAllManipulators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllManipulators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllManipulators();
      }
    else
      {
      op->vtkPVInteractorStyle::RemoveAllManipulators();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_GetCameraManipulators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCameraManipulators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetCameraManipulators() :
      op->vtkPVInteractorStyle::GetCameraManipulators());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_SetCenterOfRotation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

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
      op->SetCenterOfRotation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVInteractorStyle::SetCenterOfRotation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVInteractorStyle_SetCenterOfRotation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCenterOfRotation(temp0);
      }
    else
      {
      op->vtkPVInteractorStyle::SetCenterOfRotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVInteractorStyle_SetCenterOfRotation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPVInteractorStyle_SetCenterOfRotation_s1(self, args);
    case 1:
      return PyvtkPVInteractorStyle_SetCenterOfRotation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenterOfRotation");
  return NULL;
}



static PyObject *
PyvtkPVInteractorStyle_GetCenterOfRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenterOfRotation() :
      op->vtkPVInteractorStyle::GetCenterOfRotation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_SetRotationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

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
      op->vtkPVInteractorStyle::SetRotationFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_GetRotationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRotationFactor() :
      op->vtkPVInteractorStyle::GetRotationFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnChar();
      }
    else
      {
      op->vtkPVInteractorStyle::OnChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_FindManipulator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindManipulator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkCameraManipulator *tempr = (ap.IsBound() ?
      op->FindManipulator(temp0, temp1, temp2) :
      op->vtkPVInteractorStyle::FindManipulator(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVInteractorStyle_Methods[] = {
  {(char*)"GetClassName", PyvtkPVInteractorStyle_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVInteractorStyle_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVInteractorStyle_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVInteractorStyle\nC++: vtkPVInteractorStyle *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVInteractorStyle_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVInteractorStyle\nC++: vtkPVInteractorStyle *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnMouseMove", PyvtkPVInteractorStyle_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonDown", PyvtkPVInteractorStyle_OnLeftButtonDown, METH_VARARGS,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonUp", PyvtkPVInteractorStyle_OnLeftButtonUp, METH_VARARGS,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMiddleButtonDown", PyvtkPVInteractorStyle_OnMiddleButtonDown, METH_VARARGS,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMiddleButtonUp", PyvtkPVInteractorStyle_OnMiddleButtonUp, METH_VARARGS,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonDown", PyvtkPVInteractorStyle_OnRightButtonDown, METH_VARARGS,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonUp", PyvtkPVInteractorStyle_OnRightButtonUp, METH_VARARGS,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"AddManipulator", PyvtkPVInteractorStyle_AddManipulator, METH_VARARGS,
   (char*)"V.AddManipulator(vtkCameraManipulator)\nC++: void AddManipulator(vtkCameraManipulator *m)\n\nAccess to adding or removing manipulators.\n"},
  {(char*)"RemoveAllManipulators", PyvtkPVInteractorStyle_RemoveAllManipulators, METH_VARARGS,
   (char*)"V.RemoveAllManipulators()\nC++: void RemoveAllManipulators()\n\nRemoves all manipulators.\n"},
  {(char*)"GetCameraManipulators", PyvtkPVInteractorStyle_GetCameraManipulators, METH_VARARGS,
   (char*)"V.GetCameraManipulators() -> vtkCollection\nC++: vtkCollection *GetCameraManipulators()\n\nAccessor for the collection of camera manipulators.\n"},
  {(char*)"SetCenterOfRotation", PyvtkPVInteractorStyle_SetCenterOfRotation, METH_VARARGS,
   (char*)"V.SetCenterOfRotation(float, float, float)\nC++: void SetCenterOfRotation(double, double, double)\nV.SetCenterOfRotation((float, float, float))\nC++: void SetCenterOfRotation(double a[3])\n\n"},
  {(char*)"GetCenterOfRotation", PyvtkPVInteractorStyle_GetCenterOfRotation, METH_VARARGS,
   (char*)"V.GetCenterOfRotation() -> (float, float, float)\nC++: double *GetCenterOfRotation()\n\n"},
  {(char*)"SetRotationFactor", PyvtkPVInteractorStyle_SetRotationFactor, METH_VARARGS,
   (char*)"V.SetRotationFactor(float)\nC++: void SetRotationFactor(double a)\n\nPropagates the rotation factor to the manipulators. This simply\nsets an interal ivar. It is propagated to a manipulator before\nthe event is sent to it. Also changing the RotationFactor during\ninteraction i.e. after a button press but before a button up has\nno effect until the next button press.\n"},
  {(char*)"GetRotationFactor", PyvtkPVInteractorStyle_GetRotationFactor, METH_VARARGS,
   (char*)"V.GetRotationFactor() -> float\nC++: double GetRotationFactor()\n\nPropagates the rotation factor to the manipulators. This simply\nsets an interal ivar. It is propagated to a manipulator before\nthe event is sent to it. Also changing the RotationFactor during\ninteraction i.e. after a button press but before a button up has\nno effect until the next button press.\n"},
  {(char*)"OnChar", PyvtkPVInteractorStyle_OnChar, METH_VARARGS,
   (char*)"V.OnChar()\nC++: virtual void OnChar()\n\nDo not let the superclass do anything with a char event.\n"},
  {(char*)"FindManipulator", PyvtkPVInteractorStyle_FindManipulator, METH_VARARGS,
   (char*)"V.FindManipulator(int, int, int) -> vtkCameraManipulator\nC++: virtual vtkCameraManipulator *FindManipulator(int button,\n    int shift, int control)\n\nReturns the chosen manipulator based on the modifiers.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVInteractorStyle_StaticNew()
{
  return vtkPVInteractorStyle::New();
}

PyObject *PyVTKClass_vtkPVInteractorStyleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVInteractorStyle_StaticNew,
    PyvtkPVInteractorStyle_Methods,
    "vtkPVInteractorStyle", modulename,
    NULL, NULL,
    PyvtkPVInteractorStyle_Doc(),
    PyVTKClass_vtkInteractorStyleTrackballCameraNew(modulename));
  return cls;
}

const char **PyvtkPVInteractorStyle_Doc()
{
  static const char *docstring[] = {
    "vtkPVInteractorStyle - interactive manipulation of the camera\n\n",
    "Superclass: vtkInteractorStyleTrackballCamera\n\n",
    "vtkPVInteractorStyle allows the user to interactively manipulate the\ncamera, the viewpoint of the scene. The left button is for rotation;\nshift + left button is for rolling; the right button is for panning;\nand shift + right button is for zooming. This class fires\nvtkCommand::StartInteractionEvent and vtkCommand::EndInteractionEvent\nto signal start and end of interaction.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVInteractorStyle(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVInteractorStyleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVInteractorStyle", o) != 0)
    {
    Py_DECREF(o);
    }

}

