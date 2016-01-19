// python wrapper for vtkMergeCells
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMergeCells.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMergeCells(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMergeCellsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMergeCells_Doc();


static PyObject *
PyvtkMergeCells_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMergeCells::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeCells::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMergeCells *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeCells::NewInstance());

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
PyvtkMergeCells_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMergeCells *tempr = vtkMergeCells::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_SetUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkUnstructuredGrid *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid"))
    {
    if (ap.IsBound())
      {
      op->SetUnstructuredGrid(temp0);
      }
    else
      {
      op->vtkMergeCells::SetUnstructuredGrid(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetUnstructuredGrid() :
      op->vtkMergeCells::GetUnstructuredGrid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_SetTotalNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTotalNumberOfCells(temp0);
      }
    else
      {
      op->vtkMergeCells::SetTotalNumberOfCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetTotalNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalNumberOfCells() :
      op->vtkMergeCells::GetTotalNumberOfCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_SetTotalNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTotalNumberOfPoints(temp0);
      }
    else
      {
      op->vtkMergeCells::SetTotalNumberOfPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetTotalNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalNumberOfPoints() :
      op->vtkMergeCells::GetTotalNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_SetUseGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseGlobalIds(temp0);
      }
    else
      {
      op->vtkMergeCells::SetUseGlobalIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetUseGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseGlobalIds() :
      op->vtkMergeCells::GetUseGlobalIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_SetPointMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointMergeTolerance(temp0);
      }
    else
      {
      op->vtkMergeCells::SetPointMergeTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetPointMergeToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMergeToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetPointMergeToleranceMinValue() :
      op->vtkMergeCells::GetPointMergeToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetPointMergeToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMergeToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetPointMergeToleranceMaxValue() :
      op->vtkMergeCells::GetPointMergeToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetPointMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetPointMergeTolerance() :
      op->vtkMergeCells::GetPointMergeTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_SetUseGlobalCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseGlobalCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseGlobalCellIds(temp0);
      }
    else
      {
      op->vtkMergeCells::SetUseGlobalCellIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetUseGlobalCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseGlobalCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseGlobalCellIds() :
      op->vtkMergeCells::GetUseGlobalCellIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_SetMergeDuplicatePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeDuplicatePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMergeDuplicatePoints(temp0);
      }
    else
      {
      op->vtkMergeCells::SetMergeDuplicatePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetMergeDuplicatePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeDuplicatePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMergeDuplicatePoints() :
      op->vtkMergeCells::GetMergeDuplicatePoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_MergeDuplicatePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeDuplicatePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergeDuplicatePointsOn();
      }
    else
      {
      op->vtkMergeCells::MergeDuplicatePointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_MergeDuplicatePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeDuplicatePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergeDuplicatePointsOff();
      }
    else
      {
      op->vtkMergeCells::MergeDuplicatePointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_SetTotalNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTotalNumberOfDataSets(temp0);
      }
    else
      {
      op->vtkMergeCells::SetTotalNumberOfDataSets(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_GetTotalNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTotalNumberOfDataSets() :
      op->vtkMergeCells::GetTotalNumberOfDataSets());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_MergeDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    int tempr = (ap.IsBound() ?
      op->MergeDataSet(temp0) :
      op->vtkMergeCells::MergeDataSet(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCells_Finish(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finish");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finish();
      }
    else
      {
      op->vtkMergeCells::Finish();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMergeCells_Methods[] = {
  {(char*)"GetClassName", PyvtkMergeCells_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMergeCells_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMergeCells_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMergeCells\nC++: vtkMergeCells *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMergeCells_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMergeCells\nC++: vtkMergeCells *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetUnstructuredGrid", PyvtkMergeCells_SetUnstructuredGrid, METH_VARARGS,
   (char*)"V.SetUnstructuredGrid(vtkUnstructuredGrid)\nC++: virtual void SetUnstructuredGrid(vtkUnstructuredGrid *)\n\nSet the vtkUnstructuredGrid object that will become the\n   union of the DataSets specified in MergeDataSet calls.\n   vtkMergeCells assumes this grid is empty at first.\n"},
  {(char*)"GetUnstructuredGrid", PyvtkMergeCells_GetUnstructuredGrid, METH_VARARGS,
   (char*)"V.GetUnstructuredGrid() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGrid()\n\nSet the vtkUnstructuredGrid object that will become the\n   union of the DataSets specified in MergeDataSet calls.\n   vtkMergeCells assumes this grid is empty at first.\n"},
  {(char*)"SetTotalNumberOfCells", PyvtkMergeCells_SetTotalNumberOfCells, METH_VARARGS,
   (char*)"V.SetTotalNumberOfCells(int)\nC++: void SetTotalNumberOfCells(vtkIdType a)\n\nSpecify the total number of cells in the final\nvtkUnstructuredGrid.\n   Make this call before any call to MergeDataSet().\n"},
  {(char*)"GetTotalNumberOfCells", PyvtkMergeCells_GetTotalNumberOfCells, METH_VARARGS,
   (char*)"V.GetTotalNumberOfCells() -> int\nC++: vtkIdType GetTotalNumberOfCells()\n\nSpecify the total number of cells in the final\nvtkUnstructuredGrid.\n   Make this call before any call to MergeDataSet().\n"},
  {(char*)"SetTotalNumberOfPoints", PyvtkMergeCells_SetTotalNumberOfPoints, METH_VARARGS,
   (char*)"V.SetTotalNumberOfPoints(int)\nC++: void SetTotalNumberOfPoints(vtkIdType a)\n\nSpecify the total number of points in the final\nvtkUnstructuredGrid\n   Make this call before any call to MergeDataSet().  This is an\n   upper bound, since some points may be duplicates.\n"},
  {(char*)"GetTotalNumberOfPoints", PyvtkMergeCells_GetTotalNumberOfPoints, METH_VARARGS,
   (char*)"V.GetTotalNumberOfPoints() -> int\nC++: vtkIdType GetTotalNumberOfPoints()\n\nSpecify the total number of points in the final\nvtkUnstructuredGrid\n   Make this call before any call to MergeDataSet().  This is an\n   upper bound, since some points may be duplicates.\n"},
  {(char*)"SetUseGlobalIds", PyvtkMergeCells_SetUseGlobalIds, METH_VARARGS,
   (char*)"V.SetUseGlobalIds(int)\nC++: void SetUseGlobalIds(int a)\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  This is done most efficiently if a global point ID\n  field array is available.  Set the name of the point array if\nyou\n  have one.\n"},
  {(char*)"GetUseGlobalIds", PyvtkMergeCells_GetUseGlobalIds, METH_VARARGS,
   (char*)"V.GetUseGlobalIds() -> int\nC++: int GetUseGlobalIds()\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  This is done most efficiently if a global point ID\n  field array is available.  Set the name of the point array if\nyou\n  have one.\n"},
  {(char*)"SetPointMergeTolerance", PyvtkMergeCells_SetPointMergeTolerance, METH_VARARGS,
   (char*)"V.SetPointMergeTolerance(float)\nC++: void SetPointMergeTolerance(float)\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  If no global point ID field array name is provided,\n  it will use a point locator to find duplicate points.  You can\n  set a tolerance for that locator here.  The default tolerance\n  is 10e-4.\n"},
  {(char*)"GetPointMergeToleranceMinValue", PyvtkMergeCells_GetPointMergeToleranceMinValue, METH_VARARGS,
   (char*)"V.GetPointMergeToleranceMinValue() -> float\nC++: float GetPointMergeToleranceMinValue()\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  If no global point ID field array name is provided,\n  it will use a point locator to find duplicate points.  You can\n  set a tolerance for that locator here.  The default tolerance\n  is 10e-4.\n"},
  {(char*)"GetPointMergeToleranceMaxValue", PyvtkMergeCells_GetPointMergeToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetPointMergeToleranceMaxValue() -> float\nC++: float GetPointMergeToleranceMaxValue()\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  If no global point ID field array name is provided,\n  it will use a point locator to find duplicate points.  You can\n  set a tolerance for that locator here.  The default tolerance\n  is 10e-4.\n"},
  {(char*)"GetPointMergeTolerance", PyvtkMergeCells_GetPointMergeTolerance, METH_VARARGS,
   (char*)"V.GetPointMergeTolerance() -> float\nC++: float GetPointMergeTolerance()\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  If no global point ID field array name is provided,\n  it will use a point locator to find duplicate points.  You can\n  set a tolerance for that locator here.  The default tolerance\n  is 10e-4.\n"},
  {(char*)"SetUseGlobalCellIds", PyvtkMergeCells_SetUseGlobalCellIds, METH_VARARGS,
   (char*)"V.SetUseGlobalCellIds(int)\nC++: void SetUseGlobalCellIds(int a)\n\nvtkMergeCells will detect and filter out duplicate cells if you\n  provide it the name of a global cell ID array.\n"},
  {(char*)"GetUseGlobalCellIds", PyvtkMergeCells_GetUseGlobalCellIds, METH_VARARGS,
   (char*)"V.GetUseGlobalCellIds() -> int\nC++: int GetUseGlobalCellIds()\n\nvtkMergeCells will detect and filter out duplicate cells if you\n  provide it the name of a global cell ID array.\n"},
  {(char*)"SetMergeDuplicatePoints", PyvtkMergeCells_SetMergeDuplicatePoints, METH_VARARGS,
   (char*)"V.SetMergeDuplicatePoints(int)\nC++: void SetMergeDuplicatePoints(int a)\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  If for some reason you don't want it to do this,\n  than MergeDuplicatePointsOff().\n"},
  {(char*)"GetMergeDuplicatePoints", PyvtkMergeCells_GetMergeDuplicatePoints, METH_VARARGS,
   (char*)"V.GetMergeDuplicatePoints() -> int\nC++: int GetMergeDuplicatePoints()\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  If for some reason you don't want it to do this,\n  than MergeDuplicatePointsOff().\n"},
  {(char*)"MergeDuplicatePointsOn", PyvtkMergeCells_MergeDuplicatePointsOn, METH_VARARGS,
   (char*)"V.MergeDuplicatePointsOn()\nC++: void MergeDuplicatePointsOn()\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  If for some reason you don't want it to do this,\n  than MergeDuplicatePointsOff().\n"},
  {(char*)"MergeDuplicatePointsOff", PyvtkMergeCells_MergeDuplicatePointsOff, METH_VARARGS,
   (char*)"V.MergeDuplicatePointsOff()\nC++: void MergeDuplicatePointsOff()\n\nvtkMergeCells attempts eliminate duplicate points when merging\n  data sets.  If for some reason you don't want it to do this,\n  than MergeDuplicatePointsOff().\n"},
  {(char*)"SetTotalNumberOfDataSets", PyvtkMergeCells_SetTotalNumberOfDataSets, METH_VARARGS,
   (char*)"V.SetTotalNumberOfDataSets(int)\nC++: void SetTotalNumberOfDataSets(int a)\n\nWe need to know the number of different data sets that will\n   be merged into one so we can pre-allocate some arrays.\n   This can be an upper bound, not necessarily exact.\n"},
  {(char*)"GetTotalNumberOfDataSets", PyvtkMergeCells_GetTotalNumberOfDataSets, METH_VARARGS,
   (char*)"V.GetTotalNumberOfDataSets() -> int\nC++: int GetTotalNumberOfDataSets()\n\nWe need to know the number of different data sets that will\n   be merged into one so we can pre-allocate some arrays.\n   This can be an upper bound, not necessarily exact.\n"},
  {(char*)"MergeDataSet", PyvtkMergeCells_MergeDataSet, METH_VARARGS,
   (char*)"V.MergeDataSet(vtkDataSet) -> int\nC++: int MergeDataSet(vtkDataSet *set)\n\nProvide a DataSet to be merged in to the final UnstructuredGrid.\n   This call returns after the merge has completed.  Be sure to\ncall\n   SetTotalNumberOfCells, SetTotalNumberOfPoints, and\nSetTotalNumberOfDataSets\n   before making this call.  Return 0 if OK, -1 if error.\n"},
  {(char*)"Finish", PyvtkMergeCells_Finish, METH_VARARGS,
   (char*)"V.Finish()\nC++: void Finish()\n\nCall Finish() after merging last DataSet to free unneeded memory\nand to\n   make sure the ugrid's GetNumberOfPoints() reflects the actual\n   number of points set, not the number allocated.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMergeCells_StaticNew()
{
  return vtkMergeCells::New();
}

PyObject *PyVTKClass_vtkMergeCellsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMergeCells_StaticNew,
    PyvtkMergeCells_Methods,
    "vtkMergeCells", modulename,
    NULL, NULL,
    PyvtkMergeCells_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMergeCells_Doc()
{
  static const char *docstring[] = {
    "vtkMergeCells - merges any number of vtkDataSets back into a single\n\n",
    "Superclass: vtkObject\n\n",
    "Designed to work with distributed vtkDataSets, this class will take\n   vtkDataSets and merge them back into a single vtkUnstructuredGrid.\n\n\n   The vtkPoints object of the unstructured grid will have data type\n   VTK_FLOAT, regardless of the data type of the points of the\n   input vtkDataSets.  If this is a problem, someone must let me\nknow.\n\n\n   It is assumed the different DataSets have the same f",
    "ield arrays. \nIf\n   the name of a global point ID array is provided, this class will\n   refrain from including duplicate points in the merged Ugrid.  This\n   class differs from vtkAppendFilter in these ways: (1) it uses less\n   memory than that class (which uses memory equal to twice the size\n   of the final Ugrid) but requires that you know the size of the\n   final Ugrid in advance (2) this class",
    " assumes the individual\nDataSets have\n   the same field arrays, while vtkAppendFilter intersects the field\n   arrays (3) this class knows duplicate points may be appearing in\n   the DataSets and can filter those out, (4) this class is not a\nfilter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMergeCells(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMergeCellsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMergeCells", o) != 0)
    {
    Py_DECREF(o);
    }

}

