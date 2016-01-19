// python wrapper for vtkMCubesReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMCubesReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMCubesReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMCubesReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkMCubesReader_Doc();


static PyObject *
PyvtkMCubesReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMCubesReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMCubesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMCubesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMCubesReader::NewInstance());

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
PyvtkMCubesReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMCubesReader *tempr = vtkMCubesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

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
      op->vtkMCubesReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMCubesReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetLimitsFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitsFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLimitsFileName(temp0);
      }
    else
      {
      op->vtkMCubesReader::SetLimitsFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetLimitsFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLimitsFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLimitsFileName() :
      op->vtkMCubesReader::GetLimitsFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetHeaderSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeaderSize(temp0);
      }
    else
      {
      op->vtkMCubesReader::SetHeaderSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetHeaderSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHeaderSizeMinValue() :
      op->vtkMCubesReader::GetHeaderSizeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetHeaderSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHeaderSizeMaxValue() :
      op->vtkMCubesReader::GetHeaderSizeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetHeaderSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHeaderSize() :
      op->vtkMCubesReader::GetHeaderSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetFlipNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFlipNormals(temp0);
      }
    else
      {
      op->vtkMCubesReader::SetFlipNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetFlipNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFlipNormals() :
      op->vtkMCubesReader::GetFlipNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_FlipNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlipNormalsOn();
      }
    else
      {
      op->vtkMCubesReader::FlipNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_FlipNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlipNormalsOff();
      }
    else
      {
      op->vtkMCubesReader::FlipNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormals(temp0);
      }
    else
      {
      op->vtkMCubesReader::SetNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormals() :
      op->vtkMCubesReader::GetNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_NormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalsOn();
      }
    else
      {
      op->vtkMCubesReader::NormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_NormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalsOff();
      }
    else
      {
      op->vtkMCubesReader::NormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetDataByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrderToBigEndian();
      }
    else
      {
      op->vtkMCubesReader::SetDataByteOrderToBigEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetDataByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrderToLittleEndian();
      }
    else
      {
      op->vtkMCubesReader::SetDataByteOrderToLittleEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataByteOrder() :
      op->vtkMCubesReader::GetDataByteOrder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrder(temp0);
      }
    else
      {
      op->vtkMCubesReader::SetDataByteOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetDataByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDataByteOrderAsString() :
      op->vtkMCubesReader::GetDataByteOrderAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSwapBytes(temp0);
      }
    else
      {
      op->vtkMCubesReader::SetSwapBytes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSwapBytes() :
      op->vtkMCubesReader::GetSwapBytes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SwapBytesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwapBytesOn();
      }
    else
      {
      op->vtkMCubesReader::SwapBytesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SwapBytesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwapBytesOff();
      }
    else
      {
      op->vtkMCubesReader::SwapBytesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkMCubesReader::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkMCubesReader::GetLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkMCubesReader::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkMCubesReader::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMCubesReader_Methods[] = {
  {(char*)"GetClassName", PyvtkMCubesReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMCubesReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMCubesReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMCubesReader\nC++: vtkMCubesReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMCubesReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMCubesReader\nC++: vtkMCubesReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkMCubesReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of marching cubes file.\n"},
  {(char*)"GetFileName", PyvtkMCubesReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of marching cubes file.\n"},
  {(char*)"SetLimitsFileName", PyvtkMCubesReader_SetLimitsFileName, METH_VARARGS,
   (char*)"V.SetLimitsFileName(string)\nC++: void SetLimitsFileName(char *)\n\nSet / get the file name of the marching cubes limits file.\n"},
  {(char*)"GetLimitsFileName", PyvtkMCubesReader_GetLimitsFileName, METH_VARARGS,
   (char*)"V.GetLimitsFileName() -> string\nC++: char *GetLimitsFileName()\n\nSet / get the file name of the marching cubes limits file.\n"},
  {(char*)"SetHeaderSize", PyvtkMCubesReader_SetHeaderSize, METH_VARARGS,
   (char*)"V.SetHeaderSize(int)\nC++: void SetHeaderSize(int)\n\nSpecify a header size if one exists. The header is skipped and\nnot used at this time.\n"},
  {(char*)"GetHeaderSizeMinValue", PyvtkMCubesReader_GetHeaderSizeMinValue, METH_VARARGS,
   (char*)"V.GetHeaderSizeMinValue() -> int\nC++: int GetHeaderSizeMinValue()\n\nSpecify a header size if one exists. The header is skipped and\nnot used at this time.\n"},
  {(char*)"GetHeaderSizeMaxValue", PyvtkMCubesReader_GetHeaderSizeMaxValue, METH_VARARGS,
   (char*)"V.GetHeaderSizeMaxValue() -> int\nC++: int GetHeaderSizeMaxValue()\n\nSpecify a header size if one exists. The header is skipped and\nnot used at this time.\n"},
  {(char*)"GetHeaderSize", PyvtkMCubesReader_GetHeaderSize, METH_VARARGS,
   (char*)"V.GetHeaderSize() -> int\nC++: int GetHeaderSize()\n\nSpecify a header size if one exists. The header is skipped and\nnot used at this time.\n"},
  {(char*)"SetFlipNormals", PyvtkMCubesReader_SetFlipNormals, METH_VARARGS,
   (char*)"V.SetFlipNormals(int)\nC++: void SetFlipNormals(int a)\n\nSpecify whether to flip normals in opposite direction. Flipping\nONLY changes the direction of the normal vector. Contrast this\nwith flipping in vtkPolyDataNormals which flips both the normal\nand the cell point order.\n"},
  {(char*)"GetFlipNormals", PyvtkMCubesReader_GetFlipNormals, METH_VARARGS,
   (char*)"V.GetFlipNormals() -> int\nC++: int GetFlipNormals()\n\nSpecify whether to flip normals in opposite direction. Flipping\nONLY changes the direction of the normal vector. Contrast this\nwith flipping in vtkPolyDataNormals which flips both the normal\nand the cell point order.\n"},
  {(char*)"FlipNormalsOn", PyvtkMCubesReader_FlipNormalsOn, METH_VARARGS,
   (char*)"V.FlipNormalsOn()\nC++: void FlipNormalsOn()\n\nSpecify whether to flip normals in opposite direction. Flipping\nONLY changes the direction of the normal vector. Contrast this\nwith flipping in vtkPolyDataNormals which flips both the normal\nand the cell point order.\n"},
  {(char*)"FlipNormalsOff", PyvtkMCubesReader_FlipNormalsOff, METH_VARARGS,
   (char*)"V.FlipNormalsOff()\nC++: void FlipNormalsOff()\n\nSpecify whether to flip normals in opposite direction. Flipping\nONLY changes the direction of the normal vector. Contrast this\nwith flipping in vtkPolyDataNormals which flips both the normal\nand the cell point order.\n"},
  {(char*)"SetNormals", PyvtkMCubesReader_SetNormals, METH_VARARGS,
   (char*)"V.SetNormals(int)\nC++: void SetNormals(int a)\n\nSpecify whether to read normals.\n"},
  {(char*)"GetNormals", PyvtkMCubesReader_GetNormals, METH_VARARGS,
   (char*)"V.GetNormals() -> int\nC++: int GetNormals()\n\nSpecify whether to read normals.\n"},
  {(char*)"NormalsOn", PyvtkMCubesReader_NormalsOn, METH_VARARGS,
   (char*)"V.NormalsOn()\nC++: void NormalsOn()\n\nSpecify whether to read normals.\n"},
  {(char*)"NormalsOff", PyvtkMCubesReader_NormalsOff, METH_VARARGS,
   (char*)"V.NormalsOff()\nC++: void NormalsOff()\n\nSpecify whether to read normals.\n"},
  {(char*)"SetDataByteOrderToBigEndian", PyvtkMCubesReader_SetDataByteOrderToBigEndian, METH_VARARGS,
   (char*)"V.SetDataByteOrderToBigEndian()\nC++: void SetDataByteOrderToBigEndian()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"SetDataByteOrderToLittleEndian", PyvtkMCubesReader_SetDataByteOrderToLittleEndian, METH_VARARGS,
   (char*)"V.SetDataByteOrderToLittleEndian()\nC++: void SetDataByteOrderToLittleEndian()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"GetDataByteOrder", PyvtkMCubesReader_GetDataByteOrder, METH_VARARGS,
   (char*)"V.GetDataByteOrder() -> int\nC++: int GetDataByteOrder()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"SetDataByteOrder", PyvtkMCubesReader_SetDataByteOrder, METH_VARARGS,
   (char*)"V.SetDataByteOrder(int)\nC++: void SetDataByteOrder(int)\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"GetDataByteOrderAsString", PyvtkMCubesReader_GetDataByteOrderAsString, METH_VARARGS,
   (char*)"V.GetDataByteOrderAsString() -> string\nC++: const char *GetDataByteOrderAsString()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"SetSwapBytes", PyvtkMCubesReader_SetSwapBytes, METH_VARARGS,
   (char*)"V.SetSwapBytes(int)\nC++: void SetSwapBytes(int a)\n\nTurn on/off byte swapping.\n"},
  {(char*)"GetSwapBytes", PyvtkMCubesReader_GetSwapBytes, METH_VARARGS,
   (char*)"V.GetSwapBytes() -> int\nC++: int GetSwapBytes()\n\nTurn on/off byte swapping.\n"},
  {(char*)"SwapBytesOn", PyvtkMCubesReader_SwapBytesOn, METH_VARARGS,
   (char*)"V.SwapBytesOn()\nC++: void SwapBytesOn()\n\nTurn on/off byte swapping.\n"},
  {(char*)"SwapBytesOff", PyvtkMCubesReader_SwapBytesOff, METH_VARARGS,
   (char*)"V.SwapBytesOff()\nC++: void SwapBytesOff()\n\nTurn on/off byte swapping.\n"},
  {(char*)"SetLocator", PyvtkMCubesReader_SetLocator, METH_VARARGS,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkMCubesReader_GetLocator, METH_VARARGS,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkMCubesReader_CreateDefaultLocator, METH_VARARGS,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {(char*)"GetMTime", PyvtkMCubesReader_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the mtime also considering the locator.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMCubesReader_StaticNew()
{
  return vtkMCubesReader::New();
}

PyObject *PyVTKClass_vtkMCubesReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMCubesReader_StaticNew,
    PyvtkMCubesReader_Methods,
    "vtkMCubesReader", modulename,
    NULL, NULL,
    PyvtkMCubesReader_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMCubesReader_Doc()
{
  static const char *docstring[] = {
    "vtkMCubesReader - read binary marching cubes file\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkMCubesReader is a source object that reads binary marching cubes\nfiles. (Marching cubes is an isosurfacing technique that generates\nmany triangles.) The binary format is supported by W. Lorensen's\nmarching cubes program (and the vtkSliceCubes object). The format\nrepeats point coordinates, so this object will merge the points with\na vtkLocator object. You can choose to supply the vtkLocator or u",
    "se\nthe default.\n\nCaveats:\n\nBinary files assumed written in sun/hp/sgi (i.e., Big Endian) form.\n\nBecause points are merged when read, degenerate triangles may be\nremoved. Thus the number of triangles read may be fewer than the\nnumber of triangles actually created.\n\nThe point merging does not take into account that the same point may\nhave different normals. For example, running vtkPolyDataNormals af",
    "ter\nvtkContourFilter may split triangles because of the FeatureAngle\nivar. Subsequent reading with vtkMCubesReader will merge the points\nand use the first point's normal. For the most part, this is\nundesirable.\n\nNormals are generated from the gradient of the data scalar values.\nHence the normals may on occasion point in a direction inconsistent\nwith the ordering of the triangle vertices. If this h",
    "appens, the\nresulting surface may be \"black\".  Reverse the sense of the\nFlipNormals boolean flag to correct this.\n\nSee Also:\n\nvtkContourFilter vtkMarchingCubes vtkSliceCubes vtkLocator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMCubesReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMCubesReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMCubesReader", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_FILE_BYTE_ORDER_BIG_ENDIAN", 0 },
        { "VTK_FILE_BYTE_ORDER_LITTLE_ENDIAN", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

