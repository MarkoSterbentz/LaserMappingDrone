// python wrapper for vtkPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPoints.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPoints(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPointsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPoints_Doc();


static PyObject *
PyvtkPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPoints::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPoints::NewInstance());

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
PyvtkPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPoints *tempr = vtkPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
  vtkIdType temp1 = 1000;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkPoints::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPoints::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_SetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetData(temp0);
      }
    else
      {
      op->vtkPoints::SetData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetData() :
      op->vtkPoints::GetData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkPoints::GetDataType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataType(temp0);
      }
    else
      {
      op->vtkPoints::SetDataType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToBit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToBit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToBit();
      }
    else
      {
      op->vtkPoints::SetDataTypeToBit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToChar();
      }
    else
      {
      op->vtkPoints::SetDataTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToUnsignedChar();
      }
    else
      {
      op->vtkPoints::SetDataTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToShort();
      }
    else
      {
      op->vtkPoints::SetDataTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToUnsignedShort();
      }
    else
      {
      op->vtkPoints::SetDataTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToInt();
      }
    else
      {
      op->vtkPoints::SetDataTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToUnsignedInt();
      }
    else
      {
      op->vtkPoints::SetDataTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToLong();
      }
    else
      {
      op->vtkPoints::SetDataTypeToLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToUnsignedLong();
      }
    else
      {
      op->vtkPoints::SetDataTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToFloat();
      }
    else
      {
      op->vtkPoints::SetDataTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToDouble();
      }
    else
      {
      op->vtkPoints::SetDataTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkPoints::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkPoints::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkPoints::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkPoints::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkPoints::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkPoints::GetActualMemorySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkPoints::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint(temp0) :
      op->vtkPoints::GetPoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkPoints_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
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
      op->GetPoint(temp0, temp1);
      }
    else
      {
      op->vtkPoints::GetPoint(temp0, temp1);
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
PyvtkPoints_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPoints_GetPoint_s1(self, args);
    case 2:
      return PyvtkPoints_GetPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return NULL;
}



static PyObject *
PyvtkPoints_SetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

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
      op->SetPoint(temp0, temp1);
      }
    else
      {
      op->vtkPoints::SetPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPoints_SetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
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
      op->SetPoint(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPoints::SetPoint(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPoints_SetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPoints_SetPoint_s1(self, args);
    case 4:
      return PyvtkPoints_SetPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint");
  return NULL;
}



static PyObject *
PyvtkPoints_InsertPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

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
      op->vtkPoints::InsertPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPoints_InsertPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
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
      op->InsertPoint(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPoints::InsertPoint(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPoints_InsertPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPoints_InsertPoint_s1(self, args);
    case 4:
      return PyvtkPoints_InsertPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertPoint");
  return NULL;
}



static PyObject *
PyvtkPoints_InsertPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdList *temp0 = NULL;
  vtkIdList *temp1 = NULL;
  vtkPoints *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->InsertPoints(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPoints::InsertPoints(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPoints_InsertPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkPoints *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->InsertPoints(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPoints::InsertPoints(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPoints_InsertPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPoints_InsertPoints_s1(self, args);
    case 4:
      return PyvtkPoints_InsertPoints_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertPoints");
  return NULL;
}



static PyObject *
PyvtkPoints_InsertNextPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextPoint(temp0) :
      op->vtkPoints::InsertNextPoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPoints_InsertNextPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

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
      op->InsertNextPoint(temp0, temp1, temp2) :
      op->vtkPoints::InsertNextPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPoints_InsertNextPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPoints_InsertNextPoint_s1(self, args);
    case 3:
      return PyvtkPoints_InsertNextPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextPoint");
  return NULL;
}



static PyObject *
PyvtkPoints_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPoints(temp0);
      }
    else
      {
      op->vtkPoints::SetNumberOfPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->Resize(temp0) :
      op->vtkPoints::Resize(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdList *temp0 = NULL;
  vtkPoints *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->GetPoints(temp0, temp1);
      }
    else
      {
      op->vtkPoints::GetPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeBounds();
      }
    else
      {
      op->vtkPoints::ComputeBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPoints::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkPoints_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

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
      op->vtkPoints::GetBounds(temp0);
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
PyvtkPoints_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPoints_GetBounds_s1(self, args);
    case 1:
      return PyvtkPoints_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}


static PyMethodDef PyvtkPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkPoints_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPoints_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPoints_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPoints\nC++: vtkPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPoints_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPoints\nC++: vtkPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Allocate", PyvtkPoints_Allocate, METH_VARARGS,
   (char*)"V.Allocate(int, int) -> int\nC++: virtual int Allocate(const vtkIdType sz,\n    const vtkIdType ext=1000)\n\nAllocate initial memory size. ext is no longer used.\n"},
  {(char*)"Initialize", PyvtkPoints_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nReturn object to instantiated state.\n"},
  {(char*)"SetData", PyvtkPoints_SetData, METH_VARARGS,
   (char*)"V.SetData(vtkDataArray)\nC++: virtual void SetData(vtkDataArray *)\n\nSet/Get the underlying data array. This function must be\nimplemented in a concrete subclass to check for consistency. (The\ntuple size must match the type of data. For example, 3-tuple data\narray can be assigned to a vector, normal, or points object, but\nnot a tensor object, which has a tuple dimension of 9. Scalars,\non the other hand, can have tuple dimension\n from 1-4, depending on the type of scalar.)\n"},
  {(char*)"GetData", PyvtkPoints_GetData, METH_VARARGS,
   (char*)"V.GetData() -> vtkDataArray\nC++: vtkDataArray *GetData()\n\nSet/Get the underlying data array. This function must be\nimplemented in a concrete subclass to check for consistency. (The\ntuple size must match the type of data. For example, 3-tuple data\narray can be assigned to a vector, normal, or points object, but\nnot a tensor object, which has a tuple dimension of 9. Scalars,\non the other hand, can have tuple dimension\n from 1-4, depending on the type of scalar.)\n"},
  {(char*)"GetDataType", PyvtkPoints_GetDataType, METH_VARARGS,
   (char*)"V.GetDataType() -> int\nC++: virtual int GetDataType()\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkSetGet.h.\n"},
  {(char*)"SetDataType", PyvtkPoints_SetDataType, METH_VARARGS,
   (char*)"V.SetDataType(int)\nC++: virtual void SetDataType(int dataType)\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToBit", PyvtkPoints_SetDataTypeToBit, METH_VARARGS,
   (char*)"V.SetDataTypeToBit()\nC++: void SetDataTypeToBit()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToChar", PyvtkPoints_SetDataTypeToChar, METH_VARARGS,
   (char*)"V.SetDataTypeToChar()\nC++: void SetDataTypeToChar()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToUnsignedChar", PyvtkPoints_SetDataTypeToUnsignedChar, METH_VARARGS,
   (char*)"V.SetDataTypeToUnsignedChar()\nC++: void SetDataTypeToUnsignedChar()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToShort", PyvtkPoints_SetDataTypeToShort, METH_VARARGS,
   (char*)"V.SetDataTypeToShort()\nC++: void SetDataTypeToShort()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToUnsignedShort", PyvtkPoints_SetDataTypeToUnsignedShort, METH_VARARGS,
   (char*)"V.SetDataTypeToUnsignedShort()\nC++: void SetDataTypeToUnsignedShort()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToInt", PyvtkPoints_SetDataTypeToInt, METH_VARARGS,
   (char*)"V.SetDataTypeToInt()\nC++: void SetDataTypeToInt()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToUnsignedInt", PyvtkPoints_SetDataTypeToUnsignedInt, METH_VARARGS,
   (char*)"V.SetDataTypeToUnsignedInt()\nC++: void SetDataTypeToUnsignedInt()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToLong", PyvtkPoints_SetDataTypeToLong, METH_VARARGS,
   (char*)"V.SetDataTypeToLong()\nC++: void SetDataTypeToLong()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToUnsignedLong", PyvtkPoints_SetDataTypeToUnsignedLong, METH_VARARGS,
   (char*)"V.SetDataTypeToUnsignedLong()\nC++: void SetDataTypeToUnsignedLong()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToFloat", PyvtkPoints_SetDataTypeToFloat, METH_VARARGS,
   (char*)"V.SetDataTypeToFloat()\nC++: void SetDataTypeToFloat()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToDouble", PyvtkPoints_SetDataTypeToDouble, METH_VARARGS,
   (char*)"V.SetDataTypeToDouble()\nC++: void SetDataTypeToDouble()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"GetVoidPointer", PyvtkPoints_GetVoidPointer, METH_VARARGS,
   (char*)"V.GetVoidPointer(int) ->\nC++: void *GetVoidPointer(const int id)\n\nReturn a void pointer. For image pipeline interface and other\nspecial pointer manipulation.\n"},
  {(char*)"Squeeze", PyvtkPoints_Squeeze, METH_VARARGS,
   (char*)"V.Squeeze()\nC++: virtual void Squeeze()\n\nReclaim any extra memory.\n"},
  {(char*)"Reset", PyvtkPoints_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: virtual void Reset()\n\nMake object look empty but do not delete memory.\n"},
  {(char*)"DeepCopy", PyvtkPoints_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkPoints)\nC++: virtual void DeepCopy(vtkPoints *ad)\n\nDifferent ways to copy data. Shallow copy does reference count\n(i.e., assigns pointers and updates reference count); deep copy\nruns through entire data array assigning values.\n"},
  {(char*)"ShallowCopy", PyvtkPoints_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkPoints)\nC++: virtual void ShallowCopy(vtkPoints *ad)\n\nDifferent ways to copy data. Shallow copy does reference count\n(i.e., assigns pointers and updates reference count); deep copy\nruns through entire data array assigning values.\n"},
  {(char*)"GetActualMemorySize", PyvtkPoints_GetActualMemorySize, METH_VARARGS,
   (char*)"V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the memory in kilobytes consumed by this attribute data.\nUsed to support streaming and reading/writing data. The value\nreturned is guaranteed to be greater than or equal to the memory\nrequired to actually represent the data represented by this\nobject. The information returned is valid only after the pipeline\nhas been updated.\n"},
  {(char*)"GetNumberOfPoints", PyvtkPoints_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nReturn number of points in array.\n"},
  {(char*)"GetPoint", PyvtkPoints_GetPoint, METH_VARARGS,
   (char*)"V.GetPoint(int) -> (float, float, float)\nC++: double *GetPoint(vtkIdType id)\nV.GetPoint(int, [float, float, float])\nC++: void GetPoint(vtkIdType id, double x[3])\n\nReturn a pointer to a double point x[3] for a specific id.\nWARNING: Just don't use this error-prone method, the returned\npointer and its values are only valid as long as another method\ninvocation is not performed. Prefer GetPoint() with the return\nvalue in argument.\n"},
  {(char*)"SetPoint", PyvtkPoints_SetPoint, METH_VARARGS,
   (char*)"V.SetPoint(int, (float, float, float))\nC++: void SetPoint(vtkIdType id, const double x[3])\nV.SetPoint(int, float, float, float)\nC++: void SetPoint(vtkIdType id, double x, double y, double z)\n\nInsert point into object. No range checking performed (fast!).\nMake sure you use SetNumberOfPoints() to allocate memory prior to\nusing SetPoint().\n"},
  {(char*)"InsertPoint", PyvtkPoints_InsertPoint, METH_VARARGS,
   (char*)"V.InsertPoint(int, (float, float, float))\nC++: void InsertPoint(vtkIdType id, const double x[3])\nV.InsertPoint(int, float, float, float)\nC++: void InsertPoint(vtkIdType id, double x, double y, double z)\n\nInsert point into object. Range checking performed and memory\nallocated as necessary.\n"},
  {(char*)"InsertPoints", PyvtkPoints_InsertPoints, METH_VARARGS,
   (char*)"V.InsertPoints(vtkIdList, vtkIdList, vtkPoints)\nC++: void InsertPoints(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkPoints *source)\nV.InsertPoints(int, int, int, vtkPoints)\nC++: void InsertPoints(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkPoints *source)\n\nCopy the points indexed in srcIds from the source array to the\ntuple locations indexed by dstIds in this array. Note that memory\nallocation is performed as necessary to hold the data.\n"},
  {(char*)"InsertNextPoint", PyvtkPoints_InsertNextPoint, METH_VARARGS,
   (char*)"V.InsertNextPoint((float, float, float)) -> int\nC++: vtkIdType InsertNextPoint(const double x[3])\nV.InsertNextPoint(float, float, float) -> int\nC++: vtkIdType InsertNextPoint(double x, double y, double z)\n\nInsert point into next available slot. Returns id of slot.\n"},
  {(char*)"SetNumberOfPoints", PyvtkPoints_SetNumberOfPoints, METH_VARARGS,
   (char*)"V.SetNumberOfPoints(int)\nC++: void SetNumberOfPoints(vtkIdType numPoints)\n\nSpecify the number of points for this object to hold. Does an\nallocation as well as setting the MaxId ivar. Used in conjunction\nwith SetPoint() method for fast insertion.\n"},
  {(char*)"Resize", PyvtkPoints_Resize, METH_VARARGS,
   (char*)"V.Resize(int) -> int\nC++: int Resize(vtkIdType numPoints)\n\nResize the internal array while conserving the data.  Returns 1\nif resizing succeeded and 0 otherwise.\n"},
  {(char*)"GetPoints", PyvtkPoints_GetPoints, METH_VARARGS,
   (char*)"V.GetPoints(vtkIdList, vtkPoints)\nC++: void GetPoints(vtkIdList *ptId, vtkPoints *fp)\n\nGiven a list of pt ids, return an array of points.\n"},
  {(char*)"ComputeBounds", PyvtkPoints_ComputeBounds, METH_VARARGS,
   (char*)"V.ComputeBounds()\nC++: virtual void ComputeBounds()\n\nDetermine (xmin,xmax, ymin,ymax, zmin,zmax) bounds of points.\n"},
  {(char*)"GetBounds", PyvtkPoints_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nReturn the bounds of the points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPoints_StaticNew()
{
  return vtkPoints::New();
}

PyObject *PyVTKClass_vtkPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPoints_StaticNew,
    PyvtkPoints_Methods,
    "vtkPoints", modulename,
    NULL, NULL,
    PyvtkPoints_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPoints_Doc()
{
  static const char *docstring[] = {
    "vtkPoints - represent and manipulate 3D points\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPoints represents 3D points. The data model for vtkPoints is an\narray of vx-vy-vz triplets accessible by (point or cell) id.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

