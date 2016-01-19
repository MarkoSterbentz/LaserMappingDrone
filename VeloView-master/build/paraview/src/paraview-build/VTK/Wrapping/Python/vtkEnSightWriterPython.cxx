// python wrapper for vtkEnSightWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEnSightWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEnSightWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEnSightWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkEnSightWriter_Doc();


static PyObject *
PyvtkEnSightWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEnSightWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnSightWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEnSightWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnSightWriter::NewInstance());

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
PyvtkEnSightWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEnSightWriter *tempr = vtkEnSightWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetProcessNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessNumber(temp0);
      }
    else
      {
      op->vtkEnSightWriter::SetProcessNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetProcessNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessNumber() :
      op->vtkEnSightWriter::GetProcessNumber());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPath(temp0);
      }
    else
      {
      op->vtkEnSightWriter::SetPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPath() :
      op->vtkEnSightWriter::GetPath());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBaseName(temp0);
      }
    else
      {
      op->vtkEnSightWriter::SetBaseName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetBaseName() :
      op->vtkEnSightWriter::GetBaseName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

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
      op->vtkEnSightWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkEnSightWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

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
      op->vtkEnSightWriter::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkEnSightWriter::GetTimeStep());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

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
      op->vtkEnSightWriter::SetGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkEnSightWriter::GetGhostLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetTransientGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransientGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTransientGeometry(temp0);
      }
    else
      {
      op->vtkEnSightWriter::SetTransientGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetTransientGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransientGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetTransientGeometry() :
      op->vtkEnSightWriter::GetTransientGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfBlocks(temp0);
      }
    else
      {
      op->vtkEnSightWriter::SetNumberOfBlocks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocks() :
      op->vtkEnSightWriter::GetNumberOfBlocks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetBlockIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

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

    if (ap.IsBound())
      {
      op->SetBlockIDs(temp0);
      }
    else
      {
      op->vtkEnSightWriter::SetBlockIDs(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetBlockIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetBlockIDs() :
      op->vtkEnSightWriter::GetBlockIDs());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  vtkUnstructuredGrid *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkEnSightWriter::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkEnSightWriter::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_WriteCaseFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteCaseFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->WriteCaseFile(temp0);
      }
    else
      {
      op->vtkEnSightWriter::WriteCaseFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_WriteSOSCaseFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteSOSCaseFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->WriteSOSCaseFile(temp0);
      }
    else
      {
      op->vtkEnSightWriter::WriteSOSCaseFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkEnSightWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkEnSightWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEnSightWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEnSightWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEnSightWriter\nC++: vtkEnSightWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEnSightWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEnSightWriter\nC++: vtkEnSightWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetProcessNumber", PyvtkEnSightWriter_SetProcessNumber, METH_VARARGS,
   (char*)"V.SetProcessNumber(int)\nC++: void SetProcessNumber(int a)\n\n"},
  {(char*)"GetProcessNumber", PyvtkEnSightWriter_GetProcessNumber, METH_VARARGS,
   (char*)"V.GetProcessNumber() -> int\nC++: int GetProcessNumber()\n\n"},
  {(char*)"SetPath", PyvtkEnSightWriter_SetPath, METH_VARARGS,
   (char*)"V.SetPath(string)\nC++: void SetPath(char *)\n\nSpecify path of EnSight data files to write.\n"},
  {(char*)"GetPath", PyvtkEnSightWriter_GetPath, METH_VARARGS,
   (char*)"V.GetPath() -> string\nC++: char *GetPath()\n\nSpecify path of EnSight data files to write.\n"},
  {(char*)"SetBaseName", PyvtkEnSightWriter_SetBaseName, METH_VARARGS,
   (char*)"V.SetBaseName(string)\nC++: void SetBaseName(char *)\n\nSpecify base name of EnSight data files to write.\n"},
  {(char*)"GetBaseName", PyvtkEnSightWriter_GetBaseName, METH_VARARGS,
   (char*)"V.GetBaseName() -> string\nC++: char *GetBaseName()\n\nSpecify base name of EnSight data files to write.\n"},
  {(char*)"SetFileName", PyvtkEnSightWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify the path and base name of the output files.\n"},
  {(char*)"GetFileName", PyvtkEnSightWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify the path and base name of the output files.\n"},
  {(char*)"SetTimeStep", PyvtkEnSightWriter_SetTimeStep, METH_VARARGS,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(int a)\n\n"},
  {(char*)"GetTimeStep", PyvtkEnSightWriter_GetTimeStep, METH_VARARGS,
   (char*)"V.GetTimeStep() -> int\nC++: int GetTimeStep()\n\n"},
  {(char*)"SetGhostLevel", PyvtkEnSightWriter_SetGhostLevel, METH_VARARGS,
   (char*)"V.SetGhostLevel(int)\nC++: void SetGhostLevel(int a)\n\n"},
  {(char*)"GetGhostLevel", PyvtkEnSightWriter_GetGhostLevel, METH_VARARGS,
   (char*)"V.GetGhostLevel() -> int\nC++: int GetGhostLevel()\n\n"},
  {(char*)"SetTransientGeometry", PyvtkEnSightWriter_SetTransientGeometry, METH_VARARGS,
   (char*)"V.SetTransientGeometry(bool)\nC++: void SetTransientGeometry(bool a)\n\n"},
  {(char*)"GetTransientGeometry", PyvtkEnSightWriter_GetTransientGeometry, METH_VARARGS,
   (char*)"V.GetTransientGeometry() -> bool\nC++: bool GetTransientGeometry()\n\n"},
  {(char*)"SetNumberOfBlocks", PyvtkEnSightWriter_SetNumberOfBlocks, METH_VARARGS,
   (char*)"V.SetNumberOfBlocks(int)\nC++: void SetNumberOfBlocks(int a)\n\n"},
  {(char*)"GetNumberOfBlocks", PyvtkEnSightWriter_GetNumberOfBlocks, METH_VARARGS,
   (char*)"V.GetNumberOfBlocks() -> int\nC++: int GetNumberOfBlocks()\n\n"},
  {(char*)"SetBlockIDs", PyvtkEnSightWriter_SetBlockIDs, METH_VARARGS,
   (char*)"V.SetBlockIDs([int, ...])\nC++: virtual void SetBlockIDs(int *val)\n\n"},
  {(char*)"GetBlockIDs", PyvtkEnSightWriter_GetBlockIDs, METH_VARARGS,
   (char*)"V.GetBlockIDs() -> (int, ...)\nC++: virtual int *GetBlockIDs()\n\n"},
  {(char*)"SetInputData", PyvtkEnSightWriter_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkUnstructuredGrid)\nC++: virtual void SetInputData(vtkUnstructuredGrid *input)\n\nSpecify the input data or filter.\n"},
  {(char*)"GetInput", PyvtkEnSightWriter_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkUnstructuredGrid\nC++: virtual vtkUnstructuredGrid *GetInput()\n\nSpecify the input data or filter.\n"},
  {(char*)"WriteCaseFile", PyvtkEnSightWriter_WriteCaseFile, METH_VARARGS,
   (char*)"V.WriteCaseFile(int)\nC++: virtual void WriteCaseFile(int TotalTimeSteps)\n\n"},
  {(char*)"WriteSOSCaseFile", PyvtkEnSightWriter_WriteSOSCaseFile, METH_VARARGS,
   (char*)"V.WriteSOSCaseFile(int)\nC++: virtual void WriteSOSCaseFile(int NumProcs)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEnSightWriter_StaticNew()
{
  return vtkEnSightWriter::New();
}

PyObject *PyVTKClass_vtkEnSightWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEnSightWriter_StaticNew,
    PyvtkEnSightWriter_Methods,
    "vtkEnSightWriter", modulename,
    NULL, NULL,
    PyvtkEnSightWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkEnSightWriter_Doc()
{
  static const char *docstring[] = {
    "vtkEnSightWriter - write vtk unstructured grid data as an EnSight file\n\n",
    "Superclass: vtkWriter\n\n",
    "vtkEnSightWriter is a source object that writes binary unstructured\ngrid data files in EnSight format. See EnSight Manual for format\ndetails\n\nCaveats:\n\nBinary files written on one system may not be readable on other\nsystems. Be sure to specify the endian-ness of the file when reading\nit into EnSight\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEnSightWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEnSightWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEnSightWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

