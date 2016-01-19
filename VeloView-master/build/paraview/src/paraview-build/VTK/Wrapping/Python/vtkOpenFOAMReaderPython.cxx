// python wrapper for vtkOpenFOAMReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkOpenFOAMReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenFOAMReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenFOAMReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkOpenFOAMReader_Doc();


static PyObject *
PyvtkOpenFOAMReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenFOAMReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenFOAMReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenFOAMReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenFOAMReader::NewInstance());

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
PyvtkOpenFOAMReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenFOAMReader *tempr = vtkOpenFOAMReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkOpenFOAMReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

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
      op->vtkOpenFOAMReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkOpenFOAMReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkOpenFOAMReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkOpenFOAMReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

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
      op->vtkOpenFOAMReader::SetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkOpenFOAMReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DisableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllCellArrays();
      }
    else
      {
      op->vtkOpenFOAMReader::DisableAllCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_EnableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllCellArrays();
      }
    else
      {
      op->vtkOpenFOAMReader::EnableAllCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkOpenFOAMReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkOpenFOAMReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

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
      op->vtkOpenFOAMReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkOpenFOAMReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllPointArrays();
      }
    else
      {
      op->vtkOpenFOAMReader::DisableAllPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllPointArrays();
      }
    else
      {
      op->vtkOpenFOAMReader::EnableAllPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetNumberOfLagrangianArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLagrangianArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLagrangianArrays() :
      op->vtkOpenFOAMReader::GetNumberOfLagrangianArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetLagrangianArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLagrangianArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLagrangianArrayStatus(temp0) :
      op->vtkOpenFOAMReader::GetLagrangianArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetLagrangianArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLagrangianArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLagrangianArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkOpenFOAMReader::SetLagrangianArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetLagrangianArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLagrangianArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetLagrangianArrayName(temp0) :
      op->vtkOpenFOAMReader::GetLagrangianArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DisableAllLagrangianArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllLagrangianArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllLagrangianArrays();
      }
    else
      {
      op->vtkOpenFOAMReader::DisableAllLagrangianArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_EnableAllLagrangianArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllLagrangianArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllLagrangianArrays();
      }
    else
      {
      op->vtkOpenFOAMReader::EnableAllLagrangianArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetNumberOfPatchArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPatchArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPatchArrays() :
      op->vtkOpenFOAMReader::GetNumberOfPatchArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetPatchArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatchArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPatchArrayStatus(temp0) :
      op->vtkOpenFOAMReader::GetPatchArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetPatchArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatchArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPatchArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkOpenFOAMReader::SetPatchArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetPatchArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatchArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPatchArrayName(temp0) :
      op->vtkOpenFOAMReader::GetPatchArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DisableAllPatchArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPatchArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllPatchArrays();
      }
    else
      {
      op->vtkOpenFOAMReader::DisableAllPatchArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_EnableAllPatchArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPatchArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllPatchArrays();
      }
    else
      {
      op->vtkOpenFOAMReader::EnableAllPatchArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetCreateCellToPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateCellToPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCreateCellToPoint(temp0);
      }
    else
      {
      op->vtkOpenFOAMReader::SetCreateCellToPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetCreateCellToPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateCellToPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCreateCellToPoint() :
      op->vtkOpenFOAMReader::GetCreateCellToPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CreateCellToPointOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCellToPointOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateCellToPointOn();
      }
    else
      {
      op->vtkOpenFOAMReader::CreateCellToPointOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CreateCellToPointOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCellToPointOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateCellToPointOff();
      }
    else
      {
      op->vtkOpenFOAMReader::CreateCellToPointOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetCacheMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheMesh(temp0);
      }
    else
      {
      op->vtkOpenFOAMReader::SetCacheMesh(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetCacheMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCacheMesh() :
      op->vtkOpenFOAMReader::GetCacheMesh());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CacheMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CacheMeshOn();
      }
    else
      {
      op->vtkOpenFOAMReader::CacheMeshOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CacheMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CacheMeshOff();
      }
    else
      {
      op->vtkOpenFOAMReader::CacheMeshOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetDecomposePolyhedra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDecomposePolyhedra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDecomposePolyhedra(temp0);
      }
    else
      {
      op->vtkOpenFOAMReader::SetDecomposePolyhedra(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetDecomposePolyhedra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecomposePolyhedra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDecomposePolyhedra() :
      op->vtkOpenFOAMReader::GetDecomposePolyhedra());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DecomposePolyhedraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DecomposePolyhedraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DecomposePolyhedraOn();
      }
    else
      {
      op->vtkOpenFOAMReader::DecomposePolyhedraOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DecomposePolyhedraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DecomposePolyhedraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DecomposePolyhedraOff();
      }
    else
      {
      op->vtkOpenFOAMReader::DecomposePolyhedraOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetPositionsIsIn13Format(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionsIsIn13Format");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPositionsIsIn13Format(temp0);
      }
    else
      {
      op->vtkOpenFOAMReader::SetPositionsIsIn13Format(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetPositionsIsIn13Format(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionsIsIn13Format");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPositionsIsIn13Format() :
      op->vtkOpenFOAMReader::GetPositionsIsIn13Format());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_PositionsIsIn13FormatOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsIsIn13FormatOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PositionsIsIn13FormatOn();
      }
    else
      {
      op->vtkOpenFOAMReader::PositionsIsIn13FormatOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_PositionsIsIn13FormatOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsIsIn13FormatOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PositionsIsIn13FormatOff();
      }
    else
      {
      op->vtkOpenFOAMReader::PositionsIsIn13FormatOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetListTimeStepsByControlDict(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetListTimeStepsByControlDict");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetListTimeStepsByControlDict(temp0);
      }
    else
      {
      op->vtkOpenFOAMReader::SetListTimeStepsByControlDict(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetListTimeStepsByControlDict(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetListTimeStepsByControlDict");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetListTimeStepsByControlDict() :
      op->vtkOpenFOAMReader::GetListTimeStepsByControlDict());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_ListTimeStepsByControlDictOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ListTimeStepsByControlDictOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ListTimeStepsByControlDictOn();
      }
    else
      {
      op->vtkOpenFOAMReader::ListTimeStepsByControlDictOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_ListTimeStepsByControlDictOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ListTimeStepsByControlDictOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ListTimeStepsByControlDictOff();
      }
    else
      {
      op->vtkOpenFOAMReader::ListTimeStepsByControlDictOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetAddDimensionsToArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddDimensionsToArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAddDimensionsToArrayNames(temp0);
      }
    else
      {
      op->vtkOpenFOAMReader::SetAddDimensionsToArrayNames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetAddDimensionsToArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddDimensionsToArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAddDimensionsToArrayNames() :
      op->vtkOpenFOAMReader::GetAddDimensionsToArrayNames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_AddDimensionsToArrayNamesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDimensionsToArrayNamesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddDimensionsToArrayNamesOn();
      }
    else
      {
      op->vtkOpenFOAMReader::AddDimensionsToArrayNamesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_AddDimensionsToArrayNamesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDimensionsToArrayNamesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddDimensionsToArrayNamesOff();
      }
    else
      {
      op->vtkOpenFOAMReader::AddDimensionsToArrayNamesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetReadZones(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadZones");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadZones(temp0);
      }
    else
      {
      op->vtkOpenFOAMReader::SetReadZones(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetReadZones(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadZones");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReadZones() :
      op->vtkOpenFOAMReader::GetReadZones());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_ReadZonesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadZonesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadZonesOn();
      }
    else
      {
      op->vtkOpenFOAMReader::ReadZonesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_ReadZonesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadZonesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadZonesOff();
      }
    else
      {
      op->vtkOpenFOAMReader::ReadZonesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetRefresh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefresh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRefresh();
      }
    else
      {
      op->vtkOpenFOAMReader::SetRefresh();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  vtkOpenFOAMReader *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenFOAMReader"))
    {
    if (ap.IsBound())
      {
      op->SetParent(temp0);
      }
    else
      {
      op->vtkOpenFOAMReader::SetParent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_MakeInformationVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeInformationVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  vtkInformationVector *temp0 = NULL;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->MakeInformationVector(temp0, temp1) :
      op->vtkOpenFOAMReader::MakeInformationVector(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->SetTimeValue(temp0) :
      op->vtkOpenFOAMReader::SetTimeValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetTimeValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetTimeValues() :
      op->vtkOpenFOAMReader::GetTimeValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_MakeMetaDataAtTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeMetaDataAtTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->MakeMetaDataAtTimeStep(temp0) :
      op->vtkOpenFOAMReader::MakeMetaDataAtTimeStep(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenFOAMReader_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenFOAMReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenFOAMReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenFOAMReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenFOAMReader\nC++: vtkOpenFOAMReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenFOAMReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenFOAMReader\nC++: vtkOpenFOAMReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CanReadFile", PyvtkOpenFOAMReader_CanReadFile, METH_VARARGS,
   (char*)"V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *)\n\nDetermine if the file can be readed with this reader.\n"},
  {(char*)"SetFileName", PyvtkOpenFOAMReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet/Get the filename.\n"},
  {(char*)"GetFileName", PyvtkOpenFOAMReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet/Get the filename.\n"},
  {(char*)"GetNumberOfCellArrays", PyvtkOpenFOAMReader_GetNumberOfCellArrays, METH_VARARGS,
   (char*)"V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays(void)\n\nGet the number of cell arrays available in the input.\n"},
  {(char*)"GetCellArrayStatus", PyvtkOpenFOAMReader_GetCellArrayStatus, METH_VARARGS,
   (char*)"V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet/Set whether the cell array with the given name is to be read.\n"},
  {(char*)"SetCellArrayStatus", PyvtkOpenFOAMReader_SetCellArrayStatus, METH_VARARGS,
   (char*)"V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nGet/Set whether the cell array with the given name is to be read.\n"},
  {(char*)"GetCellArrayName", PyvtkOpenFOAMReader_GetCellArrayName, METH_VARARGS,
   (char*)"V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nGet the name of the  cell array with the given index in the\ninput.\n"},
  {(char*)"DisableAllCellArrays", PyvtkOpenFOAMReader_DisableAllCellArrays, METH_VARARGS,
   (char*)"V.DisableAllCellArrays()\nC++: void DisableAllCellArrays()\n\nTurn on/off all cell arrays.\n"},
  {(char*)"EnableAllCellArrays", PyvtkOpenFOAMReader_EnableAllCellArrays, METH_VARARGS,
   (char*)"V.EnableAllCellArrays()\nC++: void EnableAllCellArrays()\n\nTurn on/off all cell arrays.\n"},
  {(char*)"GetNumberOfPointArrays", PyvtkOpenFOAMReader_GetNumberOfPointArrays, METH_VARARGS,
   (char*)"V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays(void)\n\nGet the number of point arrays available in the input.\n"},
  {(char*)"GetPointArrayStatus", PyvtkOpenFOAMReader_GetPointArrayStatus, METH_VARARGS,
   (char*)"V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nGet/Set whether the point array with the given name is to be\nread.\n"},
  {(char*)"SetPointArrayStatus", PyvtkOpenFOAMReader_SetPointArrayStatus, METH_VARARGS,
   (char*)"V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nGet/Set whether the point array with the given name is to be\nread.\n"},
  {(char*)"GetPointArrayName", PyvtkOpenFOAMReader_GetPointArrayName, METH_VARARGS,
   (char*)"V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nGet the name of the  point array with the given index in the\ninput.\n"},
  {(char*)"DisableAllPointArrays", PyvtkOpenFOAMReader_DisableAllPointArrays, METH_VARARGS,
   (char*)"V.DisableAllPointArrays()\nC++: void DisableAllPointArrays()\n\nTurn on/off all point arrays.\n"},
  {(char*)"EnableAllPointArrays", PyvtkOpenFOAMReader_EnableAllPointArrays, METH_VARARGS,
   (char*)"V.EnableAllPointArrays()\nC++: void EnableAllPointArrays()\n\nTurn on/off all point arrays.\n"},
  {(char*)"GetNumberOfLagrangianArrays", PyvtkOpenFOAMReader_GetNumberOfLagrangianArrays, METH_VARARGS,
   (char*)"V.GetNumberOfLagrangianArrays() -> int\nC++: int GetNumberOfLagrangianArrays(void)\n\nGet the number of Lagrangian arrays available in the input.\n"},
  {(char*)"GetLagrangianArrayStatus", PyvtkOpenFOAMReader_GetLagrangianArrayStatus, METH_VARARGS,
   (char*)"V.GetLagrangianArrayStatus(string) -> int\nC++: int GetLagrangianArrayStatus(const char *name)\n\nGet/Set whether the Lagrangian array with the given name is to be\nread.\n"},
  {(char*)"SetLagrangianArrayStatus", PyvtkOpenFOAMReader_SetLagrangianArrayStatus, METH_VARARGS,
   (char*)"V.SetLagrangianArrayStatus(string, int)\nC++: void SetLagrangianArrayStatus(const char *name, int status)\n\nGet/Set whether the Lagrangian array with the given name is to be\nread.\n"},
  {(char*)"GetLagrangianArrayName", PyvtkOpenFOAMReader_GetLagrangianArrayName, METH_VARARGS,
   (char*)"V.GetLagrangianArrayName(int) -> string\nC++: const char *GetLagrangianArrayName(int index)\n\nGet the name of the  Lagrangian array with the given index in the\ninput.\n"},
  {(char*)"DisableAllLagrangianArrays", PyvtkOpenFOAMReader_DisableAllLagrangianArrays, METH_VARARGS,
   (char*)"V.DisableAllLagrangianArrays()\nC++: void DisableAllLagrangianArrays()\n\nTurn on/off all Lagrangian arrays.\n"},
  {(char*)"EnableAllLagrangianArrays", PyvtkOpenFOAMReader_EnableAllLagrangianArrays, METH_VARARGS,
   (char*)"V.EnableAllLagrangianArrays()\nC++: void EnableAllLagrangianArrays()\n\nTurn on/off all Lagrangian arrays.\n"},
  {(char*)"GetNumberOfPatchArrays", PyvtkOpenFOAMReader_GetNumberOfPatchArrays, METH_VARARGS,
   (char*)"V.GetNumberOfPatchArrays() -> int\nC++: int GetNumberOfPatchArrays(void)\n\nGet the number of Patches (including Internal Mesh) available in\nthe input.\n"},
  {(char*)"GetPatchArrayStatus", PyvtkOpenFOAMReader_GetPatchArrayStatus, METH_VARARGS,
   (char*)"V.GetPatchArrayStatus(string) -> int\nC++: int GetPatchArrayStatus(const char *name)\n\nGet/Set whether the Patch with the given name is to be read.\n"},
  {(char*)"SetPatchArrayStatus", PyvtkOpenFOAMReader_SetPatchArrayStatus, METH_VARARGS,
   (char*)"V.SetPatchArrayStatus(string, int)\nC++: void SetPatchArrayStatus(const char *name, int status)\n\nGet/Set whether the Patch with the given name is to be read.\n"},
  {(char*)"GetPatchArrayName", PyvtkOpenFOAMReader_GetPatchArrayName, METH_VARARGS,
   (char*)"V.GetPatchArrayName(int) -> string\nC++: const char *GetPatchArrayName(int index)\n\nGet the name of the Patch with the given index in the input.\n"},
  {(char*)"DisableAllPatchArrays", PyvtkOpenFOAMReader_DisableAllPatchArrays, METH_VARARGS,
   (char*)"V.DisableAllPatchArrays()\nC++: void DisableAllPatchArrays()\n\nTurn on/off all Patches including the Internal Mesh.\n"},
  {(char*)"EnableAllPatchArrays", PyvtkOpenFOAMReader_EnableAllPatchArrays, METH_VARARGS,
   (char*)"V.EnableAllPatchArrays()\nC++: void EnableAllPatchArrays()\n\nTurn on/off all Patches including the Internal Mesh.\n"},
  {(char*)"SetCreateCellToPoint", PyvtkOpenFOAMReader_SetCreateCellToPoint, METH_VARARGS,
   (char*)"V.SetCreateCellToPoint(int)\nC++: void SetCreateCellToPoint(int a)\n\nSet/Get whether to create cell-to-point translated data for\ncell-type data\n"},
  {(char*)"GetCreateCellToPoint", PyvtkOpenFOAMReader_GetCreateCellToPoint, METH_VARARGS,
   (char*)"V.GetCreateCellToPoint() -> int\nC++: int GetCreateCellToPoint()\n\nSet/Get whether to create cell-to-point translated data for\ncell-type data\n"},
  {(char*)"CreateCellToPointOn", PyvtkOpenFOAMReader_CreateCellToPointOn, METH_VARARGS,
   (char*)"V.CreateCellToPointOn()\nC++: void CreateCellToPointOn()\n\nSet/Get whether to create cell-to-point translated data for\ncell-type data\n"},
  {(char*)"CreateCellToPointOff", PyvtkOpenFOAMReader_CreateCellToPointOff, METH_VARARGS,
   (char*)"V.CreateCellToPointOff()\nC++: void CreateCellToPointOff()\n\nSet/Get whether to create cell-to-point translated data for\ncell-type data\n"},
  {(char*)"SetCacheMesh", PyvtkOpenFOAMReader_SetCacheMesh, METH_VARARGS,
   (char*)"V.SetCacheMesh(int)\nC++: void SetCacheMesh(int a)\n\nSet/Get whether mesh is to be cached.\n"},
  {(char*)"GetCacheMesh", PyvtkOpenFOAMReader_GetCacheMesh, METH_VARARGS,
   (char*)"V.GetCacheMesh() -> int\nC++: int GetCacheMesh()\n\nSet/Get whether mesh is to be cached.\n"},
  {(char*)"CacheMeshOn", PyvtkOpenFOAMReader_CacheMeshOn, METH_VARARGS,
   (char*)"V.CacheMeshOn()\nC++: void CacheMeshOn()\n\nSet/Get whether mesh is to be cached.\n"},
  {(char*)"CacheMeshOff", PyvtkOpenFOAMReader_CacheMeshOff, METH_VARARGS,
   (char*)"V.CacheMeshOff()\nC++: void CacheMeshOff()\n\nSet/Get whether mesh is to be cached.\n"},
  {(char*)"SetDecomposePolyhedra", PyvtkOpenFOAMReader_SetDecomposePolyhedra, METH_VARARGS,
   (char*)"V.SetDecomposePolyhedra(int)\nC++: void SetDecomposePolyhedra(int a)\n\nSet/Get whether polyhedra are to be decomposed.\n"},
  {(char*)"GetDecomposePolyhedra", PyvtkOpenFOAMReader_GetDecomposePolyhedra, METH_VARARGS,
   (char*)"V.GetDecomposePolyhedra() -> int\nC++: int GetDecomposePolyhedra()\n\nSet/Get whether polyhedra are to be decomposed.\n"},
  {(char*)"DecomposePolyhedraOn", PyvtkOpenFOAMReader_DecomposePolyhedraOn, METH_VARARGS,
   (char*)"V.DecomposePolyhedraOn()\nC++: void DecomposePolyhedraOn()\n\nSet/Get whether polyhedra are to be decomposed.\n"},
  {(char*)"DecomposePolyhedraOff", PyvtkOpenFOAMReader_DecomposePolyhedraOff, METH_VARARGS,
   (char*)"V.DecomposePolyhedraOff()\nC++: void DecomposePolyhedraOff()\n\nSet/Get whether polyhedra are to be decomposed.\n"},
  {(char*)"SetPositionsIsIn13Format", PyvtkOpenFOAMReader_SetPositionsIsIn13Format, METH_VARARGS,
   (char*)"V.SetPositionsIsIn13Format(int)\nC++: void SetPositionsIsIn13Format(int a)\n\nSet/Get whether the lagrangian/positions is in OF 1.3 format\n"},
  {(char*)"GetPositionsIsIn13Format", PyvtkOpenFOAMReader_GetPositionsIsIn13Format, METH_VARARGS,
   (char*)"V.GetPositionsIsIn13Format() -> int\nC++: int GetPositionsIsIn13Format()\n\nSet/Get whether the lagrangian/positions is in OF 1.3 format\n"},
  {(char*)"PositionsIsIn13FormatOn", PyvtkOpenFOAMReader_PositionsIsIn13FormatOn, METH_VARARGS,
   (char*)"V.PositionsIsIn13FormatOn()\nC++: void PositionsIsIn13FormatOn()\n\nSet/Get whether the lagrangian/positions is in OF 1.3 format\n"},
  {(char*)"PositionsIsIn13FormatOff", PyvtkOpenFOAMReader_PositionsIsIn13FormatOff, METH_VARARGS,
   (char*)"V.PositionsIsIn13FormatOff()\nC++: void PositionsIsIn13FormatOff()\n\nSet/Get whether the lagrangian/positions is in OF 1.3 format\n"},
  {(char*)"SetListTimeStepsByControlDict", PyvtkOpenFOAMReader_SetListTimeStepsByControlDict, METH_VARARGS,
   (char*)"V.SetListTimeStepsByControlDict(int)\nC++: void SetListTimeStepsByControlDict(int a)\n\nDetermine if time directories are to be listed according to\ncontrolDict\n"},
  {(char*)"GetListTimeStepsByControlDict", PyvtkOpenFOAMReader_GetListTimeStepsByControlDict, METH_VARARGS,
   (char*)"V.GetListTimeStepsByControlDict() -> int\nC++: int GetListTimeStepsByControlDict()\n\nDetermine if time directories are to be listed according to\ncontrolDict\n"},
  {(char*)"ListTimeStepsByControlDictOn", PyvtkOpenFOAMReader_ListTimeStepsByControlDictOn, METH_VARARGS,
   (char*)"V.ListTimeStepsByControlDictOn()\nC++: void ListTimeStepsByControlDictOn()\n\nDetermine if time directories are to be listed according to\ncontrolDict\n"},
  {(char*)"ListTimeStepsByControlDictOff", PyvtkOpenFOAMReader_ListTimeStepsByControlDictOff, METH_VARARGS,
   (char*)"V.ListTimeStepsByControlDictOff()\nC++: void ListTimeStepsByControlDictOff()\n\nDetermine if time directories are to be listed according to\ncontrolDict\n"},
  {(char*)"SetAddDimensionsToArrayNames", PyvtkOpenFOAMReader_SetAddDimensionsToArrayNames, METH_VARARGS,
   (char*)"V.SetAddDimensionsToArrayNames(int)\nC++: void SetAddDimensionsToArrayNames(int a)\n\nAdd dimensions to array names\n"},
  {(char*)"GetAddDimensionsToArrayNames", PyvtkOpenFOAMReader_GetAddDimensionsToArrayNames, METH_VARARGS,
   (char*)"V.GetAddDimensionsToArrayNames() -> int\nC++: int GetAddDimensionsToArrayNames()\n\nAdd dimensions to array names\n"},
  {(char*)"AddDimensionsToArrayNamesOn", PyvtkOpenFOAMReader_AddDimensionsToArrayNamesOn, METH_VARARGS,
   (char*)"V.AddDimensionsToArrayNamesOn()\nC++: void AddDimensionsToArrayNamesOn()\n\nAdd dimensions to array names\n"},
  {(char*)"AddDimensionsToArrayNamesOff", PyvtkOpenFOAMReader_AddDimensionsToArrayNamesOff, METH_VARARGS,
   (char*)"V.AddDimensionsToArrayNamesOff()\nC++: void AddDimensionsToArrayNamesOff()\n\nAdd dimensions to array names\n"},
  {(char*)"SetReadZones", PyvtkOpenFOAMReader_SetReadZones, METH_VARARGS,
   (char*)"V.SetReadZones(int)\nC++: void SetReadZones(int a)\n\nSet/Get whether zones will be read.\n"},
  {(char*)"GetReadZones", PyvtkOpenFOAMReader_GetReadZones, METH_VARARGS,
   (char*)"V.GetReadZones() -> int\nC++: int GetReadZones()\n\nSet/Get whether zones will be read.\n"},
  {(char*)"ReadZonesOn", PyvtkOpenFOAMReader_ReadZonesOn, METH_VARARGS,
   (char*)"V.ReadZonesOn()\nC++: void ReadZonesOn()\n\nSet/Get whether zones will be read.\n"},
  {(char*)"ReadZonesOff", PyvtkOpenFOAMReader_ReadZonesOff, METH_VARARGS,
   (char*)"V.ReadZonesOff()\nC++: void ReadZonesOff()\n\nSet/Get whether zones will be read.\n"},
  {(char*)"SetRefresh", PyvtkOpenFOAMReader_SetRefresh, METH_VARARGS,
   (char*)"V.SetRefresh()\nC++: void SetRefresh()\n\n"},
  {(char*)"SetParent", PyvtkOpenFOAMReader_SetParent, METH_VARARGS,
   (char*)"V.SetParent(vtkOpenFOAMReader)\nC++: void SetParent(vtkOpenFOAMReader *parent)\n\n"},
  {(char*)"MakeInformationVector", PyvtkOpenFOAMReader_MakeInformationVector, METH_VARARGS,
   (char*)"V.MakeInformationVector(vtkInformationVector, string) -> int\nC++: int MakeInformationVector(vtkInformationVector *,\n    const vtkStdString &)\n\n"},
  {(char*)"SetTimeValue", PyvtkOpenFOAMReader_SetTimeValue, METH_VARARGS,
   (char*)"V.SetTimeValue(float) -> bool\nC++: bool SetTimeValue(const double)\n\n"},
  {(char*)"GetTimeValues", PyvtkOpenFOAMReader_GetTimeValues, METH_VARARGS,
   (char*)"V.GetTimeValues() -> vtkDoubleArray\nC++: vtkDoubleArray *GetTimeValues()\n\n"},
  {(char*)"MakeMetaDataAtTimeStep", PyvtkOpenFOAMReader_MakeMetaDataAtTimeStep, METH_VARARGS,
   (char*)"V.MakeMetaDataAtTimeStep(bool) -> int\nC++: int MakeMetaDataAtTimeStep(const bool)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenFOAMReader_StaticNew()
{
  return vtkOpenFOAMReader::New();
}

PyObject *PyVTKClass_vtkOpenFOAMReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenFOAMReader_StaticNew,
    PyvtkOpenFOAMReader_Methods,
    "vtkOpenFOAMReader", modulename,
    NULL, NULL,
    PyvtkOpenFOAMReader_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkOpenFOAMReader_Doc()
{
  static const char *docstring[] = {
    "vtkOpenFOAMReader - reads a dataset in OpenFOAM format\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkOpenFOAMReader creates a multiblock dataset. It reads mesh\ninformation and time dependent data.  The polyMesh folders contain\nmesh information. The time folders contain transient data for the\ncells. Each folder can contain any number of data files.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenFOAMReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenFOAMReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenFOAMReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

