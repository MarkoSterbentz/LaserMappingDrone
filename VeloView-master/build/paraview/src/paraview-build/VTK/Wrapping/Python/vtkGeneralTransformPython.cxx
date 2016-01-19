// python wrapper for vtkGeneralTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGeneralTransform.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGeneralTransform(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGeneralTransformNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractTransformNew
extern "C" { PyObject *PyVTKClass_vtkAbstractTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractTransformNew
#endif

static const char **PyvtkGeneralTransform_Doc();


static PyObject *
PyvtkGeneralTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGeneralTransform::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGeneralTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGeneralTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGeneralTransform::NewInstance());

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
PyvtkGeneralTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGeneralTransform *tempr = vtkGeneralTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_Identity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Identity();
      }
    else
      {
      op->vtkGeneralTransform::Identity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Inverse();
      }
    else
      {
      op->vtkGeneralTransform::Inverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_Translate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

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
      op->vtkGeneralTransform::Translate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeneralTransform_Translate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

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
      op->vtkGeneralTransform::Translate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeneralTransform_Translate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkGeneralTransform_Translate_s1(self, args);
    case 1:
      return PyvtkGeneralTransform_Translate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Translate");
  return NULL;
}



static PyObject *
PyvtkGeneralTransform_RotateWXYZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

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
      op->vtkGeneralTransform::RotateWXYZ(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeneralTransform_RotateWXYZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

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
      op->vtkGeneralTransform::RotateWXYZ(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeneralTransform_RotateWXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkGeneralTransform_RotateWXYZ_s1(self, args);
    case 2:
      return PyvtkGeneralTransform_RotateWXYZ_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RotateWXYZ");
  return NULL;
}



static PyObject *
PyvtkGeneralTransform_RotateX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

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
      op->vtkGeneralTransform::RotateX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_RotateY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

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
      op->vtkGeneralTransform::RotateY(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_RotateZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

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
      op->vtkGeneralTransform::RotateZ(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_Scale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

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
      op->vtkGeneralTransform::Scale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeneralTransform_Scale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

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
      op->vtkGeneralTransform::Scale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeneralTransform_Scale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkGeneralTransform_Scale_s1(self, args);
    case 1:
      return PyvtkGeneralTransform_Scale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Scale");
  return NULL;
}



static PyObject *
PyvtkGeneralTransform_Concatenate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

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
      op->vtkGeneralTransform::Concatenate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeneralTransform_Concatenate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

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
      op->vtkGeneralTransform::Concatenate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeneralTransform_Concatenate_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    if (ap.IsBound())
      {
      op->Concatenate(temp0);
      }
    else
      {
      op->vtkGeneralTransform::Concatenate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGeneralTransform_Concatenate_Methods[] = {
  {NULL, PyvtkGeneralTransform_Concatenate_s1, METH_VARARGS,
   (char*)"@O *vtkMatrix4x4"},
  {NULL, PyvtkGeneralTransform_Concatenate_s2, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, PyvtkGeneralTransform_Concatenate_s3, METH_VARARGS,
   (char*)"@O *vtkAbstractTransform"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGeneralTransform_Concatenate(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGeneralTransform_Concatenate_Methods;
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
PyvtkGeneralTransform_PreMultiply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreMultiply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreMultiply();
      }
    else
      {
      op->vtkGeneralTransform::PreMultiply();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_PostMultiply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostMultiply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PostMultiply();
      }
    else
      {
      op->vtkGeneralTransform::PostMultiply();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_GetNumberOfConcatenatedTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConcatenatedTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfConcatenatedTransforms() :
      op->vtkGeneralTransform::GetNumberOfConcatenatedTransforms());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_GetConcatenatedTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConcatenatedTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetConcatenatedTransform(temp0) :
      op->vtkGeneralTransform::GetConcatenatedTransform(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkGeneralTransform::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkGeneralTransform::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_GetInverseFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInverseFlag() :
      op->vtkGeneralTransform::GetInverseFlag());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Push();
      }
    else
      {
      op->vtkGeneralTransform::Push();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_Pop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Pop();
      }
    else
      {
      op->vtkGeneralTransform::Pop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

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
      op->vtkGeneralTransform::InternalTransformPoint(temp0, temp1);
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
PyvtkGeneralTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

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
      op->vtkGeneralTransform::InternalTransformDerivative(temp0, temp1, temp2);
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


static PyObject *
PyvtkGeneralTransform_CircuitCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CircuitCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    int tempr = (ap.IsBound() ?
      op->CircuitCheck(temp0) :
      op->vtkGeneralTransform::CircuitCheck(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeneralTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkGeneralTransform::MakeTransform());

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
PyvtkGeneralTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGeneralTransform::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeneralTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkGeneralTransform_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeneralTransform_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeneralTransform_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGeneralTransform\nC++: vtkGeneralTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeneralTransform_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeneralTransform\nC++: vtkGeneralTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Identity", PyvtkGeneralTransform_Identity, METH_VARARGS,
   (char*)"V.Identity()\nC++: void Identity()\n\nSet this transformation to the identity transformation.  If the\ntransform has an Input, then the transformation will be reset so\nthat it is the same as the Input.\n"},
  {(char*)"Inverse", PyvtkGeneralTransform_Inverse, METH_VARARGS,
   (char*)"V.Inverse()\nC++: void Inverse()\n\nInvert the transformation.  This will also set a flag so that the\ntransformation will use the inverse of its Input, if an Input has\nbeen set.\n"},
  {(char*)"Translate", PyvtkGeneralTransform_Translate, METH_VARARGS,
   (char*)"V.Translate(float, float, float)\nC++: void Translate(double x, double y, double z)\nV.Translate((float, float, float))\nC++: void Translate(const double x[3])\n\nCreate a translation matrix and concatenate it with the current\ntransformation according to PreMultiply or PostMultiply\nsemantics.\n"},
  {(char*)"RotateWXYZ", PyvtkGeneralTransform_RotateWXYZ, METH_VARARGS,
   (char*)"V.RotateWXYZ(float, float, float, float)\nC++: void RotateWXYZ(double angle, double x, double y, double z)\nV.RotateWXYZ(float, (float, float, float))\nC++: void RotateWXYZ(double angle, const double axis[3])\n\nCreate a rotation matrix and concatenate it with the current\ntransformation according to PreMultiply or PostMultiply\nsemantics. The angle is in degrees, and (x,y,z) specifies the\naxis that the rotation will be performed around.\n"},
  {(char*)"RotateX", PyvtkGeneralTransform_RotateX, METH_VARARGS,
   (char*)"V.RotateX(float)\nC++: void RotateX(double angle)\n\nCreate a rotation matrix about the X, Y, or Z axis and\nconcatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.  The angle is expressed in\ndegrees.\n"},
  {(char*)"RotateY", PyvtkGeneralTransform_RotateY, METH_VARARGS,
   (char*)"V.RotateY(float)\nC++: void RotateY(double angle)\n\nCreate a rotation matrix about the X, Y, or Z axis and\nconcatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.  The angle is expressed in\ndegrees.\n"},
  {(char*)"RotateZ", PyvtkGeneralTransform_RotateZ, METH_VARARGS,
   (char*)"V.RotateZ(float)\nC++: void RotateZ(double angle)\n\nCreate a rotation matrix about the X, Y, or Z axis and\nconcatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.  The angle is expressed in\ndegrees.\n"},
  {(char*)"Scale", PyvtkGeneralTransform_Scale, METH_VARARGS,
   (char*)"V.Scale(float, float, float)\nC++: void Scale(double x, double y, double z)\nV.Scale((float, float, float))\nC++: void Scale(const double s[3])\n\nCreate a scale matrix (i.e. set the diagonal elements to x, y, z)\nand concatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.\n"},
  {(char*)"Concatenate", PyvtkGeneralTransform_Concatenate, METH_VARARGS,
   (char*)"V.Concatenate(vtkMatrix4x4)\nC++: void Concatenate(vtkMatrix4x4 *matrix)\nV.Concatenate((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    )\nC++: void Concatenate(const double elements[16])\nV.Concatenate(vtkAbstractTransform)\nC++: void Concatenate(vtkAbstractTransform *transform)\n\nConcatenates the matrix with the current transformation according\nto PreMultiply or PostMultiply semantics.\n"},
  {(char*)"PreMultiply", PyvtkGeneralTransform_PreMultiply, METH_VARARGS,
   (char*)"V.PreMultiply()\nC++: void PreMultiply()\n\nSets the internal state of the transform to PreMultiply. All\nsubsequent operations will occur before those already represented\nin the current transformation.  In homogeneous matrix notation, M\n= M*A where M is the current transformation matrix and A is the\napplied matrix. The default is PreMultiply.\n"},
  {(char*)"PostMultiply", PyvtkGeneralTransform_PostMultiply, METH_VARARGS,
   (char*)"V.PostMultiply()\nC++: void PostMultiply()\n\nSets the internal state of the transform to PostMultiply. All\nsubsequent operations will occur after those already represented\nin the current transformation.  In homogeneous matrix notation, M\n= A*M where M is the current transformation matrix and A is the\napplied matrix. The default is PreMultiply.\n"},
  {(char*)"GetNumberOfConcatenatedTransforms", PyvtkGeneralTransform_GetNumberOfConcatenatedTransforms, METH_VARARGS,
   (char*)"V.GetNumberOfConcatenatedTransforms() -> int\nC++: int GetNumberOfConcatenatedTransforms()\n\nGet the total number of transformations that are linked into this\none via Concatenate() operations or via SetInput().\n"},
  {(char*)"GetConcatenatedTransform", PyvtkGeneralTransform_GetConcatenatedTransform, METH_VARARGS,
   (char*)"V.GetConcatenatedTransform(int) -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetConcatenatedTransform(int i)\n\n"},
  {(char*)"SetInput", PyvtkGeneralTransform_SetInput, METH_VARARGS,
   (char*)"V.SetInput(vtkAbstractTransform)\nC++: void SetInput(vtkAbstractTransform *input)\n\nSet the input for this transformation.  This will be used as the\nbase transformation if it is set.  This method allows you to\nbuild a transform pipeline: if the input is modified, then this\ntransformation will automatically update accordingly.  Note that\nthe InverseFlag, controlled via Inverse(), determines whether\nthis transformation will use the Input or the inverse of the\nInput.\n"},
  {(char*)"GetInput", PyvtkGeneralTransform_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetInput()\n\nSet the input for this transformation.  This will be used as the\nbase transformation if it is set.  This method allows you to\nbuild a transform pipeline: if the input is modified, then this\ntransformation will automatically update accordingly.  Note that\nthe InverseFlag, controlled via Inverse(), determines whether\nthis transformation will use the Input or the inverse of the\nInput.\n"},
  {(char*)"GetInverseFlag", PyvtkGeneralTransform_GetInverseFlag, METH_VARARGS,
   (char*)"V.GetInverseFlag() -> int\nC++: int GetInverseFlag()\n\nGet the inverse flag of the transformation.  This controls\nwhether it is the Input or the inverse of the Input that is used\nas the base transformation.  The InverseFlag is flipped every\ntime Inverse() is called.  The InverseFlag is off when a\ntransform is first created.\n"},
  {(char*)"Push", PyvtkGeneralTransform_Push, METH_VARARGS,
   (char*)"V.Push()\nC++: void Push()\n\nPushes the current transformation onto the transformation stack.\n"},
  {(char*)"Pop", PyvtkGeneralTransform_Pop, METH_VARARGS,
   (char*)"V.Pop()\nC++: void Pop()\n\nDeletes the transformation on the top of the stack and sets the\ntop to the next transformation on the stack.\n"},
  {(char*)"InternalTransformPoint", PyvtkGeneralTransform_InternalTransformPoint, METH_VARARGS,
   (char*)"V.InternalTransformPoint((float, float, float), [float, float,\n    float])\nC++: void InternalTransformPoint(const double in[3],\n    double out[3])\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {(char*)"InternalTransformDerivative", PyvtkGeneralTransform_InternalTransformDerivative, METH_VARARGS,
   (char*)"V.InternalTransformDerivative((float, float, float), [float,\n    float, float], [[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3])\n\nThis will calculate the transformation as well as its derivative\nwithout calling Update.  Meant for use only within other VTK\nclasses.\n"},
  {(char*)"CircuitCheck", PyvtkGeneralTransform_CircuitCheck, METH_VARARGS,
   (char*)"V.CircuitCheck(vtkAbstractTransform) -> int\nC++: int CircuitCheck(vtkAbstractTransform *transform)\n\nCheck for self-reference.  Will return true if concatenating with\nthe specified transform, setting it to be our inverse, or setting\nit to be our input will create a circular reference. CircuitCheck\nis automatically called by SetInput(), SetInverse(), and\nConcatenate(vtkXTransform *).  Avoid using this function, it is\nexperimental.\n"},
  {(char*)"MakeTransform", PyvtkGeneralTransform_MakeTransform, METH_VARARGS,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform()\n\nMake another transform of the same type.\n"},
  {(char*)"GetMTime", PyvtkGeneralTransform_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride GetMTime to account for input and concatenation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeneralTransform_StaticNew()
{
  return vtkGeneralTransform::New();
}

PyObject *PyVTKClass_vtkGeneralTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeneralTransform_StaticNew,
    PyvtkGeneralTransform_Methods,
    "vtkGeneralTransform", modulename,
    NULL, NULL,
    PyvtkGeneralTransform_Doc(),
    PyVTKClass_vtkAbstractTransformNew(modulename));
  return cls;
}

const char **PyvtkGeneralTransform_Doc()
{
  static const char *docstring[] = {
    "vtkGeneralTransform - allows operations on any transforms\n\n",
    "Superclass: vtkAbstractTransform\n\n",
    "vtkGeneralTransform is like vtkTransform and vtkPerspectiveTransform,\nbut it will work with any vtkAbstractTransform as input.  It is not\nas efficient as the other two, however, because arbitrary\ntransformations cannot be concatenated by matrix multiplication.\nTransform concatenation is simulated by passing each input point\nthrough each transform in turn.\n\nSee Also:\n\nvtkTransform vtkPerspectiveTra",
    "nsform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeneralTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeneralTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeneralTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

