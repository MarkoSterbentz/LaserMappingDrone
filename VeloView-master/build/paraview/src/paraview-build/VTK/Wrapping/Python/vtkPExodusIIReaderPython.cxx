// python wrapper for vtkPExodusIIReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPExodusIIReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPExodusIIReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPExodusIIReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExodusIIReaderNew
extern "C" { PyObject *PyVTKClass_vtkExodusIIReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkExodusIIReaderNew
#endif

static const char **PyvtkPExodusIIReader_Doc();


static PyObject *
PyvtkPExodusIIReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPExodusIIReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPExodusIIReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPExodusIIReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPExodusIIReader::NewInstance());

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
PyvtkPExodusIIReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPExodusIIReader *tempr = vtkPExodusIIReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPExodusIIReader::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPExodusIIReader::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePattern(temp0);
      }
    else
      {
      op->vtkPExodusIIReader::SetFilePattern(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFilePattern() :
      op->vtkPExodusIIReader::GetFilePattern());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePrefix(temp0);
      }
    else
      {
      op->vtkPExodusIIReader::SetFilePrefix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFilePrefix() :
      op->vtkPExodusIIReader::GetFilePrefix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SetFileRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFileRange(temp0, temp1);
      }
    else
      {
      op->vtkPExodusIIReader::SetFileRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPExodusIIReader_SetFileRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

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
      op->SetFileRange(temp0);
      }
    else
      {
      op->vtkPExodusIIReader::SetFileRange(temp0);
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
PyvtkPExodusIIReader_SetFileRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPExodusIIReader_SetFileRange_s1(self, args);
    case 1:
      return PyvtkPExodusIIReader_SetFileRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetFileRange");
  return NULL;
}



static PyObject *
PyvtkPExodusIIReader_GetFileRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetFileRange() :
      op->vtkPExodusIIReader::GetFileRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

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
      op->vtkPExodusIIReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetNumberOfFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFileNames() :
      op->vtkPExodusIIReader::GetNumberOfFileNames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetNumberOfFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFiles() :
      op->vtkPExodusIIReader::GetNumberOfFiles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetTotalNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalNumberOfElements() :
      op->vtkPExodusIIReader::GetTotalNumberOfElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetTotalNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalNumberOfNodes() :
      op->vtkPExodusIIReader::GetTotalNumberOfNodes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_UpdateTimeInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTimeInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateTimeInformation();
      }
    else
      {
      op->vtkPExodusIIReader::UpdateTimeInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_Broadcast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->Broadcast(temp0);
      }
    else
      {
      op->vtkPExodusIIReader::Broadcast(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetVariableCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVariableCacheSize() :
      op->vtkPExodusIIReader::GetVariableCacheSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SetVariableCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVariableCacheSize(temp0);
      }
    else
      {
      op->vtkPExodusIIReader::SetVariableCacheSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPExodusIIReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPExodusIIReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPExodusIIReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPExodusIIReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPExodusIIReader\nC++: vtkPExodusIIReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPExodusIIReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPExodusIIReader\nC++: vtkPExodusIIReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPExodusIIReader_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/get the communication object used to relay a list of files\nfrom the rank 0 process to all others. This is the only\ninterprocess communication required by vtkPExodusIIReader.\n"},
  {(char*)"GetController", PyvtkPExodusIIReader_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/get the communication object used to relay a list of files\nfrom the rank 0 process to all others. This is the only\ninterprocess communication required by vtkPExodusIIReader.\n"},
  {(char*)"SetFilePattern", PyvtkPExodusIIReader_SetFilePattern, METH_VARARGS,
   (char*)"V.SetFilePattern(string)\nC++: void SetFilePattern(char *)\n\nThese methods tell the reader that the data is distributed across\nmultiple files. This is for distributed execution. It this case,\npieces are mapped to files. The pattern should have one %d to\nformat the file number. FileNumberRange is used to generate file\nnumbers. I was thinking of having an arbitrary list of file\nnumbers. This may happen in the future. (That is why there is no\nGetFileNumberRange method.\n"},
  {(char*)"GetFilePattern", PyvtkPExodusIIReader_GetFilePattern, METH_VARARGS,
   (char*)"V.GetFilePattern() -> string\nC++: char *GetFilePattern()\n\nThese methods tell the reader that the data is distributed across\nmultiple files. This is for distributed execution. It this case,\npieces are mapped to files. The pattern should have one %d to\nformat the file number. FileNumberRange is used to generate file\nnumbers. I was thinking of having an arbitrary list of file\nnumbers. This may happen in the future. (That is why there is no\nGetFileNumberRange method.\n"},
  {(char*)"SetFilePrefix", PyvtkPExodusIIReader_SetFilePrefix, METH_VARARGS,
   (char*)"V.SetFilePrefix(string)\nC++: void SetFilePrefix(char *)\n\nThese methods tell the reader that the data is distributed across\nmultiple files. This is for distributed execution. It this case,\npieces are mapped to files. The pattern should have one %d to\nformat the file number. FileNumberRange is used to generate file\nnumbers. I was thinking of having an arbitrary list of file\nnumbers. This may happen in the future. (That is why there is no\nGetFileNumberRange method.\n"},
  {(char*)"GetFilePrefix", PyvtkPExodusIIReader_GetFilePrefix, METH_VARARGS,
   (char*)"V.GetFilePrefix() -> string\nC++: char *GetFilePrefix()\n\nThese methods tell the reader that the data is distributed across\nmultiple files. This is for distributed execution. It this case,\npieces are mapped to files. The pattern should have one %d to\nformat the file number. FileNumberRange is used to generate file\nnumbers. I was thinking of having an arbitrary list of file\nnumbers. This may happen in the future. (That is why there is no\nGetFileNumberRange method.\n"},
  {(char*)"SetFileRange", PyvtkPExodusIIReader_SetFileRange, METH_VARARGS,
   (char*)"V.SetFileRange(int, int)\nC++: void SetFileRange(int, int)\nV.SetFileRange([int, ...])\nC++: void SetFileRange(int *r)\n\nSet the range of files that are being loaded. The range for\nsingle file should add to 0.\n"},
  {(char*)"GetFileRange", PyvtkPExodusIIReader_GetFileRange, METH_VARARGS,
   (char*)"V.GetFileRange() -> (int, int)\nC++: int *GetFileRange()\n\n"},
  {(char*)"SetFileName", PyvtkPExodusIIReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: virtual void SetFileName(const char *name)\n\n"},
  {(char*)"GetNumberOfFileNames", PyvtkPExodusIIReader_GetNumberOfFileNames, METH_VARARGS,
   (char*)"V.GetNumberOfFileNames() -> int\nC++: int GetNumberOfFileNames()\n\nReturn number of file names set in SetFileNames\n"},
  {(char*)"GetNumberOfFiles", PyvtkPExodusIIReader_GetNumberOfFiles, METH_VARARGS,
   (char*)"V.GetNumberOfFiles() -> int\nC++: int GetNumberOfFiles()\n\nReturn the number of files to be read.\n"},
  {(char*)"GetTotalNumberOfElements", PyvtkPExodusIIReader_GetTotalNumberOfElements, METH_VARARGS,
   (char*)"V.GetTotalNumberOfElements() -> int\nC++: virtual vtkIdType GetTotalNumberOfElements()\n\n"},
  {(char*)"GetTotalNumberOfNodes", PyvtkPExodusIIReader_GetTotalNumberOfNodes, METH_VARARGS,
   (char*)"V.GetTotalNumberOfNodes() -> int\nC++: virtual vtkIdType GetTotalNumberOfNodes()\n\n"},
  {(char*)"UpdateTimeInformation", PyvtkPExodusIIReader_UpdateTimeInformation, METH_VARARGS,
   (char*)"V.UpdateTimeInformation()\nC++: virtual void UpdateTimeInformation()\n\nCalls UpdateTimeInformation() on all serial readers so they'll\nre-read their time info from the file. The last time step that\nthey all have in common is stored in LastCommonTimeStep, which is\nused in RequestInformation() to override the output time-specific\ninformation keys with the range of times that ALL readers can\nactually read.\n"},
  {(char*)"Broadcast", PyvtkPExodusIIReader_Broadcast, METH_VARARGS,
   (char*)"V.Broadcast(vtkMultiProcessController)\nC++: virtual void Broadcast(vtkMultiProcessController *ctrl)\n\nSends metadata (that read from the input file, not settings\nmodified through this API) from the rank 0 node to all other\nprocesses in a job.\n"},
  {(char*)"GetVariableCacheSize", PyvtkPExodusIIReader_GetVariableCacheSize, METH_VARARGS,
   (char*)"V.GetVariableCacheSize() -> float\nC++: double GetVariableCacheSize()\n\n"},
  {(char*)"SetVariableCacheSize", PyvtkPExodusIIReader_SetVariableCacheSize, METH_VARARGS,
   (char*)"V.SetVariableCacheSize(float)\nC++: void SetVariableCacheSize(double a)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPExodusIIReader_StaticNew()
{
  return vtkPExodusIIReader::New();
}

PyObject *PyVTKClass_vtkPExodusIIReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPExodusIIReader_StaticNew,
    PyvtkPExodusIIReader_Methods,
    "vtkPExodusIIReader", modulename,
    NULL, NULL,
    PyvtkPExodusIIReader_Doc(),
    PyVTKClass_vtkExodusIIReaderNew(modulename));
  return cls;
}

const char **PyvtkPExodusIIReader_Doc()
{
  static const char *docstring[] = {
    "vtkPExodusIIReader - Read Exodus II files (.exii)\n\n",
    "Superclass: vtkExodusIIReader\n\n",
    "vtkPExodusIIReader is a unstructured grid source object that reads\nExodusII files. Most of the meta data associated with the file is\nloaded when UpdateInformation is called. This includes information\nlike Title, number of blocks, number and names of arrays. This data\ncan be retrieved from methods in this reader. Separate arrays that\nare meant to be a single vector, are combined internally for\nconv",
    "enience. To be combined, the array names have to be identical\nexcept for a trailing X,Y and Z (or x,y,z). By default all cell and\npoint arrays are loaded. However, the user can flag arrays not to\nload with the methods \"SetPointDataArrayLoadFlag\" and\n\"SetCellDataArrayLoadFlag\". The reader responds to piece requests by\nloading only a range of the possible blocks. Unused points are\nfiltered out inter",
    "nally.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPExodusIIReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPExodusIIReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPExodusIIReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

