// python wrapper for vtkCheckerboardRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCheckerboardRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCheckerboardRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCheckerboardRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkCheckerboardRepresentation_Doc();


static PyObject *
PyvtkCheckerboardRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCheckerboardRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCheckerboardRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCheckerboardRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCheckerboardRepresentation::NewInstance());

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
PyvtkCheckerboardRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCheckerboardRepresentation *tempr = vtkCheckerboardRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetCheckerboard(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckerboard");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkImageCheckerboard *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageCheckerboard"))
    {
    if (ap.IsBound())
      {
      op->SetCheckerboard(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::SetCheckerboard(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetCheckerboard(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckerboard");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageCheckerboard *tempr = (ap.IsBound() ?
      op->GetCheckerboard() :
      op->vtkCheckerboardRepresentation::GetCheckerboard());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkImageActor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageActor"))
    {
    if (ap.IsBound())
      {
      op->SetImageActor(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::SetImageActor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageActor *tempr = (ap.IsBound() ?
      op->GetImageActor() :
      op->vtkCheckerboardRepresentation::GetImageActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCornerOffset(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::SetCornerOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetCornerOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffsetMinValue() :
      op->vtkCheckerboardRepresentation::GetCornerOffsetMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetCornerOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffsetMaxValue() :
      op->vtkCheckerboardRepresentation::GetCornerOffsetMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffset() :
      op->vtkCheckerboardRepresentation::GetCornerOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SliderValueChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliderValueChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SliderValueChanged(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::SliderValueChanged(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetTopRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation3D"))
    {
    if (ap.IsBound())
      {
      op->SetTopRepresentation(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::SetTopRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetRightRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation3D"))
    {
    if (ap.IsBound())
      {
      op->SetRightRepresentation(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::SetRightRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetBottomRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation3D"))
    {
    if (ap.IsBound())
      {
      op->SetBottomRepresentation(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::SetBottomRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetLeftRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation3D"))
    {
    if (ap.IsBound())
      {
      op->SetLeftRepresentation(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::SetLeftRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetTopRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSliderRepresentation3D *tempr = (ap.IsBound() ?
      op->GetTopRepresentation() :
      op->vtkCheckerboardRepresentation::GetTopRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetRightRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSliderRepresentation3D *tempr = (ap.IsBound() ?
      op->GetRightRepresentation() :
      op->vtkCheckerboardRepresentation::GetRightRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetBottomRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSliderRepresentation3D *tempr = (ap.IsBound() ?
      op->GetBottomRepresentation() :
      op->vtkCheckerboardRepresentation::GetBottomRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetLeftRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSliderRepresentation3D *tempr = (ap.IsBound() ?
      op->GetLeftRepresentation() :
      op->vtkCheckerboardRepresentation::GetLeftRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkCheckerboardRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors(temp0);
      }
    else
      {
      op->vtkCheckerboardRepresentation::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

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
      op->vtkCheckerboardRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCheckerboardRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCheckerboardRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCheckerboardRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCheckerboardRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCheckerboardRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkCheckerboardRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkCheckerboardRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkCheckerboardRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCheckerboardRepresentation\nC++: vtkCheckerboardRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkCheckerboardRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCheckerboardRepresentation\nC++: vtkCheckerboardRepresentation *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"SetCheckerboard", PyvtkCheckerboardRepresentation_SetCheckerboard, METH_VARARGS,
   (char*)"V.SetCheckerboard(vtkImageCheckerboard)\nC++: void SetCheckerboard(vtkImageCheckerboard *chkrbrd)\n\nSpecify an instance of vtkImageCheckerboard to manipulate.\n"},
  {(char*)"GetCheckerboard", PyvtkCheckerboardRepresentation_GetCheckerboard, METH_VARARGS,
   (char*)"V.GetCheckerboard() -> vtkImageCheckerboard\nC++: vtkImageCheckerboard *GetCheckerboard()\n\nSpecify an instance of vtkImageCheckerboard to manipulate.\n"},
  {(char*)"SetImageActor", PyvtkCheckerboardRepresentation_SetImageActor, METH_VARARGS,
   (char*)"V.SetImageActor(vtkImageActor)\nC++: void SetImageActor(vtkImageActor *imageActor)\n\nSpecify an instance of vtkImageActor to decorate.\n"},
  {(char*)"GetImageActor", PyvtkCheckerboardRepresentation_GetImageActor, METH_VARARGS,
   (char*)"V.GetImageActor() -> vtkImageActor\nC++: vtkImageActor *GetImageActor()\n\nSpecify an instance of vtkImageActor to decorate.\n"},
  {(char*)"SetCornerOffset", PyvtkCheckerboardRepresentation_SetCornerOffset, METH_VARARGS,
   (char*)"V.SetCornerOffset(float)\nC++: void SetCornerOffset(double)\n\nSpecify the offset of the ends of the sliders (on the boundary\nedges of the image) from the corner of the image. The offset is\nexpressed as a normalized fraction of the border edges.\n"},
  {(char*)"GetCornerOffsetMinValue", PyvtkCheckerboardRepresentation_GetCornerOffsetMinValue, METH_VARARGS,
   (char*)"V.GetCornerOffsetMinValue() -> float\nC++: double GetCornerOffsetMinValue()\n\nSpecify the offset of the ends of the sliders (on the boundary\nedges of the image) from the corner of the image. The offset is\nexpressed as a normalized fraction of the border edges.\n"},
  {(char*)"GetCornerOffsetMaxValue", PyvtkCheckerboardRepresentation_GetCornerOffsetMaxValue, METH_VARARGS,
   (char*)"V.GetCornerOffsetMaxValue() -> float\nC++: double GetCornerOffsetMaxValue()\n\nSpecify the offset of the ends of the sliders (on the boundary\nedges of the image) from the corner of the image. The offset is\nexpressed as a normalized fraction of the border edges.\n"},
  {(char*)"GetCornerOffset", PyvtkCheckerboardRepresentation_GetCornerOffset, METH_VARARGS,
   (char*)"V.GetCornerOffset() -> float\nC++: double GetCornerOffset()\n\nSpecify the offset of the ends of the sliders (on the boundary\nedges of the image) from the corner of the image. The offset is\nexpressed as a normalized fraction of the border edges.\n"},
  {(char*)"SliderValueChanged", PyvtkCheckerboardRepresentation_SliderValueChanged, METH_VARARGS,
   (char*)"V.SliderValueChanged(int)\nC++: void SliderValueChanged(int sliderNum)\n\nThis method is invoked by the vtkCheckerboardWidget() when a\nvalue of some slider has changed.\n"},
  {(char*)"SetTopRepresentation", PyvtkCheckerboardRepresentation_SetTopRepresentation, METH_VARARGS,
   (char*)"V.SetTopRepresentation(vtkSliderRepresentation3D)\nC++: void SetTopRepresentation(vtkSliderRepresentation3D *)\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"SetRightRepresentation", PyvtkCheckerboardRepresentation_SetRightRepresentation, METH_VARARGS,
   (char*)"V.SetRightRepresentation(vtkSliderRepresentation3D)\nC++: void SetRightRepresentation(vtkSliderRepresentation3D *)\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"SetBottomRepresentation", PyvtkCheckerboardRepresentation_SetBottomRepresentation, METH_VARARGS,
   (char*)"V.SetBottomRepresentation(vtkSliderRepresentation3D)\nC++: void SetBottomRepresentation(vtkSliderRepresentation3D *)\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"SetLeftRepresentation", PyvtkCheckerboardRepresentation_SetLeftRepresentation, METH_VARARGS,
   (char*)"V.SetLeftRepresentation(vtkSliderRepresentation3D)\nC++: void SetLeftRepresentation(vtkSliderRepresentation3D *)\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"GetTopRepresentation", PyvtkCheckerboardRepresentation_GetTopRepresentation, METH_VARARGS,
   (char*)"V.GetTopRepresentation() -> vtkSliderRepresentation3D\nC++: vtkSliderRepresentation3D *GetTopRepresentation()\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"GetRightRepresentation", PyvtkCheckerboardRepresentation_GetRightRepresentation, METH_VARARGS,
   (char*)"V.GetRightRepresentation() -> vtkSliderRepresentation3D\nC++: vtkSliderRepresentation3D *GetRightRepresentation()\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"GetBottomRepresentation", PyvtkCheckerboardRepresentation_GetBottomRepresentation, METH_VARARGS,
   (char*)"V.GetBottomRepresentation() -> vtkSliderRepresentation3D\nC++: vtkSliderRepresentation3D *GetBottomRepresentation()\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"GetLeftRepresentation", PyvtkCheckerboardRepresentation_GetLeftRepresentation, METH_VARARGS,
   (char*)"V.GetLeftRepresentation() -> vtkSliderRepresentation3D\nC++: vtkSliderRepresentation3D *GetLeftRepresentation()\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"BuildRepresentation", PyvtkCheckerboardRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nMethods required by superclass.\n"},
  {(char*)"GetActors", PyvtkCheckerboardRepresentation_GetActors, METH_VARARGS,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nMethods required by superclass.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkCheckerboardRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *w)\n\nMethods required by superclass.\n"},
  {(char*)"RenderOverlay", PyvtkCheckerboardRepresentation_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nMethods required by superclass.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkCheckerboardRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods required by superclass.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkCheckerboardRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nMethods required by superclass.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkCheckerboardRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods required by superclass.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCheckerboardRepresentation_StaticNew()
{
  return vtkCheckerboardRepresentation::New();
}

PyObject *PyVTKClass_vtkCheckerboardRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCheckerboardRepresentation_StaticNew,
    PyvtkCheckerboardRepresentation_Methods,
    "vtkCheckerboardRepresentation", modulename,
    NULL, NULL,
    PyvtkCheckerboardRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 4; c++)
      {
      static const struct { const char *name; int value; }
        constants[4] = {
          { "TopSlider", vtkCheckerboardRepresentation::TopSlider },
          { "RightSlider", vtkCheckerboardRepresentation::RightSlider },
          { "BottomSlider", vtkCheckerboardRepresentation::BottomSlider },
          { "LeftSlider", vtkCheckerboardRepresentation::LeftSlider },
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

const char **PyvtkCheckerboardRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkCheckerboardRepresentation - represent the vtkCheckerboardWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "The vtkCheckerboardRepresentation is used to implement the\nrepresentation of the vtkCheckerboardWidget. The user can adjust the\nnumber of divisions in each of the i-j directions in a 2D image. A\nframe appears around the vtkImageActor with sliders along each side\nof the frame. The user can interactively adjust the sliders to the\ndesired number of checkerboard subdivisions. The representation uses\nf",
    "our instances of vtkSliderRepresentation3D to implement itself.\n\nSee Also:\n\nvtkCheckerboardWidget vtkImageCheckerboard vtkImageActor\nvtkSliderWidget vtkRectilinearWipeWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCheckerboardRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCheckerboardRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCheckerboardRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

