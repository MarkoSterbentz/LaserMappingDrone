// python wrapper for vtkImageImport
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkImageImport.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageImport(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageImportNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageImport_Doc();


static PyObject *
PyvtkImageImport_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageImport::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageImport::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageImport *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageImport::NewInstance());

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
PyvtkImageImport_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageImport *tempr = vtkImageImport::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_CopyImportVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyImportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyImportVoidPointer(temp0, temp1);
      }
    else
      {
      op->vtkImageImport::CopyImportVoidPointer(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_SetImportVoidPointer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImportVoidPointer(temp0);
      }
    else
      {
      op->vtkImageImport::SetImportVoidPointer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageImport_SetImportVoidPointer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  void  *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetImportVoidPointer(temp0, temp1);
      }
    else
      {
      op->vtkImageImport::SetImportVoidPointer(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageImport_SetImportVoidPointer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageImport_SetImportVoidPointer_s1(self, args);
    case 2:
      return PyvtkImageImport_SetImportVoidPointer_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetImportVoidPointer");
  return NULL;
}



static PyObject *
PyvtkImageImport_GetImportVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    void  *tempr = (ap.IsBound() ?
      op->GetImportVoidPointer() :
      op->vtkImageImport::GetImportVoidPointer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

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
      op->vtkImageImport::SetDataScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToDouble();
      }
    else
      {
      op->vtkImageImport::SetDataScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToFloat();
      }
    else
      {
      op->vtkImageImport::SetDataScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToInt();
      }
    else
      {
      op->vtkImageImport::SetDataScalarTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToShort();
      }
    else
      {
      op->vtkImageImport::SetDataScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkImageImport::SetDataScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkImageImport::SetDataScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_GetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataScalarType() :
      op->vtkImageImport::GetDataScalarType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_GetDataScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDataScalarTypeAsString() :
      op->vtkImageImport::GetDataScalarTypeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_SetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfScalarComponents(temp0);
      }
    else
      {
      op->vtkImageImport::SetNumberOfScalarComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_GetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarComponents() :
      op->vtkImageImport::GetNumberOfScalarComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

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
      op->vtkImageImport::SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

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
      op->vtkImageImport::SetDataExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkImageImport_SetDataExtent_s1(self, args);
    case 1:
      return PyvtkImageImport_SetDataExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataExtent");
  return NULL;
}



static PyObject *
PyvtkImageImport_GetDataExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetDataExtent() :
      op->vtkImageImport::GetDataExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataExtentToWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtentToWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataExtentToWholeExtent();
      }
    else
      {
      op->vtkImageImport::SetDataExtentToWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

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
      op->vtkImageImport::SetDataSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

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
      op->vtkImageImport::SetDataSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageImport_SetDataSpacing_s1(self, args);
    case 1:
      return PyvtkImageImport_SetDataSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSpacing");
  return NULL;
}



static PyObject *
PyvtkImageImport_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDataSpacing() :
      op->vtkImageImport::GetDataSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

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
      op->vtkImageImport::SetDataOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

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
      op->vtkImageImport::SetDataOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageImport_SetDataOrigin_s1(self, args);
    case 1:
      return PyvtkImageImport_SetDataOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataOrigin");
  return NULL;
}



static PyObject *
PyvtkImageImport_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDataOrigin() :
      op->vtkImageImport::GetDataOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

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
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageImport::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageImport_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0);
      }
    else
      {
      op->vtkImageImport::SetWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageImport_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkImageImport_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkImageImport_SetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return NULL;
}



static PyObject *
PyvtkImageImport_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkImageImport::GetWholeExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_SetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarArrayName(temp0);
      }
    else
      {
      op->vtkImageImport::SetScalarArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_GetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetScalarArrayName() :
      op->vtkImageImport::GetScalarArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_SetCallbackUserData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCallbackUserData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCallbackUserData(temp0);
      }
    else
      {
      op->vtkImageImport::SetCallbackUserData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_GetCallbackUserData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCallbackUserData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    void  *tempr = (ap.IsBound() ?
      op->GetCallbackUserData() :
      op->vtkImageImport::GetCallbackUserData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_InvokePipelineModifiedCallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokePipelineModifiedCallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->InvokePipelineModifiedCallbacks() :
      op->vtkImageImport::InvokePipelineModifiedCallbacks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_InvokeUpdateInformationCallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeUpdateInformationCallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InvokeUpdateInformationCallbacks();
      }
    else
      {
      op->vtkImageImport::InvokeUpdateInformationCallbacks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_InvokeExecuteInformationCallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeExecuteInformationCallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InvokeExecuteInformationCallbacks();
      }
    else
      {
      op->vtkImageImport::InvokeExecuteInformationCallbacks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_InvokeExecuteDataCallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeExecuteDataCallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InvokeExecuteDataCallbacks();
      }
    else
      {
      op->vtkImageImport::InvokeExecuteDataCallbacks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageImport_LegacyCheckWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegacyCheckWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LegacyCheckWholeExtent();
      }
    else
      {
      op->vtkImageImport::LegacyCheckWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageImport_Methods[] = {
  {(char*)"GetClassName", PyvtkImageImport_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageImport_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageImport_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageImport\nC++: vtkImageImport *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageImport_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageImport\nC++: vtkImageImport *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CopyImportVoidPointer", PyvtkImageImport_CopyImportVoidPointer, METH_VARARGS,
   (char*)"V.CopyImportVoidPointer(, int)\nC++: void CopyImportVoidPointer(void *ptr, vtkIdType size)\n\nImport data and make an internal copy of it.  If you do not want\nVTK to copy the data, then use SetImportVoidPointer instead (do\nnot use both).  Give the size of the data array in bytes.\n"},
  {(char*)"SetImportVoidPointer", PyvtkImageImport_SetImportVoidPointer, METH_VARARGS,
   (char*)"V.SetImportVoidPointer()\nC++: void SetImportVoidPointer(void *ptr)\nV.SetImportVoidPointer(, int)\nC++: void SetImportVoidPointer(void *ptr, int save)\n\nSet the pointer from which the image data is imported.  VTK will\nnot make its own copy of the data, it will access the data\ndirectly from the supplied array.  VTK will not attempt to delete\nthe data nor modify the data.\n"},
  {(char*)"GetImportVoidPointer", PyvtkImageImport_GetImportVoidPointer, METH_VARARGS,
   (char*)"V.GetImportVoidPointer() ->\nC++: void *GetImportVoidPointer()\n\nSet the pointer from which the image data is imported.  VTK will\nnot make its own copy of the data, it will access the data\ndirectly from the supplied array.  VTK will not attempt to delete\nthe data nor modify the data.\n"},
  {(char*)"SetDataScalarType", PyvtkImageImport_SetDataScalarType, METH_VARARGS,
   (char*)"V.SetDataScalarType(int)\nC++: void SetDataScalarType(int a)\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {(char*)"SetDataScalarTypeToDouble", PyvtkImageImport_SetDataScalarTypeToDouble, METH_VARARGS,
   (char*)"V.SetDataScalarTypeToDouble()\nC++: void SetDataScalarTypeToDouble()\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {(char*)"SetDataScalarTypeToFloat", PyvtkImageImport_SetDataScalarTypeToFloat, METH_VARARGS,
   (char*)"V.SetDataScalarTypeToFloat()\nC++: void SetDataScalarTypeToFloat()\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {(char*)"SetDataScalarTypeToInt", PyvtkImageImport_SetDataScalarTypeToInt, METH_VARARGS,
   (char*)"V.SetDataScalarTypeToInt()\nC++: void SetDataScalarTypeToInt()\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {(char*)"SetDataScalarTypeToShort", PyvtkImageImport_SetDataScalarTypeToShort, METH_VARARGS,
   (char*)"V.SetDataScalarTypeToShort()\nC++: void SetDataScalarTypeToShort()\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {(char*)"SetDataScalarTypeToUnsignedShort", PyvtkImageImport_SetDataScalarTypeToUnsignedShort, METH_VARARGS,
   (char*)"V.SetDataScalarTypeToUnsignedShort()\nC++: void SetDataScalarTypeToUnsignedShort()\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {(char*)"SetDataScalarTypeToUnsignedChar", PyvtkImageImport_SetDataScalarTypeToUnsignedChar, METH_VARARGS,
   (char*)"V.SetDataScalarTypeToUnsignedChar()\nC++: void SetDataScalarTypeToUnsignedChar()\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {(char*)"GetDataScalarType", PyvtkImageImport_GetDataScalarType, METH_VARARGS,
   (char*)"V.GetDataScalarType() -> int\nC++: int GetDataScalarType()\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {(char*)"GetDataScalarTypeAsString", PyvtkImageImport_GetDataScalarTypeAsString, METH_VARARGS,
   (char*)"V.GetDataScalarTypeAsString() -> string\nC++: const char *GetDataScalarTypeAsString()\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {(char*)"SetNumberOfScalarComponents", PyvtkImageImport_SetNumberOfScalarComponents, METH_VARARGS,
   (char*)"V.SetNumberOfScalarComponents(int)\nC++: void SetNumberOfScalarComponents(int a)\n\nSet/Get the number of scalar components, for RGB images this must\nbe 3. Default: 1.\n"},
  {(char*)"GetNumberOfScalarComponents", PyvtkImageImport_GetNumberOfScalarComponents, METH_VARARGS,
   (char*)"V.GetNumberOfScalarComponents() -> int\nC++: int GetNumberOfScalarComponents()\n\nSet/Get the number of scalar components, for RGB images this must\nbe 3. Default: 1.\n"},
  {(char*)"SetDataExtent", PyvtkImageImport_SetDataExtent, METH_VARARGS,
   (char*)"V.SetDataExtent(int, int, int, int, int, int)\nC++: void SetDataExtent(int, int, int, int, int, int)\nV.SetDataExtent((int, int, int, int, int, int))\nC++: void SetDataExtent(int a[6])\n\n"},
  {(char*)"GetDataExtent", PyvtkImageImport_GetDataExtent, METH_VARARGS,
   (char*)"V.GetDataExtent() -> (int, int, int, int, int, int)\nC++: int *GetDataExtent()\n\n"},
  {(char*)"SetDataExtentToWholeExtent", PyvtkImageImport_SetDataExtentToWholeExtent, METH_VARARGS,
   (char*)"V.SetDataExtentToWholeExtent()\nC++: void SetDataExtentToWholeExtent()\n\nGet/Set the extent of the data buffer.  The dimensions of your\ndata must be equal to (extent[1]-extent[0]+1) *\n(extent[3]-extent[2]+1) * (extent[5]-DataExtent[4]+1).  For\nexample, for a 2D image use (0,width-1, 0,height-1, 0,0).\n"},
  {(char*)"SetDataSpacing", PyvtkImageImport_SetDataSpacing, METH_VARARGS,
   (char*)"V.SetDataSpacing(float, float, float)\nC++: void SetDataSpacing(double, double, double)\nV.SetDataSpacing((float, float, float))\nC++: void SetDataSpacing(double a[3])\n\n"},
  {(char*)"GetDataSpacing", PyvtkImageImport_GetDataSpacing, METH_VARARGS,
   (char*)"V.GetDataSpacing() -> (float, float, float)\nC++: double *GetDataSpacing()\n\n"},
  {(char*)"SetDataOrigin", PyvtkImageImport_SetDataOrigin, METH_VARARGS,
   (char*)"V.SetDataOrigin(float, float, float)\nC++: void SetDataOrigin(double, double, double)\nV.SetDataOrigin((float, float, float))\nC++: void SetDataOrigin(double a[3])\n\n"},
  {(char*)"GetDataOrigin", PyvtkImageImport_GetDataOrigin, METH_VARARGS,
   (char*)"V.GetDataOrigin() -> (float, float, float)\nC++: double *GetDataOrigin()\n\n"},
  {(char*)"SetWholeExtent", PyvtkImageImport_SetWholeExtent, METH_VARARGS,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {(char*)"GetWholeExtent", PyvtkImageImport_GetWholeExtent, METH_VARARGS,
   (char*)"V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {(char*)"SetScalarArrayName", PyvtkImageImport_SetScalarArrayName, METH_VARARGS,
   (char*)"V.SetScalarArrayName(string)\nC++: void SetScalarArrayName(char *)\n\nSet/get the scalar array name for this data set. Initial value is\n\"scalars\".\n"},
  {(char*)"GetScalarArrayName", PyvtkImageImport_GetScalarArrayName, METH_VARARGS,
   (char*)"V.GetScalarArrayName() -> string\nC++: char *GetScalarArrayName()\n\nSet/get the scalar array name for this data set. Initial value is\n\"scalars\".\n"},
  {(char*)"SetCallbackUserData", PyvtkImageImport_SetCallbackUserData, METH_VARARGS,
   (char*)"V.SetCallbackUserData()\nC++: void SetCallbackUserData(void *a)\n\nSet/Get the user data which will be passed as the first argument\nto all of the third-party pipeline callbacks.\n"},
  {(char*)"GetCallbackUserData", PyvtkImageImport_GetCallbackUserData, METH_VARARGS,
   (char*)"V.GetCallbackUserData() ->\nC++: void *GetCallbackUserData()\n\nSet/Get the user data which will be passed as the first argument\nto all of the third-party pipeline callbacks.\n"},
  {(char*)"InvokePipelineModifiedCallbacks", PyvtkImageImport_InvokePipelineModifiedCallbacks, METH_VARARGS,
   (char*)"V.InvokePipelineModifiedCallbacks() -> int\nC++: int InvokePipelineModifiedCallbacks()\n\nInvoke the appropriate callbacks\n"},
  {(char*)"InvokeUpdateInformationCallbacks", PyvtkImageImport_InvokeUpdateInformationCallbacks, METH_VARARGS,
   (char*)"V.InvokeUpdateInformationCallbacks()\nC++: void InvokeUpdateInformationCallbacks()\n\nInvoke the appropriate callbacks\n"},
  {(char*)"InvokeExecuteInformationCallbacks", PyvtkImageImport_InvokeExecuteInformationCallbacks, METH_VARARGS,
   (char*)"V.InvokeExecuteInformationCallbacks()\nC++: void InvokeExecuteInformationCallbacks()\n\nInvoke the appropriate callbacks\n"},
  {(char*)"InvokeExecuteDataCallbacks", PyvtkImageImport_InvokeExecuteDataCallbacks, METH_VARARGS,
   (char*)"V.InvokeExecuteDataCallbacks()\nC++: void InvokeExecuteDataCallbacks()\n\nInvoke the appropriate callbacks\n"},
  {(char*)"LegacyCheckWholeExtent", PyvtkImageImport_LegacyCheckWholeExtent, METH_VARARGS,
   (char*)"V.LegacyCheckWholeExtent()\nC++: void LegacyCheckWholeExtent()\n\nInvoke the appropriate callbacks\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageImport_StaticNew()
{
  return vtkImageImport::New();
}

PyObject *PyVTKClass_vtkImageImportNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageImport_StaticNew,
    PyvtkImageImport_Methods,
    "vtkImageImport", modulename,
    NULL, NULL,
    PyvtkImageImport_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageImport_Doc()
{
  static const char *docstring[] = {
    "vtkImageImport - Import data from a C array.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageImport provides methods needed to import image data from a\nsource independent of VTK, such as a simple C array or a third-party\npipeline. Note that the VTK convention is for the image voxel index\n(0,0,0) to be the lower-left corner of the image, while most 2D image\nformats use the upper-left corner.  You can use vtkImageFlip to\ncorrect the orientation after the image has been loaded into V",
    "TK.\nNote that is also possible to import the raw data from a Python\nstring instead of from a C array. The array applies on scalar point\ndata only, not on cell data.\n\nSee Also:\n\nvtkImageExport\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageImport(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageImportNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageImport", o) != 0)
    {
    Py_DECREF(o);
    }

}

