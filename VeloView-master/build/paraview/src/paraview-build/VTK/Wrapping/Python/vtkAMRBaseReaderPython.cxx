// python wrapper for vtkAMRBaseReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRBaseReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRBaseReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRBaseReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkOverlappingAMRAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkOverlappingAMRAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkOverlappingAMRAlgorithmNew
#endif

static const char **PyvtkAMRBaseReader_Doc();


static PyObject *
PyvtkAMRBaseReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRBaseReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRBaseReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRBaseReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRBaseReader::NewInstance());

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
PyvtkAMRBaseReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRBaseReader *tempr = vtkAMRBaseReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkAMRBaseReader::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_SetEnableCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableCaching(temp0);
      }
    else
      {
      op->vtkAMRBaseReader::SetEnableCaching(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetEnableCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableCaching() :
      op->vtkAMRBaseReader::GetEnableCaching());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_EnableCachingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableCachingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableCachingOn();
      }
    else
      {
      op->vtkAMRBaseReader::EnableCachingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_EnableCachingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableCachingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableCachingOff();
      }
    else
      {
      op->vtkAMRBaseReader::EnableCachingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_IsCachingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCachingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsCachingEnabled() :
      op->vtkAMRBaseReader::IsCachingEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

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
      op->vtkAMRBaseReader::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRBaseReader::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_SetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxLevel(temp0);
      }
    else
      {
      op->vtkAMRBaseReader::SetMaxLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetCellDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetCellDataArraySelection() :
      op->vtkAMRBaseReader::GetCellDataArraySelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetPointDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPointDataArraySelection() :
      op->vtkAMRBaseReader::GetPointDataArraySelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkAMRBaseReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkAMRBaseReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkAMRBaseReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkAMRBaseReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkAMRBaseReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkAMRBaseReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

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
      op->vtkAMRBaseReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

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
      op->vtkAMRBaseReader::SetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkAMRBaseReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetFileName(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetNumberOfBlocks();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetNumberOfLevels();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRBaseReader_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRBaseReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRBaseReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRBaseReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRBaseReader\nC++: vtkAMRBaseReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRBaseReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRBaseReader\nC++: vtkAMRBaseReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkAMRBaseReader_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nInitializes the AMR reader. All concrete instances must call this\nmethod in their constructor.\n"},
  {(char*)"SetEnableCaching", PyvtkAMRBaseReader_SetEnableCaching, METH_VARARGS,
   (char*)"V.SetEnableCaching(int)\nC++: void SetEnableCaching(int a)\n\nSet/Get Reader caching property\n"},
  {(char*)"GetEnableCaching", PyvtkAMRBaseReader_GetEnableCaching, METH_VARARGS,
   (char*)"V.GetEnableCaching() -> int\nC++: int GetEnableCaching()\n\nSet/Get Reader caching property\n"},
  {(char*)"EnableCachingOn", PyvtkAMRBaseReader_EnableCachingOn, METH_VARARGS,
   (char*)"V.EnableCachingOn()\nC++: void EnableCachingOn()\n\nSet/Get Reader caching property\n"},
  {(char*)"EnableCachingOff", PyvtkAMRBaseReader_EnableCachingOff, METH_VARARGS,
   (char*)"V.EnableCachingOff()\nC++: void EnableCachingOff()\n\nSet/Get Reader caching property\n"},
  {(char*)"IsCachingEnabled", PyvtkAMRBaseReader_IsCachingEnabled, METH_VARARGS,
   (char*)"V.IsCachingEnabled() -> bool\nC++: bool IsCachingEnabled()\n\nSet/Get Reader caching property\n"},
  {(char*)"SetController", PyvtkAMRBaseReader_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *a)\n\nSet/Get a multiprocess-controller for reading in parallel. By\ndefault this parameter is set to NULL by the constructor.\n"},
  {(char*)"GetController", PyvtkAMRBaseReader_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/Get a multiprocess-controller for reading in parallel. By\ndefault this parameter is set to NULL by the constructor.\n"},
  {(char*)"SetMaxLevel", PyvtkAMRBaseReader_SetMaxLevel, METH_VARARGS,
   (char*)"V.SetMaxLevel(int)\nC++: void SetMaxLevel(int a)\n\nSet the level, up to which the blocks are loaded.\n"},
  {(char*)"GetCellDataArraySelection", PyvtkAMRBaseReader_GetCellDataArraySelection, METH_VARARGS,
   (char*)"V.GetCellDataArraySelection() -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetCellDataArraySelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {(char*)"GetPointDataArraySelection", PyvtkAMRBaseReader_GetPointDataArraySelection, METH_VARARGS,
   (char*)"V.GetPointDataArraySelection() -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetPointDataArraySelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {(char*)"GetNumberOfPointArrays", PyvtkAMRBaseReader_GetNumberOfPointArrays, METH_VARARGS,
   (char*)"V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nGet the number of point or cell arrays available in the input.\n"},
  {(char*)"GetNumberOfCellArrays", PyvtkAMRBaseReader_GetNumberOfCellArrays, METH_VARARGS,
   (char*)"V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nGet the number of point or cell arrays available in the input.\n"},
  {(char*)"GetPointArrayName", PyvtkAMRBaseReader_GetPointArrayName, METH_VARARGS,
   (char*)"V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nGet the name of the point or cell array with the given index in\nthe input.\n"},
  {(char*)"GetCellArrayName", PyvtkAMRBaseReader_GetCellArrayName, METH_VARARGS,
   (char*)"V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nGet the name of the point or cell array with the given index in\nthe input.\n"},
  {(char*)"GetPointArrayStatus", PyvtkAMRBaseReader_GetPointArrayStatus, METH_VARARGS,
   (char*)"V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"GetCellArrayStatus", PyvtkAMRBaseReader_GetCellArrayStatus, METH_VARARGS,
   (char*)"V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"SetPointArrayStatus", PyvtkAMRBaseReader_SetPointArrayStatus, METH_VARARGS,
   (char*)"V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"SetCellArrayStatus", PyvtkAMRBaseReader_SetCellArrayStatus, METH_VARARGS,
   (char*)"V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"GetFileName", PyvtkAMRBaseReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet/Get the filename. Concrete instances of this class must\nimplement the SetFileName method accordingly.\n"},
  {(char*)"SetFileName", PyvtkAMRBaseReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: virtual void SetFileName(const char *fileName)\n\nSet/Get the filename. Concrete instances of this class must\nimplement the SetFileName method accordingly.\n"},
  {(char*)"GetNumberOfBlocks", PyvtkAMRBaseReader_GetNumberOfBlocks, METH_VARARGS,
   (char*)"V.GetNumberOfBlocks() -> int\nC++: virtual int GetNumberOfBlocks()\n\nReturns the total number of blocks. Implemented by concrete\ninstances.\n"},
  {(char*)"GetNumberOfLevels", PyvtkAMRBaseReader_GetNumberOfLevels, METH_VARARGS,
   (char*)"V.GetNumberOfLevels() -> int\nC++: virtual int GetNumberOfLevels()\n\nReturns the total number of levels. Implemented by concrete\ninstances.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAMRBaseReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAMRBaseReader_Methods,
    "vtkAMRBaseReader", modulename,
    NULL, NULL,
    PyvtkAMRBaseReader_Doc(),
    PyVTKClass_vtkOverlappingAMRAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAMRBaseReader_Doc()
{
  static const char *docstring[] = {
    "vtkAMRBaseReader.h -- Base class for all AMR Readers\n\n",
    "Superclass: vtkOverlappingAMRAlgorithm\n\n",
    "An abstract class that encapsulates common functionality for all AMR\nreaders.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRBaseReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRBaseReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRBaseReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

