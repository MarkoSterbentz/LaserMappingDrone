// python wrapper for vtkQuadricClustering
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkQuadricClustering.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkQuadricClustering(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkQuadricClusteringNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkQuadricClustering_Doc();


static PyObject *
PyvtkQuadricClustering_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkQuadricClustering::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuadricClustering::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkQuadricClustering *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuadricClustering::NewInstance());

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
PyvtkQuadricClustering_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkQuadricClustering *tempr = vtkQuadricClustering::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetNumberOfXDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfXDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfXDivisions(temp0);
      }
    else
      {
      op->vtkQuadricClustering::SetNumberOfXDivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetNumberOfYDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfYDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfYDivisions(temp0);
      }
    else
      {
      op->vtkQuadricClustering::SetNumberOfYDivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetNumberOfZDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfZDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfZDivisions(temp0);
      }
    else
      {
      op->vtkQuadricClustering::SetNumberOfZDivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetNumberOfXDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfXDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfXDivisions() :
      op->vtkQuadricClustering::GetNumberOfXDivisions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetNumberOfYDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfYDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfYDivisions() :
      op->vtkQuadricClustering::GetNumberOfYDivisions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetNumberOfZDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfZDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfZDivisions() :
      op->vtkQuadricClustering::GetNumberOfZDivisions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetNumberOfDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetNumberOfDivisions(temp0);
      }
    else
      {
      op->vtkQuadricClustering::SetNumberOfDivisions(temp0);
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
PyvtkQuadricClustering_SetNumberOfDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfDivisions(temp0, temp1, temp2);
      }
    else
      {
      op->vtkQuadricClustering::SetNumberOfDivisions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkQuadricClustering_SetNumberOfDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkQuadricClustering_SetNumberOfDivisions_s1(self, args);
    case 3:
      return PyvtkQuadricClustering_SetNumberOfDivisions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfDivisions");
  return NULL;
}



static PyObject *
PyvtkQuadricClustering_GetNumberOfDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetNumberOfDivisions() :
      op->vtkQuadricClustering::GetNumberOfDivisions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkQuadricClustering_GetNumberOfDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetNumberOfDivisions(temp0);
      }
    else
      {
      op->vtkQuadricClustering::GetNumberOfDivisions(temp0);
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
PyvtkQuadricClustering_GetNumberOfDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkQuadricClustering_GetNumberOfDivisions_s1(self, args);
    case 1:
      return PyvtkQuadricClustering_GetNumberOfDivisions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfDivisions");
  return NULL;
}



static PyObject *
PyvtkQuadricClustering_SetAutoAdjustNumberOfDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoAdjustNumberOfDivisions(temp0);
      }
    else
      {
      op->vtkQuadricClustering::SetAutoAdjustNumberOfDivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetAutoAdjustNumberOfDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustNumberOfDivisions() :
      op->vtkQuadricClustering::GetAutoAdjustNumberOfDivisions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_AutoAdjustNumberOfDivisionsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustNumberOfDivisionsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustNumberOfDivisionsOn();
      }
    else
      {
      op->vtkQuadricClustering::AutoAdjustNumberOfDivisionsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_AutoAdjustNumberOfDivisionsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustNumberOfDivisionsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustNumberOfDivisionsOff();
      }
    else
      {
      op->vtkQuadricClustering::AutoAdjustNumberOfDivisionsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetDivisionOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisionOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

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
      op->SetDivisionOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkQuadricClustering::SetDivisionOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkQuadricClustering_SetDivisionOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisionOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetDivisionOrigin(temp0);
      }
    else
      {
      op->vtkQuadricClustering::SetDivisionOrigin(temp0);
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
PyvtkQuadricClustering_SetDivisionOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkQuadricClustering_SetDivisionOrigin_s1(self, args);
    case 1:
      return PyvtkQuadricClustering_SetDivisionOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDivisionOrigin");
  return NULL;
}



static PyObject *
PyvtkQuadricClustering_GetDivisionOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisionOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDivisionOrigin() :
      op->vtkQuadricClustering::GetDivisionOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetDivisionSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisionSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

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
      op->SetDivisionSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkQuadricClustering::SetDivisionSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkQuadricClustering_SetDivisionSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisionSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetDivisionSpacing(temp0);
      }
    else
      {
      op->vtkQuadricClustering::SetDivisionSpacing(temp0);
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
PyvtkQuadricClustering_SetDivisionSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkQuadricClustering_SetDivisionSpacing_s1(self, args);
    case 1:
      return PyvtkQuadricClustering_SetDivisionSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDivisionSpacing");
  return NULL;
}



static PyObject *
PyvtkQuadricClustering_GetDivisionSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisionSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDivisionSpacing() :
      op->vtkQuadricClustering::GetDivisionSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetUseInputPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseInputPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseInputPoints(temp0);
      }
    else
      {
      op->vtkQuadricClustering::SetUseInputPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetUseInputPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseInputPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseInputPoints() :
      op->vtkQuadricClustering::GetUseInputPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_UseInputPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInputPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseInputPointsOn();
      }
    else
      {
      op->vtkQuadricClustering::UseInputPointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_UseInputPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInputPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseInputPointsOff();
      }
    else
      {
      op->vtkQuadricClustering::UseInputPointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetUseFeatureEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFeatureEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseFeatureEdges(temp0);
      }
    else
      {
      op->vtkQuadricClustering::SetUseFeatureEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetUseFeatureEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseFeatureEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseFeatureEdges() :
      op->vtkQuadricClustering::GetUseFeatureEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_UseFeatureEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFeatureEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseFeatureEdgesOn();
      }
    else
      {
      op->vtkQuadricClustering::UseFeatureEdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_UseFeatureEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFeatureEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseFeatureEdgesOff();
      }
    else
      {
      op->vtkQuadricClustering::UseFeatureEdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetFeatureEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFeatureEdges *tempr = (ap.IsBound() ?
      op->GetFeatureEdges() :
      op->vtkQuadricClustering::GetFeatureEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetUseFeaturePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFeaturePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseFeaturePoints(temp0);
      }
    else
      {
      op->vtkQuadricClustering::SetUseFeaturePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetUseFeaturePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseFeaturePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseFeaturePoints() :
      op->vtkQuadricClustering::GetUseFeaturePoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_UseFeaturePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFeaturePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseFeaturePointsOn();
      }
    else
      {
      op->vtkQuadricClustering::UseFeaturePointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_UseFeaturePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFeaturePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseFeaturePointsOff();
      }
    else
      {
      op->vtkQuadricClustering::UseFeaturePointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetFeaturePointsAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeaturePointsAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFeaturePointsAngle(temp0);
      }
    else
      {
      op->vtkQuadricClustering::SetFeaturePointsAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetFeaturePointsAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeaturePointsAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFeaturePointsAngleMinValue() :
      op->vtkQuadricClustering::GetFeaturePointsAngleMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetFeaturePointsAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeaturePointsAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFeaturePointsAngleMaxValue() :
      op->vtkQuadricClustering::GetFeaturePointsAngleMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetFeaturePointsAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeaturePointsAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFeaturePointsAngle() :
      op->vtkQuadricClustering::GetFeaturePointsAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetUseInternalTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseInternalTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseInternalTriangles(temp0);
      }
    else
      {
      op->vtkQuadricClustering::SetUseInternalTriangles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetUseInternalTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseInternalTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseInternalTriangles() :
      op->vtkQuadricClustering::GetUseInternalTriangles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_UseInternalTrianglesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInternalTrianglesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseInternalTrianglesOn();
      }
    else
      {
      op->vtkQuadricClustering::UseInternalTrianglesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_UseInternalTrianglesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInternalTrianglesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseInternalTrianglesOff();
      }
    else
      {
      op->vtkQuadricClustering::UseInternalTrianglesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_StartAppend_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->StartAppend(temp0);
      }
    else
      {
      op->vtkQuadricClustering::StartAppend(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkQuadricClustering_StartAppend_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

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
      op->StartAppend(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkQuadricClustering::StartAppend(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkQuadricClustering_StartAppend(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkQuadricClustering_StartAppend_s1(self, args);
    case 6:
      return PyvtkQuadricClustering_StartAppend_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "StartAppend");
  return NULL;
}



static PyObject *
PyvtkQuadricClustering_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0);
      }
    else
      {
      op->vtkQuadricClustering::Append(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_EndAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndAppend();
      }
    else
      {
      op->vtkQuadricClustering::EndAppend();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetCopyCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCopyCellData(temp0);
      }
    else
      {
      op->vtkQuadricClustering::SetCopyCellData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetCopyCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCopyCellData() :
      op->vtkQuadricClustering::GetCopyCellData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_CopyCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyCellDataOn();
      }
    else
      {
      op->vtkQuadricClustering::CopyCellDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_CopyCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyCellDataOff();
      }
    else
      {
      op->vtkQuadricClustering::CopyCellDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetPreventDuplicateCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreventDuplicateCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreventDuplicateCells(temp0);
      }
    else
      {
      op->vtkQuadricClustering::SetPreventDuplicateCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetPreventDuplicateCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreventDuplicateCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPreventDuplicateCells() :
      op->vtkQuadricClustering::GetPreventDuplicateCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_PreventDuplicateCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreventDuplicateCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreventDuplicateCellsOn();
      }
    else
      {
      op->vtkQuadricClustering::PreventDuplicateCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadricClustering_PreventDuplicateCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreventDuplicateCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreventDuplicateCellsOff();
      }
    else
      {
      op->vtkQuadricClustering::PreventDuplicateCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkQuadricClustering_Methods[] = {
  {(char*)"GetClassName", PyvtkQuadricClustering_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard instantition, type and print methods.\n"},
  {(char*)"IsA", PyvtkQuadricClustering_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard instantition, type and print methods.\n"},
  {(char*)"NewInstance", PyvtkQuadricClustering_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkQuadricClustering\nC++: vtkQuadricClustering *NewInstance()\n\nStandard instantition, type and print methods.\n"},
  {(char*)"SafeDownCast", PyvtkQuadricClustering_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkQuadricClustering\nC++: vtkQuadricClustering *SafeDownCast(vtkObject* o)\n\nStandard instantition, type and print methods.\n"},
  {(char*)"SetNumberOfXDivisions", PyvtkQuadricClustering_SetNumberOfXDivisions, METH_VARARGS,
   (char*)"V.SetNumberOfXDivisions(int)\nC++: void SetNumberOfXDivisions(int num)\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\n"},
  {(char*)"SetNumberOfYDivisions", PyvtkQuadricClustering_SetNumberOfYDivisions, METH_VARARGS,
   (char*)"V.SetNumberOfYDivisions(int)\nC++: void SetNumberOfYDivisions(int num)\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\n"},
  {(char*)"SetNumberOfZDivisions", PyvtkQuadricClustering_SetNumberOfZDivisions, METH_VARARGS,
   (char*)"V.SetNumberOfZDivisions(int)\nC++: void SetNumberOfZDivisions(int num)\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\n"},
  {(char*)"GetNumberOfXDivisions", PyvtkQuadricClustering_GetNumberOfXDivisions, METH_VARARGS,
   (char*)"V.GetNumberOfXDivisions() -> int\nC++: int GetNumberOfXDivisions()\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\n"},
  {(char*)"GetNumberOfYDivisions", PyvtkQuadricClustering_GetNumberOfYDivisions, METH_VARARGS,
   (char*)"V.GetNumberOfYDivisions() -> int\nC++: int GetNumberOfYDivisions()\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\n"},
  {(char*)"GetNumberOfZDivisions", PyvtkQuadricClustering_GetNumberOfZDivisions, METH_VARARGS,
   (char*)"V.GetNumberOfZDivisions() -> int\nC++: int GetNumberOfZDivisions()\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\n"},
  {(char*)"SetNumberOfDivisions", PyvtkQuadricClustering_SetNumberOfDivisions, METH_VARARGS,
   (char*)"V.SetNumberOfDivisions([int, int, int])\nC++: void SetNumberOfDivisions(int div[3])\nV.SetNumberOfDivisions(int, int, int)\nC++: void SetNumberOfDivisions(int div0, int div1, int div2)\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\n"},
  {(char*)"GetNumberOfDivisions", PyvtkQuadricClustering_GetNumberOfDivisions, METH_VARARGS,
   (char*)"V.GetNumberOfDivisions() -> (int, int, int)\nC++: int *GetNumberOfDivisions()\nV.GetNumberOfDivisions([int, int, int])\nC++: void GetNumberOfDivisions(int div[3])\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\n"},
  {(char*)"SetAutoAdjustNumberOfDivisions", PyvtkQuadricClustering_SetAutoAdjustNumberOfDivisions, METH_VARARGS,
   (char*)"V.SetAutoAdjustNumberOfDivisions(int)\nC++: void SetAutoAdjustNumberOfDivisions(int a)\n\nEnable automatic adjustment of number of divisions. If off, the\nnumber of divisions specified by the user is always used (as long\nas it is valid). The default is On\n"},
  {(char*)"GetAutoAdjustNumberOfDivisions", PyvtkQuadricClustering_GetAutoAdjustNumberOfDivisions, METH_VARARGS,
   (char*)"V.GetAutoAdjustNumberOfDivisions() -> int\nC++: int GetAutoAdjustNumberOfDivisions()\n\nEnable automatic adjustment of number of divisions. If off, the\nnumber of divisions specified by the user is always used (as long\nas it is valid). The default is On\n"},
  {(char*)"AutoAdjustNumberOfDivisionsOn", PyvtkQuadricClustering_AutoAdjustNumberOfDivisionsOn, METH_VARARGS,
   (char*)"V.AutoAdjustNumberOfDivisionsOn()\nC++: void AutoAdjustNumberOfDivisionsOn()\n\nEnable automatic adjustment of number of divisions. If off, the\nnumber of divisions specified by the user is always used (as long\nas it is valid). The default is On\n"},
  {(char*)"AutoAdjustNumberOfDivisionsOff", PyvtkQuadricClustering_AutoAdjustNumberOfDivisionsOff, METH_VARARGS,
   (char*)"V.AutoAdjustNumberOfDivisionsOff()\nC++: void AutoAdjustNumberOfDivisionsOff()\n\nEnable automatic adjustment of number of divisions. If off, the\nnumber of divisions specified by the user is always used (as long\nas it is valid). The default is On\n"},
  {(char*)"SetDivisionOrigin", PyvtkQuadricClustering_SetDivisionOrigin, METH_VARARGS,
   (char*)"V.SetDivisionOrigin(float, float, float)\nC++: void SetDivisionOrigin(double x, double y, double z)\nV.SetDivisionOrigin([float, float, float])\nC++: void SetDivisionOrigin(double o[3])\n\nThis is an alternative way to set up the bins.  If you are trying\nto match boundaries between pieces, then you should use these\nmethods rather than SetNumberOfDivisions. To use these methods,\nspecify the origin and spacing of the spatial binning.\n"},
  {(char*)"GetDivisionOrigin", PyvtkQuadricClustering_GetDivisionOrigin, METH_VARARGS,
   (char*)"V.GetDivisionOrigin() -> (float, float, float)\nC++: double *GetDivisionOrigin()\n\n"},
  {(char*)"SetDivisionSpacing", PyvtkQuadricClustering_SetDivisionSpacing, METH_VARARGS,
   (char*)"V.SetDivisionSpacing(float, float, float)\nC++: void SetDivisionSpacing(double x, double y, double z)\nV.SetDivisionSpacing([float, float, float])\nC++: void SetDivisionSpacing(double s[3])\n\nThis is an alternative way to set up the bins.  If you are trying\nto match boundaries between pieces, then you should use these\nmethods rather than SetNumberOfDivisions. To use these methods,\nspecify the origin and spacing of the spatial binning.\n"},
  {(char*)"GetDivisionSpacing", PyvtkQuadricClustering_GetDivisionSpacing, METH_VARARGS,
   (char*)"V.GetDivisionSpacing() -> (float, float, float)\nC++: double *GetDivisionSpacing()\n\n"},
  {(char*)"SetUseInputPoints", PyvtkQuadricClustering_SetUseInputPoints, METH_VARARGS,
   (char*)"V.SetUseInputPoints(int)\nC++: void SetUseInputPoints(int a)\n\nNormally the point that minimizes the quadric error function is\nused as the output of the bin.  When this flag is on, the bin\npoint is forced to be one of the points from the input (the one\nwith the smallest error). This option does not work (i.e., input\npoints cannot be used) when the append methods (StartAppend(),\nAppend(), EndAppend()) are being called directly.\n"},
  {(char*)"GetUseInputPoints", PyvtkQuadricClustering_GetUseInputPoints, METH_VARARGS,
   (char*)"V.GetUseInputPoints() -> int\nC++: int GetUseInputPoints()\n\nNormally the point that minimizes the quadric error function is\nused as the output of the bin.  When this flag is on, the bin\npoint is forced to be one of the points from the input (the one\nwith the smallest error). This option does not work (i.e., input\npoints cannot be used) when the append methods (StartAppend(),\nAppend(), EndAppend()) are being called directly.\n"},
  {(char*)"UseInputPointsOn", PyvtkQuadricClustering_UseInputPointsOn, METH_VARARGS,
   (char*)"V.UseInputPointsOn()\nC++: void UseInputPointsOn()\n\nNormally the point that minimizes the quadric error function is\nused as the output of the bin.  When this flag is on, the bin\npoint is forced to be one of the points from the input (the one\nwith the smallest error). This option does not work (i.e., input\npoints cannot be used) when the append methods (StartAppend(),\nAppend(), EndAppend()) are being called directly.\n"},
  {(char*)"UseInputPointsOff", PyvtkQuadricClustering_UseInputPointsOff, METH_VARARGS,
   (char*)"V.UseInputPointsOff()\nC++: void UseInputPointsOff()\n\nNormally the point that minimizes the quadric error function is\nused as the output of the bin.  When this flag is on, the bin\npoint is forced to be one of the points from the input (the one\nwith the smallest error). This option does not work (i.e., input\npoints cannot be used) when the append methods (StartAppend(),\nAppend(), EndAppend()) are being called directly.\n"},
  {(char*)"SetUseFeatureEdges", PyvtkQuadricClustering_SetUseFeatureEdges, METH_VARARGS,
   (char*)"V.SetUseFeatureEdges(int)\nC++: void SetUseFeatureEdges(int a)\n\nBy default, this flag is off.  When \"UseFeatureEdges\" is on, then\nquadrics are computed for boundary edges/feature edges.  They\ninfluence the quadrics (position of points), but not the mesh. \nWhich features to use can be controlled by the filter\n\"FeatureEdges\".\n"},
  {(char*)"GetUseFeatureEdges", PyvtkQuadricClustering_GetUseFeatureEdges, METH_VARARGS,
   (char*)"V.GetUseFeatureEdges() -> int\nC++: int GetUseFeatureEdges()\n\nBy default, this flag is off.  When \"UseFeatureEdges\" is on, then\nquadrics are computed for boundary edges/feature edges.  They\ninfluence the quadrics (position of points), but not the mesh. \nWhich features to use can be controlled by the filter\n\"FeatureEdges\".\n"},
  {(char*)"UseFeatureEdgesOn", PyvtkQuadricClustering_UseFeatureEdgesOn, METH_VARARGS,
   (char*)"V.UseFeatureEdgesOn()\nC++: void UseFeatureEdgesOn()\n\nBy default, this flag is off.  When \"UseFeatureEdges\" is on, then\nquadrics are computed for boundary edges/feature edges.  They\ninfluence the quadrics (position of points), but not the mesh. \nWhich features to use can be controlled by the filter\n\"FeatureEdges\".\n"},
  {(char*)"UseFeatureEdgesOff", PyvtkQuadricClustering_UseFeatureEdgesOff, METH_VARARGS,
   (char*)"V.UseFeatureEdgesOff()\nC++: void UseFeatureEdgesOff()\n\nBy default, this flag is off.  When \"UseFeatureEdges\" is on, then\nquadrics are computed for boundary edges/feature edges.  They\ninfluence the quadrics (position of points), but not the mesh. \nWhich features to use can be controlled by the filter\n\"FeatureEdges\".\n"},
  {(char*)"GetFeatureEdges", PyvtkQuadricClustering_GetFeatureEdges, METH_VARARGS,
   (char*)"V.GetFeatureEdges() -> vtkFeatureEdges\nC++: vtkFeatureEdges *GetFeatureEdges()\n\nBy default, this flag is off.  When \"UseFeatureEdges\" is on, then\nquadrics are computed for boundary edges/feature edges.  They\ninfluence the quadrics (position of points), but not the mesh. \nWhich features to use can be controlled by the filter\n\"FeatureEdges\".\n"},
  {(char*)"SetUseFeaturePoints", PyvtkQuadricClustering_SetUseFeaturePoints, METH_VARARGS,
   (char*)"V.SetUseFeaturePoints(int)\nC++: void SetUseFeaturePoints(int a)\n\nBy default, this flag is off.  It only has an effect when\n\"UseFeatureEdges\" is also on.  When \"UseFeaturePoints\" is on,\nthen quadrics are computed for boundary / feature points used in\nthe boundary / feature edges.  They influence the quadrics\n(position of points), but not the mesh.\n"},
  {(char*)"GetUseFeaturePoints", PyvtkQuadricClustering_GetUseFeaturePoints, METH_VARARGS,
   (char*)"V.GetUseFeaturePoints() -> int\nC++: int GetUseFeaturePoints()\n\nBy default, this flag is off.  It only has an effect when\n\"UseFeatureEdges\" is also on.  When \"UseFeaturePoints\" is on,\nthen quadrics are computed for boundary / feature points used in\nthe boundary / feature edges.  They influence the quadrics\n(position of points), but not the mesh.\n"},
  {(char*)"UseFeaturePointsOn", PyvtkQuadricClustering_UseFeaturePointsOn, METH_VARARGS,
   (char*)"V.UseFeaturePointsOn()\nC++: void UseFeaturePointsOn()\n\nBy default, this flag is off.  It only has an effect when\n\"UseFeatureEdges\" is also on.  When \"UseFeaturePoints\" is on,\nthen quadrics are computed for boundary / feature points used in\nthe boundary / feature edges.  They influence the quadrics\n(position of points), but not the mesh.\n"},
  {(char*)"UseFeaturePointsOff", PyvtkQuadricClustering_UseFeaturePointsOff, METH_VARARGS,
   (char*)"V.UseFeaturePointsOff()\nC++: void UseFeaturePointsOff()\n\nBy default, this flag is off.  It only has an effect when\n\"UseFeatureEdges\" is also on.  When \"UseFeaturePoints\" is on,\nthen quadrics are computed for boundary / feature points used in\nthe boundary / feature edges.  They influence the quadrics\n(position of points), but not the mesh.\n"},
  {(char*)"SetFeaturePointsAngle", PyvtkQuadricClustering_SetFeaturePointsAngle, METH_VARARGS,
   (char*)"V.SetFeaturePointsAngle(float)\nC++: void SetFeaturePointsAngle(double)\n\nSet/Get the angle to use in determining whether a point on a\nboundary / feature edge is a feature point.\n"},
  {(char*)"GetFeaturePointsAngleMinValue", PyvtkQuadricClustering_GetFeaturePointsAngleMinValue, METH_VARARGS,
   (char*)"V.GetFeaturePointsAngleMinValue() -> float\nC++: double GetFeaturePointsAngleMinValue()\n\nSet/Get the angle to use in determining whether a point on a\nboundary / feature edge is a feature point.\n"},
  {(char*)"GetFeaturePointsAngleMaxValue", PyvtkQuadricClustering_GetFeaturePointsAngleMaxValue, METH_VARARGS,
   (char*)"V.GetFeaturePointsAngleMaxValue() -> float\nC++: double GetFeaturePointsAngleMaxValue()\n\nSet/Get the angle to use in determining whether a point on a\nboundary / feature edge is a feature point.\n"},
  {(char*)"GetFeaturePointsAngle", PyvtkQuadricClustering_GetFeaturePointsAngle, METH_VARARGS,
   (char*)"V.GetFeaturePointsAngle() -> float\nC++: double GetFeaturePointsAngle()\n\nSet/Get the angle to use in determining whether a point on a\nboundary / feature edge is a feature point.\n"},
  {(char*)"SetUseInternalTriangles", PyvtkQuadricClustering_SetUseInternalTriangles, METH_VARARGS,
   (char*)"V.SetUseInternalTriangles(int)\nC++: void SetUseInternalTriangles(int a)\n\nWhen this flag is on (and it is on by default), then triangles\nthat are completely contained in a bin are added to the bin\nquadrics.  When the the flag is off the filter operates faster,\nbut the surface may not be as well behaved.\n"},
  {(char*)"GetUseInternalTriangles", PyvtkQuadricClustering_GetUseInternalTriangles, METH_VARARGS,
   (char*)"V.GetUseInternalTriangles() -> int\nC++: int GetUseInternalTriangles()\n\nWhen this flag is on (and it is on by default), then triangles\nthat are completely contained in a bin are added to the bin\nquadrics.  When the the flag is off the filter operates faster,\nbut the surface may not be as well behaved.\n"},
  {(char*)"UseInternalTrianglesOn", PyvtkQuadricClustering_UseInternalTrianglesOn, METH_VARARGS,
   (char*)"V.UseInternalTrianglesOn()\nC++: void UseInternalTrianglesOn()\n\nWhen this flag is on (and it is on by default), then triangles\nthat are completely contained in a bin are added to the bin\nquadrics.  When the the flag is off the filter operates faster,\nbut the surface may not be as well behaved.\n"},
  {(char*)"UseInternalTrianglesOff", PyvtkQuadricClustering_UseInternalTrianglesOff, METH_VARARGS,
   (char*)"V.UseInternalTrianglesOff()\nC++: void UseInternalTrianglesOff()\n\nWhen this flag is on (and it is on by default), then triangles\nthat are completely contained in a bin are added to the bin\nquadrics.  When the the flag is off the filter operates faster,\nbut the surface may not be as well behaved.\n"},
  {(char*)"StartAppend", PyvtkQuadricClustering_StartAppend, METH_VARARGS,
   (char*)"V.StartAppend([float, ...])\nC++: void StartAppend(double *bounds)\nV.StartAppend(float, float, float, float, float, float)\nC++: void StartAppend(double x0, double x1, double y0, double y1,\n    double z0, double z1)\n\nThese methods provide an alternative way of executing the filter.\nPolyData can be added to the result in pieces (append). In this\nmode, the user must specify the bounds of the entire model as an\nargument to the \"StartAppend\" method.\n"},
  {(char*)"Append", PyvtkQuadricClustering_Append, METH_VARARGS,
   (char*)"V.Append(vtkPolyData)\nC++: void Append(vtkPolyData *piece)\n\nThese methods provide an alternative way of executing the filter.\nPolyData can be added to the result in pieces (append). In this\nmode, the user must specify the bounds of the entire model as an\nargument to the \"StartAppend\" method.\n"},
  {(char*)"EndAppend", PyvtkQuadricClustering_EndAppend, METH_VARARGS,
   (char*)"V.EndAppend()\nC++: void EndAppend()\n\nThese methods provide an alternative way of executing the filter.\nPolyData can be added to the result in pieces (append). In this\nmode, the user must specify the bounds of the entire model as an\nargument to the \"StartAppend\" method.\n"},
  {(char*)"SetCopyCellData", PyvtkQuadricClustering_SetCopyCellData, METH_VARARGS,
   (char*)"V.SetCopyCellData(int)\nC++: void SetCopyCellData(int a)\n\nThis flag makes the filter copy cell data from input to output\n(the best it can).  It uses input cells that trigger the addition\nof output cells (no averaging).  This is off by default, and does\nnot work when append is being called explicitly (non-pipeline\nusage).\n"},
  {(char*)"GetCopyCellData", PyvtkQuadricClustering_GetCopyCellData, METH_VARARGS,
   (char*)"V.GetCopyCellData() -> int\nC++: int GetCopyCellData()\n\nThis flag makes the filter copy cell data from input to output\n(the best it can).  It uses input cells that trigger the addition\nof output cells (no averaging).  This is off by default, and does\nnot work when append is being called explicitly (non-pipeline\nusage).\n"},
  {(char*)"CopyCellDataOn", PyvtkQuadricClustering_CopyCellDataOn, METH_VARARGS,
   (char*)"V.CopyCellDataOn()\nC++: void CopyCellDataOn()\n\nThis flag makes the filter copy cell data from input to output\n(the best it can).  It uses input cells that trigger the addition\nof output cells (no averaging).  This is off by default, and does\nnot work when append is being called explicitly (non-pipeline\nusage).\n"},
  {(char*)"CopyCellDataOff", PyvtkQuadricClustering_CopyCellDataOff, METH_VARARGS,
   (char*)"V.CopyCellDataOff()\nC++: void CopyCellDataOff()\n\nThis flag makes the filter copy cell data from input to output\n(the best it can).  It uses input cells that trigger the addition\nof output cells (no averaging).  This is off by default, and does\nnot work when append is being called explicitly (non-pipeline\nusage).\n"},
  {(char*)"SetPreventDuplicateCells", PyvtkQuadricClustering_SetPreventDuplicateCells, METH_VARARGS,
   (char*)"V.SetPreventDuplicateCells(int)\nC++: void SetPreventDuplicateCells(int a)\n\nSpecify a boolean indicating whether to remove duplicate cells\n(i.e. triangles).  This is a little slower, and takes more\nmemory, but in some cases can reduce the number of cells produced\nby an order of magnitude. By default, this flag is true.\n"},
  {(char*)"GetPreventDuplicateCells", PyvtkQuadricClustering_GetPreventDuplicateCells, METH_VARARGS,
   (char*)"V.GetPreventDuplicateCells() -> int\nC++: int GetPreventDuplicateCells()\n\nSpecify a boolean indicating whether to remove duplicate cells\n(i.e. triangles).  This is a little slower, and takes more\nmemory, but in some cases can reduce the number of cells produced\nby an order of magnitude. By default, this flag is true.\n"},
  {(char*)"PreventDuplicateCellsOn", PyvtkQuadricClustering_PreventDuplicateCellsOn, METH_VARARGS,
   (char*)"V.PreventDuplicateCellsOn()\nC++: void PreventDuplicateCellsOn()\n\nSpecify a boolean indicating whether to remove duplicate cells\n(i.e. triangles).  This is a little slower, and takes more\nmemory, but in some cases can reduce the number of cells produced\nby an order of magnitude. By default, this flag is true.\n"},
  {(char*)"PreventDuplicateCellsOff", PyvtkQuadricClustering_PreventDuplicateCellsOff, METH_VARARGS,
   (char*)"V.PreventDuplicateCellsOff()\nC++: void PreventDuplicateCellsOff()\n\nSpecify a boolean indicating whether to remove duplicate cells\n(i.e. triangles).  This is a little slower, and takes more\nmemory, but in some cases can reduce the number of cells produced\nby an order of magnitude. By default, this flag is true.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkQuadricClustering_StaticNew()
{
  return vtkQuadricClustering::New();
}

PyObject *PyVTKClass_vtkQuadricClusteringNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkQuadricClustering_StaticNew,
    PyvtkQuadricClustering_Methods,
    "vtkQuadricClustering", modulename,
    NULL, NULL,
    PyvtkQuadricClustering_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkQuadricClustering_Doc()
{
  static const char *docstring[] = {
    "vtkQuadricClustering - reduce the number of triangles in a mesh\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkQuadricClustering is a filter to reduce the number of triangles in\na triangle mesh, forming a good approximation to the original\ngeometry.  The input to vtkQuadricClustering is a vtkPolyData object,\nand all types of polygonal data are handled.\n\nThe algorithm used is the one described by Peter Lindstrom in his\nSiggraph 2000 paper, \"Out-of-Core Simplification of Large Polygonal\nModels.\"  The gene",
    "ral approach of the algorithm is to cluster\nvertices in a uniform binning of space, accumulating the quadric of\neach triangle (pushed out to the triangles vertices) within each bin,\nand then determining an optimal position for a single vertex in a bin\nby using the accumulated quadric. In more detail, the algorithm first\ngets the bounds of the input poly data. It then breaks this bounding\nvolume in",
    "to a user-specified number of spatial bins.  It then reads\neach triangle from the input and hashes its vertices into these bins.\n (If this is the first time a bin has been visited, initialize its\nquadric to the 0 matrix.) The algorithm computes the error quadric\nfor this triangle and adds it to the existing quadric of the bin in\nwhich each vertex is contained. Then, if 2 or more vertices of the\ntr",
    "iangle fall in the same bin, the triangle is dicarded.  If the\ntriangle is not discarded, it adds the triangle to the list of output\ntriangles as a list of vertex identifiers.  (There is one vertex id\nper bin.)  After all the triangles have been read, the representative\nvertex for each bin is computed (an optimal location is found) using\nthe quadric for that bin.  This determines the spatial locat",
    "ion of\nthe vertices of each of the triangles in the output.\n\nTo use this filter, specify the divisions defining the spatial\nsubdivision in the x, y, and z directions. You must also specify an\ninput vtkPolyData. Then choose to either 1) use the original points\nthat minimize the quadric error to produce the output triangles or 2)\ncompute an optimal position in each bin to produce the output\ntriangle",
    "s (recommended and default behavior).\n\nThis filter can take multiple inputs.  To do this, the user must\nexplicity call StartAppend, Append (once for each input), and\nEndAppend.  StartAppend sets up the data structure to hold the\nquadric matrices.  Append processes each triangle in the input poly\ndata it was called on, hashes its vertices to the appropriate bins,\ndetermines whether to keep this tri",
    "angle, and updates the appropriate\nquadric matrices.  EndAppend determines the spatial location of each\nof the representative vertices for the visited bins. While this\napproach does not fit into the visualization architecture and\nrequires manual control, it has the advantage that extremely large\ndata can be processed in pieces and appended to the filter\npiece-by-piece.\n\nCaveats:\n\nThis filter can d",
    "rastically affect topology, i.e., topology is not\npreserved.\n\nThe filter handles input triangle strips and arbitrary polygons.\nArbitrary polygons are assumed convex: during insertion they are\ntriangulated using a fan of triangles from the first point in the\npolygons. If the polygon is concave, this can produce bad results. In\nthis case, use vtkTriangleFilter to triangulate the polygons first.\n\nThe",
    " filter also treats polylines and vertices.\n\nNote that for certain types of geometry (e.g., a mostly 2D plane with\njitter in the normal direction), the decimator can perform badly. In\nthis sitation, set the number of bins in the normal direction to one.\n\nSee Also:\n\nvtkQuadricDecimation vtkDecimatePro vtkDecimate vtkQuadricLODActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuadricClustering(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkQuadricClusteringNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuadricClustering", o) != 0)
    {
    Py_DECREF(o);
    }

}

