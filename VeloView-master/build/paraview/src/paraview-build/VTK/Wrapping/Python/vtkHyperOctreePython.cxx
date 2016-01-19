// python wrapper for vtkHyperOctree
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHyperOctree.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHyperOctree(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHyperOctreeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetNew
extern "C" { PyObject *PyVTKClass_vtkDataSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetNew
#endif

static const char **PyvtkHyperOctree_Doc();


static PyObject *
PyvtkHyperOctree_LEVELS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LEVELS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkHyperOctree::LEVELS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_DIMENSION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DIMENSION");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkHyperOctree::DIMENSION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_SIZES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SIZES");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleVectorKey *tempr = vtkHyperOctree::SIZES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHyperOctree::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperOctree::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperOctree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperOctree::NewInstance());

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
PyvtkHyperOctree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHyperOctree *tempr = vtkHyperOctree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkHyperOctree::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

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
      op->vtkHyperOctree::CopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkHyperOctree::GetDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  int temp0;
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
      op->vtkHyperOctree::SetDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkHyperOctree::GetNumberOfCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetNumberOfLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfLeaves() :
      op->vtkHyperOctree::GetNumberOfLeaves());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkHyperOctree::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetMaxNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxNumberOfPoints(temp0) :
      op->vtkHyperOctree::GetMaxNumberOfPoints(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetMaxNumberOfPointsOnBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfPointsOnBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxNumberOfPointsOnBoundary(temp0) :
      op->vtkHyperOctree::GetMaxNumberOfPointsOnBoundary(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetMaxNumberOfCellsOnBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfCellsOnBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxNumberOfCellsOnBoundary(temp0) :
      op->vtkHyperOctree::GetMaxNumberOfCellsOnBoundary(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkHyperOctree::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHyperOctree::SetSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctree_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0);
      }
    else
      {
      op->vtkHyperOctree::SetSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctree_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkHyperOctree_SetSize_s1(self, args);
    case 1:
      return PyvtkHyperOctree_SetSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return NULL;
}



static PyObject *
PyvtkHyperOctree_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkHyperOctree::GetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHyperOctree::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctree_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkHyperOctree::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctree_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkHyperOctree_SetOrigin_s1(self, args);
    case 1:
      return PyvtkHyperOctree_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkHyperOctree_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkHyperOctree::GetOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_NewCellCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewCellCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperOctreeCursor *tempr = (ap.IsBound() ?
      op->NewCellCursor() :
      op->vtkHyperOctree::NewCellCursor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_SubdivideLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubdivideLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  vtkHyperOctreeCursor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperOctreeCursor"))
    {
    if (ap.IsBound())
      {
      op->SubdivideLeaf(temp0);
      }
    else
      {
      op->vtkHyperOctree::SubdivideLeaf(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_CollapseTerminalNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CollapseTerminalNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  vtkHyperOctreeCursor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperOctreeCursor"))
    {
    if (ap.IsBound())
      {
      op->CollapseTerminalNode(temp0);
      }
    else
      {
      op->vtkHyperOctree::CollapseTerminalNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  vtkIdType temp0;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint(temp0) :
      op->vtkHyperOctree::GetPoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctree_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

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
      op->vtkHyperOctree::GetPoint(temp0, temp1);
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
PyvtkHyperOctree_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkHyperOctree_GetPoint_s1(self, args);
    case 2:
      return PyvtkHyperOctree_GetPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return NULL;
}



static PyObject *
PyvtkHyperOctree_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkHyperOctree::GetCell(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctree_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

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
      op->vtkHyperOctree::GetCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctree_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkHyperOctree_GetCell_s1(self, args);
    case 2:
      return PyvtkHyperOctree_GetCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return NULL;
}



static PyObject *
PyvtkHyperOctree_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkHyperOctree::GetCellType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

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
      op->vtkHyperOctree::GetCellPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

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
      op->vtkHyperOctree::GetPointCells(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetCellNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

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
      op->vtkHyperOctree::GetCellNeighbors(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_FindPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

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
      op->vtkHyperOctree::FindPoint(temp0));

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
PyvtkHyperOctree_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

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
      op->vtkHyperOctree::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkHyperOctree_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

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
      op->vtkHyperOctree::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
PyvtkHyperOctree_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 7:
      return PyvtkHyperOctree_FindCell_s1(self, args);
    case 8:
      return PyvtkHyperOctree_FindCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return NULL;
}



static PyObject *
PyvtkHyperOctree_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkHyperOctree::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkHyperOctree::GetMaxCellSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

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
      op->vtkHyperOctree::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

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
      op->vtkHyperOctree::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetPointsOnFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsOnFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  vtkHyperOctreeCursor *temp0 = NULL;
  int temp1;
  int temp2;
  vtkHyperOctreePointsGrabber *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkHyperOctreeCursor") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkHyperOctreePointsGrabber"))
    {
    if (ap.IsBound())
      {
      op->GetPointsOnFace(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkHyperOctree::GetPointsOnFace(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetPointsOnParentFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsOnParentFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  int temp1;
  vtkHyperOctreeCursor *temp2 = NULL;
  vtkHyperOctreePointsGrabber *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkHyperOctreeCursor") &&
      ap.GetVTKObject(temp3, "vtkHyperOctreePointsGrabber"))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetPointsOnParentFaces(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkHyperOctree::GetPointsOnParentFaces(temp0, temp1, temp2, temp3);
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
PyvtkHyperOctree_GetPointsOnEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsOnEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  vtkHyperOctreeCursor *temp0 = NULL;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkHyperOctreePointsGrabber *temp5 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkHyperOctreeCursor") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkHyperOctreePointsGrabber"))
    {
    if (ap.IsBound())
      {
      op->GetPointsOnEdge(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkHyperOctree::GetPointsOnEdge(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetPointsOnParentEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsOnParentEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  vtkHyperOctreeCursor *temp0 = NULL;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkHyperOctreePointsGrabber *temp5 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkHyperOctreeCursor") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkHyperOctreePointsGrabber"))
    {
    if (ap.IsBound())
      {
      op->GetPointsOnParentEdge(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkHyperOctree::GetPointsOnParentEdge(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetPointsOnEdge2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsOnEdge2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  vtkHyperOctreeCursor *temp0 = NULL;
  int temp1;
  int temp2;
  vtkHyperOctreePointsGrabber *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkHyperOctreeCursor") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkHyperOctreePointsGrabber"))
    {
    if (ap.IsBound())
      {
      op->GetPointsOnEdge2D(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkHyperOctree::GetPointsOnEdge2D(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetPointsOnParentEdge2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsOnParentEdge2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  vtkHyperOctreeCursor *temp0 = NULL;
  int temp1;
  int temp2;
  vtkHyperOctreePointsGrabber *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkHyperOctreeCursor") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkHyperOctreePointsGrabber"))
    {
    if (ap.IsBound())
      {
      op->GetPointsOnParentEdge2D(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkHyperOctree::GetPointsOnParentEdge2D(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetLeafData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetLeafData() :
      op->vtkHyperOctree::GetLeafData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_SetDualGridFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDualGridFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDualGridFlag(temp0);
      }
    else
      {
      op->vtkHyperOctree::SetDualGridFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetDualGridFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDualGridFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDualGridFlag() :
      op->vtkHyperOctree::GetDualGridFlag());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctree *op = static_cast<vtkHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkHyperOctree::GetActualMemorySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctree_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkHyperOctree *tempr = vtkHyperOctree::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctree_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkHyperOctree *tempr = vtkHyperOctree::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperOctree_GetData_Methods[] = {
  {NULL, PyvtkHyperOctree_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkHyperOctree_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkHyperOctree_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkHyperOctree_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkHyperOctree_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkHyperOctree_Methods[] = {
  {(char*)"LEVELS", PyvtkHyperOctree_LEVELS, METH_VARARGS | METH_STATIC,
   (char*)"V.LEVELS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *LEVELS()\n\n"},
  {(char*)"DIMENSION", PyvtkHyperOctree_DIMENSION, METH_VARARGS | METH_STATIC,
   (char*)"V.DIMENSION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DIMENSION()\n\n"},
  {(char*)"SIZES", PyvtkHyperOctree_SIZES, METH_VARARGS | METH_STATIC,
   (char*)"V.SIZES() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *SIZES()\n\n"},
  {(char*)"GetClassName", PyvtkHyperOctree_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperOctree_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperOctree_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHyperOctree\nC++: vtkHyperOctree *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperOctree_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperOctree\nC++: vtkHyperOctree *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkHyperOctree_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"CopyStructure", PyvtkHyperOctree_CopyStructure, METH_VARARGS,
   (char*)"V.CopyStructure(vtkDataSet)\nC++: void CopyStructure(vtkDataSet *ds)\n\nCopy the geometric and topological structure of an input\nrectilinear grid object.\n"},
  {(char*)"GetDimension", PyvtkHyperOctree_GetDimension, METH_VARARGS,
   (char*)"V.GetDimension() -> int\nC++: int GetDimension()\n\nReturn the dimension of the tree (1D:binary tree(2 children),\n2D:quadtree(4 children), 3D:octree (8 children))\n\\post valid_result: result>=1 && result<=3\n"},
  {(char*)"SetDimension", PyvtkHyperOctree_SetDimension, METH_VARARGS,
   (char*)"V.SetDimension(int)\nC++: void SetDimension(int dim)\n\nSet the dimension of the tree with `dim'. See GetDimension() for\ndetails.\n\\pre valid_dim: dim>=1 && dim<=3\n\\post dimension_is_set: GetDimension()==dim\n"},
  {(char*)"GetNumberOfCells", PyvtkHyperOctree_GetNumberOfCells, METH_VARARGS,
   (char*)"V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells()\n\nReturn the number of cells in the dual grid.\n\\post positive_result: result>=0\n"},
  {(char*)"GetNumberOfLeaves", PyvtkHyperOctree_GetNumberOfLeaves, METH_VARARGS,
   (char*)"V.GetNumberOfLeaves() -> int\nC++: vtkIdType GetNumberOfLeaves()\n\nGet the number of leaves in the tree.\n"},
  {(char*)"GetNumberOfPoints", PyvtkHyperOctree_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nReturn the number of points in the dual grid.\n\\post positive_result: result>=0\n"},
  {(char*)"GetMaxNumberOfPoints", PyvtkHyperOctree_GetMaxNumberOfPoints, METH_VARARGS,
   (char*)"V.GetMaxNumberOfPoints(int) -> int\nC++: vtkIdType GetMaxNumberOfPoints(int level)\n\nReturn the number of points corresponding to an hyperoctree\nstarting at level `level' where all the leaves at at the last\nlevel. In this case, the hyperoctree is like a uniform grid. So\nthis number is the number of points of the uniform grid.\n\\pre positive_level: level>=0 && level<this->GetNumberOfLevels()\n\\post definition:\n    result==(2^(GetNumberOfLevels()-level-1)+1)^GetDimension()\n"},
  {(char*)"GetMaxNumberOfPointsOnBoundary", PyvtkHyperOctree_GetMaxNumberOfPointsOnBoundary, METH_VARARGS,
   (char*)"V.GetMaxNumberOfPointsOnBoundary(int) -> int\nC++: vtkIdType GetMaxNumberOfPointsOnBoundary(int level)\n\nReturn the number of points corresponding to the boundary of an\nhyperoctree starting at level `level' where all the leaves at at\nthe last level. In this case, the hyperoctree is like a uniform\ngrid. So this number is the number of points of on the boundary\nof the uniform grid. For an octree, the boundary are the faces.\nFor a quadtree, the boundary are the edges.\n\\pre 2d_or_3d: this->GetDimension()==2 || this->GetDimension()==3\n\\pre positive_level: level>=0 && level<this->GetNumberOfLevels()\n\\post min_result:\n    result>=GetMaxNumberOfPoints(this->GetNumberOfLevels()-1)\n\\post max_result: result<=GetMaxNumberOfPoints(level)\n"},
  {(char*)"GetMaxNumberOfCellsOnBoundary", PyvtkHyperOctree_GetMaxNumberOfCellsOnBoundary, METH_VARARGS,
   (char*)"V.GetMaxNumberOfCellsOnBoundary(int) -> int\nC++: vtkIdType GetMaxNumberOfCellsOnBoundary(int level)\n\nReturn the number of cells corresponding to the boundary of a\ncell of level `level' where all the leaves at at the last level.\n\\pre positive_level: level>=0 && level<this->GetNumberOfLevels()\n\\post positive_result: result>=0\n"},
  {(char*)"GetNumberOfLevels", PyvtkHyperOctree_GetNumberOfLevels, METH_VARARGS,
   (char*)"V.GetNumberOfLevels() -> int\nC++: vtkIdType GetNumberOfLevels()\n\nReturn the number of levels.\n\\post result_greater_or_equal_to_one: result>=1\n"},
  {(char*)"SetSize", PyvtkHyperOctree_SetSize, METH_VARARGS,
   (char*)"V.SetSize(float, float, float)\nC++: void SetSize(double, double, double)\nV.SetSize((float, float, float))\nC++: void SetSize(double a[3])\n\n"},
  {(char*)"GetSize", PyvtkHyperOctree_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> (float, float, float)\nC++: double *GetSize()\n\n"},
  {(char*)"SetOrigin", PyvtkHyperOctree_SetOrigin, METH_VARARGS,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {(char*)"GetOrigin", PyvtkHyperOctree_GetOrigin, METH_VARARGS,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {(char*)"NewCellCursor", PyvtkHyperOctree_NewCellCursor, METH_VARARGS,
   (char*)"V.NewCellCursor() -> vtkHyperOctreeCursor\nC++: vtkHyperOctreeCursor *NewCellCursor()\n\nCreate a new cursor: an object that can traverse the cell of an\nhyperoctree.\n\\post result_exists: result!=0\n"},
  {(char*)"SubdivideLeaf", PyvtkHyperOctree_SubdivideLeaf, METH_VARARGS,
   (char*)"V.SubdivideLeaf(vtkHyperOctreeCursor)\nC++: void SubdivideLeaf(vtkHyperOctreeCursor *leaf)\n\nSubdivide node pointed by cursor, only if its a leaf. At the end,\ncursor points on the node that used to be leaf.\n\\pre leaf_exists: leaf!=0\n\\pre is_a_leaf: leaf->CurrentIsLeaf()\n"},
  {(char*)"CollapseTerminalNode", PyvtkHyperOctree_CollapseTerminalNode, METH_VARARGS,
   (char*)"V.CollapseTerminalNode(vtkHyperOctreeCursor)\nC++: void CollapseTerminalNode(vtkHyperOctreeCursor *node)\n\nCollapse a node for which all children are leaves. At the end,\ncursor points on the leaf that used to be a node.\n\\pre node_exists: node!=0\n\\pre node_is_node: !node->CurrentIsLeaf()\n\\pre children_are_leaves: node->CurrentIsTerminalNode()\n"},
  {(char*)"GetPoint", PyvtkHyperOctree_GetPoint, METH_VARARGS,
   (char*)"V.GetPoint(int) -> (float, float, float)\nC++: virtual double *GetPoint(vtkIdType ptId)\nV.GetPoint(int, [float, float, float])\nC++: virtual void GetPoint(vtkIdType id, double x[3])\n\nGet point coordinates with ptId such that: 0 <= ptId <\nNumberOfPoints. THIS METHOD IS NOT THREAD SAFE.\n"},
  {(char*)"GetCell", PyvtkHyperOctree_GetCell, METH_VARARGS,
   (char*)"V.GetCell(int) -> vtkCell\nC++: virtual vtkCell *GetCell(vtkIdType cellId)\nV.GetCell(int, vtkGenericCell)\nC++: virtual void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n\nGet cell with cellId such that: 0 <= cellId < NumberOfCells. THIS\nMETHOD IS NOT THREAD SAFE.\n"},
  {(char*)"GetCellType", PyvtkHyperOctree_GetCellType, METH_VARARGS,
   (char*)"V.GetCellType(int) -> int\nC++: virtual int GetCellType(vtkIdType cellId)\n\nGet type of cell with cellId such that: 0 <= cellId <\nNumberOfCells. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A\nSINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {(char*)"GetCellPoints", PyvtkHyperOctree_GetCellPoints, METH_VARARGS,
   (char*)"V.GetCellPoints(int, vtkIdList)\nC++: virtual void GetCellPoints(vtkIdType cellId,\n    vtkIdList *ptIds)\n\nTopological inquiry to get points defining cell. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {(char*)"GetPointCells", PyvtkHyperOctree_GetPointCells, METH_VARARGS,
   (char*)"V.GetPointCells(int, vtkIdList)\nC++: virtual void GetPointCells(vtkIdType ptId,\n    vtkIdList *cellIds)\n\nTopological inquiry to get cells using point. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {(char*)"GetCellNeighbors", PyvtkHyperOctree_GetCellNeighbors, METH_VARARGS,
   (char*)"V.GetCellNeighbors(int, vtkIdList, vtkIdList)\nC++: virtual void GetCellNeighbors(vtkIdType cellId,\n    vtkIdList *ptIds, vtkIdList *cellIds)\n\nTopological inquiry to get all cells using list of points\nexclusive of cell specified (e.g., cellId). Note that the list\nconsists of only cells that use ALL the points provided. THIS\nMETHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND\nTHE DATASET IS NOT MODIFIED\n"},
  {(char*)"FindPoint", PyvtkHyperOctree_FindPoint, METH_VARARGS,
   (char*)"V.FindPoint([float, float, float]) -> int\nC++: virtual vtkIdType FindPoint(double x[3])\n\n"},
  {(char*)"FindCell", PyvtkHyperOctree_FindCell, METH_VARARGS,
   (char*)"V.FindCell([float, float, float], vtkCell, int, float, int,\n    [float, float, float], [float, ...]) -> int\nC++: virtual vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkIdType cellId, double tol2, int &subId, double pcoords[3],\n    double *weights)\nV.FindCell([float, float, float], vtkCell, vtkGenericCell, int,\n    float, int, [float, float, float], [float, ...]) -> int\nC++: virtual vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkGenericCell *gencell, vtkIdType cellId, double tol2,\n    int &subId, double pcoords[3], double *weights)\n\nLocate cell based on global coordinate x and tolerance squared.\nIf cell and cellId is non-NULL, then search starts from this cell\nand looks at immediate neighbors.  Returns cellId >= 0 if inside,\n< 0 otherwise.  The parametric coordinates are provided in\npcoords[3]. The interpolation weights are returned in weights[].\n(The number of weights is equal to the number of points in the\nfound cell). Tolerance is used to control how close the point is\nto be considered \"in\" the cell. THIS METHOD IS NOT THREAD SAFE.\n"},
  {(char*)"Initialize", PyvtkHyperOctree_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nRestore data object to initial state, THIS METHOD IS NOT THREAD\nSAFE.\n"},
  {(char*)"GetMaxCellSize", PyvtkHyperOctree_GetMaxCellSize, METH_VARARGS,
   (char*)"V.GetMaxCellSize() -> int\nC++: virtual int GetMaxCellSize()\n\nConvenience method returns largest cell size in dataset. This is\ngenerally used to allocate memory for supporting data structures.\nThis is the number of points of a cell. THIS METHOD IS THREAD\nSAFE\n"},
  {(char*)"ShallowCopy", PyvtkHyperOctree_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkHyperOctree_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"GetPointsOnFace", PyvtkHyperOctree_GetPointsOnFace, METH_VARARGS,
   (char*)"V.GetPointsOnFace(vtkHyperOctreeCursor, int, int,\n    vtkHyperOctreePointsGrabber)\nC++: void GetPointsOnFace(vtkHyperOctreeCursor *sibling, int face,\n     int level, vtkHyperOctreePointsGrabber *grabber)\n\nGet the points of node `sibling' on its face `face'.\n\\pre sibling_exists: sibling!=0\n\\pre sibling_not_leaf: !sibling->CurrentIsLeaf()\n\\pre sibling_3d: sibling->GetDimension()==3\n\\pre valid_face: face>=0 && face<6\n\\pre valid_level_not_leaf: level>=0\n    level<(this->GetNumberOfLevels()-1)\n"},
  {(char*)"GetPointsOnParentFaces", PyvtkHyperOctree_GetPointsOnParentFaces, METH_VARARGS,
   (char*)"V.GetPointsOnParentFaces([int, int, int], int,\n    vtkHyperOctreeCursor, vtkHyperOctreePointsGrabber)\nC++: void GetPointsOnParentFaces(int faces[3], int level,\n    vtkHyperOctreeCursor *cursor,\n    vtkHyperOctreePointsGrabber *grabber)\n\nGet the points of the parent node of `cursor' on its faces\n`faces' at level `level' or deeper.\n\\pre cursor_exists: cursor!=0\n\\pre cursor_3d: cursor->GetDimension()==3\n\\pre valid_level: level>=0\n\\pre boolean_faces: (faces[0]==0 || faces[0]==1) && (faces[1]==0\n    || faces[1]==1) && (faces[2]==0 || faces[2]==1)\n"},
  {(char*)"GetPointsOnEdge", PyvtkHyperOctree_GetPointsOnEdge, METH_VARARGS,
   (char*)"V.GetPointsOnEdge(vtkHyperOctreeCursor, int, int, int, int,\n    vtkHyperOctreePointsGrabber)\nC++: void GetPointsOnEdge(vtkHyperOctreeCursor *sibling,\n    int level, int axis, int k, int j,\n    vtkHyperOctreePointsGrabber *grabber)\n\nGet the points of node `sibling' on its edge `axis','k','j'. If\naxis==0, the edge is X-aligned and k gives the z coordinate and j\nthe y-coordinate. If axis==1, the edge is Y-aligned and k gives\nthe x coordinate and j the z coordinate. If axis==2, the edge is\nZ-aligned and k gives the y coordinate and j the x coordinate.\n\\pre sibling_exists: sibling!=0\n\\pre sibling_3d: sibling->GetDimension()==3\n\\pre sibling_not_leaf: !sibling->CurrentIsLeaf()\n\\pre valid_axis: axis>=0 && axis<3\n\\pre valid_k: k>=0 && k<=1\n\\pre valid_j: j>=0 && j<=1\n\\pre valid_level_not_leaf: level>=0\n    level<(this->Input->GetNumberOfLevels()-1)\n"},
  {(char*)"GetPointsOnParentEdge", PyvtkHyperOctree_GetPointsOnParentEdge, METH_VARARGS,
   (char*)"V.GetPointsOnParentEdge(vtkHyperOctreeCursor, int, int, int, int,\n    vtkHyperOctreePointsGrabber)\nC++: void GetPointsOnParentEdge(vtkHyperOctreeCursor *cursor,\n    int level, int axis, int k, int j,\n    vtkHyperOctreePointsGrabber *grabber)\n\nGet the points of the parent node of `cursor' on its edge\n`axis','k','j' at level `level' or deeper. If axis==0, the edge\nis X-aligned and k gives the z coordinate and j the y-coordinate.\nIf axis==1, the edge is Y-aligned and k gives the x coordinate\nand j the z coordinate. If axis==2, the edge is Z-aligned and k\ngives the y coordinate and j the x coordinate.\n\\pre cursor_exists: cursor!=0\n\\pre cursor_3d: cursor->GetDimension()==3\n\\pre valid_level: level>=0\n\\pre valid_range_axis: axis>=0 && axis<3\n\\pre valid_range_k: k>=0 && k<=1\n\\pre valid_range_j: j>=0 && j<=1\n"},
  {(char*)"GetPointsOnEdge2D", PyvtkHyperOctree_GetPointsOnEdge2D, METH_VARARGS,
   (char*)"V.GetPointsOnEdge2D(vtkHyperOctreeCursor, int, int,\n    vtkHyperOctreePointsGrabber)\nC++: void GetPointsOnEdge2D(vtkHyperOctreeCursor *sibling,\n    int edge, int level, vtkHyperOctreePointsGrabber *grabber)\n\nGet the points of node `sibling' on its edge `edge'.\n\\pre sibling_exists: sibling!=0\n\\pre sibling_not_leaf: !sibling->CurrentIsLeaf()\n\\pre sibling_2d: sibling->GetDimension()==2\n\\pre valid_edge: edge>=0 && edge<4\n\\pre valid_level_not_leaf: level>=0\n    level<(this->Input->GetNumberOfLevels()-1)\n"},
  {(char*)"GetPointsOnParentEdge2D", PyvtkHyperOctree_GetPointsOnParentEdge2D, METH_VARARGS,
   (char*)"V.GetPointsOnParentEdge2D(vtkHyperOctreeCursor, int, int,\n    vtkHyperOctreePointsGrabber)\nC++: void GetPointsOnParentEdge2D(vtkHyperOctreeCursor *cursor,\n    int edge, int level, vtkHyperOctreePointsGrabber *grabber)\n\nGet the points of the parent node of `cursor' on its edge `edge'\nat level `level' or deeper. (edge=0 for -X, 1 for +X, 2 for -Y, 3\nfor +Y)\n\\pre cursor_exists: cursor!=0\n\\pre cursor_2d: cursor->GetDimension()==2\n\\pre valid_level: level>=0\n\\pre valid_edge: edge>=0 && edge<4\n"},
  {(char*)"GetLeafData", PyvtkHyperOctree_GetLeafData, METH_VARARGS,
   (char*)"V.GetLeafData() -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *GetLeafData()\n\nA generic way to set the leaf data attributes. This can be either\npoint data for dual or cell data for normal grid.\n"},
  {(char*)"SetDualGridFlag", PyvtkHyperOctree_SetDualGridFlag, METH_VARARGS,
   (char*)"V.SetDualGridFlag(int)\nC++: void SetDualGridFlag(int flag)\n\nSwitch between returning leaves as cells, or the dual grid.\n"},
  {(char*)"GetDualGridFlag", PyvtkHyperOctree_GetDualGridFlag, METH_VARARGS,
   (char*)"V.GetDualGridFlag() -> int\nC++: int GetDualGridFlag()\n\nSwitch between returning leaves as cells, or the dual grid.\n"},
  {(char*)"GetActualMemorySize", PyvtkHyperOctree_GetActualMemorySize, METH_VARARGS,
   (char*)"V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated. The memory size\nreturned is guaranteed to be greater than or equal to the memory\nrequired to represent the data (e.g., extra space in arrays, etc.\nare not included in the return value). THIS METHOD IS THREAD\nSAFE.\n"},
  {(char*)"GetData", PyvtkHyperOctree_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkHyperOctree\nC++: static vtkHyperOctree *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkHyperOctree\nC++: static vtkHyperOctree *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperOctree_StaticNew()
{
  return vtkHyperOctree::New();
}

PyObject *PyVTKClass_vtkHyperOctreeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperOctree_StaticNew,
    PyvtkHyperOctree_Methods,
    "vtkHyperOctree", modulename,
    NULL, NULL,
    PyvtkHyperOctree_Doc(),
    PyVTKClass_vtkDataSetNew(modulename));
  return cls;
}

const char **PyvtkHyperOctree_Doc()
{
  static const char *docstring[] = {
    "vtkHyperOctree - A dataset structured as a tree where each node has\n\n",
    "Superclass: vtkDataSet\n\n",
    "An hyperoctree is a dataset where each node has either exactly 2^n\nchildren or no child at all if the node is a leaf. `n' is the\ndimension of the dataset (1 (binary tree), 2 (quadtree) or 3 (octree)\n). The class name comes from the following paper:\n\n\n @ARTICLE{yau-srihari-1983,\n  author={Mann-May Yau and Sargur N. Srihari},\n  title={A Hierarchical Data Structure for Multidimensional Digital Images",
    "},\n  journal={Communications of the ACM},\n  month={July},\n  year={1983},\n  volume={26},\n  number={7},\n  pages={504--515}\n  }\n \n\nEach node is a cell. Attributes are associated with cells, not with\npoints. The geometry is implicitly given by the size of the root node\non each axis and position of the center and the orientation. (TODO:\nreview center position and orientation). The geometry is then not\n",
    "limited to an hybercube but can have a rectangular shape. Attributes\nare associated with leaves. For LOD (Level-Of-Detail) purpose,\nattributes can be computed on none-leaf nodes by computing the\naverage values from its children (which can be leaves or not).\n\nBy construction, an hyperoctree is efficient in memory usage when the\ngeometry is sparse. The LOD feature allows to cull quickly part of\nthe ",
    "dataset.\n\nA couple of filters can be applied on this dataset: contour, outline,\ngeometry.\n\n* 3D case (octree) for each node, each child index (from 0 to 7) is\n  encoded in the following orientation. It is easy to access each\n  child as a cell of a grid. Note also that the binary representation\nis relevant, each bit code a side: bit 0 encodes -x side (0) or +x\n  side (1) bit 1 encodes -y side (0) o",
    "r +y side (1) bit 2 encodes -z\n  side (0) or +z side (2)\n- the -z side first\n- 0: -y -x sides\n- 1: -y +x sides\n- 2: +y -x sides\n- 3: +y +x sides\n              +y\n +-+-+        ^\n |2|3|        |\n +-+-+  O +z  +-> +x\n |0|1|\n +-+-+\n \n\n- then the +z side, in counter-clockwise\n- 4: -y -x sides\n- 5: -y +x sides\n- 6: +y -x sides\n- 7: +y +x sides\n              +y\n +-+-+        ^\n |6|7|        |\n +-+-+  O ",
    "+z  +-> +x\n |4|5|\n +-+-+\n \n\nThe cases with fewer dimensions are consistent with the octree case:\n\n* Quadtree: in counter-clockwise\n- 0: -y -x edges\n- 1: -y +x edges\n- 2: +y -x edges\n- 3: +y +x edges\n         +y\n +-+-+   ^\n |2|3|   |\n +-+-+  O+-> +x\n |0|1|\n +-+-+\n \n\n* Binary tree:\n +0+1+  O+-> +x\n \n\nCaveats:\n\nIt is not a spatial search object! If you looking for this kind of\noctree see vtkCellLocat",
    "or instead.\n\nSee Also:\n\nvtkHyperOctreeAlgorithm\n\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkHyperOctreeLightWeightCursor_Doc();


static PyObject *
PyvtkHyperOctreeLightWeightCursor_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Initialize");
  void *vp = ap.GetSelfPointer(self);
  vtkHyperOctreeLightWeightCursor *op = static_cast<vtkHyperOctreeLightWeightCursor *>(vp);

  vtkHyperOctree *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperOctree"))
    {
    op->Initialize(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeLightWeightCursor_ToRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToRoot");
  void *vp = ap.GetSelfPointer(self);
  vtkHyperOctreeLightWeightCursor *op = static_cast<vtkHyperOctreeLightWeightCursor *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->ToRoot();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeLightWeightCursor_ToChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToChild");
  void *vp = ap.GetSelfPointer(self);
  vtkHyperOctreeLightWeightCursor *op = static_cast<vtkHyperOctreeLightWeightCursor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->ToChild(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeLightWeightCursor_GetIsLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetIsLeaf");
  void *vp = ap.GetSelfPointer(self);
  vtkHyperOctreeLightWeightCursor *op = static_cast<vtkHyperOctreeLightWeightCursor *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    unsigned short tempr = op->GetIsLeaf();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeLightWeightCursor_GetLeafIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLeafIndex");
  void *vp = ap.GetSelfPointer(self);
  vtkHyperOctreeLightWeightCursor *op = static_cast<vtkHyperOctreeLightWeightCursor *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = op->GetLeafIndex();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeLightWeightCursor_GetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTree");
  void *vp = ap.GetSelfPointer(self);
  vtkHyperOctreeLightWeightCursor *op = static_cast<vtkHyperOctreeLightWeightCursor *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkHyperOctree *tempr = op->GetTree();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeLightWeightCursor_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLevel");
  void *vp = ap.GetSelfPointer(self);
  vtkHyperOctreeLightWeightCursor *op = static_cast<vtkHyperOctreeLightWeightCursor *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    unsigned short tempr = op->GetLevel();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperOctreeLightWeightCursor_Methods[] = {
  {(char*)"Initialize", PyvtkHyperOctreeLightWeightCursor_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkHyperOctree)\nC++: void Initialize(vtkHyperOctree *tree)\n\n"},
  {(char*)"ToRoot", PyvtkHyperOctreeLightWeightCursor_ToRoot, METH_VARARGS,
   (char*)"V.ToRoot()\nC++: void ToRoot()\n\n"},
  {(char*)"ToChild", PyvtkHyperOctreeLightWeightCursor_ToChild, METH_VARARGS,
   (char*)"V.ToChild(int)\nC++: void ToChild(int child)\n\n"},
  {(char*)"GetIsLeaf", PyvtkHyperOctreeLightWeightCursor_GetIsLeaf, METH_VARARGS,
   (char*)"V.GetIsLeaf() -> int\nC++: unsigned short GetIsLeaf()\n\n"},
  {(char*)"GetLeafIndex", PyvtkHyperOctreeLightWeightCursor_GetLeafIndex, METH_VARARGS,
   (char*)"V.GetLeafIndex() -> int\nC++: int GetLeafIndex()\n\n"},
  {(char*)"GetTree", PyvtkHyperOctreeLightWeightCursor_GetTree, METH_VARARGS,
   (char*)"V.GetTree() -> vtkHyperOctree\nC++: vtkHyperOctree *GetTree()\n\n"},
  {(char*)"GetLevel", PyvtkHyperOctreeLightWeightCursor_GetLevel, METH_VARARGS,
   (char*)"V.GetLevel() -> int\nC++: unsigned short GetLevel()\n\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkHyperOctreeLightWeightCursor_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkHyperOctreeLightWeightCursor_Type;
#define DECLARED_PyvtkHyperOctreeLightWeightCursor_Type
#endif


static PyObject *
PyvtkHyperOctreeLightWeightCursor_vtkHyperOctreeLightWeightCursor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkHyperOctreeLightWeightCursor");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkHyperOctreeLightWeightCursor *op = new vtkHyperOctreeLightWeightCursor();

    result = PyVTKSpecialObject_New("vtkHyperOctreeLightWeightCursor", op);
    }

  return result;
}

static PyMethodDef PyvtkHyperOctreeLightWeightCursor_vtkHyperOctreeLightWeightCursor_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkHyperOctreeLightWeightCursor_NewMethod = \
{ (char*)"vtkHyperOctreeLightWeightCursor", PyvtkHyperOctreeLightWeightCursor_vtkHyperOctreeLightWeightCursor, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkHyperOctreeLightWeightCursor_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkHyperOctreeLightWeightCursor_vtkHyperOctreeLightWeightCursor(NULL, args);
}
#endif

static void PyvtkHyperOctreeLightWeightCursor_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkHyperOctreeLightWeightCursor *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkHyperOctreeLightWeightCursor_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkHyperOctreeLightWeightCursor_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkHyperOctreeLightWeightCursor", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkHyperOctreeLightWeightCursor_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkHyperOctreeLightWeightCursor_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkHyperOctreeLightWeightCursor_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkHyperOctreeLightWeightCursor_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkHyperOctreeLightWeightCursor_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkHyperOctreeLightWeightCursor(*static_cast<const vtkHyperOctreeLightWeightCursor*>(obj));
    }
  return 0;
}

static PyObject *PyvtkHyperOctreeLightWeightCursor_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkHyperOctreeLightWeightCursor_Type,
    PyvtkHyperOctreeLightWeightCursor_Methods,
    PyvtkHyperOctreeLightWeightCursor_vtkHyperOctreeLightWeightCursor_Methods,
    &PyvtkHyperOctreeLightWeightCursor_NewMethod,
    PyvtkHyperOctreeLightWeightCursor_Doc(), &PyvtkHyperOctreeLightWeightCursor_CCopy);

  return cls;
}

const char **PyvtkHyperOctreeLightWeightCursor_Doc()
{
  static const char *docstring[] = {
    "vtkHyperOctree - A dataset structured as a tree where each node has\n\n",
    "An hyperoctree is a dataset where each node has either exactly 2^n\nchildren or no child at all if the node is a leaf. `n' is the\ndimension of the dataset (1 (binary tree), 2 (quadtree) or 3 (octree)\n). The class name comes from the following paper:\n\n\n @ARTICLE{yau-srihari-1983,\n  author={Mann-May Yau and Sargur N. Srihari},\n  title={A Hierarchical Data Structure for Multidimensional Digital Images",
    "},\n  journal={Communications of the ACM},\n  month={July},\n  year={1983},\n  volume={26},\n  number={7},\n  pages={504--515}\n  }\n \n\nEach node is a cell. Attributes are associated with cells, not with\npoints. The geometry is implicitly given by the size of the root node\non each axis and position of the center and the orientation. (TODO:\nreview center position and orientation). The geometry is then not\n",
    "limited to an hybercube but can have a rectangular shape. Attributes\nare associated with leaves. For LOD (Level-Of-Detail) purpose,\nattributes can be computed on none-leaf nodes by computing the\naverage values from its children (which can be leaves or not).\n\nBy construction, an hyperoctree is efficient in memory usage when the\ngeometry is sparse. The LOD feature allows to cull quickly part of\nthe ",
    "dataset.\n\nA couple of filters can be applied on this dataset: contour, outline,\ngeometry.\n\n* 3D case (octree) for each node, each child index (from 0 to 7) is\n  encoded in the following orientation. It is easy to access each\n  child as a cell of a grid. Note also that the binary representation\nis relevant, each bit code a side: bit 0 encodes -x side (0) or +x\n  side (1) bit 1 encodes -y side (0) o",
    "r +y side (1) bit 2 encodes -z\n  side (0) or +z side (2)\n- the -z side first\n- 0: -y -x sides\n- 1: -y +x sides\n- 2: +y -x sides\n- 3: +y +x sides\n              +y\n +-+-+        ^\n |2|3|        |\n +-+-+  O +z  +-> +x\n |0|1|\n +-+-+\n \n\n- then the +z side, in counter-clockwise\n- 4: -y -x sides\n- 5: -y +x sides\n- 6: +y -x sides\n- 7: +y +x sides\n              +y\n +-+-+        ^\n |6|7|        |\n +-+-+  O ",
    "+z  +-> +x\n |4|5|\n +-+-+\n \n\nThe cases with fewer dimensions are consistent with the octree case:\n\n* Quadtree: in counter-clockwise\n- 0: -y -x edges\n- 1: -y +x edges\n- 2: +y -x edges\n- 3: +y +x edges\n         +y\n +-+-+   ^\n |2|3|   |\n +-+-+  O+-> +x\n |0|1|\n +-+-+\n \n\n* Binary tree:\n +0+1+  O+-> +x\n \n\nCaveats:\n\nIt is not a spatial search object! If you looking for this kind of\noctree see vtkCellLocat",
    "or instead.\n\nSee Also:\n\nvtkHyperOctreeAlgorithm\n\n",
    "V.vtkHyperOctreeLightWeightCursor()\nC++: vtkHyperOctreeLightWeightCursor()\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperOctree(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperOctreeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperOctree", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkHyperOctreeLightWeightCursor_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperOctreeLightWeightCursor", o) != 0)
    {
    Py_DECREF(o);
    }

}

