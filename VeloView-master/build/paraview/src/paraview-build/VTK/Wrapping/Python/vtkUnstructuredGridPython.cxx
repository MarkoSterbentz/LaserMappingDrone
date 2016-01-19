// python wrapper for vtkUnstructuredGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUnstructuredGrid.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUnstructuredGrid(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUnstructuredGridNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridBaseNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridBaseNew
#endif

static const char **PyvtkUnstructuredGrid_Doc();


static PyObject *
PyvtkUnstructuredGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUnstructuredGrid::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGrid::NewInstance());

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
PyvtkUnstructuredGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUnstructuredGrid *tempr = vtkUnstructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkUnstructuredGrid::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0 = 1000;
  int temp1 = 1000;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->Allocate(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGrid::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_InsertNextCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int temp0;
  vtkIdType temp1;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1, temp2) :
      op->vtkUnstructuredGrid::InsertNextCell(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_InsertNextCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1) :
      op->vtkUnstructuredGrid::InsertNextCell(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_InsertNextCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int temp0;
  vtkIdType temp1;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  vtkIdType temp3;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp4, save4, size4);

    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1, temp2, temp3, temp4) :
      op->vtkUnstructuredGrid::InsertNextCell(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_InsertNextCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkUnstructuredGrid_InsertNextCell_s1(self, args);
    case 2:
      return PyvtkUnstructuredGrid_InsertNextCell_s2(self, args);
    case 5:
      return PyvtkUnstructuredGrid_InsertNextCell_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextCell");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGrid_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkUnstructuredGrid::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::CopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkUnstructuredGrid::GetNumberOfCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkUnstructuredGrid::GetCell(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkUnstructuredGrid_GetCell_s1(self, args);
    case 2:
      return PyvtkUnstructuredGrid_GetCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGrid_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetCellBounds(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGrid::GetCellBounds(temp0, temp1);
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
PyvtkUnstructuredGrid_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetCellPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetPointCells(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_NewCellIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewCellIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellIterator *tempr = (ap.IsBound() ?
      op->NewCellIterator() :
      op->vtkUnstructuredGrid::NewCellIterator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkUnstructuredGrid::GetCellType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellTypesArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypesArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetCellTypesArray() :
      op->vtkUnstructuredGrid::GetCellTypesArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellLocationsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLocationsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetCellLocationsArray() :
      op->vtkUnstructuredGrid::GetCellLocationsArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkUnstructuredGrid::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkUnstructuredGrid::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkUnstructuredGrid::GetMaxCellSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_BuildLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildLinks();
      }
    else
      {
      op->vtkUnstructuredGrid::BuildLinks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellLinks *tempr = (ap.IsBound() ?
      op->GetCellLinks() :
      op->vtkUnstructuredGrid::GetCellLinks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetFaceStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetFaceStream(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGrid::GetFaceStream(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_SetCells_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int temp0;
  vtkCellArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      op->SetCells(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_SetCells_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  vtkCellArray *temp1 = NULL;
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

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCellArray"))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetCells(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1);
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
PyvtkUnstructuredGrid_SetCells_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  vtkIdTypeArray *temp1 = NULL;
  vtkCellArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      op->SetCells(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_SetCells_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  vtkIdTypeArray *temp1 = NULL;
  vtkCellArray *temp2 = NULL;
  vtkIdTypeArray *temp3 = NULL;
  vtkIdTypeArray *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetVTKObject(temp3, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp4, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->SetCells(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGrid_SetCells_Methods[] = {
  {NULL, PyvtkUnstructuredGrid_SetCells_s1, METH_VARARGS,
   (char*)"@iO *vtkCellArray"},
  {NULL, PyvtkUnstructuredGrid_SetCells_s2, METH_VARARGS,
   (char*)"@OO *i *vtkCellArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkUnstructuredGrid_SetCells(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGrid_SetCells_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkUnstructuredGrid_SetCells_s3(self, args);
    case 5:
      return PyvtkUnstructuredGrid_SetCells_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCells");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGrid_GetCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetCells() :
      op->vtkUnstructuredGrid::GetCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_ReplaceCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  int temp1;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->ReplaceCell(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUnstructuredGrid::ReplaceCell(temp0, temp1, temp2);
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

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_InsertNextLinkedCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextLinkedCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int temp0;
  int temp1;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextLinkedCell(temp0, temp1, temp2) :
      op->vtkUnstructuredGrid::InsertNextLinkedCell(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_RemoveReferenceToCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveReferenceToCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->RemoveReferenceToCell(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGrid::RemoveReferenceToCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_AddReferenceToCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddReferenceToCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddReferenceToCell(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGrid::AddReferenceToCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_ResizeCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizeCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ResizeCellList(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGrid::ResizeCellList(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetCellNeighbors(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPiece() :
      op->vtkUnstructuredGrid::GetPiece());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkUnstructuredGrid::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkUnstructuredGrid::GetGhostLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkUnstructuredGrid::GetActualMemorySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetIdsOfCellsOfType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdsOfCellsOfType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int temp0;
  vtkIdTypeArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->GetIdsOfCellsOfType(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGrid::GetIdsOfCellsOfType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_IsHomogeneous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsHomogeneous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsHomogeneous() :
      op->vtkUnstructuredGrid::IsHomogeneous());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_RemoveGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveGhostCells(temp0);
      }
    else
      {
      op->vtkUnstructuredGrid::RemoveGhostCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkUnstructuredGrid *tempr = vtkUnstructuredGrid::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkUnstructuredGrid *tempr = vtkUnstructuredGrid::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGrid_GetData_Methods[] = {
  {NULL, PyvtkUnstructuredGrid_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkUnstructuredGrid_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkUnstructuredGrid_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGrid_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkUnstructuredGrid_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGrid_GetFaces_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetFaces(temp0) :
      op->vtkUnstructuredGrid::GetFaces(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetFaces_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetFaces() :
      op->vtkUnstructuredGrid::GetFaces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetFaces(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkUnstructuredGrid_GetFaces_s1(self, args);
    case 0:
      return PyvtkUnstructuredGrid_GetFaces_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetFaces");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGrid_GetFaceLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetFaceLocations() :
      op->vtkUnstructuredGrid::GetFaceLocations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_InitializeFacesRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeFacesRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->InitializeFacesRepresentation(temp0) :
      op->vtkUnstructuredGrid::InitializeFacesRepresentation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DecomposeAPolyhedronCell");

  vtkCellArray *temp0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkCellArray *temp3 = NULL;
  vtkIdTypeArray *temp4 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkCellArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkIdTypeArray"))
    {
    vtkUnstructuredGrid::DecomposeAPolyhedronCell(temp0, temp1, temp2, temp3, temp4);

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
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DecomposeAPolyhedronCell");

  vtkIdType *temp0 = NULL;
  vtkIdType *save0 = NULL;
  vtkIdType small0[8];
  int size0 = 0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkCellArray *temp3 = NULL;
  vtkIdTypeArray *temp4 = NULL;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new vtkIdType[2*size0];
    }
  save0 = &temp0[size0];

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkIdTypeArray"))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkUnstructuredGrid::DecomposeAPolyhedronCell(temp0, temp1, temp2, temp3, temp4);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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
PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DecomposeAPolyhedronCell");

  vtkIdType temp0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  vtkIdType temp2;
  vtkCellArray *temp3 = NULL;
  vtkIdTypeArray *temp4 = NULL;
  PyObject *result = NULL;

  size1 = ap.GetArgSize(1);
  temp1 = small1;
  if (size1 > 4)
    {
    temp1 = new vtkIdType[2*size1];
    }
  save1 = &temp1[size1];

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkIdTypeArray"))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkUnstructuredGrid::DecomposeAPolyhedronCell(temp0, temp1, temp2, temp3, temp4);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
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

  return result;
}

static PyMethodDef PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_Methods[] = {
  {NULL, PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s1, METH_VARARGS | METH_STATIC,
   (char*)"OLLOO *vtkCellArray *vtkCellArray *vtkIdTypeArray"},
  {NULL, PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s2, METH_VARARGS | METH_STATIC,
   (char*)"OLLOO *L *vtkCellArray *vtkIdTypeArray"},
  {NULL, PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s3, METH_VARARGS | METH_STATIC,
   (char*)"LOLOO *L *vtkCellArray *vtkIdTypeArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkUnstructuredGrid_DecomposeAPolyhedronCell(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DecomposeAPolyhedronCell");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGrid_ConvertFaceStreamPointIds_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertFaceStreamPointIds");

  vtkIdList *temp0 = NULL;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  size1 = ap.GetArgSize(1);
  temp1 = small1;
  if (size1 > 4)
    {
    temp1 = new vtkIdType[2*size1];
    }
  save1 = &temp1[size1];

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkUnstructuredGrid::ConvertFaceStreamPointIds(temp0, temp1);

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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_ConvertFaceStreamPointIds_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertFaceStreamPointIds");

  vtkIdType temp0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  size1 = ap.GetArgSize(1);
  temp1 = small1;
  if (size1 > 4)
    {
    temp1 = new vtkIdType[2*size1];
    }
  save1 = &temp1[size1];
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new vtkIdType[2*size2];
    }
  save2 = &temp2[size2];

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    vtkUnstructuredGrid::ConvertFaceStreamPointIds(temp0, temp1, temp2);

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
PyvtkUnstructuredGrid_ConvertFaceStreamPointIds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkUnstructuredGrid_ConvertFaceStreamPointIds_s1(self, args);
    case 3:
      return PyvtkUnstructuredGrid_ConvertFaceStreamPointIds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ConvertFaceStreamPointIds");
  return NULL;
}


static PyMethodDef PyvtkUnstructuredGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGrid_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGrid_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGrid_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGrid_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkUnstructuredGrid_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"Allocate", PyvtkUnstructuredGrid_Allocate, METH_VARARGS,
   (char*)"V.Allocate(int, int)\nC++: virtual void Allocate(vtkIdType numCells=1000,\n    int extSize=1000)\n\nMethod allocates initial storage for the cell connectivity. Use\nthis method before the method InsertNextCell(). The array\ncapacity is doubled when the inserting a cell exceeds the current\ncapacity. extSize is no longer used.\n"},
  {(char*)"InsertNextCell", PyvtkUnstructuredGrid_InsertNextCell, METH_VARARGS,
   (char*)"V.InsertNextCell(int, int, [int, ...]) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdType npts,\n    vtkIdType *ptIds)\nV.InsertNextCell(int, vtkIdList) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdList *ptIds)\nV.InsertNextCell(int, int, [int, ...], int, [int, ...]) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdType npts,\n    vtkIdType *ptIds, vtkIdType nfaces, vtkIdType *faces)\n\nInsert/create cell in object by type and list of point ids\ndefining cell topology. Most cells require just a type which\nimplicitly defines a set of points and their ordering. For\nnon-polyhedron cell type, npts is the number of unique points in\nthe cell. pts are the list of global point Ids. For polyhedron\ncell, a special input format is required. npts is the number of\nfaces in the cell. ptIds is the list of face stream:\n(numFace0Pts, id1, id2, id3, numFace1Pts,id1, id2, id3, ...) Make\nsure you have called Allocate() before calling this method\n"},
  {(char*)"Reset", PyvtkUnstructuredGrid_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {(char*)"CopyStructure", PyvtkUnstructuredGrid_CopyStructure, METH_VARARGS,
   (char*)"V.CopyStructure(vtkDataSet)\nC++: virtual void CopyStructure(vtkDataSet *ds)\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {(char*)"GetNumberOfCells", PyvtkUnstructuredGrid_GetNumberOfCells, METH_VARARGS,
   (char*)"V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells()\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {(char*)"GetCell", PyvtkUnstructuredGrid_GetCell, METH_VARARGS,
   (char*)"V.GetCell(int) -> vtkCell\nC++: virtual vtkCell *GetCell(vtkIdType cellId)\nV.GetCell(int, vtkGenericCell)\nC++: virtual void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {(char*)"GetCellBounds", PyvtkUnstructuredGrid_GetCellBounds, METH_VARARGS,
   (char*)"V.GetCellBounds(int, [float, float, float, float, float, float])\nC++: virtual void GetCellBounds(vtkIdType cellId,\n    double bounds[6])\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {(char*)"GetCellPoints", PyvtkUnstructuredGrid_GetCellPoints, METH_VARARGS,
   (char*)"V.GetCellPoints(int, vtkIdList)\nC++: virtual void GetCellPoints(vtkIdType cellId,\n    vtkIdList *ptIds)\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {(char*)"GetPointCells", PyvtkUnstructuredGrid_GetPointCells, METH_VARARGS,
   (char*)"V.GetPointCells(int, vtkIdList)\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {(char*)"NewCellIterator", PyvtkUnstructuredGrid_NewCellIterator, METH_VARARGS,
   (char*)"V.NewCellIterator() -> vtkCellIterator\nC++: vtkCellIterator *NewCellIterator()\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {(char*)"GetCellType", PyvtkUnstructuredGrid_GetCellType, METH_VARARGS,
   (char*)"V.GetCellType(int) -> int\nC++: int GetCellType(vtkIdType cellId)\n\n"},
  {(char*)"GetCellTypesArray", PyvtkUnstructuredGrid_GetCellTypesArray, METH_VARARGS,
   (char*)"V.GetCellTypesArray() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetCellTypesArray()\n\n"},
  {(char*)"GetCellLocationsArray", PyvtkUnstructuredGrid_GetCellLocationsArray, METH_VARARGS,
   (char*)"V.GetCellLocationsArray() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetCellLocationsArray()\n\n"},
  {(char*)"Squeeze", PyvtkUnstructuredGrid_Squeeze, METH_VARARGS,
   (char*)"V.Squeeze()\nC++: void Squeeze()\n\n"},
  {(char*)"Initialize", PyvtkUnstructuredGrid_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\n"},
  {(char*)"GetMaxCellSize", PyvtkUnstructuredGrid_GetMaxCellSize, METH_VARARGS,
   (char*)"V.GetMaxCellSize() -> int\nC++: int GetMaxCellSize()\n\n"},
  {(char*)"BuildLinks", PyvtkUnstructuredGrid_BuildLinks, METH_VARARGS,
   (char*)"V.BuildLinks()\nC++: void BuildLinks()\n\n"},
  {(char*)"GetCellLinks", PyvtkUnstructuredGrid_GetCellLinks, METH_VARARGS,
   (char*)"V.GetCellLinks() -> vtkCellLinks\nC++: vtkCellLinks *GetCellLinks()\n\n"},
  {(char*)"GetFaceStream", PyvtkUnstructuredGrid_GetFaceStream, METH_VARARGS,
   (char*)"V.GetFaceStream(int, vtkIdList)\nC++: void GetFaceStream(vtkIdType cellId, vtkIdList *ptIds)\n\nGet the face stream of a polyhedron cell in the following format:\n(numCellFaces, numFace0Pts, id1, id2, id3, numFace1Pts,id1, id2,\nid3, ...). If the requested cell is not a polyhedron, then the\nstandard GetCellPoints is called to return a list of unique point\nids (id1, id2, id3, ...).\n"},
  {(char*)"SetCells", PyvtkUnstructuredGrid_SetCells, METH_VARARGS,
   (char*)"V.SetCells(int, vtkCellArray)\nC++: void SetCells(int type, vtkCellArray *cells)\nV.SetCells([int, ...], vtkCellArray)\nC++: void SetCells(int *types, vtkCellArray *cells)\nV.SetCells(vtkUnsignedCharArray, vtkIdTypeArray, vtkCellArray)\nC++: void SetCells(vtkUnsignedCharArray *cellTypes,\n    vtkIdTypeArray *cellLocations, vtkCellArray *cells)\nV.SetCells(vtkUnsignedCharArray, vtkIdTypeArray, vtkCellArray,\n    vtkIdTypeArray, vtkIdTypeArray)\nC++: void SetCells(vtkUnsignedCharArray *cellTypes,\n    vtkIdTypeArray *cellLocations, vtkCellArray *cells,\n    vtkIdTypeArray *faceLocations, vtkIdTypeArray *faces)\n\nSpecial methods specific to vtkUnstructuredGrid for defining the\ncells composing the dataset. Most cells require just arrays of\ncellTypes, cellLocations and cellConnectivities which implicitly\ndefine the set of points in each cell and their ordering. In\nthose cases the cellConnectivities are of the format\n(numFace0Pts, id1, id2, id3, numFace1Pts, id1, id2, id3...).\nHowever, some cells like vtkPolyhedron require points plus a list\nof faces. To handle vtkPolyhedron, SetCells() support a special\ninput cellConnectivities format (numCellFaces, numFace0Pts, id1,\nid2, id3, numFace1Pts,id1, id2, id3, ...) The functions use\nvtkPolyhedron::DecomposeAPolyhedronCell() to convert polyhedron\ncells into standard format.\n"},
  {(char*)"GetCells", PyvtkUnstructuredGrid_GetCells, METH_VARARGS,
   (char*)"V.GetCells() -> vtkCellArray\nC++: vtkCellArray *GetCells()\n\n"},
  {(char*)"ReplaceCell", PyvtkUnstructuredGrid_ReplaceCell, METH_VARARGS,
   (char*)"V.ReplaceCell(int, int, [int, ...])\nC++: void ReplaceCell(vtkIdType cellId, int npts, vtkIdType *pts)\n\n"},
  {(char*)"InsertNextLinkedCell", PyvtkUnstructuredGrid_InsertNextLinkedCell, METH_VARARGS,
   (char*)"V.InsertNextLinkedCell(int, int, [int, ...]) -> int\nC++: vtkIdType InsertNextLinkedCell(int type, int npts,\n    vtkIdType *pts)\n\n"},
  {(char*)"RemoveReferenceToCell", PyvtkUnstructuredGrid_RemoveReferenceToCell, METH_VARARGS,
   (char*)"V.RemoveReferenceToCell(int, int)\nC++: void RemoveReferenceToCell(vtkIdType ptId, vtkIdType cellId)\n\n"},
  {(char*)"AddReferenceToCell", PyvtkUnstructuredGrid_AddReferenceToCell, METH_VARARGS,
   (char*)"V.AddReferenceToCell(int, int)\nC++: void AddReferenceToCell(vtkIdType ptId, vtkIdType cellId)\n\n"},
  {(char*)"ResizeCellList", PyvtkUnstructuredGrid_ResizeCellList, METH_VARARGS,
   (char*)"V.ResizeCellList(int, int)\nC++: void ResizeCellList(vtkIdType ptId, int size)\n\n"},
  {(char*)"GetCellNeighbors", PyvtkUnstructuredGrid_GetCellNeighbors, METH_VARARGS,
   (char*)"V.GetCellNeighbors(int, vtkIdList, vtkIdList)\nC++: virtual void GetCellNeighbors(vtkIdType cellId,\n    vtkIdList *ptIds, vtkIdList *cellIds)\n\nTopological inquiry to get all cells using list of points\nexclusive of cell specified (e.g., cellId). THIS METHOD IS THREAD\nSAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT\nMODIFIED\n"},
  {(char*)"GetPiece", PyvtkUnstructuredGrid_GetPiece, METH_VARARGS,
   (char*)"V.GetPiece() -> int\nC++: virtual int GetPiece()\n\nSet / Get the piece and the number of pieces. Similar to extent\nin 3D.\n"},
  {(char*)"GetNumberOfPieces", PyvtkUnstructuredGrid_GetNumberOfPieces, METH_VARARGS,
   (char*)"V.GetNumberOfPieces() -> int\nC++: virtual int GetNumberOfPieces()\n\nSet / Get the piece and the number of pieces. Similar to extent\nin 3D.\n"},
  {(char*)"GetGhostLevel", PyvtkUnstructuredGrid_GetGhostLevel, METH_VARARGS,
   (char*)"V.GetGhostLevel() -> int\nC++: virtual int GetGhostLevel()\n\nGet the ghost level.\n"},
  {(char*)"GetActualMemorySize", PyvtkUnstructuredGrid_GetActualMemorySize, METH_VARARGS,
   (char*)"V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated. The memory size\nreturned is guaranteed to be greater than or equal to the memory\nrequired to represent the data (e.g., extra space in arrays, etc.\nare not included in the return value). THIS METHOD IS THREAD\nSAFE.\n"},
  {(char*)"ShallowCopy", PyvtkUnstructuredGrid_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkUnstructuredGrid_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"GetIdsOfCellsOfType", PyvtkUnstructuredGrid_GetIdsOfCellsOfType, METH_VARARGS,
   (char*)"V.GetIdsOfCellsOfType(int, vtkIdTypeArray)\nC++: void GetIdsOfCellsOfType(int type, vtkIdTypeArray *array)\n\nFill vtkIdTypeArray container with list of cell Ids.  This method\ntraverses all cells and, for a particular cell type, inserts the\ncell Id into the container.\n"},
  {(char*)"IsHomogeneous", PyvtkUnstructuredGrid_IsHomogeneous, METH_VARARGS,
   (char*)"V.IsHomogeneous() -> int\nC++: int IsHomogeneous()\n\nTraverse cells and determine if cells are all of the same type.\n"},
  {(char*)"RemoveGhostCells", PyvtkUnstructuredGrid_RemoveGhostCells, METH_VARARGS,
   (char*)"V.RemoveGhostCells(int)\nC++: void RemoveGhostCells(int level)\n\nThis method will remove any cell that has a ghost level array\nvalue greater or equal to level.\n"},
  {(char*)"GetData", PyvtkUnstructuredGrid_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkUnstructuredGrid\nC++: static vtkUnstructuredGrid *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkUnstructuredGrid\nC++: static vtkUnstructuredGrid *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {(char*)"GetFaces", PyvtkUnstructuredGrid_GetFaces, METH_VARARGS,
   (char*)"V.GetFaces(int) -> (int, ...)\nC++: vtkIdType *GetFaces(vtkIdType cellId)\nV.GetFaces() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetFaces()\n\nSpecial support for polyhedron. Return NULL for all other cell\ntypes.\n"},
  {(char*)"GetFaceLocations", PyvtkUnstructuredGrid_GetFaceLocations, METH_VARARGS,
   (char*)"V.GetFaceLocations() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetFaceLocations()\n\nGet pointer to faces and facelocations. Support for polyhedron\ncells.\n"},
  {(char*)"InitializeFacesRepresentation", PyvtkUnstructuredGrid_InitializeFacesRepresentation, METH_VARARGS,
   (char*)"V.InitializeFacesRepresentation(int) -> int\nC++: int InitializeFacesRepresentation(vtkIdType numPrevCells)\n\nSpecial function used by vtkUnstructuredGridReader. By default\nvtkUnstructuredGrid does not contain face information, which is\nonly used by polyhedron cells. If so far no polyhedron cells have\nbeen added, Faces and FaceLocations pointers will be NULL. In\nthis case, need to initialize the arrays and assign values to the\nprevious non-polyhedron cells.\n"},
  {(char*)"DecomposeAPolyhedronCell", PyvtkUnstructuredGrid_DecomposeAPolyhedronCell, METH_VARARGS | METH_STATIC,
   (char*)"V.DecomposeAPolyhedronCell(vtkCellArray, int, int, vtkCellArray,\n    vtkIdTypeArray)\nC++: static void DecomposeAPolyhedronCell(\n    vtkCellArray *polyhedronCellArray, vtkIdType &nCellpts,\n    vtkIdType &nCellfaces, vtkCellArray *cellArray,\n    vtkIdTypeArray *faces)\nV.DecomposeAPolyhedronCell([int, ...], int, int, vtkCellArray,\n    vtkIdTypeArray)\nC++: static void DecomposeAPolyhedronCell(\n    vtkIdType *polyhedronCellStream, vtkIdType &nCellpts,\n    vtkIdType &nCellfaces, vtkCellArray *cellArray,\n    vtkIdTypeArray *faces)\nV.DecomposeAPolyhedronCell(int, [int, ...], int, vtkCellArray,\n    vtkIdTypeArray)\nC++: static void DecomposeAPolyhedronCell(vtkIdType nCellFaces,\n    vtkIdType *inFaceStream, vtkIdType &nCellpts,\n    vtkCellArray *cellArray, vtkIdTypeArray *faces)\n\nA static method for converting a polyhedron vtkCellArray of\nformat [nCellFaces, nFace0Pts, i, j, k, nFace1Pts, i, j, k, ...]\ninto three components: (1) an integer indicating the number of\nfaces (2) a standard vtkCellArray storing point ids [nCell0Pts,\ni, j, k] and (3) an vtkIdTypeArray storing face connectivity in\nformat [nFace0Pts, i, j, k, nFace1Pts, i, j, k, ...] Note: input\nis assumed to contain only one polyhedron cell. Outputs (2) and\n(3) will be stacked at the end of the input cellArray and faces.\nThe original data in the input will not be touched.\n"},
  {(char*)"ConvertFaceStreamPointIds", PyvtkUnstructuredGrid_ConvertFaceStreamPointIds, METH_VARARGS | METH_STATIC,
   (char*)"V.ConvertFaceStreamPointIds(vtkIdList, [int, ...])\nC++: static void ConvertFaceStreamPointIds(vtkIdList *faceStream,\n    vtkIdType *idMap)\nV.ConvertFaceStreamPointIds(int, [int, ...], [int, ...])\nC++: static void ConvertFaceStreamPointIds(vtkIdType nfaces,\n    vtkIdType *faceStream, vtkIdType *idMap)\n\nConvert pid in a face stream into idMap[pid]. The face stream is\nof format [nCellFaces, nFace0Pts, i, j, k, nFace1Pts, i, j, k,\n...]. The user is responsible to make sure all the Ids in\nfaceStream do not exceed the range of idMap.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGrid_StaticNew()
{
  return vtkUnstructuredGrid::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGrid_StaticNew,
    PyvtkUnstructuredGrid_Methods,
    "vtkUnstructuredGrid", modulename,
    NULL, NULL,
    PyvtkUnstructuredGrid_Doc(),
    PyVTKClass_vtkUnstructuredGridBaseNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGrid_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGrid - dataset represents arbitrary combinations of\n\n",
    "Superclass: vtkUnstructuredGridBase\n\n",
    "vtkUnstructuredGrid is a data object that is a concrete\nimplementation of vtkDataSet. vtkUnstructuredGrid represents any\ncombinations of any cell types. This includes 0D (e.g., points), 1D\n(e.g., lines, polylines), 2D (e.g., triangles, polygons), and 3D\n(e.g., hexahedron, tetrahedron, polyhedron, etc.).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

