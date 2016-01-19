// python wrapper for vtkInteractorStyleMultiTouchCamera
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInteractorStyleMultiTouchCamera.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInteractorStyleMultiTouchCamera(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInteractorStyleMultiTouchCameraNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleTrackballCameraNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
#endif

static const char **PyvtkInteractorStyleMultiTouchCamera_Doc();


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInteractorStyleMultiTouchCamera::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleMultiTouchCamera::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInteractorStyleMultiTouchCamera *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleMultiTouchCamera::NewInstance());

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
PyvtkInteractorStyleMultiTouchCamera_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInteractorStyleMultiTouchCamera *tempr = vtkInteractorStyleMultiTouchCamera::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleMultiTouchCamera::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleMultiTouchCamera::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleMultiTouchCamera::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_AdjustCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AdjustCamera();
      }
    else
      {
      op->vtkInteractorStyleMultiTouchCamera::AdjustCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_SetMotionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMotionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMotionFactor(temp0);
      }
    else
      {
      op->vtkInteractorStyleMultiTouchCamera::SetMotionFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_GetMotionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMotionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMotionFactor() :
      op->vtkInteractorStyleMultiTouchCamera::GetMotionFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleMultiTouchCamera_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleMultiTouchCamera_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleMultiTouchCamera_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleMultiTouchCamera_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInteractorStyleMultiTouchCamera\nC++: vtkInteractorStyleMultiTouchCamera *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleMultiTouchCamera_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleMultiTouchCamera\nC++: vtkInteractorStyleMultiTouchCamera *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleMultiTouchCamera_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleMultiTouchCamera_OnLeftButtonDown, METH_VARARGS,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleMultiTouchCamera_OnLeftButtonUp, METH_VARARGS,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"AdjustCamera", PyvtkInteractorStyleMultiTouchCamera_AdjustCamera, METH_VARARGS,
   (char*)"V.AdjustCamera()\nC++: virtual void AdjustCamera()\n\n"},
  {(char*)"SetMotionFactor", PyvtkInteractorStyleMultiTouchCamera_SetMotionFactor, METH_VARARGS,
   (char*)"V.SetMotionFactor(float)\nC++: void SetMotionFactor(double a)\n\nSet the apparent sensitivity of the interactor style to mouse\nmotion.\n"},
  {(char*)"GetMotionFactor", PyvtkInteractorStyleMultiTouchCamera_GetMotionFactor, METH_VARARGS,
   (char*)"V.GetMotionFactor() -> float\nC++: double GetMotionFactor()\n\nSet the apparent sensitivity of the interactor style to mouse\nmotion.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleMultiTouchCamera_StaticNew()
{
  return vtkInteractorStyleMultiTouchCamera::New();
}

PyObject *PyVTKClass_vtkInteractorStyleMultiTouchCameraNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleMultiTouchCamera_StaticNew,
    PyvtkInteractorStyleMultiTouchCamera_Methods,
    "vtkInteractorStyleMultiTouchCamera", modulename,
    NULL, NULL,
    PyvtkInteractorStyleMultiTouchCamera_Doc(),
    PyVTKClass_vtkInteractorStyleTrackballCameraNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleMultiTouchCamera_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleMultiTouchCamera - interactive manipulation of the\ncamera\n\n",
    "Superclass: vtkInteractorStyleTrackballCamera\n\n",
    "vtkInteractorStyleMultiTouchCamera allows the user to interactively\nmanipulate (rotate, pan, etc.) the camera, the viewpoint of the\nscene.  In trackball interaction, the magnitude of the mouse motion\nis proportional to the camera motion associated with a particular\nmouse binding. For example, small left-button motions cause small\nchanges in the rotation of the camera around its focal point.\n\nSee A",
    "lso:\n\nvtkInteractorStyleTrackballActor vtkInteractorStyleJoystickCamera\nvtkInteractorStyleJoystickActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleMultiTouchCamera(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleMultiTouchCameraNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleMultiTouchCamera", o) != 0)
    {
    Py_DECREF(o);
    }

}

