// python wrapper for vtkSLACReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSLACReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSLACReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSLACReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkSLACReader_Doc();


static PyObject *
PyvtkSLACReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSLACReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSLACReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSLACReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSLACReader::NewInstance());

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
PyvtkSLACReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSLACReader *tempr = vtkSLACReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetMeshFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetMeshFileName() :
      op->vtkSLACReader::GetMeshFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_SetMeshFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMeshFileName(temp0);
      }
    else
      {
      op->vtkSLACReader::SetMeshFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_AddModeFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddModeFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddModeFileName(temp0);
      }
    else
      {
      op->vtkSLACReader::AddModeFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_RemoveAllModeFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllModeFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllModeFileNames();
      }
    else
      {
      op->vtkSLACReader::RemoveAllModeFileNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetNumberOfModeFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfModeFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfModeFileNames() :
      op->vtkSLACReader::GetNumberOfModeFileNames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetModeFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetModeFileName(temp0) :
      op->vtkSLACReader::GetModeFileName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetReadInternalVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadInternalVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReadInternalVolume() :
      op->vtkSLACReader::GetReadInternalVolume());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_SetReadInternalVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadInternalVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadInternalVolume(temp0);
      }
    else
      {
      op->vtkSLACReader::SetReadInternalVolume(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadInternalVolumeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadInternalVolumeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadInternalVolumeOn();
      }
    else
      {
      op->vtkSLACReader::ReadInternalVolumeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadInternalVolumeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadInternalVolumeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadInternalVolumeOff();
      }
    else
      {
      op->vtkSLACReader::ReadInternalVolumeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetReadExternalSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadExternalSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReadExternalSurface() :
      op->vtkSLACReader::GetReadExternalSurface());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_SetReadExternalSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadExternalSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadExternalSurface(temp0);
      }
    else
      {
      op->vtkSLACReader::SetReadExternalSurface(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadExternalSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadExternalSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadExternalSurfaceOn();
      }
    else
      {
      op->vtkSLACReader::ReadExternalSurfaceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadExternalSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadExternalSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadExternalSurfaceOff();
      }
    else
      {
      op->vtkSLACReader::ReadExternalSurfaceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetReadMidpoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadMidpoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReadMidpoints() :
      op->vtkSLACReader::GetReadMidpoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_SetReadMidpoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadMidpoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadMidpoints(temp0);
      }
    else
      {
      op->vtkSLACReader::SetReadMidpoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadMidpointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMidpointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadMidpointsOn();
      }
    else
      {
      op->vtkSLACReader::ReadMidpointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadMidpointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMidpointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadMidpointsOff();
      }
    else
      {
      op->vtkSLACReader::ReadMidpointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetNumberOfVariableArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariableArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVariableArrays() :
      op->vtkSLACReader::GetNumberOfVariableArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetVariableArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetVariableArrayName(temp0) :
      op->vtkSLACReader::GetVariableArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVariableArrayStatus(temp0) :
      op->vtkSLACReader::GetVariableArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_SetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetVariableArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkSLACReader::SetVariableArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_ResetFrequencyScales(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFrequencyScales");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetFrequencyScales();
      }
    else
      {
      op->vtkSLACReader::ResetFrequencyScales();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_SetFrequencyScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrequencyScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFrequencyScale(temp0, temp1);
      }
    else
      {
      op->vtkSLACReader::SetFrequencyScale(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_ResetPhaseShifts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetPhaseShifts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetPhaseShifts();
      }
    else
      {
      op->vtkSLACReader::ResetPhaseShifts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_SetPhaseShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhaseShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPhaseShift(temp0, temp1);
      }
    else
      {
      op->vtkSLACReader::SetPhaseShift(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetFrequencyScales(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrequencyScales");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetFrequencyScales() :
      op->vtkSLACReader::GetFrequencyScales());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetPhaseShifts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhaseShifts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetPhaseShifts() :
      op->vtkSLACReader::GetPhaseShifts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkSLACReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_IS_INTERNAL_VOLUME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IS_INTERNAL_VOLUME");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkSLACReader::IS_INTERNAL_VOLUME();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_IS_EXTERNAL_SURFACE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IS_EXTERNAL_SURFACE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkSLACReader::IS_EXTERNAL_SURFACE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_POINTS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POINTS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationObjectBaseKey *tempr = vtkSLACReader::POINTS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_POINT_DATA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POINT_DATA");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationObjectBaseKey *tempr = vtkSLACReader::POINT_DATA();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSLACReader_Methods[] = {
  {(char*)"GetClassName", PyvtkSLACReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSLACReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSLACReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSLACReader\nC++: vtkSLACReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSLACReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSLACReader\nC++: vtkSLACReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMeshFileName", PyvtkSLACReader_GetMeshFileName, METH_VARARGS,
   (char*)"V.GetMeshFileName() -> string\nC++: char *GetMeshFileName()\n\n"},
  {(char*)"SetMeshFileName", PyvtkSLACReader_SetMeshFileName, METH_VARARGS,
   (char*)"V.SetMeshFileName(string)\nC++: void SetMeshFileName(char *)\n\n"},
  {(char*)"AddModeFileName", PyvtkSLACReader_AddModeFileName, METH_VARARGS,
   (char*)"V.AddModeFileName(string)\nC++: virtual void AddModeFileName(const char *fname)\n\nThere may be one mode file (usually for actual modes) or multiple\nmode files (which usually actually represent time series).  These\nmethods set and clear the list of mode files (which can be a\nsingle mode file).\n"},
  {(char*)"RemoveAllModeFileNames", PyvtkSLACReader_RemoveAllModeFileNames, METH_VARARGS,
   (char*)"V.RemoveAllModeFileNames()\nC++: virtual void RemoveAllModeFileNames()\n\nThere may be one mode file (usually for actual modes) or multiple\nmode files (which usually actually represent time series).  These\nmethods set and clear the list of mode files (which can be a\nsingle mode file).\n"},
  {(char*)"GetNumberOfModeFileNames", PyvtkSLACReader_GetNumberOfModeFileNames, METH_VARARGS,
   (char*)"V.GetNumberOfModeFileNames() -> int\nC++: virtual unsigned int GetNumberOfModeFileNames()\n\nThere may be one mode file (usually for actual modes) or multiple\nmode files (which usually actually represent time series).  These\nmethods set and clear the list of mode files (which can be a\nsingle mode file).\n"},
  {(char*)"GetModeFileName", PyvtkSLACReader_GetModeFileName, METH_VARARGS,
   (char*)"V.GetModeFileName(int) -> string\nC++: virtual const char *GetModeFileName(unsigned int idx)\n\nThere may be one mode file (usually for actual modes) or multiple\nmode files (which usually actually represent time series).  These\nmethods set and clear the list of mode files (which can be a\nsingle mode file).\n"},
  {(char*)"GetReadInternalVolume", PyvtkSLACReader_GetReadInternalVolume, METH_VARARGS,
   (char*)"V.GetReadInternalVolume() -> int\nC++: int GetReadInternalVolume()\n\nIf on, reads the internal volume of the data set.  Set to off by\ndefault.\n"},
  {(char*)"SetReadInternalVolume", PyvtkSLACReader_SetReadInternalVolume, METH_VARARGS,
   (char*)"V.SetReadInternalVolume(int)\nC++: void SetReadInternalVolume(int a)\n\nIf on, reads the internal volume of the data set.  Set to off by\ndefault.\n"},
  {(char*)"ReadInternalVolumeOn", PyvtkSLACReader_ReadInternalVolumeOn, METH_VARARGS,
   (char*)"V.ReadInternalVolumeOn()\nC++: void ReadInternalVolumeOn()\n\nIf on, reads the internal volume of the data set.  Set to off by\ndefault.\n"},
  {(char*)"ReadInternalVolumeOff", PyvtkSLACReader_ReadInternalVolumeOff, METH_VARARGS,
   (char*)"V.ReadInternalVolumeOff()\nC++: void ReadInternalVolumeOff()\n\nIf on, reads the internal volume of the data set.  Set to off by\ndefault.\n"},
  {(char*)"GetReadExternalSurface", PyvtkSLACReader_GetReadExternalSurface, METH_VARARGS,
   (char*)"V.GetReadExternalSurface() -> int\nC++: int GetReadExternalSurface()\n\nIf on, reads the external surfaces of the data set.  Set to on by\ndefault.\n"},
  {(char*)"SetReadExternalSurface", PyvtkSLACReader_SetReadExternalSurface, METH_VARARGS,
   (char*)"V.SetReadExternalSurface(int)\nC++: void SetReadExternalSurface(int a)\n\nIf on, reads the external surfaces of the data set.  Set to on by\ndefault.\n"},
  {(char*)"ReadExternalSurfaceOn", PyvtkSLACReader_ReadExternalSurfaceOn, METH_VARARGS,
   (char*)"V.ReadExternalSurfaceOn()\nC++: void ReadExternalSurfaceOn()\n\nIf on, reads the external surfaces of the data set.  Set to on by\ndefault.\n"},
  {(char*)"ReadExternalSurfaceOff", PyvtkSLACReader_ReadExternalSurfaceOff, METH_VARARGS,
   (char*)"V.ReadExternalSurfaceOff()\nC++: void ReadExternalSurfaceOff()\n\nIf on, reads the external surfaces of the data set.  Set to on by\ndefault.\n"},
  {(char*)"GetReadMidpoints", PyvtkSLACReader_GetReadMidpoints, METH_VARARGS,
   (char*)"V.GetReadMidpoints() -> int\nC++: int GetReadMidpoints()\n\nIf on, reads midpoint information for external surfaces and\nbuilds quadratic surface triangles.  Set to on by default.\n"},
  {(char*)"SetReadMidpoints", PyvtkSLACReader_SetReadMidpoints, METH_VARARGS,
   (char*)"V.SetReadMidpoints(int)\nC++: void SetReadMidpoints(int a)\n\nIf on, reads midpoint information for external surfaces and\nbuilds quadratic surface triangles.  Set to on by default.\n"},
  {(char*)"ReadMidpointsOn", PyvtkSLACReader_ReadMidpointsOn, METH_VARARGS,
   (char*)"V.ReadMidpointsOn()\nC++: void ReadMidpointsOn()\n\nIf on, reads midpoint information for external surfaces and\nbuilds quadratic surface triangles.  Set to on by default.\n"},
  {(char*)"ReadMidpointsOff", PyvtkSLACReader_ReadMidpointsOff, METH_VARARGS,
   (char*)"V.ReadMidpointsOff()\nC++: void ReadMidpointsOff()\n\nIf on, reads midpoint information for external surfaces and\nbuilds quadratic surface triangles.  Set to on by default.\n"},
  {(char*)"GetNumberOfVariableArrays", PyvtkSLACReader_GetNumberOfVariableArrays, METH_VARARGS,
   (char*)"V.GetNumberOfVariableArrays() -> int\nC++: virtual int GetNumberOfVariableArrays()\n\nVariable array selection.\n"},
  {(char*)"GetVariableArrayName", PyvtkSLACReader_GetVariableArrayName, METH_VARARGS,
   (char*)"V.GetVariableArrayName(int) -> string\nC++: virtual const char *GetVariableArrayName(int idx)\n\nVariable array selection.\n"},
  {(char*)"GetVariableArrayStatus", PyvtkSLACReader_GetVariableArrayStatus, METH_VARARGS,
   (char*)"V.GetVariableArrayStatus(string) -> int\nC++: virtual int GetVariableArrayStatus(const char *name)\n\nVariable array selection.\n"},
  {(char*)"SetVariableArrayStatus", PyvtkSLACReader_SetVariableArrayStatus, METH_VARARGS,
   (char*)"V.SetVariableArrayStatus(string, int)\nC++: virtual void SetVariableArrayStatus(const char *name,\n    int status)\n\nVariable array selection.\n"},
  {(char*)"ResetFrequencyScales", PyvtkSLACReader_ResetFrequencyScales, METH_VARARGS,
   (char*)"V.ResetFrequencyScales()\nC++: virtual void ResetFrequencyScales()\n\nSets the scale factor for each mode. Each scale factor is reset\nto 1.\n"},
  {(char*)"SetFrequencyScale", PyvtkSLACReader_SetFrequencyScale, METH_VARARGS,
   (char*)"V.SetFrequencyScale(int, float)\nC++: virtual void SetFrequencyScale(int index, double scale)\n\nSets the scale factor for each mode. Each scale factor is reset\nto 1.\n"},
  {(char*)"ResetPhaseShifts", PyvtkSLACReader_ResetPhaseShifts, METH_VARARGS,
   (char*)"V.ResetPhaseShifts()\nC++: virtual void ResetPhaseShifts()\n\nSets the phase offset for each mode. Each shift is reset to 0.\n"},
  {(char*)"SetPhaseShift", PyvtkSLACReader_SetPhaseShift, METH_VARARGS,
   (char*)"V.SetPhaseShift(int, float)\nC++: virtual void SetPhaseShift(int index, double shift)\n\nSets the phase offset for each mode. Each shift is reset to 0.\n"},
  {(char*)"GetFrequencyScales", PyvtkSLACReader_GetFrequencyScales, METH_VARARGS,
   (char*)"V.GetFrequencyScales() -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetFrequencyScales()\n\nNOTE: This is not thread-safe.\n"},
  {(char*)"GetPhaseShifts", PyvtkSLACReader_GetPhaseShifts, METH_VARARGS,
   (char*)"V.GetPhaseShifts() -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetPhaseShifts()\n\nNOTE: This is not thread-safe.\n"},
  {(char*)"CanReadFile", PyvtkSLACReader_CanReadFile, METH_VARARGS | METH_STATIC,
   (char*)"V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\nReturns true if the given file can be read by this reader.\n"},
  {(char*)"IS_INTERNAL_VOLUME", PyvtkSLACReader_IS_INTERNAL_VOLUME, METH_VARARGS | METH_STATIC,
   (char*)"V.IS_INTERNAL_VOLUME() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *IS_INTERNAL_VOLUME()\n\nThis key is attached to the metadata information of all data sets\nin the output that are part of the internal volume.\n"},
  {(char*)"IS_EXTERNAL_SURFACE", PyvtkSLACReader_IS_EXTERNAL_SURFACE, METH_VARARGS | METH_STATIC,
   (char*)"V.IS_EXTERNAL_SURFACE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *IS_EXTERNAL_SURFACE()\n\nThis key is attached to the metadata information of all data sets\nin the output that are part of the external surface.\n"},
  {(char*)"POINTS", PyvtkSLACReader_POINTS, METH_VARARGS | METH_STATIC,
   (char*)"V.POINTS() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *POINTS()\n\nAll the data sets stored in the multiblock output share the same\npoint data.  For convienience, the point coordinates (vtkPoints)\nand point data (vtkPointData) are saved under these keys in the\nvtkInformation of the output data set.\n"},
  {(char*)"POINT_DATA", PyvtkSLACReader_POINT_DATA, METH_VARARGS | METH_STATIC,
   (char*)"V.POINT_DATA() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *POINT_DATA()\n\nAll the data sets stored in the multiblock output share the same\npoint data.  For convienience, the point coordinates (vtkPoints)\nand point data (vtkPointData) are saved under these keys in the\nvtkInformation of the output data set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSLACReader_StaticNew()
{
  return vtkSLACReader::New();
}

PyObject *PyVTKClass_vtkSLACReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSLACReader_StaticNew,
    PyvtkSLACReader_Methods,
    "vtkSLACReader", modulename,
    NULL, NULL,
    PyvtkSLACReader_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "SURFACE_OUTPUT", vtkSLACReader::SURFACE_OUTPUT },
          { "VOLUME_OUTPUT", vtkSLACReader::VOLUME_OUTPUT },
          { "NUM_OUTPUTS", vtkSLACReader::NUM_OUTPUTS },
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

const char **PyvtkSLACReader_Doc()
{
  static const char *docstring[] = {
    "vtkSLACReader\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "A reader for a data format used by Omega3p, Tau3p, and several other\ntools used at the Standford Linear Accelerator Center (SLAC).  The\nunderlying format uses netCDF to store arrays, but also imposes\nseveral conventions to form an unstructured grid of elements.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSLACReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSLACReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSLACReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

