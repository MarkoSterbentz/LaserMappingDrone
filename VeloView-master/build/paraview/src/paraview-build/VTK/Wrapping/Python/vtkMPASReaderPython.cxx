// python wrapper for vtkMPASReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMPASReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMPASReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMPASReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkMPASReader_Doc();


static PyObject *
PyvtkMPASReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMPASReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMPASReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMPASReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMPASReader::NewInstance());

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
PyvtkMPASReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMPASReader *tempr = vtkMPASReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkMPASReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMPASReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetMaximumCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumCells() :
      op->vtkMPASReader::GetMaximumCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetMaximumPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumPoints() :
      op->vtkMPASReader::GetMaximumPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetNumberOfCellVars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellVars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellVars() :
      op->vtkMPASReader::GetNumberOfCellVars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetNumberOfPointVars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointVars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointVars() :
      op->vtkMPASReader::GetNumberOfPointVars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkMPASReader::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMPASReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkMPASReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMPASReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMPASReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkMPASReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkMPASReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkMPASReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkMPASReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkMPASReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkMPASReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllPointArrays();
      }
    else
      {
      op->vtkMPASReader::DisableAllPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllPointArrays();
      }
    else
      {
      op->vtkMPASReader::EnableAllPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkMPASReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkMPASReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkMPASReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCellArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkMPASReader::SetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_DisableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllCellArrays();
      }
    else
      {
      op->vtkMPASReader::DisableAllCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_EnableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllCellArrays();
      }
    else
      {
      op->vtkMPASReader::EnableAllCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetVerticalLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVerticalLevel(temp0);
      }
    else
      {
      op->vtkMPASReader::SetVerticalLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetVerticalLevelRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalLevelRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetVerticalLevelRange() :
      op->vtkMPASReader::GetVerticalLevelRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetLayerThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayerThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLayerThickness(temp0);
      }
    else
      {
      op->vtkMPASReader::SetLayerThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetLayerThicknessRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerThicknessRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetLayerThicknessRange() :
      op->vtkMPASReader::GetLayerThicknessRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetCenterLon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterLon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCenterLon(temp0);
      }
    else
      {
      op->vtkMPASReader::SetCenterLon(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetCenterLonRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterLonRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetCenterLonRange() :
      op->vtkMPASReader::GetCenterLonRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetProjectLatLon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectLatLon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectLatLon(temp0);
      }
    else
      {
      op->vtkMPASReader::SetProjectLatLon(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetProjectLatLon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectLatLon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetProjectLatLon() :
      op->vtkMPASReader::GetProjectLatLon());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetIsAtmosphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsAtmosphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIsAtmosphere(temp0);
      }
    else
      {
      op->vtkMPASReader::SetIsAtmosphere(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetIsAtmosphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsAtmosphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIsAtmosphere() :
      op->vtkMPASReader::GetIsAtmosphere());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetIsZeroCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsZeroCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIsZeroCentered(temp0);
      }
    else
      {
      op->vtkMPASReader::SetIsZeroCentered(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetIsZeroCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsZeroCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIsZeroCentered() :
      op->vtkMPASReader::GetIsZeroCentered());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_SetShowMultilayerView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowMultilayerView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowMultilayerView(temp0);
      }
    else
      {
      op->vtkMPASReader::SetShowMultilayerView(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_GetShowMultilayerView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowMultilayerView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetShowMultilayerView() :
      op->vtkMPASReader::GetShowMultilayerView());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPASReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkMPASReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMPASReader_Methods[] = {
  {(char*)"GetClassName", PyvtkMPASReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMPASReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMPASReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMPASReader\nC++: vtkMPASReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMPASReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMPASReader\nC++: vtkMPASReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkMPASReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of MPAS data file to read.\n"},
  {(char*)"GetFileName", PyvtkMPASReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of MPAS data file to read.\n"},
  {(char*)"GetMaximumCells", PyvtkMPASReader_GetMaximumCells, METH_VARARGS,
   (char*)"V.GetMaximumCells() -> int\nC++: int GetMaximumCells()\n\nGet the number of data cells\n"},
  {(char*)"GetMaximumPoints", PyvtkMPASReader_GetMaximumPoints, METH_VARARGS,
   (char*)"V.GetMaximumPoints() -> int\nC++: int GetMaximumPoints()\n\nGet the number of points\n"},
  {(char*)"GetNumberOfCellVars", PyvtkMPASReader_GetNumberOfCellVars, METH_VARARGS,
   (char*)"V.GetNumberOfCellVars() -> int\nC++: int GetNumberOfCellVars()\n\nGet the number of data variables at the cell centers and points\n"},
  {(char*)"GetNumberOfPointVars", PyvtkMPASReader_GetNumberOfPointVars, METH_VARARGS,
   (char*)"V.GetNumberOfPointVars() -> int\nC++: int GetNumberOfPointVars()\n\nGet the number of data variables at the cell centers and points\n"},
  {(char*)"GetOutput", PyvtkMPASReader_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetOutput()\nV.GetOutput(int) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetOutput(int index)\n\nGet the reader's output\n"},
  {(char*)"GetNumberOfPointArrays", PyvtkMPASReader_GetNumberOfPointArrays, METH_VARARGS,
   (char*)"V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"GetPointArrayName", PyvtkMPASReader_GetPointArrayName, METH_VARARGS,
   (char*)"V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"GetPointArrayStatus", PyvtkMPASReader_GetPointArrayStatus, METH_VARARGS,
   (char*)"V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"SetPointArrayStatus", PyvtkMPASReader_SetPointArrayStatus, METH_VARARGS,
   (char*)"V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"DisableAllPointArrays", PyvtkMPASReader_DisableAllPointArrays, METH_VARARGS,
   (char*)"V.DisableAllPointArrays()\nC++: void DisableAllPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"EnableAllPointArrays", PyvtkMPASReader_EnableAllPointArrays, METH_VARARGS,
   (char*)"V.EnableAllPointArrays()\nC++: void EnableAllPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"GetNumberOfCellArrays", PyvtkMPASReader_GetNumberOfCellArrays, METH_VARARGS,
   (char*)"V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\n"},
  {(char*)"GetCellArrayName", PyvtkMPASReader_GetCellArrayName, METH_VARARGS,
   (char*)"V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\n"},
  {(char*)"GetCellArrayStatus", PyvtkMPASReader_GetCellArrayStatus, METH_VARARGS,
   (char*)"V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\n"},
  {(char*)"SetCellArrayStatus", PyvtkMPASReader_SetCellArrayStatus, METH_VARARGS,
   (char*)"V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\n"},
  {(char*)"DisableAllCellArrays", PyvtkMPASReader_DisableAllCellArrays, METH_VARARGS,
   (char*)"V.DisableAllCellArrays()\nC++: void DisableAllCellArrays()\n\n"},
  {(char*)"EnableAllCellArrays", PyvtkMPASReader_EnableAllCellArrays, METH_VARARGS,
   (char*)"V.EnableAllCellArrays()\nC++: void EnableAllCellArrays()\n\n"},
  {(char*)"SetVerticalLevel", PyvtkMPASReader_SetVerticalLevel, METH_VARARGS,
   (char*)"V.SetVerticalLevel(int)\nC++: void SetVerticalLevel(int level)\n\n"},
  {(char*)"GetVerticalLevelRange", PyvtkMPASReader_GetVerticalLevelRange, METH_VARARGS,
   (char*)"V.GetVerticalLevelRange() -> (int, int)\nC++: int *GetVerticalLevelRange()\n\n"},
  {(char*)"SetLayerThickness", PyvtkMPASReader_SetLayerThickness, METH_VARARGS,
   (char*)"V.SetLayerThickness(int)\nC++: void SetLayerThickness(int val)\n\n"},
  {(char*)"GetLayerThicknessRange", PyvtkMPASReader_GetLayerThicknessRange, METH_VARARGS,
   (char*)"V.GetLayerThicknessRange() -> (int, int)\nC++: int *GetLayerThicknessRange()\n\n"},
  {(char*)"SetCenterLon", PyvtkMPASReader_SetCenterLon, METH_VARARGS,
   (char*)"V.SetCenterLon(int)\nC++: void SetCenterLon(int val)\n\n"},
  {(char*)"GetCenterLonRange", PyvtkMPASReader_GetCenterLonRange, METH_VARARGS,
   (char*)"V.GetCenterLonRange() -> (int, int)\nC++: int *GetCenterLonRange()\n\n"},
  {(char*)"SetProjectLatLon", PyvtkMPASReader_SetProjectLatLon, METH_VARARGS,
   (char*)"V.SetProjectLatLon(bool)\nC++: void SetProjectLatLon(bool val)\n\n"},
  {(char*)"GetProjectLatLon", PyvtkMPASReader_GetProjectLatLon, METH_VARARGS,
   (char*)"V.GetProjectLatLon() -> bool\nC++: bool GetProjectLatLon()\n\n"},
  {(char*)"SetIsAtmosphere", PyvtkMPASReader_SetIsAtmosphere, METH_VARARGS,
   (char*)"V.SetIsAtmosphere(bool)\nC++: void SetIsAtmosphere(bool val)\n\n"},
  {(char*)"GetIsAtmosphere", PyvtkMPASReader_GetIsAtmosphere, METH_VARARGS,
   (char*)"V.GetIsAtmosphere() -> bool\nC++: bool GetIsAtmosphere()\n\n"},
  {(char*)"SetIsZeroCentered", PyvtkMPASReader_SetIsZeroCentered, METH_VARARGS,
   (char*)"V.SetIsZeroCentered(bool)\nC++: void SetIsZeroCentered(bool val)\n\n"},
  {(char*)"GetIsZeroCentered", PyvtkMPASReader_GetIsZeroCentered, METH_VARARGS,
   (char*)"V.GetIsZeroCentered() -> bool\nC++: bool GetIsZeroCentered()\n\n"},
  {(char*)"SetShowMultilayerView", PyvtkMPASReader_SetShowMultilayerView, METH_VARARGS,
   (char*)"V.SetShowMultilayerView(bool)\nC++: void SetShowMultilayerView(bool val)\n\n"},
  {(char*)"GetShowMultilayerView", PyvtkMPASReader_GetShowMultilayerView, METH_VARARGS,
   (char*)"V.GetShowMultilayerView() -> bool\nC++: bool GetShowMultilayerView()\n\n"},
  {(char*)"CanReadFile", PyvtkMPASReader_CanReadFile, METH_VARARGS | METH_STATIC,
   (char*)"V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\nReturns true if the given file can be read.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMPASReader_StaticNew()
{
  return vtkMPASReader::New();
}

PyObject *PyVTKClass_vtkMPASReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMPASReader_StaticNew,
    PyvtkMPASReader_Methods,
    "vtkMPASReader", modulename,
    NULL, NULL,
    PyvtkMPASReader_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMPASReader_Doc()
{
  static const char *docstring[] = {
    "vtkMPASReader - Read an MPAS netCDF file\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "This program reads an MPAS netCDF data file to allow paraview to\ndisplay a dual-grid sphere or latlon projection.  Also allows display\nof primal-grid sphere. The variables that have time dim are available\nto ParaView.\n\nAssume all variables are of interest if they have dims (Time,\nnCells|nVertices, nVertLevels, [nTracers]) Assume no more than 100\nvars each for cell and point data Does not deal with",
    " edge data.\n\nWhen using this reader, it is important that you remember to do the\nfollowing:\n1.  When changing a selected variable, remember to select it also in\n   the drop down box to \"color by\".  It doesn't color by that\n   variable automatically.\n2.  When selecting multilayer sphere view, make layer thickness\n   around 100,000.\n3.  When selecting multilayer lat/lon view, make layer thickness\n  ",
    " around 10.\n4.  Always click the -Z orientation after making a switch from\n   lat/lon to sphere, from single to multilayer or changing\n   thickness.\n5.  Be conservative on the number of changes you make before hitting\n   Apply, since there may be bugs in this reader.  Just make one\n   change and then hit Apply.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMPASReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMPASReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMPASReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

