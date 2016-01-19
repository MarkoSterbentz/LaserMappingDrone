// python wrapper for vtkColorTransferFunction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkColorTransferFunction.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkColorTransferFunction(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkColorTransferFunctionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkScalarsToColorsNew
extern "C" { PyObject *PyVTKClass_vtkScalarsToColorsNew(const char *); }
#define DECLARED_PyVTKClass_vtkScalarsToColorsNew
#endif

static const char **PyvtkColorTransferFunction_Doc();


static PyObject *
PyvtkColorTransferFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkColorTransferFunction::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkColorTransferFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkColorTransferFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkColorTransferFunction::NewInstance());

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
PyvtkColorTransferFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkColorTransferFunction *tempr = vtkColorTransferFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  vtkColorTransferFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkColorTransferFunction::GetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AddRGBPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRGBPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
    int tempr = (ap.IsBound() ?
      op->AddRGBPoint(temp0, temp1, temp2, temp3) :
      op->vtkColorTransferFunction::AddRGBPoint(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_AddRGBPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRGBPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
    int tempr = (ap.IsBound() ?
      op->AddRGBPoint(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkColorTransferFunction::AddRGBPoint(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_AddRGBPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkColorTransferFunction_AddRGBPoint_s1(self, args);
    case 6:
      return PyvtkColorTransferFunction_AddRGBPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddRGBPoint");
  return NULL;
}



static PyObject *
PyvtkColorTransferFunction_AddHSVPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddHSVPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
    int tempr = (ap.IsBound() ?
      op->AddHSVPoint(temp0, temp1, temp2, temp3) :
      op->vtkColorTransferFunction::AddHSVPoint(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_AddHSVPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddHSVPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
    int tempr = (ap.IsBound() ?
      op->AddHSVPoint(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkColorTransferFunction::AddHSVPoint(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_AddHSVPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkColorTransferFunction_AddHSVPoint_s1(self, args);
    case 6:
      return PyvtkColorTransferFunction_AddHSVPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddHSVPoint");
  return NULL;
}



static PyObject *
PyvtkColorTransferFunction_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->RemovePoint(temp0) :
      op->vtkColorTransferFunction::RemovePoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AddRGBSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRGBSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
      op->AddRGBSegment(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkColorTransferFunction::AddRGBSegment(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AddHSVSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddHSVSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
      op->AddHSVSegment(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkColorTransferFunction::AddHSVSegment(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_RemoveAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllPoints();
      }
    else
      {
      op->vtkColorTransferFunction::RemoveAllPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetColor(temp0) :
      op->vtkColorTransferFunction::GetColor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_GetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetColor(temp0, temp1);
      }
    else
      {
      op->vtkColorTransferFunction::GetColor(temp0, temp1);
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
PyvtkColorTransferFunction_GetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkColorTransferFunction_GetColor_s1(self, args);
    case 2:
      return PyvtkColorTransferFunction_GetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetColor");
  return NULL;
}



static PyObject *
PyvtkColorTransferFunction_GetRedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRedValue(temp0) :
      op->vtkColorTransferFunction::GetRedValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetGreenValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreenValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetGreenValue(temp0) :
      op->vtkColorTransferFunction::GetGreenValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetBlueValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlueValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBlueValue(temp0) :
      op->vtkColorTransferFunction::GetBlueValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetNodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNodeValue(temp0, temp1) :
      op->vtkColorTransferFunction::GetNodeValue(temp0, temp1));

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
PyvtkColorTransferFunction_SetNodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetNodeValue(temp0, temp1) :
      op->vtkColorTransferFunction::SetNodeValue(temp0, temp1));

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
PyvtkColorTransferFunction_MapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->MapValue(temp0) :
      op->vtkColorTransferFunction::MapValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkColorTransferFunction::GetRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AdjustRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AdjustRange(temp0) :
      op->vtkColorTransferFunction::AdjustRange(temp0));

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
PyvtkColorTransferFunction_GetTable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  int temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new double[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->GetTable(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkColorTransferFunction::GetTable(temp0, temp1, temp2, temp3);
      }

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

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_GetTable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const unsigned char *tempr = (ap.IsBound() ?
      op->GetTable(temp0, temp1, temp2) :
      op->vtkColorTransferFunction::GetTable(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_GetTable(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkColorTransferFunction_GetTable_s1(self, args);
    case 3:
      return PyvtkColorTransferFunction_GetTable_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTable");
  return NULL;
}



static PyObject *
PyvtkColorTransferFunction_BuildFunctionFromTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildFunctionFromTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  int temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new double[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->BuildFunctionFromTable(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkColorTransferFunction::BuildFunctionFromTable(temp0, temp1, temp2, temp3);
      }

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

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClamping(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::SetClamping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetClampingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClampingMinValue() :
      op->vtkColorTransferFunction::GetClampingMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetClampingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClampingMaxValue() :
      op->vtkColorTransferFunction::GetClampingMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClamping() :
      op->vtkColorTransferFunction::GetClamping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_ClampingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOn();
      }
    else
      {
      op->vtkColorTransferFunction::ClampingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_ClampingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOff();
      }
    else
      {
      op->vtkColorTransferFunction::ClampingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorSpace(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::SetColorSpace(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetColorSpaceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSpaceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetColorSpaceMinValue() :
      op->vtkColorTransferFunction::GetColorSpaceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetColorSpaceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSpaceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetColorSpaceMaxValue() :
      op->vtkColorTransferFunction::GetColorSpaceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetColorSpaceToRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpaceToRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorSpaceToRGB();
      }
    else
      {
      op->vtkColorTransferFunction::SetColorSpaceToRGB();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetColorSpaceToHSV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpaceToHSV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorSpaceToHSV();
      }
    else
      {
      op->vtkColorTransferFunction::SetColorSpaceToHSV();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetColorSpaceToLab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpaceToLab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorSpaceToLab();
      }
    else
      {
      op->vtkColorTransferFunction::SetColorSpaceToLab();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetColorSpaceToDiverging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpaceToDiverging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorSpaceToDiverging();
      }
    else
      {
      op->vtkColorTransferFunction::SetColorSpaceToDiverging();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetColorSpace() :
      op->vtkColorTransferFunction::GetColorSpace());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetHSVWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHSVWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHSVWrap(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::SetHSVWrap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetHSVWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHSVWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHSVWrap() :
      op->vtkColorTransferFunction::GetHSVWrap());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_HSVWrapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HSVWrapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HSVWrapOn();
      }
    else
      {
      op->vtkColorTransferFunction::HSVWrapOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_HSVWrapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HSVWrapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HSVWrapOff();
      }
    else
      {
      op->vtkColorTransferFunction::HSVWrapOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScale(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::SetScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetScaleToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleToLinear();
      }
    else
      {
      op->vtkColorTransferFunction::SetScaleToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetScaleToLog10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToLog10");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleToLog10();
      }
    else
      {
      op->vtkColorTransferFunction::SetScaleToLog10();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkColorTransferFunction::GetScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetNanColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
      op->SetNanColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkColorTransferFunction::SetNanColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_SetNanColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNanColor(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::SetNanColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_SetNanColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkColorTransferFunction_SetNanColor_s1(self, args);
    case 1:
      return PyvtkColorTransferFunction_SetNanColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNanColor");
  return NULL;
}



static PyObject *
PyvtkColorTransferFunction_GetNanColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetNanColor() :
      op->vtkColorTransferFunction::GetNanColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetBelowRangeColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
      op->SetBelowRangeColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkColorTransferFunction::SetBelowRangeColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_SetBelowRangeColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBelowRangeColor(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::SetBelowRangeColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_SetBelowRangeColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkColorTransferFunction_SetBelowRangeColor_s1(self, args);
    case 1:
      return PyvtkColorTransferFunction_SetBelowRangeColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBelowRangeColor");
  return NULL;
}



static PyObject *
PyvtkColorTransferFunction_GetBelowRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBelowRangeColor() :
      op->vtkColorTransferFunction::GetBelowRangeColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetUseBelowRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseBelowRangeColor(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::SetUseBelowRangeColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetUseBelowRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseBelowRangeColor() :
      op->vtkColorTransferFunction::GetUseBelowRangeColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_UseBelowRangeColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBelowRangeColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseBelowRangeColorOn();
      }
    else
      {
      op->vtkColorTransferFunction::UseBelowRangeColorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_UseBelowRangeColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBelowRangeColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseBelowRangeColorOff();
      }
    else
      {
      op->vtkColorTransferFunction::UseBelowRangeColorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetAboveRangeColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
      op->SetAboveRangeColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkColorTransferFunction::SetAboveRangeColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_SetAboveRangeColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAboveRangeColor(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::SetAboveRangeColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_SetAboveRangeColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkColorTransferFunction_SetAboveRangeColor_s1(self, args);
    case 1:
      return PyvtkColorTransferFunction_SetAboveRangeColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAboveRangeColor");
  return NULL;
}



static PyObject *
PyvtkColorTransferFunction_GetAboveRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAboveRangeColor() :
      op->vtkColorTransferFunction::GetAboveRangeColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetUseAboveRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseAboveRangeColor(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::SetUseAboveRangeColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetUseAboveRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseAboveRangeColor() :
      op->vtkColorTransferFunction::GetUseAboveRangeColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_UseAboveRangeColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAboveRangeColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseAboveRangeColorOn();
      }
    else
      {
      op->vtkColorTransferFunction::UseAboveRangeColorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_UseAboveRangeColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAboveRangeColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseAboveRangeColorOff();
      }
    else
      {
      op->vtkColorTransferFunction::UseAboveRangeColorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetDataPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDataPointer() :
      op->vtkColorTransferFunction::GetDataPointer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_FillFromDataPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillFromDataPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->FillFromDataPointer(temp0, temp1);
      }
    else
      {
      op->vtkColorTransferFunction::FillFromDataPointer(temp0, temp1);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_MapScalarsThroughTable2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsThroughTable2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  void  *temp0 = NULL;
  unsigned char *temp1 = NULL;
  unsigned char *save1 = NULL;
  unsigned char small1[8];
  int size1 = 0;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned char[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkColorTransferFunction::MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetAllowDuplicateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowDuplicateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllowDuplicateScalars(temp0);
      }
    else
      {
      op->vtkColorTransferFunction::SetAllowDuplicateScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetAllowDuplicateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowDuplicateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAllowDuplicateScalars() :
      op->vtkColorTransferFunction::GetAllowDuplicateScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AllowDuplicateScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowDuplicateScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowDuplicateScalarsOn();
      }
    else
      {
      op->vtkColorTransferFunction::AllowDuplicateScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AllowDuplicateScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowDuplicateScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowDuplicateScalarsOff();
      }
    else
      {
      op->vtkColorTransferFunction::AllowDuplicateScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetNumberOfAvailableColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAvailableColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfAvailableColors() :
      op->vtkColorTransferFunction::GetNumberOfAvailableColors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetIndexedColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  vtkIdType temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetIndexedColor(temp0, temp1);
      }
    else
      {
      op->vtkColorTransferFunction::GetIndexedColor(temp0, temp1);
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

static PyMethodDef PyvtkColorTransferFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkColorTransferFunction_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkColorTransferFunction_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkColorTransferFunction_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkColorTransferFunction\nC++: vtkColorTransferFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkColorTransferFunction_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkColorTransferFunction\nC++: vtkColorTransferFunction *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DeepCopy", PyvtkColorTransferFunction_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkScalarsToColors)\nC++: void DeepCopy(vtkScalarsToColors *f)\n\n"},
  {(char*)"ShallowCopy", PyvtkColorTransferFunction_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkColorTransferFunction)\nC++: void ShallowCopy(vtkColorTransferFunction *f)\n\n"},
  {(char*)"GetSize", PyvtkColorTransferFunction_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nHow many nodes define this function?\n"},
  {(char*)"AddRGBPoint", PyvtkColorTransferFunction_AddRGBPoint, METH_VARARGS,
   (char*)"V.AddRGBPoint(float, float, float, float) -> int\nC++: int AddRGBPoint(double x, double r, double g, double b)\nV.AddRGBPoint(float, float, float, float, float, float) -> int\nC++: int AddRGBPoint(double x, double r, double g, double b,\n    double midpoint, double sharpness)\n\nAdd/Remove a point to/from the function defined in RGB or HSV\nReturn the index of the point (0 based), or -1 on error. See the\ndescription of class vtkPiecewiseFunction for an explanation of\nmidpoint and sharpness.\n"},
  {(char*)"AddHSVPoint", PyvtkColorTransferFunction_AddHSVPoint, METH_VARARGS,
   (char*)"V.AddHSVPoint(float, float, float, float) -> int\nC++: int AddHSVPoint(double x, double h, double s, double v)\nV.AddHSVPoint(float, float, float, float, float, float) -> int\nC++: int AddHSVPoint(double x, double h, double s, double v,\n    double midpoint, double sharpness)\n\nAdd/Remove a point to/from the function defined in RGB or HSV\nReturn the index of the point (0 based), or -1 on error. See the\ndescription of class vtkPiecewiseFunction for an explanation of\nmidpoint and sharpness.\n"},
  {(char*)"RemovePoint", PyvtkColorTransferFunction_RemovePoint, METH_VARARGS,
   (char*)"V.RemovePoint(float) -> int\nC++: int RemovePoint(double x)\n\nAdd/Remove a point to/from the function defined in RGB or HSV\nReturn the index of the point (0 based), or -1 on error. See the\ndescription of class vtkPiecewiseFunction for an explanation of\nmidpoint and sharpness.\n"},
  {(char*)"AddRGBSegment", PyvtkColorTransferFunction_AddRGBSegment, METH_VARARGS,
   (char*)"V.AddRGBSegment(float, float, float, float, float, float, float,\n    float)\nC++: void AddRGBSegment(double x1, double r1, double g1,\n    double b1, double x2, double r2, double g2, double b2)\n\nAdd two points to the function and remove all the points between\nthem\n"},
  {(char*)"AddHSVSegment", PyvtkColorTransferFunction_AddHSVSegment, METH_VARARGS,
   (char*)"V.AddHSVSegment(float, float, float, float, float, float, float,\n    float)\nC++: void AddHSVSegment(double x1, double h1, double s1,\n    double v1, double x2, double h2, double s2, double v2)\n\nAdd two points to the function and remove all the points between\nthem\n"},
  {(char*)"RemoveAllPoints", PyvtkColorTransferFunction_RemoveAllPoints, METH_VARARGS,
   (char*)"V.RemoveAllPoints()\nC++: void RemoveAllPoints()\n\nRemove all points\n"},
  {(char*)"GetColor", PyvtkColorTransferFunction_GetColor, METH_VARARGS,
   (char*)"V.GetColor(float) -> (float, float, float)\nC++: double *GetColor(double x)\nV.GetColor(float, [float, float, float])\nC++: void GetColor(double x, double rgb[3])\n\nReturns an RGB color for the specified scalar value\n"},
  {(char*)"GetRedValue", PyvtkColorTransferFunction_GetRedValue, METH_VARARGS,
   (char*)"V.GetRedValue(float) -> float\nC++: double GetRedValue(double x)\n\nGet the color components individually.\n"},
  {(char*)"GetGreenValue", PyvtkColorTransferFunction_GetGreenValue, METH_VARARGS,
   (char*)"V.GetGreenValue(float) -> float\nC++: double GetGreenValue(double x)\n\nGet the color components individually.\n"},
  {(char*)"GetBlueValue", PyvtkColorTransferFunction_GetBlueValue, METH_VARARGS,
   (char*)"V.GetBlueValue(float) -> float\nC++: double GetBlueValue(double x)\n\nGet the color components individually.\n"},
  {(char*)"GetNodeValue", PyvtkColorTransferFunction_GetNodeValue, METH_VARARGS,
   (char*)"V.GetNodeValue(int, [float, float, float, float, float, float])\n    -> int\nC++: int GetNodeValue(int index, double val[6])\n\nFor the node specified by index, set/get the location (X), R, G,\nand B values, midpoint, and sharpness values at the node.\n"},
  {(char*)"SetNodeValue", PyvtkColorTransferFunction_SetNodeValue, METH_VARARGS,
   (char*)"V.SetNodeValue(int, [float, float, float, float, float, float])\n    -> int\nC++: int SetNodeValue(int index, double val[6])\n\nFor the node specified by index, set/get the location (X), R, G,\nand B values, midpoint, and sharpness values at the node.\n"},
  {(char*)"MapValue", PyvtkColorTransferFunction_MapValue, METH_VARARGS,
   (char*)"V.MapValue(float) -> (int, ...)\nC++: virtual unsigned char *MapValue(double v)\n\nMap one value through the lookup table.\n"},
  {(char*)"GetRange", PyvtkColorTransferFunction_GetRange, METH_VARARGS,
   (char*)"V.GetRange() -> (float, float)\nC++: double *GetRange()\n\n"},
  {(char*)"AdjustRange", PyvtkColorTransferFunction_AdjustRange, METH_VARARGS,
   (char*)"V.AdjustRange([float, float]) -> int\nC++: int AdjustRange(double range[2])\n\nRemove all points out of the new range, and make sure there is a\npoint at each end of that range. Returns 1 on success, 0\notherwise.\n"},
  {(char*)"GetTable", PyvtkColorTransferFunction_GetTable, METH_VARARGS,
   (char*)"V.GetTable(float, float, int, [float, ...])\nC++: void GetTable(double x1, double x2, int n, double *table)\nV.GetTable(float, float, int) -> (int, ...)\nC++: const unsigned char *GetTable(double x1, double x2, int n)\n\nFills in a table of n colors mapped from values mapped with even\nspacing between x1 and x2, inclusive.\n\nNote that GetTable ignores IndexedLookup\n"},
  {(char*)"BuildFunctionFromTable", PyvtkColorTransferFunction_BuildFunctionFromTable, METH_VARARGS,
   (char*)"V.BuildFunctionFromTable(float, float, int, [float, ...])\nC++: void BuildFunctionFromTable(double x1, double x2, int size,\n    double *table)\n\nConstruct a color transfer function from a table. Unlike\nFillFromDataPointer(), the table parameter's layout is assumed to\nbe [R1, G1, B1, R2, G2, B2, ..., Rn, Gn, Bn], and it is assumed\nto be a block of memory of size [3*size]. After calling this\nmethod, the function range will be [x1, x2], the function will\nhave size nodes, and function values will be regularly spaced\nbetween x1 and x2.\n"},
  {(char*)"SetClamping", PyvtkColorTransferFunction_SetClamping, METH_VARARGS,
   (char*)"V.SetClamping(int)\nC++: void SetClamping(int)\n\nSets/gets whether clamping is used. If on, scalar values below\nthe lower range value set for the transfer function will be\nmapped to the first node color, and scalar values above the upper\nrange value set for the transfer function will be mapped to the\nlast node color. If off, values outside the range are mapped to\nblack.\n"},
  {(char*)"GetClampingMinValue", PyvtkColorTransferFunction_GetClampingMinValue, METH_VARARGS,
   (char*)"V.GetClampingMinValue() -> int\nC++: int GetClampingMinValue()\n\nSets/gets whether clamping is used. If on, scalar values below\nthe lower range value set for the transfer function will be\nmapped to the first node color, and scalar values above the upper\nrange value set for the transfer function will be mapped to the\nlast node color. If off, values outside the range are mapped to\nblack.\n"},
  {(char*)"GetClampingMaxValue", PyvtkColorTransferFunction_GetClampingMaxValue, METH_VARARGS,
   (char*)"V.GetClampingMaxValue() -> int\nC++: int GetClampingMaxValue()\n\nSets/gets whether clamping is used. If on, scalar values below\nthe lower range value set for the transfer function will be\nmapped to the first node color, and scalar values above the upper\nrange value set for the transfer function will be mapped to the\nlast node color. If off, values outside the range are mapped to\nblack.\n"},
  {(char*)"GetClamping", PyvtkColorTransferFunction_GetClamping, METH_VARARGS,
   (char*)"V.GetClamping() -> int\nC++: int GetClamping()\n\nSets/gets whether clamping is used. If on, scalar values below\nthe lower range value set for the transfer function will be\nmapped to the first node color, and scalar values above the upper\nrange value set for the transfer function will be mapped to the\nlast node color. If off, values outside the range are mapped to\nblack.\n"},
  {(char*)"ClampingOn", PyvtkColorTransferFunction_ClampingOn, METH_VARARGS,
   (char*)"V.ClampingOn()\nC++: void ClampingOn()\n\nSets/gets whether clamping is used. If on, scalar values below\nthe lower range value set for the transfer function will be\nmapped to the first node color, and scalar values above the upper\nrange value set for the transfer function will be mapped to the\nlast node color. If off, values outside the range are mapped to\nblack.\n"},
  {(char*)"ClampingOff", PyvtkColorTransferFunction_ClampingOff, METH_VARARGS,
   (char*)"V.ClampingOff()\nC++: void ClampingOff()\n\nSets/gets whether clamping is used. If on, scalar values below\nthe lower range value set for the transfer function will be\nmapped to the first node color, and scalar values above the upper\nrange value set for the transfer function will be mapped to the\nlast node color. If off, values outside the range are mapped to\nblack.\n"},
  {(char*)"SetColorSpace", PyvtkColorTransferFunction_SetColorSpace, METH_VARARGS,
   (char*)"V.SetColorSpace(int)\nC++: void SetColorSpace(int)\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"GetColorSpaceMinValue", PyvtkColorTransferFunction_GetColorSpaceMinValue, METH_VARARGS,
   (char*)"V.GetColorSpaceMinValue() -> int\nC++: int GetColorSpaceMinValue()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"GetColorSpaceMaxValue", PyvtkColorTransferFunction_GetColorSpaceMaxValue, METH_VARARGS,
   (char*)"V.GetColorSpaceMaxValue() -> int\nC++: int GetColorSpaceMaxValue()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"SetColorSpaceToRGB", PyvtkColorTransferFunction_SetColorSpaceToRGB, METH_VARARGS,
   (char*)"V.SetColorSpaceToRGB()\nC++: void SetColorSpaceToRGB()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"SetColorSpaceToHSV", PyvtkColorTransferFunction_SetColorSpaceToHSV, METH_VARARGS,
   (char*)"V.SetColorSpaceToHSV()\nC++: void SetColorSpaceToHSV()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"SetColorSpaceToLab", PyvtkColorTransferFunction_SetColorSpaceToLab, METH_VARARGS,
   (char*)"V.SetColorSpaceToLab()\nC++: void SetColorSpaceToLab()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"SetColorSpaceToDiverging", PyvtkColorTransferFunction_SetColorSpaceToDiverging, METH_VARARGS,
   (char*)"V.SetColorSpaceToDiverging()\nC++: void SetColorSpaceToDiverging()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"GetColorSpace", PyvtkColorTransferFunction_GetColorSpace, METH_VARARGS,
   (char*)"V.GetColorSpace() -> int\nC++: int GetColorSpace()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"SetHSVWrap", PyvtkColorTransferFunction_SetHSVWrap, METH_VARARGS,
   (char*)"V.SetHSVWrap(int)\nC++: void SetHSVWrap(int a)\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"GetHSVWrap", PyvtkColorTransferFunction_GetHSVWrap, METH_VARARGS,
   (char*)"V.GetHSVWrap() -> int\nC++: int GetHSVWrap()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"HSVWrapOn", PyvtkColorTransferFunction_HSVWrapOn, METH_VARARGS,
   (char*)"V.HSVWrapOn()\nC++: void HSVWrapOn()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"HSVWrapOff", PyvtkColorTransferFunction_HSVWrapOff, METH_VARARGS,
   (char*)"V.HSVWrapOff()\nC++: void HSVWrapOff()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  Diverging is a special mode\nwhere colors will pass through white when interpolating between\ntwo saturated colors.\n"},
  {(char*)"SetScale", PyvtkColorTransferFunction_SetScale, METH_VARARGS,
   (char*)"V.SetScale(int)\nC++: void SetScale(int a)\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, and the range contains\nzero, the color mapping will be linear.\n"},
  {(char*)"SetScaleToLinear", PyvtkColorTransferFunction_SetScaleToLinear, METH_VARARGS,
   (char*)"V.SetScaleToLinear()\nC++: void SetScaleToLinear()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, and the range contains\nzero, the color mapping will be linear.\n"},
  {(char*)"SetScaleToLog10", PyvtkColorTransferFunction_SetScaleToLog10, METH_VARARGS,
   (char*)"V.SetScaleToLog10()\nC++: void SetScaleToLog10()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, and the range contains\nzero, the color mapping will be linear.\n"},
  {(char*)"GetScale", PyvtkColorTransferFunction_GetScale, METH_VARARGS,
   (char*)"V.GetScale() -> int\nC++: int GetScale()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, and the range contains\nzero, the color mapping will be linear.\n"},
  {(char*)"SetNanColor", PyvtkColorTransferFunction_SetNanColor, METH_VARARGS,
   (char*)"V.SetNanColor(float, float, float)\nC++: void SetNanColor(double, double, double)\nV.SetNanColor((float, float, float))\nC++: void SetNanColor(double a[3])\n\n"},
  {(char*)"GetNanColor", PyvtkColorTransferFunction_GetNanColor, METH_VARARGS,
   (char*)"V.GetNanColor() -> (float, float, float)\nC++: double *GetNanColor()\n\n"},
  {(char*)"SetBelowRangeColor", PyvtkColorTransferFunction_SetBelowRangeColor, METH_VARARGS,
   (char*)"V.SetBelowRangeColor(float, float, float)\nC++: void SetBelowRangeColor(double, double, double)\nV.SetBelowRangeColor((float, float, float))\nC++: void SetBelowRangeColor(double a[3])\n\n"},
  {(char*)"GetBelowRangeColor", PyvtkColorTransferFunction_GetBelowRangeColor, METH_VARARGS,
   (char*)"V.GetBelowRangeColor() -> (float, float, float)\nC++: double *GetBelowRangeColor()\n\n"},
  {(char*)"SetUseBelowRangeColor", PyvtkColorTransferFunction_SetUseBelowRangeColor, METH_VARARGS,
   (char*)"V.SetUseBelowRangeColor(int)\nC++: void SetUseBelowRangeColor(int a)\n\nSet whether the below range color should be used.\n"},
  {(char*)"GetUseBelowRangeColor", PyvtkColorTransferFunction_GetUseBelowRangeColor, METH_VARARGS,
   (char*)"V.GetUseBelowRangeColor() -> int\nC++: int GetUseBelowRangeColor()\n\nSet whether the below range color should be used.\n"},
  {(char*)"UseBelowRangeColorOn", PyvtkColorTransferFunction_UseBelowRangeColorOn, METH_VARARGS,
   (char*)"V.UseBelowRangeColorOn()\nC++: void UseBelowRangeColorOn()\n\nSet whether the below range color should be used.\n"},
  {(char*)"UseBelowRangeColorOff", PyvtkColorTransferFunction_UseBelowRangeColorOff, METH_VARARGS,
   (char*)"V.UseBelowRangeColorOff()\nC++: void UseBelowRangeColorOff()\n\nSet whether the below range color should be used.\n"},
  {(char*)"SetAboveRangeColor", PyvtkColorTransferFunction_SetAboveRangeColor, METH_VARARGS,
   (char*)"V.SetAboveRangeColor(float, float, float)\nC++: void SetAboveRangeColor(double, double, double)\nV.SetAboveRangeColor((float, float, float))\nC++: void SetAboveRangeColor(double a[3])\n\n"},
  {(char*)"GetAboveRangeColor", PyvtkColorTransferFunction_GetAboveRangeColor, METH_VARARGS,
   (char*)"V.GetAboveRangeColor() -> (float, float, float)\nC++: double *GetAboveRangeColor()\n\n"},
  {(char*)"SetUseAboveRangeColor", PyvtkColorTransferFunction_SetUseAboveRangeColor, METH_VARARGS,
   (char*)"V.SetUseAboveRangeColor(int)\nC++: void SetUseAboveRangeColor(int a)\n\nSet whether the below range color should be used.\n"},
  {(char*)"GetUseAboveRangeColor", PyvtkColorTransferFunction_GetUseAboveRangeColor, METH_VARARGS,
   (char*)"V.GetUseAboveRangeColor() -> int\nC++: int GetUseAboveRangeColor()\n\nSet whether the below range color should be used.\n"},
  {(char*)"UseAboveRangeColorOn", PyvtkColorTransferFunction_UseAboveRangeColorOn, METH_VARARGS,
   (char*)"V.UseAboveRangeColorOn()\nC++: void UseAboveRangeColorOn()\n\nSet whether the below range color should be used.\n"},
  {(char*)"UseAboveRangeColorOff", PyvtkColorTransferFunction_UseAboveRangeColorOff, METH_VARARGS,
   (char*)"V.UseAboveRangeColorOff()\nC++: void UseAboveRangeColorOff()\n\nSet whether the below range color should be used.\n"},
  {(char*)"GetDataPointer", PyvtkColorTransferFunction_GetDataPointer, METH_VARARGS,
   (char*)"V.GetDataPointer() -> (float, ...)\nC++: double *GetDataPointer()\n\nReturns a pointer to an array of all node values in an\ninterleaved array with the layout [X1, R1, G1, B1, X2, R2, G2,\nB2, ..., Xn, Rn, Gn, Bn] where n is the number of nodes defining\nthe transfer function. The returned pointer points to an array\nthat is managed by this class, so callers should not free it.\n"},
  {(char*)"FillFromDataPointer", PyvtkColorTransferFunction_FillFromDataPointer, METH_VARARGS,
   (char*)"V.FillFromDataPointer(int, [float, ...])\nC++: void FillFromDataPointer(int n, double *ptr)\n\nDefines the nodes from an array ptr with the layout [X1, R1, G1,\nB1, X2, R2, G2, B2, ..., Xn, Rn, Gn, Bn] where n is the number of\nnodes.\n"},
  {(char*)"MapScalarsThroughTable2", PyvtkColorTransferFunction_MapScalarsThroughTable2, METH_VARARGS,
   (char*)"V.MapScalarsThroughTable2(, [int, ...], int, int, int, int)\nC++: virtual void MapScalarsThroughTable2(void *input,\n    unsigned char *output, int inputDataType, int numberOfValues,\n    int inputIncrement, int outputIncrement)\n\nMap a set of scalars through the lookup table.\n"},
  {(char*)"SetAllowDuplicateScalars", PyvtkColorTransferFunction_SetAllowDuplicateScalars, METH_VARARGS,
   (char*)"V.SetAllowDuplicateScalars(int)\nC++: void SetAllowDuplicateScalars(int a)\n\nToggle whether to allow duplicate scalar values in the color\ntransfer function (off by default).\n"},
  {(char*)"GetAllowDuplicateScalars", PyvtkColorTransferFunction_GetAllowDuplicateScalars, METH_VARARGS,
   (char*)"V.GetAllowDuplicateScalars() -> int\nC++: int GetAllowDuplicateScalars()\n\nToggle whether to allow duplicate scalar values in the color\ntransfer function (off by default).\n"},
  {(char*)"AllowDuplicateScalarsOn", PyvtkColorTransferFunction_AllowDuplicateScalarsOn, METH_VARARGS,
   (char*)"V.AllowDuplicateScalarsOn()\nC++: void AllowDuplicateScalarsOn()\n\nToggle whether to allow duplicate scalar values in the color\ntransfer function (off by default).\n"},
  {(char*)"AllowDuplicateScalarsOff", PyvtkColorTransferFunction_AllowDuplicateScalarsOff, METH_VARARGS,
   (char*)"V.AllowDuplicateScalarsOff()\nC++: void AllowDuplicateScalarsOff()\n\nToggle whether to allow duplicate scalar values in the color\ntransfer function (off by default).\n"},
  {(char*)"GetNumberOfAvailableColors", PyvtkColorTransferFunction_GetNumberOfAvailableColors, METH_VARARGS,
   (char*)"V.GetNumberOfAvailableColors() -> int\nC++: virtual vtkIdType GetNumberOfAvailableColors()\n\nGet the number of available colors for mapping to.\n"},
  {(char*)"GetIndexedColor", PyvtkColorTransferFunction_GetIndexedColor, METH_VARARGS,
   (char*)"V.GetIndexedColor(int, [float, float, float, float])\nC++: virtual void GetIndexedColor(vtkIdType idx, double rgba[4])\n\nReturn a color given an integer index.\n\nThis is used to assign colors to annotations (given an offset\ninto the list of annotations). If there are no control points or\nidx < 0, then NanColor is returned.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkColorTransferFunction_StaticNew()
{
  return vtkColorTransferFunction::New();
}

PyObject *PyVTKClass_vtkColorTransferFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkColorTransferFunction_StaticNew,
    PyvtkColorTransferFunction_Methods,
    "vtkColorTransferFunction", modulename,
    NULL, NULL,
    PyvtkColorTransferFunction_Doc(),
    PyVTKClass_vtkScalarsToColorsNew(modulename));
  return cls;
}

const char **PyvtkColorTransferFunction_Doc()
{
  static const char *docstring[] = {
    "vtkColorTransferFunction - Defines a transfer function for mapping a\n\n",
    "Superclass: vtkScalarsToColors\n\n",
    "vtkColorTransferFunction is a color mapping in RGB or HSV space that\nuses piecewise hermite functions to allow interpolation that can be\npiecewise constant, piecewise linear, or somewhere in-between (a\nmodified piecewise hermite function that squishes the function\naccording to a sharpness parameter). The function also allows for the\nspecification of the midpoint (the place where the function reach",
    "es\nthe average of the two bounding nodes) as a normalize distance\nbetween nodes. See the description of class vtkPiecewiseFunction for\nan explanation of midpoint and sharpness.\n\nSee Also:\n\nvtkPiecewiseFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkColorTransferFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkColorTransferFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColorTransferFunction", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 6; c++)
    {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_CTF_RGB", 0 },
        { "VTK_CTF_HSV", 1 },
        { "VTK_CTF_LAB", 2 },
        { "VTK_CTF_DIVERGING", 3 },
        { "VTK_CTF_LINEAR", 0 },
        { "VTK_CTF_LOG10", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

