// python wrapper for vtkImageGridSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageGridSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageGridSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageGridSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageGridSource_Doc();


static PyObject *
PyvtkImageGridSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageGridSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageGridSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageGridSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageGridSource::NewInstance());

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
PyvtkImageGridSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageGridSource *tempr = vtkImageGridSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetGridSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetGridSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageGridSource::SetGridSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetGridSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGridSpacing(temp0);
      }
    else
      {
      op->vtkImageGridSource::SetGridSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetGridSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageGridSource_SetGridSpacing_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetGridSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGridSpacing");
  return NULL;
}



static PyObject *
PyvtkImageGridSource_GetGridSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetGridSpacing() :
      op->vtkImageGridSource::GetGridSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetGridOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetGridOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageGridSource::SetGridOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetGridOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGridOrigin(temp0);
      }
    else
      {
      op->vtkImageGridSource::SetGridOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetGridOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageGridSource_SetGridOrigin_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetGridOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGridOrigin");
  return NULL;
}



static PyObject *
PyvtkImageGridSource_GetGridOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetGridOrigin() :
      op->vtkImageGridSource::GetGridOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetLineValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineValue(temp0);
      }
    else
      {
      op->vtkImageGridSource::SetLineValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetLineValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLineValue() :
      op->vtkImageGridSource::GetLineValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillValue(temp0);
      }
    else
      {
      op->vtkImageGridSource::SetFillValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFillValue() :
      op->vtkImageGridSource::GetFillValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarType(temp0);
      }
    else
      {
      op->vtkImageGridSource::SetDataScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToDouble();
      }
    else
      {
      op->vtkImageGridSource::SetDataScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToInt();
      }
    else
      {
      op->vtkImageGridSource::SetDataScalarTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToShort();
      }
    else
      {
      op->vtkImageGridSource::SetDataScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkImageGridSource::SetDataScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkImageGridSource::SetDataScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataScalarType() :
      op->vtkImageGridSource::GetDataScalarType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetDataScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDataScalarTypeAsString() :
      op->vtkImageGridSource::GetDataScalarTypeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageGridSource::SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDataExtent(temp0);
      }
    else
      {
      op->vtkImageGridSource::SetDataExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkImageGridSource_SetDataExtent_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetDataExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataExtent");
  return NULL;
}



static PyObject *
PyvtkImageGridSource_GetDataExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetDataExtent() :
      op->vtkImageGridSource::GetDataExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetDataSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageGridSource::SetDataSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDataSpacing(temp0);
      }
    else
      {
      op->vtkImageGridSource::SetDataSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageGridSource_SetDataSpacing_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetDataSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSpacing");
  return NULL;
}



static PyObject *
PyvtkImageGridSource_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDataSpacing() :
      op->vtkImageGridSource::GetDataSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetDataOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageGridSource::SetDataOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDataOrigin(temp0);
      }
    else
      {
      op->vtkImageGridSource::SetDataOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageGridSource_SetDataOrigin_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetDataOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataOrigin");
  return NULL;
}



static PyObject *
PyvtkImageGridSource_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDataOrigin() :
      op->vtkImageGridSource::GetDataOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageGridSource_Methods[] = {
  {(char*)"GetClassName", PyvtkImageGridSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageGridSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageGridSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageGridSource\nC++: vtkImageGridSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageGridSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageGridSource\nC++: vtkImageGridSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGridSpacing", PyvtkImageGridSource_SetGridSpacing, METH_VARARGS,
   (char*)"V.SetGridSpacing(int, int, int)\nC++: void SetGridSpacing(int, int, int)\nV.SetGridSpacing((int, int, int))\nC++: void SetGridSpacing(int a[3])\n\n"},
  {(char*)"GetGridSpacing", PyvtkImageGridSource_GetGridSpacing, METH_VARARGS,
   (char*)"V.GetGridSpacing() -> (int, int, int)\nC++: int *GetGridSpacing()\n\n"},
  {(char*)"SetGridOrigin", PyvtkImageGridSource_SetGridOrigin, METH_VARARGS,
   (char*)"V.SetGridOrigin(int, int, int)\nC++: void SetGridOrigin(int, int, int)\nV.SetGridOrigin((int, int, int))\nC++: void SetGridOrigin(int a[3])\n\n"},
  {(char*)"GetGridOrigin", PyvtkImageGridSource_GetGridOrigin, METH_VARARGS,
   (char*)"V.GetGridOrigin() -> (int, int, int)\nC++: int *GetGridOrigin()\n\n"},
  {(char*)"SetLineValue", PyvtkImageGridSource_SetLineValue, METH_VARARGS,
   (char*)"V.SetLineValue(float)\nC++: void SetLineValue(double a)\n\nSet the grey level of the lines. Default 1.0.\n"},
  {(char*)"GetLineValue", PyvtkImageGridSource_GetLineValue, METH_VARARGS,
   (char*)"V.GetLineValue() -> float\nC++: double GetLineValue()\n\nSet the grey level of the lines. Default 1.0.\n"},
  {(char*)"SetFillValue", PyvtkImageGridSource_SetFillValue, METH_VARARGS,
   (char*)"V.SetFillValue(float)\nC++: void SetFillValue(double a)\n\nSet the grey level of the fill. Default 0.0.\n"},
  {(char*)"GetFillValue", PyvtkImageGridSource_GetFillValue, METH_VARARGS,
   (char*)"V.GetFillValue() -> float\nC++: double GetFillValue()\n\nSet the grey level of the fill. Default 0.0.\n"},
  {(char*)"SetDataScalarType", PyvtkImageGridSource_SetDataScalarType, METH_VARARGS,
   (char*)"V.SetDataScalarType(int)\nC++: void SetDataScalarType(int a)\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {(char*)"SetDataScalarTypeToDouble", PyvtkImageGridSource_SetDataScalarTypeToDouble, METH_VARARGS,
   (char*)"V.SetDataScalarTypeToDouble()\nC++: void SetDataScalarTypeToDouble()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {(char*)"SetDataScalarTypeToInt", PyvtkImageGridSource_SetDataScalarTypeToInt, METH_VARARGS,
   (char*)"V.SetDataScalarTypeToInt()\nC++: void SetDataScalarTypeToInt()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {(char*)"SetDataScalarTypeToShort", PyvtkImageGridSource_SetDataScalarTypeToShort, METH_VARARGS,
   (char*)"V.SetDataScalarTypeToShort()\nC++: void SetDataScalarTypeToShort()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {(char*)"SetDataScalarTypeToUnsignedShort", PyvtkImageGridSource_SetDataScalarTypeToUnsignedShort, METH_VARARGS,
   (char*)"V.SetDataScalarTypeToUnsignedShort()\nC++: void SetDataScalarTypeToUnsignedShort()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {(char*)"SetDataScalarTypeToUnsignedChar", PyvtkImageGridSource_SetDataScalarTypeToUnsignedChar, METH_VARARGS,
   (char*)"V.SetDataScalarTypeToUnsignedChar()\nC++: void SetDataScalarTypeToUnsignedChar()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {(char*)"GetDataScalarType", PyvtkImageGridSource_GetDataScalarType, METH_VARARGS,
   (char*)"V.GetDataScalarType() -> int\nC++: int GetDataScalarType()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {(char*)"GetDataScalarTypeAsString", PyvtkImageGridSource_GetDataScalarTypeAsString, METH_VARARGS,
   (char*)"V.GetDataScalarTypeAsString() -> string\nC++: const char *GetDataScalarTypeAsString()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {(char*)"SetDataExtent", PyvtkImageGridSource_SetDataExtent, METH_VARARGS,
   (char*)"V.SetDataExtent(int, int, int, int, int, int)\nC++: void SetDataExtent(int, int, int, int, int, int)\nV.SetDataExtent((int, int, int, int, int, int))\nC++: void SetDataExtent(int a[6])\n\n"},
  {(char*)"GetDataExtent", PyvtkImageGridSource_GetDataExtent, METH_VARARGS,
   (char*)"V.GetDataExtent() -> (int, int, int, int, int, int)\nC++: int *GetDataExtent()\n\n"},
  {(char*)"SetDataSpacing", PyvtkImageGridSource_SetDataSpacing, METH_VARARGS,
   (char*)"V.SetDataSpacing(float, float, float)\nC++: void SetDataSpacing(double, double, double)\nV.SetDataSpacing((float, float, float))\nC++: void SetDataSpacing(double a[3])\n\n"},
  {(char*)"GetDataSpacing", PyvtkImageGridSource_GetDataSpacing, METH_VARARGS,
   (char*)"V.GetDataSpacing() -> (float, float, float)\nC++: double *GetDataSpacing()\n\n"},
  {(char*)"SetDataOrigin", PyvtkImageGridSource_SetDataOrigin, METH_VARARGS,
   (char*)"V.SetDataOrigin(float, float, float)\nC++: void SetDataOrigin(double, double, double)\nV.SetDataOrigin((float, float, float))\nC++: void SetDataOrigin(double a[3])\n\n"},
  {(char*)"GetDataOrigin", PyvtkImageGridSource_GetDataOrigin, METH_VARARGS,
   (char*)"V.GetDataOrigin() -> (float, float, float)\nC++: double *GetDataOrigin()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageGridSource_StaticNew()
{
  return vtkImageGridSource::New();
}

PyObject *PyVTKClass_vtkImageGridSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageGridSource_StaticNew,
    PyvtkImageGridSource_Methods,
    "vtkImageGridSource", modulename,
    NULL, NULL,
    PyvtkImageGridSource_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageGridSource_Doc()
{
  static const char *docstring[] = {
    "vtkImageGridSource - Create an image of a grid.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageGridSource produces an image of a grid.  The default output\ntype is double.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageGridSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageGridSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageGridSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

