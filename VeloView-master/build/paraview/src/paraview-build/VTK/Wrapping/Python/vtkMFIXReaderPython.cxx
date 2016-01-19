// python wrapper for vtkMFIXReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMFIXReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMFIXReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMFIXReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkMFIXReader_Doc();


static PyObject *
PyvtkMFIXReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMFIXReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMFIXReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMFIXReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMFIXReader::NewInstance());

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
PyvtkMFIXReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMFIXReader *tempr = vtkMFIXReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      op->vtkMFIXReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMFIXReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkMFIXReader::GetNumberOfCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkMFIXReader::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetNumberOfCellFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellFields() :
      op->vtkMFIXReader::GetNumberOfCellFields());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      op->vtkMFIXReader::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkMFIXReader::GetTimeStep());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkMFIXReader::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkMFIXReader::GetTimeStepRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_SetTimeStepRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTimeStepRange(temp0, temp1);
      }
    else
      {
      op->vtkMFIXReader::SetTimeStepRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMFIXReader_SetTimeStepRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStepRange(temp0);
      }
    else
      {
      op->vtkMFIXReader::SetTimeStepRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMFIXReader_SetTimeStepRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkMFIXReader_SetTimeStepRange_s1(self, args);
    case 1:
      return PyvtkMFIXReader_SetTimeStepRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTimeStepRange");
  return NULL;
}



static PyObject *
PyvtkMFIXReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkMFIXReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkMFIXReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkMFIXReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      op->vtkMFIXReader::SetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_DisableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllCellArrays();
      }
    else
      {
      op->vtkMFIXReader::DisableAllCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_EnableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllCellArrays();
      }
    else
      {
      op->vtkMFIXReader::EnableAllCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkMFIXReader_GetCellDataRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      op->vtkMFIXReader::GetCellDataRange(temp0, temp1, temp2, temp3);
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
#endif

static PyObject *
PyvtkMFIXReader_GetCellDataRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  int temp0;
  float *temp1 = NULL;
  float *save1 = NULL;
  float small1[8];
  int size1 = 0;
  float *temp2 = NULL;
  float *save2 = NULL;
  float small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new float[2*size1];
      }
    save1 = &temp1[size1];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new float[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->GetCellDataRange(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMFIXReader::GetCellDataRange(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkMFIXReader_GetCellDataRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
#if !defined(VTK_LEGACY_REMOVE)
    case 4:
      return PyvtkMFIXReader_GetCellDataRange_s1(self, args);
#endif
    case 3:
      return PyvtkMFIXReader_GetCellDataRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCellDataRange");
  return NULL;
}


static PyMethodDef PyvtkMFIXReader_Methods[] = {
  {(char*)"GetClassName", PyvtkMFIXReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMFIXReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMFIXReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMFIXReader\nC++: vtkMFIXReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMFIXReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMFIXReader\nC++: vtkMFIXReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkMFIXReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify the file name of the MFIX Restart data file to read.\n"},
  {(char*)"GetFileName", PyvtkMFIXReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify the file name of the MFIX Restart data file to read.\n"},
  {(char*)"GetNumberOfCells", PyvtkMFIXReader_GetNumberOfCells, METH_VARARGS,
   (char*)"V.GetNumberOfCells() -> int\nC++: int GetNumberOfCells()\n\nGet the total number of cells. The number of cells is only valid\nafter a successful read of the data file is performed.\n"},
  {(char*)"GetNumberOfPoints", PyvtkMFIXReader_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: int GetNumberOfPoints()\n\nGet the total number of nodes. The number of nodes is only valid\nafter a successful read of the data file is performed.\n"},
  {(char*)"GetNumberOfCellFields", PyvtkMFIXReader_GetNumberOfCellFields, METH_VARARGS,
   (char*)"V.GetNumberOfCellFields() -> int\nC++: int GetNumberOfCellFields()\n\nGet the number of data components at the nodes and cells.\n"},
  {(char*)"SetTimeStep", PyvtkMFIXReader_SetTimeStep, METH_VARARGS,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(int a)\n\nWhich TimeStep to read.\n"},
  {(char*)"GetTimeStep", PyvtkMFIXReader_GetTimeStep, METH_VARARGS,
   (char*)"V.GetTimeStep() -> int\nC++: int GetTimeStep()\n\nWhich TimeStep to read.\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkMFIXReader_GetNumberOfTimeSteps, METH_VARARGS,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nReturns the number of timesteps.\n"},
  {(char*)"GetTimeStepRange", PyvtkMFIXReader_GetTimeStepRange, METH_VARARGS,
   (char*)"V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {(char*)"SetTimeStepRange", PyvtkMFIXReader_SetTimeStepRange, METH_VARARGS,
   (char*)"V.SetTimeStepRange(int, int)\nC++: void SetTimeStepRange(int, int)\nV.SetTimeStepRange((int, int))\nC++: void SetTimeStepRange(int a[2])\n\n"},
  {(char*)"GetNumberOfCellArrays", PyvtkMFIXReader_GetNumberOfCellArrays, METH_VARARGS,
   (char*)"V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays(void)\n\n"},
  {(char*)"GetCellArrayName", PyvtkMFIXReader_GetCellArrayName, METH_VARARGS,
   (char*)"V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nGet the name of the  cell array with the given index in the\ninput.\n"},
  {(char*)"GetCellArrayStatus", PyvtkMFIXReader_GetCellArrayStatus, METH_VARARGS,
   (char*)"V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet/Set whether the cell array with the given name is to be read.\n"},
  {(char*)"SetCellArrayStatus", PyvtkMFIXReader_SetCellArrayStatus, METH_VARARGS,
   (char*)"V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nGet/Set whether the cell array with the given name is to be read.\n"},
  {(char*)"DisableAllCellArrays", PyvtkMFIXReader_DisableAllCellArrays, METH_VARARGS,
   (char*)"V.DisableAllCellArrays()\nC++: void DisableAllCellArrays()\n\nTurn on/off all cell arrays.\n"},
  {(char*)"EnableAllCellArrays", PyvtkMFIXReader_EnableAllCellArrays, METH_VARARGS,
   (char*)"V.EnableAllCellArrays()\nC++: void EnableAllCellArrays()\n\nTurn on/off all cell arrays.\n"},
  {(char*)"GetCellDataRange", PyvtkMFIXReader_GetCellDataRange, METH_VARARGS,
   (char*)"V.GetCellDataRange(int, int, [float, ...], [float, ...])\nC++: void GetCellDataRange(int cellComp, int index, float *min,\n    float *max)\nV.GetCellDataRange(int, [float, ...], [float, ...])\nC++: void GetCellDataRange(int cellComp, float *min, float *max)\n\nGet the range of cell data. The index parameter is\nignored.@deprecated Replaced by GetCellDataRange as of VTK 6.0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMFIXReader_StaticNew()
{
  return vtkMFIXReader::New();
}

PyObject *PyVTKClass_vtkMFIXReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMFIXReader_StaticNew,
    PyvtkMFIXReader_Methods,
    "vtkMFIXReader", modulename,
    NULL, NULL,
    PyvtkMFIXReader_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMFIXReader_Doc()
{
  static const char *docstring[] = {
    "vtkMFIXReader - reads a dataset in MFIX file format\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkMFIXReader creates an unstructured grid dataset. It reads a\nrestart file and a set of sp files.  The restart file contains the\nmesh information.  MFIX meshes are either cylindrical or rectilinear,\nbut this reader will convert them to an unstructured grid.  The sp\nfiles contain transient data for the cells.  Each sp file has one or\nmore variables stored inside it.\n\nSee Also:\n\nvtkGAMBITReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMFIXReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMFIXReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMFIXReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

