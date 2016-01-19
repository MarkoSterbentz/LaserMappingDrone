// python wrapper for vtkMultiBlockPLOT3DReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMultiBlockPLOT3DReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMultiBlockPLOT3DReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMultiBlockPLOT3DReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkMultiBlockPLOT3DReader_Doc();


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMultiBlockPLOT3DReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiBlockPLOT3DReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiBlockPLOT3DReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiBlockPLOT3DReader::NewInstance());

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
PyvtkMultiBlockPLOT3DReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMultiBlockPLOT3DReader *tempr = vtkMultiBlockPLOT3DReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

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
      op->vtkMultiBlockPLOT3DReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMultiBlockPLOT3DReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetXYZFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYZFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXYZFileName(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetXYZFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetXYZFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYZFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXYZFileName() :
      op->vtkMultiBlockPLOT3DReader::GetXYZFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetQFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQFileName(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetQFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetQFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetQFileName() :
      op->vtkMultiBlockPLOT3DReader::GetQFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetFunctionFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFunctionFileName(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetFunctionFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetFunctionFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunctionFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFunctionFileName() :
      op->vtkMultiBlockPLOT3DReader::GetFunctionFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetAutoDetectFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoDetectFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoDetectFormat(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetAutoDetectFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetAutoDetectFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoDetectFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoDetectFormat() :
      op->vtkMultiBlockPLOT3DReader::GetAutoDetectFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_AutoDetectFormatOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoDetectFormatOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoDetectFormatOn();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::AutoDetectFormatOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_AutoDetectFormatOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoDetectFormatOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoDetectFormatOff();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::AutoDetectFormatOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBinaryFile(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetBinaryFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBinaryFile() :
      op->vtkMultiBlockPLOT3DReader::GetBinaryFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_BinaryFileOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryFileOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryFileOn();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::BinaryFileOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_BinaryFileOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryFileOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryFileOff();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::BinaryFileOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetMultiGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultiGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMultiGrid(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetMultiGrid(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetMultiGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMultiGrid() :
      op->vtkMultiBlockPLOT3DReader::GetMultiGrid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_MultiGridOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiGridOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultiGridOn();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::MultiGridOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_MultiGridOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiGridOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultiGridOff();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::MultiGridOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetHasByteCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasByteCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHasByteCount(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetHasByteCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetHasByteCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasByteCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHasByteCount() :
      op->vtkMultiBlockPLOT3DReader::GetHasByteCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_HasByteCountOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasByteCountOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HasByteCountOn();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::HasByteCountOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_HasByteCountOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasByteCountOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HasByteCountOff();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::HasByteCountOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetIBlanking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIBlanking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIBlanking(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetIBlanking(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetIBlanking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIBlanking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIBlanking() :
      op->vtkMultiBlockPLOT3DReader::GetIBlanking());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_IBlankingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IBlankingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IBlankingOn();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::IBlankingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_IBlankingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IBlankingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IBlankingOff();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::IBlankingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetTwoDimensionalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwoDimensionalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTwoDimensionalGeometry(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetTwoDimensionalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetTwoDimensionalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwoDimensionalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTwoDimensionalGeometry() :
      op->vtkMultiBlockPLOT3DReader::GetTwoDimensionalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_TwoDimensionalGeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoDimensionalGeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwoDimensionalGeometryOn();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::TwoDimensionalGeometryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_TwoDimensionalGeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoDimensionalGeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwoDimensionalGeometryOff();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::TwoDimensionalGeometryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetDoublePrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDoublePrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDoublePrecision(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetDoublePrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetDoublePrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoublePrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDoublePrecision() :
      op->vtkMultiBlockPLOT3DReader::GetDoublePrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_DoublePrecisionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoublePrecisionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DoublePrecisionOn();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::DoublePrecisionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_DoublePrecisionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoublePrecisionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DoublePrecisionOff();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::DoublePrecisionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetForceRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForceRead(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetForceRead(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetForceRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetForceRead() :
      op->vtkMultiBlockPLOT3DReader::GetForceRead());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_ForceReadOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceReadOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceReadOn();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::ForceReadOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_ForceReadOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceReadOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceReadOff();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::ForceReadOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToBigEndian();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetByteOrderToBigEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToLittleEndian();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetByteOrderToLittleEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrder(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetByteOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetByteOrder() :
      op->vtkMultiBlockPLOT3DReader::GetByteOrder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetByteOrderAsString() :
      op->vtkMultiBlockPLOT3DReader::GetByteOrderAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetR(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetR(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetR() :
      op->vtkMultiBlockPLOT3DReader::GetR());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetGamma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGamma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGamma(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetGamma(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetGamma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGamma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetGamma() :
      op->vtkMultiBlockPLOT3DReader::GetGamma());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetScalarFunctionNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarFunctionNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarFunctionNumber(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetScalarFunctionNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetScalarFunctionNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFunctionNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarFunctionNumber() :
      op->vtkMultiBlockPLOT3DReader::GetScalarFunctionNumber());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetVectorFunctionNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorFunctionNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorFunctionNumber(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::SetVectorFunctionNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetVectorFunctionNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorFunctionNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVectorFunctionNumber() :
      op->vtkMultiBlockPLOT3DReader::GetVectorFunctionNumber());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_AddFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddFunction(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::AddFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_RemoveFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveFunction(temp0);
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::RemoveFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_RemoveAllFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllFunctions();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::RemoveAllFunctions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_CanReadBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CanReadBinaryFile(temp0) :
      op->vtkMultiBlockPLOT3DReader::CanReadBinaryFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Modified();
      }
    else
      {
      op->vtkMultiBlockPLOT3DReader::Modified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiBlockPLOT3DReader_Methods[] = {
  {(char*)"GetClassName", PyvtkMultiBlockPLOT3DReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMultiBlockPLOT3DReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMultiBlockPLOT3DReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMultiBlockPLOT3DReader\nC++: vtkMultiBlockPLOT3DReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMultiBlockPLOT3DReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMultiBlockPLOT3DReader\nC++: vtkMultiBlockPLOT3DReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkMultiBlockPLOT3DReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(const char *name)\n\nSet/Get the PLOT3D geometry filename.\n"},
  {(char*)"GetFileName", PyvtkMultiBlockPLOT3DReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: const char *GetFileName()\n\nSet/Get the PLOT3D geometry filename.\n"},
  {(char*)"SetXYZFileName", PyvtkMultiBlockPLOT3DReader_SetXYZFileName, METH_VARARGS,
   (char*)"V.SetXYZFileName(string)\nC++: virtual void SetXYZFileName(const char *)\n\nSet/Get the PLOT3D geometry filename.\n"},
  {(char*)"GetXYZFileName", PyvtkMultiBlockPLOT3DReader_GetXYZFileName, METH_VARARGS,
   (char*)"V.GetXYZFileName() -> string\nC++: char *GetXYZFileName()\n\nSet/Get the PLOT3D geometry filename.\n"},
  {(char*)"SetQFileName", PyvtkMultiBlockPLOT3DReader_SetQFileName, METH_VARARGS,
   (char*)"V.SetQFileName(string)\nC++: void SetQFileName(char *)\n\nSet/Get the PLOT3D solution filename.\n"},
  {(char*)"GetQFileName", PyvtkMultiBlockPLOT3DReader_GetQFileName, METH_VARARGS,
   (char*)"V.GetQFileName() -> string\nC++: char *GetQFileName()\n\nSet/Get the PLOT3D solution filename.\n"},
  {(char*)"SetFunctionFileName", PyvtkMultiBlockPLOT3DReader_SetFunctionFileName, METH_VARARGS,
   (char*)"V.SetFunctionFileName(string)\nC++: void SetFunctionFileName(char *)\n\nSet/Get the PLOT3D function filename.\n"},
  {(char*)"GetFunctionFileName", PyvtkMultiBlockPLOT3DReader_GetFunctionFileName, METH_VARARGS,
   (char*)"V.GetFunctionFileName() -> string\nC++: char *GetFunctionFileName()\n\nSet/Get the PLOT3D function filename.\n"},
  {(char*)"SetAutoDetectFormat", PyvtkMultiBlockPLOT3DReader_SetAutoDetectFormat, METH_VARARGS,
   (char*)"V.SetAutoDetectFormat(int)\nC++: void SetAutoDetectFormat(int a)\n\nWhen this option is turned on, the reader will try to figure out\nthe values of various options such as byte order, byte count etc.\nautomatically. This options works only for binary files. When it\nis turned on, the reader should be able to read most Plot3D files\nautomatically. The default is OFF for backwards compatibility\nreasons. For binary files, it is strongly recommended that you\nturn on AutoDetectFormat and leave the other file format related\noptions untouched.\n"},
  {(char*)"GetAutoDetectFormat", PyvtkMultiBlockPLOT3DReader_GetAutoDetectFormat, METH_VARARGS,
   (char*)"V.GetAutoDetectFormat() -> int\nC++: int GetAutoDetectFormat()\n\nWhen this option is turned on, the reader will try to figure out\nthe values of various options such as byte order, byte count etc.\nautomatically. This options works only for binary files. When it\nis turned on, the reader should be able to read most Plot3D files\nautomatically. The default is OFF for backwards compatibility\nreasons. For binary files, it is strongly recommended that you\nturn on AutoDetectFormat and leave the other file format related\noptions untouched.\n"},
  {(char*)"AutoDetectFormatOn", PyvtkMultiBlockPLOT3DReader_AutoDetectFormatOn, METH_VARARGS,
   (char*)"V.AutoDetectFormatOn()\nC++: void AutoDetectFormatOn()\n\nWhen this option is turned on, the reader will try to figure out\nthe values of various options such as byte order, byte count etc.\nautomatically. This options works only for binary files. When it\nis turned on, the reader should be able to read most Plot3D files\nautomatically. The default is OFF for backwards compatibility\nreasons. For binary files, it is strongly recommended that you\nturn on AutoDetectFormat and leave the other file format related\noptions untouched.\n"},
  {(char*)"AutoDetectFormatOff", PyvtkMultiBlockPLOT3DReader_AutoDetectFormatOff, METH_VARARGS,
   (char*)"V.AutoDetectFormatOff()\nC++: void AutoDetectFormatOff()\n\nWhen this option is turned on, the reader will try to figure out\nthe values of various options such as byte order, byte count etc.\nautomatically. This options works only for binary files. When it\nis turned on, the reader should be able to read most Plot3D files\nautomatically. The default is OFF for backwards compatibility\nreasons. For binary files, it is strongly recommended that you\nturn on AutoDetectFormat and leave the other file format related\noptions untouched.\n"},
  {(char*)"SetBinaryFile", PyvtkMultiBlockPLOT3DReader_SetBinaryFile, METH_VARARGS,
   (char*)"V.SetBinaryFile(int)\nC++: void SetBinaryFile(int a)\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {(char*)"GetBinaryFile", PyvtkMultiBlockPLOT3DReader_GetBinaryFile, METH_VARARGS,
   (char*)"V.GetBinaryFile() -> int\nC++: int GetBinaryFile()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {(char*)"BinaryFileOn", PyvtkMultiBlockPLOT3DReader_BinaryFileOn, METH_VARARGS,
   (char*)"V.BinaryFileOn()\nC++: void BinaryFileOn()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {(char*)"BinaryFileOff", PyvtkMultiBlockPLOT3DReader_BinaryFileOff, METH_VARARGS,
   (char*)"V.BinaryFileOff()\nC++: void BinaryFileOff()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {(char*)"SetMultiGrid", PyvtkMultiBlockPLOT3DReader_SetMultiGrid, METH_VARARGS,
   (char*)"V.SetMultiGrid(int)\nC++: void SetMultiGrid(int a)\n\nDoes the file to be read contain information about number of\ngrids. In some PLOT3D files, the first value contains the number\nof grids (even if there is only 1). If reading such a file, set\nthis to true.\n"},
  {(char*)"GetMultiGrid", PyvtkMultiBlockPLOT3DReader_GetMultiGrid, METH_VARARGS,
   (char*)"V.GetMultiGrid() -> int\nC++: int GetMultiGrid()\n\nDoes the file to be read contain information about number of\ngrids. In some PLOT3D files, the first value contains the number\nof grids (even if there is only 1). If reading such a file, set\nthis to true.\n"},
  {(char*)"MultiGridOn", PyvtkMultiBlockPLOT3DReader_MultiGridOn, METH_VARARGS,
   (char*)"V.MultiGridOn()\nC++: void MultiGridOn()\n\nDoes the file to be read contain information about number of\ngrids. In some PLOT3D files, the first value contains the number\nof grids (even if there is only 1). If reading such a file, set\nthis to true.\n"},
  {(char*)"MultiGridOff", PyvtkMultiBlockPLOT3DReader_MultiGridOff, METH_VARARGS,
   (char*)"V.MultiGridOff()\nC++: void MultiGridOff()\n\nDoes the file to be read contain information about number of\ngrids. In some PLOT3D files, the first value contains the number\nof grids (even if there is only 1). If reading such a file, set\nthis to true.\n"},
  {(char*)"SetHasByteCount", PyvtkMultiBlockPLOT3DReader_SetHasByteCount, METH_VARARGS,
   (char*)"V.SetHasByteCount(int)\nC++: void SetHasByteCount(int a)\n\nWere the arrays written with leading and trailing byte counts ?\nUsually, files written by a fortran program will contain these\nbyte counts whereas the ones written by C/C++ won't.\n"},
  {(char*)"GetHasByteCount", PyvtkMultiBlockPLOT3DReader_GetHasByteCount, METH_VARARGS,
   (char*)"V.GetHasByteCount() -> int\nC++: int GetHasByteCount()\n\nWere the arrays written with leading and trailing byte counts ?\nUsually, files written by a fortran program will contain these\nbyte counts whereas the ones written by C/C++ won't.\n"},
  {(char*)"HasByteCountOn", PyvtkMultiBlockPLOT3DReader_HasByteCountOn, METH_VARARGS,
   (char*)"V.HasByteCountOn()\nC++: void HasByteCountOn()\n\nWere the arrays written with leading and trailing byte counts ?\nUsually, files written by a fortran program will contain these\nbyte counts whereas the ones written by C/C++ won't.\n"},
  {(char*)"HasByteCountOff", PyvtkMultiBlockPLOT3DReader_HasByteCountOff, METH_VARARGS,
   (char*)"V.HasByteCountOff()\nC++: void HasByteCountOff()\n\nWere the arrays written with leading and trailing byte counts ?\nUsually, files written by a fortran program will contain these\nbyte counts whereas the ones written by C/C++ won't.\n"},
  {(char*)"SetIBlanking", PyvtkMultiBlockPLOT3DReader_SetIBlanking, METH_VARARGS,
   (char*)"V.SetIBlanking(int)\nC++: void SetIBlanking(int a)\n\nIs there iblanking (point visibility) information in the file. If\nthere is iblanking arrays, these will be read and assigned to the\nPointVisibility array of the output.\n"},
  {(char*)"GetIBlanking", PyvtkMultiBlockPLOT3DReader_GetIBlanking, METH_VARARGS,
   (char*)"V.GetIBlanking() -> int\nC++: int GetIBlanking()\n\nIs there iblanking (point visibility) information in the file. If\nthere is iblanking arrays, these will be read and assigned to the\nPointVisibility array of the output.\n"},
  {(char*)"IBlankingOn", PyvtkMultiBlockPLOT3DReader_IBlankingOn, METH_VARARGS,
   (char*)"V.IBlankingOn()\nC++: void IBlankingOn()\n\nIs there iblanking (point visibility) information in the file. If\nthere is iblanking arrays, these will be read and assigned to the\nPointVisibility array of the output.\n"},
  {(char*)"IBlankingOff", PyvtkMultiBlockPLOT3DReader_IBlankingOff, METH_VARARGS,
   (char*)"V.IBlankingOff()\nC++: void IBlankingOff()\n\nIs there iblanking (point visibility) information in the file. If\nthere is iblanking arrays, these will be read and assigned to the\nPointVisibility array of the output.\n"},
  {(char*)"SetTwoDimensionalGeometry", PyvtkMultiBlockPLOT3DReader_SetTwoDimensionalGeometry, METH_VARARGS,
   (char*)"V.SetTwoDimensionalGeometry(int)\nC++: void SetTwoDimensionalGeometry(int a)\n\nIf only two-dimensional data was written to the file, turn this\non.\n"},
  {(char*)"GetTwoDimensionalGeometry", PyvtkMultiBlockPLOT3DReader_GetTwoDimensionalGeometry, METH_VARARGS,
   (char*)"V.GetTwoDimensionalGeometry() -> int\nC++: int GetTwoDimensionalGeometry()\n\nIf only two-dimensional data was written to the file, turn this\non.\n"},
  {(char*)"TwoDimensionalGeometryOn", PyvtkMultiBlockPLOT3DReader_TwoDimensionalGeometryOn, METH_VARARGS,
   (char*)"V.TwoDimensionalGeometryOn()\nC++: void TwoDimensionalGeometryOn()\n\nIf only two-dimensional data was written to the file, turn this\non.\n"},
  {(char*)"TwoDimensionalGeometryOff", PyvtkMultiBlockPLOT3DReader_TwoDimensionalGeometryOff, METH_VARARGS,
   (char*)"V.TwoDimensionalGeometryOff()\nC++: void TwoDimensionalGeometryOff()\n\nIf only two-dimensional data was written to the file, turn this\non.\n"},
  {(char*)"SetDoublePrecision", PyvtkMultiBlockPLOT3DReader_SetDoublePrecision, METH_VARARGS,
   (char*)"V.SetDoublePrecision(int)\nC++: void SetDoublePrecision(int a)\n\nIs this file in double precision or single precision. This only\nmatters for binary files. Default is single.\n"},
  {(char*)"GetDoublePrecision", PyvtkMultiBlockPLOT3DReader_GetDoublePrecision, METH_VARARGS,
   (char*)"V.GetDoublePrecision() -> int\nC++: int GetDoublePrecision()\n\nIs this file in double precision or single precision. This only\nmatters for binary files. Default is single.\n"},
  {(char*)"DoublePrecisionOn", PyvtkMultiBlockPLOT3DReader_DoublePrecisionOn, METH_VARARGS,
   (char*)"V.DoublePrecisionOn()\nC++: void DoublePrecisionOn()\n\nIs this file in double precision or single precision. This only\nmatters for binary files. Default is single.\n"},
  {(char*)"DoublePrecisionOff", PyvtkMultiBlockPLOT3DReader_DoublePrecisionOff, METH_VARARGS,
   (char*)"V.DoublePrecisionOff()\nC++: void DoublePrecisionOff()\n\nIs this file in double precision or single precision. This only\nmatters for binary files. Default is single.\n"},
  {(char*)"SetForceRead", PyvtkMultiBlockPLOT3DReader_SetForceRead, METH_VARARGS,
   (char*)"V.SetForceRead(int)\nC++: void SetForceRead(int a)\n\nTry to read a binary file even if the file length seems to be\ninconsistent with the header information. Use this with caution,\nif the file length is not the same as calculated from the header.\neither the file is corrupt or the settings are wrong.\n"},
  {(char*)"GetForceRead", PyvtkMultiBlockPLOT3DReader_GetForceRead, METH_VARARGS,
   (char*)"V.GetForceRead() -> int\nC++: int GetForceRead()\n\nTry to read a binary file even if the file length seems to be\ninconsistent with the header information. Use this with caution,\nif the file length is not the same as calculated from the header.\neither the file is corrupt or the settings are wrong.\n"},
  {(char*)"ForceReadOn", PyvtkMultiBlockPLOT3DReader_ForceReadOn, METH_VARARGS,
   (char*)"V.ForceReadOn()\nC++: void ForceReadOn()\n\nTry to read a binary file even if the file length seems to be\ninconsistent with the header information. Use this with caution,\nif the file length is not the same as calculated from the header.\neither the file is corrupt or the settings are wrong.\n"},
  {(char*)"ForceReadOff", PyvtkMultiBlockPLOT3DReader_ForceReadOff, METH_VARARGS,
   (char*)"V.ForceReadOff()\nC++: void ForceReadOff()\n\nTry to read a binary file even if the file length seems to be\ninconsistent with the header information. Use this with caution,\nif the file length is not the same as calculated from the header.\neither the file is corrupt or the settings are wrong.\n"},
  {(char*)"SetByteOrderToBigEndian", PyvtkMultiBlockPLOT3DReader_SetByteOrderToBigEndian, METH_VARARGS,
   (char*)"V.SetByteOrderToBigEndian()\nC++: void SetByteOrderToBigEndian()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"SetByteOrderToLittleEndian", PyvtkMultiBlockPLOT3DReader_SetByteOrderToLittleEndian, METH_VARARGS,
   (char*)"V.SetByteOrderToLittleEndian()\nC++: void SetByteOrderToLittleEndian()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"SetByteOrder", PyvtkMultiBlockPLOT3DReader_SetByteOrder, METH_VARARGS,
   (char*)"V.SetByteOrder(int)\nC++: void SetByteOrder(int a)\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"GetByteOrder", PyvtkMultiBlockPLOT3DReader_GetByteOrder, METH_VARARGS,
   (char*)"V.GetByteOrder() -> int\nC++: int GetByteOrder()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"GetByteOrderAsString", PyvtkMultiBlockPLOT3DReader_GetByteOrderAsString, METH_VARARGS,
   (char*)"V.GetByteOrderAsString() -> string\nC++: const char *GetByteOrderAsString()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"SetR", PyvtkMultiBlockPLOT3DReader_SetR, METH_VARARGS,
   (char*)"V.SetR(float)\nC++: void SetR(double a)\n\nSet/Get the gas constant. Default is 1.0.\n"},
  {(char*)"GetR", PyvtkMultiBlockPLOT3DReader_GetR, METH_VARARGS,
   (char*)"V.GetR() -> float\nC++: double GetR()\n\nSet/Get the gas constant. Default is 1.0.\n"},
  {(char*)"SetGamma", PyvtkMultiBlockPLOT3DReader_SetGamma, METH_VARARGS,
   (char*)"V.SetGamma(float)\nC++: void SetGamma(double a)\n\nSet/Get the ratio of specific heats. Default is 1.4.\n"},
  {(char*)"GetGamma", PyvtkMultiBlockPLOT3DReader_GetGamma, METH_VARARGS,
   (char*)"V.GetGamma() -> float\nC++: double GetGamma()\n\nSet/Get the ratio of specific heats. Default is 1.4.\n"},
  {(char*)"SetScalarFunctionNumber", PyvtkMultiBlockPLOT3DReader_SetScalarFunctionNumber, METH_VARARGS,
   (char*)"V.SetScalarFunctionNumber(int)\nC++: void SetScalarFunctionNumber(int num)\n\nSpecify the scalar function to extract. If ==(-1), then no scalar\nfunction is extracted.\n"},
  {(char*)"GetScalarFunctionNumber", PyvtkMultiBlockPLOT3DReader_GetScalarFunctionNumber, METH_VARARGS,
   (char*)"V.GetScalarFunctionNumber() -> int\nC++: int GetScalarFunctionNumber()\n\nSpecify the scalar function to extract. If ==(-1), then no scalar\nfunction is extracted.\n"},
  {(char*)"SetVectorFunctionNumber", PyvtkMultiBlockPLOT3DReader_SetVectorFunctionNumber, METH_VARARGS,
   (char*)"V.SetVectorFunctionNumber(int)\nC++: void SetVectorFunctionNumber(int num)\n\nSpecify the vector function to extract. If ==(-1), then no vector\nfunction is extracted.\n"},
  {(char*)"GetVectorFunctionNumber", PyvtkMultiBlockPLOT3DReader_GetVectorFunctionNumber, METH_VARARGS,
   (char*)"V.GetVectorFunctionNumber() -> int\nC++: int GetVectorFunctionNumber()\n\nSpecify the vector function to extract. If ==(-1), then no vector\nfunction is extracted.\n"},
  {(char*)"AddFunction", PyvtkMultiBlockPLOT3DReader_AddFunction, METH_VARARGS,
   (char*)"V.AddFunction(int)\nC++: void AddFunction(int functionNumber)\n\nSpecify additional functions to read. These are placed into the\npoint data as data arrays. Later on they can be used by labeling\nthem as scalars, etc.\n"},
  {(char*)"RemoveFunction", PyvtkMultiBlockPLOT3DReader_RemoveFunction, METH_VARARGS,
   (char*)"V.RemoveFunction(int)\nC++: void RemoveFunction(int)\n\nSpecify additional functions to read. These are placed into the\npoint data as data arrays. Later on they can be used by labeling\nthem as scalars, etc.\n"},
  {(char*)"RemoveAllFunctions", PyvtkMultiBlockPLOT3DReader_RemoveAllFunctions, METH_VARARGS,
   (char*)"V.RemoveAllFunctions()\nC++: void RemoveAllFunctions()\n\nSpecify additional functions to read. These are placed into the\npoint data as data arrays. Later on they can be used by labeling\nthem as scalars, etc.\n"},
  {(char*)"CanReadBinaryFile", PyvtkMultiBlockPLOT3DReader_CanReadBinaryFile, METH_VARARGS,
   (char*)"V.CanReadBinaryFile(string) -> int\nC++: virtual int CanReadBinaryFile(const char *fname)\n\nReturn 1 if the reader can read the given file name. Only\nmeaningful for binary files.\n"},
  {(char*)"Modified", PyvtkMultiBlockPLOT3DReader_Modified, METH_VARARGS,
   (char*)"V.Modified()\nC++: virtual void Modified()\n\nOverwritten to make sure that RequestInformation reads the\nmeta-data again after the reader parameters were changed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMultiBlockPLOT3DReader_StaticNew()
{
  return vtkMultiBlockPLOT3DReader::New();
}

PyObject *PyVTKClass_vtkMultiBlockPLOT3DReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMultiBlockPLOT3DReader_StaticNew,
    PyvtkMultiBlockPLOT3DReader_Methods,
    "vtkMultiBlockPLOT3DReader", modulename,
    NULL, NULL,
    PyvtkMultiBlockPLOT3DReader_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 2; c++)
      {
      static const struct { const char *name; int value; }
        constants[2] = {
          { "FILE_BIG_ENDIAN", vtkMultiBlockPLOT3DReader::FILE_BIG_ENDIAN },
          { "FILE_LITTLE_ENDIAN", vtkMultiBlockPLOT3DReader::FILE_LITTLE_ENDIAN },
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

const char **PyvtkMultiBlockPLOT3DReader_Doc()
{
  static const char *docstring[] = {
    "vtkMultiBlockPLOT3DReader - read PLOT3D data files\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkMultiBlockPLOT3DReader is a reader object that reads PLOT3D\nformatted files and generates structured grid(s) on output. PLOT3D is\na computer graphics program designed to visualize the grids and\nsolutions of computational fluid dynamics. This reader also supports\nthe variant of the PLOT3D format used by NASA's OVERFLOW CFD\nsoftware, including full support for all Q variables. Please see the \"PLO",
    "T3D User's\nManual\" available from NASA Ames Research Center, Moffett Field CA.\n\nPLOT3D files consist of a grid file (also known as XYZ file), an\noptional solution file (also known as a Q file), and an optional\nfunction file that contains user created data (currently\nunsupported). The Q file contains solution  information as follows:\nthe four parameters free stream mach number (Fsmach), angle of at",
    "tack\n(Alpha), Reynolds number (Re), and total integration time (Time).\nThis information is stored in an array called Properties in the\nFieldData of each output (tuple 0: fsmach, tuple 1: alpha, tuple 2:\nre, tuple 3: time). In addition, the solution file contains the flow\ndensity (scalar), flow momentum (vector), and flow energy (scalar).\n\nNote that this reader does not support time series data whi",
    "ch is\nusually stored as a series of Q and optionally XYZ files. If you want\nto read such a file series, use vtkPlot3DMetaReader.\n\nThe reader can generate additional scalars and vectors (or\n\"functions\") from this information. To use vtkMultiBlockPLOT3DReader,\nyou must specify the particular function number for the scalar and\nvector you want to visualize. This implementation of the reader\nprovides t",
    "he following functions. The scalar functions are:\n-1  - don't read or compute any scalars 100 - density 110 - pressure\n   111 - pressure coefficient (requires Overflow file with Gamma) 112\n- mach number (requires Overflow file with Gamma) 113 - sounds speed\n   (requires Overflow file with Gamma) 120 - temperature 130 -\n   enthalpy 140 - internal energy 144 - kinetic energy 153 - velocity\nmagnitude",
    " 163 - stagnation energy 170 - entropy 184 - swirl 211 -\n   vorticity magnitude\n\nThe vector functions are:\n-1  - don't read or compute any vectors 200 - velocity 201 -\n   vorticity 202 - momentum 210 - pressure gradient. 212 - strain\n   rate\n\n(Other functions are described in the PLOT3D spec, but only those\nlisted are implemented here.) Note that by default, this reader\ncreates the density scalar ",
    "(100), stagnation energy (163) and\nmomentum vector (202) as output. (These are just read in from the\nsolution file.) Please note that the validity of computation is a\nfunction of this class's gas constants (R, Gamma) and the equations\nused. They may not be suitable for your computational domain.\n\nAdditionally, you can read other data and associate it as a\nvtkDataArray into the output's point attri",
    "bute data. Use the method\nAddFunction() to list all the functions that you'd like to read.\nAddFunction() accepts an integer parameter that defines the function\nnumber.\n\nSee Also:\n\nvtkMultiBlockDataSet vtkStructuredGrid vtkPlot3DMetaReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMultiBlockPLOT3DReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMultiBlockPLOT3DReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMultiBlockPLOT3DReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

