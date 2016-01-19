// python wrapper for vtkSpyPlotReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSpyPlotReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSpyPlotReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSpyPlotReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCompositeDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataSetAlgorithmNew
#endif

static const char **PyvtkSpyPlotReader_Doc();


static PyObject *
PyvtkSpyPlotReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSpyPlotReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpyPlotReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSpyPlotReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpyPlotReader::NewInstance());

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
PyvtkSpyPlotReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSpyPlotReader *tempr = vtkSpyPlotReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_PrintBlockList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintBlockList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  vtkNonOverlappingAMR *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkNonOverlappingAMR") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->PrintBlockList(temp0, temp1);
      }
    else
      {
      op->vtkSpyPlotReader::PrintBlockList(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

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
      op->vtkSpyPlotReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSpyPlotReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStep(temp0);
      }
    else
      {
      op->vtkSpyPlotReader::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkSpyPlotReader::GetTimeStep());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetDistributeFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistributeFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistributeFiles(temp0);
      }
    else
      {
      op->vtkSpyPlotReader::SetDistributeFiles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetDistributeFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistributeFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDistributeFiles() :
      op->vtkSpyPlotReader::GetDistributeFiles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_DistributeFilesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistributeFilesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DistributeFilesOn();
      }
    else
      {
      op->vtkSpyPlotReader::DistributeFilesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_DistributeFilesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistributeFilesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DistributeFilesOff();
      }
    else
      {
      op->vtkSpyPlotReader::DistributeFilesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetGenerateLevelArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateLevelArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateLevelArray(temp0);
      }
    else
      {
      op->vtkSpyPlotReader::SetGenerateLevelArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetGenerateLevelArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateLevelArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateLevelArray() :
      op->vtkSpyPlotReader::GetGenerateLevelArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateLevelArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateLevelArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateLevelArrayOn();
      }
    else
      {
      op->vtkSpyPlotReader::GenerateLevelArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateLevelArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateLevelArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateLevelArrayOff();
      }
    else
      {
      op->vtkSpyPlotReader::GenerateLevelArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetGenerateBlockIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateBlockIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateBlockIdArray(temp0);
      }
    else
      {
      op->vtkSpyPlotReader::SetGenerateBlockIdArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetGenerateBlockIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateBlockIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateBlockIdArray() :
      op->vtkSpyPlotReader::GetGenerateBlockIdArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateBlockIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBlockIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateBlockIdArrayOn();
      }
    else
      {
      op->vtkSpyPlotReader::GenerateBlockIdArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateBlockIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBlockIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateBlockIdArrayOff();
      }
    else
      {
      op->vtkSpyPlotReader::GenerateBlockIdArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetGenerateActiveBlockArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateActiveBlockArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateActiveBlockArray(temp0);
      }
    else
      {
      op->vtkSpyPlotReader::SetGenerateActiveBlockArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetGenerateActiveBlockArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateActiveBlockArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateActiveBlockArray() :
      op->vtkSpyPlotReader::GetGenerateActiveBlockArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateActiveBlockArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateActiveBlockArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateActiveBlockArrayOn();
      }
    else
      {
      op->vtkSpyPlotReader::GenerateActiveBlockArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateActiveBlockArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateActiveBlockArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateActiveBlockArrayOff();
      }
    else
      {
      op->vtkSpyPlotReader::GenerateActiveBlockArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetGenerateTracerArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTracerArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTracerArray(temp0);
      }
    else
      {
      op->vtkSpyPlotReader::SetGenerateTracerArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetGenerateTracerArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTracerArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTracerArray() :
      op->vtkSpyPlotReader::GetGenerateTracerArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateTracerArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTracerArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateTracerArrayOn();
      }
    else
      {
      op->vtkSpyPlotReader::GenerateTracerArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateTracerArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTracerArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateTracerArrayOff();
      }
    else
      {
      op->vtkSpyPlotReader::GenerateTracerArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetGenerateMarkers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateMarkers(temp0);
      }
    else
      {
      op->vtkSpyPlotReader::SetGenerateMarkers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetGenerateMarkers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateMarkers() :
      op->vtkSpyPlotReader::GetGenerateMarkers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateMarkersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateMarkersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateMarkersOn();
      }
    else
      {
      op->vtkSpyPlotReader::GenerateMarkersOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateMarkersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateMarkersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateMarkersOff();
      }
    else
      {
      op->vtkSpyPlotReader::GenerateMarkersOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetDownConvertVolumeFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDownConvertVolumeFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDownConvertVolumeFraction(temp0);
      }
    else
      {
      op->vtkSpyPlotReader::SetDownConvertVolumeFraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetDownConvertVolumeFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDownConvertVolumeFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDownConvertVolumeFraction() :
      op->vtkSpyPlotReader::GetDownConvertVolumeFraction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_DownConvertVolumeFractionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownConvertVolumeFractionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DownConvertVolumeFractionOn();
      }
    else
      {
      op->vtkSpyPlotReader::DownConvertVolumeFractionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_DownConvertVolumeFractionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownConvertVolumeFractionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DownConvertVolumeFractionOff();
      }
    else
      {
      op->vtkSpyPlotReader::DownConvertVolumeFractionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetComputeDerivedVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeDerivedVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeDerivedVariables(temp0);
      }
    else
      {
      op->vtkSpyPlotReader::SetComputeDerivedVariables(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetComputeDerivedVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeDerivedVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeDerivedVariables() :
      op->vtkSpyPlotReader::GetComputeDerivedVariables());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_ComputeDerivedVariablesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDerivedVariablesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeDerivedVariablesOn();
      }
    else
      {
      op->vtkSpyPlotReader::ComputeDerivedVariablesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_ComputeDerivedVariablesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDerivedVariablesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeDerivedVariablesOff();
      }
    else
      {
      op->vtkSpyPlotReader::ComputeDerivedVariablesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetMergeXYZComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeXYZComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMergeXYZComponents(temp0);
      }
    else
      {
      op->vtkSpyPlotReader::SetMergeXYZComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetMergeXYZComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeXYZComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMergeXYZComponents() :
      op->vtkSpyPlotReader::GetMergeXYZComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_MergeXYZComponentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeXYZComponentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergeXYZComponentsOn();
      }
    else
      {
      op->vtkSpyPlotReader::MergeXYZComponentsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_MergeXYZComponentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeXYZComponentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergeXYZComponentsOff();
      }
    else
      {
      op->vtkSpyPlotReader::MergeXYZComponentsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkSpyPlotReader::GetTimeStepRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkSpyPlotReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkSpyPlotReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkSpyPlotReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

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
      op->vtkSpyPlotReader::SetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetGlobalController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetGlobalController(temp0);
      }
    else
      {
      op->vtkSpyPlotReader::SetGlobalController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkSpyPlotReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSpyPlotReader_Methods[] = {
  {(char*)"GetClassName", PyvtkSpyPlotReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSpyPlotReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSpyPlotReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSpyPlotReader\nC++: vtkSpyPlotReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSpyPlotReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSpyPlotReader\nC++: vtkSpyPlotReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"PrintBlockList", PyvtkSpyPlotReader_PrintBlockList, METH_VARARGS,
   (char*)"V.PrintBlockList(vtkNonOverlappingAMR, int)\nC++: void PrintBlockList(vtkNonOverlappingAMR *hbds, int myProcId)\n\n"},
  {(char*)"SetFileName", PyvtkSpyPlotReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: virtual void SetFileName(const char *filename)\n\nGet and set the file name. It is either the name of the case file\nor the name of the single binary file.\n"},
  {(char*)"GetFileName", PyvtkSpyPlotReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet and set the file name. It is either the name of the case file\nor the name of the single binary file.\n"},
  {(char*)"SetTimeStep", PyvtkSpyPlotReader_SetTimeStep, METH_VARARGS,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(int a)\n\nSet and get the time step. The time step is an index, NOT a time\ngiven in seconds.\n"},
  {(char*)"GetTimeStep", PyvtkSpyPlotReader_GetTimeStep, METH_VARARGS,
   (char*)"V.GetTimeStep() -> int\nC++: int GetTimeStep()\n\nSet and get the time step. The time step is an index, NOT a time\ngiven in seconds.\n"},
  {(char*)"SetDistributeFiles", PyvtkSpyPlotReader_SetDistributeFiles, METH_VARARGS,
   (char*)"V.SetDistributeFiles(int)\nC++: void SetDistributeFiles(int a)\n\nIf true, the reader distributes files over processors. If false,\nthe reader distributes blocks over processors. Default is false.\nDistributing blocks should provide a better load balancing: if\nthere is only one file and several processors, only the first\nprocessor is used in the case of the file-distributed method.\n"},
  {(char*)"GetDistributeFiles", PyvtkSpyPlotReader_GetDistributeFiles, METH_VARARGS,
   (char*)"V.GetDistributeFiles() -> int\nC++: int GetDistributeFiles()\n\nIf true, the reader distributes files over processors. If false,\nthe reader distributes blocks over processors. Default is false.\nDistributing blocks should provide a better load balancing: if\nthere is only one file and several processors, only the first\nprocessor is used in the case of the file-distributed method.\n"},
  {(char*)"DistributeFilesOn", PyvtkSpyPlotReader_DistributeFilesOn, METH_VARARGS,
   (char*)"V.DistributeFilesOn()\nC++: void DistributeFilesOn()\n\nIf true, the reader distributes files over processors. If false,\nthe reader distributes blocks over processors. Default is false.\nDistributing blocks should provide a better load balancing: if\nthere is only one file and several processors, only the first\nprocessor is used in the case of the file-distributed method.\n"},
  {(char*)"DistributeFilesOff", PyvtkSpyPlotReader_DistributeFilesOff, METH_VARARGS,
   (char*)"V.DistributeFilesOff()\nC++: void DistributeFilesOff()\n\nIf true, the reader distributes files over processors. If false,\nthe reader distributes blocks over processors. Default is false.\nDistributing blocks should provide a better load balancing: if\nthere is only one file and several processors, only the first\nprocessor is used in the case of the file-distributed method.\n"},
  {(char*)"SetGenerateLevelArray", PyvtkSpyPlotReader_SetGenerateLevelArray, METH_VARARGS,
   (char*)"V.SetGenerateLevelArray(int)\nC++: void SetGenerateLevelArray(int a)\n\nIf true, the reader generate a cell array in each block that\nstores the level in the hierarchy, starting from 0. False by\ndefault.\n"},
  {(char*)"GetGenerateLevelArray", PyvtkSpyPlotReader_GetGenerateLevelArray, METH_VARARGS,
   (char*)"V.GetGenerateLevelArray() -> int\nC++: int GetGenerateLevelArray()\n\nIf true, the reader generate a cell array in each block that\nstores the level in the hierarchy, starting from 0. False by\ndefault.\n"},
  {(char*)"GenerateLevelArrayOn", PyvtkSpyPlotReader_GenerateLevelArrayOn, METH_VARARGS,
   (char*)"V.GenerateLevelArrayOn()\nC++: void GenerateLevelArrayOn()\n\nIf true, the reader generate a cell array in each block that\nstores the level in the hierarchy, starting from 0. False by\ndefault.\n"},
  {(char*)"GenerateLevelArrayOff", PyvtkSpyPlotReader_GenerateLevelArrayOff, METH_VARARGS,
   (char*)"V.GenerateLevelArrayOff()\nC++: void GenerateLevelArrayOff()\n\nIf true, the reader generate a cell array in each block that\nstores the level in the hierarchy, starting from 0. False by\ndefault.\n"},
  {(char*)"SetGenerateBlockIdArray", PyvtkSpyPlotReader_SetGenerateBlockIdArray, METH_VARARGS,
   (char*)"V.SetGenerateBlockIdArray(int)\nC++: void SetGenerateBlockIdArray(int a)\n\nIf true, the reader generate a cell array in each block that\nstores a unique but not necessarily contiguous id. False by\ndefault.\n"},
  {(char*)"GetGenerateBlockIdArray", PyvtkSpyPlotReader_GetGenerateBlockIdArray, METH_VARARGS,
   (char*)"V.GetGenerateBlockIdArray() -> int\nC++: int GetGenerateBlockIdArray()\n\nIf true, the reader generate a cell array in each block that\nstores a unique but not necessarily contiguous id. False by\ndefault.\n"},
  {(char*)"GenerateBlockIdArrayOn", PyvtkSpyPlotReader_GenerateBlockIdArrayOn, METH_VARARGS,
   (char*)"V.GenerateBlockIdArrayOn()\nC++: void GenerateBlockIdArrayOn()\n\nIf true, the reader generate a cell array in each block that\nstores a unique but not necessarily contiguous id. False by\ndefault.\n"},
  {(char*)"GenerateBlockIdArrayOff", PyvtkSpyPlotReader_GenerateBlockIdArrayOff, METH_VARARGS,
   (char*)"V.GenerateBlockIdArrayOff()\nC++: void GenerateBlockIdArrayOff()\n\nIf true, the reader generate a cell array in each block that\nstores a unique but not necessarily contiguous id. False by\ndefault.\n"},
  {(char*)"SetGenerateActiveBlockArray", PyvtkSpyPlotReader_SetGenerateActiveBlockArray, METH_VARARGS,
   (char*)"V.SetGenerateActiveBlockArray(int)\nC++: void SetGenerateActiveBlockArray(int a)\n\nIf true, the reader generate a cell array in each block that\ncorresponds to the Active field in the file. False by default.\n"},
  {(char*)"GetGenerateActiveBlockArray", PyvtkSpyPlotReader_GetGenerateActiveBlockArray, METH_VARARGS,
   (char*)"V.GetGenerateActiveBlockArray() -> int\nC++: int GetGenerateActiveBlockArray()\n\nIf true, the reader generate a cell array in each block that\ncorresponds to the Active field in the file. False by default.\n"},
  {(char*)"GenerateActiveBlockArrayOn", PyvtkSpyPlotReader_GenerateActiveBlockArrayOn, METH_VARARGS,
   (char*)"V.GenerateActiveBlockArrayOn()\nC++: void GenerateActiveBlockArrayOn()\n\nIf true, the reader generate a cell array in each block that\ncorresponds to the Active field in the file. False by default.\n"},
  {(char*)"GenerateActiveBlockArrayOff", PyvtkSpyPlotReader_GenerateActiveBlockArrayOff, METH_VARARGS,
   (char*)"V.GenerateActiveBlockArrayOff()\nC++: void GenerateActiveBlockArrayOff()\n\nIf true, the reader generate a cell array in each block that\ncorresponds to the Active field in the file. False by default.\n"},
  {(char*)"SetGenerateTracerArray", PyvtkSpyPlotReader_SetGenerateTracerArray, METH_VARARGS,
   (char*)"V.SetGenerateTracerArray(int)\nC++: void SetGenerateTracerArray(int a)\n\nIf true, the reader will extract tracer data at each time step\nand include a field data array for the tracers at that time.\n"},
  {(char*)"GetGenerateTracerArray", PyvtkSpyPlotReader_GetGenerateTracerArray, METH_VARARGS,
   (char*)"V.GetGenerateTracerArray() -> int\nC++: int GetGenerateTracerArray()\n\nIf true, the reader will extract tracer data at each time step\nand include a field data array for the tracers at that time.\n"},
  {(char*)"GenerateTracerArrayOn", PyvtkSpyPlotReader_GenerateTracerArrayOn, METH_VARARGS,
   (char*)"V.GenerateTracerArrayOn()\nC++: void GenerateTracerArrayOn()\n\nIf true, the reader will extract tracer data at each time step\nand include a field data array for the tracers at that time.\n"},
  {(char*)"GenerateTracerArrayOff", PyvtkSpyPlotReader_GenerateTracerArrayOff, METH_VARARGS,
   (char*)"V.GenerateTracerArrayOff()\nC++: void GenerateTracerArrayOff()\n\nIf true, the reader will extract tracer data at each time step\nand include a field data array for the tracers at that time.\n"},
  {(char*)"SetGenerateMarkers", PyvtkSpyPlotReader_SetGenerateMarkers, METH_VARARGS,
   (char*)"V.SetGenerateMarkers(int)\nC++: void SetGenerateMarkers(int gm)\n\nif true, the reader will extract the marker data at each time\nstep and create a set of vtkPoints in the second output port.\n"},
  {(char*)"GetGenerateMarkers", PyvtkSpyPlotReader_GetGenerateMarkers, METH_VARARGS,
   (char*)"V.GetGenerateMarkers() -> int\nC++: int GetGenerateMarkers()\n\nif true, the reader will extract the marker data at each time\nstep and create a set of vtkPoints in the second output port.\n"},
  {(char*)"GenerateMarkersOn", PyvtkSpyPlotReader_GenerateMarkersOn, METH_VARARGS,
   (char*)"V.GenerateMarkersOn()\nC++: void GenerateMarkersOn()\n\nif true, the reader will extract the marker data at each time\nstep and create a set of vtkPoints in the second output port.\n"},
  {(char*)"GenerateMarkersOff", PyvtkSpyPlotReader_GenerateMarkersOff, METH_VARARGS,
   (char*)"V.GenerateMarkersOff()\nC++: void GenerateMarkersOff()\n\nif true, the reader will extract the marker data at each time\nstep and create a set of vtkPoints in the second output port.\n"},
  {(char*)"SetDownConvertVolumeFraction", PyvtkSpyPlotReader_SetDownConvertVolumeFraction, METH_VARARGS,
   (char*)"V.SetDownConvertVolumeFraction(int)\nC++: void SetDownConvertVolumeFraction(int vf)\n\nIf true, the reader will convert volume fraction arrays to\nunsigned char. True by default.\n"},
  {(char*)"GetDownConvertVolumeFraction", PyvtkSpyPlotReader_GetDownConvertVolumeFraction, METH_VARARGS,
   (char*)"V.GetDownConvertVolumeFraction() -> int\nC++: int GetDownConvertVolumeFraction()\n\nIf true, the reader will convert volume fraction arrays to\nunsigned char. True by default.\n"},
  {(char*)"DownConvertVolumeFractionOn", PyvtkSpyPlotReader_DownConvertVolumeFractionOn, METH_VARARGS,
   (char*)"V.DownConvertVolumeFractionOn()\nC++: void DownConvertVolumeFractionOn()\n\nIf true, the reader will convert volume fraction arrays to\nunsigned char. True by default.\n"},
  {(char*)"DownConvertVolumeFractionOff", PyvtkSpyPlotReader_DownConvertVolumeFractionOff, METH_VARARGS,
   (char*)"V.DownConvertVolumeFractionOff()\nC++: void DownConvertVolumeFractionOff()\n\nIf true, the reader will convert volume fraction arrays to\nunsigned char. True by default.\n"},
  {(char*)"SetComputeDerivedVariables", PyvtkSpyPlotReader_SetComputeDerivedVariables, METH_VARARGS,
   (char*)"V.SetComputeDerivedVariables(int)\nC++: void SetComputeDerivedVariables(int a)\n\nIf true, the reader will calculate all derived variables it can\ngiven which properties the user has selected True by default.\n"},
  {(char*)"GetComputeDerivedVariables", PyvtkSpyPlotReader_GetComputeDerivedVariables, METH_VARARGS,
   (char*)"V.GetComputeDerivedVariables() -> int\nC++: int GetComputeDerivedVariables()\n\nIf true, the reader will calculate all derived variables it can\ngiven which properties the user has selected True by default.\n"},
  {(char*)"ComputeDerivedVariablesOn", PyvtkSpyPlotReader_ComputeDerivedVariablesOn, METH_VARARGS,
   (char*)"V.ComputeDerivedVariablesOn()\nC++: void ComputeDerivedVariablesOn()\n\nIf true, the reader will calculate all derived variables it can\ngiven which properties the user has selected True by default.\n"},
  {(char*)"ComputeDerivedVariablesOff", PyvtkSpyPlotReader_ComputeDerivedVariablesOff, METH_VARARGS,
   (char*)"V.ComputeDerivedVariablesOff()\nC++: void ComputeDerivedVariablesOff()\n\nIf true, the reader will calculate all derived variables it can\ngiven which properties the user has selected True by default.\n"},
  {(char*)"SetMergeXYZComponents", PyvtkSpyPlotReader_SetMergeXYZComponents, METH_VARARGS,
   (char*)"V.SetMergeXYZComponents(int)\nC++: void SetMergeXYZComponents(int merge)\n\nIf true, the reader will merge scalar arrays named, for example, \"X\nvelocity\" \"Y velocity\" and \"Z velocity\" into a vector array named\n\"velocity\" with scalar components X, Y and Z. It will also merge\nX and Y scalar arrays (with no Z component) into a vector with\nscalar components X, Y and 0. True by default.\n"},
  {(char*)"GetMergeXYZComponents", PyvtkSpyPlotReader_GetMergeXYZComponents, METH_VARARGS,
   (char*)"V.GetMergeXYZComponents() -> int\nC++: int GetMergeXYZComponents()\n\nIf true, the reader will merge scalar arrays named, for example, \"X\nvelocity\" \"Y velocity\" and \"Z velocity\" into a vector array named\n\"velocity\" with scalar components X, Y and Z. It will also merge\nX and Y scalar arrays (with no Z component) into a vector with\nscalar components X, Y and 0. True by default.\n"},
  {(char*)"MergeXYZComponentsOn", PyvtkSpyPlotReader_MergeXYZComponentsOn, METH_VARARGS,
   (char*)"V.MergeXYZComponentsOn()\nC++: void MergeXYZComponentsOn()\n\nIf true, the reader will merge scalar arrays named, for example, \"X\nvelocity\" \"Y velocity\" and \"Z velocity\" into a vector array named\n\"velocity\" with scalar components X, Y and Z. It will also merge\nX and Y scalar arrays (with no Z component) into a vector with\nscalar components X, Y and 0. True by default.\n"},
  {(char*)"MergeXYZComponentsOff", PyvtkSpyPlotReader_MergeXYZComponentsOff, METH_VARARGS,
   (char*)"V.MergeXYZComponentsOff()\nC++: void MergeXYZComponentsOff()\n\nIf true, the reader will merge scalar arrays named, for example, \"X\nvelocity\" \"Y velocity\" and \"Z velocity\" into a vector array named\n\"velocity\" with scalar components X, Y and Z. It will also merge\nX and Y scalar arrays (with no Z component) into a vector with\nscalar components X, Y and 0. True by default.\n"},
  {(char*)"GetTimeStepRange", PyvtkSpyPlotReader_GetTimeStepRange, METH_VARARGS,
   (char*)"V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {(char*)"GetNumberOfCellArrays", PyvtkSpyPlotReader_GetNumberOfCellArrays, METH_VARARGS,
   (char*)"V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nCell array selection\n"},
  {(char*)"GetCellArrayName", PyvtkSpyPlotReader_GetCellArrayName, METH_VARARGS,
   (char*)"V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int idx)\n\nCell array selection\n"},
  {(char*)"GetCellArrayStatus", PyvtkSpyPlotReader_GetCellArrayStatus, METH_VARARGS,
   (char*)"V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nCell array selection\n"},
  {(char*)"SetCellArrayStatus", PyvtkSpyPlotReader_SetCellArrayStatus, METH_VARARGS,
   (char*)"V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nCell array selection\n"},
  {(char*)"SetGlobalController", PyvtkSpyPlotReader_SetGlobalController, METH_VARARGS,
   (char*)"V.SetGlobalController(vtkMultiProcessController)\nC++: void SetGlobalController(\n    vtkMultiProcessController *controller)\n\nSet the controller used to coordinate parallel reading. The \"global\ncontroller\" has all processes while the \"controller\" has only\nthose who have blocks.\n"},
  {(char*)"CanReadFile", PyvtkSpyPlotReader_CanReadFile, METH_VARARGS,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *fname)\n\nDetermine if the file can be readed with this reader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSpyPlotReader_StaticNew()
{
  return vtkSpyPlotReader::New();
}

PyObject *PyVTKClass_vtkSpyPlotReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSpyPlotReader_StaticNew,
    PyvtkSpyPlotReader_Methods,
    "vtkSpyPlotReader", modulename,
    NULL, NULL,
    PyvtkSpyPlotReader_Doc(),
    PyVTKClass_vtkCompositeDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSpyPlotReader_Doc()
{
  static const char *docstring[] = {
    "vtkSpyPlotReader - Read SPCTH Spy Plot file format\n\n",
    "Superclass: vtkCompositeDataSetAlgorithm\n\n",
    "vtkSpyPlotReader is a reader that reads SPCTH Spy Plot file format\nthrough an ascii meta file called the \"case\" file (extension .spcth).\nThis case file lists all the actual binary files that describe a\ndataset. Each binary file describes a part of the dataset. However,\nif only a single binary file describes the whole dataset, it is\npossible to load it directly without using a case file.\n\nThe reade",
    "r supports both Spy dataset types: flat mesh and AMR\n(Adaptive Mesh Refinement).\n\nIt has parallel capabilities. Each processor is supposed to have\naccess to the case file and to all the binary files. All the binary\nfiles have to be coherent: they describe the same fields of data.\nEach binary file may content multiple time stamp. The time stamp to\nread is specified with SetTimestamp().\n\nIn parallel",
    " mode, there are two ways to distribute data over\nprocessors (controlled by SetDistributeFiles() ):\n- either by distributing blocks: all processors read all the files,\n  but only some number of blocks per files. Hence, load balancing is\n  good even if there is only one file.\n- or by distributing files: a file is read entirely by one processor.\nIf there is only one file, all the other processors ar",
    "e not used at\n  all.\n\nImplementation Details:\n\n- All processors read the first binary file listed in the case file\n  to get informations about the fields.\n- Each block of data is already surrounded by ghost cells in the\n  file, even on part of the block that don't have actual neighbor\n  cells. The reader removes those wrong ghost cells.\n- Each time step contains all the cell array name variables\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSpyPlotReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSpyPlotReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSpyPlotReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

