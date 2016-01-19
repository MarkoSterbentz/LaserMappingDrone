// python wrapper for vtkPerspectiveTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPerspectiveTransform.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPerspectiveTransform(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPerspectiveTransformNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkHomogeneousTransformNew
extern "C" { PyObject *PyVTKClass_vtkHomogeneousTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkHomogeneousTransformNew
#endif

static const char **PyvtkPerspectiveTransform_Doc();


static PyObject *
PyvtkPerspectiveTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPerspectiveTransform::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPerspectiveTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPerspectiveTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPerspectiveTransform::NewInstance());

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
PyvtkPerspectiveTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPerspectiveTransform *tempr = vtkPerspectiveTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Identity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Identity();
      }
    else
      {
      op->vtkPerspectiveTransform::Identity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Inverse();
      }
    else
      {
      op->vtkPerspectiveTransform::Inverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_AdjustViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    if (ap.IsBound())
      {
      op->AdjustViewport(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkPerspectiveTransform::AdjustViewport(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_AdjustZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->AdjustZBuffer(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPerspectiveTransform::AdjustZBuffer(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Ortho(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Ortho");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->Ortho(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkPerspectiveTransform::Ortho(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Frustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Frustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->Frustum(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkPerspectiveTransform::Frustum(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Perspective(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Perspective");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->Perspective(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPerspectiveTransform::Perspective(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Shear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Shear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

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
      op->Shear(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPerspectiveTransform::Shear(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Stereo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stereo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Stereo(temp0, temp1);
      }
    else
      {
      op->vtkPerspectiveTransform::Stereo(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_SetupCamera_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  double temp2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    if (ap.IsBound())
      {
      op->SetupCamera(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPerspectiveTransform::SetupCamera(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_SetupCamera_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
    {
    if (ap.IsBound())
      {
      op->SetupCamera(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkPerspectiveTransform::SetupCamera(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_SetupCamera(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPerspectiveTransform_SetupCamera_s1(self, args);
    case 9:
      return PyvtkPerspectiveTransform_SetupCamera_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetupCamera");
  return NULL;
}



static PyObject *
PyvtkPerspectiveTransform_Translate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

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
      op->Translate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPerspectiveTransform::Translate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_Translate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->Translate(temp0);
      }
    else
      {
      op->vtkPerspectiveTransform::Translate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_Translate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPerspectiveTransform_Translate_s1(self, args);
    case 1:
      return PyvtkPerspectiveTransform_Translate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Translate");
  return NULL;
}



static PyObject *
PyvtkPerspectiveTransform_RotateWXYZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->RotateWXYZ(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPerspectiveTransform::RotateWXYZ(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_RotateWXYZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->RotateWXYZ(temp0, temp1);
      }
    else
      {
      op->vtkPerspectiveTransform::RotateWXYZ(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_RotateWXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPerspectiveTransform_RotateWXYZ_s1(self, args);
    case 2:
      return PyvtkPerspectiveTransform_RotateWXYZ_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RotateWXYZ");
  return NULL;
}



static PyObject *
PyvtkPerspectiveTransform_RotateX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RotateX(temp0);
      }
    else
      {
      op->vtkPerspectiveTransform::RotateX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_RotateY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RotateY(temp0);
      }
    else
      {
      op->vtkPerspectiveTransform::RotateY(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_RotateZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RotateZ(temp0);
      }
    else
      {
      op->vtkPerspectiveTransform::RotateZ(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Scale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

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
      op->Scale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPerspectiveTransform::Scale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_Scale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->Scale(temp0);
      }
    else
      {
      op->vtkPerspectiveTransform::Scale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_Scale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPerspectiveTransform_Scale_s1(self, args);
    case 1:
      return PyvtkPerspectiveTransform_Scale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Scale");
  return NULL;
}



static PyObject *
PyvtkPerspectiveTransform_SetMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetMatrix(temp0);
      }
    else
      {
      op->vtkPerspectiveTransform::SetMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_SetMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0[16];
  const int size0 = 16;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMatrix(temp0);
      }
    else
      {
      op->vtkPerspectiveTransform::SetMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPerspectiveTransform_SetMatrix_Methods[] = {
  {NULL, PyvtkPerspectiveTransform_SetMatrix_s1, METH_VARARGS,
   (char*)"@O *vtkMatrix4x4"},
  {NULL, PyvtkPerspectiveTransform_SetMatrix_s2, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPerspectiveTransform_SetMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPerspectiveTransform_SetMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMatrix");
  return NULL;
}



static PyObject *
PyvtkPerspectiveTransform_Concatenate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->Concatenate(temp0);
      }
    else
      {
      op->vtkPerspectiveTransform::Concatenate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_Concatenate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  double temp0[16];
  const int size0 = 16;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->Concatenate(temp0);
      }
    else
      {
      op->vtkPerspectiveTransform::Concatenate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPerspectiveTransform_Concatenate_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  vtkHomogeneousTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHomogeneousTransform"))
    {
    if (ap.IsBound())
      {
      op->Concatenate(temp0);
      }
    else
      {
      op->vtkPerspectiveTransform::Concatenate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPerspectiveTransform_Concatenate_Methods[] = {
  {NULL, PyvtkPerspectiveTransform_Concatenate_s1, METH_VARARGS,
   (char*)"@O *vtkMatrix4x4"},
  {NULL, PyvtkPerspectiveTransform_Concatenate_s2, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, PyvtkPerspectiveTransform_Concatenate_s3, METH_VARARGS,
   (char*)"@O *vtkHomogeneousTransform"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPerspectiveTransform_Concatenate(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPerspectiveTransform_Concatenate_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Concatenate");
  return NULL;
}



static PyObject *
PyvtkPerspectiveTransform_PreMultiply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreMultiply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreMultiply();
      }
    else
      {
      op->vtkPerspectiveTransform::PreMultiply();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_PostMultiply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostMultiply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PostMultiply();
      }
    else
      {
      op->vtkPerspectiveTransform::PostMultiply();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_GetNumberOfConcatenatedTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConcatenatedTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfConcatenatedTransforms() :
      op->vtkPerspectiveTransform::GetNumberOfConcatenatedTransforms());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_GetConcatenatedTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConcatenatedTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkHomogeneousTransform *tempr = (ap.IsBound() ?
      op->GetConcatenatedTransform(temp0) :
      op->vtkPerspectiveTransform::GetConcatenatedTransform(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  vtkHomogeneousTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHomogeneousTransform"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkPerspectiveTransform::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHomogeneousTransform *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkPerspectiveTransform::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_GetInverseFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInverseFlag() :
      op->vtkPerspectiveTransform::GetInverseFlag());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Push();
      }
    else
      {
      op->vtkPerspectiveTransform::Push();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_Pop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Pop();
      }
    else
      {
      op->vtkPerspectiveTransform::Pop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkPerspectiveTransform::MakeTransform());

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
PyvtkPerspectiveTransform_CircuitCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CircuitCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    int tempr = (ap.IsBound() ?
      op->CircuitCheck(temp0) :
      op->vtkPerspectiveTransform::CircuitCheck(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPerspectiveTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerspectiveTransform *op = static_cast<vtkPerspectiveTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPerspectiveTransform::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPerspectiveTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkPerspectiveTransform_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPerspectiveTransform_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPerspectiveTransform_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPerspectiveTransform\nC++: vtkPerspectiveTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPerspectiveTransform_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPerspectiveTransform\nC++: vtkPerspectiveTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Identity", PyvtkPerspectiveTransform_Identity, METH_VARARGS,
   (char*)"V.Identity()\nC++: void Identity()\n\nSet this transformation to the identity transformation.  If the\ntransform has an Input, then the transformation will be reset so\nthat it is the same as the Input.\n"},
  {(char*)"Inverse", PyvtkPerspectiveTransform_Inverse, METH_VARARGS,
   (char*)"V.Inverse()\nC++: void Inverse()\n\nInvert the transformation.  This will also set a flag so that the\ntransformation will use the inverse of its Input, if an Input has\nbeen set.\n"},
  {(char*)"AdjustViewport", PyvtkPerspectiveTransform_AdjustViewport, METH_VARARGS,
   (char*)"V.AdjustViewport(float, float, float, float, float, float, float,\n    float)\nC++: void AdjustViewport(double oldXMin, double oldXMax,\n    double oldYMin, double oldYMax, double newXMin,\n    double newXMax, double newYMin, double newYMax)\n\nPerform an adjustment to the viewport coordinates.  By default\nOrtho, Frustum, and Perspective provide a window of\n([-1,+1],[-1,+1]). In PreMultiply mode, you call this method\nbefore calling Ortho, Frustum, or Perspective.  In PostMultiply\nmode you can call it after.  Note that if you must apply both\nAdjustZBuffer and AdjustViewport, it makes no difference which\norder you apply them in.\n"},
  {(char*)"AdjustZBuffer", PyvtkPerspectiveTransform_AdjustZBuffer, METH_VARARGS,
   (char*)"V.AdjustZBuffer(float, float, float, float)\nC++: void AdjustZBuffer(double oldNearZ, double oldFarZ,\n    double newNearZ, double newFarZ)\n\nPerform an adjustment to the Z-Buffer range that the near and far\nclipping planes map to.  By default Ortho, Frustum, and\nPerspective map the near clipping plane to -1 and the far\nclipping plane to +1. In PreMultiply mode, you call this method\nbefore calling Ortho, Frustum, or Perspective.  In PostMultiply\nmode you can call it after.\n"},
  {(char*)"Ortho", PyvtkPerspectiveTransform_Ortho, METH_VARARGS,
   (char*)"V.Ortho(float, float, float, float, float, float)\nC++: void Ortho(double xmin, double xmax, double ymin,\n    double ymax, double znear, double zfar)\n\nCreate an orthogonal projection matrix and concatenate it by the\ncurrent transformation.  The matrix maps [xmin,xmax],\n[ymin,ymax], [-znear,-zfar] to [-1,+1], [-1,+1], [+1,-1].\n"},
  {(char*)"Frustum", PyvtkPerspectiveTransform_Frustum, METH_VARARGS,
   (char*)"V.Frustum(float, float, float, float, float, float)\nC++: void Frustum(double xmin, double xmax, double ymin,\n    double ymax, double znear, double zfar)\n\nCreate an perspective projection matrix and concatenate it by the\ncurrent transformation.  The matrix maps a frustum with a back\nplane at -zfar and a front plane at -znear with extent\n[xmin,xmax],[ymin,ymax] to [-1,+1], [-1,+1], [+1,-1].\n"},
  {(char*)"Perspective", PyvtkPerspectiveTransform_Perspective, METH_VARARGS,
   (char*)"V.Perspective(float, float, float, float)\nC++: void Perspective(double angle, double aspect, double znear,\n    double zfar)\n\nCreate a perspective projection matrix by specifying the view\nangle (this angle is in the y direction), the aspect ratio, and\nthe near and far clipping range.  The projection matrix is\nconcatenated with the current transformation.  This method works\nvia Frustum.\n"},
  {(char*)"Shear", PyvtkPerspectiveTransform_Shear, METH_VARARGS,
   (char*)"V.Shear(float, float, float)\nC++: void Shear(double dxdz, double dydz, double zplane)\n\nCreate a shear transformation about a plane at distance z from\nthe camera.  The values dxdz (i.e. dx/dz) and dydz specify the\namount of shear in the x and y directions.  The 'zplane'\nspecifies the distance from the camera to the plane at which the\nshear causes zero displacement.  Generally you want this plane to\nbe the focal plane. This transformation can be used in\ncombination with Ortho to create an oblique projection.  It can\nalso be used in combination with Perspective to provide correct\nstereo views when the eye is at arbitrary but known positions\nrelative to the center of a flat viewing screen.\n"},
  {(char*)"Stereo", PyvtkPerspectiveTransform_Stereo, METH_VARARGS,
   (char*)"V.Stereo(float, float)\nC++: void Stereo(double angle, double focaldistance)\n\nCreate a stereo shear matrix and concatenate it with the current\ntransformation.  This can be applied in conjunction with either a\nperspective transformation (via Frustum or Projection) or an\northographic projection.  You must specify the distance from the\ncamera plane to the focal plane, and the angle between the\ndistance vector and the eye.  The angle should be negative for\nthe left eye, and positive for the right.  This method works via\nOblique.\n"},
  {(char*)"SetupCamera", PyvtkPerspectiveTransform_SetupCamera, METH_VARARGS,
   (char*)"V.SetupCamera((float, float, float), (float, float, float), (\n    float, float, float))\nC++: void SetupCamera(const double position[3],\n    const double focalpoint[3], const double viewup[3])\nV.SetupCamera(float, float, float, float, float, float, float,\n    float, float)\nC++: void SetupCamera(double p0, double p1, double p2, double fp0,\n     double fp1, double fp2, double vup0, double vup1,\n    double vup2)\n\nSet a view transformation matrix for the camera (this matrix does\nnot contain any perspective) and concatenate it with the current\ntransformation.\n"},
  {(char*)"Translate", PyvtkPerspectiveTransform_Translate, METH_VARARGS,
   (char*)"V.Translate(float, float, float)\nC++: void Translate(double x, double y, double z)\nV.Translate((float, float, float))\nC++: void Translate(const double x[3])\n\nCreate a translation matrix and concatenate it with the current\ntransformation according to PreMultiply or PostMultiply\nsemantics.\n"},
  {(char*)"RotateWXYZ", PyvtkPerspectiveTransform_RotateWXYZ, METH_VARARGS,
   (char*)"V.RotateWXYZ(float, float, float, float)\nC++: void RotateWXYZ(double angle, double x, double y, double z)\nV.RotateWXYZ(float, (float, float, float))\nC++: void RotateWXYZ(double angle, const double axis[3])\n\nCreate a rotation matrix and concatenate it with the current\ntransformation according to PreMultiply or PostMultiply\nsemantics. The angle is in degrees, and (x,y,z) specifies the\naxis that the rotation will be performed around.\n"},
  {(char*)"RotateX", PyvtkPerspectiveTransform_RotateX, METH_VARARGS,
   (char*)"V.RotateX(float)\nC++: void RotateX(double angle)\n\nCreate a rotation matrix about the X, Y, or Z axis and\nconcatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.  The angle is expressed in\ndegrees.\n"},
  {(char*)"RotateY", PyvtkPerspectiveTransform_RotateY, METH_VARARGS,
   (char*)"V.RotateY(float)\nC++: void RotateY(double angle)\n\nCreate a rotation matrix about the X, Y, or Z axis and\nconcatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.  The angle is expressed in\ndegrees.\n"},
  {(char*)"RotateZ", PyvtkPerspectiveTransform_RotateZ, METH_VARARGS,
   (char*)"V.RotateZ(float)\nC++: void RotateZ(double angle)\n\nCreate a rotation matrix about the X, Y, or Z axis and\nconcatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.  The angle is expressed in\ndegrees.\n"},
  {(char*)"Scale", PyvtkPerspectiveTransform_Scale, METH_VARARGS,
   (char*)"V.Scale(float, float, float)\nC++: void Scale(double x, double y, double z)\nV.Scale((float, float, float))\nC++: void Scale(const double s[3])\n\nCreate a scale matrix (i.e. set the diagonal elements to x, y, z)\nand concatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.\n"},
  {(char*)"SetMatrix", PyvtkPerspectiveTransform_SetMatrix, METH_VARARGS,
   (char*)"V.SetMatrix(vtkMatrix4x4)\nC++: void SetMatrix(vtkMatrix4x4 *matrix)\nV.SetMatrix((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    )\nC++: void SetMatrix(const double elements[16])\n\nSet the current matrix directly.  This actually calls Identity(),\nfollowed by Concatenate(matrix).\n"},
  {(char*)"Concatenate", PyvtkPerspectiveTransform_Concatenate, METH_VARARGS,
   (char*)"V.Concatenate(vtkMatrix4x4)\nC++: void Concatenate(vtkMatrix4x4 *matrix)\nV.Concatenate((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    )\nC++: void Concatenate(const double elements[16])\nV.Concatenate(vtkHomogeneousTransform)\nC++: void Concatenate(vtkHomogeneousTransform *transform)\n\nConcatenates the matrix with the current transformation according\nto PreMultiply or PostMultiply semantics.\n"},
  {(char*)"PreMultiply", PyvtkPerspectiveTransform_PreMultiply, METH_VARARGS,
   (char*)"V.PreMultiply()\nC++: void PreMultiply()\n\nSets the internal state of the transform to PreMultiply. All\nsubsequent operations will occur before those already represented\nin the current transformation.  In homogeneous matrix notation, M\n= M*A where M is the current transformation matrix and A is the\napplied matrix. The default is PreMultiply.\n"},
  {(char*)"PostMultiply", PyvtkPerspectiveTransform_PostMultiply, METH_VARARGS,
   (char*)"V.PostMultiply()\nC++: void PostMultiply()\n\nSets the internal state of the transform to PostMultiply. All\nsubsequent operations will occur after those already represented\nin the current transformation.  In homogeneous matrix notation, M\n= A*M where M is the current transformation matrix and A is the\napplied matrix. The default is PreMultiply.\n"},
  {(char*)"GetNumberOfConcatenatedTransforms", PyvtkPerspectiveTransform_GetNumberOfConcatenatedTransforms, METH_VARARGS,
   (char*)"V.GetNumberOfConcatenatedTransforms() -> int\nC++: int GetNumberOfConcatenatedTransforms()\n\nGet the total number of transformations that are linked into this\none via Concatenate() operations or via SetInput().\n"},
  {(char*)"GetConcatenatedTransform", PyvtkPerspectiveTransform_GetConcatenatedTransform, METH_VARARGS,
   (char*)"V.GetConcatenatedTransform(int) -> vtkHomogeneousTransform\nC++: vtkHomogeneousTransform *GetConcatenatedTransform(int i)\n\n"},
  {(char*)"SetInput", PyvtkPerspectiveTransform_SetInput, METH_VARARGS,
   (char*)"V.SetInput(vtkHomogeneousTransform)\nC++: void SetInput(vtkHomogeneousTransform *input)\n\nSet the input for this transformation.  This will be used as the\nbase transformation if it is set.  This method allows you to\nbuild a transform pipeline: if the input is modified, then this\ntransformation will automatically update accordingly.  Note that\nthe InverseFlag, controlled via Inverse(), determines whether\nthis transformation will use the Input or the inverse of the\nInput.\n"},
  {(char*)"GetInput", PyvtkPerspectiveTransform_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkHomogeneousTransform\nC++: vtkHomogeneousTransform *GetInput()\n\nSet the input for this transformation.  This will be used as the\nbase transformation if it is set.  This method allows you to\nbuild a transform pipeline: if the input is modified, then this\ntransformation will automatically update accordingly.  Note that\nthe InverseFlag, controlled via Inverse(), determines whether\nthis transformation will use the Input or the inverse of the\nInput.\n"},
  {(char*)"GetInverseFlag", PyvtkPerspectiveTransform_GetInverseFlag, METH_VARARGS,
   (char*)"V.GetInverseFlag() -> int\nC++: int GetInverseFlag()\n\nGet the inverse flag of the transformation.  This controls\nwhether it is the Input or the inverse of the Input that is used\nas the base transformation.  The InverseFlag is flipped every\ntime Inverse() is called.  The InverseFlag is off when a\ntransform is first created.\n"},
  {(char*)"Push", PyvtkPerspectiveTransform_Push, METH_VARARGS,
   (char*)"V.Push()\nC++: void Push()\n\nPushes the current transformation onto the transformation stack.\n"},
  {(char*)"Pop", PyvtkPerspectiveTransform_Pop, METH_VARARGS,
   (char*)"V.Pop()\nC++: void Pop()\n\nDeletes the transformation on the top of the stack and sets the\ntop to the next transformation on the stack.\n"},
  {(char*)"MakeTransform", PyvtkPerspectiveTransform_MakeTransform, METH_VARARGS,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform()\n\nMake a new transform of the same type -- you are responsible for\ndeleting the transform when you are done with it.\n"},
  {(char*)"CircuitCheck", PyvtkPerspectiveTransform_CircuitCheck, METH_VARARGS,
   (char*)"V.CircuitCheck(vtkAbstractTransform) -> int\nC++: int CircuitCheck(vtkAbstractTransform *transform)\n\nCheck for self-reference.  Will return true if concatenating with\nthe specified transform, setting it to be our inverse, or setting\nit to be our input will create a circular reference. CircuitCheck\nis automatically called by SetInput(), SetInverse(), and\nConcatenate(vtkXTransform *).  Avoid using this function, it is\nexperimental.\n"},
  {(char*)"GetMTime", PyvtkPerspectiveTransform_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride GetMTime to account for input and concatenation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPerspectiveTransform_StaticNew()
{
  return vtkPerspectiveTransform::New();
}

PyObject *PyVTKClass_vtkPerspectiveTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPerspectiveTransform_StaticNew,
    PyvtkPerspectiveTransform_Methods,
    "vtkPerspectiveTransform", modulename,
    NULL, NULL,
    PyvtkPerspectiveTransform_Doc(),
    PyVTKClass_vtkHomogeneousTransformNew(modulename));
  return cls;
}

const char **PyvtkPerspectiveTransform_Doc()
{
  static const char *docstring[] = {
    "vtkPerspectiveTransform - describes a 4x4 matrix transformation\n\n",
    "Superclass: vtkHomogeneousTransform\n\n",
    "A vtkPerspectiveTransform can be used to describe the full range of\nhomogeneous transformations.  It was designed in particular to\ndescribe a camera-view of a scene. <P>The order in which you set up\nthe display coordinates (via AdjustZBuffer() and AdjustViewport()),\nthe projection (via Perspective(), Frustum(), or Ortho()) and the\ncamera view (via SetupCamera()) are important.  If the transform is",
    "\nin PreMultiply mode, which is the default, set the Viewport and\nZBuffer first, then the projection, and finally the camera view. \nOnce the view is set up, the Translate and Rotate methods can be used\nto move the camera around in world coordinates.  If the Oblique() or\nStereo() methods are used, they should be called just before\nSetupCamera(). <P>In PostMultiply mode, you must perform all\ntransfor",
    "mations in the opposite order.  This is necessary, for\nexample, if you already have a perspective transformation set up but\nmust adjust the viewport.  Another example is if you have a view\ntransformation, and wish to perform translations and rotations in the\ncamera's coordinate system rather than in world coordinates. <P>The\nSetInput and Concatenate methods can be used to create a\ntransformation p",
    "ipeline with vtkPerspectiveTransform.  See\nvtkTransform for more information on the transformation pipeline.\n\nSee Also:\n\nvtkGeneralTransform vtkTransform vtkMatrix4x4 vtkCamera\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPerspectiveTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPerspectiveTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPerspectiveTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

