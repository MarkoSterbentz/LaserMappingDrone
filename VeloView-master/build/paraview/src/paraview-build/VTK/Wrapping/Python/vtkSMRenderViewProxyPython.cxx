// python wrapper for vtkSMRenderViewProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMRenderViewProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMRenderViewProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMRenderViewProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMViewProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMViewProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMViewProxyNew
#endif

static const char **PyvtkSMRenderViewProxy_Doc();


static PyObject *
PyvtkSMRenderViewProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMRenderViewProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMRenderViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMRenderViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMRenderViewProxy::NewInstance());

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
PyvtkSMRenderViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMRenderViewProxy *tempr = vtkSMRenderViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_SelectSurfaceCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectSurfaceCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  int temp0[4];
  const int size0 = 4;
  vtkCollection *temp1 = NULL;
  vtkCollection *temp2 = NULL;
  bool temp3 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    bool tempr = (ap.IsBound() ?
      op->SelectSurfaceCells(temp0, temp1, temp2, temp3) :
      op->vtkSMRenderViewProxy::SelectSurfaceCells(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_SelectSurfacePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectSurfacePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  int temp0[4];
  const int size0 = 4;
  vtkCollection *temp1 = NULL;
  vtkCollection *temp2 = NULL;
  bool temp3 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    bool tempr = (ap.IsBound() ?
      op->SelectSurfacePoints(temp0, temp1, temp2, temp3) :
      op->vtkSMRenderViewProxy::SelectSurfacePoints(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_SelectFrustumCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectFrustumCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  int temp0[4];
  const int size0 = 4;
  vtkCollection *temp1 = NULL;
  vtkCollection *temp2 = NULL;
  bool temp3 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    bool tempr = (ap.IsBound() ?
      op->SelectFrustumCells(temp0, temp1, temp2, temp3) :
      op->vtkSMRenderViewProxy::SelectFrustumCells(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_SelectFrustumPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectFrustumPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  int temp0[4];
  const int size0 = 4;
  vtkCollection *temp1 = NULL;
  vtkCollection *temp2 = NULL;
  bool temp3 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    bool tempr = (ap.IsBound() ?
      op->SelectFrustumPoints(temp0, temp1, temp2, temp3) :
      op->vtkSMRenderViewProxy::SelectFrustumPoints(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_SelectPolygonPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPolygonPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  vtkIntArray *temp0 = NULL;
  vtkCollection *temp1 = NULL;
  vtkCollection *temp2 = NULL;
  bool temp3 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkIntArray") &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    bool tempr = (ap.IsBound() ?
      op->SelectPolygonPoints(temp0, temp1, temp2, temp3) :
      op->vtkSMRenderViewProxy::SelectPolygonPoints(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_SelectPolygonCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPolygonCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  vtkIntArray *temp0 = NULL;
  vtkCollection *temp1 = NULL;
  vtkCollection *temp2 = NULL;
  bool temp3 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkIntArray") &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    bool tempr = (ap.IsBound() ?
      op->SelectPolygonCells(temp0, temp1, temp2, temp3) :
      op->vtkSMRenderViewProxy::SelectPolygonCells(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_ComputeVisibleScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVisibleScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  int temp0[4];
  const int size0 = 4;
  int temp1;
  char *temp2 = NULL;
  int temp3;
  double *temp4 = NULL;
  double *save4 = NULL;
  double small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new double[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp4, save4, size4);

    bool tempr = (ap.IsBound() ?
      op->ComputeVisibleScalarRange(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSMRenderViewProxy::ComputeVisibleScalarRange(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkSMRenderViewProxy_ComputeVisibleScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVisibleScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new double[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    bool tempr = (ap.IsBound() ?
      op->ComputeVisibleScalarRange(temp0, temp1, temp2, temp3) :
      op->vtkSMRenderViewProxy::ComputeVisibleScalarRange(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkSMRenderViewProxy_ComputeVisibleScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkSMRenderViewProxy_ComputeVisibleScalarRange_s1(self, args);
    case 4:
      return PyvtkSMRenderViewProxy_ComputeVisibleScalarRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeVisibleScalarRange");
  return NULL;
}



static PyObject *
PyvtkSMRenderViewProxy_Pick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkSMRepresentationProxy *tempr = (ap.IsBound() ?
      op->Pick(temp0, temp1) :
      op->vtkSMRenderViewProxy::Pick(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_PickBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  int temp0;
  int temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkSMRepresentationProxy *tempr = (ap.IsBound() ?
      op->PickBlock(temp0, temp1, temp2) :
      op->vtkSMRenderViewProxy::PickBlock(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_ConvertDisplayToPointOnSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertDisplayToPointOnSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  int temp0[2];
  const int size0 = 2;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->ConvertDisplayToPointOnSurface(temp0, temp1) :
      op->vtkSMRenderViewProxy::ConvertDisplayToPointOnSurface(temp0, temp1));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_IsSelectionAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSelectionAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsSelectionAvailable() :
      op->vtkSMRenderViewProxy::IsSelectionAvailable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_ResetCamera_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetCamera();
      }
    else
      {
      op->vtkSMRenderViewProxy::ResetCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMRenderViewProxy_ResetCamera_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

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
      op->ResetCamera(temp0);
      }
    else
      {
      op->vtkSMRenderViewProxy::ResetCamera(temp0);
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
PyvtkSMRenderViewProxy_ResetCamera_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

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
      op->ResetCamera(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkSMRenderViewProxy::ResetCamera(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMRenderViewProxy_ResetCamera(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMRenderViewProxy_ResetCamera_s1(self, args);
    case 1:
      return PyvtkSMRenderViewProxy_ResetCamera_s2(self, args);
    case 6:
      return PyvtkSMRenderViewProxy_ResetCamera_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ResetCamera");
  return NULL;
}



static PyObject *
PyvtkSMRenderViewProxy_ZoomTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZoomTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->ZoomTo(temp0);
      }
    else
      {
      op->vtkSMRenderViewProxy::ZoomTo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_IsSelectVisibleCellsAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSelectVisibleCellsAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->IsSelectVisibleCellsAvailable() :
      op->vtkSMRenderViewProxy::IsSelectVisibleCellsAvailable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_IsSelectVisiblePointsAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSelectVisiblePointsAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->IsSelectVisiblePointsAvailable() :
      op->vtkSMRenderViewProxy::IsSelectVisiblePointsAvailable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVGenericRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkSMRenderViewProxy::GetInteractor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkSMRenderViewProxy::GetRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetActiveCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetActiveCamera() :
      op->vtkSMRenderViewProxy::GetActiveCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_SynchronizeCameraProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeCameraProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SynchronizeCameraProperties();
      }
    else
      {
      op->vtkSMRenderViewProxy::SynchronizeCameraProperties();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_LastRenderWasInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LastRenderWasInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->LastRenderWasInteractive() :
      op->vtkSMRenderViewProxy::LastRenderWasInteractive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetZBufferValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZBufferValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = (ap.IsBound() ?
      op->GetZBufferValue(temp0, temp1) :
      op->vtkSMRenderViewProxy::GetZBufferValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkSMRenderViewProxy::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetNeedsUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedsUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetNeedsUpdate() :
      op->vtkSMRenderViewProxy::GetNeedsUpdate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_StreamingUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StreamingUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->StreamingUpdate(temp0) :
      op->vtkSMRenderViewProxy::StreamingUpdate(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetRepresentationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetRepresentationType(temp0, temp1) :
      op->vtkSMRenderViewProxy::GetRepresentationType(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewProxy_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewProxy *op = static_cast<vtkSMRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkSMRenderViewProxy::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMRenderViewProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMRenderViewProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMRenderViewProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMRenderViewProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMRenderViewProxy\nC++: vtkSMRenderViewProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMRenderViewProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMRenderViewProxy\nC++: vtkSMRenderViewProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SelectSurfaceCells", PyvtkSMRenderViewProxy_SelectSurfaceCells, METH_VARARGS,
   (char*)"V.SelectSurfaceCells((int, int, int, int), vtkCollection,\n    vtkCollection, bool) -> bool\nC++: bool SelectSurfaceCells(const int region[4],\n    vtkCollection *selectedRepresentations,\n    vtkCollection *selectionSources,\n    bool multiple_selections=false)\n\nMakes a new selection source proxy.\n"},
  {(char*)"SelectSurfacePoints", PyvtkSMRenderViewProxy_SelectSurfacePoints, METH_VARARGS,
   (char*)"V.SelectSurfacePoints((int, int, int, int), vtkCollection,\n    vtkCollection, bool) -> bool\nC++: bool SelectSurfacePoints(const int region[4],\n    vtkCollection *selectedRepresentations,\n    vtkCollection *selectionSources,\n    bool multiple_selections=false)\n\nMakes a new selection source proxy.\n"},
  {(char*)"SelectFrustumCells", PyvtkSMRenderViewProxy_SelectFrustumCells, METH_VARARGS,
   (char*)"V.SelectFrustumCells((int, int, int, int), vtkCollection,\n    vtkCollection, bool) -> bool\nC++: bool SelectFrustumCells(const int region[4],\n    vtkCollection *selectedRepresentations,\n    vtkCollection *selectionSources,\n    bool multiple_selections=false)\n\nMakes a new selection source proxy.\n"},
  {(char*)"SelectFrustumPoints", PyvtkSMRenderViewProxy_SelectFrustumPoints, METH_VARARGS,
   (char*)"V.SelectFrustumPoints((int, int, int, int), vtkCollection,\n    vtkCollection, bool) -> bool\nC++: bool SelectFrustumPoints(const int region[4],\n    vtkCollection *selectedRepresentations,\n    vtkCollection *selectionSources,\n    bool multiple_selections=false)\n\nMakes a new selection source proxy.\n"},
  {(char*)"SelectPolygonPoints", PyvtkSMRenderViewProxy_SelectPolygonPoints, METH_VARARGS,
   (char*)"V.SelectPolygonPoints(vtkIntArray, vtkCollection, vtkCollection,\n    bool) -> bool\nC++: bool SelectPolygonPoints(vtkIntArray *polygon,\n    vtkCollection *selectedRepresentations,\n    vtkCollection *selectionSources,\n    bool multiple_selections=false)\n\nMakes a new selection source proxy.\n"},
  {(char*)"SelectPolygonCells", PyvtkSMRenderViewProxy_SelectPolygonCells, METH_VARARGS,
   (char*)"V.SelectPolygonCells(vtkIntArray, vtkCollection, vtkCollection,\n    bool) -> bool\nC++: bool SelectPolygonCells(vtkIntArray *polygon,\n    vtkCollection *selectedRepresentations,\n    vtkCollection *selectionSources,\n    bool multiple_selections=false)\n\nMakes a new selection source proxy.\n"},
  {(char*)"ComputeVisibleScalarRange", PyvtkSMRenderViewProxy_ComputeVisibleScalarRange, METH_VARARGS,
   (char*)"V.ComputeVisibleScalarRange((int, int, int, int), int, string,\n    int, [float, ...]) -> bool\nC++: bool ComputeVisibleScalarRange(const int region[4],\n    int fieldAssociation, const char *scalarName, int component,\n    double range[])\nV.ComputeVisibleScalarRange(int, string, int, [float, ...])\n    -> bool\nC++: bool ComputeVisibleScalarRange(int fieldAssociation,\n    const char *scalarName, int component, double range[])\n\nReturns the range for visible elements in the current view.\n"},
  {(char*)"Pick", PyvtkSMRenderViewProxy_Pick, METH_VARARGS,
   (char*)"V.Pick(int, int) -> vtkSMRepresentationProxy\nC++: vtkSMRepresentationProxy *Pick(int x, int y)\n\nConvenience method to pick a location. Internally uses\nSelectSurfaceCells to locate the picked object. In future, we can\nmake this faster.\n"},
  {(char*)"PickBlock", PyvtkSMRenderViewProxy_PickBlock, METH_VARARGS,
   (char*)"V.PickBlock(int, int, int) -> vtkSMRepresentationProxy\nC++: vtkSMRepresentationProxy *PickBlock(int x, int y,\n    unsigned int &flatIndex)\n\nConvenience method to pick a block in a multi-block data set.\nWill return the selected representation. Furthermore, if it is a\nmulti-block data set the flat index of the selected block will be\nreturned in flatIndex.\n"},
  {(char*)"ConvertDisplayToPointOnSurface", PyvtkSMRenderViewProxy_ConvertDisplayToPointOnSurface, METH_VARARGS,
   (char*)"V.ConvertDisplayToPointOnSurface((int, int), [float, float,\n    float]) -> bool\nC++: bool ConvertDisplayToPointOnSurface(\n    const int display_position[2], double world_position[3])\n\nGiven a location is display coordinates (pixels), tries to\ncompute and return the world location on a surface, if possible.\nReturns true if the conversion was successful, else returns\nfalse.\n"},
  {(char*)"IsSelectionAvailable", PyvtkSMRenderViewProxy_IsSelectionAvailable, METH_VARARGS,
   (char*)"V.IsSelectionAvailable() -> bool\nC++: virtual bool IsSelectionAvailable()\n\nChecks if color depth is sufficient to support selection. If not,\nwill return 0 and any calls to SelectVisibleCells will quietly\nreturn an empty selection.\n"},
  {(char*)"ResetCamera", PyvtkSMRenderViewProxy_ResetCamera, METH_VARARGS,
   (char*)"V.ResetCamera()\nC++: void ResetCamera()\nV.ResetCamera([float, float, float, float, float, float])\nC++: void ResetCamera(double bounds[6])\nV.ResetCamera(float, float, float, float, float, float)\nC++: void ResetCamera(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nFor backwards compatibility in Python scripts.\n"},
  {(char*)"ZoomTo", PyvtkSMRenderViewProxy_ZoomTo, METH_VARARGS,
   (char*)"V.ZoomTo(vtkSMProxy)\nC++: void ZoomTo(vtkSMProxy *representation)\n\nConvenience method for zooming to a representation.\n"},
  {(char*)"IsSelectVisibleCellsAvailable", PyvtkSMRenderViewProxy_IsSelectVisibleCellsAvailable, METH_VARARGS,
   (char*)"V.IsSelectVisibleCellsAvailable() -> string\nC++: virtual const char *IsSelectVisibleCellsAvailable()\n\nSimilar to IsSelectionAvailable(), however, on failure returns\nthe error message otherwise 0.\n"},
  {(char*)"IsSelectVisiblePointsAvailable", PyvtkSMRenderViewProxy_IsSelectVisiblePointsAvailable, METH_VARARGS,
   (char*)"V.IsSelectVisiblePointsAvailable() -> string\nC++: virtual const char *IsSelectVisiblePointsAvailable()\n\nSimilar to IsSelectionAvailable(), however, on failure returns\nthe error message otherwise 0.\n"},
  {(char*)"GetInteractor", PyvtkSMRenderViewProxy_GetInteractor, METH_VARARGS,
   (char*)"V.GetInteractor() -> vtkPVGenericRenderWindowInteractor\nC++: vtkPVGenericRenderWindowInteractor *GetInteractor()\n\nReturns the interactor.\n"},
  {(char*)"GetRenderer", PyvtkSMRenderViewProxy_GetRenderer, METH_VARARGS,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nReturns the client-side renderer (composited or 3D).\n"},
  {(char*)"GetActiveCamera", PyvtkSMRenderViewProxy_GetActiveCamera, METH_VARARGS,
   (char*)"V.GetActiveCamera() -> vtkCamera\nC++: vtkCamera *GetActiveCamera()\n\nReturns the client-side camera object.\n"},
  {(char*)"SynchronizeCameraProperties", PyvtkSMRenderViewProxy_SynchronizeCameraProperties, METH_VARARGS,
   (char*)"V.SynchronizeCameraProperties()\nC++: void SynchronizeCameraProperties()\n\nThis method calls UpdateInformation on the Camera Proxy and sets\nthe Camera properties according to the info properties. This\napproach is a bit lame. We need to ensure that camera properties\nare always/automatically synchronized. Camera properties cannot\nbe treated same way as other properties.\n"},
  {(char*)"LastRenderWasInteractive", PyvtkSMRenderViewProxy_LastRenderWasInteractive, METH_VARARGS,
   (char*)"V.LastRenderWasInteractive() -> bool\nC++: virtual bool LastRenderWasInteractive()\n\nReturns true if the most recent render indeed employed low-res\nrendering.\n"},
  {(char*)"GetZBufferValue", PyvtkSMRenderViewProxy_GetZBufferValue, METH_VARARGS,
   (char*)"V.GetZBufferValue(int, int) -> float\nC++: double GetZBufferValue(int x, int y)\n\nReturns the Z-buffer value at the given location in this view.\n"},
  {(char*)"Update", PyvtkSMRenderViewProxy_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nCalled vtkPVView::Update on the server-side. Overridden to update\nthe state of NeedsUpdateLOD flag.\n"},
  {(char*)"GetNeedsUpdate", PyvtkSMRenderViewProxy_GetNeedsUpdate, METH_VARARGS,
   (char*)"V.GetNeedsUpdate() -> bool\nC++: virtual bool GetNeedsUpdate()\n\nWe override that method to handle LOD and non-LOD NeedsUpdate in\ntransparent manner.\n"},
  {(char*)"StreamingUpdate", PyvtkSMRenderViewProxy_StreamingUpdate, METH_VARARGS,
   (char*)"V.StreamingUpdate(bool) -> bool\nC++: bool StreamingUpdate(bool render_if_needed)\n\nCalled to render a streaming pass. Returns true if the view\n\"streamed\" some geometry.\n"},
  {(char*)"GetRepresentationType", PyvtkSMRenderViewProxy_GetRepresentationType, METH_VARARGS,
   (char*)"V.GetRepresentationType(vtkSMSourceProxy, int) -> string\nC++: virtual const char *GetRepresentationType(\n    vtkSMSourceProxy *producer, int outputPort)\n\nOverridden to check through the various representations that this\nview can create.\n"},
  {(char*)"GetRenderWindow", PyvtkSMRenderViewProxy_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nReturns the render window used by this view.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMRenderViewProxy_StaticNew()
{
  return vtkSMRenderViewProxy::New();
}

PyObject *PyVTKClass_vtkSMRenderViewProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMRenderViewProxy_StaticNew,
    PyvtkSMRenderViewProxy_Methods,
    "vtkSMRenderViewProxy", modulename,
    NULL, NULL,
    PyvtkSMRenderViewProxy_Doc(),
    PyVTKClass_vtkSMViewProxyNew(modulename));
  return cls;
}

const char **PyvtkSMRenderViewProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMRenderViewProxy - implementation for View that includes\n\n",
    "Superclass: vtkSMViewProxy\n\n",
    "vtkSMRenderViewProxy is a 3D view consisting for a render window and\ntwo renderers: 1 for 3D geometry and 1 for overlayed 2D geometry.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMRenderViewProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMRenderViewProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMRenderViewProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

