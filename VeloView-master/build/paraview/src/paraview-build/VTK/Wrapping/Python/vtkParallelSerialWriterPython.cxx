// python wrapper for vtkParallelSerialWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkParallelSerialWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkParallelSerialWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkParallelSerialWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkParallelSerialWriter_Doc();


static PyObject *
PyvtkParallelSerialWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkParallelSerialWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelSerialWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParallelSerialWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelSerialWriter::NewInstance());

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
PyvtkParallelSerialWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkParallelSerialWriter *tempr = vtkParallelSerialWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  vtkAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetWriter(temp0);
      }
    else
      {
      op->vtkParallelSerialWriter::SetWriter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetWriter() :
      op->vtkParallelSerialWriter::GetWriter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkParallelSerialWriter::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetFileNameMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileNameMethod(temp0);
      }
    else
      {
      op->vtkParallelSerialWriter::SetFileNameMethod(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetFileNameMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileNameMethod() :
      op->vtkParallelSerialWriter::GetFileNameMethod());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

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
      op->vtkParallelSerialWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkParallelSerialWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Write() :
      op->vtkParallelSerialWriter::Write());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPiece() :
      op->vtkParallelSerialWriter::GetPiece());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPiece(temp0);
      }
    else
      {
      op->vtkParallelSerialWriter::SetPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkParallelSerialWriter::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPieces(temp0);
      }
    else
      {
      op->vtkParallelSerialWriter::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkParallelSerialWriter::GetGhostLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGhostLevel(temp0);
      }
    else
      {
      op->vtkParallelSerialWriter::SetGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetPreGatherHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreGatherHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  vtkAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetPreGatherHelper(temp0);
      }
    else
      {
      op->vtkParallelSerialWriter::SetPreGatherHelper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetPreGatherHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreGatherHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetPreGatherHelper() :
      op->vtkParallelSerialWriter::GetPreGatherHelper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetPostGatherHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPostGatherHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  vtkAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetPostGatherHelper(temp0);
      }
    else
      {
      op->vtkParallelSerialWriter::SetPostGatherHelper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetPostGatherHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPostGatherHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetPostGatherHelper() :
      op->vtkParallelSerialWriter::GetPostGatherHelper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWriteAllTimeSteps() :
      op->vtkParallelSerialWriter::GetWriteAllTimeSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteAllTimeSteps(temp0);
      }
    else
      {
      op->vtkParallelSerialWriter::SetWriteAllTimeSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_WriteAllTimeStepsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteAllTimeStepsOn();
      }
    else
      {
      op->vtkParallelSerialWriter::WriteAllTimeStepsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_WriteAllTimeStepsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteAllTimeStepsOff();
      }
    else
      {
      op->vtkParallelSerialWriter::WriteAllTimeStepsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetInterpreter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpreter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  vtkClientServerInterpreter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerInterpreter"))
    {
    if (ap.IsBound())
      {
      op->SetInterpreter(temp0);
      }
    else
      {
      op->vtkParallelSerialWriter::SetInterpreter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkParallelSerialWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkParallelSerialWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParallelSerialWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParallelSerialWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkParallelSerialWriter\nC++: vtkParallelSerialWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParallelSerialWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParallelSerialWriter\nC++: vtkParallelSerialWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWriter", PyvtkParallelSerialWriter_SetWriter, METH_VARARGS,
   (char*)"V.SetWriter(vtkAlgorithm)\nC++: void SetWriter(vtkAlgorithm *)\n\nSet/get the internal writer.\n"},
  {(char*)"GetWriter", PyvtkParallelSerialWriter_GetWriter, METH_VARARGS,
   (char*)"V.GetWriter() -> vtkAlgorithm\nC++: vtkAlgorithm *GetWriter()\n\nSet/get the internal writer.\n"},
  {(char*)"GetMTime", PyvtkParallelSerialWriter_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nReturn the MTime also considering the internal writer.\n"},
  {(char*)"SetFileNameMethod", PyvtkParallelSerialWriter_SetFileNameMethod, METH_VARARGS,
   (char*)"V.SetFileNameMethod(string)\nC++: void SetFileNameMethod(char *)\n\nName of the method used to set the file name of the internal\nwriter. By default, this is SetFileName.\n"},
  {(char*)"GetFileNameMethod", PyvtkParallelSerialWriter_GetFileNameMethod, METH_VARARGS,
   (char*)"V.GetFileNameMethod() -> string\nC++: char *GetFileNameMethod()\n\nName of the method used to set the file name of the internal\nwriter. By default, this is SetFileName.\n"},
  {(char*)"SetFileName", PyvtkParallelSerialWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the name of the output file.\n"},
  {(char*)"GetFileName", PyvtkParallelSerialWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the name of the output file.\n"},
  {(char*)"Write", PyvtkParallelSerialWriter_Write, METH_VARARGS,
   (char*)"V.Write() -> int\nC++: int Write()\n\nInvoke the writer.  Returns 1 for success, 0 for failure.\n"},
  {(char*)"GetPiece", PyvtkParallelSerialWriter_GetPiece, METH_VARARGS,
   (char*)"V.GetPiece() -> int\nC++: int GetPiece()\n\nGet/Set the piece number to write.  The same piece number is used\nfor all inputs.\n"},
  {(char*)"SetPiece", PyvtkParallelSerialWriter_SetPiece, METH_VARARGS,
   (char*)"V.SetPiece(int)\nC++: void SetPiece(int a)\n\nGet/Set the piece number to write.  The same piece number is used\nfor all inputs.\n"},
  {(char*)"GetNumberOfPieces", PyvtkParallelSerialWriter_GetNumberOfPieces, METH_VARARGS,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nGet/Set the number of pieces into which the inputs are split.\n"},
  {(char*)"SetNumberOfPieces", PyvtkParallelSerialWriter_SetNumberOfPieces, METH_VARARGS,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int a)\n\nGet/Set the number of pieces into which the inputs are split.\n"},
  {(char*)"GetGhostLevel", PyvtkParallelSerialWriter_GetGhostLevel, METH_VARARGS,
   (char*)"V.GetGhostLevel() -> int\nC++: int GetGhostLevel()\n\nGet/Set the number of ghost levels to be written.\n"},
  {(char*)"SetGhostLevel", PyvtkParallelSerialWriter_SetGhostLevel, METH_VARARGS,
   (char*)"V.SetGhostLevel(int)\nC++: void SetGhostLevel(int a)\n\nGet/Set the number of ghost levels to be written.\n"},
  {(char*)"SetPreGatherHelper", PyvtkParallelSerialWriter_SetPreGatherHelper, METH_VARARGS,
   (char*)"V.SetPreGatherHelper(vtkAlgorithm)\nC++: void SetPreGatherHelper(vtkAlgorithm *)\n\nGet/Set the pre-reduction helper. Pre-Reduction helper is an\nalgorithm that runs on each node's data before it is sent to the\nroot.\n"},
  {(char*)"GetPreGatherHelper", PyvtkParallelSerialWriter_GetPreGatherHelper, METH_VARARGS,
   (char*)"V.GetPreGatherHelper() -> vtkAlgorithm\nC++: vtkAlgorithm *GetPreGatherHelper()\n\nGet/Set the pre-reduction helper. Pre-Reduction helper is an\nalgorithm that runs on each node's data before it is sent to the\nroot.\n"},
  {(char*)"SetPostGatherHelper", PyvtkParallelSerialWriter_SetPostGatherHelper, METH_VARARGS,
   (char*)"V.SetPostGatherHelper(vtkAlgorithm)\nC++: void SetPostGatherHelper(vtkAlgorithm *)\n\nGet/Set the reduction helper. Reduction helper is an algorithm\nwith multiple input connections, that produces a single output as\nthe reduced output. This is run on the root node to produce a\nresult from the gathered results of each node.\n"},
  {(char*)"GetPostGatherHelper", PyvtkParallelSerialWriter_GetPostGatherHelper, METH_VARARGS,
   (char*)"V.GetPostGatherHelper() -> vtkAlgorithm\nC++: vtkAlgorithm *GetPostGatherHelper()\n\nGet/Set the reduction helper. Reduction helper is an algorithm\nwith multiple input connections, that produces a single output as\nthe reduced output. This is run on the root node to produce a\nresult from the gathered results of each node.\n"},
  {(char*)"GetWriteAllTimeSteps", PyvtkParallelSerialWriter_GetWriteAllTimeSteps, METH_VARARGS,
   (char*)"V.GetWriteAllTimeSteps() -> int\nC++: int GetWriteAllTimeSteps()\n\nMust be set to true to write all timesteps, otherwise only the\ncurrent timestep will be written out. Off by default.\n"},
  {(char*)"SetWriteAllTimeSteps", PyvtkParallelSerialWriter_SetWriteAllTimeSteps, METH_VARARGS,
   (char*)"V.SetWriteAllTimeSteps(int)\nC++: void SetWriteAllTimeSteps(int a)\n\nMust be set to true to write all timesteps, otherwise only the\ncurrent timestep will be written out. Off by default.\n"},
  {(char*)"WriteAllTimeStepsOn", PyvtkParallelSerialWriter_WriteAllTimeStepsOn, METH_VARARGS,
   (char*)"V.WriteAllTimeStepsOn()\nC++: void WriteAllTimeStepsOn()\n\nMust be set to true to write all timesteps, otherwise only the\ncurrent timestep will be written out. Off by default.\n"},
  {(char*)"WriteAllTimeStepsOff", PyvtkParallelSerialWriter_WriteAllTimeStepsOff, METH_VARARGS,
   (char*)"V.WriteAllTimeStepsOff()\nC++: void WriteAllTimeStepsOff()\n\nMust be set to true to write all timesteps, otherwise only the\ncurrent timestep will be written out. Off by default.\n"},
  {(char*)"SetInterpreter", PyvtkParallelSerialWriter_SetInterpreter, METH_VARARGS,
   (char*)"V.SetInterpreter(vtkClientServerInterpreter)\nC++: void SetInterpreter(vtkClientServerInterpreter *interp)\n\nGet/Set the interpreter to use to call methods on the writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParallelSerialWriter_StaticNew()
{
  return vtkParallelSerialWriter::New();
}

PyObject *PyVTKClass_vtkParallelSerialWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParallelSerialWriter_StaticNew,
    PyvtkParallelSerialWriter_Methods,
    "vtkParallelSerialWriter", modulename,
    NULL, NULL,
    PyvtkParallelSerialWriter_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkParallelSerialWriter_Doc()
{
  static const char *docstring[] = {
    "vtkParallelSerialWriter - parallel meta-writer for serial formats\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkParallelSerialWriter is a meta-writer that enables serial writers\nto work in parallel. It gathers data to the 1st node and invokes the\ninternal writer. The reduction is controlled defined by the\nPreGatherHelper and PostGatherHelper. This also makes it possible to\nwrite time-series for temporal datasets using simple non-time-aware\nwriters.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParallelSerialWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParallelSerialWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParallelSerialWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

