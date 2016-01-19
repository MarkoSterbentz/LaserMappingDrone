// python wrapper for vtkAVSucdReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAVSucdReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAVSucdReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAVSucdReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkAVSucdReader_Doc();


static PyObject *
PyvtkAVSucdReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAVSucdReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAVSucdReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAVSucdReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAVSucdReader::NewInstance());

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
PyvtkAVSucdReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAVSucdReader *tempr = vtkAVSucdReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

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
      op->vtkAVSucdReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkAVSucdReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

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
      op->vtkAVSucdReader::SetBinaryFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBinaryFile() :
      op->vtkAVSucdReader::GetBinaryFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_BinaryFileOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryFileOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryFileOn();
      }
    else
      {
      op->vtkAVSucdReader::BinaryFileOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_BinaryFileOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryFileOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryFileOff();
      }
    else
      {
      op->vtkAVSucdReader::BinaryFileOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkAVSucdReader::GetNumberOfCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkAVSucdReader::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfNodeFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeFields() :
      op->vtkAVSucdReader::GetNumberOfNodeFields());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfCellFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellFields() :
      op->vtkAVSucdReader::GetNumberOfCellFields());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFields() :
      op->vtkAVSucdReader::GetNumberOfFields());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfNodeComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeComponents() :
      op->vtkAVSucdReader::GetNumberOfNodeComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfCellComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellComponents() :
      op->vtkAVSucdReader::GetNumberOfCellComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToBigEndian();
      }
    else
      {
      op->vtkAVSucdReader::SetByteOrderToBigEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToLittleEndian();
      }
    else
      {
      op->vtkAVSucdReader::SetByteOrderToLittleEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetByteOrderAsString() :
      op->vtkAVSucdReader::GetByteOrderAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

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
      op->vtkAVSucdReader::SetByteOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetByteOrder() :
      op->vtkAVSucdReader::GetByteOrder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkAVSucdReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkAVSucdReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkAVSucdReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkAVSucdReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkAVSucdReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkAVSucdReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

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
      op->vtkAVSucdReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

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
      op->vtkAVSucdReader::SetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_DisableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllCellArrays();
      }
    else
      {
      op->vtkAVSucdReader::DisableAllCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_EnableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllCellArrays();
      }
    else
      {
      op->vtkAVSucdReader::EnableAllCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllPointArrays();
      }
    else
      {
      op->vtkAVSucdReader::DisableAllPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllPointArrays();
      }
    else
      {
      op->vtkAVSucdReader::EnableAllPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetCellDataRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  int temp1;
  float *temp2 = NULL;
  float *save2 = NULL;
  float small2[8];
  int size2 = 0;
  float *temp3 = NULL;
  float *save3 = NULL;
  float small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new float[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new float[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->GetCellDataRange(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkAVSucdReader::GetCellDataRange(temp0, temp1, temp2, temp3);
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
      result = ap.BuildNone();
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNodeDataRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  int temp1;
  float *temp2 = NULL;
  float *save2 = NULL;
  float small2[8];
  int size2 = 0;
  float *temp3 = NULL;
  float *save3 = NULL;
  float small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new float[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new float[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->GetNodeDataRange(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkAVSucdReader::GetNodeDataRange(temp0, temp1, temp2, temp3);
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
      result = ap.BuildNone();
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyMethodDef PyvtkAVSucdReader_Methods[] = {
  {(char*)"GetClassName", PyvtkAVSucdReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAVSucdReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAVSucdReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAVSucdReader\nC++: vtkAVSucdReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAVSucdReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAVSucdReader\nC++: vtkAVSucdReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkAVSucdReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of AVS UCD datafile to read\n"},
  {(char*)"GetFileName", PyvtkAVSucdReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of AVS UCD datafile to read\n"},
  {(char*)"SetBinaryFile", PyvtkAVSucdReader_SetBinaryFile, METH_VARARGS,
   (char*)"V.SetBinaryFile(int)\nC++: void SetBinaryFile(int a)\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {(char*)"GetBinaryFile", PyvtkAVSucdReader_GetBinaryFile, METH_VARARGS,
   (char*)"V.GetBinaryFile() -> int\nC++: int GetBinaryFile()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {(char*)"BinaryFileOn", PyvtkAVSucdReader_BinaryFileOn, METH_VARARGS,
   (char*)"V.BinaryFileOn()\nC++: void BinaryFileOn()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {(char*)"BinaryFileOff", PyvtkAVSucdReader_BinaryFileOff, METH_VARARGS,
   (char*)"V.BinaryFileOff()\nC++: void BinaryFileOff()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {(char*)"GetNumberOfCells", PyvtkAVSucdReader_GetNumberOfCells, METH_VARARGS,
   (char*)"V.GetNumberOfCells() -> int\nC++: int GetNumberOfCells()\n\nGet the total number of cells.\n"},
  {(char*)"GetNumberOfNodes", PyvtkAVSucdReader_GetNumberOfNodes, METH_VARARGS,
   (char*)"V.GetNumberOfNodes() -> int\nC++: int GetNumberOfNodes()\n\nGet the total number of nodes.\n"},
  {(char*)"GetNumberOfNodeFields", PyvtkAVSucdReader_GetNumberOfNodeFields, METH_VARARGS,
   (char*)"V.GetNumberOfNodeFields() -> int\nC++: int GetNumberOfNodeFields()\n\nGet the number of data fields at the nodes.\n"},
  {(char*)"GetNumberOfCellFields", PyvtkAVSucdReader_GetNumberOfCellFields, METH_VARARGS,
   (char*)"V.GetNumberOfCellFields() -> int\nC++: int GetNumberOfCellFields()\n\nGet the number of data fields at the cell centers.\n"},
  {(char*)"GetNumberOfFields", PyvtkAVSucdReader_GetNumberOfFields, METH_VARARGS,
   (char*)"V.GetNumberOfFields() -> int\nC++: int GetNumberOfFields()\n\nGet the number of data fields for the model. Unused because VTK\nhas no methods for it.\n"},
  {(char*)"GetNumberOfNodeComponents", PyvtkAVSucdReader_GetNumberOfNodeComponents, METH_VARARGS,
   (char*)"V.GetNumberOfNodeComponents() -> int\nC++: int GetNumberOfNodeComponents()\n\nGet the number of data components at the nodes and cells.\n"},
  {(char*)"GetNumberOfCellComponents", PyvtkAVSucdReader_GetNumberOfCellComponents, METH_VARARGS,
   (char*)"V.GetNumberOfCellComponents() -> int\nC++: int GetNumberOfCellComponents()\n\nGet the number of data components at the nodes and cells.\n"},
  {(char*)"SetByteOrderToBigEndian", PyvtkAVSucdReader_SetByteOrderToBigEndian, METH_VARARGS,
   (char*)"V.SetByteOrderToBigEndian()\nC++: void SetByteOrderToBigEndian()\n\nSet/Get the endian-ness of the binary file.\n"},
  {(char*)"SetByteOrderToLittleEndian", PyvtkAVSucdReader_SetByteOrderToLittleEndian, METH_VARARGS,
   (char*)"V.SetByteOrderToLittleEndian()\nC++: void SetByteOrderToLittleEndian()\n\nSet/Get the endian-ness of the binary file.\n"},
  {(char*)"GetByteOrderAsString", PyvtkAVSucdReader_GetByteOrderAsString, METH_VARARGS,
   (char*)"V.GetByteOrderAsString() -> string\nC++: const char *GetByteOrderAsString()\n\nSet/Get the endian-ness of the binary file.\n"},
  {(char*)"SetByteOrder", PyvtkAVSucdReader_SetByteOrder, METH_VARARGS,
   (char*)"V.SetByteOrder(int)\nC++: void SetByteOrder(int a)\n\n"},
  {(char*)"GetByteOrder", PyvtkAVSucdReader_GetByteOrder, METH_VARARGS,
   (char*)"V.GetByteOrder() -> int\nC++: int GetByteOrder()\n\n"},
  {(char*)"GetNumberOfPointArrays", PyvtkAVSucdReader_GetNumberOfPointArrays, METH_VARARGS,
   (char*)"V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {(char*)"GetNumberOfCellArrays", PyvtkAVSucdReader_GetNumberOfCellArrays, METH_VARARGS,
   (char*)"V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {(char*)"GetPointArrayName", PyvtkAVSucdReader_GetPointArrayName, METH_VARARGS,
   (char*)"V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {(char*)"GetCellArrayName", PyvtkAVSucdReader_GetCellArrayName, METH_VARARGS,
   (char*)"V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {(char*)"GetPointArrayStatus", PyvtkAVSucdReader_GetPointArrayStatus, METH_VARARGS,
   (char*)"V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {(char*)"GetCellArrayStatus", PyvtkAVSucdReader_GetCellArrayStatus, METH_VARARGS,
   (char*)"V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {(char*)"SetPointArrayStatus", PyvtkAVSucdReader_SetPointArrayStatus, METH_VARARGS,
   (char*)"V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {(char*)"SetCellArrayStatus", PyvtkAVSucdReader_SetCellArrayStatus, METH_VARARGS,
   (char*)"V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {(char*)"DisableAllCellArrays", PyvtkAVSucdReader_DisableAllCellArrays, METH_VARARGS,
   (char*)"V.DisableAllCellArrays()\nC++: void DisableAllCellArrays()\n\n"},
  {(char*)"EnableAllCellArrays", PyvtkAVSucdReader_EnableAllCellArrays, METH_VARARGS,
   (char*)"V.EnableAllCellArrays()\nC++: void EnableAllCellArrays()\n\n"},
  {(char*)"DisableAllPointArrays", PyvtkAVSucdReader_DisableAllPointArrays, METH_VARARGS,
   (char*)"V.DisableAllPointArrays()\nC++: void DisableAllPointArrays()\n\n"},
  {(char*)"EnableAllPointArrays", PyvtkAVSucdReader_EnableAllPointArrays, METH_VARARGS,
   (char*)"V.EnableAllPointArrays()\nC++: void EnableAllPointArrays()\n\n"},
  {(char*)"GetCellDataRange", PyvtkAVSucdReader_GetCellDataRange, METH_VARARGS,
   (char*)"V.GetCellDataRange(int, int, [float, ...], [float, ...])\nC++: void GetCellDataRange(int cellComp, int index, float *min,\n    float *max)\n\n"},
  {(char*)"GetNodeDataRange", PyvtkAVSucdReader_GetNodeDataRange, METH_VARARGS,
   (char*)"V.GetNodeDataRange(int, int, [float, ...], [float, ...])\nC++: void GetNodeDataRange(int nodeComp, int index, float *min,\n    float *max)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAVSucdReader_StaticNew()
{
  return vtkAVSucdReader::New();
}

PyObject *PyVTKClass_vtkAVSucdReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAVSucdReader_StaticNew,
    PyvtkAVSucdReader_Methods,
    "vtkAVSucdReader", modulename,
    NULL, NULL,
    PyvtkAVSucdReader_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAVSucdReader_Doc()
{
  static const char *docstring[] = {
    "vtkAVSucdReader - reads a dataset in AVS \"UCD\" format\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkAVSucdReader creates an unstructured grid dataset. It reads binary\nor ASCII files stored in UCD format, with optional data stored at the\nnodes or at the cells of the model. A cell-based fielddata stores the\nmaterial id. The class can automatically detect the endian-ness of\nthe binary files.\n\nSee Also:\n\nvtkGAMBITReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAVSucdReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAVSucdReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAVSucdReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

