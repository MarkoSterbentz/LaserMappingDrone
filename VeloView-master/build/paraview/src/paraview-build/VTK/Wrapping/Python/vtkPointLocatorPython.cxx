// python wrapper for vtkPointLocator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPointLocator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPointLocator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPointLocatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkIncrementalPointLocatorNew
extern "C" { PyObject *PyVTKClass_vtkIncrementalPointLocatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkIncrementalPointLocatorNew
#endif

static const char **PyvtkPointLocator_Doc();


static PyObject *
PyvtkPointLocator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPointLocator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPointLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointLocator::NewInstance());

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
PyvtkPointLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPointLocator *tempr = vtkPointLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_SetDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

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
      op->SetDivisions(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPointLocator::SetDivisions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointLocator_SetDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDivisions(temp0);
      }
    else
      {
      op->vtkPointLocator::SetDivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointLocator_SetDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPointLocator_SetDivisions_s1(self, args);
    case 1:
      return PyvtkPointLocator_SetDivisions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDivisions");
  return NULL;
}



static PyObject *
PyvtkPointLocator_GetDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetDivisions() :
      op->vtkPointLocator::GetDivisions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_SetNumberOfPointsPerBucket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPointsPerBucket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPointsPerBucket(temp0);
      }
    else
      {
      op->vtkPointLocator::SetNumberOfPointsPerBucket(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_GetNumberOfPointsPerBucketMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBucketMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBucketMinValue() :
      op->vtkPointLocator::GetNumberOfPointsPerBucketMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_GetNumberOfPointsPerBucketMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBucketMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBucketMaxValue() :
      op->vtkPointLocator::GetNumberOfPointsPerBucketMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_GetNumberOfPointsPerBucket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBucket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBucket() :
      op->vtkPointLocator::GetNumberOfPointsPerBucket());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_FindClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPoint(temp0) :
      op->vtkPointLocator::FindClosestPoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_FindClosestPointWithinRadius_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  double temp0;
  double temp1[3];
  const int size1 = 3;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPointWithinRadius(temp0, temp1, temp2) :
      op->vtkPointLocator::FindClosestPointWithinRadius(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointLocator_FindClosestPointWithinRadius_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  double temp0;
  double temp1[3];
  const int size1 = 3;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPointWithinRadius(temp0, temp1, temp2, temp3) :
      op->vtkPointLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointLocator_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPointLocator_FindClosestPointWithinRadius_s1(self, args);
    case 4:
      return PyvtkPointLocator_FindClosestPointWithinRadius_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPointWithinRadius");
  return NULL;
}



static PyObject *
PyvtkPointLocator_InitPointInsertion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  vtkPoints *temp0 = NULL;
  double temp1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1))
    {
    int tempr = (ap.IsBound() ?
      op->InitPointInsertion(temp0, temp1) :
      op->vtkPointLocator::InitPointInsertion(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointLocator_InitPointInsertion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  vtkPoints *temp0 = NULL;
  double temp1[6];
  const int size1 = 6;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->InitPointInsertion(temp0, temp1, temp2) :
      op->vtkPointLocator::InitPointInsertion(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointLocator_InitPointInsertion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPointLocator_InitPointInsertion_s1(self, args);
    case 3:
      return PyvtkPointLocator_InitPointInsertion_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InitPointInsertion");
  return NULL;
}



static PyObject *
PyvtkPointLocator_InsertPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  vtkIdType temp0;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->InsertPoint(temp0, temp1);
      }
    else
      {
      op->vtkPointLocator::InsertPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_InsertNextPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextPoint(temp0) :
      op->vtkPointLocator::InsertNextPoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_IsInsertedPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->IsInsertedPoint(temp0, temp1, temp2) :
      op->vtkPointLocator::IsInsertedPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointLocator_IsInsertedPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->IsInsertedPoint(temp0) :
      op->vtkPointLocator::IsInsertedPoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointLocator_IsInsertedPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPointLocator_IsInsertedPoint_s1(self, args);
    case 1:
      return PyvtkPointLocator_IsInsertedPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsInsertedPoint");
  return NULL;
}



static PyObject *
PyvtkPointLocator_InsertUniquePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniquePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->InsertUniquePoint(temp0, temp1) :
      op->vtkPointLocator::InsertUniquePoint(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_FindClosestInsertedPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestInsertedPoint(temp0) :
      op->vtkPointLocator::FindClosestInsertedPoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_FindClosestNPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  int temp0;
  double temp1[3];
  const int size1 = 3;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->FindClosestNPoints(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPointLocator::FindClosestNPoints(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_FindDistributedPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindDistributedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  int temp0;
  double temp1[3];
  const int size1 = 3;
  vtkIdList *temp2 = NULL;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->FindDistributedPoints(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPointLocator::FindDistributedPoints(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointLocator_FindDistributedPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindDistributedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  vtkIdList *temp4 = NULL;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkIdList") &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->FindDistributedPoints(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkPointLocator::FindDistributedPoints(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointLocator_FindDistributedPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPointLocator_FindDistributedPoints_s1(self, args);
    case 6:
      return PyvtkPointLocator_FindDistributedPoints_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindDistributedPoints");
  return NULL;
}



static PyObject *
PyvtkPointLocator_FindPointsWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  double temp0;
  double temp1[3];
  const int size1 = 3;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->FindPointsWithinRadius(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPointLocator::FindPointsWithinRadius(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_GetPointsInBucket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsInBucket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkIdList *tempr = (ap.IsBound() ?
      op->GetPointsInBucket(temp0, temp1) :
      op->vtkPointLocator::GetPointsInBucket(temp0, temp1));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkPointLocator::GetPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPointLocator::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeSearchStructure();
      }
    else
      {
      op->vtkPointLocator::FreeSearchStructure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildLocator();
      }
    else
      {
      op->vtkPointLocator::BuildLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointLocator_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GenerateRepresentation(temp0, temp1);
      }
    else
      {
      op->vtkPointLocator::GenerateRepresentation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPointLocator_Methods[] = {
  {(char*)"GetClassName", PyvtkPointLocator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointLocator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointLocator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPointLocator\nC++: vtkPointLocator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPointLocator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointLocator\nC++: vtkPointLocator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDivisions", PyvtkPointLocator_SetDivisions, METH_VARARGS,
   (char*)"V.SetDivisions(int, int, int)\nC++: void SetDivisions(int, int, int)\nV.SetDivisions((int, int, int))\nC++: void SetDivisions(int a[3])\n\n"},
  {(char*)"GetDivisions", PyvtkPointLocator_GetDivisions, METH_VARARGS,
   (char*)"V.GetDivisions() -> (int, int, int)\nC++: int *GetDivisions()\n\nSet the number of divisions in x-y-z directions.\n"},
  {(char*)"SetNumberOfPointsPerBucket", PyvtkPointLocator_SetNumberOfPointsPerBucket, METH_VARARGS,
   (char*)"V.SetNumberOfPointsPerBucket(int)\nC++: void SetNumberOfPointsPerBucket(int)\n\nSpecify the average number of points in each bucket.\n"},
  {(char*)"GetNumberOfPointsPerBucketMinValue", PyvtkPointLocator_GetNumberOfPointsPerBucketMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfPointsPerBucketMinValue() -> int\nC++: int GetNumberOfPointsPerBucketMinValue()\n\nSpecify the average number of points in each bucket.\n"},
  {(char*)"GetNumberOfPointsPerBucketMaxValue", PyvtkPointLocator_GetNumberOfPointsPerBucketMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfPointsPerBucketMaxValue() -> int\nC++: int GetNumberOfPointsPerBucketMaxValue()\n\nSpecify the average number of points in each bucket.\n"},
  {(char*)"GetNumberOfPointsPerBucket", PyvtkPointLocator_GetNumberOfPointsPerBucket, METH_VARARGS,
   (char*)"V.GetNumberOfPointsPerBucket() -> int\nC++: int GetNumberOfPointsPerBucket()\n\nSpecify the average number of points in each bucket.\n"},
  {(char*)"FindClosestPoint", PyvtkPointLocator_FindClosestPoint, METH_VARARGS,
   (char*)"V.FindClosestPoint((float, float, float)) -> int\nC++: virtual vtkIdType FindClosestPoint(const double x[3])\n\nGiven a position x, return the id of the point closest to it.\nAlternative method requires separate x-y-z values. These methods\nare thread safe if BuildLocator() is directly or indirectly\ncalled from a single thread first.\n"},
  {(char*)"FindClosestPointWithinRadius", PyvtkPointLocator_FindClosestPointWithinRadius, METH_VARARGS,
   (char*)"V.FindClosestPointWithinRadius(float, (float, float, float),\n    float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double radius,\n     const double x[3], double &dist2)\nV.FindClosestPointWithinRadius(float, (float, float, float),\n    float, float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double radius,\n     const double x[3], double inputDataLength, double &dist2)\n\nGiven a position x and a radius r, return the id of the point\nclosest to the point in that radius. These methods are thread\nsafe if BuildLocator() is directly or indirectly called from a\nsingle thread first. dist2 returns the squared distance to the\npoint.\n"},
  {(char*)"InitPointInsertion", PyvtkPointLocator_InitPointInsertion, METH_VARARGS,
   (char*)"V.InitPointInsertion(vtkPoints, (float, float, float, float,\n    float, float)) -> int\nC++: virtual int InitPointInsertion(vtkPoints *newPts,\n    const double bounds[6])\nV.InitPointInsertion(vtkPoints, (float, float, float, float,\n    float, float), int) -> int\nC++: virtual int InitPointInsertion(vtkPoints *newPts,\n    const double bounds[6], vtkIdType estSize)\n\nInitialize the point insertion process. The newPts is an object\nrepresenting point coordinates into which incremental insertion\nmethods place their data. Bounds are the box that the points lie\nin. Not thread safe.\n"},
  {(char*)"InsertPoint", PyvtkPointLocator_InsertPoint, METH_VARARGS,
   (char*)"V.InsertPoint(int, (float, float, float))\nC++: virtual void InsertPoint(vtkIdType ptId, const double x[3])\n\nIncrementally insert a point into search structure with a\nparticular index value. You should use the method\nIsInsertedPoint() to see whether this point has already been\ninserted (that is, if you desire to prevent duplicate points).\nBefore using this method you must make sure that newPts have been\nsupplied, the bounds has been set properly, and that divs are\nproperly set. (See InitPointInsertion().) Not thread safe.\n"},
  {(char*)"InsertNextPoint", PyvtkPointLocator_InsertNextPoint, METH_VARARGS,
   (char*)"V.InsertNextPoint((float, float, float)) -> int\nC++: virtual vtkIdType InsertNextPoint(const double x[3])\n\nIncrementally insert a point into search structure. The method\nreturns the insertion location (i.e., point id). You should use\nthe method IsInsertedPoint() to see whether this point has\nalready been inserted (that is, if you desire to prevent\nduplicate points). Before using this method you must make sure\nthat newPts have been supplied, the bounds has been set properly,\nand that divs are properly set. (See InitPointInsertion().) Not\nthread safe.\n"},
  {(char*)"IsInsertedPoint", PyvtkPointLocator_IsInsertedPoint, METH_VARARGS,
   (char*)"V.IsInsertedPoint(float, float, float) -> int\nC++: vtkIdType IsInsertedPoint(double x, double y, double z)\nV.IsInsertedPoint((float, float, float)) -> int\nC++: virtual vtkIdType IsInsertedPoint(const double x[3])\n\nDetermine whether point given by x[3] has been inserted into\npoints list. Return id of previously inserted point if this is\ntrue, otherwise return\n-1. This method is thread safe.\n"},
  {(char*)"InsertUniquePoint", PyvtkPointLocator_InsertUniquePoint, METH_VARARGS,
   (char*)"V.InsertUniquePoint((float, float, float), int) -> int\nC++: virtual int InsertUniquePoint(const double x[3],\n    vtkIdType &ptId)\n\nDetermine whether point given by x[3] has been inserted into\npoints list. Return 0 if point was already in the list, otherwise\nreturn 1. If the point was not in the list, it will be ADDED.  In\neither case, the id of the point (newly inserted or not) is\nreturned in the ptId argument. Note this combines the\nfunctionality of IsInsertedPoint() followed by a call to\nInsertNextPoint(). This method is not thread safe.\n"},
  {(char*)"FindClosestInsertedPoint", PyvtkPointLocator_FindClosestInsertedPoint, METH_VARARGS,
   (char*)"V.FindClosestInsertedPoint((float, float, float)) -> int\nC++: virtual vtkIdType FindClosestInsertedPoint(const double x[3])\n\nGiven a position x, return the id of the point closest to it.\nThis method is used when performing incremental point insertion.\nNote that -1 indicates that no point was found. This method is\nthread safe if  BuildLocator() is directly or indirectly called\nfrom a single thread first.\n"},
  {(char*)"FindClosestNPoints", PyvtkPointLocator_FindClosestNPoints, METH_VARARGS,
   (char*)"V.FindClosestNPoints(int, (float, float, float), vtkIdList)\nC++: virtual void FindClosestNPoints(int N, const double x[3],\n    vtkIdList *result)\n\nFind the closest N points to a position. This returns the closest\nN points to a position. A faster method could be created that\nreturned N close points to a position, but necessarily the exact\nN closest. The returned points are sorted from closest to\nfarthest. These methods are thread safe if BuildLocator() is\ndirectly or indirectly called from a single thread first.\n"},
  {(char*)"FindDistributedPoints", PyvtkPointLocator_FindDistributedPoints, METH_VARARGS,
   (char*)"V.FindDistributedPoints(int, (float, float, float), vtkIdList,\n    int)\nC++: virtual void FindDistributedPoints(int N, const double x[3],\n    vtkIdList *result, int M)\nV.FindDistributedPoints(int, float, float, float, vtkIdList, int)\nC++: virtual void FindDistributedPoints(int N, double x, double y,\n     double z, vtkIdList *result, int M)\n\nFind the closest points to a position such that each octant of\nspace around the position contains at least N points. Loosely\nlimit the search to a maximum number of points evaluated, M.\nThese methods are thread safe if BuildLocator() is directly or\nindirectly called from a single thread first.\n"},
  {(char*)"FindPointsWithinRadius", PyvtkPointLocator_FindPointsWithinRadius, METH_VARARGS,
   (char*)"V.FindPointsWithinRadius(float, (float, float, float), vtkIdList)\nC++: virtual void FindPointsWithinRadius(double R,\n    const double x[3], vtkIdList *result)\n\nFind all points within a specified radius R of position x. The\nresult is not sorted in any specific manner. These methods are\nthread safe if BuildLocator() is directly or indirectly called\nfrom a single thread first.\n"},
  {(char*)"GetPointsInBucket", PyvtkPointLocator_GetPointsInBucket, METH_VARARGS,
   (char*)"V.GetPointsInBucket((float, float, float), [int, int, int])\n    -> vtkIdList\nC++: virtual vtkIdList *GetPointsInBucket(const double x[3],\n    int ijk[3])\n\nGiven a position x, return the list of points in the bucket that\ncontains the point. It is possible that NULL is returned. The\nuser provides an ijk array that is the indices into the locator.\nThis method is thread safe.\n"},
  {(char*)"GetPoints", PyvtkPointLocator_GetPoints, METH_VARARGS,
   (char*)"V.GetPoints() -> vtkPoints\nC++: vtkPoints *GetPoints()\n\nProvide an accessor to the points.\n"},
  {(char*)"Initialize", PyvtkPointLocator_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nSee vtkLocator interface documentation. These methods are not\nthread safe.\n"},
  {(char*)"FreeSearchStructure", PyvtkPointLocator_FreeSearchStructure, METH_VARARGS,
   (char*)"V.FreeSearchStructure()\nC++: void FreeSearchStructure()\n\nSee vtkLocator interface documentation. These methods are not\nthread safe.\n"},
  {(char*)"BuildLocator", PyvtkPointLocator_BuildLocator, METH_VARARGS,
   (char*)"V.BuildLocator()\nC++: void BuildLocator()\n\nSee vtkLocator interface documentation. These methods are not\nthread safe.\n"},
  {(char*)"GenerateRepresentation", PyvtkPointLocator_GenerateRepresentation, METH_VARARGS,
   (char*)"V.GenerateRepresentation(int, vtkPolyData)\nC++: void GenerateRepresentation(int level, vtkPolyData *pd)\n\nSee vtkLocator interface documentation. These methods are not\nthread safe.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointLocator_StaticNew()
{
  return vtkPointLocator::New();
}

PyObject *PyVTKClass_vtkPointLocatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointLocator_StaticNew,
    PyvtkPointLocator_Methods,
    "vtkPointLocator", modulename,
    NULL, NULL,
    PyvtkPointLocator_Doc(),
    PyVTKClass_vtkIncrementalPointLocatorNew(modulename));
  return cls;
}

const char **PyvtkPointLocator_Doc()
{
  static const char *docstring[] = {
    "vtkPointLocator - quickly locate points in 3-space\n\n",
    "Superclass: vtkIncrementalPointLocator\n\n",
    "vtkPointLocator is a spatial search object to quickly locate points\nin 3D. vtkPointLocator works by dividing a specified region of space\ninto a regular array of \"rectangular\" buckets, and then keeping a\nlist of points that lie in each bucket. Typical operation involves\ngiving a position in 3D and finding the closest point.\n\nvtkPointLocator has two distinct methods of interaction. In the first\nmeth",
    "od, you supply it with a dataset, and it operates on the points\nin the dataset. In the second method, you supply it with an array of\npoints, and the object operates on the array.\n\nCaveats:\n\nMany other types of spatial locators have been developed such as\noctrees and kd-trees. These are often more efficient for the\noperations described here.\n\nSee Also:\n\nvtkCellPicker vtkPointPicker\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointLocator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointLocatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointLocator", o) != 0)
    {
    Py_DECREF(o);
    }

}

