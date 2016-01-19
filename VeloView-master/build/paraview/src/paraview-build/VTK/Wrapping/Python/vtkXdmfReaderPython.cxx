// python wrapper for vtkXdmfReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXdmfReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXdmfReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXdmfReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataReaderNew
#endif

static const char **PyvtkXdmfReader_Doc();


static PyObject *
PyvtkXdmfReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXdmfReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXdmfReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXdmfReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXdmfReader::NewInstance());

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
PyvtkXdmfReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXdmfReader *tempr = vtkXdmfReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_SetDomainName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDomainName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDomainName(temp0);
      }
    else
      {
      op->vtkXdmfReader::SetDomainName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetDomainName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDomainName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetDomainName() :
      op->vtkXdmfReader::GetDomainName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkXdmfReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkXdmfReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkXdmfReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

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
      op->vtkXdmfReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkXdmfReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkXdmfReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

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
      op->vtkXdmfReader::SetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkXdmfReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetNumberOfGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGrids() :
      op->vtkXdmfReader::GetNumberOfGrids());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetGridName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetGridName(temp0) :
      op->vtkXdmfReader::GetGridName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_SetGridStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGridStatus(temp0, temp1);
      }
    else
      {
      op->vtkXdmfReader::SetGridStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetGridStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGridStatus(temp0) :
      op->vtkXdmfReader::GetGridStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetNumberOfSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSets() :
      op->vtkXdmfReader::GetNumberOfSets());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetSetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetSetName(temp0) :
      op->vtkXdmfReader::GetSetName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_SetSetStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSetStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSetStatus(temp0, temp1);
      }
    else
      {
      op->vtkXdmfReader::SetSetStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetSetStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSetStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSetStatus(temp0) :
      op->vtkXdmfReader::GetSetStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetNumberOfSetArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSetArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSetArrays() :
      op->vtkXdmfReader::GetNumberOfSetArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetSetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetSetArrayName(temp0) :
      op->vtkXdmfReader::GetSetArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSetArrayStatus(temp0) :
      op->vtkXdmfReader::GetSetArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_SetStride_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetStride(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXdmfReader::SetStride(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXdmfReader_SetStride_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetStride(temp0);
      }
    else
      {
      op->vtkXdmfReader::SetStride(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXdmfReader_SetStride(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkXdmfReader_SetStride_s1(self, args);
    case 1:
      return PyvtkXdmfReader_SetStride_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetStride");
  return NULL;
}



static PyObject *
PyvtkXdmfReader_GetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetStride() :
      op->vtkXdmfReader::GetStride());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkXdmfReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetSILUpdateStamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSILUpdateStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSILUpdateStamp() :
      op->vtkXdmfReader::GetSILUpdateStamp());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetSIL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetSIL() :
      op->vtkXdmfReader::GetSIL());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXdmfReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXdmfReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXdmfReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXdmfReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXdmfReader\nC++: vtkXdmfReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXdmfReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXdmfReader\nC++: vtkXdmfReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDomainName", PyvtkXdmfReader_SetDomainName, METH_VARARGS,
   (char*)"V.SetDomainName(string)\nC++: void SetDomainName(char *)\n\nSet the active domain. Only one domain can be selected at a time.\nBy default the first domain in the datafile is chosen. Setting\nthis to null results in the domain being automatically chosen.\nNote that if the domain name is changed, you should explicitly\ncall UpdateInformation() before accessing information about\ngrids, data arrays etc.\n"},
  {(char*)"GetDomainName", PyvtkXdmfReader_GetDomainName, METH_VARARGS,
   (char*)"V.GetDomainName() -> string\nC++: char *GetDomainName()\n\nSet the active domain. Only one domain can be selected at a time.\nBy default the first domain in the datafile is chosen. Setting\nthis to null results in the domain being automatically chosen.\nNote that if the domain name is changed, you should explicitly\ncall UpdateInformation() before accessing information about\ngrids, data arrays etc.\n"},
  {(char*)"GetNumberOfPointArrays", PyvtkXdmfReader_GetNumberOfPointArrays, METH_VARARGS,
   (char*)"V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nGet information about point-based arrays. As is typical with\nreaders this in only valid after the filename is set and\nUpdateInformation() has been called.\n"},
  {(char*)"GetPointArrayName", PyvtkXdmfReader_GetPointArrayName, METH_VARARGS,
   (char*)"V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nReturns the name of point array at the give index. Returns NULL\nif index is invalid.\n"},
  {(char*)"GetPointArrayStatus", PyvtkXdmfReader_GetPointArrayStatus, METH_VARARGS,
   (char*)"V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nGet/Set the point array status.\n"},
  {(char*)"SetPointArrayStatus", PyvtkXdmfReader_SetPointArrayStatus, METH_VARARGS,
   (char*)"V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nGet/Set the point array status.\n"},
  {(char*)"GetNumberOfCellArrays", PyvtkXdmfReader_GetNumberOfCellArrays, METH_VARARGS,
   (char*)"V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nGet information about cell-based arrays.  As is typical with\nreaders this in only valid after the filename is set and\nUpdateInformation() has been called.\n"},
  {(char*)"GetCellArrayName", PyvtkXdmfReader_GetCellArrayName, METH_VARARGS,
   (char*)"V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nGet information about cell-based arrays.  As is typical with\nreaders this in only valid after the filename is set and\nUpdateInformation() has been called.\n"},
  {(char*)"SetCellArrayStatus", PyvtkXdmfReader_SetCellArrayStatus, METH_VARARGS,
   (char*)"V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nGet information about cell-based arrays.  As is typical with\nreaders this in only valid after the filename is set and\nUpdateInformation() has been called.\n"},
  {(char*)"GetCellArrayStatus", PyvtkXdmfReader_GetCellArrayStatus, METH_VARARGS,
   (char*)"V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet information about cell-based arrays.  As is typical with\nreaders this in only valid after the filename is set and\nUpdateInformation() has been called.\n"},
  {(char*)"GetNumberOfGrids", PyvtkXdmfReader_GetNumberOfGrids, METH_VARARGS,
   (char*)"V.GetNumberOfGrids() -> int\nC++: int GetNumberOfGrids()\n\nGet/Set information about grids. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called.\n"},
  {(char*)"GetGridName", PyvtkXdmfReader_GetGridName, METH_VARARGS,
   (char*)"V.GetGridName(int) -> string\nC++: const char *GetGridName(int index)\n\nGet/Set information about grids. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called.\n"},
  {(char*)"SetGridStatus", PyvtkXdmfReader_SetGridStatus, METH_VARARGS,
   (char*)"V.SetGridStatus(string, int)\nC++: void SetGridStatus(const char *gridname, int status)\n\nGet/Set information about grids. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called.\n"},
  {(char*)"GetGridStatus", PyvtkXdmfReader_GetGridStatus, METH_VARARGS,
   (char*)"V.GetGridStatus(string) -> int\nC++: int GetGridStatus(const char *gridname)\n\nGet/Set information about grids. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called.\n"},
  {(char*)"GetNumberOfSets", PyvtkXdmfReader_GetNumberOfSets, METH_VARARGS,
   (char*)"V.GetNumberOfSets() -> int\nC++: int GetNumberOfSets()\n\nGet/Set information about sets. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called. Note that sets with non-zero\nGhost value are not treated as sets that the user can select\nusing this API.\n"},
  {(char*)"GetSetName", PyvtkXdmfReader_GetSetName, METH_VARARGS,
   (char*)"V.GetSetName(int) -> string\nC++: const char *GetSetName(int index)\n\nGet/Set information about sets. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called. Note that sets with non-zero\nGhost value are not treated as sets that the user can select\nusing this API.\n"},
  {(char*)"SetSetStatus", PyvtkXdmfReader_SetSetStatus, METH_VARARGS,
   (char*)"V.SetSetStatus(string, int)\nC++: void SetSetStatus(const char *gridname, int status)\n\nGet/Set information about sets. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called. Note that sets with non-zero\nGhost value are not treated as sets that the user can select\nusing this API.\n"},
  {(char*)"GetSetStatus", PyvtkXdmfReader_GetSetStatus, METH_VARARGS,
   (char*)"V.GetSetStatus(string) -> int\nC++: int GetSetStatus(const char *gridname)\n\nGet/Set information about sets. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called. Note that sets with non-zero\nGhost value are not treated as sets that the user can select\nusing this API.\n"},
  {(char*)"GetNumberOfSetArrays", PyvtkXdmfReader_GetNumberOfSetArrays, METH_VARARGS,
   (char*)"V.GetNumberOfSetArrays() -> int\nC++: int GetNumberOfSetArrays()\n\nThese methods are provided to make it easier to use the Sets in\nParaView.\n"},
  {(char*)"GetSetArrayName", PyvtkXdmfReader_GetSetArrayName, METH_VARARGS,
   (char*)"V.GetSetArrayName(int) -> string\nC++: const char *GetSetArrayName(int index)\n\nThese methods are provided to make it easier to use the Sets in\nParaView.\n"},
  {(char*)"GetSetArrayStatus", PyvtkXdmfReader_GetSetArrayStatus, METH_VARARGS,
   (char*)"V.GetSetArrayStatus(string) -> int\nC++: int GetSetArrayStatus(const char *name)\n\nThese methods are provided to make it easier to use the Sets in\nParaView.\n"},
  {(char*)"SetStride", PyvtkXdmfReader_SetStride, METH_VARARGS,
   (char*)"V.SetStride(int, int, int)\nC++: void SetStride(int, int, int)\nV.SetStride((int, int, int))\nC++: void SetStride(int a[3])\n\n"},
  {(char*)"GetStride", PyvtkXdmfReader_GetStride, METH_VARARGS,
   (char*)"V.GetStride() -> (int, int, int)\nC++: int *GetStride()\n\n"},
  {(char*)"CanReadFile", PyvtkXdmfReader_CanReadFile, METH_VARARGS,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *filename)\n\nDetermine if the file can be read with this reader.\n"},
  {(char*)"GetSILUpdateStamp", PyvtkXdmfReader_GetSILUpdateStamp, METH_VARARGS,
   (char*)"V.GetSILUpdateStamp() -> int\nC++: int GetSILUpdateStamp()\n\nEvery time the SIL is updated a this will return a different\nvalue.\n"},
  {(char*)"GetSIL", PyvtkXdmfReader_GetSIL, METH_VARARGS,
   (char*)"V.GetSIL() -> vtkGraph\nC++: virtual vtkGraph *GetSIL()\n\nSIL describes organization of/relationships between\nclassifications eg. blocks/materials/hierarchies.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXdmfReader_StaticNew()
{
  return vtkXdmfReader::New();
}

PyObject *PyVTKClass_vtkXdmfReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXdmfReader_StaticNew,
    PyvtkXdmfReader_Methods,
    "vtkXdmfReader", modulename,
    NULL, NULL,
    PyvtkXdmfReader_Doc(),
    PyVTKClass_vtkDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXdmfReader_Doc()
{
  static const char *docstring[] = {
    "vtkXdmfReader - Reads eXtensible Data Model and Formatfiles\n\n",
    "Superclass: vtkDataReader\n\n",
    "vtkXdmfReader reads XDMF data files so that they can be visualized\nusing VTK. The output data produced by this reader depends on the\nnumber of grids in the data file. If the data file has a single\ndomain with a single grid, then the output type is a vtkDataSet\nsubclass of the appropriate type, otherwise it's a\nvtkMultiBlockDataSet.\n\nRefer to vtkDataReader which provides many methods for controllin",
    "g\nthe reading of the data file.\n\nCaveats:\n\nUses the XDMF API (http://www.xdmf.org)\n\nSee Also:\n\nvtkDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXdmfReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXdmfReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXdmfReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

