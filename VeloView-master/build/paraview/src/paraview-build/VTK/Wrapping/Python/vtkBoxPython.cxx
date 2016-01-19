// python wrapper for vtkBox
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBox.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBox(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBoxNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImplicitFunctionNew
extern "C" { PyObject *PyVTKClass_vtkImplicitFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkImplicitFunctionNew
#endif

static const char **PyvtkBox_Doc();


static PyObject *
PyvtkBox_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBox::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBox_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBox::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBox_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBox *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBox::NewInstance());

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
PyvtkBox_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBox *tempr = vtkBox::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBox_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0) :
      op->vtkBox::EvaluateFunction(temp0));

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
PyvtkBox_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0, temp1, temp2) :
      op->vtkBox::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkBox_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkBox_EvaluateFunction_s1(self, args);
    case 3:
      return PyvtkBox_EvaluateFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return NULL;
}



static PyObject *
PyvtkBox_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->EvaluateGradient(temp0, temp1);
      }
    else
      {
      op->vtkBox::EvaluateGradient(temp0, temp1);
      }

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
PyvtkBox_SetXMin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetXMin(temp0);
      }
    else
      {
      op->vtkBox::SetXMin(temp0);
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

  return result;
}

static PyObject *
PyvtkBox_SetXMin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

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
      op->SetXMin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBox::SetXMin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBox_SetXMin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkBox_SetXMin_s1(self, args);
    case 3:
      return PyvtkBox_SetXMin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetXMin");
  return NULL;
}



static PyObject *
PyvtkBox_GetXMin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetXMin(temp0);
      }
    else
      {
      op->vtkBox::GetXMin(temp0);
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

  return result;
}

static PyObject *
PyvtkBox_GetXMin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

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
      op->GetXMin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBox::GetXMin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
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

  return result;
}

static PyObject *
PyvtkBox_GetXMin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkBox_GetXMin_s1(self, args);
    case 3:
      return PyvtkBox_GetXMin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetXMin");
  return NULL;
}



static PyObject *
PyvtkBox_SetXMax_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetXMax(temp0);
      }
    else
      {
      op->vtkBox::SetXMax(temp0);
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

  return result;
}

static PyObject *
PyvtkBox_SetXMax_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

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
      op->SetXMax(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBox::SetXMax(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBox_SetXMax(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkBox_SetXMax_s1(self, args);
    case 3:
      return PyvtkBox_SetXMax_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetXMax");
  return NULL;
}



static PyObject *
PyvtkBox_GetXMax_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetXMax(temp0);
      }
    else
      {
      op->vtkBox::GetXMax(temp0);
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

  return result;
}

static PyObject *
PyvtkBox_GetXMax_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

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
      op->GetXMax(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBox::GetXMax(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
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

  return result;
}

static PyObject *
PyvtkBox_GetXMax(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkBox_GetXMax_s1(self, args);
    case 3:
      return PyvtkBox_GetXMax_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetXMax");
  return NULL;
}



static PyObject *
PyvtkBox_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkBox::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBox_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0);
      }
    else
      {
      op->vtkBox::SetBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBox_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkBox_SetBounds_s1(self, args);
    case 1:
      return PyvtkBox_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkBox_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

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
      op->GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkBox::GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
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
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBox_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkBox::GetBounds(temp0);
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

  return result;
}

static PyObject *
PyvtkBox_GetBounds_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkBox::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkBox_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkBox_GetBounds_s1(self, args);
    case 1:
      return PyvtkBox_GetBounds_s2(self, args);
    case 0:
      return PyvtkBox_GetBounds_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkBox_AddBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->AddBounds(temp0);
      }
    else
      {
      op->vtkBox::AddBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBox_IntersectBox(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IntersectBox");

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    char tempr = vtkBox::IntersectBox(temp0, temp1, temp2, temp3, temp4);

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

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBox_IntersectWithLine(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IntersectWithLine");

  double temp0[6];
  const int size0 = 6;
  double temp1[3];
  const int size1 = 3;
  double temp2[3];
  const int size2 = 3;
  double temp3;
  double temp4;
  double temp5[3];
  double save5[3];
  const int size5 = 3;
  double temp6[3];
  double save6[3];
  const int size6 = 3;
  int temp7;
  int temp8;
  PyObject *result = NULL;

  if (ap.CheckArgCount(9) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
    {
    ap.SaveArray(temp5, save5, size5);
    ap.SaveArray(temp6, save6, size6);

    int tempr = vtkBox::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
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
      ap.SetArgValue(7, temp7);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(8, temp8);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBox_Methods[] = {
  {(char*)"GetClassName", PyvtkBox_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBox_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBox_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBox\nC++: vtkBox *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBox_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBox\nC++: vtkBox *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EvaluateFunction", PyvtkBox_EvaluateFunction, METH_VARARGS,
   (char*)"V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3])\nV.EvaluateFunction(float, float, float) -> float\nC++: double EvaluateFunction(double x, double y, double z)\n\n"},
  {(char*)"EvaluateGradient", PyvtkBox_EvaluateGradient, METH_VARARGS,
   (char*)"V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double n[3])\n\n"},
  {(char*)"SetXMin", PyvtkBox_SetXMin, METH_VARARGS,
   (char*)"V.SetXMin([float, float, float])\nC++: void SetXMin(double p[3])\nV.SetXMin(float, float, float)\nC++: void SetXMin(double x, double y, double z)\n\nSet / get the bounding box using various methods.\n"},
  {(char*)"GetXMin", PyvtkBox_GetXMin, METH_VARARGS,
   (char*)"V.GetXMin([float, float, float])\nC++: void GetXMin(double p[3])\nV.GetXMin(float, float, float)\nC++: void GetXMin(double &x, double &y, double &z)\n\nSet / get the bounding box using various methods.\n"},
  {(char*)"SetXMax", PyvtkBox_SetXMax, METH_VARARGS,
   (char*)"V.SetXMax([float, float, float])\nC++: void SetXMax(double p[3])\nV.SetXMax(float, float, float)\nC++: void SetXMax(double x, double y, double z)\n\n"},
  {(char*)"GetXMax", PyvtkBox_GetXMax, METH_VARARGS,
   (char*)"V.GetXMax([float, float, float])\nC++: void GetXMax(double p[3])\nV.GetXMax(float, float, float)\nC++: void GetXMax(double &x, double &y, double &z)\n\n"},
  {(char*)"SetBounds", PyvtkBox_SetBounds, METH_VARARGS,
   (char*)"V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(const double bounds[6])\n\n"},
  {(char*)"GetBounds", PyvtkBox_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds(float, float, float, float, float, float)\nC++: void GetBounds(double &xMin, double &xMax, double &yMin,\n    double &yMax, double &zMin, double &zMax)\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\nV.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\n"},
  {(char*)"AddBounds", PyvtkBox_AddBounds, METH_VARARGS,
   (char*)"V.AddBounds((float, float, float, float, float, float))\nC++: void AddBounds(const double bounds[6])\n\nA special method that allows union set operation on bounding\nboxes. Start with a SetBounds(). Subsequent AddBounds() methods\nare union set operations on the original bounds. Retrieve the\nfinal bounds with a GetBounds() method.\n"},
  {(char*)"IntersectBox", PyvtkBox_IntersectBox, METH_VARARGS | METH_STATIC,
   (char*)"V.IntersectBox([float, float, float, float, float, float], [float,\n     float, float], [float, float, float], [float, float, float],\n    float) -> char\nC++: static char IntersectBox(double bounds[6], double origin[3],\n    double dir[3], double coord[3], double &t)\n\nBounding box intersection modified from Graphics Gems Vol I. The\nmethod returns a non-zero value if the bounding box is hit.\nOrigin[3] starts the ray, dir[3] is the vector components of the\nray in the x-y-z directions, coord[3] is the location of hit, and\nt is the parametric coordinate along line. (Notes: the\nintersection ray dir[3] is NOT normalized.  Valid intersections\nwill only occur between 0<=t<=1.)\n"},
  {(char*)"IntersectWithLine", PyvtkBox_IntersectWithLine, METH_VARARGS | METH_STATIC,
   (char*)"V.IntersectWithLine((float, float, float, float, float, float), (\n    float, float, float), (float, float, float), float, float,\n    [float, float, float], [float, float, float], int, int) -> int\nC++: static int IntersectWithLine(const double bounds[6],\n    const double p1[3], const double p2[3], double &t1,\n    double &t2, double x1[3], double x2[3], int &plane1,\n    int &plane2)\n\nIntersect a line with the box.  Give the endpoints of the line in\np1 and p2.  The parameteric distances from p1 to the entry and\nexit points are returned in t1 and t2, where t1 and t2 are\nclamped to the range [0,1].  The entry and exit planes are\nreturned in plane1 and plane2 where integers (0, 1, 2, 3, 4, 5)\nstand for the (xmin, xmax, ymin, ymax, zmin, zmax) planes\nrespectively, and a value of -1 means that no intersection\noccurred.  The actual intersection coordinates are stored in x1\nand x2, which can be set to NULL of you do not need them to be\nreturned.  The function return value will be zero if the line is\nwholly outside of the box.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBox_StaticNew()
{
  return vtkBox::New();
}

PyObject *PyVTKClass_vtkBoxNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBox_StaticNew,
    PyvtkBox_Methods,
    "vtkBox", modulename,
    NULL, NULL,
    PyvtkBox_Doc(),
    PyVTKClass_vtkImplicitFunctionNew(modulename));
  return cls;
}

const char **PyvtkBox_Doc()
{
  static const char *docstring[] = {
    "vtkBox - implicit function for a bounding box\n\n",
    "Superclass: vtkImplicitFunction\n\n",
    "vtkBox computes the implicit function and/or gradient for a\naxis-aligned bounding box. (The superclasses transform can be used to\nmodify this orientation.) Each side of the box is orthogonal to all\nother sides meeting along shared edges and all faces are orthogonal\nto the x-y-z coordinate axes.  (If you wish to orient this box\ndifferently, recall that the superclass vtkImplicitFunction supports\na ",
    "transformation matrix.) vtkCube is a concrete implementation of\nvtkImplicitFunction.\n\nSee Also:\n\nvtkCubeSource vtkImplicitFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBox(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBoxNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBox", o) != 0)
    {
    Py_DECREF(o);
    }

}

