// python wrapper for vtkUniformGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUniformGrid.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUniformGrid(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUniformGridNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageDataNew
extern "C" { PyObject *PyVTKClass_vtkImageDataNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageDataNew
#endif

static const char **PyvtkUniformGrid_Doc();


static PyObject *
PyvtkUniformGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUniformGrid::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUniformGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUniformGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUniformGrid::NewInstance());

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
PyvtkUniformGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUniformGrid *tempr = vtkUniformGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->vtkUniformGrid::CopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkUniformGrid::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkUniformGrid::GetCell(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGrid_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->vtkUniformGrid::GetCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGrid_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkUniformGrid_GetCell_s1(self, args);
    case 2:
      return PyvtkUniformGrid_GetCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return NULL;
}



static PyObject *
PyvtkUniformGrid_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->vtkUniformGrid::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkUniformGrid_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->vtkUniformGrid::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
PyvtkUniformGrid_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 7:
      return PyvtkUniformGrid_FindCell_s1(self, args);
    case 8:
      return PyvtkUniformGrid_FindCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return NULL;
}



static PyObject *
PyvtkUniformGrid_FindAndGetCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindAndGetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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

    vtkCell *tempr = (ap.IsBound() ?
      op->FindAndGetCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkUniformGrid::FindAndGetCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
      result = ap.BuildVTKObject(tempr);
      }
    }

  if (temp6 && temp6 != small6)
    {
    delete [] temp6;
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkUniformGrid::GetCellType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->vtkUniformGrid::GetCellPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->vtkUniformGrid::GetPointCells(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkUniformGrid::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkUniformGrid::GetMaxCellSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetGridDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGridDescription() :
      op->vtkUniformGrid::GetGridDescription());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->vtkUniformGrid::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->vtkUniformGrid::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_BlankPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlankPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->BlankPoint(temp0);
      }
    else
      {
      op->vtkUniformGrid::BlankPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGrid_BlankPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlankPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->BlankPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUniformGrid::BlankPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGrid_BlankPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkUniformGrid_BlankPoint_s1(self, args);
    case 3:
      return PyvtkUniformGrid_BlankPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "BlankPoint");
  return NULL;
}



static PyObject *
PyvtkUniformGrid_UnBlankPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBlankPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnBlankPoint(temp0);
      }
    else
      {
      op->vtkUniformGrid::UnBlankPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGrid_UnBlankPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBlankPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->UnBlankPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUniformGrid::UnBlankPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGrid_UnBlankPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkUniformGrid_UnBlankPoint_s1(self, args);
    case 3:
      return PyvtkUniformGrid_UnBlankPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UnBlankPoint");
  return NULL;
}



static PyObject *
PyvtkUniformGrid_BlankCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlankCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->BlankCell(temp0);
      }
    else
      {
      op->vtkUniformGrid::BlankCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGrid_BlankCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlankCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->BlankCell(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUniformGrid::BlankCell(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGrid_BlankCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkUniformGrid_BlankCell_s1(self, args);
    case 3:
      return PyvtkUniformGrid_BlankCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "BlankCell");
  return NULL;
}



static PyObject *
PyvtkUniformGrid_UnBlankCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBlankCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnBlankCell(temp0);
      }
    else
      {
      op->vtkUniformGrid::UnBlankCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGrid_UnBlankCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBlankCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->UnBlankCell(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUniformGrid::UnBlankCell(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGrid_UnBlankCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkUniformGrid_UnBlankCell_s1(self, args);
    case 3:
      return PyvtkUniformGrid_UnBlankCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UnBlankCell");
  return NULL;
}



static PyObject *
PyvtkUniformGrid_GetPointVisibilityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointVisibilityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetPointVisibilityArray() :
      op->vtkUniformGrid::GetPointVisibilityArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_SetPointVisibilityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointVisibilityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->SetPointVisibilityArray(temp0);
      }
    else
      {
      op->vtkUniformGrid::SetPointVisibilityArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetCellVisibilityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellVisibilityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetCellVisibilityArray() :
      op->vtkUniformGrid::GetCellVisibilityArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_SetCellVisibilityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellVisibilityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->SetCellVisibilityArray(temp0);
      }
    else
      {
      op->vtkUniformGrid::SetCellVisibilityArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_AttachCellVisibilityToCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttachCellVisibilityToCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AttachCellVisibilityToCellData();
      }
    else
      {
      op->vtkUniformGrid::AttachCellVisibilityToCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_AttachPointVisibilityToPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttachPointVisibilityToPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AttachPointVisibilityToPointData();
      }
    else
      {
      op->vtkUniformGrid::AttachPointVisibilityToPointData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_IsPointVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned char tempr = (ap.IsBound() ?
      op->IsPointVisible(temp0) :
      op->vtkUniformGrid::IsPointVisible(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_IsCellVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCellVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned char tempr = (ap.IsBound() ?
      op->IsCellVisible(temp0) :
      op->vtkUniformGrid::IsCellVisible(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetPointBlanking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointBlanking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char tempr = (ap.IsBound() ?
      op->GetPointBlanking() :
      op->vtkUniformGrid::GetPointBlanking());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetCellBlanking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBlanking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char tempr = (ap.IsBound() ?
      op->GetCellBlanking() :
      op->vtkUniformGrid::GetCellBlanking());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_NewImageDataCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewImageDataCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->NewImageDataCopy() :
      op->vtkUniformGrid::NewImageDataCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkUniformGrid *tempr = vtkUniformGrid::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGrid_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkUniformGrid *tempr = vtkUniformGrid::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUniformGrid_GetData_Methods[] = {
  {NULL, PyvtkUniformGrid_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkUniformGrid_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkUniformGrid_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUniformGrid_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkUniformGrid_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkUniformGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkUniformGrid_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nConstruct an empty uniform grid.\n"},
  {(char*)"IsA", PyvtkUniformGrid_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nConstruct an empty uniform grid.\n"},
  {(char*)"NewInstance", PyvtkUniformGrid_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUniformGrid\nC++: vtkUniformGrid *NewInstance()\n\nConstruct an empty uniform grid.\n"},
  {(char*)"SafeDownCast", PyvtkUniformGrid_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUniformGrid\nC++: vtkUniformGrid *SafeDownCast(vtkObject* o)\n\nConstruct an empty uniform grid.\n"},
  {(char*)"CopyStructure", PyvtkUniformGrid_CopyStructure, METH_VARARGS,
   (char*)"V.CopyStructure(vtkDataSet)\nC++: virtual void CopyStructure(vtkDataSet *ds)\n\nCopy the geometric and topological structure of an input image\ndata object.\n"},
  {(char*)"GetDataObjectType", PyvtkUniformGrid_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"GetCell", PyvtkUniformGrid_GetCell, METH_VARARGS,
   (char*)"V.GetCell(int) -> vtkCell\nC++: virtual vtkCell *GetCell(vtkIdType cellId)\nV.GetCell(int, vtkGenericCell)\nC++: virtual void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"FindCell", PyvtkUniformGrid_FindCell, METH_VARARGS,
   (char*)"V.FindCell([float, float, float], vtkCell, int, float, int,\n    [float, float, float], [float, ...]) -> int\nC++: virtual vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkIdType cellId, double tol2, int &subId, double pcoords[3],\n    double *weights)\nV.FindCell([float, float, float], vtkCell, vtkGenericCell, int,\n    float, int, [float, float, float], [float, ...]) -> int\nC++: virtual vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkGenericCell *gencell, vtkIdType cellId, double tol2,\n    int &subId, double pcoords[3], double *weights)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"FindAndGetCell", PyvtkUniformGrid_FindAndGetCell, METH_VARARGS,
   (char*)"V.FindAndGetCell([float, float, float], vtkCell, int, float, int,\n    [float, float, float], [float, ...]) -> vtkCell\nC++: virtual vtkCell *FindAndGetCell(double x[3], vtkCell *cell,\n    vtkIdType cellId, double tol2, int &subId, double pcoords[3],\n    double *weights)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCellType", PyvtkUniformGrid_GetCellType, METH_VARARGS,
   (char*)"V.GetCellType(int) -> int\nC++: virtual int GetCellType(vtkIdType cellId)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCellPoints", PyvtkUniformGrid_GetCellPoints, METH_VARARGS,
   (char*)"V.GetCellPoints(int, vtkIdList)\nC++: virtual void GetCellPoints(vtkIdType cellId,\n    vtkIdList *ptIds)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetPointCells", PyvtkUniformGrid_GetPointCells, METH_VARARGS,
   (char*)"V.GetPointCells(int, vtkIdList)\nC++: virtual void GetPointCells(vtkIdType ptId,\n    vtkIdList *cellIds)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"Initialize", PyvtkUniformGrid_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetMaxCellSize", PyvtkUniformGrid_GetMaxCellSize, METH_VARARGS,
   (char*)"V.GetMaxCellSize() -> int\nC++: virtual int GetMaxCellSize()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetGridDescription", PyvtkUniformGrid_GetGridDescription, METH_VARARGS,
   (char*)"V.GetGridDescription() -> int\nC++: int GetGridDescription()\n\nReturns the data description of this uniform grid instance.\n"},
  {(char*)"ShallowCopy", PyvtkUniformGrid_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkUniformGrid_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"BlankPoint", PyvtkUniformGrid_BlankPoint, METH_VARARGS,
   (char*)"V.BlankPoint(int)\nC++: virtual void BlankPoint(vtkIdType ptId)\nV.BlankPoint(int, int, int)\nC++: virtual void BlankPoint(const int i, const int j,\n    const int k)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff points in the structured grid, and hence the cells connected\nto them. These methods should be called only after the dimensions\nof the grid are set.\n"},
  {(char*)"UnBlankPoint", PyvtkUniformGrid_UnBlankPoint, METH_VARARGS,
   (char*)"V.UnBlankPoint(int)\nC++: virtual void UnBlankPoint(vtkIdType ptId)\nV.UnBlankPoint(int, int, int)\nC++: virtual void UnBlankPoint(const int i, const int j,\n    const int k)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff points in the structured grid, and hence the cells connected\nto them. These methods should be called only after the dimensions\nof the grid are set.\n"},
  {(char*)"BlankCell", PyvtkUniformGrid_BlankCell, METH_VARARGS,
   (char*)"V.BlankCell(int)\nC++: virtual void BlankCell(vtkIdType ptId)\nV.BlankCell(int, int, int)\nC++: virtual void BlankCell(const int i, const int j, const int k)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff cells in the structured grid. These methods should be called\nonly after the dimensions of the grid are set.\n"},
  {(char*)"UnBlankCell", PyvtkUniformGrid_UnBlankCell, METH_VARARGS,
   (char*)"V.UnBlankCell(int)\nC++: virtual void UnBlankCell(vtkIdType ptId)\nV.UnBlankCell(int, int, int)\nC++: virtual void UnBlankCell(const int i, const int j,\n    const int k)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff cells in the structured grid. These methods should be called\nonly after the dimensions of the grid are set.\n"},
  {(char*)"GetPointVisibilityArray", PyvtkUniformGrid_GetPointVisibilityArray, METH_VARARGS,
   (char*)"V.GetPointVisibilityArray() -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *GetPointVisibilityArray()\n\nGet the array that defines the blanking (visibility) of each\npoint.\n"},
  {(char*)"SetPointVisibilityArray", PyvtkUniformGrid_SetPointVisibilityArray, METH_VARARGS,
   (char*)"V.SetPointVisibilityArray(vtkUnsignedCharArray)\nC++: virtual void SetPointVisibilityArray(\n    vtkUnsignedCharArray *pointVisibility)\n\nSet an array that defines the (blanking) visibility of the points\nin the grid. Make sure that length of the visibility array\nmatches the number of points in the grid.\n"},
  {(char*)"GetCellVisibilityArray", PyvtkUniformGrid_GetCellVisibilityArray, METH_VARARGS,
   (char*)"V.GetCellVisibilityArray() -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *GetCellVisibilityArray()\n\nGet the array that defines the blanking (visibility) of each\ncell.\n"},
  {(char*)"SetCellVisibilityArray", PyvtkUniformGrid_SetCellVisibilityArray, METH_VARARGS,
   (char*)"V.SetCellVisibilityArray(vtkUnsignedCharArray)\nC++: virtual void SetCellVisibilityArray(\n    vtkUnsignedCharArray *pointVisibility)\n\nSet an array that defines the (blanking) visibility of the cells\nin the grid. Make sure that length of the visibility array\nmatches the number of points in the grid.\n"},
  {(char*)"AttachCellVisibilityToCellData", PyvtkUniformGrid_AttachCellVisibilityToCellData, METH_VARARGS,
   (char*)"V.AttachCellVisibilityToCellData()\nC++: virtual void AttachCellVisibilityToCellData()\n\nAttaches the CellVisibility array to the Cell data. Used\nprimarily for debugging.\n"},
  {(char*)"AttachPointVisibilityToPointData", PyvtkUniformGrid_AttachPointVisibilityToPointData, METH_VARARGS,
   (char*)"V.AttachPointVisibilityToPointData()\nC++: virtual void AttachPointVisibilityToPointData()\n\nAttaches the PointVisibility arry to the Point data. Used\nprimarily for debugging.\n"},
  {(char*)"IsPointVisible", PyvtkUniformGrid_IsPointVisible, METH_VARARGS,
   (char*)"V.IsPointVisible(int) -> int\nC++: virtual unsigned char IsPointVisible(vtkIdType ptId)\n\nReturn non-zero value if specified point is visible. These\nmethods should be called only after the dimensions of the grid\nare set.\n"},
  {(char*)"IsCellVisible", PyvtkUniformGrid_IsCellVisible, METH_VARARGS,
   (char*)"V.IsCellVisible(int) -> int\nC++: virtual unsigned char IsCellVisible(vtkIdType cellId)\n\nReturn non-zero value if specified cell is visible. These methods\nshould be called only after the dimensions of the grid are set.\n"},
  {(char*)"GetPointBlanking", PyvtkUniformGrid_GetPointBlanking, METH_VARARGS,
   (char*)"V.GetPointBlanking() -> int\nC++: virtual unsigned char GetPointBlanking()\n\nReturns 1 if there is any visibility constraint on the points, 0\notherwise.\n"},
  {(char*)"GetCellBlanking", PyvtkUniformGrid_GetCellBlanking, METH_VARARGS,
   (char*)"V.GetCellBlanking() -> int\nC++: virtual unsigned char GetCellBlanking()\n\nReturns 1 if there is any visibility constraint on the cells, 0\notherwise.\n"},
  {(char*)"NewImageDataCopy", PyvtkUniformGrid_NewImageDataCopy, METH_VARARGS,
   (char*)"V.NewImageDataCopy() -> vtkImageData\nC++: virtual vtkImageData *NewImageDataCopy()\n\n"},
  {(char*)"GetData", PyvtkUniformGrid_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkUniformGrid\nC++: static vtkUniformGrid *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkUniformGrid\nC++: static vtkUniformGrid *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUniformGrid_StaticNew()
{
  return vtkUniformGrid::New();
}

PyObject *PyVTKClass_vtkUniformGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUniformGrid_StaticNew,
    PyvtkUniformGrid_Methods,
    "vtkUniformGrid", modulename,
    NULL, NULL,
    PyvtkUniformGrid_Doc(),
    PyVTKClass_vtkImageDataNew(modulename));
  return cls;
}

const char **PyvtkUniformGrid_Doc()
{
  static const char *docstring[] = {
    "vtkUniformGrid - image data with blanking\n\n",
    "Superclass: vtkImageData\n\n",
    "vtkUniformGrid is a subclass of vtkImageData. In addition to all the\nimage data functionality, it supports blanking.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUniformGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUniformGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUniformGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

