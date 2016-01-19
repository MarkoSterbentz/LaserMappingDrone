// python wrapper for vtkImageAnisotropicDiffusion3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageAnisotropicDiffusion3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageAnisotropicDiffusion3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageAnisotropicDiffusion3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageSpatialAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
#endif

static const char **PyvtkImageAnisotropicDiffusion3D_Doc();


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageAnisotropicDiffusion3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageAnisotropicDiffusion3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageAnisotropicDiffusion3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageAnisotropicDiffusion3D::NewInstance());

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
PyvtkImageAnisotropicDiffusion3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageAnisotropicDiffusion3D *tempr = vtkImageAnisotropicDiffusion3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfIterations(temp0);
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::SetNumberOfIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterations() :
      op->vtkImageAnisotropicDiffusion3D::GetNumberOfIterations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetDiffusionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffusionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiffusionThreshold(temp0);
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::SetDiffusionThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetDiffusionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDiffusionThreshold() :
      op->vtkImageAnisotropicDiffusion3D::GetDiffusionThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetDiffusionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffusionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiffusionFactor(temp0);
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::SetDiffusionFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetDiffusionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDiffusionFactor() :
      op->vtkImageAnisotropicDiffusion3D::GetDiffusionFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFaces(temp0);
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::SetFaces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFaces() :
      op->vtkImageAnisotropicDiffusion3D::GetFaces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_FacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FacesOn();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::FacesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_FacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FacesOff();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::FacesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdges(temp0);
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::SetEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEdges() :
      op->vtkImageAnisotropicDiffusion3D::GetEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_EdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgesOn();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::EdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_EdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgesOff();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::EdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCorners(temp0);
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::SetCorners(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCorners() :
      op->vtkImageAnisotropicDiffusion3D::GetCorners());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_CornersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CornersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CornersOn();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::CornersOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_CornersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CornersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CornersOff();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::CornersOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetGradientMagnitudeThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientMagnitudeThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGradientMagnitudeThreshold(temp0);
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::SetGradientMagnitudeThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetGradientMagnitudeThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeThreshold() :
      op->vtkImageAnisotropicDiffusion3D::GetGradientMagnitudeThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GradientMagnitudeThresholdOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientMagnitudeThresholdOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GradientMagnitudeThresholdOn();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::GradientMagnitudeThresholdOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GradientMagnitudeThresholdOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientMagnitudeThresholdOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GradientMagnitudeThresholdOff();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::GradientMagnitudeThresholdOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageAnisotropicDiffusion3D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageAnisotropicDiffusion3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageAnisotropicDiffusion3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageAnisotropicDiffusion3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageAnisotropicDiffusion3D\nC++: vtkImageAnisotropicDiffusion3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageAnisotropicDiffusion3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageAnisotropicDiffusion3D\nC++: vtkImageAnisotropicDiffusion3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfIterations", PyvtkImageAnisotropicDiffusion3D_SetNumberOfIterations, METH_VARARGS,
   (char*)"V.SetNumberOfIterations(int)\nC++: void SetNumberOfIterations(int num)\n\nThis method sets the number of interations which also affects the\ninput neighborhood needed to compute one output pixel.  Each\niterations requires an extra pixel layer on the neighborhood. \nThis is only relavent when you are trying to stream or are\nrequesting a sub extent of the \"wholeExtent\".\n"},
  {(char*)"GetNumberOfIterations", PyvtkImageAnisotropicDiffusion3D_GetNumberOfIterations, METH_VARARGS,
   (char*)"V.GetNumberOfIterations() -> int\nC++: int GetNumberOfIterations()\n\nGet the number of iterations.\n"},
  {(char*)"SetDiffusionThreshold", PyvtkImageAnisotropicDiffusion3D_SetDiffusionThreshold, METH_VARARGS,
   (char*)"V.SetDiffusionThreshold(float)\nC++: void SetDiffusionThreshold(double a)\n\nSet/Get the difference threshold that stops diffusion. when the\ndifference between two pixel is greater than this threshold, the\npixels are not diffused.  This causes diffusion to avoid sharp\nedges. If the GradientMagnitudeThreshold is set, then gradient\nmagnitude is used for comparison instead of pixel differences.\n"},
  {(char*)"GetDiffusionThreshold", PyvtkImageAnisotropicDiffusion3D_GetDiffusionThreshold, METH_VARARGS,
   (char*)"V.GetDiffusionThreshold() -> float\nC++: double GetDiffusionThreshold()\n\nSet/Get the difference threshold that stops diffusion. when the\ndifference between two pixel is greater than this threshold, the\npixels are not diffused.  This causes diffusion to avoid sharp\nedges. If the GradientMagnitudeThreshold is set, then gradient\nmagnitude is used for comparison instead of pixel differences.\n"},
  {(char*)"SetDiffusionFactor", PyvtkImageAnisotropicDiffusion3D_SetDiffusionFactor, METH_VARARGS,
   (char*)"V.SetDiffusionFactor(float)\nC++: void SetDiffusionFactor(double a)\n\nSet/Get the difference factor\n"},
  {(char*)"GetDiffusionFactor", PyvtkImageAnisotropicDiffusion3D_GetDiffusionFactor, METH_VARARGS,
   (char*)"V.GetDiffusionFactor() -> float\nC++: double GetDiffusionFactor()\n\nSet/Get the difference factor\n"},
  {(char*)"SetFaces", PyvtkImageAnisotropicDiffusion3D_SetFaces, METH_VARARGS,
   (char*)"V.SetFaces(int)\nC++: void SetFaces(int a)\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"GetFaces", PyvtkImageAnisotropicDiffusion3D_GetFaces, METH_VARARGS,
   (char*)"V.GetFaces() -> int\nC++: int GetFaces()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"FacesOn", PyvtkImageAnisotropicDiffusion3D_FacesOn, METH_VARARGS,
   (char*)"V.FacesOn()\nC++: void FacesOn()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"FacesOff", PyvtkImageAnisotropicDiffusion3D_FacesOff, METH_VARARGS,
   (char*)"V.FacesOff()\nC++: void FacesOff()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"SetEdges", PyvtkImageAnisotropicDiffusion3D_SetEdges, METH_VARARGS,
   (char*)"V.SetEdges(int)\nC++: void SetEdges(int a)\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"GetEdges", PyvtkImageAnisotropicDiffusion3D_GetEdges, METH_VARARGS,
   (char*)"V.GetEdges() -> int\nC++: int GetEdges()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"EdgesOn", PyvtkImageAnisotropicDiffusion3D_EdgesOn, METH_VARARGS,
   (char*)"V.EdgesOn()\nC++: void EdgesOn()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"EdgesOff", PyvtkImageAnisotropicDiffusion3D_EdgesOff, METH_VARARGS,
   (char*)"V.EdgesOff()\nC++: void EdgesOff()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"SetCorners", PyvtkImageAnisotropicDiffusion3D_SetCorners, METH_VARARGS,
   (char*)"V.SetCorners(int)\nC++: void SetCorners(int a)\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"GetCorners", PyvtkImageAnisotropicDiffusion3D_GetCorners, METH_VARARGS,
   (char*)"V.GetCorners() -> int\nC++: int GetCorners()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"CornersOn", PyvtkImageAnisotropicDiffusion3D_CornersOn, METH_VARARGS,
   (char*)"V.CornersOn()\nC++: void CornersOn()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"CornersOff", PyvtkImageAnisotropicDiffusion3D_CornersOff, METH_VARARGS,
   (char*)"V.CornersOff()\nC++: void CornersOff()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"SetGradientMagnitudeThreshold", PyvtkImageAnisotropicDiffusion3D_SetGradientMagnitudeThreshold, METH_VARARGS,
   (char*)"V.SetGradientMagnitudeThreshold(int)\nC++: void SetGradientMagnitudeThreshold(int a)\n\nSwitch between gradient magnitude threshold and pixel gradient\nthreshold.\n"},
  {(char*)"GetGradientMagnitudeThreshold", PyvtkImageAnisotropicDiffusion3D_GetGradientMagnitudeThreshold, METH_VARARGS,
   (char*)"V.GetGradientMagnitudeThreshold() -> int\nC++: int GetGradientMagnitudeThreshold()\n\nSwitch between gradient magnitude threshold and pixel gradient\nthreshold.\n"},
  {(char*)"GradientMagnitudeThresholdOn", PyvtkImageAnisotropicDiffusion3D_GradientMagnitudeThresholdOn, METH_VARARGS,
   (char*)"V.GradientMagnitudeThresholdOn()\nC++: void GradientMagnitudeThresholdOn()\n\nSwitch between gradient magnitude threshold and pixel gradient\nthreshold.\n"},
  {(char*)"GradientMagnitudeThresholdOff", PyvtkImageAnisotropicDiffusion3D_GradientMagnitudeThresholdOff, METH_VARARGS,
   (char*)"V.GradientMagnitudeThresholdOff()\nC++: void GradientMagnitudeThresholdOff()\n\nSwitch between gradient magnitude threshold and pixel gradient\nthreshold.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageAnisotropicDiffusion3D_StaticNew()
{
  return vtkImageAnisotropicDiffusion3D::New();
}

PyObject *PyVTKClass_vtkImageAnisotropicDiffusion3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageAnisotropicDiffusion3D_StaticNew,
    PyvtkImageAnisotropicDiffusion3D_Methods,
    "vtkImageAnisotropicDiffusion3D", modulename,
    NULL, NULL,
    PyvtkImageAnisotropicDiffusion3D_Doc(),
    PyVTKClass_vtkImageSpatialAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageAnisotropicDiffusion3D_Doc()
{
  static const char *docstring[] = {
    "vtkImageAnisotropicDiffusion3D - edge preserving smoothing.\n\n",
    "Superclass: vtkImageSpatialAlgorithm\n\n",
    "vtkImageAnisotropicDiffusion3D  diffuses an volume iteratively. The\nneighborhood of the diffusion is determined by the instance flags. if\n\"Faces\" is on, the 6 voxels adjoined by faces are included in the\nneighborhood.  If \"Edges\" is on the 12 edge connected voxels are\nincluded, and if \"Corners\" is on, the 8 corner connected voxels are\nincluded.  \"DiffusionFactor\" determines how far a pixel value m",
    "oves\ntoward its neighbors, and is insensitive to the number of neighbors\nchosen.  The diffusion is anisotropic because it only occurs when a\ngradient measure is below \"GradientThreshold\".  Two gradient measures\nexist and are toggled by the \"GradientMagnitudeThreshold\" flag. When\n\"GradientMagnitudeThreshold\" is on, the magnitude of the gradient,\ncomputed by central differences, above \"DiffusionThre",
    "shold\" a voxel\nis not modified.  The alternative measure examines each neighbor\nindependently.  The gradient between the voxel and the neighbor must\nbe below the \"DiffusionThreshold\" for diffusion to occur with THAT\nneighbor.\n\nSee Also:\n\nvtkImageAnisotropicDiffusion2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageAnisotropicDiffusion3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageAnisotropicDiffusion3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageAnisotropicDiffusion3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

