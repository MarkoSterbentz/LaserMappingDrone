// python wrapper for vtkCubeAxesActor2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCubeAxesActor2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCubeAxesActor2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCubeAxesActor2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkActor2DNew
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkActor2DNew
#endif

static const char **PyvtkCubeAxesActor2D_Doc();


static PyObject *
PyvtkCubeAxesActor2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCubeAxesActor2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCubeAxesActor2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCubeAxesActor2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCubeAxesActor2D::NewInstance());

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
PyvtkCubeAxesActor2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCubeAxesActor2D *tempr = vtkCubeAxesActor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCubeAxesActor2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCubeAxesActor2D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCubeAxesActor2D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCubeAxesActor2D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      op->vtkCubeAxesActor2D::SetInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkCubeAxesActor2D::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->SetViewProp(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetViewProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProp *tempr = (ap.IsBound() ?
      op->GetViewProp() :
      op->vtkCubeAxesActor2D::GetViewProp());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkCubeAxesActor2D_SetBounds_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor2D_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor2D_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkCubeAxesActor2D::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkCubeAxesActor2D::GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_GetBounds_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::GetBounds(temp0);
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
PyvtkCubeAxesActor2D_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkCubeAxesActor2D_GetBounds_s1(self, args);
    case 6:
      return PyvtkCubeAxesActor2D_GetBounds_s2(self, args);
    case 1:
      return PyvtkCubeAxesActor2D_GetBounds_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor2D_SetRanges_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetRanges(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetRanges(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_SetRanges_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetRanges(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetRanges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_SetRanges(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkCubeAxesActor2D_SetRanges_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor2D_SetRanges_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRanges");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor2D_GetRanges_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetRanges() :
      op->vtkCubeAxesActor2D::GetRanges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_GetRanges_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->GetRanges(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkCubeAxesActor2D::GetRanges(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor2D_GetRanges_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetRanges(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::GetRanges(temp0);
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
PyvtkCubeAxesActor2D_GetRanges(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkCubeAxesActor2D_GetRanges_s1(self, args);
    case 6:
      return PyvtkCubeAxesActor2D_GetRanges_s2(self, args);
    case 1:
      return PyvtkCubeAxesActor2D_GetRanges_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetRanges");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor2D_SetXOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXOrigin(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetXOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetYOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYOrigin(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetYOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetZOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZOrigin(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetZOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetUseRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseRanges(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetUseRanges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetUseRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseRanges() :
      op->vtkCubeAxesActor2D::GetUseRanges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_UseRangesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRangesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseRangesOn();
      }
    else
      {
      op->vtkCubeAxesActor2D::UseRangesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_UseRangesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRangesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseRangesOff();
      }
    else
      {
      op->vtkCubeAxesActor2D::UseRangesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      op->vtkCubeAxesActor2D::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkCubeAxesActor2D::GetCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetFlyMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFlyMode(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetFlyMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFlyModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFlyModeMinValue() :
      op->vtkCubeAxesActor2D::GetFlyModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFlyModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFlyModeMaxValue() :
      op->vtkCubeAxesActor2D::GetFlyModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFlyMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFlyMode() :
      op->vtkCubeAxesActor2D::GetFlyMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetFlyModeToOuterEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToOuterEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFlyModeToOuterEdges();
      }
    else
      {
      op->vtkCubeAxesActor2D::SetFlyModeToOuterEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetFlyModeToClosestTriad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToClosestTriad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFlyModeToClosestTriad();
      }
    else
      {
      op->vtkCubeAxesActor2D::SetFlyModeToClosestTriad();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetFlyModeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFlyModeToNone();
      }
    else
      {
      op->vtkCubeAxesActor2D::SetFlyModeToNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaling(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScaling() :
      op->vtkCubeAxesActor2D::GetScaling());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOn();
      }
    else
      {
      op->vtkCubeAxesActor2D::ScalingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOff();
      }
    else
      {
      op->vtkCubeAxesActor2D::ScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfLabels(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetNumberOfLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetNumberOfLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsMinValue() :
      op->vtkCubeAxesActor2D::GetNumberOfLabelsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetNumberOfLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsMaxValue() :
      op->vtkCubeAxesActor2D::GetNumberOfLabelsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabels() :
      op->vtkCubeAxesActor2D::GetNumberOfLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetXLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXLabel(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetXLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetXLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXLabel() :
      op->vtkCubeAxesActor2D::GetXLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetYLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYLabel(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetYLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetYLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetYLabel() :
      op->vtkCubeAxesActor2D::GetYLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetZLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZLabel(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetZLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetZLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetZLabel() :
      op->vtkCubeAxesActor2D::GetZLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetXAxisActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetXAxisActor2D() :
      op->vtkCubeAxesActor2D::GetXAxisActor2D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetYAxisActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetYAxisActor2D() :
      op->vtkCubeAxesActor2D::GetYAxisActor2D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetZAxisActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetZAxisActor2D() :
      op->vtkCubeAxesActor2D::GetZAxisActor2D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetAxisTitleTextProperty(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetAxisTitleTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetAxisTitleTextProperty() :
      op->vtkCubeAxesActor2D::GetAxisTitleTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelTextProperty(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetAxisLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetAxisLabelTextProperty() :
      op->vtkCubeAxesActor2D::GetAxisLabelTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelFormat(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkCubeAxesActor2D::GetLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetFontFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFontFactor(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetFontFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFontFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFontFactorMinValue() :
      op->vtkCubeAxesActor2D::GetFontFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFontFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFontFactorMaxValue() :
      op->vtkCubeAxesActor2D::GetFontFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetFontFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFontFactor() :
      op->vtkCubeAxesActor2D::GetFontFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetInertia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInertia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInertia(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetInertia(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetInertiaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertiaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInertiaMinValue() :
      op->vtkCubeAxesActor2D::GetInertiaMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetInertiaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertiaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInertiaMaxValue() :
      op->vtkCubeAxesActor2D::GetInertiaMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetInertia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInertia() :
      op->vtkCubeAxesActor2D::GetInertia());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetShowActualBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowActualBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowActualBounds(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetShowActualBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetShowActualBoundsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowActualBoundsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShowActualBoundsMinValue() :
      op->vtkCubeAxesActor2D::GetShowActualBoundsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetShowActualBoundsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowActualBoundsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShowActualBoundsMaxValue() :
      op->vtkCubeAxesActor2D::GetShowActualBoundsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetShowActualBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowActualBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShowActualBounds() :
      op->vtkCubeAxesActor2D::GetShowActualBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      op->vtkCubeAxesActor2D::SetCornerOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffset() :
      op->vtkCubeAxesActor2D::GetCornerOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

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
      op->vtkCubeAxesActor2D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetXAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetXAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetXAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXAxisVisibility() :
      op->vtkCubeAxesActor2D::GetXAxisVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_XAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor2D::XAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_XAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor2D::XAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetYAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetYAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetYAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYAxisVisibility() :
      op->vtkCubeAxesActor2D::GetYAxisVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_YAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor2D::YAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_YAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor2D::YAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_SetZAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::SetZAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_GetZAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZAxisVisibility() :
      op->vtkCubeAxesActor2D::GetZAxisVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ZAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor2D::ZAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ZAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor2D::ZAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor2D *op = static_cast<vtkCubeAxesActor2D *>(vp);

  vtkCubeAxesActor2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCubeAxesActor2D"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkCubeAxesActor2D::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCubeAxesActor2D_Methods[] = {
  {(char*)"GetClassName", PyvtkCubeAxesActor2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCubeAxesActor2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCubeAxesActor2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCubeAxesActor2D\nC++: vtkCubeAxesActor2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCubeAxesActor2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCubeAxesActor2D\nC++: vtkCubeAxesActor2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOverlay", PyvtkCubeAxesActor2D_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *)\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkCubeAxesActor2D_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *)\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkCubeAxesActor2D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkCubeAxesActor2D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"SetInputConnection", PyvtkCubeAxesActor2D_SetInputConnection, METH_VARARGS,
   (char*)"V.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *)\n\nUse the bounding box of this input dataset to draw the cube axes.\nIf this is not specified, then the class will attempt to\ndetermine the bounds from the defined Prop or Bounds.\n"},
  {(char*)"SetInputData", PyvtkCubeAxesActor2D_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkDataSet)\nC++: virtual void SetInputData(vtkDataSet *)\n\nUse the bounding box of this input dataset to draw the cube axes.\nIf this is not specified, then the class will attempt to\ndetermine the bounds from the defined Prop or Bounds.\n"},
  {(char*)"GetInput", PyvtkCubeAxesActor2D_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkDataSet\nC++: virtual vtkDataSet *GetInput()\n\nUse the bounding box of this input dataset to draw the cube axes.\nIf this is not specified, then the class will attempt to\ndetermine the bounds from the defined Prop or Bounds.\n"},
  {(char*)"SetViewProp", PyvtkCubeAxesActor2D_SetViewProp, METH_VARARGS,
   (char*)"V.SetViewProp(vtkProp)\nC++: void SetViewProp(vtkProp *prop)\n\nUse the bounding box of this prop to draw the cube axes. The\nViewProp is used to determine the bounds only if the Input is not\ndefined.\n"},
  {(char*)"GetViewProp", PyvtkCubeAxesActor2D_GetViewProp, METH_VARARGS,
   (char*)"V.GetViewProp() -> vtkProp\nC++: vtkProp *GetViewProp()\n\nUse the bounding box of this prop to draw the cube axes. The\nViewProp is used to determine the bounds only if the Input is not\ndefined.\n"},
  {(char*)"SetBounds", PyvtkCubeAxesActor2D_SetBounds, METH_VARARGS,
   (char*)"V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {(char*)"GetBounds", PyvtkCubeAxesActor2D_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\nV.GetBounds(float, float, float, float, float, float)\nC++: void GetBounds(double &xmin, double &xmax, double &ymin,\n    double &ymax, double &zmin, double &zmax)\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nExplicitly specify the region in space around which to draw the\nbounds. The bounds is used only when no Input or Prop is\nspecified. The bounds are specified according to (xmin,xmax,\nymin,ymax, zmin,zmax), making sure that the min's are less than the\nmax's.\n"},
  {(char*)"SetRanges", PyvtkCubeAxesActor2D_SetRanges, METH_VARARGS,
   (char*)"V.SetRanges(float, float, float, float, float, float)\nC++: void SetRanges(double, double, double, double, double,\n    double)\nV.SetRanges((float, float, float, float, float, float))\nC++: void SetRanges(double a[6])\n\n"},
  {(char*)"GetRanges", PyvtkCubeAxesActor2D_GetRanges, METH_VARARGS,
   (char*)"V.GetRanges() -> (float, float, float, float, float, float)\nC++: double *GetRanges()\nV.GetRanges(float, float, float, float, float, float)\nC++: void GetRanges(double &xmin, double &xmax, double &ymin,\n    double &ymax, double &zmin, double &zmax)\nV.GetRanges([float, float, float, float, float, float])\nC++: void GetRanges(double ranges[6])\n\nExplicitly specify the range of values used on the bounds. The\nranges are specified according to (xmin,xmax, ymin,ymax,\nzmin,zmax), making sure that the min's are less than the max's.\n"},
  {(char*)"SetXOrigin", PyvtkCubeAxesActor2D_SetXOrigin, METH_VARARGS,
   (char*)"V.SetXOrigin(float)\nC++: void SetXOrigin(double a)\n\nExplicitly specify an origin for the axes. These usually\nintersect at one of the corners of the bounding box, however\nusers have the option to override this if necessary\n"},
  {(char*)"SetYOrigin", PyvtkCubeAxesActor2D_SetYOrigin, METH_VARARGS,
   (char*)"V.SetYOrigin(float)\nC++: void SetYOrigin(double a)\n\nExplicitly specify an origin for the axes. These usually\nintersect at one of the corners of the bounding box, however\nusers have the option to override this if necessary\n"},
  {(char*)"SetZOrigin", PyvtkCubeAxesActor2D_SetZOrigin, METH_VARARGS,
   (char*)"V.SetZOrigin(float)\nC++: void SetZOrigin(double a)\n\nExplicitly specify an origin for the axes. These usually\nintersect at one of the corners of the bounding box, however\nusers have the option to override this if necessary\n"},
  {(char*)"SetUseRanges", PyvtkCubeAxesActor2D_SetUseRanges, METH_VARARGS,
   (char*)"V.SetUseRanges(int)\nC++: void SetUseRanges(int a)\n\nSet/Get a flag that controls whether the axes use the data ranges\nor the ranges set by SetRanges. By default the axes use the data\nranges.\n"},
  {(char*)"GetUseRanges", PyvtkCubeAxesActor2D_GetUseRanges, METH_VARARGS,
   (char*)"V.GetUseRanges() -> int\nC++: int GetUseRanges()\n\nSet/Get a flag that controls whether the axes use the data ranges\nor the ranges set by SetRanges. By default the axes use the data\nranges.\n"},
  {(char*)"UseRangesOn", PyvtkCubeAxesActor2D_UseRangesOn, METH_VARARGS,
   (char*)"V.UseRangesOn()\nC++: void UseRangesOn()\n\nSet/Get a flag that controls whether the axes use the data ranges\nor the ranges set by SetRanges. By default the axes use the data\nranges.\n"},
  {(char*)"UseRangesOff", PyvtkCubeAxesActor2D_UseRangesOff, METH_VARARGS,
   (char*)"V.UseRangesOff()\nC++: void UseRangesOff()\n\nSet/Get a flag that controls whether the axes use the data ranges\nor the ranges set by SetRanges. By default the axes use the data\nranges.\n"},
  {(char*)"SetCamera", PyvtkCubeAxesActor2D_SetCamera, METH_VARARGS,
   (char*)"V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSet/Get the camera to perform scaling and translation of the\nvtkCubeAxesActor2D.\n"},
  {(char*)"GetCamera", PyvtkCubeAxesActor2D_GetCamera, METH_VARARGS,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nSet/Get the camera to perform scaling and translation of the\nvtkCubeAxesActor2D.\n"},
  {(char*)"SetFlyMode", PyvtkCubeAxesActor2D_SetFlyMode, METH_VARARGS,
   (char*)"V.SetFlyMode(int)\nC++: void SetFlyMode(int)\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {(char*)"GetFlyModeMinValue", PyvtkCubeAxesActor2D_GetFlyModeMinValue, METH_VARARGS,
   (char*)"V.GetFlyModeMinValue() -> int\nC++: int GetFlyModeMinValue()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {(char*)"GetFlyModeMaxValue", PyvtkCubeAxesActor2D_GetFlyModeMaxValue, METH_VARARGS,
   (char*)"V.GetFlyModeMaxValue() -> int\nC++: int GetFlyModeMaxValue()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {(char*)"GetFlyMode", PyvtkCubeAxesActor2D_GetFlyMode, METH_VARARGS,
   (char*)"V.GetFlyMode() -> int\nC++: int GetFlyMode()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {(char*)"SetFlyModeToOuterEdges", PyvtkCubeAxesActor2D_SetFlyModeToOuterEdges, METH_VARARGS,
   (char*)"V.SetFlyModeToOuterEdges()\nC++: void SetFlyModeToOuterEdges()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {(char*)"SetFlyModeToClosestTriad", PyvtkCubeAxesActor2D_SetFlyModeToClosestTriad, METH_VARARGS,
   (char*)"V.SetFlyModeToClosestTriad()\nC++: void SetFlyModeToClosestTriad()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {(char*)"SetFlyModeToNone", PyvtkCubeAxesActor2D_SetFlyModeToNone, METH_VARARGS,
   (char*)"V.SetFlyModeToNone()\nC++: void SetFlyModeToNone()\n\nSpecify a mode to control how the axes are drawn: either outer\nedges or closest triad to the camera position, or you may also\ndisable flying of the axes.\n"},
  {(char*)"SetScaling", PyvtkCubeAxesActor2D_SetScaling, METH_VARARGS,
   (char*)"V.SetScaling(int)\nC++: void SetScaling(int a)\n\nSet/Get a flag that controls whether the axes are scaled to fit\nin the viewport. If off, the axes size remains constant (i.e.,\nstay the size of the bounding box). By default scaling is on so\nthe axes are scaled to fit inside the viewport.\n"},
  {(char*)"GetScaling", PyvtkCubeAxesActor2D_GetScaling, METH_VARARGS,
   (char*)"V.GetScaling() -> int\nC++: int GetScaling()\n\nSet/Get a flag that controls whether the axes are scaled to fit\nin the viewport. If off, the axes size remains constant (i.e.,\nstay the size of the bounding box). By default scaling is on so\nthe axes are scaled to fit inside the viewport.\n"},
  {(char*)"ScalingOn", PyvtkCubeAxesActor2D_ScalingOn, METH_VARARGS,
   (char*)"V.ScalingOn()\nC++: void ScalingOn()\n\nSet/Get a flag that controls whether the axes are scaled to fit\nin the viewport. If off, the axes size remains constant (i.e.,\nstay the size of the bounding box). By default scaling is on so\nthe axes are scaled to fit inside the viewport.\n"},
  {(char*)"ScalingOff", PyvtkCubeAxesActor2D_ScalingOff, METH_VARARGS,
   (char*)"V.ScalingOff()\nC++: void ScalingOff()\n\nSet/Get a flag that controls whether the axes are scaled to fit\nin the viewport. If off, the axes size remains constant (i.e.,\nstay the size of the bounding box). By default scaling is on so\nthe axes are scaled to fit inside the viewport.\n"},
  {(char*)"SetNumberOfLabels", PyvtkCubeAxesActor2D_SetNumberOfLabels, METH_VARARGS,
   (char*)"V.SetNumberOfLabels(int)\nC++: void SetNumberOfLabels(int)\n\nSet/Get the number of annotation labels to show along the x, y,\nand z axes. This values is a suggestion: the number of labels may\nvary depending on the particulars of the data.\n"},
  {(char*)"GetNumberOfLabelsMinValue", PyvtkCubeAxesActor2D_GetNumberOfLabelsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfLabelsMinValue() -> int\nC++: int GetNumberOfLabelsMinValue()\n\nSet/Get the number of annotation labels to show along the x, y,\nand z axes. This values is a suggestion: the number of labels may\nvary depending on the particulars of the data.\n"},
  {(char*)"GetNumberOfLabelsMaxValue", PyvtkCubeAxesActor2D_GetNumberOfLabelsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfLabelsMaxValue() -> int\nC++: int GetNumberOfLabelsMaxValue()\n\nSet/Get the number of annotation labels to show along the x, y,\nand z axes. This values is a suggestion: the number of labels may\nvary depending on the particulars of the data.\n"},
  {(char*)"GetNumberOfLabels", PyvtkCubeAxesActor2D_GetNumberOfLabels, METH_VARARGS,
   (char*)"V.GetNumberOfLabels() -> int\nC++: int GetNumberOfLabels()\n\nSet/Get the number of annotation labels to show along the x, y,\nand z axes. This values is a suggestion: the number of labels may\nvary depending on the particulars of the data.\n"},
  {(char*)"SetXLabel", PyvtkCubeAxesActor2D_SetXLabel, METH_VARARGS,
   (char*)"V.SetXLabel(string)\nC++: void SetXLabel(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {(char*)"GetXLabel", PyvtkCubeAxesActor2D_GetXLabel, METH_VARARGS,
   (char*)"V.GetXLabel() -> string\nC++: char *GetXLabel()\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {(char*)"SetYLabel", PyvtkCubeAxesActor2D_SetYLabel, METH_VARARGS,
   (char*)"V.SetYLabel(string)\nC++: void SetYLabel(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {(char*)"GetYLabel", PyvtkCubeAxesActor2D_GetYLabel, METH_VARARGS,
   (char*)"V.GetYLabel() -> string\nC++: char *GetYLabel()\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {(char*)"SetZLabel", PyvtkCubeAxesActor2D_SetZLabel, METH_VARARGS,
   (char*)"V.SetZLabel(string)\nC++: void SetZLabel(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {(char*)"GetZLabel", PyvtkCubeAxesActor2D_GetZLabel, METH_VARARGS,
   (char*)"V.GetZLabel() -> string\nC++: char *GetZLabel()\n\nSet/Get the labels for the x, y, and z axes. By default, use \"X\",\n\"Y\" and \"Z\".\n"},
  {(char*)"GetXAxisActor2D", PyvtkCubeAxesActor2D_GetXAxisActor2D, METH_VARARGS,
   (char*)"V.GetXAxisActor2D() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetXAxisActor2D()\n\nRetrieve handles to the X, Y and Z axis (so that you can set\ntheir text properties for example)\n"},
  {(char*)"GetYAxisActor2D", PyvtkCubeAxesActor2D_GetYAxisActor2D, METH_VARARGS,
   (char*)"V.GetYAxisActor2D() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetYAxisActor2D()\n\nRetrieve handles to the X, Y and Z axis (so that you can set\ntheir text properties for example)\n"},
  {(char*)"GetZAxisActor2D", PyvtkCubeAxesActor2D_GetZAxisActor2D, METH_VARARGS,
   (char*)"V.GetZAxisActor2D() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetZAxisActor2D()\n\nRetrieve handles to the X, Y and Z axis (so that you can set\ntheir text properties for example)\n"},
  {(char*)"SetAxisTitleTextProperty", PyvtkCubeAxesActor2D_SetAxisTitleTextProperty, METH_VARARGS,
   (char*)"V.SetAxisTitleTextProperty(vtkTextProperty)\nC++: virtual void SetAxisTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property of all axes. Note that each axis\ncan be controlled individually through the GetX/Y/ZAxisActor2D()\nmethods.\n"},
  {(char*)"GetAxisTitleTextProperty", PyvtkCubeAxesActor2D_GetAxisTitleTextProperty, METH_VARARGS,
   (char*)"V.GetAxisTitleTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetAxisTitleTextProperty()\n\nSet/Get the title text property of all axes. Note that each axis\ncan be controlled individually through the GetX/Y/ZAxisActor2D()\nmethods.\n"},
  {(char*)"SetAxisLabelTextProperty", PyvtkCubeAxesActor2D_SetAxisLabelTextProperty, METH_VARARGS,
   (char*)"V.SetAxisLabelTextProperty(vtkTextProperty)\nC++: virtual void SetAxisLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property of all axes. Note that each axis\ncan be controlled individually through the GetX/Y/ZAxisActor2D()\nmethods.\n"},
  {(char*)"GetAxisLabelTextProperty", PyvtkCubeAxesActor2D_GetAxisLabelTextProperty, METH_VARARGS,
   (char*)"V.GetAxisLabelTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetAxisLabelTextProperty()\n\nSet/Get the labels text property of all axes. Note that each axis\ncan be controlled individually through the GetX/Y/ZAxisActor2D()\nmethods.\n"},
  {(char*)"SetLabelFormat", PyvtkCubeAxesActor2D_SetLabelFormat, METH_VARARGS,
   (char*)"V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *)\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {(char*)"GetLabelFormat", PyvtkCubeAxesActor2D_GetLabelFormat, METH_VARARGS,
   (char*)"V.GetLabelFormat() -> string\nC++: char *GetLabelFormat()\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {(char*)"SetFontFactor", PyvtkCubeAxesActor2D_SetFontFactor, METH_VARARGS,
   (char*)"V.SetFontFactor(float)\nC++: void SetFontFactor(double)\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes.\n"},
  {(char*)"GetFontFactorMinValue", PyvtkCubeAxesActor2D_GetFontFactorMinValue, METH_VARARGS,
   (char*)"V.GetFontFactorMinValue() -> float\nC++: double GetFontFactorMinValue()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes.\n"},
  {(char*)"GetFontFactorMaxValue", PyvtkCubeAxesActor2D_GetFontFactorMaxValue, METH_VARARGS,
   (char*)"V.GetFontFactorMaxValue() -> float\nC++: double GetFontFactorMaxValue()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes.\n"},
  {(char*)"GetFontFactor", PyvtkCubeAxesActor2D_GetFontFactor, METH_VARARGS,
   (char*)"V.GetFontFactor() -> float\nC++: double GetFontFactor()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes.\n"},
  {(char*)"SetInertia", PyvtkCubeAxesActor2D_SetInertia, METH_VARARGS,
   (char*)"V.SetInertia(int)\nC++: void SetInertia(int)\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {(char*)"GetInertiaMinValue", PyvtkCubeAxesActor2D_GetInertiaMinValue, METH_VARARGS,
   (char*)"V.GetInertiaMinValue() -> int\nC++: int GetInertiaMinValue()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {(char*)"GetInertiaMaxValue", PyvtkCubeAxesActor2D_GetInertiaMaxValue, METH_VARARGS,
   (char*)"V.GetInertiaMaxValue() -> int\nC++: int GetInertiaMaxValue()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {(char*)"GetInertia", PyvtkCubeAxesActor2D_GetInertia, METH_VARARGS,
   (char*)"V.GetInertia() -> int\nC++: int GetInertia()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {(char*)"SetShowActualBounds", PyvtkCubeAxesActor2D_SetShowActualBounds, METH_VARARGS,
   (char*)"V.SetShowActualBounds(int)\nC++: void SetShowActualBounds(int)\n\nSet/Get the variable that controls whether the actual bounds of\nthe dataset are always shown. Setting this variable to 1 means\nthat clipping is disabled and that the actual value of the bounds\nis displayed even with corner offsets Setting this variable to 0\nmeans these axis will clip themselves and show variable bounds\n(legacy mode)\n"},
  {(char*)"GetShowActualBoundsMinValue", PyvtkCubeAxesActor2D_GetShowActualBoundsMinValue, METH_VARARGS,
   (char*)"V.GetShowActualBoundsMinValue() -> int\nC++: int GetShowActualBoundsMinValue()\n\nSet/Get the variable that controls whether the actual bounds of\nthe dataset are always shown. Setting this variable to 1 means\nthat clipping is disabled and that the actual value of the bounds\nis displayed even with corner offsets Setting this variable to 0\nmeans these axis will clip themselves and show variable bounds\n(legacy mode)\n"},
  {(char*)"GetShowActualBoundsMaxValue", PyvtkCubeAxesActor2D_GetShowActualBoundsMaxValue, METH_VARARGS,
   (char*)"V.GetShowActualBoundsMaxValue() -> int\nC++: int GetShowActualBoundsMaxValue()\n\nSet/Get the variable that controls whether the actual bounds of\nthe dataset are always shown. Setting this variable to 1 means\nthat clipping is disabled and that the actual value of the bounds\nis displayed even with corner offsets Setting this variable to 0\nmeans these axis will clip themselves and show variable bounds\n(legacy mode)\n"},
  {(char*)"GetShowActualBounds", PyvtkCubeAxesActor2D_GetShowActualBounds, METH_VARARGS,
   (char*)"V.GetShowActualBounds() -> int\nC++: int GetShowActualBounds()\n\nSet/Get the variable that controls whether the actual bounds of\nthe dataset are always shown. Setting this variable to 1 means\nthat clipping is disabled and that the actual value of the bounds\nis displayed even with corner offsets Setting this variable to 0\nmeans these axis will clip themselves and show variable bounds\n(legacy mode)\n"},
  {(char*)"SetCornerOffset", PyvtkCubeAxesActor2D_SetCornerOffset, METH_VARARGS,
   (char*)"V.SetCornerOffset(float)\nC++: void SetCornerOffset(double a)\n\nSpecify an offset value to \"pull back\" the axes from the corner\nat which they are joined to avoid overlap of axes labels. The\n\"CornerOffset\" is the fraction of the axis length to pull back.\n"},
  {(char*)"GetCornerOffset", PyvtkCubeAxesActor2D_GetCornerOffset, METH_VARARGS,
   (char*)"V.GetCornerOffset() -> float\nC++: double GetCornerOffset()\n\nSpecify an offset value to \"pull back\" the axes from the corner\nat which they are joined to avoid overlap of axes labels. The\n\"CornerOffset\" is the fraction of the axis length to pull back.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkCubeAxesActor2D_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"SetXAxisVisibility", PyvtkCubeAxesActor2D_SetXAxisVisibility, METH_VARARGS,
   (char*)"V.SetXAxisVisibility(int)\nC++: void SetXAxisVisibility(int a)\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"GetXAxisVisibility", PyvtkCubeAxesActor2D_GetXAxisVisibility, METH_VARARGS,
   (char*)"V.GetXAxisVisibility() -> int\nC++: int GetXAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"XAxisVisibilityOn", PyvtkCubeAxesActor2D_XAxisVisibilityOn, METH_VARARGS,
   (char*)"V.XAxisVisibilityOn()\nC++: void XAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"XAxisVisibilityOff", PyvtkCubeAxesActor2D_XAxisVisibilityOff, METH_VARARGS,
   (char*)"V.XAxisVisibilityOff()\nC++: void XAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"SetYAxisVisibility", PyvtkCubeAxesActor2D_SetYAxisVisibility, METH_VARARGS,
   (char*)"V.SetYAxisVisibility(int)\nC++: void SetYAxisVisibility(int a)\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"GetYAxisVisibility", PyvtkCubeAxesActor2D_GetYAxisVisibility, METH_VARARGS,
   (char*)"V.GetYAxisVisibility() -> int\nC++: int GetYAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"YAxisVisibilityOn", PyvtkCubeAxesActor2D_YAxisVisibilityOn, METH_VARARGS,
   (char*)"V.YAxisVisibilityOn()\nC++: void YAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"YAxisVisibilityOff", PyvtkCubeAxesActor2D_YAxisVisibilityOff, METH_VARARGS,
   (char*)"V.YAxisVisibilityOff()\nC++: void YAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"SetZAxisVisibility", PyvtkCubeAxesActor2D_SetZAxisVisibility, METH_VARARGS,
   (char*)"V.SetZAxisVisibility(int)\nC++: void SetZAxisVisibility(int a)\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"GetZAxisVisibility", PyvtkCubeAxesActor2D_GetZAxisVisibility, METH_VARARGS,
   (char*)"V.GetZAxisVisibility() -> int\nC++: int GetZAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"ZAxisVisibilityOn", PyvtkCubeAxesActor2D_ZAxisVisibilityOn, METH_VARARGS,
   (char*)"V.ZAxisVisibilityOn()\nC++: void ZAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"ZAxisVisibilityOff", PyvtkCubeAxesActor2D_ZAxisVisibilityOff, METH_VARARGS,
   (char*)"V.ZAxisVisibilityOff()\nC++: void ZAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"ShallowCopy", PyvtkCubeAxesActor2D_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkCubeAxesActor2D)\nC++: void ShallowCopy(vtkCubeAxesActor2D *actor)\n\nShallow copy of a CubeAxesActor2D.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCubeAxesActor2D_StaticNew()
{
  return vtkCubeAxesActor2D::New();
}

PyObject *PyVTKClass_vtkCubeAxesActor2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCubeAxesActor2D_StaticNew,
    PyvtkCubeAxesActor2D_Methods,
    "vtkCubeAxesActor2D", modulename,
    NULL, NULL,
    PyvtkCubeAxesActor2D_Doc(),
    PyVTKClass_vtkActor2DNew(modulename));
  return cls;
}

const char **PyvtkCubeAxesActor2D_Doc()
{
  static const char *docstring[] = {
    "vtkCubeAxesActor2D - create a 2D plot of a bounding box edges - used\nfor navigation\n\n",
    "Superclass: vtkActor2D\n\n",
    "vtkCubeAxesActor2D is a composite actor that draws three axes of the\nbounding box of an input dataset. The axes include labels and titles\nfor the x-y-z axes. The algorithm selects the axes that are on the\n\"exterior\" of the bounding box, exterior as determined from examining\nouter edges of the bounding box in projection (display) space.\nAlternatively, the edges closest to the viewer (i.e., camera\np",
    "osition) can be drawn.\n\nTo use this object you must define a bounding box and the camera used\nto render the vtkCubeAxesActor2D. The camera is used to control the\nscaling and position of the vtkCubeAxesActor2D so that it fits in the\nviewport and always remains visible.)\n\nThe font property of the axes titles and labels can be modified\nthrough the AxisTitleTextProperty and AxisLabelTextProperty\nattri",
    "butes. You may also use the GetXAxisActor2D, GetYAxisActor2D or\nGetZAxisActor2D methods to access each individual axis actor to\nmodify their font properties.\n\nThe bounding box to use is defined in one of three ways. First, if\nthe Input ivar is defined, then the input dataset's bounds is used.\nIf the Input is not defined, and the Prop (superclass of all actors)\nis defined, then the Prop's bounds is",
    " used. If neither the Input or\nProp is defined, then the Bounds instance variable (an array of six\ndoubles) is used.\n\nSee Also:\n\nvtkActor2D vtkAxisActor2D vtkXYPlotActor vtkTextProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCubeAxesActor2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCubeAxesActor2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCubeAxesActor2D", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_FLY_OUTER_EDGES", 0 },
        { "VTK_FLY_CLOSEST_TRIAD", 1 },
        { "VTK_FLY_NONE", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

