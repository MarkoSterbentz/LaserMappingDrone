// python wrapper for vtkStringToNumeric
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkStringToNumeric.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStringToNumeric(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStringToNumericNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkStringToNumeric_Doc();


static PyObject *
PyvtkStringToNumeric_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStringToNumeric::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStringToNumeric::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringToNumeric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStringToNumeric::NewInstance());

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
PyvtkStringToNumeric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStringToNumeric *tempr = vtkStringToNumeric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetForceDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForceDouble(temp0);
      }
    else
      {
      op->vtkStringToNumeric::SetForceDouble(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetForceDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetForceDouble() :
      op->vtkStringToNumeric::GetForceDouble());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ForceDoubleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceDoubleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceDoubleOn();
      }
    else
      {
      op->vtkStringToNumeric::ForceDoubleOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ForceDoubleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceDoubleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceDoubleOff();
      }
    else
      {
      op->vtkStringToNumeric::ForceDoubleOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetDefaultIntegerValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultIntegerValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultIntegerValue(temp0);
      }
    else
      {
      op->vtkStringToNumeric::SetDefaultIntegerValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetDefaultIntegerValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultIntegerValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDefaultIntegerValue() :
      op->vtkStringToNumeric::GetDefaultIntegerValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetDefaultDoubleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultDoubleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultDoubleValue(temp0);
      }
    else
      {
      op->vtkStringToNumeric::SetDefaultDoubleValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetDefaultDoubleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultDoubleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDefaultDoubleValue() :
      op->vtkStringToNumeric::GetDefaultDoubleValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetTrimWhitespacePriorToNumericConversion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrimWhitespacePriorToNumericConversion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTrimWhitespacePriorToNumericConversion(temp0);
      }
    else
      {
      op->vtkStringToNumeric::SetTrimWhitespacePriorToNumericConversion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetTrimWhitespacePriorToNumericConversion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrimWhitespacePriorToNumericConversion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetTrimWhitespacePriorToNumericConversion() :
      op->vtkStringToNumeric::GetTrimWhitespacePriorToNumericConversion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_TrimWhitespacePriorToNumericConversionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TrimWhitespacePriorToNumericConversionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TrimWhitespacePriorToNumericConversionOn();
      }
    else
      {
      op->vtkStringToNumeric::TrimWhitespacePriorToNumericConversionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_TrimWhitespacePriorToNumericConversionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TrimWhitespacePriorToNumericConversionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TrimWhitespacePriorToNumericConversionOff();
      }
    else
      {
      op->vtkStringToNumeric::TrimWhitespacePriorToNumericConversionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertFieldData(temp0);
      }
    else
      {
      op->vtkStringToNumeric::SetConvertFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetConvertFieldData() :
      op->vtkStringToNumeric::GetConvertFieldData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertFieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertFieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertFieldDataOn();
      }
    else
      {
      op->vtkStringToNumeric::ConvertFieldDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertFieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertFieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertFieldDataOff();
      }
    else
      {
      op->vtkStringToNumeric::ConvertFieldDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertPointData(temp0);
      }
    else
      {
      op->vtkStringToNumeric::SetConvertPointData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetConvertPointData() :
      op->vtkStringToNumeric::GetConvertPointData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertPointDataOn();
      }
    else
      {
      op->vtkStringToNumeric::ConvertPointDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertPointDataOff();
      }
    else
      {
      op->vtkStringToNumeric::ConvertPointDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertCellData(temp0);
      }
    else
      {
      op->vtkStringToNumeric::SetConvertCellData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetConvertCellData() :
      op->vtkStringToNumeric::GetConvertCellData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertCellDataOn();
      }
    else
      {
      op->vtkStringToNumeric::ConvertCellDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertCellDataOff();
      }
    else
      {
      op->vtkStringToNumeric::ConvertCellDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertVertexData(temp0);
      }
    else
      {
      op->vtkStringToNumeric::SetConvertVertexData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetConvertVertexData() :
      op->vtkStringToNumeric::GetConvertVertexData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertVertexDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertVertexDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertVertexDataOn();
      }
    else
      {
      op->vtkStringToNumeric::ConvertVertexDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertVertexDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertVertexDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertVertexDataOff();
      }
    else
      {
      op->vtkStringToNumeric::ConvertVertexDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertEdgeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertEdgeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertEdgeData(temp0);
      }
    else
      {
      op->vtkStringToNumeric::SetConvertEdgeData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertEdgeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertEdgeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetConvertEdgeData() :
      op->vtkStringToNumeric::GetConvertEdgeData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertEdgeDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertEdgeDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertEdgeDataOn();
      }
    else
      {
      op->vtkStringToNumeric::ConvertEdgeDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertEdgeDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertEdgeDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertEdgeDataOff();
      }
    else
      {
      op->vtkStringToNumeric::ConvertEdgeDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_SetConvertRowData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertRowData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertRowData(temp0);
      }
    else
      {
      op->vtkStringToNumeric::SetConvertRowData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_GetConvertRowData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertRowData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetConvertRowData() :
      op->vtkStringToNumeric::GetConvertRowData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertRowDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertRowDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertRowDataOn();
      }
    else
      {
      op->vtkStringToNumeric::ConvertRowDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToNumeric_ConvertRowDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertRowDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToNumeric *op = static_cast<vtkStringToNumeric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertRowDataOff();
      }
    else
      {
      op->vtkStringToNumeric::ConvertRowDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStringToNumeric_Methods[] = {
  {(char*)"GetClassName", PyvtkStringToNumeric_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStringToNumeric_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStringToNumeric_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStringToNumeric\nC++: vtkStringToNumeric *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStringToNumeric_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStringToNumeric\nC++: vtkStringToNumeric *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetForceDouble", PyvtkStringToNumeric_SetForceDouble, METH_VARARGS,
   (char*)"V.SetForceDouble(bool)\nC++: void SetForceDouble(bool a)\n\nConvert all numeric columns to vtkDoubleArray, even if they\ncontain only integer values. Default is off.\n"},
  {(char*)"GetForceDouble", PyvtkStringToNumeric_GetForceDouble, METH_VARARGS,
   (char*)"V.GetForceDouble() -> bool\nC++: bool GetForceDouble()\n\nConvert all numeric columns to vtkDoubleArray, even if they\ncontain only integer values. Default is off.\n"},
  {(char*)"ForceDoubleOn", PyvtkStringToNumeric_ForceDoubleOn, METH_VARARGS,
   (char*)"V.ForceDoubleOn()\nC++: void ForceDoubleOn()\n\nConvert all numeric columns to vtkDoubleArray, even if they\ncontain only integer values. Default is off.\n"},
  {(char*)"ForceDoubleOff", PyvtkStringToNumeric_ForceDoubleOff, METH_VARARGS,
   (char*)"V.ForceDoubleOff()\nC++: void ForceDoubleOff()\n\nConvert all numeric columns to vtkDoubleArray, even if they\ncontain only integer values. Default is off.\n"},
  {(char*)"SetDefaultIntegerValue", PyvtkStringToNumeric_SetDefaultIntegerValue, METH_VARARGS,
   (char*)"V.SetDefaultIntegerValue(int)\nC++: void SetDefaultIntegerValue(int a)\n\nSet the default integer value assigned to arrays.  Default is 0.\n"},
  {(char*)"GetDefaultIntegerValue", PyvtkStringToNumeric_GetDefaultIntegerValue, METH_VARARGS,
   (char*)"V.GetDefaultIntegerValue() -> int\nC++: int GetDefaultIntegerValue()\n\nSet the default integer value assigned to arrays.  Default is 0.\n"},
  {(char*)"SetDefaultDoubleValue", PyvtkStringToNumeric_SetDefaultDoubleValue, METH_VARARGS,
   (char*)"V.SetDefaultDoubleValue(float)\nC++: void SetDefaultDoubleValue(double a)\n\nSet the default double value assigned to arrays.  Default is 0.0\n"},
  {(char*)"GetDefaultDoubleValue", PyvtkStringToNumeric_GetDefaultDoubleValue, METH_VARARGS,
   (char*)"V.GetDefaultDoubleValue() -> float\nC++: double GetDefaultDoubleValue()\n\nSet the default double value assigned to arrays.  Default is 0.0\n"},
  {(char*)"SetTrimWhitespacePriorToNumericConversion", PyvtkStringToNumeric_SetTrimWhitespacePriorToNumericConversion, METH_VARARGS,
   (char*)"V.SetTrimWhitespacePriorToNumericConversion(bool)\nC++: void SetTrimWhitespacePriorToNumericConversion(bool a)\n\nWhether to trim whitespace from strings prior to conversion to a\nnumeric. Default is false to preserve backward compatibility.\n\nvtkVariant handles whitespace inconsistently, so trim it before\nwe try to convert it.  For example:\n\nvtkVariant(\"  2.0\").ToDouble() == 2.0 <-- leading whitespace is\nnot a problem vtkVariant(\"  2.0  \").ToDouble() == NaN <--\ntrailing whitespace is a problem vtkVariant(\"  infinity \n\").ToDouble() == NaN <-- any whitespace is a problem\n\nIn these cases, trimming the whitespace gives us the result we\nexpect: 2.0 and INF respectively.\n"},
  {(char*)"GetTrimWhitespacePriorToNumericConversion", PyvtkStringToNumeric_GetTrimWhitespacePriorToNumericConversion, METH_VARARGS,
   (char*)"V.GetTrimWhitespacePriorToNumericConversion() -> bool\nC++: bool GetTrimWhitespacePriorToNumericConversion()\n\nWhether to trim whitespace from strings prior to conversion to a\nnumeric. Default is false to preserve backward compatibility.\n\nvtkVariant handles whitespace inconsistently, so trim it before\nwe try to convert it.  For example:\n\nvtkVariant(\"  2.0\").ToDouble() == 2.0 <-- leading whitespace is\nnot a problem vtkVariant(\"  2.0  \").ToDouble() == NaN <--\ntrailing whitespace is a problem vtkVariant(\"  infinity \n\").ToDouble() == NaN <-- any whitespace is a problem\n\nIn these cases, trimming the whitespace gives us the result we\nexpect: 2.0 and INF respectively.\n"},
  {(char*)"TrimWhitespacePriorToNumericConversionOn", PyvtkStringToNumeric_TrimWhitespacePriorToNumericConversionOn, METH_VARARGS,
   (char*)"V.TrimWhitespacePriorToNumericConversionOn()\nC++: void TrimWhitespacePriorToNumericConversionOn()\n\nWhether to trim whitespace from strings prior to conversion to a\nnumeric. Default is false to preserve backward compatibility.\n\nvtkVariant handles whitespace inconsistently, so trim it before\nwe try to convert it.  For example:\n\nvtkVariant(\"  2.0\").ToDouble() == 2.0 <-- leading whitespace is\nnot a problem vtkVariant(\"  2.0  \").ToDouble() == NaN <--\ntrailing whitespace is a problem vtkVariant(\"  infinity \n\").ToDouble() == NaN <-- any whitespace is a problem\n\nIn these cases, trimming the whitespace gives us the result we\nexpect: 2.0 and INF respectively.\n"},
  {(char*)"TrimWhitespacePriorToNumericConversionOff", PyvtkStringToNumeric_TrimWhitespacePriorToNumericConversionOff, METH_VARARGS,
   (char*)"V.TrimWhitespacePriorToNumericConversionOff()\nC++: void TrimWhitespacePriorToNumericConversionOff()\n\nWhether to trim whitespace from strings prior to conversion to a\nnumeric. Default is false to preserve backward compatibility.\n\nvtkVariant handles whitespace inconsistently, so trim it before\nwe try to convert it.  For example:\n\nvtkVariant(\"  2.0\").ToDouble() == 2.0 <-- leading whitespace is\nnot a problem vtkVariant(\"  2.0  \").ToDouble() == NaN <--\ntrailing whitespace is a problem vtkVariant(\"  infinity \n\").ToDouble() == NaN <-- any whitespace is a problem\n\nIn these cases, trimming the whitespace gives us the result we\nexpect: 2.0 and INF respectively.\n"},
  {(char*)"SetConvertFieldData", PyvtkStringToNumeric_SetConvertFieldData, METH_VARARGS,
   (char*)"V.SetConvertFieldData(bool)\nC++: void SetConvertFieldData(bool a)\n\nWhether to detect and convert field data arrays.  Default is on.\n"},
  {(char*)"GetConvertFieldData", PyvtkStringToNumeric_GetConvertFieldData, METH_VARARGS,
   (char*)"V.GetConvertFieldData() -> bool\nC++: bool GetConvertFieldData()\n\nWhether to detect and convert field data arrays.  Default is on.\n"},
  {(char*)"ConvertFieldDataOn", PyvtkStringToNumeric_ConvertFieldDataOn, METH_VARARGS,
   (char*)"V.ConvertFieldDataOn()\nC++: void ConvertFieldDataOn()\n\nWhether to detect and convert field data arrays.  Default is on.\n"},
  {(char*)"ConvertFieldDataOff", PyvtkStringToNumeric_ConvertFieldDataOff, METH_VARARGS,
   (char*)"V.ConvertFieldDataOff()\nC++: void ConvertFieldDataOff()\n\nWhether to detect and convert field data arrays.  Default is on.\n"},
  {(char*)"SetConvertPointData", PyvtkStringToNumeric_SetConvertPointData, METH_VARARGS,
   (char*)"V.SetConvertPointData(bool)\nC++: void SetConvertPointData(bool a)\n\nWhether to detect and convert cell data arrays.  Default is on.\n"},
  {(char*)"GetConvertPointData", PyvtkStringToNumeric_GetConvertPointData, METH_VARARGS,
   (char*)"V.GetConvertPointData() -> bool\nC++: bool GetConvertPointData()\n\nWhether to detect and convert cell data arrays.  Default is on.\n"},
  {(char*)"ConvertPointDataOn", PyvtkStringToNumeric_ConvertPointDataOn, METH_VARARGS,
   (char*)"V.ConvertPointDataOn()\nC++: void ConvertPointDataOn()\n\nWhether to detect and convert cell data arrays.  Default is on.\n"},
  {(char*)"ConvertPointDataOff", PyvtkStringToNumeric_ConvertPointDataOff, METH_VARARGS,
   (char*)"V.ConvertPointDataOff()\nC++: void ConvertPointDataOff()\n\nWhether to detect and convert cell data arrays.  Default is on.\n"},
  {(char*)"SetConvertCellData", PyvtkStringToNumeric_SetConvertCellData, METH_VARARGS,
   (char*)"V.SetConvertCellData(bool)\nC++: void SetConvertCellData(bool a)\n\nWhether to detect and convert point data arrays.  Default is on.\n"},
  {(char*)"GetConvertCellData", PyvtkStringToNumeric_GetConvertCellData, METH_VARARGS,
   (char*)"V.GetConvertCellData() -> bool\nC++: bool GetConvertCellData()\n\nWhether to detect and convert point data arrays.  Default is on.\n"},
  {(char*)"ConvertCellDataOn", PyvtkStringToNumeric_ConvertCellDataOn, METH_VARARGS,
   (char*)"V.ConvertCellDataOn()\nC++: void ConvertCellDataOn()\n\nWhether to detect and convert point data arrays.  Default is on.\n"},
  {(char*)"ConvertCellDataOff", PyvtkStringToNumeric_ConvertCellDataOff, METH_VARARGS,
   (char*)"V.ConvertCellDataOff()\nC++: void ConvertCellDataOff()\n\nWhether to detect and convert point data arrays.  Default is on.\n"},
  {(char*)"SetConvertVertexData", PyvtkStringToNumeric_SetConvertVertexData, METH_VARARGS,
   (char*)"V.SetConvertVertexData(bool)\nC++: virtual void SetConvertVertexData(bool b)\n\nWhether to detect and convert vertex data arrays.  Default is on.\n"},
  {(char*)"GetConvertVertexData", PyvtkStringToNumeric_GetConvertVertexData, METH_VARARGS,
   (char*)"V.GetConvertVertexData() -> bool\nC++: virtual bool GetConvertVertexData()\n\nWhether to detect and convert vertex data arrays.  Default is on.\n"},
  {(char*)"ConvertVertexDataOn", PyvtkStringToNumeric_ConvertVertexDataOn, METH_VARARGS,
   (char*)"V.ConvertVertexDataOn()\nC++: void ConvertVertexDataOn()\n\nWhether to detect and convert vertex data arrays.  Default is on.\n"},
  {(char*)"ConvertVertexDataOff", PyvtkStringToNumeric_ConvertVertexDataOff, METH_VARARGS,
   (char*)"V.ConvertVertexDataOff()\nC++: void ConvertVertexDataOff()\n\nWhether to detect and convert vertex data arrays.  Default is on.\n"},
  {(char*)"SetConvertEdgeData", PyvtkStringToNumeric_SetConvertEdgeData, METH_VARARGS,
   (char*)"V.SetConvertEdgeData(bool)\nC++: virtual void SetConvertEdgeData(bool b)\n\nWhether to detect and convert edge data arrays.  Default is on.\n"},
  {(char*)"GetConvertEdgeData", PyvtkStringToNumeric_GetConvertEdgeData, METH_VARARGS,
   (char*)"V.GetConvertEdgeData() -> bool\nC++: virtual bool GetConvertEdgeData()\n\nWhether to detect and convert edge data arrays.  Default is on.\n"},
  {(char*)"ConvertEdgeDataOn", PyvtkStringToNumeric_ConvertEdgeDataOn, METH_VARARGS,
   (char*)"V.ConvertEdgeDataOn()\nC++: void ConvertEdgeDataOn()\n\nWhether to detect and convert edge data arrays.  Default is on.\n"},
  {(char*)"ConvertEdgeDataOff", PyvtkStringToNumeric_ConvertEdgeDataOff, METH_VARARGS,
   (char*)"V.ConvertEdgeDataOff()\nC++: void ConvertEdgeDataOff()\n\nWhether to detect and convert edge data arrays.  Default is on.\n"},
  {(char*)"SetConvertRowData", PyvtkStringToNumeric_SetConvertRowData, METH_VARARGS,
   (char*)"V.SetConvertRowData(bool)\nC++: virtual void SetConvertRowData(bool b)\n\nWhether to detect and convert row data arrays.  Default is on.\n"},
  {(char*)"GetConvertRowData", PyvtkStringToNumeric_GetConvertRowData, METH_VARARGS,
   (char*)"V.GetConvertRowData() -> bool\nC++: virtual bool GetConvertRowData()\n\nWhether to detect and convert row data arrays.  Default is on.\n"},
  {(char*)"ConvertRowDataOn", PyvtkStringToNumeric_ConvertRowDataOn, METH_VARARGS,
   (char*)"V.ConvertRowDataOn()\nC++: void ConvertRowDataOn()\n\nWhether to detect and convert row data arrays.  Default is on.\n"},
  {(char*)"ConvertRowDataOff", PyvtkStringToNumeric_ConvertRowDataOff, METH_VARARGS,
   (char*)"V.ConvertRowDataOff()\nC++: void ConvertRowDataOff()\n\nWhether to detect and convert row data arrays.  Default is on.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStringToNumeric_StaticNew()
{
  return vtkStringToNumeric::New();
}

PyObject *PyVTKClass_vtkStringToNumericNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStringToNumeric_StaticNew,
    PyvtkStringToNumeric_Methods,
    "vtkStringToNumeric", modulename,
    NULL, NULL,
    PyvtkStringToNumeric_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkStringToNumeric_Doc()
{
  static const char *docstring[] = {
    "vtkStringToNumeric - Converts string arrays to numeric arrays\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkStringToNumeric is a filter for converting a string array into a\nnumeric arrays.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStringToNumeric(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStringToNumericNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStringToNumeric", o) != 0)
    {
    Py_DECREF(o);
    }

}

