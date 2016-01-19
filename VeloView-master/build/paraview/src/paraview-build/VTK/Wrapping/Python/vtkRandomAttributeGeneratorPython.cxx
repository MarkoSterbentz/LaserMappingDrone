// python wrapper for vtkRandomAttributeGenerator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRandomAttributeGenerator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRandomAttributeGenerator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRandomAttributeGeneratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkRandomAttributeGenerator_Doc();


static PyObject *
PyvtkRandomAttributeGenerator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRandomAttributeGenerator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRandomAttributeGenerator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRandomAttributeGenerator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRandomAttributeGenerator::NewInstance());

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
PyvtkRandomAttributeGenerator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRandomAttributeGenerator *tempr = vtkRandomAttributeGenerator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

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
      op->vtkRandomAttributeGenerator::SetDataType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToBit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToBit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToBit();
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetDataTypeToBit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToChar();
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetDataTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToUnsignedChar();
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetDataTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToShort();
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetDataTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToUnsignedShort();
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetDataTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToInt();
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetDataTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToUnsignedInt();
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetDataTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToLong();
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetDataTypeToLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToUnsignedLong();
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetDataTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToFloat();
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetDataTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToDouble();
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetDataTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkRandomAttributeGenerator::GetDataType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfComponents(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetNumberOfComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetNumberOfComponentsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsMinValue() :
      op->vtkRandomAttributeGenerator::GetNumberOfComponentsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetNumberOfComponentsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsMaxValue() :
      op->vtkRandomAttributeGenerator::GetNumberOfComponentsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkRandomAttributeGenerator::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetMinimumComponentValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumComponentValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumComponentValue(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetMinimumComponentValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetMinimumComponentValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumComponentValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumComponentValue() :
      op->vtkRandomAttributeGenerator::GetMinimumComponentValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetComponentRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetComponentRange(temp0, temp1);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetComponentRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetMaximumComponentValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumComponentValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumComponentValue(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetMaximumComponentValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetMaximumComponentValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumComponentValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumComponentValue() :
      op->vtkRandomAttributeGenerator::GetMaximumComponentValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfTuples(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetNumberOfTuples(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetNumberOfTuplesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuplesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuplesMinValue() :
      op->vtkRandomAttributeGenerator::GetNumberOfTuplesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetNumberOfTuplesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuplesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuplesMaxValue() :
      op->vtkRandomAttributeGenerator::GetNumberOfTuplesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkRandomAttributeGenerator::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGeneratePointScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePointScalars(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetGeneratePointScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGeneratePointScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePointScalars() :
      op->vtkRandomAttributeGenerator::GetGeneratePointScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointScalarsOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GeneratePointScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointScalarsOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GeneratePointScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGeneratePointVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePointVectors(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetGeneratePointVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGeneratePointVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePointVectors() :
      op->vtkRandomAttributeGenerator::GetGeneratePointVectors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointVectorsOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GeneratePointVectorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointVectorsOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GeneratePointVectorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGeneratePointNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePointNormals(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetGeneratePointNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGeneratePointNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePointNormals() :
      op->vtkRandomAttributeGenerator::GetGeneratePointNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointNormalsOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GeneratePointNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointNormalsOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GeneratePointNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGeneratePointTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePointTensors(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetGeneratePointTensors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGeneratePointTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePointTensors() :
      op->vtkRandomAttributeGenerator::GetGeneratePointTensors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointTensorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointTensorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointTensorsOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GeneratePointTensorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointTensorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointTensorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointTensorsOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GeneratePointTensorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGeneratePointTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePointTCoords(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetGeneratePointTCoords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGeneratePointTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePointTCoords() :
      op->vtkRandomAttributeGenerator::GetGeneratePointTCoords());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointTCoordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointTCoordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointTCoordsOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GeneratePointTCoordsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointTCoordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointTCoordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointTCoordsOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GeneratePointTCoordsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGeneratePointArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePointArray(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetGeneratePointArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGeneratePointArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePointArray() :
      op->vtkRandomAttributeGenerator::GetGeneratePointArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointArrayOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GeneratePointArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePointArrayOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GeneratePointArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGenerateCellScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateCellScalars(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetGenerateCellScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGenerateCellScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCellScalars() :
      op->vtkRandomAttributeGenerator::GetGenerateCellScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCellScalarsOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateCellScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCellScalarsOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateCellScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGenerateCellVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateCellVectors(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetGenerateCellVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGenerateCellVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCellVectors() :
      op->vtkRandomAttributeGenerator::GetGenerateCellVectors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCellVectorsOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateCellVectorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCellVectorsOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateCellVectorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGenerateCellNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateCellNormals(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetGenerateCellNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGenerateCellNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCellNormals() :
      op->vtkRandomAttributeGenerator::GetGenerateCellNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCellNormalsOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateCellNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCellNormalsOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateCellNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGenerateCellTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateCellTensors(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetGenerateCellTensors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGenerateCellTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCellTensors() :
      op->vtkRandomAttributeGenerator::GetGenerateCellTensors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellTensorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellTensorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCellTensorsOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateCellTensorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellTensorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellTensorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCellTensorsOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateCellTensorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGenerateCellTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateCellTCoords(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetGenerateCellTCoords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGenerateCellTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCellTCoords() :
      op->vtkRandomAttributeGenerator::GetGenerateCellTCoords());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellTCoordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellTCoordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCellTCoordsOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateCellTCoordsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellTCoordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellTCoordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCellTCoordsOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateCellTCoordsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGenerateCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateCellArray(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetGenerateCellArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGenerateCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCellArray() :
      op->vtkRandomAttributeGenerator::GetGenerateCellArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCellArrayOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateCellArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCellArrayOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateCellArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGenerateFieldArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFieldArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateFieldArray(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetGenerateFieldArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGenerateFieldArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFieldArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateFieldArray() :
      op->vtkRandomAttributeGenerator::GetGenerateFieldArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateFieldArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFieldArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateFieldArrayOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateFieldArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateFieldArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFieldArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateFieldArrayOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateFieldArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetAttributesConstantPerBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributesConstantPerBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAttributesConstantPerBlock(temp0);
      }
    else
      {
      op->vtkRandomAttributeGenerator::SetAttributesConstantPerBlock(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetAttributesConstantPerBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesConstantPerBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAttributesConstantPerBlock() :
      op->vtkRandomAttributeGenerator::GetAttributesConstantPerBlock());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_AttributesConstantPerBlockOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttributesConstantPerBlockOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AttributesConstantPerBlockOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::AttributesConstantPerBlockOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_AttributesConstantPerBlockOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttributesConstantPerBlockOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AttributesConstantPerBlockOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::AttributesConstantPerBlockOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateAllPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateAllPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateAllPointDataOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateAllPointDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateAllPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateAllPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateAllPointDataOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateAllPointDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateAllCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateAllCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateAllCellDataOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateAllCellDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateAllCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateAllCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateAllCellDataOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateAllCellDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateAllDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateAllDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateAllDataOn();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateAllDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateAllDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateAllDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateAllDataOff();
      }
    else
      {
      op->vtkRandomAttributeGenerator::GenerateAllDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRandomAttributeGenerator_Methods[] = {
  {(char*)"GetClassName", PyvtkRandomAttributeGenerator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRandomAttributeGenerator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRandomAttributeGenerator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRandomAttributeGenerator\nC++: vtkRandomAttributeGenerator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRandomAttributeGenerator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRandomAttributeGenerator\nC++: vtkRandomAttributeGenerator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDataType", PyvtkRandomAttributeGenerator_SetDataType, METH_VARARGS,
   (char*)"V.SetDataType(int)\nC++: void SetDataType(int a)\n\nSpecify the type of array to create (all components of this array\nare of this type). This holds true for all arrays that are\ncreated.\n"},
  {(char*)"SetDataTypeToBit", PyvtkRandomAttributeGenerator_SetDataTypeToBit, METH_VARARGS,
   (char*)"V.SetDataTypeToBit()\nC++: void SetDataTypeToBit()\n\nSpecify the type of array to create (all components of this array\nare of this type). This holds true for all arrays that are\ncreated.\n"},
  {(char*)"SetDataTypeToChar", PyvtkRandomAttributeGenerator_SetDataTypeToChar, METH_VARARGS,
   (char*)"V.SetDataTypeToChar()\nC++: void SetDataTypeToChar()\n\nSpecify the type of array to create (all components of this array\nare of this type). This holds true for all arrays that are\ncreated.\n"},
  {(char*)"SetDataTypeToUnsignedChar", PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedChar, METH_VARARGS,
   (char*)"V.SetDataTypeToUnsignedChar()\nC++: void SetDataTypeToUnsignedChar()\n\nSpecify the type of array to create (all components of this array\nare of this type). This holds true for all arrays that are\ncreated.\n"},
  {(char*)"SetDataTypeToShort", PyvtkRandomAttributeGenerator_SetDataTypeToShort, METH_VARARGS,
   (char*)"V.SetDataTypeToShort()\nC++: void SetDataTypeToShort()\n\nSpecify the type of array to create (all components of this array\nare of this type). This holds true for all arrays that are\ncreated.\n"},
  {(char*)"SetDataTypeToUnsignedShort", PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedShort, METH_VARARGS,
   (char*)"V.SetDataTypeToUnsignedShort()\nC++: void SetDataTypeToUnsignedShort()\n\nSpecify the type of array to create (all components of this array\nare of this type). This holds true for all arrays that are\ncreated.\n"},
  {(char*)"SetDataTypeToInt", PyvtkRandomAttributeGenerator_SetDataTypeToInt, METH_VARARGS,
   (char*)"V.SetDataTypeToInt()\nC++: void SetDataTypeToInt()\n\nSpecify the type of array to create (all components of this array\nare of this type). This holds true for all arrays that are\ncreated.\n"},
  {(char*)"SetDataTypeToUnsignedInt", PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedInt, METH_VARARGS,
   (char*)"V.SetDataTypeToUnsignedInt()\nC++: void SetDataTypeToUnsignedInt()\n\nSpecify the type of array to create (all components of this array\nare of this type). This holds true for all arrays that are\ncreated.\n"},
  {(char*)"SetDataTypeToLong", PyvtkRandomAttributeGenerator_SetDataTypeToLong, METH_VARARGS,
   (char*)"V.SetDataTypeToLong()\nC++: void SetDataTypeToLong()\n\nSpecify the type of array to create (all components of this array\nare of this type). This holds true for all arrays that are\ncreated.\n"},
  {(char*)"SetDataTypeToUnsignedLong", PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedLong, METH_VARARGS,
   (char*)"V.SetDataTypeToUnsignedLong()\nC++: void SetDataTypeToUnsignedLong()\n\nSpecify the type of array to create (all components of this array\nare of this type). This holds true for all arrays that are\ncreated.\n"},
  {(char*)"SetDataTypeToFloat", PyvtkRandomAttributeGenerator_SetDataTypeToFloat, METH_VARARGS,
   (char*)"V.SetDataTypeToFloat()\nC++: void SetDataTypeToFloat()\n\nSpecify the type of array to create (all components of this array\nare of this type). This holds true for all arrays that are\ncreated.\n"},
  {(char*)"SetDataTypeToDouble", PyvtkRandomAttributeGenerator_SetDataTypeToDouble, METH_VARARGS,
   (char*)"V.SetDataTypeToDouble()\nC++: void SetDataTypeToDouble()\n\nSpecify the type of array to create (all components of this array\nare of this type). This holds true for all arrays that are\ncreated.\n"},
  {(char*)"GetDataType", PyvtkRandomAttributeGenerator_GetDataType, METH_VARARGS,
   (char*)"V.GetDataType() -> int\nC++: int GetDataType()\n\nSpecify the type of array to create (all components of this array\nare of this type). This holds true for all arrays that are\ncreated.\n"},
  {(char*)"SetNumberOfComponents", PyvtkRandomAttributeGenerator_SetNumberOfComponents, METH_VARARGS,
   (char*)"V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int)\n\nSpecify the number of components to generate. This value only\napplies to those attribute types that take a variable number of\ncomponents. For example, a vector is only three components so the\nnumber of components is not applicable; whereas a scalar may\nsupport multiple, varying number of components.\n"},
  {(char*)"GetNumberOfComponentsMinValue", PyvtkRandomAttributeGenerator_GetNumberOfComponentsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfComponentsMinValue() -> int\nC++: int GetNumberOfComponentsMinValue()\n\nSpecify the number of components to generate. This value only\napplies to those attribute types that take a variable number of\ncomponents. For example, a vector is only three components so the\nnumber of components is not applicable; whereas a scalar may\nsupport multiple, varying number of components.\n"},
  {(char*)"GetNumberOfComponentsMaxValue", PyvtkRandomAttributeGenerator_GetNumberOfComponentsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfComponentsMaxValue() -> int\nC++: int GetNumberOfComponentsMaxValue()\n\nSpecify the number of components to generate. This value only\napplies to those attribute types that take a variable number of\ncomponents. For example, a vector is only three components so the\nnumber of components is not applicable; whereas a scalar may\nsupport multiple, varying number of components.\n"},
  {(char*)"GetNumberOfComponents", PyvtkRandomAttributeGenerator_GetNumberOfComponents, METH_VARARGS,
   (char*)"V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nSpecify the number of components to generate. This value only\napplies to those attribute types that take a variable number of\ncomponents. For example, a vector is only three components so the\nnumber of components is not applicable; whereas a scalar may\nsupport multiple, varying number of components.\n"},
  {(char*)"SetMinimumComponentValue", PyvtkRandomAttributeGenerator_SetMinimumComponentValue, METH_VARARGS,
   (char*)"V.SetMinimumComponentValue(float)\nC++: void SetMinimumComponentValue(double a)\n\nSet the minimum component value. This applies to all data that is\ngenerated, although normals and tensors have internal constraints\nthat must be observed.\n"},
  {(char*)"GetMinimumComponentValue", PyvtkRandomAttributeGenerator_GetMinimumComponentValue, METH_VARARGS,
   (char*)"V.GetMinimumComponentValue() -> float\nC++: double GetMinimumComponentValue()\n\nSet the minimum component value. This applies to all data that is\ngenerated, although normals and tensors have internal constraints\nthat must be observed.\n"},
  {(char*)"SetComponentRange", PyvtkRandomAttributeGenerator_SetComponentRange, METH_VARARGS,
   (char*)"V.SetComponentRange(float, float)\nC++: void SetComponentRange(double minimumValue,\n    double maximumValue)\n\nSet the minimum component value. This applies to all data that is\ngenerated, although normals and tensors have internal constraints\nthat must be observed.\n"},
  {(char*)"SetMaximumComponentValue", PyvtkRandomAttributeGenerator_SetMaximumComponentValue, METH_VARARGS,
   (char*)"V.SetMaximumComponentValue(float)\nC++: void SetMaximumComponentValue(double a)\n\nSet the maximum component value. This applies to all data that is\ngenerated, although normals and tensors have internal constraints\nthat must be observed.\n"},
  {(char*)"GetMaximumComponentValue", PyvtkRandomAttributeGenerator_GetMaximumComponentValue, METH_VARARGS,
   (char*)"V.GetMaximumComponentValue() -> float\nC++: double GetMaximumComponentValue()\n\nSet the maximum component value. This applies to all data that is\ngenerated, although normals and tensors have internal constraints\nthat must be observed.\n"},
  {(char*)"SetNumberOfTuples", PyvtkRandomAttributeGenerator_SetNumberOfTuples, METH_VARARGS,
   (char*)"V.SetNumberOfTuples(int)\nC++: void SetNumberOfTuples(vtkIdType)\n\nSpecify the number of tuples to generate. This value only applies\nwhen creating general field data. In all other cases (i.e., point\ndata or cell data), the number of tuples is controlled by the\nnumber of points and cells, respectively.\n"},
  {(char*)"GetNumberOfTuplesMinValue", PyvtkRandomAttributeGenerator_GetNumberOfTuplesMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfTuplesMinValue() -> int\nC++: vtkIdType GetNumberOfTuplesMinValue()\n\nSpecify the number of tuples to generate. This value only applies\nwhen creating general field data. In all other cases (i.e., point\ndata or cell data), the number of tuples is controlled by the\nnumber of points and cells, respectively.\n"},
  {(char*)"GetNumberOfTuplesMaxValue", PyvtkRandomAttributeGenerator_GetNumberOfTuplesMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfTuplesMaxValue() -> int\nC++: vtkIdType GetNumberOfTuplesMaxValue()\n\nSpecify the number of tuples to generate. This value only applies\nwhen creating general field data. In all other cases (i.e., point\ndata or cell data), the number of tuples is controlled by the\nnumber of points and cells, respectively.\n"},
  {(char*)"GetNumberOfTuples", PyvtkRandomAttributeGenerator_GetNumberOfTuples, METH_VARARGS,
   (char*)"V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nSpecify the number of tuples to generate. This value only applies\nwhen creating general field data. In all other cases (i.e., point\ndata or cell data), the number of tuples is controlled by the\nnumber of points and cells, respectively.\n"},
  {(char*)"SetGeneratePointScalars", PyvtkRandomAttributeGenerator_SetGeneratePointScalars, METH_VARARGS,
   (char*)"V.SetGeneratePointScalars(int)\nC++: void SetGeneratePointScalars(int a)\n\nIndicate that point scalars are to be generated. Note that the\nspecified number of components is used to create the scalar.\n"},
  {(char*)"GetGeneratePointScalars", PyvtkRandomAttributeGenerator_GetGeneratePointScalars, METH_VARARGS,
   (char*)"V.GetGeneratePointScalars() -> int\nC++: int GetGeneratePointScalars()\n\nIndicate that point scalars are to be generated. Note that the\nspecified number of components is used to create the scalar.\n"},
  {(char*)"GeneratePointScalarsOn", PyvtkRandomAttributeGenerator_GeneratePointScalarsOn, METH_VARARGS,
   (char*)"V.GeneratePointScalarsOn()\nC++: void GeneratePointScalarsOn()\n\nIndicate that point scalars are to be generated. Note that the\nspecified number of components is used to create the scalar.\n"},
  {(char*)"GeneratePointScalarsOff", PyvtkRandomAttributeGenerator_GeneratePointScalarsOff, METH_VARARGS,
   (char*)"V.GeneratePointScalarsOff()\nC++: void GeneratePointScalarsOff()\n\nIndicate that point scalars are to be generated. Note that the\nspecified number of components is used to create the scalar.\n"},
  {(char*)"SetGeneratePointVectors", PyvtkRandomAttributeGenerator_SetGeneratePointVectors, METH_VARARGS,
   (char*)"V.SetGeneratePointVectors(int)\nC++: void SetGeneratePointVectors(int a)\n\nIndicate that point vectors are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {(char*)"GetGeneratePointVectors", PyvtkRandomAttributeGenerator_GetGeneratePointVectors, METH_VARARGS,
   (char*)"V.GetGeneratePointVectors() -> int\nC++: int GetGeneratePointVectors()\n\nIndicate that point vectors are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {(char*)"GeneratePointVectorsOn", PyvtkRandomAttributeGenerator_GeneratePointVectorsOn, METH_VARARGS,
   (char*)"V.GeneratePointVectorsOn()\nC++: void GeneratePointVectorsOn()\n\nIndicate that point vectors are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {(char*)"GeneratePointVectorsOff", PyvtkRandomAttributeGenerator_GeneratePointVectorsOff, METH_VARARGS,
   (char*)"V.GeneratePointVectorsOff()\nC++: void GeneratePointVectorsOff()\n\nIndicate that point vectors are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {(char*)"SetGeneratePointNormals", PyvtkRandomAttributeGenerator_SetGeneratePointNormals, METH_VARARGS,
   (char*)"V.SetGeneratePointNormals(int)\nC++: void SetGeneratePointNormals(int a)\n\nIndicate that point normals are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {(char*)"GetGeneratePointNormals", PyvtkRandomAttributeGenerator_GetGeneratePointNormals, METH_VARARGS,
   (char*)"V.GetGeneratePointNormals() -> int\nC++: int GetGeneratePointNormals()\n\nIndicate that point normals are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {(char*)"GeneratePointNormalsOn", PyvtkRandomAttributeGenerator_GeneratePointNormalsOn, METH_VARARGS,
   (char*)"V.GeneratePointNormalsOn()\nC++: void GeneratePointNormalsOn()\n\nIndicate that point normals are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {(char*)"GeneratePointNormalsOff", PyvtkRandomAttributeGenerator_GeneratePointNormalsOff, METH_VARARGS,
   (char*)"V.GeneratePointNormalsOff()\nC++: void GeneratePointNormalsOff()\n\nIndicate that point normals are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {(char*)"SetGeneratePointTensors", PyvtkRandomAttributeGenerator_SetGeneratePointTensors, METH_VARARGS,
   (char*)"V.SetGeneratePointTensors(int)\nC++: void SetGeneratePointTensors(int a)\n\nIndicate that point tensors are to be generated. Note that the\nnumber of components is always equal to nine.\n"},
  {(char*)"GetGeneratePointTensors", PyvtkRandomAttributeGenerator_GetGeneratePointTensors, METH_VARARGS,
   (char*)"V.GetGeneratePointTensors() -> int\nC++: int GetGeneratePointTensors()\n\nIndicate that point tensors are to be generated. Note that the\nnumber of components is always equal to nine.\n"},
  {(char*)"GeneratePointTensorsOn", PyvtkRandomAttributeGenerator_GeneratePointTensorsOn, METH_VARARGS,
   (char*)"V.GeneratePointTensorsOn()\nC++: void GeneratePointTensorsOn()\n\nIndicate that point tensors are to be generated. Note that the\nnumber of components is always equal to nine.\n"},
  {(char*)"GeneratePointTensorsOff", PyvtkRandomAttributeGenerator_GeneratePointTensorsOff, METH_VARARGS,
   (char*)"V.GeneratePointTensorsOff()\nC++: void GeneratePointTensorsOff()\n\nIndicate that point tensors are to be generated. Note that the\nnumber of components is always equal to nine.\n"},
  {(char*)"SetGeneratePointTCoords", PyvtkRandomAttributeGenerator_SetGeneratePointTCoords, METH_VARARGS,
   (char*)"V.SetGeneratePointTCoords(int)\nC++: void SetGeneratePointTCoords(int a)\n\nIndicate that point texture coordinates are to be generated. Note\nthat the specified number of components is used to create the\ntexture coordinates (but must range between one and three).\n"},
  {(char*)"GetGeneratePointTCoords", PyvtkRandomAttributeGenerator_GetGeneratePointTCoords, METH_VARARGS,
   (char*)"V.GetGeneratePointTCoords() -> int\nC++: int GetGeneratePointTCoords()\n\nIndicate that point texture coordinates are to be generated. Note\nthat the specified number of components is used to create the\ntexture coordinates (but must range between one and three).\n"},
  {(char*)"GeneratePointTCoordsOn", PyvtkRandomAttributeGenerator_GeneratePointTCoordsOn, METH_VARARGS,
   (char*)"V.GeneratePointTCoordsOn()\nC++: void GeneratePointTCoordsOn()\n\nIndicate that point texture coordinates are to be generated. Note\nthat the specified number of components is used to create the\ntexture coordinates (but must range between one and three).\n"},
  {(char*)"GeneratePointTCoordsOff", PyvtkRandomAttributeGenerator_GeneratePointTCoordsOff, METH_VARARGS,
   (char*)"V.GeneratePointTCoordsOff()\nC++: void GeneratePointTCoordsOff()\n\nIndicate that point texture coordinates are to be generated. Note\nthat the specified number of components is used to create the\ntexture coordinates (but must range between one and three).\n"},
  {(char*)"SetGeneratePointArray", PyvtkRandomAttributeGenerator_SetGeneratePointArray, METH_VARARGS,
   (char*)"V.SetGeneratePointArray(int)\nC++: void SetGeneratePointArray(int a)\n\nIndicate that an arbitrary point array is to be generated. Note\nthat the specified number of components is used to create the\narray.\n"},
  {(char*)"GetGeneratePointArray", PyvtkRandomAttributeGenerator_GetGeneratePointArray, METH_VARARGS,
   (char*)"V.GetGeneratePointArray() -> int\nC++: int GetGeneratePointArray()\n\nIndicate that an arbitrary point array is to be generated. Note\nthat the specified number of components is used to create the\narray.\n"},
  {(char*)"GeneratePointArrayOn", PyvtkRandomAttributeGenerator_GeneratePointArrayOn, METH_VARARGS,
   (char*)"V.GeneratePointArrayOn()\nC++: void GeneratePointArrayOn()\n\nIndicate that an arbitrary point array is to be generated. Note\nthat the specified number of components is used to create the\narray.\n"},
  {(char*)"GeneratePointArrayOff", PyvtkRandomAttributeGenerator_GeneratePointArrayOff, METH_VARARGS,
   (char*)"V.GeneratePointArrayOff()\nC++: void GeneratePointArrayOff()\n\nIndicate that an arbitrary point array is to be generated. Note\nthat the specified number of components is used to create the\narray.\n"},
  {(char*)"SetGenerateCellScalars", PyvtkRandomAttributeGenerator_SetGenerateCellScalars, METH_VARARGS,
   (char*)"V.SetGenerateCellScalars(int)\nC++: void SetGenerateCellScalars(int a)\n\nIndicate that cell scalars are to be generated. Note that the\nspecified number of components is used to create the scalar.\n"},
  {(char*)"GetGenerateCellScalars", PyvtkRandomAttributeGenerator_GetGenerateCellScalars, METH_VARARGS,
   (char*)"V.GetGenerateCellScalars() -> int\nC++: int GetGenerateCellScalars()\n\nIndicate that cell scalars are to be generated. Note that the\nspecified number of components is used to create the scalar.\n"},
  {(char*)"GenerateCellScalarsOn", PyvtkRandomAttributeGenerator_GenerateCellScalarsOn, METH_VARARGS,
   (char*)"V.GenerateCellScalarsOn()\nC++: void GenerateCellScalarsOn()\n\nIndicate that cell scalars are to be generated. Note that the\nspecified number of components is used to create the scalar.\n"},
  {(char*)"GenerateCellScalarsOff", PyvtkRandomAttributeGenerator_GenerateCellScalarsOff, METH_VARARGS,
   (char*)"V.GenerateCellScalarsOff()\nC++: void GenerateCellScalarsOff()\n\nIndicate that cell scalars are to be generated. Note that the\nspecified number of components is used to create the scalar.\n"},
  {(char*)"SetGenerateCellVectors", PyvtkRandomAttributeGenerator_SetGenerateCellVectors, METH_VARARGS,
   (char*)"V.SetGenerateCellVectors(int)\nC++: void SetGenerateCellVectors(int a)\n\nIndicate that cell vectors are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {(char*)"GetGenerateCellVectors", PyvtkRandomAttributeGenerator_GetGenerateCellVectors, METH_VARARGS,
   (char*)"V.GetGenerateCellVectors() -> int\nC++: int GetGenerateCellVectors()\n\nIndicate that cell vectors are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {(char*)"GenerateCellVectorsOn", PyvtkRandomAttributeGenerator_GenerateCellVectorsOn, METH_VARARGS,
   (char*)"V.GenerateCellVectorsOn()\nC++: void GenerateCellVectorsOn()\n\nIndicate that cell vectors are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {(char*)"GenerateCellVectorsOff", PyvtkRandomAttributeGenerator_GenerateCellVectorsOff, METH_VARARGS,
   (char*)"V.GenerateCellVectorsOff()\nC++: void GenerateCellVectorsOff()\n\nIndicate that cell vectors are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {(char*)"SetGenerateCellNormals", PyvtkRandomAttributeGenerator_SetGenerateCellNormals, METH_VARARGS,
   (char*)"V.SetGenerateCellNormals(int)\nC++: void SetGenerateCellNormals(int a)\n\nIndicate that cell normals are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {(char*)"GetGenerateCellNormals", PyvtkRandomAttributeGenerator_GetGenerateCellNormals, METH_VARARGS,
   (char*)"V.GetGenerateCellNormals() -> int\nC++: int GetGenerateCellNormals()\n\nIndicate that cell normals are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {(char*)"GenerateCellNormalsOn", PyvtkRandomAttributeGenerator_GenerateCellNormalsOn, METH_VARARGS,
   (char*)"V.GenerateCellNormalsOn()\nC++: void GenerateCellNormalsOn()\n\nIndicate that cell normals are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {(char*)"GenerateCellNormalsOff", PyvtkRandomAttributeGenerator_GenerateCellNormalsOff, METH_VARARGS,
   (char*)"V.GenerateCellNormalsOff()\nC++: void GenerateCellNormalsOff()\n\nIndicate that cell normals are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {(char*)"SetGenerateCellTensors", PyvtkRandomAttributeGenerator_SetGenerateCellTensors, METH_VARARGS,
   (char*)"V.SetGenerateCellTensors(int)\nC++: void SetGenerateCellTensors(int a)\n\nIndicate that cell tensors are to be generated. Note that the\nnumber of components is always equal to nine.\n"},
  {(char*)"GetGenerateCellTensors", PyvtkRandomAttributeGenerator_GetGenerateCellTensors, METH_VARARGS,
   (char*)"V.GetGenerateCellTensors() -> int\nC++: int GetGenerateCellTensors()\n\nIndicate that cell tensors are to be generated. Note that the\nnumber of components is always equal to nine.\n"},
  {(char*)"GenerateCellTensorsOn", PyvtkRandomAttributeGenerator_GenerateCellTensorsOn, METH_VARARGS,
   (char*)"V.GenerateCellTensorsOn()\nC++: void GenerateCellTensorsOn()\n\nIndicate that cell tensors are to be generated. Note that the\nnumber of components is always equal to nine.\n"},
  {(char*)"GenerateCellTensorsOff", PyvtkRandomAttributeGenerator_GenerateCellTensorsOff, METH_VARARGS,
   (char*)"V.GenerateCellTensorsOff()\nC++: void GenerateCellTensorsOff()\n\nIndicate that cell tensors are to be generated. Note that the\nnumber of components is always equal to nine.\n"},
  {(char*)"SetGenerateCellTCoords", PyvtkRandomAttributeGenerator_SetGenerateCellTCoords, METH_VARARGS,
   (char*)"V.SetGenerateCellTCoords(int)\nC++: void SetGenerateCellTCoords(int a)\n\nIndicate that cell texture coordinates are to be generated. Note\nthat the specified number of components is used to create the\ntexture coordinates (but must range between one and three).\n"},
  {(char*)"GetGenerateCellTCoords", PyvtkRandomAttributeGenerator_GetGenerateCellTCoords, METH_VARARGS,
   (char*)"V.GetGenerateCellTCoords() -> int\nC++: int GetGenerateCellTCoords()\n\nIndicate that cell texture coordinates are to be generated. Note\nthat the specified number of components is used to create the\ntexture coordinates (but must range between one and three).\n"},
  {(char*)"GenerateCellTCoordsOn", PyvtkRandomAttributeGenerator_GenerateCellTCoordsOn, METH_VARARGS,
   (char*)"V.GenerateCellTCoordsOn()\nC++: void GenerateCellTCoordsOn()\n\nIndicate that cell texture coordinates are to be generated. Note\nthat the specified number of components is used to create the\ntexture coordinates (but must range between one and three).\n"},
  {(char*)"GenerateCellTCoordsOff", PyvtkRandomAttributeGenerator_GenerateCellTCoordsOff, METH_VARARGS,
   (char*)"V.GenerateCellTCoordsOff()\nC++: void GenerateCellTCoordsOff()\n\nIndicate that cell texture coordinates are to be generated. Note\nthat the specified number of components is used to create the\ntexture coordinates (but must range between one and three).\n"},
  {(char*)"SetGenerateCellArray", PyvtkRandomAttributeGenerator_SetGenerateCellArray, METH_VARARGS,
   (char*)"V.SetGenerateCellArray(int)\nC++: void SetGenerateCellArray(int a)\n\nIndicate that an arbitrary cell array is to be generated. Note\nthat the specified number of components is used to create the\narray.\n"},
  {(char*)"GetGenerateCellArray", PyvtkRandomAttributeGenerator_GetGenerateCellArray, METH_VARARGS,
   (char*)"V.GetGenerateCellArray() -> int\nC++: int GetGenerateCellArray()\n\nIndicate that an arbitrary cell array is to be generated. Note\nthat the specified number of components is used to create the\narray.\n"},
  {(char*)"GenerateCellArrayOn", PyvtkRandomAttributeGenerator_GenerateCellArrayOn, METH_VARARGS,
   (char*)"V.GenerateCellArrayOn()\nC++: void GenerateCellArrayOn()\n\nIndicate that an arbitrary cell array is to be generated. Note\nthat the specified number of components is used to create the\narray.\n"},
  {(char*)"GenerateCellArrayOff", PyvtkRandomAttributeGenerator_GenerateCellArrayOff, METH_VARARGS,
   (char*)"V.GenerateCellArrayOff()\nC++: void GenerateCellArrayOff()\n\nIndicate that an arbitrary cell array is to be generated. Note\nthat the specified number of components is used to create the\narray.\n"},
  {(char*)"SetGenerateFieldArray", PyvtkRandomAttributeGenerator_SetGenerateFieldArray, METH_VARARGS,
   (char*)"V.SetGenerateFieldArray(int)\nC++: void SetGenerateFieldArray(int a)\n\nIndicate that an arbitrary field data array is to be generated.\nNote that the specified number of components is used to create\nthe scalar.\n"},
  {(char*)"GetGenerateFieldArray", PyvtkRandomAttributeGenerator_GetGenerateFieldArray, METH_VARARGS,
   (char*)"V.GetGenerateFieldArray() -> int\nC++: int GetGenerateFieldArray()\n\nIndicate that an arbitrary field data array is to be generated.\nNote that the specified number of components is used to create\nthe scalar.\n"},
  {(char*)"GenerateFieldArrayOn", PyvtkRandomAttributeGenerator_GenerateFieldArrayOn, METH_VARARGS,
   (char*)"V.GenerateFieldArrayOn()\nC++: void GenerateFieldArrayOn()\n\nIndicate that an arbitrary field data array is to be generated.\nNote that the specified number of components is used to create\nthe scalar.\n"},
  {(char*)"GenerateFieldArrayOff", PyvtkRandomAttributeGenerator_GenerateFieldArrayOff, METH_VARARGS,
   (char*)"V.GenerateFieldArrayOff()\nC++: void GenerateFieldArrayOff()\n\nIndicate that an arbitrary field data array is to be generated.\nNote that the specified number of components is used to create\nthe scalar.\n"},
  {(char*)"SetAttributesConstantPerBlock", PyvtkRandomAttributeGenerator_SetAttributesConstantPerBlock, METH_VARARGS,
   (char*)"V.SetAttributesConstantPerBlock(bool)\nC++: void SetAttributesConstantPerBlock(bool a)\n\nIndicate that the generated attributes are constant within a\nblock. This can be used to highlight blocks in a composite\ndataset.\n"},
  {(char*)"GetAttributesConstantPerBlock", PyvtkRandomAttributeGenerator_GetAttributesConstantPerBlock, METH_VARARGS,
   (char*)"V.GetAttributesConstantPerBlock() -> bool\nC++: bool GetAttributesConstantPerBlock()\n\nIndicate that the generated attributes are constant within a\nblock. This can be used to highlight blocks in a composite\ndataset.\n"},
  {(char*)"AttributesConstantPerBlockOn", PyvtkRandomAttributeGenerator_AttributesConstantPerBlockOn, METH_VARARGS,
   (char*)"V.AttributesConstantPerBlockOn()\nC++: void AttributesConstantPerBlockOn()\n\nIndicate that the generated attributes are constant within a\nblock. This can be used to highlight blocks in a composite\ndataset.\n"},
  {(char*)"AttributesConstantPerBlockOff", PyvtkRandomAttributeGenerator_AttributesConstantPerBlockOff, METH_VARARGS,
   (char*)"V.AttributesConstantPerBlockOff()\nC++: void AttributesConstantPerBlockOff()\n\nIndicate that the generated attributes are constant within a\nblock. This can be used to highlight blocks in a composite\ndataset.\n"},
  {(char*)"GenerateAllPointDataOn", PyvtkRandomAttributeGenerator_GenerateAllPointDataOn, METH_VARARGS,
   (char*)"V.GenerateAllPointDataOn()\nC++: void GenerateAllPointDataOn()\n\nConvenience methods for generating data: all data, all point\ndata, or all cell data. For example, if all data is enabled, then\nall point, cell and field data is generated. If all point data is\nenabled, then point scalars, vectors, normals, tensors, tcoords,\nand a data array are produced.\n"},
  {(char*)"GenerateAllPointDataOff", PyvtkRandomAttributeGenerator_GenerateAllPointDataOff, METH_VARARGS,
   (char*)"V.GenerateAllPointDataOff()\nC++: void GenerateAllPointDataOff()\n\nConvenience methods for generating data: all data, all point\ndata, or all cell data. For example, if all data is enabled, then\nall point, cell and field data is generated. If all point data is\nenabled, then point scalars, vectors, normals, tensors, tcoords,\nand a data array are produced.\n"},
  {(char*)"GenerateAllCellDataOn", PyvtkRandomAttributeGenerator_GenerateAllCellDataOn, METH_VARARGS,
   (char*)"V.GenerateAllCellDataOn()\nC++: void GenerateAllCellDataOn()\n\nConvenience methods for generating data: all data, all point\ndata, or all cell data. For example, if all data is enabled, then\nall point, cell and field data is generated. If all point data is\nenabled, then point scalars, vectors, normals, tensors, tcoords,\nand a data array are produced.\n"},
  {(char*)"GenerateAllCellDataOff", PyvtkRandomAttributeGenerator_GenerateAllCellDataOff, METH_VARARGS,
   (char*)"V.GenerateAllCellDataOff()\nC++: void GenerateAllCellDataOff()\n\nConvenience methods for generating data: all data, all point\ndata, or all cell data. For example, if all data is enabled, then\nall point, cell and field data is generated. If all point data is\nenabled, then point scalars, vectors, normals, tensors, tcoords,\nand a data array are produced.\n"},
  {(char*)"GenerateAllDataOn", PyvtkRandomAttributeGenerator_GenerateAllDataOn, METH_VARARGS,
   (char*)"V.GenerateAllDataOn()\nC++: void GenerateAllDataOn()\n\nConvenience methods for generating data: all data, all point\ndata, or all cell data. For example, if all data is enabled, then\nall point, cell and field data is generated. If all point data is\nenabled, then point scalars, vectors, normals, tensors, tcoords,\nand a data array are produced.\n"},
  {(char*)"GenerateAllDataOff", PyvtkRandomAttributeGenerator_GenerateAllDataOff, METH_VARARGS,
   (char*)"V.GenerateAllDataOff()\nC++: void GenerateAllDataOff()\n\nConvenience methods for generating data: all data, all point\ndata, or all cell data. For example, if all data is enabled, then\nall point, cell and field data is generated. If all point data is\nenabled, then point scalars, vectors, normals, tensors, tcoords,\nand a data array are produced.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRandomAttributeGenerator_StaticNew()
{
  return vtkRandomAttributeGenerator::New();
}

PyObject *PyVTKClass_vtkRandomAttributeGeneratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRandomAttributeGenerator_StaticNew,
    PyvtkRandomAttributeGenerator_Methods,
    "vtkRandomAttributeGenerator", modulename,
    NULL, NULL,
    PyvtkRandomAttributeGenerator_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRandomAttributeGenerator_Doc()
{
  static const char *docstring[] = {
    "vtkRandomAttributeGenerator - generate and create random data\nattributes\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "vtkRandomAttributeGenerator is a filter that creates random\nattributes including scalars, vectors, normals, tensors, texture\ncoordinates and/or general data arrays. These attributes can be\ngenerated as point data, cell data or general field data. The\ngeneration of each component is normalized between a user-specified\nminimum and maximum value.\n\nThis filter provides that capability to specify the d",
    "ata type of the\nattributes, the range for each of the components, and the number of\ncomponents. Note, however, that this flexibility only goes so far\nbecause some attributes (e.g., normals, vectors and tensors) are\nfixed in the number of components, and in the case of normals and\ntensors, are constrained in the values that some of the components\ncan take (i.e., normals have magnitude one, and tens",
    "ors are\nsymmetric).\n\nCaveats:\n\nIn general this class is used for debugging or testing purposes.\n\nIt is possible to generate multiple attributes simultaneously.\n\nBy default, no data is generated. Make sure to enable the generation\nof some attributes if you want this filter to affect the output. Also\nnote that this filter passes through input geometry, topology and\nattributes. Newly created attribut",
    "es may replace attribute data that\nwould have otherwise been passed through.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRandomAttributeGenerator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRandomAttributeGeneratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRandomAttributeGenerator", o) != 0)
    {
    Py_DECREF(o);
    }

}

