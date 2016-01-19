// python wrapper for vtkPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPointSetNew
extern "C" { PyObject *PyVTKClass_vtkPointSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetNew
#endif

static const char **PyvtkPolyData_Doc();


static PyObject *
PyvtkPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyData::NewInstance());

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
PyvtkPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPolyData *tempr = vtkPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkPolyData::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::CopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkPolyData::GetNumberOfCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkPolyData::GetCell(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolyData_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::GetCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyData_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPolyData_GetCell_s1(self, args);
    case 2:
      return PyvtkPolyData_GetCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return NULL;
}



static PyObject *
PyvtkPolyData_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkPolyData::GetCellType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::GetCellBounds(temp0, temp1);
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
PyvtkPolyData_GetCellNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::GetCellNeighbors(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_CopyCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkPolyData *temp0 = NULL;
  vtkIdList *temp1 = NULL;
  vtkPointLocator *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkPointLocator")))
    {
    if (ap.IsBound())
      {
      op->CopyCells(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPolyData::CopyCells(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::GetCellPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::GetPointCells(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeBounds();
      }
    else
      {
      op->vtkPolyData::ComputeBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkPolyData::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkPolyData::GetMaxCellSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_SetVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkCellArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      op->SetVerts(temp0);
      }
    else
      {
      op->vtkPolyData::SetVerts(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetVerts() :
      op->vtkPolyData::GetVerts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_SetLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkCellArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      op->SetLines(temp0);
      }
    else
      {
      op->vtkPolyData::SetLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetLines() :
      op->vtkPolyData::GetLines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_SetPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkCellArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      op->SetPolys(temp0);
      }
    else
      {
      op->vtkPolyData::SetPolys(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetPolys() :
      op->vtkPolyData::GetPolys());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_SetStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkCellArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      op->SetStrips(temp0);
      }
    else
      {
      op->vtkPolyData::SetStrips(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetStrips() :
      op->vtkPolyData::GetStrips());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfVerts() :
      op->vtkPolyData::GetNumberOfVerts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfLines() :
      op->vtkPolyData::GetNumberOfLines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPolys() :
      op->vtkPolyData::GetNumberOfPolys());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfStrips() :
      op->vtkPolyData::GetNumberOfStrips());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_Allocate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyData_Allocate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkPolyData *temp0 = NULL;
  vtkIdType temp1 = 1000;
  int temp2 = 1000;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->Allocate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPolyData::Allocate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyData_Allocate_Methods[] = {
  {NULL, PyvtkPolyData_Allocate_s1, METH_VARARGS,
   (char*)"@|Li"},
  {NULL, PyvtkPolyData_Allocate_s2, METH_VARARGS,
   (char*)"@O|Li *vtkPolyData"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPolyData_Allocate(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolyData_Allocate_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPolyData_Allocate_s1(self, args);
    case 3:
      return PyvtkPolyData_Allocate_s2(self, args);
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Allocate");
  return NULL;
}



static PyObject *
PyvtkPolyData_InsertNextCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->InsertNextCell(temp0, temp1, temp2) :
      op->vtkPolyData::InsertNextCell(temp0, temp1, temp2));

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
PyvtkPolyData_InsertNextCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  int temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1) :
      op->vtkPolyData::InsertNextCell(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolyData_InsertNextCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPolyData_InsertNextCell_s1(self, args);
    case 2:
      return PyvtkPolyData_InsertNextCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextCell");
  return NULL;
}



static PyObject *
PyvtkPolyData_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkPolyData::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_BuildCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildCells();
      }
    else
      {
      op->vtkPolyData::BuildCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_BuildLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  int temp0 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      op->BuildLinks(temp0);
      }
    else
      {
      op->vtkPolyData::BuildLinks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_DeleteCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeleteCells();
      }
    else
      {
      op->vtkPolyData::DeleteCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_DeleteLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeleteLinks();
      }
    else
      {
      op->vtkPolyData::DeleteLinks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetCellEdgeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellEdgeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdList *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetCellEdgeNeighbors(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPolyData::GetCellEdgeNeighbors(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_IsTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->IsTriangle(temp0, temp1, temp2) :
      op->vtkPolyData::IsTriangle(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_IsEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->IsEdge(temp0, temp1) :
      op->vtkPolyData::IsEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_IsPointUsedByCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointUsedByCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->IsPointUsedByCell(temp0, temp1) :
      op->vtkPolyData::IsPointUsedByCell(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_ReplaceCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::ReplaceCell(temp0, temp1, temp2);
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
PyvtkPolyData_ReplaceCellPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCellPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ReplaceCellPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPolyData::ReplaceCellPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_ReverseCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReverseCell(temp0);
      }
    else
      {
      op->vtkPolyData::ReverseCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_DeletePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeletePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DeletePoint(temp0);
      }
    else
      {
      op->vtkPolyData::DeletePoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_DeleteCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DeleteCell(temp0);
      }
    else
      {
      op->vtkPolyData::DeleteCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_RemoveDeletedCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDeletedCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveDeletedCells();
      }
    else
      {
      op->vtkPolyData::RemoveDeletedCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_InsertNextLinkedPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextLinkedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextLinkedPoint(temp0) :
      op->vtkPolyData::InsertNextLinkedPoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolyData_InsertNextLinkedPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextLinkedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextLinkedPoint(temp0, temp1) :
      op->vtkPolyData::InsertNextLinkedPoint(temp0, temp1));

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
PyvtkPolyData_InsertNextLinkedPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPolyData_InsertNextLinkedPoint_s1(self, args);
    case 2:
      return PyvtkPolyData_InsertNextLinkedPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextLinkedPoint");
  return NULL;
}



static PyObject *
PyvtkPolyData_InsertNextLinkedCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextLinkedCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::InsertNextLinkedCell(temp0, temp1, temp2));

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
PyvtkPolyData_ReplaceLinkedCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceLinkedCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->ReplaceLinkedCell(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPolyData::ReplaceLinkedCell(temp0, temp1, temp2);
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
PyvtkPolyData_RemoveCellReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCellReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveCellReference(temp0);
      }
    else
      {
      op->vtkPolyData::RemoveCellReference(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_AddCellReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddCellReference(temp0);
      }
    else
      {
      op->vtkPolyData::AddCellReference(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_RemoveReferenceToCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveReferenceToCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::RemoveReferenceToCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_AddReferenceToCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddReferenceToCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::AddReferenceToCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_ResizeCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizeCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::ResizeCellList(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPolyData::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPiece() :
      op->vtkPolyData::GetPiece());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkPolyData::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkPolyData::GetGhostLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkPolyData::GetActualMemorySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_RemoveGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::RemoveGhostCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyData_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkPolyData *tempr = vtkPolyData::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolyData_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkPolyData *tempr = vtkPolyData::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyData_GetData_Methods[] = {
  {NULL, PyvtkPolyData_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkPolyData_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPolyData_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolyData_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkPolyData_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkPolyData_GetScalarFieldCriticalIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFieldCriticalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarFieldCriticalIndex(temp0, temp1) :
      op->vtkPolyData::GetScalarFieldCriticalIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolyData_GetScalarFieldCriticalIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFieldCriticalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarFieldCriticalIndex(temp0, temp1) :
      op->vtkPolyData::GetScalarFieldCriticalIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolyData_GetScalarFieldCriticalIndex_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFieldCriticalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarFieldCriticalIndex(temp0, temp1) :
      op->vtkPolyData::GetScalarFieldCriticalIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyData_GetScalarFieldCriticalIndex_Methods[] = {
  {NULL, PyvtkPolyData_GetScalarFieldCriticalIndex_s1, METH_VARARGS,
   (char*)"@LO *vtkDataArray"},
  {NULL, PyvtkPolyData_GetScalarFieldCriticalIndex_s2, METH_VARARGS,
   (char*)"@Li"},
  {NULL, PyvtkPolyData_GetScalarFieldCriticalIndex_s3, METH_VARARGS,
   (char*)"@Lz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPolyData_GetScalarFieldCriticalIndex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolyData_GetScalarFieldCriticalIndex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarFieldCriticalIndex");
  return NULL;
}


static PyMethodDef PyvtkPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPolyData\nC++: vtkPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyData\nC++: vtkPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkPolyData_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"CopyStructure", PyvtkPolyData_CopyStructure, METH_VARARGS,
   (char*)"V.CopyStructure(vtkDataSet)\nC++: void CopyStructure(vtkDataSet *ds)\n\nCopy the geometric and topological structure of an input poly\ndata object.\n"},
  {(char*)"GetNumberOfCells", PyvtkPolyData_GetNumberOfCells, METH_VARARGS,
   (char*)"V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells()\n\nStandard vtkDataSet interface.\n"},
  {(char*)"GetCell", PyvtkPolyData_GetCell, METH_VARARGS,
   (char*)"V.GetCell(int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType cellId)\nV.GetCell(int, vtkGenericCell)\nC++: void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n\nStandard vtkDataSet interface.\n"},
  {(char*)"GetCellType", PyvtkPolyData_GetCellType, METH_VARARGS,
   (char*)"V.GetCellType(int) -> int\nC++: int GetCellType(vtkIdType cellId)\n\nStandard vtkDataSet interface.\n"},
  {(char*)"GetCellBounds", PyvtkPolyData_GetCellBounds, METH_VARARGS,
   (char*)"V.GetCellBounds(int, [float, float, float, float, float, float])\nC++: void GetCellBounds(vtkIdType cellId, double bounds[6])\n\nStandard vtkDataSet interface.\n"},
  {(char*)"GetCellNeighbors", PyvtkPolyData_GetCellNeighbors, METH_VARARGS,
   (char*)"V.GetCellNeighbors(int, vtkIdList, vtkIdList)\nC++: void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds,\n    vtkIdList *cellIds)\n\nStandard vtkDataSet interface.\n"},
  {(char*)"CopyCells", PyvtkPolyData_CopyCells, METH_VARARGS,
   (char*)"V.CopyCells(vtkPolyData, vtkIdList, vtkPointLocator)\nC++: void CopyCells(vtkPolyData *pd, vtkIdList *idList,\n    vtkPointLocator *locator=NULL)\n\nCopy cells listed in idList from pd, including points, point\ndata, and cell data.  This method assumes that point and cell\ndata have been allocated.  If you pass in a point locator, then\nthe points won't be duplicated in the output.\n"},
  {(char*)"GetCellPoints", PyvtkPolyData_GetCellPoints, METH_VARARGS,
   (char*)"V.GetCellPoints(int, vtkIdList)\nC++: void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)\n\nCopy a cells point ids into list provided. (Less efficient.)\n"},
  {(char*)"GetPointCells", PyvtkPolyData_GetPointCells, METH_VARARGS,
   (char*)"V.GetPointCells(int, vtkIdList)\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n\nEfficient method to obtain cells using a particular point. Make\nsure that routine BuildLinks() has been called.\n"},
  {(char*)"ComputeBounds", PyvtkPolyData_ComputeBounds, METH_VARARGS,
   (char*)"V.ComputeBounds()\nC++: void ComputeBounds()\n\nCompute the (X, Y, Z)  bounds of the data.\n"},
  {(char*)"Squeeze", PyvtkPolyData_Squeeze, METH_VARARGS,
   (char*)"V.Squeeze()\nC++: void Squeeze()\n\nRecover extra allocated memory when creating data whose initial\nsize is unknown. Examples include using the InsertNextCell()\nmethod, or when using the CellArray::EstimateSize() method to\ncreate vertices, lines, polygons, or triangle strips.\n"},
  {(char*)"GetMaxCellSize", PyvtkPolyData_GetMaxCellSize, METH_VARARGS,
   (char*)"V.GetMaxCellSize() -> int\nC++: int GetMaxCellSize()\n\nReturn the maximum cell size in this poly data.\n"},
  {(char*)"SetVerts", PyvtkPolyData_SetVerts, METH_VARARGS,
   (char*)"V.SetVerts(vtkCellArray)\nC++: void SetVerts(vtkCellArray *v)\n\nSet the cell array defining vertices.\n"},
  {(char*)"GetVerts", PyvtkPolyData_GetVerts, METH_VARARGS,
   (char*)"V.GetVerts() -> vtkCellArray\nC++: vtkCellArray *GetVerts()\n\nGet the cell array defining vertices. If there are no vertices,\nan empty array will be returned (convenience to simplify\ntraversal).\n"},
  {(char*)"SetLines", PyvtkPolyData_SetLines, METH_VARARGS,
   (char*)"V.SetLines(vtkCellArray)\nC++: void SetLines(vtkCellArray *l)\n\nSet the cell array defining lines.\n"},
  {(char*)"GetLines", PyvtkPolyData_GetLines, METH_VARARGS,
   (char*)"V.GetLines() -> vtkCellArray\nC++: vtkCellArray *GetLines()\n\nGet the cell array defining lines. If there are no lines, an\nempty array will be returned (convenience to simplify traversal).\n"},
  {(char*)"SetPolys", PyvtkPolyData_SetPolys, METH_VARARGS,
   (char*)"V.SetPolys(vtkCellArray)\nC++: void SetPolys(vtkCellArray *p)\n\nSet the cell array defining polygons.\n"},
  {(char*)"GetPolys", PyvtkPolyData_GetPolys, METH_VARARGS,
   (char*)"V.GetPolys() -> vtkCellArray\nC++: vtkCellArray *GetPolys()\n\nGet the cell array defining polygons. If there are no polygons,\nan empty array will be returned (convenience to simplify\ntraversal).\n"},
  {(char*)"SetStrips", PyvtkPolyData_SetStrips, METH_VARARGS,
   (char*)"V.SetStrips(vtkCellArray)\nC++: void SetStrips(vtkCellArray *s)\n\nSet the cell array defining triangle strips.\n"},
  {(char*)"GetStrips", PyvtkPolyData_GetStrips, METH_VARARGS,
   (char*)"V.GetStrips() -> vtkCellArray\nC++: vtkCellArray *GetStrips()\n\nGet the cell array defining triangle strips. If there are no\ntriangle strips, an empty array will be returned (convenience to\nsimplify traversal).\n"},
  {(char*)"GetNumberOfVerts", PyvtkPolyData_GetNumberOfVerts, METH_VARARGS,
   (char*)"V.GetNumberOfVerts() -> int\nC++: vtkIdType GetNumberOfVerts()\n\nReturn the number of primitives of a particular type held..\n"},
  {(char*)"GetNumberOfLines", PyvtkPolyData_GetNumberOfLines, METH_VARARGS,
   (char*)"V.GetNumberOfLines() -> int\nC++: vtkIdType GetNumberOfLines()\n\nReturn the number of primitives of a particular type held..\n"},
  {(char*)"GetNumberOfPolys", PyvtkPolyData_GetNumberOfPolys, METH_VARARGS,
   (char*)"V.GetNumberOfPolys() -> int\nC++: vtkIdType GetNumberOfPolys()\n\nReturn the number of primitives of a particular type held..\n"},
  {(char*)"GetNumberOfStrips", PyvtkPolyData_GetNumberOfStrips, METH_VARARGS,
   (char*)"V.GetNumberOfStrips() -> int\nC++: vtkIdType GetNumberOfStrips()\n\nReturn the number of primitives of a particular type held..\n"},
  {(char*)"Allocate", PyvtkPolyData_Allocate, METH_VARARGS,
   (char*)"V.Allocate(int, int)\nC++: void Allocate(vtkIdType numCells=1000, int extSize=1000)\nV.Allocate(vtkPolyData, int, int)\nC++: void Allocate(vtkPolyData *inPolyData,\n    vtkIdType numCells=1000, int extSize=1000)\n\nMethod allocates initial storage for vertex, line, polygon, and\ntriangle strip arrays. Use this method before the method\nPolyData::InsertNextCell(). (Or, provide vertex, line, polygon,\nand triangle strip cell arrays.) The array capacity is doubled\nwhen the inserting a cell exceeds the current capacity. extSize\nis no longer used.\n"},
  {(char*)"InsertNextCell", PyvtkPolyData_InsertNextCell, METH_VARARGS,
   (char*)"V.InsertNextCell(int, int, [int, ...]) -> int\nC++: vtkIdType InsertNextCell(int type, int npts, vtkIdType *pts)\nV.InsertNextCell(int, vtkIdList) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdList *pts)\n\nInsert a cell of type VTK_VERTEX, VTK_POLY_VERTEX, VTK_LINE,\nVTK_POLY_LINE, VTK_TRIANGLE, VTK_QUAD, VTK_POLYGON, or\nVTK_TRIANGLE_STRIP.  Make sure that the PolyData::Allocate()\nfunction has been called first or that vertex, line, polygon, and\ntriangle strip arrays have been supplied. Note: will also insert\nVTK_PIXEL, but converts it to VTK_QUAD.\n"},
  {(char*)"Reset", PyvtkPolyData_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\nBegin inserting data all over again. Memory is not freed but\notherwise objects are returned to their initial state.\n"},
  {(char*)"BuildCells", PyvtkPolyData_BuildCells, METH_VARARGS,
   (char*)"V.BuildCells()\nC++: void BuildCells()\n\nCreate data structure that allows random access of cells.\n"},
  {(char*)"BuildLinks", PyvtkPolyData_BuildLinks, METH_VARARGS,
   (char*)"V.BuildLinks(int)\nC++: void BuildLinks(int initialSize=0)\n\nCreate upward links from points to cells that use each point.\nEnables topologically complex queries. Normally the links array\nis allocated based on the number of points in the vtkPolyData.\nThe optional initialSize parameter can be used to allocate a\nlarger size initially.\n"},
  {(char*)"DeleteCells", PyvtkPolyData_DeleteCells, METH_VARARGS,
   (char*)"V.DeleteCells()\nC++: void DeleteCells()\n\nRelease data structure that allows random access of the cells.\nThis must be done before a 2nd call to BuildLinks(). DeleteCells\nimplicitly deletes the links as well since they are no longer\nvalid.\n"},
  {(char*)"DeleteLinks", PyvtkPolyData_DeleteLinks, METH_VARARGS,
   (char*)"V.DeleteLinks()\nC++: void DeleteLinks()\n\nRelease the upward links from point to cells that use each point.\n"},
  {(char*)"GetCellEdgeNeighbors", PyvtkPolyData_GetCellEdgeNeighbors, METH_VARARGS,
   (char*)"V.GetCellEdgeNeighbors(int, int, int, vtkIdList)\nC++: void GetCellEdgeNeighbors(vtkIdType cellId, vtkIdType p1,\n    vtkIdType p2, vtkIdList *cellIds)\n\nGet the neighbors at an edge. More efficient than the general\nGetCellNeighbors(). Assumes links have been built (with\nBuildLinks()), and looks specifically for edge neighbors.\n"},
  {(char*)"IsTriangle", PyvtkPolyData_IsTriangle, METH_VARARGS,
   (char*)"V.IsTriangle(int, int, int) -> int\nC++: int IsTriangle(int v1, int v2, int v3)\n\nGiven three vertices, determine whether it's a triangle. Make\nsure BuildLinks() has been called first.\n"},
  {(char*)"IsEdge", PyvtkPolyData_IsEdge, METH_VARARGS,
   (char*)"V.IsEdge(int, int) -> int\nC++: int IsEdge(vtkIdType p1, vtkIdType p2)\n\nDetermine whether two points form an edge. If they do, return\nnon-zero. By definition PolyVertex and PolyLine have no edges\nsince 1-dimensional edges are only found on cells 2D and higher.\nEdges are defined as 1-D boundary entities to cells. Make sure\nBuildLinks() has been called first.\n"},
  {(char*)"IsPointUsedByCell", PyvtkPolyData_IsPointUsedByCell, METH_VARARGS,
   (char*)"V.IsPointUsedByCell(int, int) -> int\nC++: int IsPointUsedByCell(vtkIdType ptId, vtkIdType cellId)\n\nDetermine whether a point is used by a particular cell. If it is,\nreturn non-zero. Make sure BuildCells() has been called first.\n"},
  {(char*)"ReplaceCell", PyvtkPolyData_ReplaceCell, METH_VARARGS,
   (char*)"V.ReplaceCell(int, int, [int, ...])\nC++: void ReplaceCell(vtkIdType cellId, int npts, vtkIdType *pts)\n\nReplace the points defining cell \"cellId\" with a new set of\npoints. This operator is (typically) used when links from points\nto cells have not been built (i.e., BuildLinks() has not been\nexecuted). Use the operator ReplaceLinkedCell() to replace a cell\nwhen cell structure has been built.\n"},
  {(char*)"ReplaceCellPoint", PyvtkPolyData_ReplaceCellPoint, METH_VARARGS,
   (char*)"V.ReplaceCellPoint(int, int, int)\nC++: void ReplaceCellPoint(vtkIdType cellId, vtkIdType oldPtId,\n    vtkIdType newPtId)\n\nReplace a point in the cell connectivity list with a different\npoint.\n"},
  {(char*)"ReverseCell", PyvtkPolyData_ReverseCell, METH_VARARGS,
   (char*)"V.ReverseCell(int)\nC++: void ReverseCell(vtkIdType cellId)\n\nReverse the order of point ids defining the cell.\n"},
  {(char*)"DeletePoint", PyvtkPolyData_DeletePoint, METH_VARARGS,
   (char*)"V.DeletePoint(int)\nC++: void DeletePoint(vtkIdType ptId)\n\nMark a point/cell as deleted from this vtkPolyData.\n"},
  {(char*)"DeleteCell", PyvtkPolyData_DeleteCell, METH_VARARGS,
   (char*)"V.DeleteCell(int)\nC++: void DeleteCell(vtkIdType cellId)\n\nMark a point/cell as deleted from this vtkPolyData.\n"},
  {(char*)"RemoveDeletedCells", PyvtkPolyData_RemoveDeletedCells, METH_VARARGS,
   (char*)"V.RemoveDeletedCells()\nC++: void RemoveDeletedCells()\n\nThe cells marked by calls to DeleteCell are stored in the Cell\nArray VTK_EMPTY_CELL, but they still exist in the cell arrays.\nCalling RemoveDeletedCells will traverse the cell arrays and\nremove/compact the cell arrays as well as any cell data thus\ntruly removing the cells from the polydata object.\n"},
  {(char*)"InsertNextLinkedPoint", PyvtkPolyData_InsertNextLinkedPoint, METH_VARARGS,
   (char*)"V.InsertNextLinkedPoint(int) -> int\nC++: vtkIdType InsertNextLinkedPoint(int numLinks)\nV.InsertNextLinkedPoint([float, float, float], int) -> int\nC++: vtkIdType InsertNextLinkedPoint(double x[3], int numLinks)\n\nAdd a point to the cell data structure (after cell pointers have\nbeen built). This method adds the point and then allocates memory\nfor the links to the cells.  (To use this method, make sure\npoints are available and BuildLinks() has been invoked.) Of the\ntwo methods below, one inserts a point coordinate and the other\njust makes room for cell links.\n"},
  {(char*)"InsertNextLinkedCell", PyvtkPolyData_InsertNextLinkedCell, METH_VARARGS,
   (char*)"V.InsertNextLinkedCell(int, int, [int, ...]) -> int\nC++: vtkIdType InsertNextLinkedCell(int type, int npts,\n    vtkIdType *pts)\n\nAdd a new cell to the cell data structure (after cell pointers\nhave been built). This method adds the cell and then updates the\nlinks from the points to the cells. (Memory is allocated as\nnecessary.)\n"},
  {(char*)"ReplaceLinkedCell", PyvtkPolyData_ReplaceLinkedCell, METH_VARARGS,
   (char*)"V.ReplaceLinkedCell(int, int, [int, ...])\nC++: void ReplaceLinkedCell(vtkIdType cellId, int npts,\n    vtkIdType *pts)\n\nReplace one cell with another in cell structure. This operator\nupdates the connectivity list and the point's link list. It does\nnot delete references to the old cell in the point's link list.\nUse the operator RemoveCellReference() to delete all references\nfrom points to (old) cell. You may also want to consider using\nthe operator ResizeCellList() if the link list is changing size.\n"},
  {(char*)"RemoveCellReference", PyvtkPolyData_RemoveCellReference, METH_VARARGS,
   (char*)"V.RemoveCellReference(int)\nC++: void RemoveCellReference(vtkIdType cellId)\n\nRemove all references to cell in cell structure. This means the\nlinks from the cell's points to the cell are deleted. Memory is\nnot reclaimed. Use the method ResizeCellList() to resize the link\nlist from a point to its using cells. (This operator assumes\nBuildLinks() has been called.)\n"},
  {(char*)"AddCellReference", PyvtkPolyData_AddCellReference, METH_VARARGS,
   (char*)"V.AddCellReference(int)\nC++: void AddCellReference(vtkIdType cellId)\n\nAdd references to cell in cell structure. This means the links\nfrom the cell's points to the cell are modified. Memory is not\nextended. Use the method ResizeCellList() to resize the link list\nfrom a point to its using cells. (This operator assumes\nBuildLinks() has been called.)\n"},
  {(char*)"RemoveReferenceToCell", PyvtkPolyData_RemoveReferenceToCell, METH_VARARGS,
   (char*)"V.RemoveReferenceToCell(int, int)\nC++: void RemoveReferenceToCell(vtkIdType ptId, vtkIdType cellId)\n\nRemove a reference to a cell in a particular point's link list.\nYou may also consider using RemoveCellReference() to remove the\nreferences from all the cell's points to the cell. This operator\ndoes not reallocate memory; use the operator ResizeCellList() to\ndo this if necessary.\n"},
  {(char*)"AddReferenceToCell", PyvtkPolyData_AddReferenceToCell, METH_VARARGS,
   (char*)"V.AddReferenceToCell(int, int)\nC++: void AddReferenceToCell(vtkIdType ptId, vtkIdType cellId)\n\nAdd a reference to a cell in a particular point's link list. (You\nmay also consider using AddCellReference() to add the references\nfrom all the cell's points to the cell.) This operator does not\nrealloc memory; use the operator ResizeCellList() to do this if\nnecessary.\n"},
  {(char*)"ResizeCellList", PyvtkPolyData_ResizeCellList, METH_VARARGS,
   (char*)"V.ResizeCellList(int, int)\nC++: void ResizeCellList(vtkIdType ptId, int size)\n\nResize the list of cells using a particular point. (This operator\nassumes that BuildLinks() has been called.)\n"},
  {(char*)"Initialize", PyvtkPolyData_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nRestore object to initial state. Release memory back to system.\n"},
  {(char*)"GetPiece", PyvtkPolyData_GetPiece, METH_VARARGS,
   (char*)"V.GetPiece() -> int\nC++: virtual int GetPiece()\n\nGet the piece and the number of pieces. Similar to extent in 3D.\n"},
  {(char*)"GetNumberOfPieces", PyvtkPolyData_GetNumberOfPieces, METH_VARARGS,
   (char*)"V.GetNumberOfPieces() -> int\nC++: virtual int GetNumberOfPieces()\n\nGet the piece and the number of pieces. Similar to extent in 3D.\n"},
  {(char*)"GetGhostLevel", PyvtkPolyData_GetGhostLevel, METH_VARARGS,
   (char*)"V.GetGhostLevel() -> int\nC++: virtual int GetGhostLevel()\n\nGet the ghost level.\n"},
  {(char*)"GetActualMemorySize", PyvtkPolyData_GetActualMemorySize, METH_VARARGS,
   (char*)"V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated. The memory size\nreturned is guaranteed to be greater than or equal to the memory\nrequired to represent the data (e.g., extra space in arrays, etc.\nare not included in the return value). THIS METHOD IS THREAD\nSAFE.\n"},
  {(char*)"ShallowCopy", PyvtkPolyData_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkPolyData_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"RemoveGhostCells", PyvtkPolyData_RemoveGhostCells, METH_VARARGS,
   (char*)"V.RemoveGhostCells(int)\nC++: void RemoveGhostCells(int level)\n\nThis method will remove any cell that has a ghost level array\nvalue greater or equal to level.  It does not remove unused\npoints (yet).\n"},
  {(char*)"GetData", PyvtkPolyData_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkPolyData\nC++: static vtkPolyData *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkPolyData\nC++: static vtkPolyData *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {(char*)"GetScalarFieldCriticalIndex", PyvtkPolyData_GetScalarFieldCriticalIndex, METH_VARARGS,
   (char*)"V.GetScalarFieldCriticalIndex(int, vtkDataArray) -> int\nC++: int GetScalarFieldCriticalIndex(vtkIdType pointId,\n    vtkDataArray *scalarField)\nV.GetScalarFieldCriticalIndex(int, int) -> int\nC++: int GetScalarFieldCriticalIndex(vtkIdType pointId,\n    int fieldId)\nV.GetScalarFieldCriticalIndex(int, string) -> int\nC++: int GetScalarFieldCriticalIndex(vtkIdType pointId,\n    const char *fieldName)\n\nScalar field critical point classification (for manifold 2D\nmeshes). Reference: J. Milnor \"Morse Theory\", Princeton\nUniversity Press, 1963.\n\nGiven a pointId and an attribute representing a scalar field,\nthis member returns the index of the critical point:\nvtkPolyData::MINIMUM (index 0): local minimum;\nvtkPolyData::SADDLE  (index 1): local saddle;\nvtkPolyData::MAXIMUM (index 2): local maximum.\n\nOther returned values are: vtkPolyData::REGULAR_POINT: regular\npoint (the gradient does not vanish);\nvtkPolyData::ERR_NON_MANIFOLD_STAR: the star of the considered\nvertex is not manifold (could not evaluate the index)\nvtkPolyData::ERR_INCORRECT_FIELD: the number of entries in the\nscalar field array is different form the number of vertices in\nthe mesh. vtkPolyData::ERR_NO_SUCH_FIELD: the specified scalar\nfield does not exist.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyData_StaticNew()
{
  return vtkPolyData::New();
}

PyObject *PyVTKClass_vtkPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyData_StaticNew,
    PyvtkPolyData_Methods,
    "vtkPolyData", modulename,
    NULL, NULL,
    PyvtkPolyData_Doc(),
    PyVTKClass_vtkPointSetNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 7; c++)
      {
      static const struct { const char *name; int value; }
        constants[7] = {
          { "ERR_NO_SUCH_FIELD", vtkPolyData::ERR_NO_SUCH_FIELD },
          { "ERR_INCORRECT_FIELD", vtkPolyData::ERR_INCORRECT_FIELD },
          { "ERR_NON_MANIFOLD_STAR", vtkPolyData::ERR_NON_MANIFOLD_STAR },
          { "REGULAR_POINT", vtkPolyData::REGULAR_POINT },
          { "MINIMUM", vtkPolyData::MINIMUM },
          { "SADDLE", vtkPolyData::SADDLE },
          { "MAXIMUM", vtkPolyData::MAXIMUM },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkPolyData - concrete dataset represents vertices, lines, polygons,\nand triangle strips\n\n",
    "Superclass: vtkPointSet\n\n",
    "vtkPolyData is a data object that is a concrete implementation of\nvtkDataSet. vtkPolyData represents a geometric structure consisting\nof vertices, lines, polygons, and/or triangle strips. Point and cell\nattribute values (e.g., scalars, vectors, etc.) also are represented.\n\nThe actual cell types (vtkCellType.h) supported by vtkPolyData are:\nvtkVertex, vtkPolyVertex, vtkLine, vtkPolyLine, vtkTriangl",
    "e, vtkQuad,\nvtkPolygon, and vtkTriangleStrip.\n\nOne important feature of vtkPolyData objects is that special\ntraversal and data manipulation methods are available to process\ndata. These methods are generally more efficient than vtkDataSet\nmethods and should be used whenever possible. For example, traversing\nthe cells in a dataset we would use GetCell(). To traverse cells with\nvtkPolyData we would r",
    "etrieve the cell array object representing\npolygons (for example using GetPolys()) and then use vtkCellArray's\nInitTraversal() and GetNextCell() methods.\n\nCaveats:\n\nBecause vtkPolyData is implemented with four separate instances of\nvtkCellArray to represent 0D vertices, 1D lines, 2D polygons, and 2D\ntriangle strips, it is possible to create vtkPolyData instances that\nconsist of a mixture of cell t",
    "ypes. Because of the design of the\nclass, there are certain limitations on how mixed cell types are\ninserted into the vtkPolyData, and in turn the order in which they\nare processed and rendered. To preserve the consistency of cell ids,\nand to insure that cells with cell data are rendered properly, users\nmust insert mixed cells in the order of vertices (vtkVertex and\nvtkPolyVertex), lines (vtkLine ",
    "and vtkPolyLine), polygons\n(vtkTriangle, vtkQuad, vtkPolygon), and triangle strips\n(vtkTriangleStrip).\n\nSome filters when processing vtkPolyData with mixed cell types may\nprocess the cells in differing ways. Some will convert one type into\nanother (e.g., vtkTriangleStrip into vtkTriangles) or expect a\ncertain type (vtkDecimatePro expects triangles or triangle strips;\nvtkTubeFilter expects lines). ",
    "Read the documentation for each filter\ncarefully to understand how each part of vtkPolyData is processed.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

