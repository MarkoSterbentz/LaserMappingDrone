// python wrapper for vtkMatrix3x3
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMatrix3x3.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMatrix3x3(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMatrix3x3New(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMatrix3x3_Doc();


static PyObject *
PyvtkMatrix3x3_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMatrix3x3::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrix3x3_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMatrix3x3::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrix3x3_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix3x3 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMatrix3x3::NewInstance());

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
PyvtkMatrix3x3_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMatrix3x3 *tempr = vtkMatrix3x3::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrix3x3_DeepCopy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  vtkMatrix3x3 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkMatrix3x3::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix3x3_DeepCopy_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DeepCopy");

  double temp0[9];
  double save0[9];
  const int size0 = 9;
  vtkMatrix3x3 *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkMatrix3x3::DeepCopy(temp0, temp1);

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
PyvtkMatrix3x3_DeepCopy_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DeepCopy");

  double temp0[9];
  double save0[9];
  const int size0 = 9;
  double temp1[9];
  const int size1 = 9;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkMatrix3x3::DeepCopy(temp0, temp1);

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
PyvtkMatrix3x3_DeepCopy_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  double temp0[9];
  const int size0 = 9;
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
      op->vtkMatrix3x3::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMatrix3x3_DeepCopy_Methods[] = {
  {NULL, PyvtkMatrix3x3_DeepCopy_s1, METH_VARARGS,
   (char*)"@O *vtkMatrix3x3"},
  {NULL, PyvtkMatrix3x3_DeepCopy_s2, METH_VARARGS | METH_STATIC,
   (char*)"OO *d *vtkMatrix3x3"},
  {NULL, PyvtkMatrix3x3_DeepCopy_s3, METH_VARARGS | METH_STATIC,
   (char*)"OO *d *d"},
  {NULL, PyvtkMatrix3x3_DeepCopy_s4, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMatrix3x3_DeepCopy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix3x3_DeepCopy_Methods;
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
PyvtkMatrix3x3_Zero_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Zero");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Zero();
      }
    else
      {
      op->vtkMatrix3x3::Zero();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Zero_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Zero");

  double temp0[9];
  double save0[9];
  const int size0 = 9;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkMatrix3x3::Zero(temp0);

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
PyvtkMatrix3x3_Zero(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkMatrix3x3_Zero_s1(self, args);
    case 1:
      return PyvtkMatrix3x3_Zero_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Zero");
  return NULL;
}



static PyObject *
PyvtkMatrix3x3_Identity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Identity();
      }
    else
      {
      op->vtkMatrix3x3::Identity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Identity_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Identity");

  double temp0[9];
  double save0[9];
  const int size0 = 9;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkMatrix3x3::Identity(temp0);

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
PyvtkMatrix3x3_Identity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkMatrix3x3_Identity_s1(self, args);
    case 1:
      return PyvtkMatrix3x3_Identity_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Identity");
  return NULL;
}



static PyObject *
PyvtkMatrix3x3_Invert_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Invert");

  vtkMatrix3x3 *temp0 = NULL;
  vtkMatrix3x3 *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
    {
    vtkMatrix3x3::Invert(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Invert_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Invert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Invert();
      }
    else
      {
      op->vtkMatrix3x3::Invert();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Invert_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Invert");

  double temp0[9];
  const int size0 = 9;
  double temp1[9];
  double save1[9];
  const int size1 = 9;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkMatrix3x3::Invert(temp0, temp1);

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
PyvtkMatrix3x3_Invert_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Invert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  vtkMatrix3x3 *temp0 = NULL;
  vtkMatrix3x3 *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, "vtkMatrix3x3") &&
      ap.GetSpecialObject(temp1, "vtkMatrix3x3"))
    {
    if (ap.IsBound())
      {
      op->Invert(*temp0, *temp1);
      }
    else
      {
      op->vtkMatrix3x3::Invert(*temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMatrix3x3_Invert_Methods[] = {
  {NULL, PyvtkMatrix3x3_Invert_s1, METH_VARARGS | METH_STATIC,
   (char*)"OO *vtkMatrix3x3 *vtkMatrix3x3"},
  {NULL, PyvtkMatrix3x3_Invert_s3, METH_VARARGS | METH_STATIC,
   (char*)"OO *d *d"},
  {NULL, PyvtkMatrix3x3_Invert_s4, METH_VARARGS,
   (char*)"@OO &vtkMatrix3x3 &vtkMatrix3x3"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMatrix3x3_Invert(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix3x3_Invert_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
    case 1:
      return PyvtkMatrix3x3_Invert_s2(self, args);
    case 3:
      return PyvtkMatrix3x3_Invert_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Invert");
  return NULL;
}



static PyObject *
PyvtkMatrix3x3_Transpose_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Transpose");

  vtkMatrix3x3 *temp0 = NULL;
  vtkMatrix3x3 *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
    {
    vtkMatrix3x3::Transpose(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Transpose_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Transpose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Transpose();
      }
    else
      {
      op->vtkMatrix3x3::Transpose();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Transpose_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Transpose");

  double temp0[9];
  const int size0 = 9;
  double temp1[9];
  double save1[9];
  const int size1 = 9;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkMatrix3x3::Transpose(temp0, temp1);

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
PyvtkMatrix3x3_Transpose_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Transpose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  vtkMatrix3x3 *temp0 = NULL;
  vtkMatrix3x3 *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, "vtkMatrix3x3") &&
      ap.GetSpecialObject(temp1, "vtkMatrix3x3"))
    {
    if (ap.IsBound())
      {
      op->Transpose(*temp0, *temp1);
      }
    else
      {
      op->vtkMatrix3x3::Transpose(*temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMatrix3x3_Transpose_Methods[] = {
  {NULL, PyvtkMatrix3x3_Transpose_s1, METH_VARARGS | METH_STATIC,
   (char*)"OO *vtkMatrix3x3 *vtkMatrix3x3"},
  {NULL, PyvtkMatrix3x3_Transpose_s3, METH_VARARGS | METH_STATIC,
   (char*)"OO *d *d"},
  {NULL, PyvtkMatrix3x3_Transpose_s4, METH_VARARGS,
   (char*)"@OO &vtkMatrix3x3 &vtkMatrix3x3"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMatrix3x3_Transpose(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix3x3_Transpose_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
    case 1:
      return PyvtkMatrix3x3_Transpose_s2(self, args);
    case 3:
      return PyvtkMatrix3x3_Transpose_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Transpose");
  return NULL;
}



static PyObject *
PyvtkMatrix3x3_MultiplyPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

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
      op->MultiplyPoint(temp0, temp1);
      }
    else
      {
      op->vtkMatrix3x3::MultiplyPoint(temp0, temp1);
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
PyvtkMatrix3x3_MultiplyPoint_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MultiplyPoint");

  double temp0[9];
  const int size0 = 9;
  double temp1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkMatrix3x3::MultiplyPoint(temp0, temp1, temp2);

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
PyvtkMatrix3x3_MultiplyPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkMatrix3x3_MultiplyPoint_s1(self, args);
    case 3:
      return PyvtkMatrix3x3_MultiplyPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "MultiplyPoint");
  return NULL;
}



static PyObject *
PyvtkMatrix3x3_Multiply3x3_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Multiply3x3");

  vtkMatrix3x3 *temp0 = NULL;
  vtkMatrix3x3 *temp1 = NULL;
  vtkMatrix3x3 *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp2, "vtkMatrix3x3"))
    {
    vtkMatrix3x3::Multiply3x3(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Multiply3x3_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Multiply3x3");

  double temp0[9];
  const int size0 = 9;
  double temp1[9];
  const int size1 = 9;
  double temp2[9];
  double save2[9];
  const int size2 = 9;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkMatrix3x3::Multiply3x3(temp0, temp1, temp2);

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

static PyMethodDef PyvtkMatrix3x3_Multiply3x3_Methods[] = {
  {NULL, PyvtkMatrix3x3_Multiply3x3_s1, METH_VARARGS | METH_STATIC,
   (char*)"OOO *vtkMatrix3x3 *vtkMatrix3x3 *vtkMatrix3x3"},
  {NULL, PyvtkMatrix3x3_Multiply3x3_s2, METH_VARARGS | METH_STATIC,
   (char*)"OOO *d *d *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMatrix3x3_Multiply3x3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix3x3_Multiply3x3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Multiply3x3");
  return NULL;
}



static PyObject *
PyvtkMatrix3x3_Adjoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Adjoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  vtkMatrix3x3 *temp0 = NULL;
  vtkMatrix3x3 *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
    {
    if (ap.IsBound())
      {
      op->Adjoint(temp0, temp1);
      }
    else
      {
      op->vtkMatrix3x3::Adjoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Adjoint_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Adjoint");

  double temp0[9];
  const int size0 = 9;
  double temp1[9];
  double save1[9];
  const int size1 = 9;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkMatrix3x3::Adjoint(temp0, temp1);

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
PyvtkMatrix3x3_Adjoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Adjoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  vtkMatrix3x3 *temp0 = NULL;
  vtkMatrix3x3 *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, "vtkMatrix3x3") &&
      ap.GetSpecialObject(temp1, "vtkMatrix3x3"))
    {
    if (ap.IsBound())
      {
      op->Adjoint(*temp0, *temp1);
      }
    else
      {
      op->vtkMatrix3x3::Adjoint(*temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMatrix3x3_Adjoint_Methods[] = {
  {NULL, PyvtkMatrix3x3_Adjoint_s1, METH_VARARGS,
   (char*)"@OO *vtkMatrix3x3 *vtkMatrix3x3"},
  {NULL, PyvtkMatrix3x3_Adjoint_s2, METH_VARARGS | METH_STATIC,
   (char*)"OO *d *d"},
  {NULL, PyvtkMatrix3x3_Adjoint_s3, METH_VARARGS,
   (char*)"@OO &vtkMatrix3x3 &vtkMatrix3x3"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMatrix3x3_Adjoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix3x3_Adjoint_Methods;
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
PyvtkMatrix3x3_Determinant_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Determinant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->Determinant() :
      op->vtkMatrix3x3::Determinant());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Determinant_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant");

  double temp0[9];
  const int size0 = 9;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double tempr = vtkMatrix3x3::Determinant(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Determinant_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Determinant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  vtkMatrix3x3 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkMatrix3x3"))
    {
    double tempr = (ap.IsBound() ?
      op->Determinant(*temp0) :
      op->vtkMatrix3x3::Determinant(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Determinant_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Determinant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  vtkMatrix3x3 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
    {
    double tempr = (ap.IsBound() ?
      op->Determinant(temp0) :
      op->vtkMatrix3x3::Determinant(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMatrix3x3_Determinant_Methods[] = {
  {NULL, PyvtkMatrix3x3_Determinant_s2, METH_VARARGS | METH_STATIC,
   (char*)"O *d"},
  {NULL, PyvtkMatrix3x3_Determinant_s3, METH_VARARGS,
   (char*)"@O &vtkMatrix3x3"},
  {NULL, PyvtkMatrix3x3_Determinant_s4, METH_VARARGS,
   (char*)"@O *vtkMatrix3x3"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMatrix3x3_Determinant(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix3x3_Determinant_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkMatrix3x3_Determinant_s1(self, args);
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Determinant");
  return NULL;
}



static PyObject *
PyvtkMatrix3x3_SetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

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
      op->vtkMatrix3x3::SetElement(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMatrix3x3_GetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = (ap.IsBound() ?
      op->GetElement(temp0, temp1) :
      op->vtkMatrix3x3::GetElement(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrix3x3_PointMultiply(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PointMultiply");

  double temp0[9];
  const int size0 = 9;
  double temp1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkMatrix3x3::PointMultiply(temp0, temp1, temp2);

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
PyvtkMatrix3x3_IsIdentity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsIdentity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsIdentity() :
      op->vtkMatrix3x3::IsIdentity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrix3x3_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetData() :
      op->vtkMatrix3x3::GetData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMatrix3x3_Methods[] = {
  {(char*)"GetClassName", PyvtkMatrix3x3_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMatrix3x3_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMatrix3x3_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMatrix3x3\nC++: vtkMatrix3x3 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMatrix3x3_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMatrix3x3\nC++: vtkMatrix3x3 *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DeepCopy", PyvtkMatrix3x3_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkMatrix3x3)\nC++: void DeepCopy(vtkMatrix3x3 *source)\nV.DeepCopy([float, float, float, float, float, float, float,\n    float, float], vtkMatrix3x3)\nC++: static void DeepCopy(double Elements[9],\n    vtkMatrix3x3 *source)\nV.DeepCopy([float, float, float, float, float, float, float,\n    float, float], (float, float, float, float, float, float,\n    float, float, float))\nC++: static void DeepCopy(double Elements[9],\n    const double newElements[9])\nV.DeepCopy((float, float, float, float, float, float, float,\n    float, float))\nC++: void DeepCopy(const double Elements[9])\n\nSet the elements of the matrix to the same values as the elements\nof the source Matrix.\n"},
  {(char*)"Zero", PyvtkMatrix3x3_Zero, METH_VARARGS,
   (char*)"V.Zero()\nC++: void Zero()\nV.Zero([float, float, float, float, float, float, float, float,\n    float])\nC++: static void Zero(double Elements[9])\n\nSet all of the elements to zero.\n"},
  {(char*)"Identity", PyvtkMatrix3x3_Identity, METH_VARARGS,
   (char*)"V.Identity()\nC++: void Identity()\nV.Identity([float, float, float, float, float, float, float,\n    float, float])\nC++: static void Identity(double Elements[9])\n\nSet equal to Identity matrix\n"},
  {(char*)"Invert", PyvtkMatrix3x3_Invert, METH_VARARGS | METH_STATIC,
   (char*)"V.Invert(vtkMatrix3x3, vtkMatrix3x3)\nC++: static void Invert(vtkMatrix3x3 *in, vtkMatrix3x3 *out)\nV.Invert()\nC++: void Invert()\nV.Invert((float, float, float, float, float, float, float, float,\n    float), [float, float, float, float, float, float, float,\n    float, float])\nC++: static void Invert(const double inElements[9],\n    double outElements[9])\nV.Invert(vtkMatrix3x3, vtkMatrix3x3)\nC++: void Invert(vtkMatrix3x3 &in, vtkMatrix3x3 &out)\n\nMatrix Inversion (adapted from Richard Carling in \"Graphics\nGems,\" Academic Press, 1990).\n"},
  {(char*)"Transpose", PyvtkMatrix3x3_Transpose, METH_VARARGS | METH_STATIC,
   (char*)"V.Transpose(vtkMatrix3x3, vtkMatrix3x3)\nC++: static void Transpose(vtkMatrix3x3 *in, vtkMatrix3x3 *out)\nV.Transpose()\nC++: void Transpose()\nV.Transpose((float, float, float, float, float, float, float,\n    float, float), [float, float, float, float, float, float,\n    float, float, float])\nC++: static void Transpose(const double inElements[9],\n    double outElements[9])\nV.Transpose(vtkMatrix3x3, vtkMatrix3x3)\nC++: void Transpose(vtkMatrix3x3 &in, vtkMatrix3x3 &out)\n\nTranspose the matrix and put it into out.\n"},
  {(char*)"MultiplyPoint", PyvtkMatrix3x3_MultiplyPoint, METH_VARARGS,
   (char*)"V.MultiplyPoint((float, float, float), [float, float, float])\nC++: void MultiplyPoint(const double in[3], double out[3])\nV.MultiplyPoint((float, float, float, float, float, float, float,\n    float, float), (float, float, float), [float, float, float])\nC++: static void MultiplyPoint(const double Elements[9],\n    const double in[3], double out[3])\n\nMultiply a homogeneous coordinate by this matrix, i.e. out =\nA*in. The in[3] and out[3] can be the same array.\n"},
  {(char*)"Multiply3x3", PyvtkMatrix3x3_Multiply3x3, METH_VARARGS | METH_STATIC,
   (char*)"V.Multiply3x3(vtkMatrix3x3, vtkMatrix3x3, vtkMatrix3x3)\nC++: static void Multiply3x3(vtkMatrix3x3 *a, vtkMatrix3x3 *b,\n    vtkMatrix3x3 *c)\nV.Multiply3x3((float, float, float, float, float, float, float,\n    float, float), (float, float, float, float, float, float,\n    float, float, float), [float, float, float, float, float,\n    float, float, float, float])\nC++: static void Multiply3x3(const double a[9], const double b[9],\n     double c[9])\n\nMultiplies matrices a and b and stores the result in c (c=a*b).\n"},
  {(char*)"Adjoint", PyvtkMatrix3x3_Adjoint, METH_VARARGS,
   (char*)"V.Adjoint(vtkMatrix3x3, vtkMatrix3x3)\nC++: void Adjoint(vtkMatrix3x3 *in, vtkMatrix3x3 *out)\nV.Adjoint((float, float, float, float, float, float, float, float,\n     float), [float, float, float, float, float, float, float,\n    float, float])\nC++: static void Adjoint(const double inElements[9],\n    double outElements[9])\nV.Adjoint(vtkMatrix3x3, vtkMatrix3x3)\nC++: void Adjoint(vtkMatrix3x3 &in, vtkMatrix3x3 &out)\n\nCompute adjoint of the matrix and put it into out.\n"},
  {(char*)"Determinant", PyvtkMatrix3x3_Determinant, METH_VARARGS,
   (char*)"V.Determinant() -> float\nC++: double Determinant()\nV.Determinant((float, float, float, float, float, float, float,\n    float, float)) -> float\nC++: static double Determinant(const double Elements[9])\nV.Determinant(vtkMatrix3x3) -> float\nC++: double Determinant(vtkMatrix3x3 &in)\nV.Determinant(vtkMatrix3x3) -> float\nC++: double Determinant(vtkMatrix3x3 *in)\n\nCompute the determinant of the matrix and return it.\n"},
  {(char*)"SetElement", PyvtkMatrix3x3_SetElement, METH_VARARGS,
   (char*)"V.SetElement(int, int, float)\nC++: void SetElement(int i, int j, double value)\n\nSets the element i,j in the matrix.\n"},
  {(char*)"GetElement", PyvtkMatrix3x3_GetElement, METH_VARARGS,
   (char*)"V.GetElement(int, int) -> float\nC++: double GetElement(int i, int j)\n\nReturns the element i,j from the matrix.\n"},
  {(char*)"PointMultiply", PyvtkMatrix3x3_PointMultiply, METH_VARARGS | METH_STATIC,
   (char*)"V.PointMultiply((float, float, float, float, float, float, float,\n    float, float), (float, float, float), [float, float, float])\nC++: static void PointMultiply(const double Elements[9],\n    const double in[3], double out[3])\n\n"},
  {(char*)"IsIdentity", PyvtkMatrix3x3_IsIdentity, METH_VARARGS,
   (char*)"V.IsIdentity() -> bool\nC++: bool IsIdentity()\n\n"},
  {(char*)"GetData", PyvtkMatrix3x3_GetData, METH_VARARGS,
   (char*)"V.GetData() -> (float, ...)\nC++: double *GetData()\n\nReturn a pointer to the first element of the matrix (double[9]).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMatrix3x3_StaticNew()
{
  return vtkMatrix3x3::New();
}

PyObject *PyVTKClass_vtkMatrix3x3New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMatrix3x3_StaticNew,
    PyvtkMatrix3x3_Methods,
    "vtkMatrix3x3", modulename,
    NULL, NULL,
    PyvtkMatrix3x3_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMatrix3x3_Doc()
{
  static const char *docstring[] = {
    "vtkMatrix3x3 - represent and manipulate 3x3 transformation matrices\n\n",
    "Superclass: vtkObject\n\n",
    "vtkMatrix3x3 is a class to represent and manipulate 3x3 matrices.\nSpecifically, it is designed to work on 3x3 transformation matrices\nfound in 2D rendering using homogeneous coordinates [x y w].\n\nSee Also:\n\nvtkTransform2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMatrix3x3(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMatrix3x3New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMatrix3x3", o) != 0)
    {
    Py_DECREF(o);
    }

}

