// python wrapper for vtkLinearTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLinearTransform.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLinearTransform(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLinearTransformNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkHomogeneousTransformNew
extern "C" { PyObject *PyVTKClass_vtkHomogeneousTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkHomogeneousTransformNew
#endif

static const char **PyvtkLinearTransform_Doc();


static PyObject *
PyvtkLinearTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLinearTransform::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLinearTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLinearTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLinearTransform::NewInstance());

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
PyvtkLinearTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLinearTransform *tempr = vtkLinearTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearTransform_TransformNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->TransformNormal(temp0, temp1);
      }
    else
      {
      op->vtkLinearTransform::TransformNormal(temp0, temp1);
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
PyvtkLinearTransform_TransformNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double *tempr = (ap.IsBound() ?
      op->TransformNormal(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformNormal(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformNormal_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double *tempr = (ap.IsBound() ?
      op->TransformNormal(temp0) :
      op->vtkLinearTransform::TransformNormal(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLinearTransform_TransformNormal_s1(self, args);
    case 3:
      return PyvtkLinearTransform_TransformNormal_s2(self, args);
    case 1:
      return PyvtkLinearTransform_TransformNormal_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TransformNormal");
  return NULL;
}



static PyObject *
PyvtkLinearTransform_TransformFloatNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  float temp0;
  float temp1;
  float temp2;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    float *tempr = (ap.IsBound() ?
      op->TransformFloatNormal(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformFloatNormal(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformFloatNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  float temp0[3];
  const int size0 = 3;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    float *tempr = (ap.IsBound() ?
      op->TransformFloatNormal(temp0) :
      op->vtkLinearTransform::TransformFloatNormal(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformFloatNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLinearTransform_TransformFloatNormal_s1(self, args);
    case 1:
      return PyvtkLinearTransform_TransformFloatNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TransformFloatNormal");
  return NULL;
}



static PyObject *
PyvtkLinearTransform_TransformDoubleNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoubleNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double *tempr = (ap.IsBound() ?
      op->TransformDoubleNormal(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformDoubleNormal(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformDoubleNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoubleNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double *tempr = (ap.IsBound() ?
      op->TransformDoubleNormal(temp0) :
      op->vtkLinearTransform::TransformDoubleNormal(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformDoubleNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLinearTransform_TransformDoubleNormal_s1(self, args);
    case 1:
      return PyvtkLinearTransform_TransformDoubleNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TransformDoubleNormal");
  return NULL;
}



static PyObject *
PyvtkLinearTransform_TransformVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double *tempr = (ap.IsBound() ?
      op->TransformVector(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformVector(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double *tempr = (ap.IsBound() ?
      op->TransformVector(temp0) :
      op->vtkLinearTransform::TransformVector(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformVector_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->TransformVector(temp0, temp1);
      }
    else
      {
      op->vtkLinearTransform::TransformVector(temp0, temp1);
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
PyvtkLinearTransform_TransformVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLinearTransform_TransformVector_s1(self, args);
    case 1:
      return PyvtkLinearTransform_TransformVector_s2(self, args);
    case 2:
      return PyvtkLinearTransform_TransformVector_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TransformVector");
  return NULL;
}



static PyObject *
PyvtkLinearTransform_TransformFloatVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  float temp0;
  float temp1;
  float temp2;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    float *tempr = (ap.IsBound() ?
      op->TransformFloatVector(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformFloatVector(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformFloatVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  float temp0[3];
  const int size0 = 3;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    float *tempr = (ap.IsBound() ?
      op->TransformFloatVector(temp0) :
      op->vtkLinearTransform::TransformFloatVector(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformFloatVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLinearTransform_TransformFloatVector_s1(self, args);
    case 1:
      return PyvtkLinearTransform_TransformFloatVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TransformFloatVector");
  return NULL;
}



static PyObject *
PyvtkLinearTransform_TransformDoubleVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoubleVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double *tempr = (ap.IsBound() ?
      op->TransformDoubleVector(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformDoubleVector(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformDoubleVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoubleVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double *tempr = (ap.IsBound() ?
      op->TransformDoubleVector(temp0) :
      op->vtkLinearTransform::TransformDoubleVector(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformDoubleVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLinearTransform_TransformDoubleVector_s1(self, args);
    case 1:
      return PyvtkLinearTransform_TransformDoubleVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TransformDoubleVector");
  return NULL;
}



static PyObject *
PyvtkLinearTransform_TransformPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  vtkPoints *temp0 = NULL;
  vtkPoints *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->TransformPoints(temp0, temp1);
      }
    else
      {
      op->vtkLinearTransform::TransformPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLinearTransform_TransformNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->TransformNormals(temp0, temp1);
      }
    else
      {
      op->vtkLinearTransform::TransformNormals(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLinearTransform_TransformVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->TransformVectors(temp0, temp1);
      }
    else
      {
      op->vtkLinearTransform::TransformVectors(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLinearTransform_TransformPointsNormalsVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPointsNormalsVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  vtkPoints *temp0 = NULL;
  vtkPoints *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  vtkDataArray *temp3 = NULL;
  vtkDataArray *temp4 = NULL;
  vtkDataArray *temp5 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetVTKObject(temp4, "vtkDataArray") &&
      ap.GetVTKObject(temp5, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->TransformPointsNormalsVectors(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkLinearTransform::TransformPointsNormalsVectors(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLinearTransform_GetLinearInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinearInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLinearTransform *tempr = (ap.IsBound() ?
      op->GetLinearInverse() :
      op->vtkLinearTransform::GetLinearInverse());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InternalTransformPoint(temp0, temp1);
      }
    else
      {
      op->vtkLinearTransform::InternalTransformPoint(temp0, temp1);
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
PyvtkLinearTransform_InternalTransformNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InternalTransformNormal(temp0, temp1);
      }
    else
      {
      op->vtkLinearTransform::InternalTransformNormal(temp0, temp1);
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
PyvtkLinearTransform_InternalTransformVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InternalTransformVector(temp0, temp1);
      }
    else
      {
      op->vtkLinearTransform::InternalTransformVector(temp0, temp1);
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
PyvtkLinearTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3][3];
  double save2[3][3];
  static int size2[2] = { 3, 3 };
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(*temp2, *save2, size2[0]*size2[1]);

    if (ap.IsBound())
      {
      op->InternalTransformDerivative(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLinearTransform::InternalTransformDerivative(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(2, *temp2, 2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLinearTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkLinearTransform_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLinearTransform_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLinearTransform_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLinearTransform\nC++: vtkLinearTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLinearTransform_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLinearTransform\nC++: vtkLinearTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"TransformNormal", PyvtkLinearTransform_TransformNormal, METH_VARARGS,
   (char*)"V.TransformNormal((float, float, float), [float, float, float])\nC++: void TransformNormal(const double in[3], double out[3])\nV.TransformNormal(float, float, float) -> (float, float, float)\nC++: double *TransformNormal(double x, double y, double z)\nV.TransformNormal((float, float, float)) -> (float, float, float)\nC++: double *TransformNormal(const double normal[3])\n\nApply the transformation to a double-precision normal. You can\nuse the same array to store both the input and output.\n"},
  {(char*)"TransformFloatNormal", PyvtkLinearTransform_TransformFloatNormal, METH_VARARGS,
   (char*)"V.TransformFloatNormal(float, float, float) -> (float, float,\n    float)\nC++: float *TransformFloatNormal(float x, float y, float z)\nV.TransformFloatNormal((float, float, float)) -> (float, float,\n    float)\nC++: float *TransformFloatNormal(const float normal[3])\n\nApply the transformation to an (x,y,z) normal. Use this if you\nare programming in python, tcl or Java.\n"},
  {(char*)"TransformDoubleNormal", PyvtkLinearTransform_TransformDoubleNormal, METH_VARARGS,
   (char*)"V.TransformDoubleNormal(float, float, float) -> (float, float,\n    float)\nC++: double *TransformDoubleNormal(double x, double y, double z)\nV.TransformDoubleNormal((float, float, float)) -> (float, float,\n    float)\nC++: double *TransformDoubleNormal(const double normal[3])\n\nApply the transformation to a double-precision (x,y,z) normal.\nUse this if you are programming in python, tcl or Java.\n"},
  {(char*)"TransformVector", PyvtkLinearTransform_TransformVector, METH_VARARGS,
   (char*)"V.TransformVector(float, float, float) -> (float, float, float)\nC++: double *TransformVector(double x, double y, double z)\nV.TransformVector((float, float, float)) -> (float, float, float)\nC++: double *TransformVector(const double normal[3])\nV.TransformVector((float, float, float), [float, float, float])\nC++: void TransformVector(const double in[3], double out[3])\n\nSynonymous with TransformDoubleVector(x,y,z). Use this if you are\nprogramming in python, tcl or Java.\n"},
  {(char*)"TransformFloatVector", PyvtkLinearTransform_TransformFloatVector, METH_VARARGS,
   (char*)"V.TransformFloatVector(float, float, float) -> (float, float,\n    float)\nC++: float *TransformFloatVector(float x, float y, float z)\nV.TransformFloatVector((float, float, float)) -> (float, float,\n    float)\nC++: float *TransformFloatVector(const float vec[3])\n\nApply the transformation to an (x,y,z) vector. Use this if you\nare programming in python, tcl or Java.\n"},
  {(char*)"TransformDoubleVector", PyvtkLinearTransform_TransformDoubleVector, METH_VARARGS,
   (char*)"V.TransformDoubleVector(float, float, float) -> (float, float,\n    float)\nC++: double *TransformDoubleVector(double x, double y, double z)\nV.TransformDoubleVector((float, float, float)) -> (float, float,\n    float)\nC++: double *TransformDoubleVector(const double vec[3])\n\nApply the transformation to a double-precision (x,y,z) vector.\nUse this if you are programming in python, tcl or Java.\n"},
  {(char*)"TransformPoints", PyvtkLinearTransform_TransformPoints, METH_VARARGS,
   (char*)"V.TransformPoints(vtkPoints, vtkPoints)\nC++: void TransformPoints(vtkPoints *inPts, vtkPoints *outPts)\n\nApply the transformation to a series of points, and append the\nresults to outPts.\n"},
  {(char*)"TransformNormals", PyvtkLinearTransform_TransformNormals, METH_VARARGS,
   (char*)"V.TransformNormals(vtkDataArray, vtkDataArray)\nC++: virtual void TransformNormals(vtkDataArray *inNms,\n    vtkDataArray *outNms)\n\nApply the transformation to a series of normals, and append the\nresults to outNms.\n"},
  {(char*)"TransformVectors", PyvtkLinearTransform_TransformVectors, METH_VARARGS,
   (char*)"V.TransformVectors(vtkDataArray, vtkDataArray)\nC++: virtual void TransformVectors(vtkDataArray *inVrs,\n    vtkDataArray *outVrs)\n\nApply the transformation to a series of vectors, and append the\nresults to outVrs.\n"},
  {(char*)"TransformPointsNormalsVectors", PyvtkLinearTransform_TransformPointsNormalsVectors, METH_VARARGS,
   (char*)"V.TransformPointsNormalsVectors(vtkPoints, vtkPoints,\n    vtkDataArray, vtkDataArray, vtkDataArray, vtkDataArray)\nC++: void TransformPointsNormalsVectors(vtkPoints *inPts,\n    vtkPoints *outPts, vtkDataArray *inNms, vtkDataArray *outNms,\n    vtkDataArray *inVrs, vtkDataArray *outVrs)\n\nApply the transformation to a combination of points, normals and\nvectors.\n"},
  {(char*)"GetLinearInverse", PyvtkLinearTransform_GetLinearInverse, METH_VARARGS,
   (char*)"V.GetLinearInverse() -> vtkLinearTransform\nC++: vtkLinearTransform *GetLinearInverse()\n\nJust like GetInverse, but it includes a typecast to\nvtkLinearTransform.\n"},
  {(char*)"InternalTransformPoint", PyvtkLinearTransform_InternalTransformPoint, METH_VARARGS,
   (char*)"V.InternalTransformPoint((float, float, float), [float, float,\n    float])\nC++: void InternalTransformPoint(const double in[3],\n    double out[3])\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {(char*)"InternalTransformNormal", PyvtkLinearTransform_InternalTransformNormal, METH_VARARGS,
   (char*)"V.InternalTransformNormal((float, float, float), [float, float,\n    float])\nC++: virtual void InternalTransformNormal(const double in[3],\n    double out[3])\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {(char*)"InternalTransformVector", PyvtkLinearTransform_InternalTransformVector, METH_VARARGS,
   (char*)"V.InternalTransformVector((float, float, float), [float, float,\n    float])\nC++: virtual void InternalTransformVector(const double in[3],\n    double out[3])\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {(char*)"InternalTransformDerivative", PyvtkLinearTransform_InternalTransformDerivative, METH_VARARGS,
   (char*)"V.InternalTransformDerivative((float, float, float), [float,\n    float, float], [[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3])\n\nThis will calculate the transformation as well as its derivative\nwithout calling Update.  Meant for use only within other VTK\nclasses.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkLinearTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkLinearTransform_Methods,
    "vtkLinearTransform", modulename,
    NULL, NULL,
    PyvtkLinearTransform_Doc(),
    PyVTKClass_vtkHomogeneousTransformNew(modulename));
  return cls;
}

const char **PyvtkLinearTransform_Doc()
{
  static const char *docstring[] = {
    "vtkLinearTransform - abstract superclass for linear transformations\n\n",
    "Superclass: vtkHomogeneousTransform\n\n",
    "vtkLinearTransform provides a generic interface for linear (affine or\n12 degree-of-freedom) geometric transformations.\n\nSee Also:\n\nvtkTransform vtkIdentityTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLinearTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLinearTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLinearTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

