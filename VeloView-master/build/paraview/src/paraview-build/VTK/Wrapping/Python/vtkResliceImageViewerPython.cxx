// python wrapper for vtkResliceImageViewer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkResliceImageViewer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkResliceImageViewer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkResliceImageViewerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageViewer2New
extern "C" { PyObject *PyVTKClass_vtkImageViewer2New(const char *); }
#define DECLARED_PyVTKClass_vtkImageViewer2New
#endif

static const char **PyvtkResliceImageViewer_Doc();


static PyObject *
PyvtkResliceImageViewer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkResliceImageViewer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceImageViewer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceImageViewer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceImageViewer::NewInstance());

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
PyvtkResliceImageViewer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkResliceImageViewer *tempr = vtkResliceImageViewer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkResliceImageViewer::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkResliceImageViewer::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0);
      }
    else
      {
      op->vtkResliceImageViewer::SetInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorWindow(temp0);
      }
    else
      {
      op->vtkResliceImageViewer::SetColorWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorLevel(temp0);
      }
    else
      {
      op->vtkResliceImageViewer::SetColorLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetResliceCursorWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceCursorWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceCursorWidget *tempr = (ap.IsBound() ?
      op->GetResliceCursorWidget() :
      op->vtkResliceImageViewer::GetResliceCursorWidget());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetResliceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResliceMode() :
      op->vtkResliceImageViewer::GetResliceMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetResliceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResliceMode(temp0);
      }
    else
      {
      op->vtkResliceImageViewer::SetResliceMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetResliceModeToAxisAligned(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceModeToAxisAligned");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetResliceModeToAxisAligned();
      }
    else
      {
      op->vtkResliceImageViewer::SetResliceModeToAxisAligned();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetResliceModeToOblique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceModeToOblique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetResliceModeToOblique();
      }
    else
      {
      op->vtkResliceImageViewer::SetResliceModeToOblique();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetResliceCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceCursor *tempr = (ap.IsBound() ?
      op->GetResliceCursor() :
      op->vtkResliceImageViewer::GetResliceCursor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetResliceCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  vtkResliceCursor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkResliceCursor"))
    {
    if (ap.IsBound())
      {
      op->SetResliceCursor(temp0);
      }
    else
      {
      op->vtkResliceImageViewer::SetResliceCursor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkResliceImageViewer::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkResliceImageViewer::GetLookupTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetThickMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThickMode(temp0);
      }
    else
      {
      op->vtkResliceImageViewer::SetThickMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetThickMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetThickMode() :
      op->vtkResliceImageViewer::GetThickMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkResliceImageViewer::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBoundedPlanePointPlacer *tempr = (ap.IsBound() ?
      op->GetPointPlacer() :
      op->vtkResliceImageViewer::GetPointPlacer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetMeasurements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasurements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceImageViewerMeasurements *tempr = (ap.IsBound() ?
      op->GetMeasurements() :
      op->vtkResliceImageViewer::GetMeasurements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkResliceImageViewer::GetInteractor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetSliceScrollOnMouseWheel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceScrollOnMouseWheel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceScrollOnMouseWheel(temp0);
      }
    else
      {
      op->vtkResliceImageViewer::SetSliceScrollOnMouseWheel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetSliceScrollOnMouseWheel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceScrollOnMouseWheel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceScrollOnMouseWheel() :
      op->vtkResliceImageViewer::GetSliceScrollOnMouseWheel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SliceScrollOnMouseWheelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceScrollOnMouseWheelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SliceScrollOnMouseWheelOn();
      }
    else
      {
      op->vtkResliceImageViewer::SliceScrollOnMouseWheelOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SliceScrollOnMouseWheelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceScrollOnMouseWheelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SliceScrollOnMouseWheelOff();
      }
    else
      {
      op->vtkResliceImageViewer::SliceScrollOnMouseWheelOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_IncrementSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncrementSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->IncrementSlice(temp0);
      }
    else
      {
      op->vtkResliceImageViewer::IncrementSlice(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkResliceImageViewer_Methods[] = {
  {(char*)"GetClassName", PyvtkResliceImageViewer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkResliceImageViewer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkResliceImageViewer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkResliceImageViewer\nC++: vtkResliceImageViewer *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkResliceImageViewer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkResliceImageViewer\nC++: vtkResliceImageViewer *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"Render", PyvtkResliceImageViewer_Render, METH_VARARGS,
   (char*)"V.Render()\nC++: virtual void Render()\n\nRender the resulting image.\n"},
  {(char*)"SetInputData", PyvtkResliceImageViewer_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkImageData)\nC++: virtual void SetInputData(vtkImageData *in)\n\nSet/Get the input image to the viewer.\n"},
  {(char*)"SetInputConnection", PyvtkResliceImageViewer_SetInputConnection, METH_VARARGS,
   (char*)"V.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *input)\n\nSet/Get the input image to the viewer.\n"},
  {(char*)"SetColorWindow", PyvtkResliceImageViewer_SetColorWindow, METH_VARARGS,
   (char*)"V.SetColorWindow(float)\nC++: virtual void SetColorWindow(double s)\n\nSet window and level for mapping pixels to colors.\n"},
  {(char*)"SetColorLevel", PyvtkResliceImageViewer_SetColorLevel, METH_VARARGS,
   (char*)"V.SetColorLevel(float)\nC++: virtual void SetColorLevel(double s)\n\nSet window and level for mapping pixels to colors.\n"},
  {(char*)"GetResliceCursorWidget", PyvtkResliceImageViewer_GetResliceCursorWidget, METH_VARARGS,
   (char*)"V.GetResliceCursorWidget() -> vtkResliceCursorWidget\nC++: vtkResliceCursorWidget *GetResliceCursorWidget()\n\nGet the internal render window, renderer, image actor, and image\nmap instances.\n"},
  {(char*)"GetResliceMode", PyvtkResliceImageViewer_GetResliceMode, METH_VARARGS,
   (char*)"V.GetResliceMode() -> int\nC++: int GetResliceMode()\n\n"},
  {(char*)"SetResliceMode", PyvtkResliceImageViewer_SetResliceMode, METH_VARARGS,
   (char*)"V.SetResliceMode(int)\nC++: virtual void SetResliceMode(int resliceMode)\n\n"},
  {(char*)"SetResliceModeToAxisAligned", PyvtkResliceImageViewer_SetResliceModeToAxisAligned, METH_VARARGS,
   (char*)"V.SetResliceModeToAxisAligned()\nC++: virtual void SetResliceModeToAxisAligned()\n\n"},
  {(char*)"SetResliceModeToOblique", PyvtkResliceImageViewer_SetResliceModeToOblique, METH_VARARGS,
   (char*)"V.SetResliceModeToOblique()\nC++: virtual void SetResliceModeToOblique()\n\n"},
  {(char*)"GetResliceCursor", PyvtkResliceImageViewer_GetResliceCursor, METH_VARARGS,
   (char*)"V.GetResliceCursor() -> vtkResliceCursor\nC++: vtkResliceCursor *GetResliceCursor()\n\nSet/Get the reslice cursor.\n"},
  {(char*)"SetResliceCursor", PyvtkResliceImageViewer_SetResliceCursor, METH_VARARGS,
   (char*)"V.SetResliceCursor(vtkResliceCursor)\nC++: void SetResliceCursor(vtkResliceCursor *rc)\n\nSet/Get the reslice cursor.\n"},
  {(char*)"SetLookupTable", PyvtkResliceImageViewer_SetLookupTable, METH_VARARGS,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *)\n\nSet the lookup table\n"},
  {(char*)"GetLookupTable", PyvtkResliceImageViewer_GetLookupTable, METH_VARARGS,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSet the lookup table\n"},
  {(char*)"SetThickMode", PyvtkResliceImageViewer_SetThickMode, METH_VARARGS,
   (char*)"V.SetThickMode(int)\nC++: virtual void SetThickMode(int)\n\nSwitch to / from thick mode\n"},
  {(char*)"GetThickMode", PyvtkResliceImageViewer_GetThickMode, METH_VARARGS,
   (char*)"V.GetThickMode() -> int\nC++: virtual int GetThickMode()\n\nSwitch to / from thick mode\n"},
  {(char*)"Reset", PyvtkResliceImageViewer_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: virtual void Reset()\n\nReset all views back to initial state\n"},
  {(char*)"GetPointPlacer", PyvtkResliceImageViewer_GetPointPlacer, METH_VARARGS,
   (char*)"V.GetPointPlacer() -> vtkBoundedPlanePointPlacer\nC++: vtkBoundedPlanePointPlacer *GetPointPlacer()\n\nGet the point placer.\n"},
  {(char*)"GetMeasurements", PyvtkResliceImageViewer_GetMeasurements, METH_VARARGS,
   (char*)"V.GetMeasurements() -> vtkResliceImageViewerMeasurements\nC++: vtkResliceImageViewerMeasurements *GetMeasurements()\n\nGet the measurements manager\n"},
  {(char*)"GetInteractor", PyvtkResliceImageViewer_GetInteractor, METH_VARARGS,
   (char*)"V.GetInteractor() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor()\n\nGet the render window interactor\n"},
  {(char*)"SetSliceScrollOnMouseWheel", PyvtkResliceImageViewer_SetSliceScrollOnMouseWheel, METH_VARARGS,
   (char*)"V.SetSliceScrollOnMouseWheel(int)\nC++: void SetSliceScrollOnMouseWheel(int a)\n\nScroll slices on the mouse wheel ? In the case of MPR view, it\nmoves one \"normalized spacing\" in the direction of the normal to\nthe resliced plane, provided the new center will continue to lie\nwithin the volume.\n"},
  {(char*)"GetSliceScrollOnMouseWheel", PyvtkResliceImageViewer_GetSliceScrollOnMouseWheel, METH_VARARGS,
   (char*)"V.GetSliceScrollOnMouseWheel() -> int\nC++: int GetSliceScrollOnMouseWheel()\n\nScroll slices on the mouse wheel ? In the case of MPR view, it\nmoves one \"normalized spacing\" in the direction of the normal to\nthe resliced plane, provided the new center will continue to lie\nwithin the volume.\n"},
  {(char*)"SliceScrollOnMouseWheelOn", PyvtkResliceImageViewer_SliceScrollOnMouseWheelOn, METH_VARARGS,
   (char*)"V.SliceScrollOnMouseWheelOn()\nC++: void SliceScrollOnMouseWheelOn()\n\nScroll slices on the mouse wheel ? In the case of MPR view, it\nmoves one \"normalized spacing\" in the direction of the normal to\nthe resliced plane, provided the new center will continue to lie\nwithin the volume.\n"},
  {(char*)"SliceScrollOnMouseWheelOff", PyvtkResliceImageViewer_SliceScrollOnMouseWheelOff, METH_VARARGS,
   (char*)"V.SliceScrollOnMouseWheelOff()\nC++: void SliceScrollOnMouseWheelOff()\n\nScroll slices on the mouse wheel ? In the case of MPR view, it\nmoves one \"normalized spacing\" in the direction of the normal to\nthe resliced plane, provided the new center will continue to lie\nwithin the volume.\n"},
  {(char*)"IncrementSlice", PyvtkResliceImageViewer_IncrementSlice, METH_VARARGS,
   (char*)"V.IncrementSlice(int)\nC++: virtual void IncrementSlice(int n)\n\nIncrement/Decrement slice by 'n' slices\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkResliceImageViewer_StaticNew()
{
  return vtkResliceImageViewer::New();
}

PyObject *PyVTKClass_vtkResliceImageViewerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkResliceImageViewer_StaticNew,
    PyvtkResliceImageViewer_Methods,
    "vtkResliceImageViewer", modulename,
    NULL, NULL,
    PyvtkResliceImageViewer_Doc(),
    PyVTKClass_vtkImageViewer2New(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "RESLICE_AXIS_ALIGNED", vtkResliceImageViewer::RESLICE_AXIS_ALIGNED },
          { "RESLICE_OBLIQUE", vtkResliceImageViewer::RESLICE_OBLIQUE },
          { "SliceChangedEvent", vtkResliceImageViewer::SliceChangedEvent },
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

const char **PyvtkResliceImageViewer_Doc()
{
  static const char *docstring[] = {
    "vtkResliceImageViewer - Display an image along with a reslice cursor\n\n",
    "Superclass: vtkImageViewer2\n\n",
    "This class is similar to vtkImageViewer2. It displays the image along\nwith a two cross hairs for reslicing. The cross hairs may be\ninteractively manipulated and are typically used to reslice two other\nviews of vtkResliceImageViewer. See QtVTKRenderWindows for an\nexample. The reslice cursor is used to perform thin or thick MPR\nthrough data. The class can also default to the behaviour of\nvtkImageVie",
    "wer2 if the Reslice mode is set to RESLICE_AXIS_ALIGNED.\n\nSee Also:\n\nvtkResliceCursor vtkResliceCursorWidget\nvtkResliceCursorRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkResliceImageViewer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkResliceImageViewerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkResliceImageViewer", o) != 0)
    {
    Py_DECREF(o);
    }

}

