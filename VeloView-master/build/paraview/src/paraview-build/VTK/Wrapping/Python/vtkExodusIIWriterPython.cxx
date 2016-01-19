// python wrapper for vtkExodusIIWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExodusIIWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExodusIIWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExodusIIWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkExodusIIWriter_Doc();


static PyObject *
PyvtkExodusIIWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExodusIIWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExodusIIWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExodusIIWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExodusIIWriter::NewInstance());

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
PyvtkExodusIIWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExodusIIWriter *tempr = vtkExodusIIWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetModelMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  vtkModelMetadata *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkModelMetadata"))
    {
    if (ap.IsBound())
      {
      op->SetModelMetadata(temp0);
      }
    else
      {
      op->vtkExodusIIWriter::SetModelMetadata(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetModelMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkModelMetadata *tempr = (ap.IsBound() ?
      op->GetModelMetadata() :
      op->vtkExodusIIWriter::GetModelMetadata());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

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
      op->vtkExodusIIWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkExodusIIWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetStoreDoubles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStoreDoubles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStoreDoubles(temp0);
      }
    else
      {
      op->vtkExodusIIWriter::SetStoreDoubles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetStoreDoubles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStoreDoubles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStoreDoubles() :
      op->vtkExodusIIWriter::GetStoreDoubles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

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
      op->vtkExodusIIWriter::SetGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkExodusIIWriter::GetGhostLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetWriteOutBlockIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteOutBlockIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteOutBlockIdArray(temp0);
      }
    else
      {
      op->vtkExodusIIWriter::SetWriteOutBlockIdArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetWriteOutBlockIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteOutBlockIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWriteOutBlockIdArray() :
      op->vtkExodusIIWriter::GetWriteOutBlockIdArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_WriteOutBlockIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteOutBlockIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteOutBlockIdArrayOn();
      }
    else
      {
      op->vtkExodusIIWriter::WriteOutBlockIdArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_WriteOutBlockIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteOutBlockIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteOutBlockIdArrayOff();
      }
    else
      {
      op->vtkExodusIIWriter::WriteOutBlockIdArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetWriteOutGlobalNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteOutGlobalNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteOutGlobalNodeIdArray(temp0);
      }
    else
      {
      op->vtkExodusIIWriter::SetWriteOutGlobalNodeIdArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetWriteOutGlobalNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteOutGlobalNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWriteOutGlobalNodeIdArray() :
      op->vtkExodusIIWriter::GetWriteOutGlobalNodeIdArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_WriteOutGlobalNodeIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteOutGlobalNodeIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteOutGlobalNodeIdArrayOn();
      }
    else
      {
      op->vtkExodusIIWriter::WriteOutGlobalNodeIdArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_WriteOutGlobalNodeIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteOutGlobalNodeIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteOutGlobalNodeIdArrayOff();
      }
    else
      {
      op->vtkExodusIIWriter::WriteOutGlobalNodeIdArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetWriteOutGlobalElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteOutGlobalElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteOutGlobalElementIdArray(temp0);
      }
    else
      {
      op->vtkExodusIIWriter::SetWriteOutGlobalElementIdArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetWriteOutGlobalElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteOutGlobalElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWriteOutGlobalElementIdArray() :
      op->vtkExodusIIWriter::GetWriteOutGlobalElementIdArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_WriteOutGlobalElementIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteOutGlobalElementIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteOutGlobalElementIdArrayOn();
      }
    else
      {
      op->vtkExodusIIWriter::WriteOutGlobalElementIdArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_WriteOutGlobalElementIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteOutGlobalElementIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteOutGlobalElementIdArrayOff();
      }
    else
      {
      op->vtkExodusIIWriter::WriteOutGlobalElementIdArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

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
      op->vtkExodusIIWriter::SetWriteAllTimeSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWriteAllTimeSteps() :
      op->vtkExodusIIWriter::GetWriteAllTimeSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_WriteAllTimeStepsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteAllTimeStepsOn();
      }
    else
      {
      op->vtkExodusIIWriter::WriteAllTimeStepsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_WriteAllTimeStepsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteAllTimeStepsOff();
      }
    else
      {
      op->vtkExodusIIWriter::WriteAllTimeStepsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetBlockIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBlockIdArrayName(temp0);
      }
    else
      {
      op->vtkExodusIIWriter::SetBlockIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetBlockIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetBlockIdArrayName() :
      op->vtkExodusIIWriter::GetBlockIdArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkExodusIIWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExodusIIWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExodusIIWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExodusIIWriter\nC++: vtkExodusIIWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExodusIIWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExodusIIWriter\nC++: vtkExodusIIWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetModelMetadata", PyvtkExodusIIWriter_SetModelMetadata, METH_VARARGS,
   (char*)"V.SetModelMetadata(vtkModelMetadata)\nC++: void SetModelMetadata(vtkModelMetadata *)\n\nSpecify the vtkModelMetadata object which contains the Exodus\nfile model information (metadata) absent in the\nvtkUnstructuredGrid.  If you have this object, you don't need to\nset any other values before writing. (Just the FileName and the\nInput.) Note that the vtkExodusReader can create and attach a\nvtkModelMetadata object to it's output.  If this has happened,\nthe ExodusIIWriter will find it and use it.\n"},
  {(char*)"GetModelMetadata", PyvtkExodusIIWriter_GetModelMetadata, METH_VARARGS,
   (char*)"V.GetModelMetadata() -> vtkModelMetadata\nC++: vtkModelMetadata *GetModelMetadata()\n\nSpecify the vtkModelMetadata object which contains the Exodus\nfile model information (metadata) absent in the\nvtkUnstructuredGrid.  If you have this object, you don't need to\nset any other values before writing. (Just the FileName and the\nInput.) Note that the vtkExodusReader can create and attach a\nvtkModelMetadata object to it's output.  If this has happened,\nthe ExodusIIWriter will find it and use it.\n"},
  {(char*)"SetFileName", PyvtkExodusIIWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nName for the output file.  If writing in parallel, the number\n  of processes and the process rank will be appended to the name,\n  so each process is writing out a separate file.\n  If not set, this class will make up a file name.\n"},
  {(char*)"GetFileName", PyvtkExodusIIWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nName for the output file.  If writing in parallel, the number\n  of processes and the process rank will be appended to the name,\n  so each process is writing out a separate file.\n  If not set, this class will make up a file name.\n"},
  {(char*)"SetStoreDoubles", PyvtkExodusIIWriter_SetStoreDoubles, METH_VARARGS,
   (char*)"V.SetStoreDoubles(int)\nC++: void SetStoreDoubles(int a)\n\nIf StoreDoubles is ON, the floating point fields in the Exodus\nfile\n  will be double precision fields.  The default is determined by\nthe\n  max precision of the input.  If the field data appears to be\ndoubles,\n  then StoreDoubles will be ON, otherwise StoreDoubles will be\nOFF.\n"},
  {(char*)"GetStoreDoubles", PyvtkExodusIIWriter_GetStoreDoubles, METH_VARARGS,
   (char*)"V.GetStoreDoubles() -> int\nC++: int GetStoreDoubles()\n\nIf StoreDoubles is ON, the floating point fields in the Exodus\nfile\n  will be double precision fields.  The default is determined by\nthe\n  max precision of the input.  If the field data appears to be\ndoubles,\n  then StoreDoubles will be ON, otherwise StoreDoubles will be\nOFF.\n"},
  {(char*)"SetGhostLevel", PyvtkExodusIIWriter_SetGhostLevel, METH_VARARGS,
   (char*)"V.SetGhostLevel(int)\nC++: void SetGhostLevel(int a)\n\nWe never write out ghost cells.  This variable is here to satisfy\n  the behavior of ParaView on invoking a parallel writer.\n"},
  {(char*)"GetGhostLevel", PyvtkExodusIIWriter_GetGhostLevel, METH_VARARGS,
   (char*)"V.GetGhostLevel() -> int\nC++: int GetGhostLevel()\n\nWe never write out ghost cells.  This variable is here to satisfy\n  the behavior of ParaView on invoking a parallel writer.\n"},
  {(char*)"SetWriteOutBlockIdArray", PyvtkExodusIIWriter_SetWriteOutBlockIdArray, METH_VARARGS,
   (char*)"V.SetWriteOutBlockIdArray(int)\nC++: void SetWriteOutBlockIdArray(int a)\n\nBy default, the integer array containing the global Block Ids of\nthe\n  cells is not included when the new Exodus II file is written\nout.  If\n  you do want to include this array, set WriteOutBlockIdArray to\nON.\n"},
  {(char*)"GetWriteOutBlockIdArray", PyvtkExodusIIWriter_GetWriteOutBlockIdArray, METH_VARARGS,
   (char*)"V.GetWriteOutBlockIdArray() -> int\nC++: int GetWriteOutBlockIdArray()\n\nBy default, the integer array containing the global Block Ids of\nthe\n  cells is not included when the new Exodus II file is written\nout.  If\n  you do want to include this array, set WriteOutBlockIdArray to\nON.\n"},
  {(char*)"WriteOutBlockIdArrayOn", PyvtkExodusIIWriter_WriteOutBlockIdArrayOn, METH_VARARGS,
   (char*)"V.WriteOutBlockIdArrayOn()\nC++: void WriteOutBlockIdArrayOn()\n\nBy default, the integer array containing the global Block Ids of\nthe\n  cells is not included when the new Exodus II file is written\nout.  If\n  you do want to include this array, set WriteOutBlockIdArray to\nON.\n"},
  {(char*)"WriteOutBlockIdArrayOff", PyvtkExodusIIWriter_WriteOutBlockIdArrayOff, METH_VARARGS,
   (char*)"V.WriteOutBlockIdArrayOff()\nC++: void WriteOutBlockIdArrayOff()\n\nBy default, the integer array containing the global Block Ids of\nthe\n  cells is not included when the new Exodus II file is written\nout.  If\n  you do want to include this array, set WriteOutBlockIdArray to\nON.\n"},
  {(char*)"SetWriteOutGlobalNodeIdArray", PyvtkExodusIIWriter_SetWriteOutGlobalNodeIdArray, METH_VARARGS,
   (char*)"V.SetWriteOutGlobalNodeIdArray(int)\nC++: void SetWriteOutGlobalNodeIdArray(int a)\n\nBy default, the integer array containing the global Node Ids\n  is not included when the new Exodus II file is written out.  If\n  you do want to include this array, set\nWriteOutGlobalNodeIdArray to ON.\n"},
  {(char*)"GetWriteOutGlobalNodeIdArray", PyvtkExodusIIWriter_GetWriteOutGlobalNodeIdArray, METH_VARARGS,
   (char*)"V.GetWriteOutGlobalNodeIdArray() -> int\nC++: int GetWriteOutGlobalNodeIdArray()\n\nBy default, the integer array containing the global Node Ids\n  is not included when the new Exodus II file is written out.  If\n  you do want to include this array, set\nWriteOutGlobalNodeIdArray to ON.\n"},
  {(char*)"WriteOutGlobalNodeIdArrayOn", PyvtkExodusIIWriter_WriteOutGlobalNodeIdArrayOn, METH_VARARGS,
   (char*)"V.WriteOutGlobalNodeIdArrayOn()\nC++: void WriteOutGlobalNodeIdArrayOn()\n\nBy default, the integer array containing the global Node Ids\n  is not included when the new Exodus II file is written out.  If\n  you do want to include this array, set\nWriteOutGlobalNodeIdArray to ON.\n"},
  {(char*)"WriteOutGlobalNodeIdArrayOff", PyvtkExodusIIWriter_WriteOutGlobalNodeIdArrayOff, METH_VARARGS,
   (char*)"V.WriteOutGlobalNodeIdArrayOff()\nC++: void WriteOutGlobalNodeIdArrayOff()\n\nBy default, the integer array containing the global Node Ids\n  is not included when the new Exodus II file is written out.  If\n  you do want to include this array, set\nWriteOutGlobalNodeIdArray to ON.\n"},
  {(char*)"SetWriteOutGlobalElementIdArray", PyvtkExodusIIWriter_SetWriteOutGlobalElementIdArray, METH_VARARGS,
   (char*)"V.SetWriteOutGlobalElementIdArray(int)\nC++: void SetWriteOutGlobalElementIdArray(int a)\n\nBy default, the integer array containing the global Element Ids\n  is not included when the new Exodus II file is written out.  If\nyou\n  do want to include this array, set WriteOutGlobalElementIdArray\nto ON.\n"},
  {(char*)"GetWriteOutGlobalElementIdArray", PyvtkExodusIIWriter_GetWriteOutGlobalElementIdArray, METH_VARARGS,
   (char*)"V.GetWriteOutGlobalElementIdArray() -> int\nC++: int GetWriteOutGlobalElementIdArray()\n\nBy default, the integer array containing the global Element Ids\n  is not included when the new Exodus II file is written out.  If\nyou\n  do want to include this array, set WriteOutGlobalElementIdArray\nto ON.\n"},
  {(char*)"WriteOutGlobalElementIdArrayOn", PyvtkExodusIIWriter_WriteOutGlobalElementIdArrayOn, METH_VARARGS,
   (char*)"V.WriteOutGlobalElementIdArrayOn()\nC++: void WriteOutGlobalElementIdArrayOn()\n\nBy default, the integer array containing the global Element Ids\n  is not included when the new Exodus II file is written out.  If\nyou\n  do want to include this array, set WriteOutGlobalElementIdArray\nto ON.\n"},
  {(char*)"WriteOutGlobalElementIdArrayOff", PyvtkExodusIIWriter_WriteOutGlobalElementIdArrayOff, METH_VARARGS,
   (char*)"V.WriteOutGlobalElementIdArrayOff()\nC++: void WriteOutGlobalElementIdArrayOff()\n\nBy default, the integer array containing the global Element Ids\n  is not included when the new Exodus II file is written out.  If\nyou\n  do want to include this array, set WriteOutGlobalElementIdArray\nto ON.\n"},
  {(char*)"SetWriteAllTimeSteps", PyvtkExodusIIWriter_SetWriteAllTimeSteps, METH_VARARGS,
   (char*)"V.SetWriteAllTimeSteps(int)\nC++: void SetWriteAllTimeSteps(int a)\n\nWhen WriteAllTimeSteps is turned ON, the writer is executed once\nfor\n   each timestep available from the reader.\n"},
  {(char*)"GetWriteAllTimeSteps", PyvtkExodusIIWriter_GetWriteAllTimeSteps, METH_VARARGS,
   (char*)"V.GetWriteAllTimeSteps() -> int\nC++: int GetWriteAllTimeSteps()\n\nWhen WriteAllTimeSteps is turned ON, the writer is executed once\nfor\n   each timestep available from the reader.\n"},
  {(char*)"WriteAllTimeStepsOn", PyvtkExodusIIWriter_WriteAllTimeStepsOn, METH_VARARGS,
   (char*)"V.WriteAllTimeStepsOn()\nC++: void WriteAllTimeStepsOn()\n\nWhen WriteAllTimeSteps is turned ON, the writer is executed once\nfor\n   each timestep available from the reader.\n"},
  {(char*)"WriteAllTimeStepsOff", PyvtkExodusIIWriter_WriteAllTimeStepsOff, METH_VARARGS,
   (char*)"V.WriteAllTimeStepsOff()\nC++: void WriteAllTimeStepsOff()\n\nWhen WriteAllTimeSteps is turned ON, the writer is executed once\nfor\n   each timestep available from the reader.\n"},
  {(char*)"SetBlockIdArrayName", PyvtkExodusIIWriter_SetBlockIdArrayName, METH_VARARGS,
   (char*)"V.SetBlockIdArrayName(string)\nC++: void SetBlockIdArrayName(char *)\n\n"},
  {(char*)"GetBlockIdArrayName", PyvtkExodusIIWriter_GetBlockIdArrayName, METH_VARARGS,
   (char*)"V.GetBlockIdArrayName() -> string\nC++: char *GetBlockIdArrayName()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExodusIIWriter_StaticNew()
{
  return vtkExodusIIWriter::New();
}

PyObject *PyVTKClass_vtkExodusIIWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExodusIIWriter_StaticNew,
    PyvtkExodusIIWriter_Methods,
    "vtkExodusIIWriter", modulename,
    NULL, NULL,
    PyvtkExodusIIWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkExodusIIWriter_Doc()
{
  static const char *docstring[] = {
    "vtkExodusIIWriter - Write Exodus II files\n\n",
    "Superclass: vtkWriter\n\n",
    "This is a vtkWriter that writes it's vtkUnstructuredGrid\n    input out to an Exodus II file.  Go to\nhttp://endo.sandia.gov/SEACAS/\n    for more information about the Exodus II format.\n\n\n    Exodus files contain much information that is not captured\n    in a vtkUnstructuredGrid, such as time steps, information\n    lines, node sets, and side sets.  This information can be\n    stored in a vtkModelMet",
    "adata object.\n\n\n    The vtkExodusReader and vtkPExodusReader can create\n    a vtkModelMetadata object and embed it in a vtkUnstructuredGrid\n    in a series of field arrays.  This writer searches for these\n    field arrays and will use the metadata contained in them\n    when creating the new Exodus II file.\n\n\n    You can also explicitly give the vtkExodusIIWriter a\n    vtkModelMetadata object to us",
    "e when writing the file.\n\n\n    In the absence of the information provided by vtkModelMetadata,\n    if this writer is not part of a parallel application, we will use\n    reasonable defaults for all the values in the output Exodus file.\n    If you don't provide a block ID element array, we'll create a\n    block for each cell type that appears in the unstructured grid.\n\n\n    However if this writer is",
    " part of a parallel application (hence\n    writing out a distributed Exodus file), then we need at the very\n    least a list of all the block IDs that appear in the file.  And\n    we need the element array of block IDs for the input unstructured\ngrid.\n\n\n    In the absence of a vtkModelMetadata object, you can also provide\n    time step information which we will include in the output Exodus\n    fil",
    "e.\n\nCaveats:\n\n\n    If the input floating point field arrays and point locations are\nall\n    floats or all doubles, this class will operate more efficiently.\n    Mixing floats and doubles will slow you down, because Exodus II\n    requires that we write only floats or only doubles.\n\n\n    We use the terms \"point\" and \"node\" interchangeably.\n    Also, we use the terms \"element\" and \"cell\" interchangea",
    "bly.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExodusIIWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExodusIIWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExodusIIWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

