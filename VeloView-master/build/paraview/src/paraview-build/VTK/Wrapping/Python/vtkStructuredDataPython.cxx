// python wrapper for vtkStructuredData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkStructuredData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStructuredData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStructuredDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkStructuredData_Doc();


static PyObject *
PyvtkStructuredData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredData *op = static_cast<vtkStructuredData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStructuredData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredData *op = static_cast<vtkStructuredData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredData *op = static_cast<vtkStructuredData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredData::NewInstance());

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
PyvtkStructuredData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStructuredData *tempr = vtkStructuredData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_SetDimensions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDimensions");

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = vtkStructuredData::SetDimensions(temp0, temp1);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_SetExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetExtent");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = vtkStructuredData::SetExtent(temp0, temp1);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_GetDataDescription(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataDescription");

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = vtkStructuredData::GetDataDescription(temp0);

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
PyvtkStructuredData_GetDataDescriptionFromExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataDescriptionFromExtent");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = vtkStructuredData::GetDataDescriptionFromExtent(temp0);

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
PyvtkStructuredData_GetDataDimension_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataDimension");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkStructuredData::GetDataDimension(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredData_GetDataDimension_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataDimension");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = vtkStructuredData::GetDataDimension(temp0);

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

static PyMethodDef PyvtkStructuredData_GetDataDimension_Methods[] = {
  {NULL, PyvtkStructuredData_GetDataDimension_s1, METH_VARARGS | METH_STATIC,
   (char*)"i"},
  {NULL, PyvtkStructuredData_GetDataDimension_s2, METH_VARARGS | METH_STATIC,
   (char*)"O *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStructuredData_GetDataDimension(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStructuredData_GetDataDimension_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDataDimension");
  return NULL;
}



static PyObject *
PyvtkStructuredData_GetNumberOfPoints(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfPoints");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1 = VTK_EMPTY;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkIdType tempr = vtkStructuredData::GetNumberOfPoints(temp0, temp1);

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
PyvtkStructuredData_GetNumberOfCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfCells");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1 = VTK_EMPTY;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkIdType tempr = vtkStructuredData::GetNumberOfCells(temp0, temp1);

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
PyvtkStructuredData_GetCellExtentFromPointExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellExtentFromPointExtent");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  int temp2 = VTK_EMPTY;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkStructuredData::GetCellExtentFromPointExtent(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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
PyvtkStructuredData_GetDimensionsFromExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDimensionsFromExtent");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  int temp2 = VTK_EMPTY;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkStructuredData::GetDimensionsFromExtent(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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
PyvtkStructuredData_GetCellDimensionsFromExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellDimensionsFromExtent");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  int temp2 = VTK_EMPTY;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkStructuredData::GetCellDimensionsFromExtent(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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
PyvtkStructuredData_GetCellDimensionsFromPointDimensions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellDimensionsFromPointDimensions");

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkStructuredData::GetCellDimensionsFromPointDimensions(temp0, temp1);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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
PyvtkStructuredData_GetLocalStructuredCoordinates(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLocalStructuredCoordinates");

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  int temp2[3];
  int save2[3];
  const int size2 = 3;
  int temp3 = VTK_EMPTY;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    vtkStructuredData::GetLocalStructuredCoordinates(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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

  return result;
}


static PyObject *
PyvtkStructuredData_GetGlobalStructuredCoordinates(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalStructuredCoordinates");

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  int temp2[3];
  int save2[3];
  const int size2 = 3;
  int temp3 = VTK_EMPTY;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    vtkStructuredData::GetGlobalStructuredCoordinates(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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

  return result;
}


static PyObject *
PyvtkStructuredData_GetCellPoints(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellPoints");

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  int temp2;
  int temp3[3];
  int save3[3];
  const int size3 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    vtkStructuredData::GetCellPoints(temp0, temp1, temp2, temp3);

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

  return result;
}


static PyObject *
PyvtkStructuredData_GetPointCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointCells");

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  int temp2[3];
  int save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkStructuredData::GetPointCells(temp0, temp1, temp2);

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

  return result;
}


static PyObject *
PyvtkStructuredData_GetCellNeighbors(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellNeighbors");

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  vtkIdList *temp2 = NULL;
  int temp3[3];
  int save3[3];
  const int size3 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    vtkStructuredData::GetCellNeighbors(temp0, temp1, temp2, temp3);

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

  return result;
}


static PyObject *
PyvtkStructuredData_ComputePointIdForExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputePointIdForExtent");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  int temp2 = VTK_EMPTY;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkIdType tempr = vtkStructuredData::ComputePointIdForExtent(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_ComputeCellIdForExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCellIdForExtent");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  int temp2 = VTK_EMPTY;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkIdType tempr = vtkStructuredData::ComputeCellIdForExtent(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_ComputePointId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputePointId");

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  int temp2 = VTK_EMPTY;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkIdType tempr = vtkStructuredData::ComputePointId(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_ComputeCellId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCellId");

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  int temp2 = VTK_EMPTY;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkIdType tempr = vtkStructuredData::ComputeCellId(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredData_ComputeCellStructuredCoordsForExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCellStructuredCoordsForExtent");

  vtkIdType temp0;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  int temp2[3];
  int save2[3];
  const int size2 = 3;
  int temp3 = VTK_EMPTY;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    vtkStructuredData::ComputeCellStructuredCoordsForExtent(temp0, temp1, temp2, temp3);

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

  return result;
}


static PyObject *
PyvtkStructuredData_ComputeCellStructuredCoords(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCellStructuredCoords");

  vtkIdType temp0;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  int temp2[3];
  int save2[3];
  const int size2 = 3;
  int temp3 = VTK_EMPTY;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    vtkStructuredData::ComputeCellStructuredCoords(temp0, temp1, temp2, temp3);

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

  return result;
}


static PyObject *
PyvtkStructuredData_ComputePointStructuredCoordsForExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputePointStructuredCoordsForExtent");

  vtkIdType temp0;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  int temp2[3];
  int save2[3];
  const int size2 = 3;
  int temp3 = VTK_EMPTY;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    vtkStructuredData::ComputePointStructuredCoordsForExtent(temp0, temp1, temp2, temp3);

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

  return result;
}


static PyObject *
PyvtkStructuredData_ComputePointStructuredCoords(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputePointStructuredCoords");

  vtkIdType temp0;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  int temp2[3];
  int save2[3];
  const int size2 = 3;
  int temp3 = VTK_EMPTY;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    vtkStructuredData::ComputePointStructuredCoords(temp0, temp1, temp2, temp3);

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

  return result;
}

static PyMethodDef PyvtkStructuredData_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStructuredData\nC++: vtkStructuredData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredData\nC++: vtkStructuredData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDimensions", PyvtkStructuredData_SetDimensions, METH_VARARGS | METH_STATIC,
   (char*)"V.SetDimensions([int, int, int], [int, int, int]) -> int\nC++: static int SetDimensions(int inDim[3], int dim[3])\n\nSpecify the dimensions of a regular, rectangular dataset. The\ninput is the new dimensions (inDim) and the current dimensions\n(dim). The function returns the dimension of the dataset (0-3D).\nIf the dimensions are improperly specified a -1 is returned. If\nthe dimensions are unchanged, a value of 100 is returned.\n"},
  {(char*)"SetExtent", PyvtkStructuredData_SetExtent, METH_VARARGS | METH_STATIC,
   (char*)"V.SetExtent([int, int, int, int, int, int], [int, int, int, int,\n    int, int]) -> int\nC++: static int SetExtent(int inExt[6], int ext[6])\n\nSpecify the dimensions of a regular, rectangular dataset. The\ninput is the new dimensions (inDim) and the current dimensions\n(dim). The function returns the dimension of the dataset (0-3D).\nIf the dimensions are improperly specified a -1 is returned. If\nthe dimensions are unchanged, a value of 100 is returned.\n"},
  {(char*)"GetDataDescription", PyvtkStructuredData_GetDataDescription, METH_VARARGS | METH_STATIC,
   (char*)"V.GetDataDescription([int, int, int]) -> int\nC++: static int GetDataDescription(int dims[3])\n\nReturns the data description given the dimensions (eg.\nVTK_SINGLE_POINT, VTK_X_LINE, VTK_XY_PLANE etc.)\n"},
  {(char*)"GetDataDescriptionFromExtent", PyvtkStructuredData_GetDataDescriptionFromExtent, METH_VARARGS | METH_STATIC,
   (char*)"V.GetDataDescriptionFromExtent([int, int, int, int, int, int])\n    -> int\nC++: static int GetDataDescriptionFromExtent(int ext[6])\n\nReturns the data description given the dimensions (eg.\nVTK_SINGLE_POINT, VTK_X_LINE, VTK_XY_PLANE etc.)\n"},
  {(char*)"GetDataDimension", PyvtkStructuredData_GetDataDimension, METH_VARARGS | METH_STATIC,
   (char*)"V.GetDataDimension(int) -> int\nC++: static int GetDataDimension(int dataDescription)\nV.GetDataDimension([int, int, int, int, int, int]) -> int\nC++: static int GetDataDimension(int ext[6])\n\nReturn the topological dimension of the data (e.g., 0, 1, 2, or\n3D).\n"},
  {(char*)"GetNumberOfPoints", PyvtkStructuredData_GetNumberOfPoints, METH_VARARGS | METH_STATIC,
   (char*)"V.GetNumberOfPoints([int, int, int, int, int, int], int) -> int\nC++: static vtkIdType GetNumberOfPoints(int ext[6],\n    int dataDescription=VTK_EMPTY)\n\nGiven the grid extent, this method returns the total number of\npoints within the extent. The dataDescription field is not used.\n"},
  {(char*)"GetNumberOfCells", PyvtkStructuredData_GetNumberOfCells, METH_VARARGS | METH_STATIC,
   (char*)"V.GetNumberOfCells([int, int, int, int, int, int], int) -> int\nC++: static vtkIdType GetNumberOfCells(int ext[6],\n    int dataDescription=VTK_EMPTY)\n\nGiven the grid extent, this method returns the total number of\ncells within the extent. The dataDescription field is not used.\n"},
  {(char*)"GetCellExtentFromPointExtent", PyvtkStructuredData_GetCellExtentFromPointExtent, METH_VARARGS | METH_STATIC,
   (char*)"V.GetCellExtentFromPointExtent([int, int, int, int, int, int],\n    [int, int, int, int, int, int], int)\nC++: static void GetCellExtentFromPointExtent(int pntExtent[6],\n    int cellExtent[6], int dataDescription=VTK_EMPTY)\n\nGiven the point extent of a grid, this method computes the\ncorresponding cell extent for the grid. The dataDescription field\nis not used.\n"},
  {(char*)"GetDimensionsFromExtent", PyvtkStructuredData_GetDimensionsFromExtent, METH_VARARGS | METH_STATIC,
   (char*)"V.GetDimensionsFromExtent([int, int, int, int, int, int], [int,\n    int, int], int)\nC++: static void GetDimensionsFromExtent(int ext[6], int dims[3],\n    int dataDescription=VTK_EMPTY)\n\nComputes the structured grid dimensions based on the given\nextent. The dataDescription field is not used.\n"},
  {(char*)"GetCellDimensionsFromExtent", PyvtkStructuredData_GetCellDimensionsFromExtent, METH_VARARGS | METH_STATIC,
   (char*)"V.GetCellDimensionsFromExtent([int, int, int, int, int, int],\n    [int, int, int], int)\nC++: static void GetCellDimensionsFromExtent(int ext[6],\n    int celldims[3], int dataDescription=VTK_EMPTY)\n\nReturns the cell dimensions, i.e., the number of cells along the\ni,j,k for the grid with the given grid extent. Note, the grid\nextent is the number of points. The dataDescription field is not\nused.\n"},
  {(char*)"GetCellDimensionsFromPointDimensions", PyvtkStructuredData_GetCellDimensionsFromPointDimensions, METH_VARARGS | METH_STATIC,
   (char*)"V.GetCellDimensionsFromPointDimensions([int, int, int], [int, int,\n     int])\nC++: static void GetCellDimensionsFromPointDimensions(\n    int pntdims[3], int cellDims[3])\n\nGiven the dimensions of the grid, in pntdims, this method returns\nthe corresponding cell dimensions for the given grid. The\ndataDescription field is not used.\n"},
  {(char*)"GetLocalStructuredCoordinates", PyvtkStructuredData_GetLocalStructuredCoordinates, METH_VARARGS | METH_STATIC,
   (char*)"V.GetLocalStructuredCoordinates([int, int, int], [int, int, int,\n    int, int, int], [int, int, int], int)\nC++: static void GetLocalStructuredCoordinates(int ijk[3],\n    int ext[6], int lijk[3], int dataDescription=VTK_EMPTY)\n\nGiven the global structured coordinates for a point or cell, ijk,\nw.r.t. as well as, the global sub-grid cell or point extent, this\nmethod computes the corresponding local structured coordinates,\nlijk, starting from 0. The dataDescription argument is not used.\n"},
  {(char*)"GetGlobalStructuredCoordinates", PyvtkStructuredData_GetGlobalStructuredCoordinates, METH_VARARGS | METH_STATIC,
   (char*)"V.GetGlobalStructuredCoordinates([int, int, int], [int, int, int,\n    int, int, int], [int, int, int], int)\nC++: static void GetGlobalStructuredCoordinates(int lijk[3],\n    int ext[6], int ijk[3], int dataDescription=VTK_EMPTY)\n\nGiven local structured coordinates, and the corresponding global\nsub-grid extent, this method computes the global ijk coordinates.\nThe dataDescription parameter is not used.\n"},
  {(char*)"GetCellPoints", PyvtkStructuredData_GetCellPoints, METH_VARARGS | METH_STATIC,
   (char*)"V.GetCellPoints(int, vtkIdList, int, [int, int, int])\nC++: static void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds,\n     int dataDescription, int dim[3])\n\nGet the points defining a cell. (See vtkDataSet for more info.)\n"},
  {(char*)"GetPointCells", PyvtkStructuredData_GetPointCells, METH_VARARGS | METH_STATIC,
   (char*)"V.GetPointCells(int, vtkIdList, [int, int, int])\nC++: static void GetPointCells(vtkIdType ptId, vtkIdList *cellIds,\n     int dim[3])\n\nGet the cells using a point. (See vtkDataSet for more info.)\n"},
  {(char*)"GetCellNeighbors", PyvtkStructuredData_GetCellNeighbors, METH_VARARGS | METH_STATIC,
   (char*)"V.GetCellNeighbors(int, vtkIdList, vtkIdList, [int, int, int])\nC++: static void GetCellNeighbors(vtkIdType cellId,\n    vtkIdList *ptIds, vtkIdList *cellIds, int dim[3])\n\nGet the cells using the points ptIds, exclusive of the cell\ncellId. (See vtkDataSet for more info.)\n"},
  {(char*)"ComputePointIdForExtent", PyvtkStructuredData_ComputePointIdForExtent, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputePointIdForExtent([int, int, int, int, int, int], [int,\n    int, int], int) -> int\nC++: static vtkIdType ComputePointIdForExtent(int extent[6],\n    int ijk[3], int dataDescription=VTK_EMPTY)\n\nGiven a location in structured coordinates (i-j-k), and the\nextent of the structured dataset, return the point id. The\ndataDescription argument is not used.\n"},
  {(char*)"ComputeCellIdForExtent", PyvtkStructuredData_ComputeCellIdForExtent, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputeCellIdForExtent([int, int, int, int, int, int], [int,\n    int, int], int) -> int\nC++: static vtkIdType ComputeCellIdForExtent(int extent[6],\n    int ijk[3], int dataDescription=VTK_EMPTY)\n\nGiven a location in structured coordinates (i-j-k), and the\nextent of the structured dataset, return the point id. The\ndataDescription argument is not used.\n"},
  {(char*)"ComputePointId", PyvtkStructuredData_ComputePointId, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputePointId([int, int, int], [int, int, int], int) -> int\nC++: static vtkIdType ComputePointId(int dim[3], int ijk[3],\n    int dataDescription=VTK_EMPTY)\n\nGiven a location in structured coordinates (i-j-k), and the\ndimensions of the structured dataset, return the point id.  This\nmethod does not adjust for the beginning of the extent. The\ndataDescription argument is not used.\n"},
  {(char*)"ComputeCellId", PyvtkStructuredData_ComputeCellId, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputeCellId([int, int, int], [int, int, int], int) -> int\nC++: static vtkIdType ComputeCellId(int dim[3], int ijk[3],\n    int dataDescription=VTK_EMPTY)\n\nGiven a location in structured coordinates (i-j-k), and the\ndimensions of the structured dataset, return the cell id.  This\nmethod does not adjust for the beginning of the extent. The\ndataDescription argument is not used.\n"},
  {(char*)"ComputeCellStructuredCoordsForExtent", PyvtkStructuredData_ComputeCellStructuredCoordsForExtent, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputeCellStructuredCoordsForExtent(int, [int, int, int, int,\n    int, int], [int, int, int], int)\nC++: static void ComputeCellStructuredCoordsForExtent(\n    const vtkIdType cellIdx, int ext[6], int ijk[3],\n    int dataDescription=VTK_EMPTY)\n\nGiven the global grid extent and the linear index of a cell\nwithin the grid extent, this method computes the corresponding\nstructured coordinates of the given cell. This method adjusts for\nthe beginning of the extent. The dataDescription argument is not\nused.\n"},
  {(char*)"ComputeCellStructuredCoords", PyvtkStructuredData_ComputeCellStructuredCoords, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputeCellStructuredCoords(int, [int, int, int], [int, int,\n    int], int)\nC++: static void ComputeCellStructuredCoords(\n    const vtkIdType cellId, int dim[3], int ijk[3],\n    int dataDescription=VTK_EMPTY)\n\nGiven a cellId and grid dimensions 'dim', get the structured\ncoordinates (i-j-k). This method does not adjust for the\nbeginning of the extent. The dataDescription argument is not\nused.\n"},
  {(char*)"ComputePointStructuredCoordsForExtent", PyvtkStructuredData_ComputePointStructuredCoordsForExtent, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputePointStructuredCoordsForExtent(int, [int, int, int, int,\n    int, int], [int, int, int], int)\nC++: static void ComputePointStructuredCoordsForExtent(\n    const vtkIdType ptId, int ext[6], int ijk[3],\n    int dataDescription=VTK_EMPTY)\n\nGiven a pointId and the grid extent ext, get the structured\ncoordinates (i-j-k). This method adjusts for the beginning of the\nextent. The dataDescription argument is not used.\n"},
  {(char*)"ComputePointStructuredCoords", PyvtkStructuredData_ComputePointStructuredCoords, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputePointStructuredCoords(int, [int, int, int], [int, int,\n    int], int)\nC++: static void ComputePointStructuredCoords(\n    const vtkIdType ptId, int dim[3], int ijk[3],\n    int dataDescription=VTK_EMPTY)\n\nGiven a pointId and grid dimensions 'dim', get the structured\ncoordinates (i-j-k). This method does not adjust for the\nbeginning of the extent. The dataDescription argument is not\nused.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkStructuredDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkStructuredData_Methods,
    "vtkStructuredData", modulename,
    NULL, NULL,
    PyvtkStructuredData_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkStructuredData_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredData - Singleton class for topologically regular data\n\n",
    "Superclass: vtkObject\n\n",
    "vtkStructuredData is a singleton class that provides an interface for\ntopologically regular data. Regular data is data that can be accessed\nin rectangular fashion using an i-j-k index. A finite difference\ngrid, a volume, or a pixmap are all considered regular.\n\nSee Also:\n\nvtkStructuredGrid vtkUniformGrid vtkRectilinearGrid\nvtkRectilinearGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredData", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 10; c++)
    {
    static const struct { const char *name; int value; }
      constants[10] = {
        { "VTK_UNCHANGED", 0 },
        { "VTK_SINGLE_POINT", 1 },
        { "VTK_X_LINE", 2 },
        { "VTK_Y_LINE", 3 },
        { "VTK_Z_LINE", 4 },
        { "VTK_XY_PLANE", 5 },
        { "VTK_YZ_PLANE", 6 },
        { "VTK_XZ_PLANE", 7 },
        { "VTK_XYZ_GRID", 8 },
        { "VTK_EMPTY", 9 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

