// python wrapper for vtkPVCameraKeyFrame
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVCameraKeyFrame.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVCameraKeyFrame(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVCameraKeyFrameNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVKeyFrameNew
extern "C" { PyObject *PyVTKClass_vtkPVKeyFrameNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVKeyFrameNew
#endif

static const char **PyvtkPVCameraKeyFrame_Doc();


static PyObject *
PyvtkPVCameraKeyFrame_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVCameraKeyFrame::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCameraKeyFrame::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVCameraKeyFrame *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCameraKeyFrame::NewInstance());

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
PyvtkPVCameraKeyFrame_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVCameraKeyFrame *tempr = vtkPVCameraKeyFrame::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_UpdateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  double temp0;
  vtkPVAnimationCue *temp1 = NULL;
  vtkPVKeyFrame *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVAnimationCue") &&
      ap.GetVTKObject(temp2, "vtkPVKeyFrame"))
    {
    if (ap.IsBound())
      {
      op->UpdateValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVCameraKeyFrame::UpdateValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetKeyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  unsigned int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetKeyValue(temp0, temp1);
      }
    else
      {
      op->vtkPVCameraKeyFrame::SetKeyValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVCameraKeyFrame_SetKeyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyValue(temp0);
      }
    else
      {
      op->vtkPVCameraKeyFrame::SetKeyValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVCameraKeyFrame_SetKeyValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPVCameraKeyFrame_SetKeyValue_s1(self, args);
    case 1:
      return PyvtkPVCameraKeyFrame_SetKeyValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetKeyValue");
  return NULL;
}



static PyObject *
PyvtkPVCameraKeyFrame_GetKeyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyValue(temp0) :
      op->vtkPVCameraKeyFrame::GetKeyValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkPVCameraKeyFrame::GetCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVCameraKeyFrame::SetPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

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
      op->SetFocalPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVCameraKeyFrame::SetFocalPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetViewUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

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
      op->SetViewUp(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVCameraKeyFrame::SetViewUp(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetViewAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetViewAngle(temp0);
      }
    else
      {
      op->vtkPVCameraKeyFrame::SetViewAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetParallelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParallelScale(temp0);
      }
    else
      {
      op->vtkPVCameraKeyFrame::SetParallelScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_AddPositionPathPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPositionPathPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

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
      op->AddPositionPathPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVCameraKeyFrame::AddPositionPathPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_ClearPositionPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPositionPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearPositionPath();
      }
    else
      {
      op->vtkPVCameraKeyFrame::ClearPositionPath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_AddFocalPathPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFocalPathPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

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
      op->AddFocalPathPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVCameraKeyFrame::AddFocalPathPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_ClearFocalPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFocalPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearFocalPath();
      }
    else
      {
      op->vtkPVCameraKeyFrame::ClearFocalPath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetFocalPointMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPointMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFocalPointMode(temp0);
      }
    else
      {
      op->vtkPVCameraKeyFrame::SetFocalPointMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetPositionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPositionMode(temp0);
      }
    else
      {
      op->vtkPVCameraKeyFrame::SetPositionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetClosedFocalPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosedFocalPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClosedFocalPath(temp0);
      }
    else
      {
      op->vtkPVCameraKeyFrame::SetClosedFocalPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetClosedPositionPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosedPositionPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClosedPositionPath(temp0);
      }
    else
      {
      op->vtkPVCameraKeyFrame::SetClosedPositionPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVCameraKeyFrame_Methods[] = {
  {(char*)"GetClassName", PyvtkPVCameraKeyFrame_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVCameraKeyFrame_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVCameraKeyFrame_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVCameraKeyFrame\nC++: vtkPVCameraKeyFrame *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVCameraKeyFrame_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVCameraKeyFrame\nC++: vtkPVCameraKeyFrame *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"UpdateValue", PyvtkPVCameraKeyFrame_UpdateValue, METH_VARARGS,
   (char*)"V.UpdateValue(float, vtkPVAnimationCue, vtkPVKeyFrame)\nC++: virtual void UpdateValue(double currenttime,\n    vtkPVAnimationCue *cue, vtkPVKeyFrame *next)\n\nIf the vtkPVCameraCueManipulator is in CAMERA mode, then this\nmethod is not even called since the interpolation is done by\nvtkCameraInterpolator maintained by vtkPVCameraCueManipulator\nitself. However,  in PATH mode, this method is called to allow\nthe key frame to use vtkCameraInterpolator2 to do path-based\ninterpolations for the camera.\n"},
  {(char*)"SetKeyValue", PyvtkPVCameraKeyFrame_SetKeyValue, METH_VARARGS,
   (char*)"V.SetKeyValue(int, float)\nC++: virtual void SetKeyValue(unsigned int, double)\nV.SetKeyValue(float)\nC++: virtual void SetKeyValue(double)\n\n"},
  {(char*)"GetKeyValue", PyvtkPVCameraKeyFrame_GetKeyValue, METH_VARARGS,
   (char*)"V.GetKeyValue(int) -> float\nC++: virtual double GetKeyValue(unsigned int)\n\n"},
  {(char*)"GetCamera", PyvtkPVCameraKeyFrame_GetCamera, METH_VARARGS,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nGet the camera i.e. the key value for this key frame.\n"},
  {(char*)"SetPosition", PyvtkPVCameraKeyFrame_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(float, float, float)\nC++: void SetPosition(double x, double y, double z)\n\nMethods to set the current camera value.\n"},
  {(char*)"SetFocalPoint", PyvtkPVCameraKeyFrame_SetFocalPoint, METH_VARARGS,
   (char*)"V.SetFocalPoint(float, float, float)\nC++: void SetFocalPoint(double x, double y, double z)\n\nMethods to set the current camera value.\n"},
  {(char*)"SetViewUp", PyvtkPVCameraKeyFrame_SetViewUp, METH_VARARGS,
   (char*)"V.SetViewUp(float, float, float)\nC++: void SetViewUp(double x, double y, double z)\n\nMethods to set the current camera value.\n"},
  {(char*)"SetViewAngle", PyvtkPVCameraKeyFrame_SetViewAngle, METH_VARARGS,
   (char*)"V.SetViewAngle(float)\nC++: void SetViewAngle(double angle)\n\nMethods to set the current camera value.\n"},
  {(char*)"SetParallelScale", PyvtkPVCameraKeyFrame_SetParallelScale, METH_VARARGS,
   (char*)"V.SetParallelScale(float)\nC++: void SetParallelScale(double scale)\n\nMethods to set the current camera value.\n"},
  {(char*)"AddPositionPathPoint", PyvtkPVCameraKeyFrame_AddPositionPathPoint, METH_VARARGS,
   (char*)"V.AddPositionPathPoint(float, float, float)\nC++: void AddPositionPathPoint(double x, double y, double z)\n\nForwarded to vtkCameraInterpolator2.\n"},
  {(char*)"ClearPositionPath", PyvtkPVCameraKeyFrame_ClearPositionPath, METH_VARARGS,
   (char*)"V.ClearPositionPath()\nC++: void ClearPositionPath()\n\nForwarded to vtkCameraInterpolator2.\n"},
  {(char*)"AddFocalPathPoint", PyvtkPVCameraKeyFrame_AddFocalPathPoint, METH_VARARGS,
   (char*)"V.AddFocalPathPoint(float, float, float)\nC++: void AddFocalPathPoint(double x, double y, double z)\n\nForwarded to vtkCameraInterpolator2.\n"},
  {(char*)"ClearFocalPath", PyvtkPVCameraKeyFrame_ClearFocalPath, METH_VARARGS,
   (char*)"V.ClearFocalPath()\nC++: void ClearFocalPath()\n\nForwarded to vtkCameraInterpolator2.\n"},
  {(char*)"SetFocalPointMode", PyvtkPVCameraKeyFrame_SetFocalPointMode, METH_VARARGS,
   (char*)"V.SetFocalPointMode(int)\nC++: void SetFocalPointMode(int val)\n\nForwarded to vtkCameraInterpolator2.\n"},
  {(char*)"SetPositionMode", PyvtkPVCameraKeyFrame_SetPositionMode, METH_VARARGS,
   (char*)"V.SetPositionMode(int)\nC++: void SetPositionMode(int val)\n\nForwarded to vtkCameraInterpolator2.\n"},
  {(char*)"SetClosedFocalPath", PyvtkPVCameraKeyFrame_SetClosedFocalPath, METH_VARARGS,
   (char*)"V.SetClosedFocalPath(bool)\nC++: void SetClosedFocalPath(bool val)\n\nForwarded to vtkCameraInterpolator2.\n"},
  {(char*)"SetClosedPositionPath", PyvtkPVCameraKeyFrame_SetClosedPositionPath, METH_VARARGS,
   (char*)"V.SetClosedPositionPath(bool)\nC++: void SetClosedPositionPath(bool val)\n\nForwarded to vtkCameraInterpolator2.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVCameraKeyFrame_StaticNew()
{
  return vtkPVCameraKeyFrame::New();
}

PyObject *PyVTKClass_vtkPVCameraKeyFrameNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVCameraKeyFrame_StaticNew,
    PyvtkPVCameraKeyFrame_Methods,
    "vtkPVCameraKeyFrame", modulename,
    NULL, NULL,
    PyvtkPVCameraKeyFrame_Doc(),
    PyVTKClass_vtkPVKeyFrameNew(modulename));
  return cls;
}

const char **PyvtkPVCameraKeyFrame_Doc()
{
  static const char *docstring[] = {
    "vtkPVCameraKeyFrame\n\n",
    "Superclass: vtkPVKeyFrame\n\n",
    "Special key frame for animating Camera. Unlike typical keyframes,\nthis keyframe interpolates a camera and not a property on the camera.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVCameraKeyFrame(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVCameraKeyFrameNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVCameraKeyFrame", o) != 0)
    {
    Py_DECREF(o);
    }

}

