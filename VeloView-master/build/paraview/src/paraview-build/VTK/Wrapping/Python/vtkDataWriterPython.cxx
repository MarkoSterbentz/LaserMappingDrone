// python wrapper for vtkDataWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkDataWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkDataWriter_Doc();


static PyObject *
PyvtkDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataWriter::NewInstance());

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
PyvtkDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataWriter *tempr = vtkDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

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
      op->vtkDataWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDataWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteToOutputString(temp0);
      }
    else
      {
      op->vtkDataWriter::SetWriteToOutputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkDataWriter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOn();
      }
    else
      {
      op->vtkDataWriter::WriteToOutputStringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOff();
      }
    else
      {
      op->vtkDataWriter::WriteToOutputStringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetOutputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputStringLength() :
      op->vtkDataWriter::GetOutputStringLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetOutputString() :
      op->vtkDataWriter::GetOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetBinaryOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryOutputString() :
      op->vtkDataWriter::GetBinaryOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetOutputStdString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStdString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetOutputStdString() :
      op->vtkDataWriter::GetOutputStdString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_RegisterAndGetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterAndGetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->RegisterAndGetOutputString() :
      op->vtkDataWriter::RegisterAndGetOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeader(temp0);
      }
    else
      {
      op->vtkDataWriter::SetHeader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetHeader() :
      op->vtkDataWriter::GetHeader());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileType(temp0);
      }
    else
      {
      op->vtkDataWriter::SetFileType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMinValue() :
      op->vtkDataWriter::GetFileTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMaxValue() :
      op->vtkDataWriter::GetFileTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFileType() :
      op->vtkDataWriter::GetFileType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileTypeToASCII(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToASCII");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileTypeToASCII();
      }
    else
      {
      op->vtkDataWriter::SetFileTypeToASCII();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileTypeToBinary();
      }
    else
      {
      op->vtkDataWriter::SetFileTypeToBinary();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarsName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetScalarsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetScalarsName() :
      op->vtkDataWriter::GetScalarsName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetVectorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorsName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetVectorsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetVectorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetVectorsName() :
      op->vtkDataWriter::GetVectorsName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetTensorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTensorsName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetTensorsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetTensorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetTensorsName() :
      op->vtkDataWriter::GetTensorsName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalsName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetNormalsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetNormalsName() :
      op->vtkDataWriter::GetNormalsName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetTCoordsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTCoordsName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetTCoordsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetTCoordsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetTCoordsName() :
      op->vtkDataWriter::GetTCoordsName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetGlobalIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlobalIdsName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetGlobalIdsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetGlobalIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetGlobalIdsName() :
      op->vtkDataWriter::GetGlobalIdsName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetPedigreeIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPedigreeIdsName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetPedigreeIdsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetPedigreeIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPedigreeIdsName() :
      op->vtkDataWriter::GetPedigreeIdsName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetEdgeFlagsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeFlagsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeFlagsName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetEdgeFlagsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetEdgeFlagsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeFlagsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetEdgeFlagsName() :
      op->vtkDataWriter::GetEdgeFlagsName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetLookupTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLookupTableName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetLookupTableName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetLookupTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLookupTableName() :
      op->vtkDataWriter::GetLookupTableName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldDataName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetFieldDataName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDataName() :
      op->vtkDataWriter::GetFieldDataName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkDataWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataWriter\nC++: vtkDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataWriter\nC++: vtkDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkDataWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of vtk polygon data file to write.\n"},
  {(char*)"GetFileName", PyvtkDataWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of vtk polygon data file to write.\n"},
  {(char*)"SetWriteToOutputString", PyvtkDataWriter_SetWriteToOutputString, METH_VARARGS,
   (char*)"V.SetWriteToOutputString(int)\nC++: void SetWriteToOutputString(int a)\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"GetWriteToOutputString", PyvtkDataWriter_GetWriteToOutputString, METH_VARARGS,
   (char*)"V.GetWriteToOutputString() -> int\nC++: int GetWriteToOutputString()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"WriteToOutputStringOn", PyvtkDataWriter_WriteToOutputStringOn, METH_VARARGS,
   (char*)"V.WriteToOutputStringOn()\nC++: void WriteToOutputStringOn()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"WriteToOutputStringOff", PyvtkDataWriter_WriteToOutputStringOff, METH_VARARGS,
   (char*)"V.WriteToOutputStringOff()\nC++: void WriteToOutputStringOff()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"GetOutputStringLength", PyvtkDataWriter_GetOutputStringLength, METH_VARARGS,
   (char*)"V.GetOutputStringLength() -> int\nC++: int GetOutputStringLength()\n\nWhen WriteToOutputString in on, then a string is allocated,\nwritten to, and can be retrieved with these methods.  The string\nis deleted during the next call to write ...\n"},
  {(char*)"GetOutputString", PyvtkDataWriter_GetOutputString, METH_VARARGS,
   (char*)"V.GetOutputString() -> string\nC++: char *GetOutputString()\n\nWhen WriteToOutputString in on, then a string is allocated,\nwritten to, and can be retrieved with these methods.  The string\nis deleted during the next call to write ...\n"},
  {(char*)"GetBinaryOutputString", PyvtkDataWriter_GetBinaryOutputString, METH_VARARGS,
   (char*)"V.GetBinaryOutputString() -> (int, ...)\nC++: unsigned char *GetBinaryOutputString()\n\nWhen WriteToOutputString in on, then a string is allocated,\nwritten to, and can be retrieved with these methods.  The string\nis deleted during the next call to write ...\n"},
  {(char*)"GetOutputStdString", PyvtkDataWriter_GetOutputStdString, METH_VARARGS,
   (char*)"V.GetOutputStdString() -> string\nC++: vtkStdString GetOutputStdString()\n\nWhen WriteToOutputString is on, this method returns a copy of the\noutput string in a vtkStdString.\n"},
  {(char*)"RegisterAndGetOutputString", PyvtkDataWriter_RegisterAndGetOutputString, METH_VARARGS,
   (char*)"V.RegisterAndGetOutputString() -> string\nC++: char *RegisterAndGetOutputString()\n\nThis convenience method returns the string, sets the IVAR to\nNULL, so that the user is responsible for deleting the string. I\nam not sure what the name should be, so it may change in the\nfuture.\n"},
  {(char*)"SetHeader", PyvtkDataWriter_SetHeader, METH_VARARGS,
   (char*)"V.SetHeader(string)\nC++: void SetHeader(char *)\n\nSpecify the header for the vtk data file.\n"},
  {(char*)"GetHeader", PyvtkDataWriter_GetHeader, METH_VARARGS,
   (char*)"V.GetHeader() -> string\nC++: char *GetHeader()\n\nSpecify the header for the vtk data file.\n"},
  {(char*)"SetFileType", PyvtkDataWriter_SetFileType, METH_VARARGS,
   (char*)"V.SetFileType(int)\nC++: void SetFileType(int)\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"GetFileTypeMinValue", PyvtkDataWriter_GetFileTypeMinValue, METH_VARARGS,
   (char*)"V.GetFileTypeMinValue() -> int\nC++: int GetFileTypeMinValue()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"GetFileTypeMaxValue", PyvtkDataWriter_GetFileTypeMaxValue, METH_VARARGS,
   (char*)"V.GetFileTypeMaxValue() -> int\nC++: int GetFileTypeMaxValue()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"GetFileType", PyvtkDataWriter_GetFileType, METH_VARARGS,
   (char*)"V.GetFileType() -> int\nC++: int GetFileType()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"SetFileTypeToASCII", PyvtkDataWriter_SetFileTypeToASCII, METH_VARARGS,
   (char*)"V.SetFileTypeToASCII()\nC++: void SetFileTypeToASCII()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"SetFileTypeToBinary", PyvtkDataWriter_SetFileTypeToBinary, METH_VARARGS,
   (char*)"V.SetFileTypeToBinary()\nC++: void SetFileTypeToBinary()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"SetScalarsName", PyvtkDataWriter_SetScalarsName, METH_VARARGS,
   (char*)"V.SetScalarsName(string)\nC++: void SetScalarsName(char *)\n\nGive a name to the scalar data. If not specified, uses default\nname \"scalars\".\n"},
  {(char*)"GetScalarsName", PyvtkDataWriter_GetScalarsName, METH_VARARGS,
   (char*)"V.GetScalarsName() -> string\nC++: char *GetScalarsName()\n\nGive a name to the scalar data. If not specified, uses default\nname \"scalars\".\n"},
  {(char*)"SetVectorsName", PyvtkDataWriter_SetVectorsName, METH_VARARGS,
   (char*)"V.SetVectorsName(string)\nC++: void SetVectorsName(char *)\n\nGive a name to the vector data. If not specified, uses default\nname \"vectors\".\n"},
  {(char*)"GetVectorsName", PyvtkDataWriter_GetVectorsName, METH_VARARGS,
   (char*)"V.GetVectorsName() -> string\nC++: char *GetVectorsName()\n\nGive a name to the vector data. If not specified, uses default\nname \"vectors\".\n"},
  {(char*)"SetTensorsName", PyvtkDataWriter_SetTensorsName, METH_VARARGS,
   (char*)"V.SetTensorsName(string)\nC++: void SetTensorsName(char *)\n\nGive a name to the tensors data. If not specified, uses default\nname \"tensors\".\n"},
  {(char*)"GetTensorsName", PyvtkDataWriter_GetTensorsName, METH_VARARGS,
   (char*)"V.GetTensorsName() -> string\nC++: char *GetTensorsName()\n\nGive a name to the tensors data. If not specified, uses default\nname \"tensors\".\n"},
  {(char*)"SetNormalsName", PyvtkDataWriter_SetNormalsName, METH_VARARGS,
   (char*)"V.SetNormalsName(string)\nC++: void SetNormalsName(char *)\n\nGive a name to the normals data. If not specified, uses default\nname \"normals\".\n"},
  {(char*)"GetNormalsName", PyvtkDataWriter_GetNormalsName, METH_VARARGS,
   (char*)"V.GetNormalsName() -> string\nC++: char *GetNormalsName()\n\nGive a name to the normals data. If not specified, uses default\nname \"normals\".\n"},
  {(char*)"SetTCoordsName", PyvtkDataWriter_SetTCoordsName, METH_VARARGS,
   (char*)"V.SetTCoordsName(string)\nC++: void SetTCoordsName(char *)\n\nGive a name to the texture coordinates data. If not specified,\nuses default name \"textureCoords\".\n"},
  {(char*)"GetTCoordsName", PyvtkDataWriter_GetTCoordsName, METH_VARARGS,
   (char*)"V.GetTCoordsName() -> string\nC++: char *GetTCoordsName()\n\nGive a name to the texture coordinates data. If not specified,\nuses default name \"textureCoords\".\n"},
  {(char*)"SetGlobalIdsName", PyvtkDataWriter_SetGlobalIdsName, METH_VARARGS,
   (char*)"V.SetGlobalIdsName(string)\nC++: void SetGlobalIdsName(char *)\n\nGive a name to the global ids data. If not specified, uses\ndefault name \"global_ids\".\n"},
  {(char*)"GetGlobalIdsName", PyvtkDataWriter_GetGlobalIdsName, METH_VARARGS,
   (char*)"V.GetGlobalIdsName() -> string\nC++: char *GetGlobalIdsName()\n\nGive a name to the global ids data. If not specified, uses\ndefault name \"global_ids\".\n"},
  {(char*)"SetPedigreeIdsName", PyvtkDataWriter_SetPedigreeIdsName, METH_VARARGS,
   (char*)"V.SetPedigreeIdsName(string)\nC++: void SetPedigreeIdsName(char *)\n\nGive a name to the pedigree ids data. If not specified, uses\ndefault name \"pedigree_ids\".\n"},
  {(char*)"GetPedigreeIdsName", PyvtkDataWriter_GetPedigreeIdsName, METH_VARARGS,
   (char*)"V.GetPedigreeIdsName() -> string\nC++: char *GetPedigreeIdsName()\n\nGive a name to the pedigree ids data. If not specified, uses\ndefault name \"pedigree_ids\".\n"},
  {(char*)"SetEdgeFlagsName", PyvtkDataWriter_SetEdgeFlagsName, METH_VARARGS,
   (char*)"V.SetEdgeFlagsName(string)\nC++: void SetEdgeFlagsName(char *)\n\nGive a name to the edge flags data. If not specified, uses\ndefault name \"edge_flags\".\n"},
  {(char*)"GetEdgeFlagsName", PyvtkDataWriter_GetEdgeFlagsName, METH_VARARGS,
   (char*)"V.GetEdgeFlagsName() -> string\nC++: char *GetEdgeFlagsName()\n\nGive a name to the edge flags data. If not specified, uses\ndefault name \"edge_flags\".\n"},
  {(char*)"SetLookupTableName", PyvtkDataWriter_SetLookupTableName, METH_VARARGS,
   (char*)"V.SetLookupTableName(string)\nC++: void SetLookupTableName(char *)\n\nGive a name to the lookup table. If not specified, uses default\nname \"lookupTable\".\n"},
  {(char*)"GetLookupTableName", PyvtkDataWriter_GetLookupTableName, METH_VARARGS,
   (char*)"V.GetLookupTableName() -> string\nC++: char *GetLookupTableName()\n\nGive a name to the lookup table. If not specified, uses default\nname \"lookupTable\".\n"},
  {(char*)"SetFieldDataName", PyvtkDataWriter_SetFieldDataName, METH_VARARGS,
   (char*)"V.SetFieldDataName(string)\nC++: void SetFieldDataName(char *)\n\nGive a name to the field data. If not specified, uses default\nname \"field\".\n"},
  {(char*)"GetFieldDataName", PyvtkDataWriter_GetFieldDataName, METH_VARARGS,
   (char*)"V.GetFieldDataName() -> string\nC++: char *GetFieldDataName()\n\nGive a name to the field data. If not specified, uses default\nname \"field\".\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataWriter_StaticNew()
{
  return vtkDataWriter::New();
}

PyObject *PyVTKClass_vtkDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataWriter_StaticNew,
    PyvtkDataWriter_Methods,
    "vtkDataWriter", modulename,
    NULL, NULL,
    PyvtkDataWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkDataWriter - helper class for objects that write vtk data files\n\n",
    "Superclass: vtkWriter\n\n",
    "vtkDataWriter is a helper class that opens and writes the vtk header\nand point data (e.g., scalars, vectors, normals, etc.) from a vtk\ndata file. See text for various formats.\n\nSee Also:\n\nvtkDataSetWriter vtkPolyDataWriter vtkStructuredGridWriter\nvtkStructuredPointsWriter vtkUnstructuredGridWriter\nvtkFieldDataWriter vtkRectilinearGridWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

