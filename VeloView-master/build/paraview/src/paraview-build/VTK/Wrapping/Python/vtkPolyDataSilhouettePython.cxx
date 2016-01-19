// python wrapper for vtkPolyDataSilhouette
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPolyDataSilhouette.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPolyDataSilhouette(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPolyDataSilhouetteNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkPolyDataSilhouette_Doc();


static PyObject *
PyvtkPolyDataSilhouette_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPolyDataSilhouette::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataSilhouette::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyDataSilhouette *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataSilhouette::NewInstance());

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
PyvtkPolyDataSilhouette_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPolyDataSilhouette *tempr = vtkPolyDataSilhouette::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetEnableFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableFeatureAngle(temp0);
      }
    else
      {
      op->vtkPolyDataSilhouette::SetEnableFeatureAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetEnableFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableFeatureAngle() :
      op->vtkPolyDataSilhouette::GetEnableFeatureAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFeatureAngle(temp0);
      }
    else
      {
      op->vtkPolyDataSilhouette::SetFeatureAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngle() :
      op->vtkPolyDataSilhouette::GetFeatureAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetBorderEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorderEdges(temp0);
      }
    else
      {
      op->vtkPolyDataSilhouette::SetBorderEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetBorderEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBorderEdges() :
      op->vtkPolyDataSilhouette::GetBorderEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_BorderEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BorderEdgesOn();
      }
    else
      {
      op->vtkPolyDataSilhouette::BorderEdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_BorderEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BorderEdgesOff();
      }
    else
      {
      op->vtkPolyDataSilhouette::BorderEdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPieceInvariant(temp0);
      }
    else
      {
      op->vtkPolyDataSilhouette::SetPieceInvariant(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPieceInvariant() :
      op->vtkPolyDataSilhouette::GetPieceInvariant());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_PieceInvariantOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PieceInvariantOn();
      }
    else
      {
      op->vtkPolyDataSilhouette::PieceInvariantOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_PieceInvariantOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PieceInvariantOff();
      }
    else
      {
      op->vtkPolyDataSilhouette::PieceInvariantOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDirection(temp0);
      }
    else
      {
      op->vtkPolyDataSilhouette::SetDirection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDirection() :
      op->vtkPolyDataSilhouette::GetDirection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetDirectionToSpecifiedVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToSpecifiedVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDirectionToSpecifiedVector();
      }
    else
      {
      op->vtkPolyDataSilhouette::SetDirectionToSpecifiedVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetDirectionToSpecifiedOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToSpecifiedOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDirectionToSpecifiedOrigin();
      }
    else
      {
      op->vtkPolyDataSilhouette::SetDirectionToSpecifiedOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetDirectionToCameraVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToCameraVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDirectionToCameraVector();
      }
    else
      {
      op->vtkPolyDataSilhouette::SetDirectionToCameraVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetDirectionToCameraOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToCameraOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDirectionToCameraOrigin();
      }
    else
      {
      op->vtkPolyDataSilhouette::SetDirectionToCameraOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

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
      op->vtkPolyDataSilhouette::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkPolyDataSilhouette::GetCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  vtkProp3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
    {
    if (ap.IsBound())
      {
      op->SetProp3D(temp0);
      }
    else
      {
      op->vtkPolyDataSilhouette::SetProp3D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProp3D *tempr = (ap.IsBound() ?
      op->GetProp3D() :
      op->vtkPolyDataSilhouette::GetProp3D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

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
      op->SetVector(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPolyDataSilhouette::SetVector(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataSilhouette_SetVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetVector(temp0);
      }
    else
      {
      op->vtkPolyDataSilhouette::SetVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataSilhouette_SetVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPolyDataSilhouette_SetVector_s1(self, args);
    case 1:
      return PyvtkPolyDataSilhouette_SetVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVector");
  return NULL;
}



static PyObject *
PyvtkPolyDataSilhouette_GetVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetVector() :
      op->vtkPolyDataSilhouette::GetVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPolyDataSilhouette::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataSilhouette_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkPolyDataSilhouette::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataSilhouette_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPolyDataSilhouette_SetOrigin_s1(self, args);
    case 1:
      return PyvtkPolyDataSilhouette_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkPolyDataSilhouette_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkPolyDataSilhouette::GetOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPolyDataSilhouette::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataSilhouette_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataSilhouette_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolyDataSilhouette_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolyDataSilhouette_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPolyDataSilhouette\nC++: vtkPolyDataSilhouette *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolyDataSilhouette_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyDataSilhouette\nC++: vtkPolyDataSilhouette *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnableFeatureAngle", PyvtkPolyDataSilhouette_SetEnableFeatureAngle, METH_VARARGS,
   (char*)"V.SetEnableFeatureAngle(int)\nC++: void SetEnableFeatureAngle(int a)\n\nEnables or Disables generation of silhouette edges along sharp\nedges\n"},
  {(char*)"GetEnableFeatureAngle", PyvtkPolyDataSilhouette_GetEnableFeatureAngle, METH_VARARGS,
   (char*)"V.GetEnableFeatureAngle() -> int\nC++: int GetEnableFeatureAngle()\n\nEnables or Disables generation of silhouette edges along sharp\nedges\n"},
  {(char*)"SetFeatureAngle", PyvtkPolyDataSilhouette_SetFeatureAngle, METH_VARARGS,
   (char*)"V.SetFeatureAngle(float)\nC++: void SetFeatureAngle(double a)\n\nSets/Gets minimal angle for sharp edges detection. Default is 60\n"},
  {(char*)"GetFeatureAngle", PyvtkPolyDataSilhouette_GetFeatureAngle, METH_VARARGS,
   (char*)"V.GetFeatureAngle() -> float\nC++: double GetFeatureAngle()\n\nSets/Gets minimal angle for sharp edges detection. Default is 60\n"},
  {(char*)"SetBorderEdges", PyvtkPolyDataSilhouette_SetBorderEdges, METH_VARARGS,
   (char*)"V.SetBorderEdges(int)\nC++: void SetBorderEdges(int a)\n\nEnables or Disables generation of border edges. Note: borders\nexist only in case of non closed surface\n"},
  {(char*)"GetBorderEdges", PyvtkPolyDataSilhouette_GetBorderEdges, METH_VARARGS,
   (char*)"V.GetBorderEdges() -> int\nC++: int GetBorderEdges()\n\nEnables or Disables generation of border edges. Note: borders\nexist only in case of non closed surface\n"},
  {(char*)"BorderEdgesOn", PyvtkPolyDataSilhouette_BorderEdgesOn, METH_VARARGS,
   (char*)"V.BorderEdgesOn()\nC++: void BorderEdgesOn()\n\nEnables or Disables generation of border edges. Note: borders\nexist only in case of non closed surface\n"},
  {(char*)"BorderEdgesOff", PyvtkPolyDataSilhouette_BorderEdgesOff, METH_VARARGS,
   (char*)"V.BorderEdgesOff()\nC++: void BorderEdgesOff()\n\nEnables or Disables generation of border edges. Note: borders\nexist only in case of non closed surface\n"},
  {(char*)"SetPieceInvariant", PyvtkPolyDataSilhouette_SetPieceInvariant, METH_VARARGS,
   (char*)"V.SetPieceInvariant(int)\nC++: void SetPieceInvariant(int a)\n\nEnables or Disables piece invariance. This is useful when dealing\nwith multi-block data sets. Note: requires one level of ghost\ncells\n"},
  {(char*)"GetPieceInvariant", PyvtkPolyDataSilhouette_GetPieceInvariant, METH_VARARGS,
   (char*)"V.GetPieceInvariant() -> int\nC++: int GetPieceInvariant()\n\nEnables or Disables piece invariance. This is useful when dealing\nwith multi-block data sets. Note: requires one level of ghost\ncells\n"},
  {(char*)"PieceInvariantOn", PyvtkPolyDataSilhouette_PieceInvariantOn, METH_VARARGS,
   (char*)"V.PieceInvariantOn()\nC++: void PieceInvariantOn()\n\nEnables or Disables piece invariance. This is useful when dealing\nwith multi-block data sets. Note: requires one level of ghost\ncells\n"},
  {(char*)"PieceInvariantOff", PyvtkPolyDataSilhouette_PieceInvariantOff, METH_VARARGS,
   (char*)"V.PieceInvariantOff()\nC++: void PieceInvariantOff()\n\nEnables or Disables piece invariance. This is useful when dealing\nwith multi-block data sets. Note: requires one level of ghost\ncells\n"},
  {(char*)"SetDirection", PyvtkPolyDataSilhouette_SetDirection, METH_VARARGS,
   (char*)"V.SetDirection(int)\nC++: void SetDirection(int a)\n\nSpecify how view direction is computed. By default, the camera\norigin (eye) is used.\n"},
  {(char*)"GetDirection", PyvtkPolyDataSilhouette_GetDirection, METH_VARARGS,
   (char*)"V.GetDirection() -> int\nC++: int GetDirection()\n\nSpecify how view direction is computed. By default, the camera\norigin (eye) is used.\n"},
  {(char*)"SetDirectionToSpecifiedVector", PyvtkPolyDataSilhouette_SetDirectionToSpecifiedVector, METH_VARARGS,
   (char*)"V.SetDirectionToSpecifiedVector()\nC++: void SetDirectionToSpecifiedVector()\n\nSpecify how view direction is computed. By default, the camera\norigin (eye) is used.\n"},
  {(char*)"SetDirectionToSpecifiedOrigin", PyvtkPolyDataSilhouette_SetDirectionToSpecifiedOrigin, METH_VARARGS,
   (char*)"V.SetDirectionToSpecifiedOrigin()\nC++: void SetDirectionToSpecifiedOrigin()\n\nSpecify how view direction is computed. By default, the camera\norigin (eye) is used.\n"},
  {(char*)"SetDirectionToCameraVector", PyvtkPolyDataSilhouette_SetDirectionToCameraVector, METH_VARARGS,
   (char*)"V.SetDirectionToCameraVector()\nC++: void SetDirectionToCameraVector()\n\nSpecify how view direction is computed. By default, the camera\norigin (eye) is used.\n"},
  {(char*)"SetDirectionToCameraOrigin", PyvtkPolyDataSilhouette_SetDirectionToCameraOrigin, METH_VARARGS,
   (char*)"V.SetDirectionToCameraOrigin()\nC++: void SetDirectionToCameraOrigin()\n\nSpecify how view direction is computed. By default, the camera\norigin (eye) is used.\n"},
  {(char*)"SetCamera", PyvtkPolyDataSilhouette_SetCamera, METH_VARARGS,
   (char*)"V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSpecify a camera that is used to define the view direction.  This\nivar only has effect if the direction is set to\nVTK_DIRECTION_CAMERA_ORIGIN or VTK_DIRECTION_CAMERA_VECTOR, and a\ncamera is specified.\n"},
  {(char*)"GetCamera", PyvtkPolyDataSilhouette_GetCamera, METH_VARARGS,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nSpecify a camera that is used to define the view direction.  This\nivar only has effect if the direction is set to\nVTK_DIRECTION_CAMERA_ORIGIN or VTK_DIRECTION_CAMERA_VECTOR, and a\ncamera is specified.\n"},
  {(char*)"SetProp3D", PyvtkPolyDataSilhouette_SetProp3D, METH_VARARGS,
   (char*)"V.SetProp3D(vtkProp3D)\nC++: void SetProp3D(vtkProp3D *)\n\nSpecify a transformation matrix (via the vtkProp3D::GetMatrix()\nmethod) that is used to include the effects of transformation.\nThis ivar only has effect if the direction is set to\nVTK_DIRECTION_CAMERA_ORIGIN or VTK_DIRECTION_CAMERA_VECTOR, and a\ncamera is specified. Specifying the vtkProp3D is optional.\n"},
  {(char*)"GetProp3D", PyvtkPolyDataSilhouette_GetProp3D, METH_VARARGS,
   (char*)"V.GetProp3D() -> vtkProp3D\nC++: vtkProp3D *GetProp3D()\n\nSpecify a transformation matrix (via the vtkProp3D::GetMatrix()\nmethod) that is used to include the effects of transformation.\nThis ivar only has effect if the direction is set to\nVTK_DIRECTION_CAMERA_ORIGIN or VTK_DIRECTION_CAMERA_VECTOR, and a\ncamera is specified. Specifying the vtkProp3D is optional.\n"},
  {(char*)"SetVector", PyvtkPolyDataSilhouette_SetVector, METH_VARARGS,
   (char*)"V.SetVector(float, float, float)\nC++: void SetVector(double, double, double)\nV.SetVector((float, float, float))\nC++: void SetVector(double a[3])\n\n"},
  {(char*)"GetVector", PyvtkPolyDataSilhouette_GetVector, METH_VARARGS,
   (char*)"V.GetVector() -> (float, float, float)\nC++: double *GetVector()\n\nSet/Get the sort direction. This ivar only has effect if the sort\ndirection is set to SetDirectionToSpecifiedVector(). The edge\ndetection occurs in the direction of the vector.\n"},
  {(char*)"SetOrigin", PyvtkPolyDataSilhouette_SetOrigin, METH_VARARGS,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {(char*)"GetOrigin", PyvtkPolyDataSilhouette_GetOrigin, METH_VARARGS,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\nSet/Get the sort origin. This ivar only has effect if the sort\ndirection is set to SetDirectionToSpecifiedOrigin(). The edge\ndetection occurs in the direction of the origin to each edge's\ncenter.\n"},
  {(char*)"GetMTime", PyvtkPolyDataSilhouette_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn MTime also considering the dependent objects: the camera\nand/or the prop3D.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyDataSilhouette_StaticNew()
{
  return vtkPolyDataSilhouette::New();
}

PyObject *PyVTKClass_vtkPolyDataSilhouetteNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyDataSilhouette_StaticNew,
    PyvtkPolyDataSilhouette_Methods,
    "vtkPolyDataSilhouette", modulename,
    NULL, NULL,
    PyvtkPolyDataSilhouette_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPolyDataSilhouette_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataSilhouette - sort polydata along camera view direction\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkPolyDataSilhouette extracts a subset of a polygonal mesh edges to\ngenerate an outline (silhouette) of the corresponding 3D object. In\naddition, this filter can also extracts sharp edges (aka feature\nangles). In order to use this filter you must specify the a point of\nview (origin) or a direction (vector).  given this direction or\norigin, a silhouette is generated wherever the surface's normal i",
    "s\northogonal to the view direction.\n\nCaveats:\n\nwhen the active camera is used, almost everything is recomputed for\neach frame, keep this in mind when dealing with extremely large\nsurface data sets.\n\nThanks:\n\nContribution by Thierry Carrard\n\nCEA/DIF - Commissariat a l'Energie Atomique, Centre DAM Ile-De-France\n\nBP12, F-91297 Arpajon, France.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataSilhouette(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataSilhouetteNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataSilhouette", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 4; c++)
    {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_DIRECTION_SPECIFIED_VECTOR", 0 },
        { "VTK_DIRECTION_SPECIFIED_ORIGIN", 1 },
        { "VTK_DIRECTION_CAMERA_ORIGIN", 2 },
        { "VTK_DIRECTION_CAMERA_VECTOR", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

