// python wrapper for vtkHyperTreeGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHyperTreeGrid(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHyperTreeGridNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetNew
extern "C" { PyObject *PyVTKClass_vtkDataSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetNew
#endif

static const char **PyvtkHyperTreeGrid_Doc();


static PyObject *
PyvtkHyperTreeGrid_LEVELS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LEVELS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkHyperTreeGrid::LEVELS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_DIMENSION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DIMENSION");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkHyperTreeGrid::DIMENSION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SIZES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SIZES");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleVectorKey *tempr = vtkHyperTreeGrid::SIZES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHyperTreeGrid::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperTreeGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGrid::NewInstance());

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
PyvtkHyperTreeGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHyperTreeGrid *tempr = vtkHyperTreeGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkHyperTreeGrid::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->CopyStructure(temp0);
      }
    else
      {
      op->vtkHyperTreeGrid::CopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetGridSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  unsigned int temp0[3];
  unsigned int save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetGridSize(temp0);
      }
    else
      {
      op->vtkHyperTreeGrid::SetGridSize(temp0);
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

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_SetGridSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetGridSize(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHyperTreeGrid::SetGridSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_SetGridSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkHyperTreeGrid_SetGridSize_s1(self, args);
    case 3:
      return PyvtkHyperTreeGrid_SetGridSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGridSize");
  return NULL;
}



static PyObject *
PyvtkHyperTreeGrid_GetGridSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetGridSize() :
      op->vtkHyperTreeGrid::GetGridSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetGridExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetGridExtent(temp0);
      }
    else
      {
      op->vtkHyperTreeGrid::SetGridExtent(temp0);
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

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_SetGridExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetGridExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkHyperTreeGrid::SetGridExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_SetGridExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkHyperTreeGrid_SetGridExtent_s1(self, args);
    case 6:
      return PyvtkHyperTreeGrid_SetGridExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGridExtent");
  return NULL;
}



static PyObject *
PyvtkHyperTreeGrid_SetTransposedRootIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransposedRootIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTransposedRootIndexing(temp0);
      }
    else
      {
      op->vtkHyperTreeGrid::SetTransposedRootIndexing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetTransposedRootIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransposedRootIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetTransposedRootIndexing() :
      op->vtkHyperTreeGrid::GetTransposedRootIndexing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetIndexingModeToKJI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexingModeToKJI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndexingModeToKJI();
      }
    else
      {
      op->vtkHyperTreeGrid::SetIndexingModeToKJI();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetIndexingModeToIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexingModeToIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndexingModeToIJK();
      }
    else
      {
      op->vtkHyperTreeGrid::SetIndexingModeToIJK();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetBranchFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBranchFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBranchFactor(temp0);
      }
    else
      {
      op->vtkHyperTreeGrid::SetBranchFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetBranchFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBranchFactor() :
      op->vtkHyperTreeGrid::GetBranchFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimension(temp0);
      }
    else
      {
      op->vtkHyperTreeGrid::SetDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkHyperTreeGrid::GetDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkHyperTreeGrid::GetNumberOfCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkHyperTreeGrid::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfLeaves() :
      op->vtkHyperTreeGrid::GetNumberOfLeaves());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfLevels(temp0) :
      op->vtkHyperTreeGrid::GetNumberOfLevels(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfTrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTrees() :
      op->vtkHyperTreeGrid::GetNumberOfTrees());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetXCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetXCoordinates(temp0);
      }
    else
      {
      op->vtkHyperTreeGrid::SetXCoordinates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetXCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetXCoordinates() :
      op->vtkHyperTreeGrid::GetXCoordinates());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetYCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetYCoordinates(temp0);
      }
    else
      {
      op->vtkHyperTreeGrid::SetYCoordinates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetYCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetYCoordinates() :
      op->vtkHyperTreeGrid::GetYCoordinates());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetZCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetZCoordinates(temp0);
      }
    else
      {
      op->vtkHyperTreeGrid::SetZCoordinates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetZCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetZCoordinates() :
      op->vtkHyperTreeGrid::GetZCoordinates());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetMaterialMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkBitArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBitArray"))
    {
    if (ap.IsBound())
      {
      op->SetMaterialMask(temp0);
      }
    else
      {
      op->vtkHyperTreeGrid::SetMaterialMask(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetMaterialMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->GetMaterialMask() :
      op->vtkHyperTreeGrid::GetMaterialMask());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetMaterialMaskIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialMaskIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->SetMaterialMaskIndex(temp0);
      }
    else
      {
      op->vtkHyperTreeGrid::SetMaterialMaskIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetMaterialMaskIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialMaskIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetMaterialMaskIndex() :
      op->vtkHyperTreeGrid::GetMaterialMaskIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GenerateTrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateTrees();
      }
    else
      {
      op->vtkHyperTreeGrid::GenerateTrees();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkHyperTreeCursor *tempr = (ap.IsBound() ?
      op->NewCursor(temp0) :
      op->vtkHyperTreeGrid::NewCursor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SubdivideLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubdivideLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkHyperTreeCursor *temp0 = NULL;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeCursor") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SubdivideLeaf(temp0, temp1);
      }
    else
      {
      op->vtkHyperTreeGrid::SubdivideLeaf(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint(temp0) :
      op->vtkHyperTreeGrid::GetPoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetPoint(temp0, temp1);
      }
    else
      {
      op->vtkHyperTreeGrid::GetPoint(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkHyperTreeGrid_GetPoint_s1(self, args);
    case 2:
      return PyvtkHyperTreeGrid_GetPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return NULL;
}



static PyObject *
PyvtkHyperTreeGrid_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkHyperTreeGrid::GetCell(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  vtkGenericCell *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericCell"))
    {
    if (ap.IsBound())
      {
      op->GetCell(temp0, temp1);
      }
    else
      {
      op->vtkHyperTreeGrid::GetCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkHyperTreeGrid_GetCell_s1(self, args);
    case 2:
      return PyvtkHyperTreeGrid_GetCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return NULL;
}



static PyObject *
PyvtkHyperTreeGrid_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkHyperTreeGrid::GetCellType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetCellPoints(temp0, temp1);
      }
    else
      {
      op->vtkHyperTreeGrid::GetCellPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetPointCells(temp0, temp1);
      }
    else
      {
      op->vtkHyperTreeGrid::GetPointCells(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetCellNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetCellNeighbors(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHyperTreeGrid::GetCellNeighbors(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_FindPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindPoint(temp0) :
      op->vtkHyperTreeGrid::FindPoint(temp0));

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
PyvtkHyperTreeGrid_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  vtkCell *temp1 = NULL;
  vtkIdType temp2;
  double temp3;
  int temp4;
  double temp5[3];
  double save5[3];
  const int size5 = 3;
  double *temp6 = NULL;
  double *save6 = NULL;
  double small6[8];
  int size6 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size6 = ap.GetArgSize(6);
    temp6 = small6;
    if (size6 > 4)
      {
      temp6 = new double[2*size6];
      }
    save6 = &temp6[size6];
    }

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp5, save5, size5);
    ap.SaveArray(temp6, save6, size6);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkHyperTreeGrid::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (ap.ArrayHasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(6, temp6, size6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp6 && temp6 != small6)
    {
    delete [] temp6;
    }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  vtkCell *temp1 = NULL;
  vtkGenericCell *temp2 = NULL;
  vtkIdType temp3;
  double temp4;
  int temp5;
  double temp6[3];
  double save6[3];
  const int size6 = 3;
  double *temp7 = NULL;
  double *save7 = NULL;
  double small7[8];
  int size7 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size7 = ap.GetArgSize(7);
    temp7 = small7;
    if (size7 > 4)
      {
      temp7 = new double[2*size7];
      }
    save7 = &temp7[size7];
    }

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp6, save6, size6);
    ap.SaveArray(temp7, save7, size7);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkHyperTreeGrid::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (ap.ArrayHasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(6, temp6, size6);
      }

    if (ap.ArrayHasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(7, temp7, size7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp7 && temp7 != small7)
    {
    delete [] temp7;
    }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 7:
      return PyvtkHyperTreeGrid_FindCell_s1(self, args);
    case 8:
      return PyvtkHyperTreeGrid_FindCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return NULL;
}



static PyObject *
PyvtkHyperTreeGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkHyperTreeGrid::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkHyperTreeGrid::GetMaxCellSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkHyperTreeGrid::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkHyperTreeGrid::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetExtentType() :
      op->vtkHyperTreeGrid::GetExtentType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkHyperTreeGrid::GetActualMemorySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GenerateSuperCursorTraversalTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSuperCursorTraversalTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateSuperCursorTraversalTable();
      }
    else
      {
      op->vtkHyperTreeGrid::GenerateSuperCursorTraversalTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfChildren() :
      op->vtkHyperTreeGrid::GetNumberOfChildren());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetLevelZeroCoordsFromIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelZeroCoordsFromIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->GetLevelZeroCoordsFromIndex(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkHyperTreeGrid::GetLevelZeroCoordsFromIndex(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperTreeGrid_Methods[] = {
  {(char*)"LEVELS", PyvtkHyperTreeGrid_LEVELS, METH_VARARGS | METH_STATIC,
   (char*)"V.LEVELS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *LEVELS()\n\n"},
  {(char*)"DIMENSION", PyvtkHyperTreeGrid_DIMENSION, METH_VARARGS | METH_STATIC,
   (char*)"V.DIMENSION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DIMENSION()\n\n"},
  {(char*)"SIZES", PyvtkHyperTreeGrid_SIZES, METH_VARARGS | METH_STATIC,
   (char*)"V.SIZES() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *SIZES()\n\n"},
  {(char*)"GetClassName", PyvtkHyperTreeGrid_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperTreeGrid_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperTreeGrid_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHyperTreeGrid\nC++: vtkHyperTreeGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperTreeGrid_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperTreeGrid\nC++: vtkHyperTreeGrid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkHyperTreeGrid_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"CopyStructure", PyvtkHyperTreeGrid_CopyStructure, METH_VARARGS,
   (char*)"V.CopyStructure(vtkDataSet)\nC++: void CopyStructure(vtkDataSet *)\n\nCopy the internal geometric and topological structure of a\nvtkHyperTreeGrid object.\n"},
  {(char*)"SetGridSize", PyvtkHyperTreeGrid_SetGridSize, METH_VARARGS,
   (char*)"V.SetGridSize([int, int, int])\nC++: void SetGridSize(unsigned int[3])\nV.SetGridSize(int, int, int)\nC++: void SetGridSize(unsigned int i, unsigned int j,\n    unsigned int k)\n\nSet/Get sizes of this rectilinear grid dataset\n"},
  {(char*)"GetGridSize", PyvtkHyperTreeGrid_GetGridSize, METH_VARARGS,
   (char*)"V.GetGridSize() -> (int, int, int)\nC++: unsigned int *GetGridSize()\n\n"},
  {(char*)"SetGridExtent", PyvtkHyperTreeGrid_SetGridExtent, METH_VARARGS,
   (char*)"V.SetGridExtent([int, int, int, int, int, int])\nC++: void SetGridExtent(int extent[6])\nV.SetGridExtent(int, int, int, int, int, int)\nC++: void SetGridExtent(int iMin, int iMax, int jMin, int jMax,\n    int kMin, int kMax)\n\nSet/Get extent of this rectilinear grid dataset\n"},
  {(char*)"SetTransposedRootIndexing", PyvtkHyperTreeGrid_SetTransposedRootIndexing, METH_VARARGS,
   (char*)"V.SetTransposedRootIndexing(bool)\nC++: void SetTransposedRootIndexing(bool a)\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {(char*)"GetTransposedRootIndexing", PyvtkHyperTreeGrid_GetTransposedRootIndexing, METH_VARARGS,
   (char*)"V.GetTransposedRootIndexing() -> bool\nC++: bool GetTransposedRootIndexing()\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {(char*)"SetIndexingModeToKJI", PyvtkHyperTreeGrid_SetIndexingModeToKJI, METH_VARARGS,
   (char*)"V.SetIndexingModeToKJI()\nC++: void SetIndexingModeToKJI()\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {(char*)"SetIndexingModeToIJK", PyvtkHyperTreeGrid_SetIndexingModeToIJK, METH_VARARGS,
   (char*)"V.SetIndexingModeToIJK()\nC++: void SetIndexingModeToIJK()\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {(char*)"SetBranchFactor", PyvtkHyperTreeGrid_SetBranchFactor, METH_VARARGS,
   (char*)"V.SetBranchFactor(int)\nC++: void SetBranchFactor(unsigned int)\n\nSet/Get the subdivision factor in the grid refinement scheme NB:\nCan only be 2 or 3\n"},
  {(char*)"GetBranchFactor", PyvtkHyperTreeGrid_GetBranchFactor, METH_VARARGS,
   (char*)"V.GetBranchFactor() -> int\nC++: unsigned int GetBranchFactor()\n\nSet/Get the subdivision factor in the grid refinement scheme NB:\nCan only be 2 or 3\n"},
  {(char*)"SetDimension", PyvtkHyperTreeGrid_SetDimension, METH_VARARGS,
   (char*)"V.SetDimension(int)\nC++: void SetDimension(unsigned int)\n\nSet/Get the dimensionality of the grid NB: Can only be 1, 2 or 3\n"},
  {(char*)"GetDimension", PyvtkHyperTreeGrid_GetDimension, METH_VARARGS,
   (char*)"V.GetDimension() -> int\nC++: unsigned int GetDimension()\n\nSet/Get the dimensionality of the grid NB: Can only be 1, 2 or 3\n"},
  {(char*)"GetNumberOfCells", PyvtkHyperTreeGrid_GetNumberOfCells, METH_VARARGS,
   (char*)"V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells()\n\nReturn the number of cells in the dual grid.\n"},
  {(char*)"GetNumberOfPoints", PyvtkHyperTreeGrid_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nReturn the number of points in the dual grid.\n"},
  {(char*)"GetNumberOfLeaves", PyvtkHyperTreeGrid_GetNumberOfLeaves, METH_VARARGS,
   (char*)"V.GetNumberOfLeaves() -> int\nC++: vtkIdType GetNumberOfLeaves()\n\nGet the number of leaves in the primal tree grid.\n"},
  {(char*)"GetNumberOfLevels", PyvtkHyperTreeGrid_GetNumberOfLevels, METH_VARARGS,
   (char*)"V.GetNumberOfLevels(int) -> int\nC++: vtkIdType GetNumberOfLevels(vtkIdType)\n\nReturn the number of levels in an individual (primal) tree\n"},
  {(char*)"GetNumberOfTrees", PyvtkHyperTreeGrid_GetNumberOfTrees, METH_VARARGS,
   (char*)"V.GetNumberOfTrees() -> int\nC++: vtkIdType GetNumberOfTrees()\n\nReturn the number of trees in the level 0 grid.\n"},
  {(char*)"SetXCoordinates", PyvtkHyperTreeGrid_SetXCoordinates, METH_VARARGS,
   (char*)"V.SetXCoordinates(vtkDataArray)\nC++: void SetXCoordinates(vtkDataArray *)\n\nSpecify the grid coordinates in the x-direction.\n"},
  {(char*)"GetXCoordinates", PyvtkHyperTreeGrid_GetXCoordinates, METH_VARARGS,
   (char*)"V.GetXCoordinates() -> vtkDataArray\nC++: vtkDataArray *GetXCoordinates()\n\nSpecify the grid coordinates in the x-direction.\n"},
  {(char*)"SetYCoordinates", PyvtkHyperTreeGrid_SetYCoordinates, METH_VARARGS,
   (char*)"V.SetYCoordinates(vtkDataArray)\nC++: void SetYCoordinates(vtkDataArray *)\n\nSpecify the grid coordinates in the y-direction.\n"},
  {(char*)"GetYCoordinates", PyvtkHyperTreeGrid_GetYCoordinates, METH_VARARGS,
   (char*)"V.GetYCoordinates() -> vtkDataArray\nC++: vtkDataArray *GetYCoordinates()\n\nSpecify the grid coordinates in the y-direction.\n"},
  {(char*)"SetZCoordinates", PyvtkHyperTreeGrid_SetZCoordinates, METH_VARARGS,
   (char*)"V.SetZCoordinates(vtkDataArray)\nC++: void SetZCoordinates(vtkDataArray *)\n\nSpecify the grid coordinates in the z-direction.\n"},
  {(char*)"GetZCoordinates", PyvtkHyperTreeGrid_GetZCoordinates, METH_VARARGS,
   (char*)"V.GetZCoordinates() -> vtkDataArray\nC++: vtkDataArray *GetZCoordinates()\n\nSpecify the grid coordinates in the z-direction.\n"},
  {(char*)"SetMaterialMask", PyvtkHyperTreeGrid_SetMaterialMask, METH_VARARGS,
   (char*)"V.SetMaterialMask(vtkBitArray)\nC++: void SetMaterialMask(vtkBitArray *)\n\nSpecify the blanking mask of primal leaf cells\n"},
  {(char*)"GetMaterialMask", PyvtkHyperTreeGrid_GetMaterialMask, METH_VARARGS,
   (char*)"V.GetMaterialMask() -> vtkBitArray\nC++: vtkBitArray *GetMaterialMask()\n\nSpecify the blanking mask of primal leaf cells\n"},
  {(char*)"SetMaterialMaskIndex", PyvtkHyperTreeGrid_SetMaterialMaskIndex, METH_VARARGS,
   (char*)"V.SetMaterialMaskIndex(vtkIdTypeArray)\nC++: virtual void SetMaterialMaskIndex(vtkIdTypeArray *)\n\nSpecify the visibility mask of primal leaf cells\n"},
  {(char*)"GetMaterialMaskIndex", PyvtkHyperTreeGrid_GetMaterialMaskIndex, METH_VARARGS,
   (char*)"V.GetMaterialMaskIndex() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetMaterialMaskIndex()\n\nSpecify the visibility mask of primal leaf cells\n"},
  {(char*)"GenerateTrees", PyvtkHyperTreeGrid_GenerateTrees, METH_VARARGS,
   (char*)"V.GenerateTrees()\nC++: virtual void GenerateTrees()\n\nThis method must be called once the tree settings change\n"},
  {(char*)"NewCursor", PyvtkHyperTreeGrid_NewCursor, METH_VARARGS,
   (char*)"V.NewCursor(int) -> vtkHyperTreeCursor\nC++: vtkHyperTreeCursor *NewCursor(vtkIdType)\n\nCreate a new cursor: an object that can traverse the cells of an\nindividual hyper tree.\n\\post result_exists: result!=0\n"},
  {(char*)"SubdivideLeaf", PyvtkHyperTreeGrid_SubdivideLeaf, METH_VARARGS,
   (char*)"V.SubdivideLeaf(vtkHyperTreeCursor, int)\nC++: void SubdivideLeaf(vtkHyperTreeCursor *, vtkIdType)\n\nSubdivide node pointed by cursor, only if its a leaf. At the end,\ncursor points on the node that used to be leaf.\n\\pre leaf_exists: leaf!=0\n\\pre is_a_leaf: leaf->CurrentIsLeaf()\n"},
  {(char*)"GetPoint", PyvtkHyperTreeGrid_GetPoint, METH_VARARGS,
   (char*)"V.GetPoint(int) -> (float, ...)\nC++: virtual double *GetPoint(vtkIdType)\nV.GetPoint(int, [float, float, float])\nC++: virtual void GetPoint(vtkIdType, double[3])\n\nThis method should be avoided in favor of cell/point iterators.\nRandom access to points requires that arrays are created\nexplicitly. Get point coordinates with ptId such that: 0 <= ptId\n< NumberOfPoints. THIS METHOD IS NOT THREAD SAFE.\n"},
  {(char*)"GetCell", PyvtkHyperTreeGrid_GetCell, METH_VARARGS,
   (char*)"V.GetCell(int) -> vtkCell\nC++: virtual vtkCell *GetCell(vtkIdType)\nV.GetCell(int, vtkGenericCell)\nC++: virtual void GetCell(vtkIdType, vtkGenericCell *)\n\nThis method should be avoided in favor of cell/point iterators.\nRandom access to cells requires that connectivity arrays are\ncreated explicitly. Get cell with cellId such that: 0 <= cellId <\nNumberOfCells. THIS METHOD IS NOT THREAD SAFE.\n"},
  {(char*)"GetCellType", PyvtkHyperTreeGrid_GetCellType, METH_VARARGS,
   (char*)"V.GetCellType(int) -> int\nC++: virtual int GetCellType(vtkIdType)\n\nAll cell types are 2: quadrilaters,3d: hexahedrons.  They may be\ndegenerate though. Get type of cell with cellId such that: 0 <=\ncellId < NumberOfCells. THIS METHOD IS THREAD SAFE IF FIRST\nCALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {(char*)"GetCellPoints", PyvtkHyperTreeGrid_GetCellPoints, METH_VARARGS,
   (char*)"V.GetCellPoints(int, vtkIdList)\nC++: virtual void GetCellPoints(vtkIdType, vtkIdList *)\n\nThis method should be avoided in favor of cell/point iterators.\nRandom access to cells requires that connectivity arrays are\ncreated explicitly. Topological inquiry to get points defining\ncell. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE\nTHREAD AND THE DATASET IS NOT MODIFIED\n"},
  {(char*)"GetPointCells", PyvtkHyperTreeGrid_GetPointCells, METH_VARARGS,
   (char*)"V.GetPointCells(int, vtkIdList)\nC++: virtual void GetPointCells(vtkIdType, vtkIdList *)\n\nThis method should be avoided in favor of cell/point iterators.\nRandom access to cells requires that connectivity arrays are\ncreated explicitly. Topological inquiry to get cells using point.\nTHIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD\nAND THE DATASET IS NOT MODIFIED\n"},
  {(char*)"GetCellNeighbors", PyvtkHyperTreeGrid_GetCellNeighbors, METH_VARARGS,
   (char*)"V.GetCellNeighbors(int, vtkIdList, vtkIdList)\nC++: virtual void GetCellNeighbors(vtkIdType, vtkIdList *,\n    vtkIdList *)\n\nThis method should be avoided in favor of cell/point iterators.\nRandom access to cells requires that connectivity arrays are\ncreated explicitly. Topological inquiry to get all cells using\nlist of points exclusive of cell specified (e.g., cellId). Note\nthat the list consists of only cells that use ALL the points\nprovided. This is exactly the same as GetCellNeighbors in\nunstructured grid. THIS METHOD IS THREAD SAFE IF FIRST CALLED\nFROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {(char*)"FindPoint", PyvtkHyperTreeGrid_FindPoint, METH_VARARGS,
   (char*)"V.FindPoint([float, float, float]) -> int\nC++: virtual vtkIdType FindPoint(double x[3])\n\nFind cell to which this point belongs, or at least closest one,\neven if the point is outside the grid. Since dual points are\nleaves, use the structure of the Tree instead of a point locator.\n"},
  {(char*)"FindCell", PyvtkHyperTreeGrid_FindCell, METH_VARARGS,
   (char*)"V.FindCell([float, float, float], vtkCell, int, float, int,\n    [float, float, float], [float, ...]) -> int\nC++: virtual vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkIdType cellId, double tol2, int &subId, double pcoords[3],\n    double *weights)\nV.FindCell([float, float, float], vtkCell, vtkGenericCell, int,\n    float, int, [float, float, float], [float, ...]) -> int\nC++: virtual vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkGenericCell *gencell, vtkIdType cellId, double tol2,\n    int &subId, double pcoords[3], double *weights)\n\nLocate cell based on global coordinate x and tolerance squared.\nIf cell and cellId is non-NULL, then search starts from this cell\nand looks at immediate neighbors.  Returns cellId >= 0 if inside,\n< 0 otherwise.  The parametric coordinates are provided in\npcoords[3]. The interpolation weights are returned in weights[].\n(The number of weights is equal to the number of points in the\nfound cell). Tolerance is used to control how close the point is\nto be considered \"in\" the cell. NB: There is actually no need for\na starting cell, just use the point, as the tree structure is\nefficient enough. THIS METHOD IS NOT THREAD SAFE.\n"},
  {(char*)"Initialize", PyvtkHyperTreeGrid_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nRestore data object to initial state, THIS METHOD IS NOT THREAD\nSAFE.\n"},
  {(char*)"GetMaxCellSize", PyvtkHyperTreeGrid_GetMaxCellSize, METH_VARARGS,
   (char*)"V.GetMaxCellSize() -> int\nC++: virtual int GetMaxCellSize()\n\nConvenience method returns largest cell size in dataset. This is\ngenerally used to allocate memory for supporting data structures.\nThis is the number of points of a cell. THIS METHOD IS THREAD\nSAFE\n"},
  {(char*)"ShallowCopy", PyvtkHyperTreeGrid_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkHyperTreeGrid_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *)\n\nShallow and Deep copy.\n"},
  {(char*)"GetExtentType", PyvtkHyperTreeGrid_GetExtentType, METH_VARARGS,
   (char*)"V.GetExtentType() -> int\nC++: int GetExtentType()\n\nStructured extent. The extent type is a 3D extent\n"},
  {(char*)"GetActualMemorySize", PyvtkHyperTreeGrid_GetActualMemorySize, METH_VARARGS,
   (char*)"V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated. The memory size\nreturned is guaranteed to be greater than or equal to the memory\nrequired to represent the data (e.g., extra space in arrays, etc.\nare not included in the return value). THIS METHOD IS THREAD\nSAFE.\n"},
  {(char*)"GenerateSuperCursorTraversalTable", PyvtkHyperTreeGrid_GenerateSuperCursorTraversalTable, METH_VARARGS,
   (char*)"V.GenerateSuperCursorTraversalTable()\nC++: void GenerateSuperCursorTraversalTable()\n\nGenerate the table before calling InitializeSuperCursorChild.\n"},
  {(char*)"GetNumberOfChildren", PyvtkHyperTreeGrid_GetNumberOfChildren, METH_VARARGS,
   (char*)"V.GetNumberOfChildren() -> int\nC++: unsigned int GetNumberOfChildren()\n\nThe number of children each node can have.\n"},
  {(char*)"GetLevelZeroCoordsFromIndex", PyvtkHyperTreeGrid_GetLevelZeroCoordsFromIndex, METH_VARARGS,
   (char*)"V.GetLevelZeroCoordsFromIndex(int, int, int, int)\nC++: void GetLevelZeroCoordsFromIndex(vtkIdType index,\n    unsigned int &i, unsigned int &j, unsigned int &k)\n\nConvert a level 0 index to its ijk coordinates according the grid\nsize.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperTreeGrid_StaticNew()
{
  return vtkHyperTreeGrid::New();
}

PyObject *PyVTKClass_vtkHyperTreeGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperTreeGrid_StaticNew,
    PyvtkHyperTreeGrid_Methods,
    "vtkHyperTreeGrid", modulename,
    NULL, NULL,
    PyvtkHyperTreeGrid_Doc(),
    PyVTKClass_vtkDataSetNew(modulename));
  return cls;
}

const char **PyvtkHyperTreeGrid_Doc()
{
  static const char *docstring[] = {
    "vtkHyperTreeGrid - A dataset containing a grid of vtkHyperTree\ninstances\n\n",
    "Superclass: vtkDataSet\n\n",
    "An hypertree grid is a dataset containing a rectilinear grid of root\nnodes, each of which can be refined as a vtkHyperTree grid. This\norganization of the root nodes allows for the definition of\ntree-based AMR grids that do not have uniform geometry. Some filters\ncan be applied on this dataset: contour, outline, geometry.\n\nCaveats:\n\nIt is not a spatial search object. If you are looking for this kin",
    "d\nof octree see vtkCellLocator instead. Extent support is not finished\nyet.\n\nSee Also:\n\nvtkHyperTree vtkRectilinearGrid\n\nThanks:\n\nThis class was written by Philippe Pebay, Joachim Pouderoux and\nCharles Law, Kitware 2013 This work was supported in part by\nCommissariat a l'Energie Atomique (CEA/DIF)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperTreeGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperTreeGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperTreeGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

