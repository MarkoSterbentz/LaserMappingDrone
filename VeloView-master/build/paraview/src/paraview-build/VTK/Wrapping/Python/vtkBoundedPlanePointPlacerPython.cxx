// python wrapper for vtkBoundedPlanePointPlacer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBoundedPlanePointPlacer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBoundedPlanePointPlacer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBoundedPlanePointPlacerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPointPlacerNew
extern "C" { PyObject *PyVTKClass_vtkPointPlacerNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointPlacerNew
#endif

static const char **PyvtkBoundedPlanePointPlacer_Doc();


static PyObject *
PyvtkBoundedPlanePointPlacer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBoundedPlanePointPlacer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoundedPlanePointPlacer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBoundedPlanePointPlacer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoundedPlanePointPlacer::NewInstance());

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
PyvtkBoundedPlanePointPlacer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBoundedPlanePointPlacer *tempr = vtkBoundedPlanePointPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormal(temp0);
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetProjectionNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_GetProjectionNormalMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMinValue() :
      op->vtkBoundedPlanePointPlacer::GetProjectionNormalMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_GetProjectionNormalMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMaxValue() :
      op->vtkBoundedPlanePointPlacer::GetProjectionNormalMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_GetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormal() :
      op->vtkBoundedPlanePointPlacer::GetProjectionNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToXAxis();
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetProjectionNormalToXAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToYAxis();
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetProjectionNormalToYAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToZAxis();
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetProjectionNormalToZAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionNormalToOblique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToOblique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToOblique();
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetProjectionNormalToOblique();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetObliquePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObliquePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->SetObliquePlane(temp0);
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetObliquePlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_GetObliquePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObliquePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetObliquePlane() :
      op->vtkBoundedPlanePointPlacer::GetObliquePlane());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionPosition(temp0);
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetProjectionPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_GetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetProjectionPosition() :
      op->vtkBoundedPlanePointPlacer::GetProjectionPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_AddBoundingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBoundingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->AddBoundingPlane(temp0);
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::AddBoundingPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_RemoveBoundingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBoundingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->RemoveBoundingPlane(temp0);
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::RemoveBoundingPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_RemoveAllBoundingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllBoundingPlanes();
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::RemoveAllBoundingPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkPlaneCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
    {
    if (ap.IsBound())
      {
      op->SetBoundingPlanes(temp0);
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetBoundingPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkPlanes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
    {
    if (ap.IsBound())
      {
      op->SetBoundingPlanes(temp0);
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetBoundingPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_Methods[] = {
  {NULL, PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_s1, METH_VARARGS,
   (char*)"@O *vtkPlaneCollection"},
  {NULL, PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_s2, METH_VARARGS,
   (char*)"@O *vtkPlanes"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkBoundedPlanePointPlacer_SetBoundingPlanes(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBoundingPlanes");
  return NULL;
}



static PyObject *
PyvtkBoundedPlanePointPlacer_GetBoundingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlaneCollection *tempr = (ap.IsBound() ?
      op->GetBoundingPlanes() :
      op->vtkBoundedPlanePointPlacer::GetBoundingPlanes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_ComputeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[9];
  double save3[9];
  const int size3 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ComputeWorldPosition(temp0, temp1, temp2, temp3) :
      op->vtkBoundedPlanePointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

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

  return result;
}

static PyObject *
PyvtkBoundedPlanePointPlacer_ComputeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4[9];
  double save4[9];
  const int size4 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4) :
      op->vtkBoundedPlanePointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

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

  return result;
}

static PyObject *
PyvtkBoundedPlanePointPlacer_ComputeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkBoundedPlanePointPlacer_ComputeWorldPosition_s1(self, args);
    case 5:
      return PyvtkBoundedPlanePointPlacer_ComputeWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWorldPosition");
  return NULL;
}



static PyObject *
PyvtkBoundedPlanePointPlacer_ValidateWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ValidateWorldPosition(temp0) :
      op->vtkBoundedPlanePointPlacer::ValidateWorldPosition(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkBoundedPlanePointPlacer_ValidateWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[9];
  double save1[9];
  const int size1 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ValidateWorldPosition(temp0, temp1) :
      op->vtkBoundedPlanePointPlacer::ValidateWorldPosition(temp0, temp1));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

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
PyvtkBoundedPlanePointPlacer_ValidateWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkBoundedPlanePointPlacer_ValidateWorldPosition_s1(self, args);
    case 2:
      return PyvtkBoundedPlanePointPlacer_ValidateWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ValidateWorldPosition");
  return NULL;
}



static PyObject *
PyvtkBoundedPlanePointPlacer_UpdateWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[9];
  double save2[9];
  const int size2 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->UpdateWorldPosition(temp0, temp1, temp2) :
      op->vtkBoundedPlanePointPlacer::UpdateWorldPosition(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBoundedPlanePointPlacer_Methods[] = {
  {(char*)"GetClassName", PyvtkBoundedPlanePointPlacer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkBoundedPlanePointPlacer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkBoundedPlanePointPlacer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBoundedPlanePointPlacer\nC++: vtkBoundedPlanePointPlacer *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkBoundedPlanePointPlacer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBoundedPlanePointPlacer\nC++: vtkBoundedPlanePointPlacer *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"SetProjectionNormal", PyvtkBoundedPlanePointPlacer_SetProjectionNormal, METH_VARARGS,
   (char*)"V.SetProjectionNormal(int)\nC++: void SetProjectionNormal(int)\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {(char*)"GetProjectionNormalMinValue", PyvtkBoundedPlanePointPlacer_GetProjectionNormalMinValue, METH_VARARGS,
   (char*)"V.GetProjectionNormalMinValue() -> int\nC++: int GetProjectionNormalMinValue()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {(char*)"GetProjectionNormalMaxValue", PyvtkBoundedPlanePointPlacer_GetProjectionNormalMaxValue, METH_VARARGS,
   (char*)"V.GetProjectionNormalMaxValue() -> int\nC++: int GetProjectionNormalMaxValue()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {(char*)"GetProjectionNormal", PyvtkBoundedPlanePointPlacer_GetProjectionNormal, METH_VARARGS,
   (char*)"V.GetProjectionNormal() -> int\nC++: int GetProjectionNormal()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {(char*)"SetProjectionNormalToXAxis", PyvtkBoundedPlanePointPlacer_SetProjectionNormalToXAxis, METH_VARARGS,
   (char*)"V.SetProjectionNormalToXAxis()\nC++: void SetProjectionNormalToXAxis()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {(char*)"SetProjectionNormalToYAxis", PyvtkBoundedPlanePointPlacer_SetProjectionNormalToYAxis, METH_VARARGS,
   (char*)"V.SetProjectionNormalToYAxis()\nC++: void SetProjectionNormalToYAxis()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {(char*)"SetProjectionNormalToZAxis", PyvtkBoundedPlanePointPlacer_SetProjectionNormalToZAxis, METH_VARARGS,
   (char*)"V.SetProjectionNormalToZAxis()\nC++: void SetProjectionNormalToZAxis()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {(char*)"SetProjectionNormalToOblique", PyvtkBoundedPlanePointPlacer_SetProjectionNormalToOblique, METH_VARARGS,
   (char*)"V.SetProjectionNormalToOblique()\nC++: void SetProjectionNormalToOblique()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {(char*)"SetObliquePlane", PyvtkBoundedPlanePointPlacer_SetObliquePlane, METH_VARARGS,
   (char*)"V.SetObliquePlane(vtkPlane)\nC++: void SetObliquePlane(vtkPlane *)\n\nIf the ProjectionNormal is set to Oblique, then this is the\noblique plane used to constrain the handle position.\n"},
  {(char*)"GetObliquePlane", PyvtkBoundedPlanePointPlacer_GetObliquePlane, METH_VARARGS,
   (char*)"V.GetObliquePlane() -> vtkPlane\nC++: vtkPlane *GetObliquePlane()\n\nIf the ProjectionNormal is set to Oblique, then this is the\noblique plane used to constrain the handle position.\n"},
  {(char*)"SetProjectionPosition", PyvtkBoundedPlanePointPlacer_SetProjectionPosition, METH_VARARGS,
   (char*)"V.SetProjectionPosition(float)\nC++: void SetProjectionPosition(double position)\n\nThe position of the bounding plane from the origin along the\nnormal. The origin and normal are defined in the oblique plane\nwhen the ProjectionNormal is oblique. For the X, Y, and Z axes\nprojection normals, the normal is the axis direction, and the\norigin is (0,0,0).\n"},
  {(char*)"GetProjectionPosition", PyvtkBoundedPlanePointPlacer_GetProjectionPosition, METH_VARARGS,
   (char*)"V.GetProjectionPosition() -> float\nC++: double GetProjectionPosition()\n\nThe position of the bounding plane from the origin along the\nnormal. The origin and normal are defined in the oblique plane\nwhen the ProjectionNormal is oblique. For the X, Y, and Z axes\nprojection normals, the normal is the axis direction, and the\norigin is (0,0,0).\n"},
  {(char*)"AddBoundingPlane", PyvtkBoundedPlanePointPlacer_AddBoundingPlane, METH_VARARGS,
   (char*)"V.AddBoundingPlane(vtkPlane)\nC++: void AddBoundingPlane(vtkPlane *plane)\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {(char*)"RemoveBoundingPlane", PyvtkBoundedPlanePointPlacer_RemoveBoundingPlane, METH_VARARGS,
   (char*)"V.RemoveBoundingPlane(vtkPlane)\nC++: void RemoveBoundingPlane(vtkPlane *plane)\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {(char*)"RemoveAllBoundingPlanes", PyvtkBoundedPlanePointPlacer_RemoveAllBoundingPlanes, METH_VARARGS,
   (char*)"V.RemoveAllBoundingPlanes()\nC++: void RemoveAllBoundingPlanes()\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {(char*)"SetBoundingPlanes", PyvtkBoundedPlanePointPlacer_SetBoundingPlanes, METH_VARARGS,
   (char*)"V.SetBoundingPlanes(vtkPlaneCollection)\nC++: virtual void SetBoundingPlanes(vtkPlaneCollection *)\nV.SetBoundingPlanes(vtkPlanes)\nC++: void SetBoundingPlanes(vtkPlanes *planes)\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {(char*)"GetBoundingPlanes", PyvtkBoundedPlanePointPlacer_GetBoundingPlanes, METH_VARARGS,
   (char*)"V.GetBoundingPlanes() -> vtkPlaneCollection\nC++: vtkPlaneCollection *GetBoundingPlanes()\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {(char*)"ComputeWorldPosition", PyvtkBoundedPlanePointPlacer_ComputeWorldPosition, METH_VARARGS,
   (char*)"V.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double worldPos[3],\n    double worldOrient[9])\nV.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float], [float, float, float, float,\n    float, float, float, float, float]) -> int\nC++: virtual int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double refWorldPos[3],\n    double worldPos[3], double worldOrient[9])\n\nGiven a renderer and a display position, compute the world\nposition and world orientation for this point. A plane is defined\nby a combination of the ProjectionNormal, ProjectionOrigin, and\nObliquePlane ivars. The display position is projected onto this\nplane to determine a world position, and the orientation is set\nto the normal of the plane. If the point cannot project onto the\nplane or if it falls outside the bounds imposed by the\nBoundingPlanes, then 0 is returned, otherwise 1 is returned to\nindicate a valid return position and orientation.\n"},
  {(char*)"ValidateWorldPosition", PyvtkBoundedPlanePointPlacer_ValidateWorldPosition, METH_VARARGS,
   (char*)"V.ValidateWorldPosition([float, float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3])\nV.ValidateWorldPosition([float, float, float], [float, float,\n    float, float, float, float, float, float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3],\n    double worldOrient[9])\n\nGive a world position check if it is valid - does it lie on the\nplane and within the bounds? Returns 1 if it is valid, 0\notherwise.\n"},
  {(char*)"UpdateWorldPosition", PyvtkBoundedPlanePointPlacer_UpdateWorldPosition, METH_VARARGS,
   (char*)"V.UpdateWorldPosition(vtkRenderer, [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\n    -> int\nC++: virtual int UpdateWorldPosition(vtkRenderer *ren,\n    double worldPos[3], double worldOrient[9])\n\nIf the constraints on this placer are changed, then this method\nwill be called by the representation on each of its points. For\nthis placer, the world position will be converted to a display\nposition, then ComputeWorldPosition will be used to update the\npoint.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBoundedPlanePointPlacer_StaticNew()
{
  return vtkBoundedPlanePointPlacer::New();
}

PyObject *PyVTKClass_vtkBoundedPlanePointPlacerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBoundedPlanePointPlacer_StaticNew,
    PyvtkBoundedPlanePointPlacer_Methods,
    "vtkBoundedPlanePointPlacer", modulename,
    NULL, NULL,
    PyvtkBoundedPlanePointPlacer_Doc(),
    PyVTKClass_vtkPointPlacerNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 4; c++)
      {
      static const struct { const char *name; int value; }
        constants[4] = {
          { "XAxis", vtkBoundedPlanePointPlacer::XAxis },
          { "YAxis", vtkBoundedPlanePointPlacer::YAxis },
          { "ZAxis", vtkBoundedPlanePointPlacer::ZAxis },
          { "Oblique", vtkBoundedPlanePointPlacer::Oblique },
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

const char **PyvtkBoundedPlanePointPlacer_Doc()
{
  static const char *docstring[] = {
    "vtkBoundedPlanePointPlacer - a placer that constrains a handle to a\nfinite plane\n\n",
    "Superclass: vtkPointPlacer\n\n",
    "vtkBoundedPlanePointPlacer is a type of point placer that constrains\nits points to a finite (i.e., bounded) plance.\n\nSee Also:\n\nvtkPointPlacer vtkHandleWidget vtkHandleRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBoundedPlanePointPlacer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBoundedPlanePointPlacerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBoundedPlanePointPlacer", o) != 0)
    {
    Py_DECREF(o);
    }

}

