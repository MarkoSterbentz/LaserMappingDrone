// python wrapper for vtkDataReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkDataReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkDataReader_Doc();


static PyObject *
PyvtkDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataReader::NewInstance());

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
PyvtkDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataReader *tempr = vtkDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDataReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsFileValid(temp0) :
      op->vtkDataReader::IsFileValid(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileStructuredPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileStructuredPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsFileStructuredPoints() :
      op->vtkDataReader::IsFileStructuredPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_IsFilePolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFilePolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsFilePolyData() :
      op->vtkDataReader::IsFilePolyData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileStructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileStructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsFileStructuredGrid() :
      op->vtkDataReader::IsFileStructuredGrid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsFileUnstructuredGrid() :
      op->vtkDataReader::IsFileUnstructuredGrid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileRectilinearGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileRectilinearGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsFileRectilinearGrid() :
      op->vtkDataReader::IsFileRectilinearGrid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetInputString() :
      op->vtkDataReader::GetInputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetInputString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputString(temp0, temp1);
      }
    else
      {
      op->vtkDataReader::SetInputString(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataReader_SetInputString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputString(temp0);
      }
    else
      {
      op->vtkDataReader::SetInputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataReader_SetInputString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDataReader_SetInputString_s1(self, args);
    case 1:
      return PyvtkDataReader_SetInputString_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputString");
  return NULL;
}



static PyObject *
PyvtkDataReader_GetInputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInputStringLength() :
      op->vtkDataReader::GetInputStringLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetBinaryInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinaryInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetBinaryInputString(temp0, temp1);
      }
    else
      {
      op->vtkDataReader::SetBinaryInputString(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetInputArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCharArray"))
    {
    if (ap.IsBound())
      {
      op->SetInputArray(temp0);
      }
    else
      {
      op->vtkDataReader::SetInputArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetInputArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCharArray *tempr = (ap.IsBound() ?
      op->GetInputArray() :
      op->vtkDataReader::GetInputArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetHeader() :
      op->vtkDataReader::GetHeader());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadFromInputString(temp0);
      }
    else
      {
      op->vtkDataReader::SetReadFromInputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReadFromInputString() :
      op->vtkDataReader::GetReadFromInputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadFromInputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadFromInputStringOn();
      }
    else
      {
      op->vtkDataReader::ReadFromInputStringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadFromInputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadFromInputStringOff();
      }
    else
      {
      op->vtkDataReader::ReadFromInputStringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFileType() :
      op->vtkDataReader::GetFileType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfScalarsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarsInFile() :
      op->vtkDataReader::GetNumberOfScalarsInFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfVectorsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVectorsInFile() :
      op->vtkDataReader::GetNumberOfVectorsInFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfTensorsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTensorsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTensorsInFile() :
      op->vtkDataReader::GetNumberOfTensorsInFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfNormalsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNormalsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNormalsInFile() :
      op->vtkDataReader::GetNumberOfNormalsInFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfTCoordsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTCoordsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTCoordsInFile() :
      op->vtkDataReader::GetNumberOfTCoordsInFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfFieldDataInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFieldDataInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFieldDataInFile() :
      op->vtkDataReader::GetNumberOfFieldDataInFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetScalarsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarsNameInFile(temp0) :
      op->vtkDataReader::GetScalarsNameInFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetVectorsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetVectorsNameInFile(temp0) :
      op->vtkDataReader::GetVectorsNameInFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetTensorsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetTensorsNameInFile(temp0) :
      op->vtkDataReader::GetTensorsNameInFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetNormalsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetNormalsNameInFile(temp0) :
      op->vtkDataReader::GetNormalsNameInFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetTCoordsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetTCoordsNameInFile(temp0) :
      op->vtkDataReader::GetTCoordsNameInFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetFieldDataNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetFieldDataNameInFile(temp0) :
      op->vtkDataReader::GetFieldDataNameInFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetScalarsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetScalarsName() :
      op->vtkDataReader::GetScalarsName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetVectorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetVectorsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetVectorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetVectorsName() :
      op->vtkDataReader::GetVectorsName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetTensorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetTensorsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetTensorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetTensorsName() :
      op->vtkDataReader::GetTensorsName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetNormalsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetNormalsName() :
      op->vtkDataReader::GetNormalsName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetTCoordsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetTCoordsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetTCoordsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetTCoordsName() :
      op->vtkDataReader::GetTCoordsName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetLookupTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetLookupTableName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetLookupTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLookupTableName() :
      op->vtkDataReader::GetLookupTableName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetFieldDataName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDataName() :
      op->vtkDataReader::GetFieldDataName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadAllScalars(temp0);
      }
    else
      {
      op->vtkDataReader::SetReadAllScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReadAllScalars() :
      op->vtkDataReader::GetReadAllScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllScalarsOn();
      }
    else
      {
      op->vtkDataReader::ReadAllScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllScalarsOff();
      }
    else
      {
      op->vtkDataReader::ReadAllScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadAllVectors(temp0);
      }
    else
      {
      op->vtkDataReader::SetReadAllVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReadAllVectors() :
      op->vtkDataReader::GetReadAllVectors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllVectorsOn();
      }
    else
      {
      op->vtkDataReader::ReadAllVectorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllVectorsOff();
      }
    else
      {
      op->vtkDataReader::ReadAllVectorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadAllNormals(temp0);
      }
    else
      {
      op->vtkDataReader::SetReadAllNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReadAllNormals() :
      op->vtkDataReader::GetReadAllNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllNormalsOn();
      }
    else
      {
      op->vtkDataReader::ReadAllNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllNormalsOff();
      }
    else
      {
      op->vtkDataReader::ReadAllNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadAllTensors(temp0);
      }
    else
      {
      op->vtkDataReader::SetReadAllTensors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReadAllTensors() :
      op->vtkDataReader::GetReadAllTensors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllTensorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllTensorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllTensorsOn();
      }
    else
      {
      op->vtkDataReader::ReadAllTensorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllTensorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllTensorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllTensorsOff();
      }
    else
      {
      op->vtkDataReader::ReadAllTensorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllColorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllColorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadAllColorScalars(temp0);
      }
    else
      {
      op->vtkDataReader::SetReadAllColorScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllColorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllColorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReadAllColorScalars() :
      op->vtkDataReader::GetReadAllColorScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllColorScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllColorScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllColorScalarsOn();
      }
    else
      {
      op->vtkDataReader::ReadAllColorScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllColorScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllColorScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllColorScalarsOff();
      }
    else
      {
      op->vtkDataReader::ReadAllColorScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadAllTCoords(temp0);
      }
    else
      {
      op->vtkDataReader::SetReadAllTCoords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReadAllTCoords() :
      op->vtkDataReader::GetReadAllTCoords());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllTCoordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllTCoordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllTCoordsOn();
      }
    else
      {
      op->vtkDataReader::ReadAllTCoordsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllTCoordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllTCoordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllTCoordsOff();
      }
    else
      {
      op->vtkDataReader::ReadAllTCoordsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadAllFields(temp0);
      }
    else
      {
      op->vtkDataReader::SetReadAllFields(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReadAllFields() :
      op->vtkDataReader::GetReadAllFields());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllFieldsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllFieldsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllFieldsOn();
      }
    else
      {
      op->vtkDataReader::ReadAllFieldsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllFieldsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllFieldsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllFieldsOff();
      }
    else
      {
      op->vtkDataReader::ReadAllFieldsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_OpenVTKFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenVTKFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->OpenVTKFile() :
      op->vtkDataReader::OpenVTKFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->ReadHeader() :
      op->vtkDataReader::ReadHeader());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkDataSet *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->ReadCellData(temp0, temp1) :
      op->vtkDataReader::ReadCellData(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkDataSet *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->ReadPointData(temp0, temp1) :
      op->vtkDataReader::ReadPointData(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkPointSet *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPointSet") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->ReadPoints(temp0, temp1) :
      op->vtkDataReader::ReadPoints(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataReader_ReadPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkGraph *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGraph") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->ReadPoints(temp0, temp1) :
      op->vtkDataReader::ReadPoints(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataReader_ReadPoints_Methods[] = {
  {NULL, PyvtkDataReader_ReadPoints_s1, METH_VARARGS,
   (char*)"@Oi *vtkPointSet"},
  {NULL, PyvtkDataReader_ReadPoints_s2, METH_VARARGS,
   (char*)"@Oi *vtkGraph"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDataReader_ReadPoints(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataReader_ReadPoints_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ReadPoints");
  return NULL;
}



static PyObject *
PyvtkDataReader_ReadVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkGraph *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGraph") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->ReadVertexData(temp0, temp1) :
      op->vtkDataReader::ReadVertexData(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadEdgeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadEdgeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkGraph *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGraph") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->ReadEdgeData(temp0, temp1) :
      op->vtkDataReader::ReadEdgeData(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadRowData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadRowData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkTable *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->ReadRowData(temp0, temp1) :
      op->vtkDataReader::ReadRowData(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadCells_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ReadCells(temp0, temp1) :
      op->vtkDataReader::ReadCells(temp0, temp1));

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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkDataReader_ReadCells_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ReadCells(temp0, temp1, temp2, temp3, temp4) :
      op->vtkDataReader::ReadCells(temp0, temp1, temp2, temp3, temp4));

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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkDataReader_ReadCells(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDataReader_ReadCells_s1(self, args);
    case 5:
      return PyvtkDataReader_ReadCells_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ReadCells");
  return NULL;
}



static PyObject *
PyvtkDataReader_ReadCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkRectilinearGrid *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRectilinearGrid") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->ReadCoordinates(temp0, temp1, temp2) :
      op->vtkDataReader::ReadCoordinates(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->ReadArray(temp0, temp1, temp2) :
      op->vtkDataReader::ReadArray(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->ReadFieldData() :
      op->vtkDataReader::ReadFieldData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_Read_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->Read(temp0) :
      op->vtkDataReader::Read(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataReader_Read_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Read(temp0) :
      op->vtkDataReader::Read(temp0));

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkDataReader_Read_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  long *temp0 = NULL;
  long *save0 = NULL;
  long small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new long[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Read(temp0) :
      op->vtkDataReader::Read(temp0));

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkDataReader_Read_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  long long *temp0 = NULL;
  long long *save0 = NULL;
  long long small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new long long[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Read(temp0) :
      op->vtkDataReader::Read(temp0));

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkDataReader_Read_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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

    int tempr = (ap.IsBound() ?
      op->Read(temp0) :
      op->vtkDataReader::Read(temp0));

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyMethodDef PyvtkDataReader_Read_Methods[] = {
  {NULL, PyvtkDataReader_Read_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkDataReader_Read_s2, METH_VARARGS,
   (char*)"@O *i"},
  {NULL, PyvtkDataReader_Read_s3, METH_VARARGS,
   (char*)"@O *l"},
  {NULL, PyvtkDataReader_Read_s4, METH_VARARGS,
   (char*)"@O *L"},
  {NULL, PyvtkDataReader_Read_s5, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDataReader_Read(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataReader_Read_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Read");
  return NULL;
}



static PyObject *
PyvtkDataReader_CloseVTKFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseVTKFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CloseVTKFile();
      }
    else
      {
      op->vtkDataReader::CloseVTKFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  char *save0 = NULL;
  const int size0 = 256;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ReadLine(temp0) :
      op->vtkDataReader::ReadLine(temp0));

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
PyvtkDataReader_ReadString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  char *save0 = NULL;
  const int size0 = 256;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ReadString(temp0) :
      op->vtkDataReader::ReadString(temp0));

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
PyvtkDataReader_LowerCase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LowerCase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  size_t temp1 = 256;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    char *tempr = (ap.IsBound() ?
      op->LowerCase(temp0, temp1) :
      op->vtkDataReader::LowerCase(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->ReadMetaData(temp0) :
      op->vtkDataReader::ReadMetaData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkDataReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataReader\nC++: vtkDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataReader\nC++: vtkDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkDataReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of vtk data file to read.\n"},
  {(char*)"GetFileName", PyvtkDataReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of vtk data file to read.\n"},
  {(char*)"IsFileValid", PyvtkDataReader_IsFileValid, METH_VARARGS,
   (char*)"V.IsFileValid(string) -> int\nC++: int IsFileValid(const char *dstype)\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {(char*)"IsFileStructuredPoints", PyvtkDataReader_IsFileStructuredPoints, METH_VARARGS,
   (char*)"V.IsFileStructuredPoints() -> int\nC++: int IsFileStructuredPoints()\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {(char*)"IsFilePolyData", PyvtkDataReader_IsFilePolyData, METH_VARARGS,
   (char*)"V.IsFilePolyData() -> int\nC++: int IsFilePolyData()\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {(char*)"IsFileStructuredGrid", PyvtkDataReader_IsFileStructuredGrid, METH_VARARGS,
   (char*)"V.IsFileStructuredGrid() -> int\nC++: int IsFileStructuredGrid()\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {(char*)"IsFileUnstructuredGrid", PyvtkDataReader_IsFileUnstructuredGrid, METH_VARARGS,
   (char*)"V.IsFileUnstructuredGrid() -> int\nC++: int IsFileUnstructuredGrid()\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {(char*)"IsFileRectilinearGrid", PyvtkDataReader_IsFileRectilinearGrid, METH_VARARGS,
   (char*)"V.IsFileRectilinearGrid() -> int\nC++: int IsFileRectilinearGrid()\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {(char*)"GetInputString", PyvtkDataReader_GetInputString, METH_VARARGS,
   (char*)"V.GetInputString() -> string\nC++: char *GetInputString()\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {(char*)"SetInputString", PyvtkDataReader_SetInputString, METH_VARARGS,
   (char*)"V.SetInputString(string, int)\nC++: void SetInputString(const char *in, int len)\nV.SetInputString(string)\nC++: void SetInputString(const vtkStdString &input)\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {(char*)"GetInputStringLength", PyvtkDataReader_GetInputStringLength, METH_VARARGS,
   (char*)"V.GetInputStringLength() -> int\nC++: int GetInputStringLength()\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {(char*)"SetBinaryInputString", PyvtkDataReader_SetBinaryInputString, METH_VARARGS,
   (char*)"V.SetBinaryInputString(string, int)\nC++: void SetBinaryInputString(const char *, int len)\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {(char*)"SetInputArray", PyvtkDataReader_SetInputArray, METH_VARARGS,
   (char*)"V.SetInputArray(vtkCharArray)\nC++: virtual void SetInputArray(vtkCharArray *)\n\nSpecify the vtkCharArray to be used  when reading from a string.\nIf set, this array has precedence over InputString. Use this\ninstead of InputString to avoid the extra memory copy. It should\nbe noted that if the underlying char* is owned by the user (\nvtkCharArray::SetArray(array, 1); ) and is deleted before the\nreader, bad things will happen during a pipeline update.\n"},
  {(char*)"GetInputArray", PyvtkDataReader_GetInputArray, METH_VARARGS,
   (char*)"V.GetInputArray() -> vtkCharArray\nC++: vtkCharArray *GetInputArray()\n\nSpecify the vtkCharArray to be used  when reading from a string.\nIf set, this array has precedence over InputString. Use this\ninstead of InputString to avoid the extra memory copy. It should\nbe noted that if the underlying char* is owned by the user (\nvtkCharArray::SetArray(array, 1); ) and is deleted before the\nreader, bad things will happen during a pipeline update.\n"},
  {(char*)"GetHeader", PyvtkDataReader_GetHeader, METH_VARARGS,
   (char*)"V.GetHeader() -> string\nC++: char *GetHeader()\n\nGet the header from the vtk data file.\n"},
  {(char*)"SetReadFromInputString", PyvtkDataReader_SetReadFromInputString, METH_VARARGS,
   (char*)"V.SetReadFromInputString(int)\nC++: void SetReadFromInputString(int a)\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {(char*)"GetReadFromInputString", PyvtkDataReader_GetReadFromInputString, METH_VARARGS,
   (char*)"V.GetReadFromInputString() -> int\nC++: int GetReadFromInputString()\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {(char*)"ReadFromInputStringOn", PyvtkDataReader_ReadFromInputStringOn, METH_VARARGS,
   (char*)"V.ReadFromInputStringOn()\nC++: void ReadFromInputStringOn()\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {(char*)"ReadFromInputStringOff", PyvtkDataReader_ReadFromInputStringOff, METH_VARARGS,
   (char*)"V.ReadFromInputStringOff()\nC++: void ReadFromInputStringOff()\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {(char*)"GetFileType", PyvtkDataReader_GetFileType, METH_VARARGS,
   (char*)"V.GetFileType() -> int\nC++: int GetFileType()\n\nGet the type of file (ASCII or BINARY). Returned value only valid\nafter file has been read.\n"},
  {(char*)"GetNumberOfScalarsInFile", PyvtkDataReader_GetNumberOfScalarsInFile, METH_VARARGS,
   (char*)"V.GetNumberOfScalarsInFile() -> int\nC++: int GetNumberOfScalarsInFile()\n\nHow many attributes of various types are in this file? This\nrequires reading the file, so the filename must be set prior to\ninvoking this operation. (Note: file characteristics are cached,\nso only a single read is necessary to return file\ncharacteristics.)\n"},
  {(char*)"GetNumberOfVectorsInFile", PyvtkDataReader_GetNumberOfVectorsInFile, METH_VARARGS,
   (char*)"V.GetNumberOfVectorsInFile() -> int\nC++: int GetNumberOfVectorsInFile()\n\nHow many attributes of various types are in this file? This\nrequires reading the file, so the filename must be set prior to\ninvoking this operation. (Note: file characteristics are cached,\nso only a single read is necessary to return file\ncharacteristics.)\n"},
  {(char*)"GetNumberOfTensorsInFile", PyvtkDataReader_GetNumberOfTensorsInFile, METH_VARARGS,
   (char*)"V.GetNumberOfTensorsInFile() -> int\nC++: int GetNumberOfTensorsInFile()\n\nHow many attributes of various types are in this file? This\nrequires reading the file, so the filename must be set prior to\ninvoking this operation. (Note: file characteristics are cached,\nso only a single read is necessary to return file\ncharacteristics.)\n"},
  {(char*)"GetNumberOfNormalsInFile", PyvtkDataReader_GetNumberOfNormalsInFile, METH_VARARGS,
   (char*)"V.GetNumberOfNormalsInFile() -> int\nC++: int GetNumberOfNormalsInFile()\n\nHow many attributes of various types are in this file? This\nrequires reading the file, so the filename must be set prior to\ninvoking this operation. (Note: file characteristics are cached,\nso only a single read is necessary to return file\ncharacteristics.)\n"},
  {(char*)"GetNumberOfTCoordsInFile", PyvtkDataReader_GetNumberOfTCoordsInFile, METH_VARARGS,
   (char*)"V.GetNumberOfTCoordsInFile() -> int\nC++: int GetNumberOfTCoordsInFile()\n\nHow many attributes of various types are in this file? This\nrequires reading the file, so the filename must be set prior to\ninvoking this operation. (Note: file characteristics are cached,\nso only a single read is necessary to return file\ncharacteristics.)\n"},
  {(char*)"GetNumberOfFieldDataInFile", PyvtkDataReader_GetNumberOfFieldDataInFile, METH_VARARGS,
   (char*)"V.GetNumberOfFieldDataInFile() -> int\nC++: int GetNumberOfFieldDataInFile()\n\nHow many attributes of various types are in this file? This\nrequires reading the file, so the filename must be set prior to\ninvoking this operation. (Note: file characteristics are cached,\nso only a single read is necessary to return file\ncharacteristics.)\n"},
  {(char*)"GetScalarsNameInFile", PyvtkDataReader_GetScalarsNameInFile, METH_VARARGS,
   (char*)"V.GetScalarsNameInFile(int) -> string\nC++: const char *GetScalarsNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {(char*)"GetVectorsNameInFile", PyvtkDataReader_GetVectorsNameInFile, METH_VARARGS,
   (char*)"V.GetVectorsNameInFile(int) -> string\nC++: const char *GetVectorsNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {(char*)"GetTensorsNameInFile", PyvtkDataReader_GetTensorsNameInFile, METH_VARARGS,
   (char*)"V.GetTensorsNameInFile(int) -> string\nC++: const char *GetTensorsNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {(char*)"GetNormalsNameInFile", PyvtkDataReader_GetNormalsNameInFile, METH_VARARGS,
   (char*)"V.GetNormalsNameInFile(int) -> string\nC++: const char *GetNormalsNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {(char*)"GetTCoordsNameInFile", PyvtkDataReader_GetTCoordsNameInFile, METH_VARARGS,
   (char*)"V.GetTCoordsNameInFile(int) -> string\nC++: const char *GetTCoordsNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {(char*)"GetFieldDataNameInFile", PyvtkDataReader_GetFieldDataNameInFile, METH_VARARGS,
   (char*)"V.GetFieldDataNameInFile(int) -> string\nC++: const char *GetFieldDataNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {(char*)"SetScalarsName", PyvtkDataReader_SetScalarsName, METH_VARARGS,
   (char*)"V.SetScalarsName(string)\nC++: void SetScalarsName(char *)\n\nSet the name of the scalar data to extract. If not specified,\nfirst scalar data encountered is extracted.\n"},
  {(char*)"GetScalarsName", PyvtkDataReader_GetScalarsName, METH_VARARGS,
   (char*)"V.GetScalarsName() -> string\nC++: char *GetScalarsName()\n\nSet the name of the scalar data to extract. If not specified,\nfirst scalar data encountered is extracted.\n"},
  {(char*)"SetVectorsName", PyvtkDataReader_SetVectorsName, METH_VARARGS,
   (char*)"V.SetVectorsName(string)\nC++: void SetVectorsName(char *)\n\nSet the name of the vector data to extract. If not specified,\nfirst vector data encountered is extracted.\n"},
  {(char*)"GetVectorsName", PyvtkDataReader_GetVectorsName, METH_VARARGS,
   (char*)"V.GetVectorsName() -> string\nC++: char *GetVectorsName()\n\nSet the name of the vector data to extract. If not specified,\nfirst vector data encountered is extracted.\n"},
  {(char*)"SetTensorsName", PyvtkDataReader_SetTensorsName, METH_VARARGS,
   (char*)"V.SetTensorsName(string)\nC++: void SetTensorsName(char *)\n\nSet the name of the tensor data to extract. If not specified,\nfirst tensor data encountered is extracted.\n"},
  {(char*)"GetTensorsName", PyvtkDataReader_GetTensorsName, METH_VARARGS,
   (char*)"V.GetTensorsName() -> string\nC++: char *GetTensorsName()\n\nSet the name of the tensor data to extract. If not specified,\nfirst tensor data encountered is extracted.\n"},
  {(char*)"SetNormalsName", PyvtkDataReader_SetNormalsName, METH_VARARGS,
   (char*)"V.SetNormalsName(string)\nC++: void SetNormalsName(char *)\n\nSet the name of the normal data to extract. If not specified,\nfirst normal data encountered is extracted.\n"},
  {(char*)"GetNormalsName", PyvtkDataReader_GetNormalsName, METH_VARARGS,
   (char*)"V.GetNormalsName() -> string\nC++: char *GetNormalsName()\n\nSet the name of the normal data to extract. If not specified,\nfirst normal data encountered is extracted.\n"},
  {(char*)"SetTCoordsName", PyvtkDataReader_SetTCoordsName, METH_VARARGS,
   (char*)"V.SetTCoordsName(string)\nC++: void SetTCoordsName(char *)\n\nSet the name of the texture coordinate data to extract. If not\nspecified, first texture coordinate data encountered is\nextracted.\n"},
  {(char*)"GetTCoordsName", PyvtkDataReader_GetTCoordsName, METH_VARARGS,
   (char*)"V.GetTCoordsName() -> string\nC++: char *GetTCoordsName()\n\nSet the name of the texture coordinate data to extract. If not\nspecified, first texture coordinate data encountered is\nextracted.\n"},
  {(char*)"SetLookupTableName", PyvtkDataReader_SetLookupTableName, METH_VARARGS,
   (char*)"V.SetLookupTableName(string)\nC++: void SetLookupTableName(char *)\n\nSet the name of the lookup table data to extract. If not\nspecified, uses lookup table named by scalar. Otherwise, this\nspecification supersedes.\n"},
  {(char*)"GetLookupTableName", PyvtkDataReader_GetLookupTableName, METH_VARARGS,
   (char*)"V.GetLookupTableName() -> string\nC++: char *GetLookupTableName()\n\nSet the name of the lookup table data to extract. If not\nspecified, uses lookup table named by scalar. Otherwise, this\nspecification supersedes.\n"},
  {(char*)"SetFieldDataName", PyvtkDataReader_SetFieldDataName, METH_VARARGS,
   (char*)"V.SetFieldDataName(string)\nC++: void SetFieldDataName(char *)\n\nSet the name of the field data to extract. If not specified, uses\nfirst field data encountered in file.\n"},
  {(char*)"GetFieldDataName", PyvtkDataReader_GetFieldDataName, METH_VARARGS,
   (char*)"V.GetFieldDataName() -> string\nC++: char *GetFieldDataName()\n\nSet the name of the field data to extract. If not specified, uses\nfirst field data encountered in file.\n"},
  {(char*)"SetReadAllScalars", PyvtkDataReader_SetReadAllScalars, METH_VARARGS,
   (char*)"V.SetReadAllScalars(int)\nC++: void SetReadAllScalars(int a)\n\nEnable reading all scalars.\n"},
  {(char*)"GetReadAllScalars", PyvtkDataReader_GetReadAllScalars, METH_VARARGS,
   (char*)"V.GetReadAllScalars() -> int\nC++: int GetReadAllScalars()\n\nEnable reading all scalars.\n"},
  {(char*)"ReadAllScalarsOn", PyvtkDataReader_ReadAllScalarsOn, METH_VARARGS,
   (char*)"V.ReadAllScalarsOn()\nC++: void ReadAllScalarsOn()\n\nEnable reading all scalars.\n"},
  {(char*)"ReadAllScalarsOff", PyvtkDataReader_ReadAllScalarsOff, METH_VARARGS,
   (char*)"V.ReadAllScalarsOff()\nC++: void ReadAllScalarsOff()\n\nEnable reading all scalars.\n"},
  {(char*)"SetReadAllVectors", PyvtkDataReader_SetReadAllVectors, METH_VARARGS,
   (char*)"V.SetReadAllVectors(int)\nC++: void SetReadAllVectors(int a)\n\nEnable reading all vectors.\n"},
  {(char*)"GetReadAllVectors", PyvtkDataReader_GetReadAllVectors, METH_VARARGS,
   (char*)"V.GetReadAllVectors() -> int\nC++: int GetReadAllVectors()\n\nEnable reading all vectors.\n"},
  {(char*)"ReadAllVectorsOn", PyvtkDataReader_ReadAllVectorsOn, METH_VARARGS,
   (char*)"V.ReadAllVectorsOn()\nC++: void ReadAllVectorsOn()\n\nEnable reading all vectors.\n"},
  {(char*)"ReadAllVectorsOff", PyvtkDataReader_ReadAllVectorsOff, METH_VARARGS,
   (char*)"V.ReadAllVectorsOff()\nC++: void ReadAllVectorsOff()\n\nEnable reading all vectors.\n"},
  {(char*)"SetReadAllNormals", PyvtkDataReader_SetReadAllNormals, METH_VARARGS,
   (char*)"V.SetReadAllNormals(int)\nC++: void SetReadAllNormals(int a)\n\nEnable reading all normals.\n"},
  {(char*)"GetReadAllNormals", PyvtkDataReader_GetReadAllNormals, METH_VARARGS,
   (char*)"V.GetReadAllNormals() -> int\nC++: int GetReadAllNormals()\n\nEnable reading all normals.\n"},
  {(char*)"ReadAllNormalsOn", PyvtkDataReader_ReadAllNormalsOn, METH_VARARGS,
   (char*)"V.ReadAllNormalsOn()\nC++: void ReadAllNormalsOn()\n\nEnable reading all normals.\n"},
  {(char*)"ReadAllNormalsOff", PyvtkDataReader_ReadAllNormalsOff, METH_VARARGS,
   (char*)"V.ReadAllNormalsOff()\nC++: void ReadAllNormalsOff()\n\nEnable reading all normals.\n"},
  {(char*)"SetReadAllTensors", PyvtkDataReader_SetReadAllTensors, METH_VARARGS,
   (char*)"V.SetReadAllTensors(int)\nC++: void SetReadAllTensors(int a)\n\nEnable reading all tensors.\n"},
  {(char*)"GetReadAllTensors", PyvtkDataReader_GetReadAllTensors, METH_VARARGS,
   (char*)"V.GetReadAllTensors() -> int\nC++: int GetReadAllTensors()\n\nEnable reading all tensors.\n"},
  {(char*)"ReadAllTensorsOn", PyvtkDataReader_ReadAllTensorsOn, METH_VARARGS,
   (char*)"V.ReadAllTensorsOn()\nC++: void ReadAllTensorsOn()\n\nEnable reading all tensors.\n"},
  {(char*)"ReadAllTensorsOff", PyvtkDataReader_ReadAllTensorsOff, METH_VARARGS,
   (char*)"V.ReadAllTensorsOff()\nC++: void ReadAllTensorsOff()\n\nEnable reading all tensors.\n"},
  {(char*)"SetReadAllColorScalars", PyvtkDataReader_SetReadAllColorScalars, METH_VARARGS,
   (char*)"V.SetReadAllColorScalars(int)\nC++: void SetReadAllColorScalars(int a)\n\nEnable reading all color scalars.\n"},
  {(char*)"GetReadAllColorScalars", PyvtkDataReader_GetReadAllColorScalars, METH_VARARGS,
   (char*)"V.GetReadAllColorScalars() -> int\nC++: int GetReadAllColorScalars()\n\nEnable reading all color scalars.\n"},
  {(char*)"ReadAllColorScalarsOn", PyvtkDataReader_ReadAllColorScalarsOn, METH_VARARGS,
   (char*)"V.ReadAllColorScalarsOn()\nC++: void ReadAllColorScalarsOn()\n\nEnable reading all color scalars.\n"},
  {(char*)"ReadAllColorScalarsOff", PyvtkDataReader_ReadAllColorScalarsOff, METH_VARARGS,
   (char*)"V.ReadAllColorScalarsOff()\nC++: void ReadAllColorScalarsOff()\n\nEnable reading all color scalars.\n"},
  {(char*)"SetReadAllTCoords", PyvtkDataReader_SetReadAllTCoords, METH_VARARGS,
   (char*)"V.SetReadAllTCoords(int)\nC++: void SetReadAllTCoords(int a)\n\nEnable reading all tcoords.\n"},
  {(char*)"GetReadAllTCoords", PyvtkDataReader_GetReadAllTCoords, METH_VARARGS,
   (char*)"V.GetReadAllTCoords() -> int\nC++: int GetReadAllTCoords()\n\nEnable reading all tcoords.\n"},
  {(char*)"ReadAllTCoordsOn", PyvtkDataReader_ReadAllTCoordsOn, METH_VARARGS,
   (char*)"V.ReadAllTCoordsOn()\nC++: void ReadAllTCoordsOn()\n\nEnable reading all tcoords.\n"},
  {(char*)"ReadAllTCoordsOff", PyvtkDataReader_ReadAllTCoordsOff, METH_VARARGS,
   (char*)"V.ReadAllTCoordsOff()\nC++: void ReadAllTCoordsOff()\n\nEnable reading all tcoords.\n"},
  {(char*)"SetReadAllFields", PyvtkDataReader_SetReadAllFields, METH_VARARGS,
   (char*)"V.SetReadAllFields(int)\nC++: void SetReadAllFields(int a)\n\nEnable reading all fields.\n"},
  {(char*)"GetReadAllFields", PyvtkDataReader_GetReadAllFields, METH_VARARGS,
   (char*)"V.GetReadAllFields() -> int\nC++: int GetReadAllFields()\n\nEnable reading all fields.\n"},
  {(char*)"ReadAllFieldsOn", PyvtkDataReader_ReadAllFieldsOn, METH_VARARGS,
   (char*)"V.ReadAllFieldsOn()\nC++: void ReadAllFieldsOn()\n\nEnable reading all fields.\n"},
  {(char*)"ReadAllFieldsOff", PyvtkDataReader_ReadAllFieldsOff, METH_VARARGS,
   (char*)"V.ReadAllFieldsOff()\nC++: void ReadAllFieldsOff()\n\nEnable reading all fields.\n"},
  {(char*)"OpenVTKFile", PyvtkDataReader_OpenVTKFile, METH_VARARGS,
   (char*)"V.OpenVTKFile() -> int\nC++: int OpenVTKFile()\n\nOpen a vtk data file. Returns zero if error.\n"},
  {(char*)"ReadHeader", PyvtkDataReader_ReadHeader, METH_VARARGS,
   (char*)"V.ReadHeader() -> int\nC++: int ReadHeader()\n\nRead the header of a vtk data file. Returns 0 if error.\n"},
  {(char*)"ReadCellData", PyvtkDataReader_ReadCellData, METH_VARARGS,
   (char*)"V.ReadCellData(vtkDataSet, int) -> int\nC++: int ReadCellData(vtkDataSet *ds, int numCells)\n\nRead the cell data of a vtk data file. The number of cells (from\nthe dataset) must match the number of cells defined in cell\nattributes (unless no geometry was defined).\n"},
  {(char*)"ReadPointData", PyvtkDataReader_ReadPointData, METH_VARARGS,
   (char*)"V.ReadPointData(vtkDataSet, int) -> int\nC++: int ReadPointData(vtkDataSet *ds, int numPts)\n\nRead the point data of a vtk data file. The number of points\n(from the dataset) must match the number of points defined in\npoint attributes (unless no geometry was defined).\n"},
  {(char*)"ReadPoints", PyvtkDataReader_ReadPoints, METH_VARARGS,
   (char*)"V.ReadPoints(vtkPointSet, int) -> int\nC++: int ReadPoints(vtkPointSet *ps, int numPts)\nV.ReadPoints(vtkGraph, int) -> int\nC++: int ReadPoints(vtkGraph *g, int numPts)\n\nRead point coordinates. Return 0 if error.\n"},
  {(char*)"ReadVertexData", PyvtkDataReader_ReadVertexData, METH_VARARGS,
   (char*)"V.ReadVertexData(vtkGraph, int) -> int\nC++: int ReadVertexData(vtkGraph *g, int numVertices)\n\nRead the vertex data of a vtk data file. The number of vertices\n(from the graph) must match the number of vertices defined in\nvertex attributes (unless no geometry was defined).\n"},
  {(char*)"ReadEdgeData", PyvtkDataReader_ReadEdgeData, METH_VARARGS,
   (char*)"V.ReadEdgeData(vtkGraph, int) -> int\nC++: int ReadEdgeData(vtkGraph *g, int numEdges)\n\nRead the edge data of a vtk data file. The number of edges (from\nthe graph) must match the number of edges defined in edge\nattributes (unless no geometry was defined).\n"},
  {(char*)"ReadRowData", PyvtkDataReader_ReadRowData, METH_VARARGS,
   (char*)"V.ReadRowData(vtkTable, int) -> int\nC++: int ReadRowData(vtkTable *t, int numEdges)\n\nRead the row data of a vtk data file.\n"},
  {(char*)"ReadCells", PyvtkDataReader_ReadCells, METH_VARARGS,
   (char*)"V.ReadCells(int, [int, ...]) -> int\nC++: int ReadCells(int size, int *data)\nV.ReadCells(int, [int, ...], int, int, int) -> int\nC++: int ReadCells(int size, int *data, int skip1, int read2,\n    int skip3)\n\nRead a bunch of \"cells\". Return 0 if error.\n"},
  {(char*)"ReadCoordinates", PyvtkDataReader_ReadCoordinates, METH_VARARGS,
   (char*)"V.ReadCoordinates(vtkRectilinearGrid, int, int) -> int\nC++: int ReadCoordinates(vtkRectilinearGrid *rg, int axes,\n    int numCoords)\n\nRead the coordinates for a rectilinear grid. The axes parameter\nspecifies which coordinate axes (0,1,2) is being read.\n"},
  {(char*)"ReadArray", PyvtkDataReader_ReadArray, METH_VARARGS,
   (char*)"V.ReadArray(string, int, int) -> vtkAbstractArray\nC++: vtkAbstractArray *ReadArray(const char *dataType,\n    int numTuples, int numComp)\n\nHelper functions for reading data.\n"},
  {(char*)"ReadFieldData", PyvtkDataReader_ReadFieldData, METH_VARARGS,
   (char*)"V.ReadFieldData() -> vtkFieldData\nC++: vtkFieldData *ReadFieldData()\n\nHelper functions for reading data.\n"},
  {(char*)"Read", PyvtkDataReader_Read, METH_VARARGS,
   (char*)"V.Read(string) -> int\nC++: int Read(char *)\nV.Read([int, ...]) -> int\nC++: int Read(int *)\nV.Read([int, ...]) -> int\nC++: int Read(long *)\nV.Read([int, ...]) -> int\nC++: int Read(long long *result)\nV.Read([float, ...]) -> int\nC++: int Read(double *)\n\nInternal function to read in a value.  Returns zero if there was\nan error.\n"},
  {(char*)"CloseVTKFile", PyvtkDataReader_CloseVTKFile, METH_VARARGS,
   (char*)"V.CloseVTKFile()\nC++: void CloseVTKFile()\n\nClose the vtk file.\n"},
  {(char*)"ReadLine", PyvtkDataReader_ReadLine, METH_VARARGS,
   (char*)"V.ReadLine([char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char]) -> int\nC++: int ReadLine(char result[256])\n\nInternal function to read in a line up to 256 characters. Returns\nzero if there was an error.\n"},
  {(char*)"ReadString", PyvtkDataReader_ReadString, METH_VARARGS,
   (char*)"V.ReadString([char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char]) -> int\nC++: int ReadString(char result[256])\n\nInternal function to read in a string up to 256 characters.\nReturns zero if there was an error.\n"},
  {(char*)"LowerCase", PyvtkDataReader_LowerCase, METH_VARARGS,
   (char*)"V.LowerCase(string, int) -> string\nC++: char *LowerCase(char *str, const size_t len=256)\n\nHelper method for reading in data.\n"},
  {(char*)"ReadMetaData", PyvtkDataReader_ReadMetaData, METH_VARARGS,
   (char*)"V.ReadMetaData(vtkInformation) -> int\nC++: virtual int ReadMetaData(vtkInformation *)\n\nRead the meta information from the file.  This needs to be public\nto it can be accessed by vtkDataSetReader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataReader_StaticNew()
{
  return vtkDataReader::New();
}

PyObject *PyVTKClass_vtkDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataReader_StaticNew,
    PyvtkDataReader_Methods,
    "vtkDataReader", modulename,
    NULL, NULL,
    PyvtkDataReader_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkDataReader - helper superclass for objects that read vtk data files\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkDataReader is a helper superclass that reads the vtk data file\nheader, dataset type, and attribute data (point and cell attributes\nsuch as scalars, vectors, normals, etc.) from a vtk data file.  See\ntext for the format of the various vtk file types.\n\nSee Also:\n\nvtkPolyDataReader vtkStructuredPointsReader vtkStructuredGridReader\nvtkUnstructuredGridReader vtkRectilinearGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_ASCII", 1 },
        { "VTK_BINARY", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

