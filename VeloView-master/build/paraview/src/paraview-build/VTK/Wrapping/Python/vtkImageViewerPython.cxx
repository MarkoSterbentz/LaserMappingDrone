// python wrapper for vtkImageViewer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageViewer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageViewer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageViewerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkImageViewer_Doc();


static PyObject *
PyvtkImageViewer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageViewer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageViewer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageViewer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageViewer::NewInstance());

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
PyvtkImageViewer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageViewer *tempr = vtkImageViewer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_GetWindowName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetWindowName() :
      op->vtkImageViewer::GetWindowName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkImageViewer::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

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
      op->vtkImageViewer::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageViewer::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

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
      op->vtkImageViewer::SetInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_GetWholeZMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWholeZMin() :
      op->vtkImageViewer::GetWholeZMin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_GetWholeZMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWholeZMax() :
      op->vtkImageViewer::GetWholeZMax());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_GetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZSlice() :
      op->vtkImageViewer::GetZSlice());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_SetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZSlice(temp0);
      }
    else
      {
      op->vtkImageViewer::SetZSlice(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_GetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetColorWindow() :
      op->vtkImageViewer::GetColorWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_GetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetColorLevel() :
      op->vtkImageViewer::GetColorLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_SetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

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
      op->vtkImageViewer::SetColorWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_SetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

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
      op->vtkImageViewer::SetColorLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplayId(temp0);
      }
    else
      {
      op->vtkImageViewer::SetDisplayId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWindowId(temp0);
      }
    else
      {
      op->vtkImageViewer::SetWindowId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParentId(temp0);
      }
    else
      {
      op->vtkImageViewer::SetParentId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkImageViewer::GetPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0, temp1);
      }
    else
      {
      op->vtkImageViewer::SetPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageViewer_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkImageViewer::SetPosition(temp0);
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
PyvtkImageViewer_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageViewer_SetPosition_s1(self, args);
    case 1:
      return PyvtkImageViewer_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkImageViewer_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkImageViewer::GetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0, temp1);
      }
    else
      {
      op->vtkImageViewer::SetSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageViewer_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetSize(temp0);
      }
    else
      {
      op->vtkImageViewer::SetSize(temp0);
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
PyvtkImageViewer_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageViewer_SetSize_s1(self, args);
    case 1:
      return PyvtkImageViewer_SetSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return NULL;
}



static PyObject *
PyvtkImageViewer_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkImageViewer::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkImageViewer::GetRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_GetImageMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageMapper *tempr = (ap.IsBound() ?
      op->GetImageMapper() :
      op->vtkImageViewer::GetImageMapper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_GetActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->GetActor2D() :
      op->vtkImageViewer::GetActor2D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_SetupInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  vtkRenderWindowInteractor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->SetupInteractor(temp0);
      }
    else
      {
      op->vtkImageViewer::SetupInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_SetOffScreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffScreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOffScreenRendering(temp0);
      }
    else
      {
      op->vtkImageViewer::SetOffScreenRendering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_GetOffScreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffScreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOffScreenRendering() :
      op->vtkImageViewer::GetOffScreenRendering());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_OffScreenRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OffScreenRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OffScreenRenderingOn();
      }
    else
      {
      op->vtkImageViewer::OffScreenRenderingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageViewer_OffScreenRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OffScreenRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer *op = static_cast<vtkImageViewer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OffScreenRenderingOff();
      }
    else
      {
      op->vtkImageViewer::OffScreenRenderingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageViewer_Methods[] = {
  {(char*)"GetClassName", PyvtkImageViewer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageViewer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageViewer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageViewer\nC++: vtkImageViewer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageViewer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageViewer\nC++: vtkImageViewer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetWindowName", PyvtkImageViewer_GetWindowName, METH_VARARGS,
   (char*)"V.GetWindowName() -> string\nC++: char *GetWindowName()\n\nGet name of rendering window\n"},
  {(char*)"Render", PyvtkImageViewer_Render, METH_VARARGS,
   (char*)"V.Render()\nC++: virtual void Render(void)\n\nRender the resulting image.\n"},
  {(char*)"SetInputData", PyvtkImageViewer_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkImageData)\nC++: void SetInputData(vtkImageData *in)\n\nSet/Get the input to the viewer.\n"},
  {(char*)"GetInput", PyvtkImageViewer_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nSet/Get the input to the viewer.\n"},
  {(char*)"SetInputConnection", PyvtkImageViewer_SetInputConnection, METH_VARARGS,
   (char*)"V.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *input)\n\nSet/Get the input to the viewer.\n"},
  {(char*)"GetWholeZMin", PyvtkImageViewer_GetWholeZMin, METH_VARARGS,
   (char*)"V.GetWholeZMin() -> int\nC++: int GetWholeZMin()\n\nWhat is the possible Min/ Max z slices available.\n"},
  {(char*)"GetWholeZMax", PyvtkImageViewer_GetWholeZMax, METH_VARARGS,
   (char*)"V.GetWholeZMax() -> int\nC++: int GetWholeZMax()\n\nWhat is the possible Min/ Max z slices available.\n"},
  {(char*)"GetZSlice", PyvtkImageViewer_GetZSlice, METH_VARARGS,
   (char*)"V.GetZSlice() -> int\nC++: int GetZSlice()\n\nSet/Get the current Z Slice to display\n"},
  {(char*)"SetZSlice", PyvtkImageViewer_SetZSlice, METH_VARARGS,
   (char*)"V.SetZSlice(int)\nC++: void SetZSlice(int s)\n\nSet/Get the current Z Slice to display\n"},
  {(char*)"GetColorWindow", PyvtkImageViewer_GetColorWindow, METH_VARARGS,
   (char*)"V.GetColorWindow() -> float\nC++: double GetColorWindow()\n\nSets window/level for mapping pixels to colors.\n"},
  {(char*)"GetColorLevel", PyvtkImageViewer_GetColorLevel, METH_VARARGS,
   (char*)"V.GetColorLevel() -> float\nC++: double GetColorLevel()\n\nSets window/level for mapping pixels to colors.\n"},
  {(char*)"SetColorWindow", PyvtkImageViewer_SetColorWindow, METH_VARARGS,
   (char*)"V.SetColorWindow(float)\nC++: void SetColorWindow(double s)\n\nSets window/level for mapping pixels to colors.\n"},
  {(char*)"SetColorLevel", PyvtkImageViewer_SetColorLevel, METH_VARARGS,
   (char*)"V.SetColorLevel(float)\nC++: void SetColorLevel(double s)\n\nSets window/level for mapping pixels to colors.\n"},
  {(char*)"SetDisplayId", PyvtkImageViewer_SetDisplayId, METH_VARARGS,
   (char*)"V.SetDisplayId()\nC++: void SetDisplayId(void *a)\n\nThese are here for using a tk window.\n"},
  {(char*)"SetWindowId", PyvtkImageViewer_SetWindowId, METH_VARARGS,
   (char*)"V.SetWindowId()\nC++: void SetWindowId(void *a)\n\nThese are here for using a tk window.\n"},
  {(char*)"SetParentId", PyvtkImageViewer_SetParentId, METH_VARARGS,
   (char*)"V.SetParentId()\nC++: void SetParentId(void *a)\n\nThese are here for using a tk window.\n"},
  {(char*)"GetPosition", PyvtkImageViewer_GetPosition, METH_VARARGS,
   (char*)"V.GetPosition() -> (int, int)\nC++: int *GetPosition()\n\nSet/Get the position in screen coordinates of the rendering\nwindow.\n"},
  {(char*)"SetPosition", PyvtkImageViewer_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(int, int)\nC++: void SetPosition(int a, int b)\nV.SetPosition([int, int])\nC++: virtual void SetPosition(int a[2])\n\nSet/Get the position in screen coordinates of the rendering\nwindow.\n"},
  {(char*)"GetSize", PyvtkImageViewer_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> (int, int)\nC++: int *GetSize()\n\nSet/Get the size of the window in screen coordinates in pixels.\n"},
  {(char*)"SetSize", PyvtkImageViewer_SetSize, METH_VARARGS,
   (char*)"V.SetSize(int, int)\nC++: void SetSize(int a, int b)\nV.SetSize([int, int])\nC++: virtual void SetSize(int a[2])\n\nSet/Get the size of the window in screen coordinates in pixels.\n"},
  {(char*)"GetRenderWindow", PyvtkImageViewer_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nGet the internal objects\n"},
  {(char*)"GetRenderer", PyvtkImageViewer_GetRenderer, METH_VARARGS,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nGet the internal objects\n"},
  {(char*)"GetImageMapper", PyvtkImageViewer_GetImageMapper, METH_VARARGS,
   (char*)"V.GetImageMapper() -> vtkImageMapper\nC++: vtkImageMapper *GetImageMapper()\n\nGet the internal objects\n"},
  {(char*)"GetActor2D", PyvtkImageViewer_GetActor2D, METH_VARARGS,
   (char*)"V.GetActor2D() -> vtkActor2D\nC++: vtkActor2D *GetActor2D()\n\nGet the internal objects\n"},
  {(char*)"SetupInteractor", PyvtkImageViewer_SetupInteractor, METH_VARARGS,
   (char*)"V.SetupInteractor(vtkRenderWindowInteractor)\nC++: void SetupInteractor(vtkRenderWindowInteractor *)\n\nCreate and attach an interactor for this window\n"},
  {(char*)"SetOffScreenRendering", PyvtkImageViewer_SetOffScreenRendering, METH_VARARGS,
   (char*)"V.SetOffScreenRendering(int)\nC++: void SetOffScreenRendering(int)\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {(char*)"GetOffScreenRendering", PyvtkImageViewer_GetOffScreenRendering, METH_VARARGS,
   (char*)"V.GetOffScreenRendering() -> int\nC++: int GetOffScreenRendering()\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {(char*)"OffScreenRenderingOn", PyvtkImageViewer_OffScreenRenderingOn, METH_VARARGS,
   (char*)"V.OffScreenRenderingOn()\nC++: void OffScreenRenderingOn()\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {(char*)"OffScreenRenderingOff", PyvtkImageViewer_OffScreenRenderingOff, METH_VARARGS,
   (char*)"V.OffScreenRenderingOff()\nC++: void OffScreenRenderingOff()\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageViewer_StaticNew()
{
  return vtkImageViewer::New();
}

PyObject *PyVTKClass_vtkImageViewerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageViewer_StaticNew,
    PyvtkImageViewer_Methods,
    "vtkImageViewer", modulename,
    NULL, NULL,
    PyvtkImageViewer_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkImageViewer_Doc()
{
  static const char *docstring[] = {
    "vtkImageViewer - Display a 2d image.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkImageViewer is a convenience class for displaying a 2d image.  It\npackages up the functionality found in vtkRenderWindow, vtkRenderer,\nvtkActor2D and vtkImageMapper into a single easy to use class. \nBehind the scenes these four classes are actually used to to provide\nthe required functionality. vtkImageViewer is simply a wrapper around\nthem.\n\nSee Also:\n\nvtkRenderWindow vtkRenderer vtkImageMappe",
    "r vtkActor2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageViewer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageViewerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageViewer", o) != 0)
    {
    Py_DECREF(o);
    }

}

