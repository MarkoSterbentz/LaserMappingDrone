// python wrapper for vtkCameraRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCameraRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCameraRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCameraRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkBorderRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkBorderRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkBorderRepresentationNew
#endif

static const char **PyvtkCameraRepresentation_Doc();


static PyObject *
PyvtkCameraRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCameraRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCameraRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraRepresentation::NewInstance());

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
PyvtkCameraRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCameraRepresentation *tempr = vtkCameraRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkCamera *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->SetCamera(temp0);
      }
    else
      {
      op->vtkCameraRepresentation::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkCameraRepresentation::GetCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_SetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkCameraInterpolator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCameraInterpolator"))
    {
    if (ap.IsBound())
      {
      op->SetInterpolator(temp0);
      }
    else
      {
      op->vtkCameraRepresentation::SetInterpolator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCameraInterpolator *tempr = (ap.IsBound() ?
      op->GetInterpolator() :
      op->vtkCameraRepresentation::GetInterpolator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_SetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfFrames(temp0);
      }
    else
      {
      op->vtkCameraRepresentation::SetNumberOfFrames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetNumberOfFramesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFramesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFramesMinValue() :
      op->vtkCameraRepresentation::GetNumberOfFramesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetNumberOfFramesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFramesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFramesMaxValue() :
      op->vtkCameraRepresentation::GetNumberOfFramesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFrames() :
      op->vtkCameraRepresentation::GetNumberOfFrames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkCameraRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_AddCameraToPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCameraToPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddCameraToPath();
      }
    else
      {
      op->vtkCameraRepresentation::AddCameraToPath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_AnimatePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnimatePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->AnimatePath(temp0);
      }
    else
      {
      op->vtkCameraRepresentation::AnimatePath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_InitializePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializePath();
      }
    else
      {
      op->vtkCameraRepresentation::InitializePath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkCameraRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetSize(temp0);
      }
    else
      {
      op->vtkCameraRepresentation::GetSize(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors2D(temp0);
      }
    else
      {
      op->vtkCameraRepresentation::GetActors2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkCameraRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCameraRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCameraRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCameraRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCameraRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCameraRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkCameraRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK class methods.\n"},
  {(char*)"IsA", PyvtkCameraRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK class methods.\n"},
  {(char*)"NewInstance", PyvtkCameraRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCameraRepresentation\nC++: vtkCameraRepresentation *NewInstance()\n\nStandard VTK class methods.\n"},
  {(char*)"SafeDownCast", PyvtkCameraRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCameraRepresentation\nC++: vtkCameraRepresentation *SafeDownCast(vtkObject* o)\n\nStandard VTK class methods.\n"},
  {(char*)"SetCamera", PyvtkCameraRepresentation_SetCamera, METH_VARARGS,
   (char*)"V.SetCamera(vtkCamera)\nC++: void SetCamera(vtkCamera *camera)\n\nSpecify the camera to interpolate. This must be specified by the\nuser.\n"},
  {(char*)"GetCamera", PyvtkCameraRepresentation_GetCamera, METH_VARARGS,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nSpecify the camera to interpolate. This must be specified by the\nuser.\n"},
  {(char*)"SetInterpolator", PyvtkCameraRepresentation_SetInterpolator, METH_VARARGS,
   (char*)"V.SetInterpolator(vtkCameraInterpolator)\nC++: void SetInterpolator(vtkCameraInterpolator *camInt)\n\nGet the vtkCameraInterpolator used to interpolate and save the\nsequence of camera views. If not defined, one is created\nautomatically. Note that you can access this object to set the\ninterpolation type (linear, spline) and other instance variables.\n"},
  {(char*)"GetInterpolator", PyvtkCameraRepresentation_GetInterpolator, METH_VARARGS,
   (char*)"V.GetInterpolator() -> vtkCameraInterpolator\nC++: vtkCameraInterpolator *GetInterpolator()\n\nGet the vtkCameraInterpolator used to interpolate and save the\nsequence of camera views. If not defined, one is created\nautomatically. Note that you can access this object to set the\ninterpolation type (linear, spline) and other instance variables.\n"},
  {(char*)"SetNumberOfFrames", PyvtkCameraRepresentation_SetNumberOfFrames, METH_VARARGS,
   (char*)"V.SetNumberOfFrames(int)\nC++: void SetNumberOfFrames(int)\n\nSet the number of frames to generate when playback is initiated.\n"},
  {(char*)"GetNumberOfFramesMinValue", PyvtkCameraRepresentation_GetNumberOfFramesMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfFramesMinValue() -> int\nC++: int GetNumberOfFramesMinValue()\n\nSet the number of frames to generate when playback is initiated.\n"},
  {(char*)"GetNumberOfFramesMaxValue", PyvtkCameraRepresentation_GetNumberOfFramesMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfFramesMaxValue() -> int\nC++: int GetNumberOfFramesMaxValue()\n\nSet the number of frames to generate when playback is initiated.\n"},
  {(char*)"GetNumberOfFrames", PyvtkCameraRepresentation_GetNumberOfFrames, METH_VARARGS,
   (char*)"V.GetNumberOfFrames() -> int\nC++: int GetNumberOfFrames()\n\nSet the number of frames to generate when playback is initiated.\n"},
  {(char*)"GetProperty", PyvtkCameraRepresentation_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetProperty()\n\nBy obtaining this property you can specify the properties of the\nrepresentation.\n"},
  {(char*)"AddCameraToPath", PyvtkCameraRepresentation_AddCameraToPath, METH_VARARGS,
   (char*)"V.AddCameraToPath()\nC++: void AddCameraToPath()\n\nThese methods are used to create interpolated camera paths.  The\nAddCameraToPath() method adds the view defined by the current\ncamera (via SetCamera()) to the interpolated camera path.\nAnimatePath() interpolates NumberOfFrames along the current path.\nInitializePath() resets the interpolated path to its initial,\nempty configuration.\n"},
  {(char*)"AnimatePath", PyvtkCameraRepresentation_AnimatePath, METH_VARARGS,
   (char*)"V.AnimatePath(vtkRenderWindowInteractor)\nC++: void AnimatePath(vtkRenderWindowInteractor *rwi)\n\nThese methods are used to create interpolated camera paths.  The\nAddCameraToPath() method adds the view defined by the current\ncamera (via SetCamera()) to the interpolated camera path.\nAnimatePath() interpolates NumberOfFrames along the current path.\nInitializePath() resets the interpolated path to its initial,\nempty configuration.\n"},
  {(char*)"InitializePath", PyvtkCameraRepresentation_InitializePath, METH_VARARGS,
   (char*)"V.InitializePath()\nC++: void InitializePath()\n\nThese methods are used to create interpolated camera paths.  The\nAddCameraToPath() method adds the view defined by the current\ncamera (via SetCamera()) to the interpolated camera path.\nAnimatePath() interpolates NumberOfFrames along the current path.\nInitializePath() resets the interpolated path to its initial,\nempty configuration.\n"},
  {(char*)"BuildRepresentation", PyvtkCameraRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nSatisfy the superclasses' API.\n"},
  {(char*)"GetSize", PyvtkCameraRepresentation_GetSize, METH_VARARGS,
   (char*)"V.GetSize([float, float])\nC++: virtual void GetSize(double size[2])\n\nSatisfy the superclasses' API.\n"},
  {(char*)"GetActors2D", PyvtkCameraRepresentation_GetActors2D, METH_VARARGS,
   (char*)"V.GetActors2D(vtkPropCollection)\nC++: virtual void GetActors2D(vtkPropCollection *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkCameraRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderOverlay", PyvtkCameraRepresentation_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkCameraRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkCameraRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkCameraRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCameraRepresentation_StaticNew()
{
  return vtkCameraRepresentation::New();
}

PyObject *PyVTKClass_vtkCameraRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCameraRepresentation_StaticNew,
    PyvtkCameraRepresentation_Methods,
    "vtkCameraRepresentation", modulename,
    NULL, NULL,
    PyvtkCameraRepresentation_Doc(),
    PyVTKClass_vtkBorderRepresentationNew(modulename));
  return cls;
}

const char **PyvtkCameraRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkCameraRepresentation - represent the vtkCameraWidget\n\n",
    "Superclass: vtkBorderRepresentation\n\n",
    "This class provides support for interactively saving a series of\ncamera views into an interpolated path (using vtkCameraInterpolator).\nThe class typically works in conjunction with vtkCameraWidget. To use\nthis class simply specify the camera to interpolate and use the\nmethods AddCameraToPath(), AnimatePath(), and InitializePath() to add\na new camera view, animate the current views, and initialize ",
    "the\ninterpolation.\n\nSee Also:\n\nvtkCameraWidget vtkCameraInterpolator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCameraRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCameraRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCameraRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

