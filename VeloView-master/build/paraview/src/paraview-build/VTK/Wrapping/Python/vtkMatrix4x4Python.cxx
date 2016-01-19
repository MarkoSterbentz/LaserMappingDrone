// python wrapper for vtkMatrix4x4
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMatrix4x4(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMatrix4x4New(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMatrix4x4_Doc();


static PyObject *
PyvtkMatrix4x4_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMatrix4x4::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrix4x4_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMatrix4x4::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrix4x4_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMatrix4x4::NewInstance());

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
PyvtkMatrix4x4_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMatrix4x4 *tempr = vtkMatrix4x4::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrix4x4_DeepCopy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkMatrix4x4::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix4x4_DeepCopy_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DeepCopy");

  double temp0[16];
  double save0[16];
  const int size0 = 16;
  vtkMatrix4x4 *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkMatrix4x4::DeepCopy(temp0, temp1);

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
PyvtkMatrix4x4_DeepCopy_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DeepCopy");

  double temp0[16];
  double save0[16];
  const int size0 = 16;
  double temp1[16];
  const int size1 = 16;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkMatrix4x4::DeepCopy(temp0, temp1);

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
PyvtkMatrix4x4_DeepCopy_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  double temp0[16];
  const int size0 = 16;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkMatrix4x4::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMatrix4x4_DeepCopy_Methods[] = {
  {NULL, PyvtkMatrix4x4_DeepCopy_s1, METH_VARARGS,
   (char*)"@O *vtkMatrix4x4"},
  {NULL, PyvtkMatrix4x4_DeepCopy_s2, METH_VARARGS | METH_STATIC,
   (char*)"OO *d *vtkMatrix4x4"},
  {NULL, PyvtkMatrix4x4_DeepCopy_s3, METH_VARARGS | METH_STATIC,
   (char*)"OO *d *d"},
  {NULL, PyvtkMatrix4x4_DeepCopy_s4, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMatrix4x4_DeepCopy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_DeepCopy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DeepCopy");
  return NULL;
}



static PyObject *
PyvtkMatrix4x4_Zero_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Zero");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Zero();
      }
    else
      {
      op->vtkMatrix4x4::Zero();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Zero_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Zero");

  double temp0[16];
  double save0[16];
  const int size0 = 16;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkMatrix4x4::Zero(temp0);

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
PyvtkMatrix4x4_Zero(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkMatrix4x4_Zero_s1(self, args);
    case 1:
      return PyvtkMatrix4x4_Zero_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Zero");
  return NULL;
}



static PyObject *
PyvtkMatrix4x4_Identity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Identity();
      }
    else
      {
      op->vtkMatrix4x4::Identity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Identity_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Identity");

  double temp0[16];
  double save0[16];
  const int size0 = 16;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkMatrix4x4::Identity(temp0);

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
PyvtkMatrix4x4_Identity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkMatrix4x4_Identity_s1(self, args);
    case 1:
      return PyvtkMatrix4x4_Identity_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Identity");
  return NULL;
}



static PyObject *
PyvtkMatrix4x4_Invert_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Invert");

  vtkMatrix4x4 *temp0 = NULL;
  vtkMatrix4x4 *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
    {
    vtkMatrix4x4::Invert(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Invert_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Invert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Invert();
      }
    else
      {
      op->vtkMatrix4x4::Invert();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Invert_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Invert");

  double temp0[16];
  const int size0 = 16;
  double temp1[16];
  double save1[16];
  const int size1 = 16;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkMatrix4x4::Invert(temp0, temp1);

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
PyvtkMatrix4x4_Invert_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Invert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  vtkMatrix4x4 *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, "vtkMatrix4x4") &&
      ap.GetSpecialObject(temp1, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->Invert(*temp0, *temp1);
      }
    else
      {
      op->vtkMatrix4x4::Invert(*temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMatrix4x4_Invert_Methods[] = {
  {NULL, PyvtkMatrix4x4_Invert_s1, METH_VARARGS | METH_STATIC,
   (char*)"OO *vtkMatrix4x4 *vtkMatrix4x4"},
  {NULL, PyvtkMatrix4x4_Invert_s3, METH_VARARGS | METH_STATIC,
   (char*)"OO *d *d"},
  {NULL, PyvtkMatrix4x4_Invert_s4, METH_VARARGS,
   (char*)"@OO &vtkMatrix4x4 &vtkMatrix4x4"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMatrix4x4_Invert(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_Invert_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
    case 1:
      return PyvtkMatrix4x4_Invert_s2(self, args);
    case 3:
      return PyvtkMatrix4x4_Invert_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Invert");
  return NULL;
}



static PyObject *
PyvtkMatrix4x4_Transpose_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Transpose");

  vtkMatrix4x4 *temp0 = NULL;
  vtkMatrix4x4 *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
    {
    vtkMatrix4x4::Transpose(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Transpose_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Transpose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Transpose();
      }
    else
      {
      op->vtkMatrix4x4::Transpose();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Transpose_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Transpose");

  double temp0[16];
  const int size0 = 16;
  double temp1[16];
  double save1[16];
  const int size1 = 16;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkMatrix4x4::Transpose(temp0, temp1);

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
PyvtkMatrix4x4_Transpose_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Transpose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  vtkMatrix4x4 *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, "vtkMatrix4x4") &&
      ap.GetSpecialObject(temp1, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->Transpose(*temp0, *temp1);
      }
    else
      {
      op->vtkMatrix4x4::Transpose(*temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMatrix4x4_Transpose_Methods[] = {
  {NULL, PyvtkMatrix4x4_Transpose_s1, METH_VARARGS | METH_STATIC,
   (char*)"OO *vtkMatrix4x4 *vtkMatrix4x4"},
  {NULL, PyvtkMatrix4x4_Transpose_s3, METH_VARARGS | METH_STATIC,
   (char*)"OO *d *d"},
  {NULL, PyvtkMatrix4x4_Transpose_s4, METH_VARARGS,
   (char*)"@OO &vtkMatrix4x4 &vtkMatrix4x4"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMatrix4x4_Transpose(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_Transpose_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
    case 1:
      return PyvtkMatrix4x4_Transpose_s2(self, args);
    case 3:
      return PyvtkMatrix4x4_Transpose_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Transpose");
  return NULL;
}



static PyObject *
PyvtkMatrix4x4_MultiplyPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  double temp0[4];
  const int size0 = 4;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->MultiplyPoint(temp0, temp1);
      }
    else
      {
      op->vtkMatrix4x4::MultiplyPoint(temp0, temp1);
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
PyvtkMatrix4x4_MultiplyPoint_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MultiplyPoint");

  double temp0[16];
  const int size0 = 16;
  double temp1[4];
  const int size1 = 4;
  double temp2[4];
  double save2[4];
  const int size2 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkMatrix4x4::MultiplyPoint(temp0, temp1, temp2);

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
PyvtkMatrix4x4_MultiplyPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  float temp0[4];
  const int size0 = 4;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    float *tempr = (ap.IsBound() ?
      op->MultiplyPoint(temp0) :
      op->vtkMatrix4x4::MultiplyPoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkMatrix4x4_MultiplyPoint_Methods[] = {
  {NULL, PyvtkMatrix4x4_MultiplyPoint_s1, METH_VARARGS,
   (char*)"@OO *d *d"},
  {NULL, PyvtkMatrix4x4_MultiplyPoint_s2, METH_VARARGS | METH_STATIC,
   (char*)"OOO *d *d *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMatrix4x4_MultiplyPoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_MultiplyPoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkMatrix4x4_MultiplyPoint_s3(self, args);
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "MultiplyPoint");
  return NULL;
}



static PyObject *
PyvtkMatrix4x4_MultiplyFloatPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyFloatPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  float temp0[4];
  const int size0 = 4;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    float *tempr = (ap.IsBound() ?
      op->MultiplyFloatPoint(temp0) :
      op->vtkMatrix4x4::MultiplyFloatPoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrix4x4_MultiplyDoublePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyDoublePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  double temp0[4];
  const int size0 = 4;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double *tempr = (ap.IsBound() ?
      op->MultiplyDoublePoint(temp0) :
      op->vtkMatrix4x4::MultiplyDoublePoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrix4x4_Multiply4x4_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Multiply4x4");

  vtkMatrix4x4 *temp0 = NULL;
  vtkMatrix4x4 *temp1 = NULL;
  vtkMatrix4x4 *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp2, "vtkMatrix4x4"))
    {
    vtkMatrix4x4::Multiply4x4(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Multiply4x4_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Multiply4x4");

  double temp0[16];
  const int size0 = 16;
  double temp1[16];
  const int size1 = 16;
  double temp2[16];
  double save2[16];
  const int size2 = 16;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkMatrix4x4::Multiply4x4(temp0, temp1, temp2);

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

static PyMethodDef PyvtkMatrix4x4_Multiply4x4_Methods[] = {
  {NULL, PyvtkMatrix4x4_Multiply4x4_s1, METH_VARARGS | METH_STATIC,
   (char*)"OOO *vtkMatrix4x4 *vtkMatrix4x4 *vtkMatrix4x4"},
  {NULL, PyvtkMatrix4x4_Multiply4x4_s2, METH_VARARGS | METH_STATIC,
   (char*)"OOO *d *d *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMatrix4x4_Multiply4x4(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_Multiply4x4_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Multiply4x4");
  return NULL;
}



static PyObject *
PyvtkMatrix4x4_Adjoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Adjoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  vtkMatrix4x4 *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->Adjoint(temp0, temp1);
      }
    else
      {
      op->vtkMatrix4x4::Adjoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Adjoint_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Adjoint");

  double temp0[16];
  const int size0 = 16;
  double temp1[16];
  double save1[16];
  const int size1 = 16;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkMatrix4x4::Adjoint(temp0, temp1);

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
PyvtkMatrix4x4_Adjoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Adjoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  vtkMatrix4x4 *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, "vtkMatrix4x4") &&
      ap.GetSpecialObject(temp1, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->Adjoint(*temp0, *temp1);
      }
    else
      {
      op->vtkMatrix4x4::Adjoint(*temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMatrix4x4_Adjoint_Methods[] = {
  {NULL, PyvtkMatrix4x4_Adjoint_s1, METH_VARARGS,
   (char*)"@OO *vtkMatrix4x4 *vtkMatrix4x4"},
  {NULL, PyvtkMatrix4x4_Adjoint_s2, METH_VARARGS | METH_STATIC,
   (char*)"OO *d *d"},
  {NULL, PyvtkMatrix4x4_Adjoint_s3, METH_VARARGS,
   (char*)"@OO &vtkMatrix4x4 &vtkMatrix4x4"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMatrix4x4_Adjoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_Adjoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Adjoint");
  return NULL;
}



static PyObject *
PyvtkMatrix4x4_Determinant_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Determinant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->Determinant() :
      op->vtkMatrix4x4::Determinant());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Determinant_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant");

  double temp0[16];
  const int size0 = 16;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double tempr = vtkMatrix4x4::Determinant(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Determinant_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Determinant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkMatrix4x4"))
    {
    double tempr = (ap.IsBound() ?
      op->Determinant(*temp0) :
      op->vtkMatrix4x4::Determinant(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Determinant_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Determinant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    double tempr = (ap.IsBound() ?
      op->Determinant(temp0) :
      op->vtkMatrix4x4::Determinant(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMatrix4x4_Determinant_Methods[] = {
  {NULL, PyvtkMatrix4x4_Determinant_s2, METH_VARARGS | METH_STATIC,
   (char*)"O *d"},
  {NULL, PyvtkMatrix4x4_Determinant_s3, METH_VARARGS,
   (char*)"@O &vtkMatrix4x4"},
  {NULL, PyvtkMatrix4x4_Determinant_s4, METH_VARARGS,
   (char*)"@O *vtkMatrix4x4"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMatrix4x4_Determinant(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_Determinant_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkMatrix4x4_Determinant_s1(self, args);
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Determinant");
  return NULL;
}



static PyObject *
PyvtkMatrix4x4_SetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  int temp0;
  int temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetElement(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMatrix4x4::SetElement(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMatrix4x4_GetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = (ap.IsBound() ?
      op->GetElement(temp0, temp1) :
      op->vtkMatrix4x4::GetElement(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrix4x4_PointMultiply(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PointMultiply");

  double temp0[16];
  const int size0 = 16;
  double temp1[4];
  const int size1 = 4;
  double temp2[4];
  double save2[4];
  const int size2 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkMatrix4x4::PointMultiply(temp0, temp1, temp2);

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

static PyMethodDef PyvtkMatrix4x4_Methods[] = {
  {(char*)"GetClassName", PyvtkMatrix4x4_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMatrix4x4_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMatrix4x4_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMatrix4x4_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DeepCopy", PyvtkMatrix4x4_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkMatrix4x4)\nC++: void DeepCopy(const vtkMatrix4x4 *source)\nV.DeepCopy([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float,\n    float], vtkMatrix4x4)\nC++: static void DeepCopy(double Elements[16],\n    const vtkMatrix4x4 *source)\nV.DeepCopy([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float,\n    float], (float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    )\nC++: static void DeepCopy(double Elements[16],\n    const double newElements[16])\nV.DeepCopy((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    )\nC++: void DeepCopy(const double Elements[16])\n\nSet the elements of the matrix to the same values as the elements\nof the source Matrix.\n"},
  {(char*)"Zero", PyvtkMatrix4x4_Zero, METH_VARARGS,
   (char*)"V.Zero()\nC++: void Zero()\nV.Zero([float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: static void Zero(double Elements[16])\n\nSet all of the elements to zero.\n"},
  {(char*)"Identity", PyvtkMatrix4x4_Identity, METH_VARARGS,
   (char*)"V.Identity()\nC++: void Identity()\nV.Identity([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float,\n    float])\nC++: static void Identity(double Elements[16])\n\nSet equal to Identity matrix\n"},
  {(char*)"Invert", PyvtkMatrix4x4_Invert, METH_VARARGS | METH_STATIC,
   (char*)"V.Invert(vtkMatrix4x4, vtkMatrix4x4)\nC++: static void Invert(const vtkMatrix4x4 *in, vtkMatrix4x4 *out)\nV.Invert()\nC++: void Invert()\nV.Invert((float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float),\n    [float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: static void Invert(const double inElements[16],\n    double outElements[16])\nV.Invert(vtkMatrix4x4, vtkMatrix4x4)\nC++: void Invert(vtkMatrix4x4 &in, vtkMatrix4x4 &out)\n\nMatrix Inversion (adapted from Richard Carling in \"Graphics\nGems,\" Academic Press, 1990).\n"},
  {(char*)"Transpose", PyvtkMatrix4x4_Transpose, METH_VARARGS | METH_STATIC,
   (char*)"V.Transpose(vtkMatrix4x4, vtkMatrix4x4)\nC++: static void Transpose(const vtkMatrix4x4 *in,\n    vtkMatrix4x4 *out)\nV.Transpose()\nC++: void Transpose()\nV.Transpose((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    , [float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: static void Transpose(const double inElements[16],\n    double outElements[16])\nV.Transpose(vtkMatrix4x4, vtkMatrix4x4)\nC++: void Transpose(vtkMatrix4x4 &in, vtkMatrix4x4 &out)\n\nTranspose the matrix and put it into out.\n"},
  {(char*)"MultiplyPoint", PyvtkMatrix4x4_MultiplyPoint, METH_VARARGS,
   (char*)"V.MultiplyPoint((float, float, float, float), [float, float,\n    float, float])\nC++: void MultiplyPoint(const double in[4], double out[4])\nV.MultiplyPoint((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    , (float, float, float, float), [float, float, float, float])\nC++: static void MultiplyPoint(const double Elements[16],\n    const double in[4], double out[4])\nV.MultiplyPoint((float, float, float, float)) -> (float, float,\n    float, float)\nC++: float *MultiplyPoint(const float in[4])\n\nMultiply a homogeneous coordinate by this matrix, i.e. out =\nA*in. The in[4] and out[4] can be the same array.\n"},
  {(char*)"MultiplyFloatPoint", PyvtkMatrix4x4_MultiplyFloatPoint, METH_VARARGS,
   (char*)"V.MultiplyFloatPoint((float, float, float, float)) -> (float,\n    float, float, float)\nC++: float *MultiplyFloatPoint(const float in[4])\n\nFor use in Java, Python or Tcl.  The default MultiplyPoint() uses\na single-precision point.\n"},
  {(char*)"MultiplyDoublePoint", PyvtkMatrix4x4_MultiplyDoublePoint, METH_VARARGS,
   (char*)"V.MultiplyDoublePoint((float, float, float, float)) -> (float,\n    float, float, float)\nC++: double *MultiplyDoublePoint(const double in[4])\n\nFor use in Java, Python or Tcl.  The default MultiplyPoint() uses\na single-precision point.\n"},
  {(char*)"Multiply4x4", PyvtkMatrix4x4_Multiply4x4, METH_VARARGS | METH_STATIC,
   (char*)"V.Multiply4x4(vtkMatrix4x4, vtkMatrix4x4, vtkMatrix4x4)\nC++: static void Multiply4x4(const vtkMatrix4x4 *a,\n    const vtkMatrix4x4 *b, vtkMatrix4x4 *c)\nV.Multiply4x4((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    , (float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float),\n    [float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: static void Multiply4x4(const double a[16],\n    const double b[16], double c[16])\n\nMultiplies matrices a and b and stores the result in c.\n"},
  {(char*)"Adjoint", PyvtkMatrix4x4_Adjoint, METH_VARARGS,
   (char*)"V.Adjoint(vtkMatrix4x4, vtkMatrix4x4)\nC++: void Adjoint(const vtkMatrix4x4 *in, vtkMatrix4x4 *out)\nV.Adjoint((float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float),\n    [float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: static void Adjoint(const double inElements[16],\n    double outElements[16])\nV.Adjoint(vtkMatrix4x4, vtkMatrix4x4)\nC++: void Adjoint(vtkMatrix4x4 &in, vtkMatrix4x4 &out)\n\nCompute adjoint of the matrix and put it into out.\n"},
  {(char*)"Determinant", PyvtkMatrix4x4_Determinant, METH_VARARGS,
   (char*)"V.Determinant() -> float\nC++: double Determinant()\nV.Determinant((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    ) -> float\nC++: static double Determinant(const double Elements[16])\nV.Determinant(vtkMatrix4x4) -> float\nC++: double Determinant(vtkMatrix4x4 &in)\nV.Determinant(vtkMatrix4x4) -> float\nC++: double Determinant(vtkMatrix4x4 *in)\n\nCompute the determinant of the matrix and return it.\n"},
  {(char*)"SetElement", PyvtkMatrix4x4_SetElement, METH_VARARGS,
   (char*)"V.SetElement(int, int, float)\nC++: void SetElement(int i, int j, double value)\n\nSets the element i,j in the matrix.\n"},
  {(char*)"GetElement", PyvtkMatrix4x4_GetElement, METH_VARARGS,
   (char*)"V.GetElement(int, int) -> float\nC++: double GetElement(int i, int j)\n\nReturns the element i,j from the matrix.\n"},
  {(char*)"PointMultiply", PyvtkMatrix4x4_PointMultiply, METH_VARARGS | METH_STATIC,
   (char*)"V.PointMultiply((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    , (float, float, float, float), [float, float, float, float])\nC++: static void PointMultiply(const double Elements[16],\n    const double in[4], double out[4])\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMatrix4x4_StaticNew()
{
  return vtkMatrix4x4::New();
}

PyObject *PyVTKClass_vtkMatrix4x4New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMatrix4x4_StaticNew,
    PyvtkMatrix4x4_Methods,
    "vtkMatrix4x4", modulename,
    NULL, NULL,
    PyvtkMatrix4x4_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMatrix4x4_Doc()
{
  static const char *docstring[] = {
    "vtkMatrix4x4 - represent and manipulate 4x4 transformation matrices\n\n",
    "Superclass: vtkObject\n\n",
    "vtkMatrix4x4 is a class to represent and manipulate 4x4 matrices.\nSpecifically, it is designed to work on 4x4 transformation matrices\nfound in 3D rendering using homogeneous coordinates [x y z w].\n\nSee Also:\n\nvtkTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMatrix4x4(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMatrix4x4New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMatrix4x4", o) != 0)
    {
    Py_DECREF(o);
    }

}

