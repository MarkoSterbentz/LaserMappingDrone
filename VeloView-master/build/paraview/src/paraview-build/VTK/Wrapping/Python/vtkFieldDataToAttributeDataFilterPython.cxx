// python wrapper for vtkFieldDataToAttributeDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkInformationVector.h"
#include "vtkFieldDataToAttributeDataFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFieldDataToAttributeDataFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFieldDataToAttributeDataFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkFieldDataToAttributeDataFilter_Doc();


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFieldDataToAttributeDataFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFieldDataToAttributeDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFieldDataToAttributeDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFieldDataToAttributeDataFilter::NewInstance());

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
PyvtkFieldDataToAttributeDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFieldDataToAttributeDataFilter *tempr = vtkFieldDataToAttributeDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetInputField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputField(temp0);
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetInputField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetInputField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInputField() :
      op->vtkFieldDataToAttributeDataFilter::GetInputField());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetInputFieldToDataObjectField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputFieldToDataObjectField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInputFieldToDataObjectField();
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetInputFieldToDataObjectField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetInputFieldToPointDataField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputFieldToPointDataField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInputFieldToPointDataField();
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetInputFieldToPointDataField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetInputFieldToCellDataField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputFieldToCellDataField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInputFieldToCellDataField();
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetInputFieldToCellDataField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputAttributeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputAttributeData(temp0);
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetOutputAttributeData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetOutputAttributeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputAttributeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputAttributeData() :
      op->vtkFieldDataToAttributeDataFilter::GetOutputAttributeData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeDataToCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputAttributeDataToCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputAttributeDataToCellData();
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetOutputAttributeDataToCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeDataToPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputAttributeDataToPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputAttributeDataToPointData();
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetOutputAttributeDataToPointData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetScalarComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  char *temp1 = NULL;
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
      op->SetScalarComponent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetScalarComponent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetScalarComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetScalarComponent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetScalarComponent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetScalarComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkFieldDataToAttributeDataFilter_SetScalarComponent_s1(self, args);
    case 3:
      return PyvtkFieldDataToAttributeDataFilter_SetScalarComponent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarComponent");
  return NULL;
}



static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetScalarComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarComponentArrayName(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetScalarComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetScalarComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarComponentArrayComponent(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetScalarComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetScalarComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarComponentMinRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetScalarComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetScalarComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarComponentMaxRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetScalarComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetScalarComponentNormalizeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentNormalizeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarComponentNormalizeFlag(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetScalarComponentNormalizeFlag(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetVectorComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  char *temp1 = NULL;
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
      op->SetVectorComponent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetVectorComponent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetVectorComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetVectorComponent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetVectorComponent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetVectorComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkFieldDataToAttributeDataFilter_SetVectorComponent_s1(self, args);
    case 3:
      return PyvtkFieldDataToAttributeDataFilter_SetVectorComponent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVectorComponent");
  return NULL;
}



static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetVectorComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetVectorComponentArrayName(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetVectorComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetVectorComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponentArrayComponent(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetVectorComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetVectorComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponentMinRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetVectorComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetVectorComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponentMaxRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetVectorComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetVectorComponentNormalizeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentNormalizeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponentNormalizeFlag(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetVectorComponentNormalizeFlag(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetNormalComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  char *temp1 = NULL;
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
      op->SetNormalComponent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetNormalComponent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetNormalComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetNormalComponent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetNormalComponent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetNormalComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkFieldDataToAttributeDataFilter_SetNormalComponent_s1(self, args);
    case 3:
      return PyvtkFieldDataToAttributeDataFilter_SetNormalComponent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormalComponent");
  return NULL;
}



static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetNormalComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetNormalComponentArrayName(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetNormalComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetNormalComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormalComponentArrayComponent(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetNormalComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetNormalComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormalComponentMinRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetNormalComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetNormalComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormalComponentMaxRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetNormalComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetNormalComponentNormalizeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponentNormalizeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormalComponentNormalizeFlag(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetNormalComponentNormalizeFlag(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTensorComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  char *temp1 = NULL;
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
      op->SetTensorComponent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetTensorComponent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTensorComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetTensorComponent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetTensorComponent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTensorComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkFieldDataToAttributeDataFilter_SetTensorComponent_s1(self, args);
    case 3:
      return PyvtkFieldDataToAttributeDataFilter_SetTensorComponent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTensorComponent");
  return NULL;
}



static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTensorComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetTensorComponentArrayName(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTensorComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTensorComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTensorComponentArrayComponent(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTensorComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTensorComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTensorComponentMinRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTensorComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTensorComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTensorComponentMaxRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTensorComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTensorComponentNormalizeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorComponentNormalizeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTensorComponentNormalizeFlag(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTensorComponentNormalizeFlag(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  char *temp1 = NULL;
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
      op->SetTCoordComponent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetTCoordComponent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetTCoordComponent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetTCoordComponent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent_s1(self, args);
    case 3:
      return PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTCoordComponent");
  return NULL;
}



static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetTCoordComponentArrayName(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTCoordComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTCoordComponentArrayComponent(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTCoordComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTCoordComponentMinRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTCoordComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTCoordComponentMaxRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTCoordComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentNormalizeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponentNormalizeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTCoordComponentNormalizeFlag(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTCoordComponentNormalizeFlag(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetDefaultNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultNormalize(temp0);
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::SetDefaultNormalize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetDefaultNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDefaultNormalize() :
      op->vtkFieldDataToAttributeDataFilter::GetDefaultNormalize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_DefaultNormalizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DefaultNormalizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DefaultNormalizeOn();
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::DefaultNormalizeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_DefaultNormalizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DefaultNormalizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DefaultNormalizeOff();
      }
    else
      {
      op->vtkFieldDataToAttributeDataFilter::DefaultNormalizeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_ConstructArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConstructArray");

  vtkDataArray *temp0 = NULL;
  int temp1;
  vtkDataArray *temp2 = NULL;
  int temp3;
  vtkIdType temp4;
  vtkIdType temp5;
  int temp6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    int tempr = vtkFieldDataToAttributeDataFilter::ConstructArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetFieldArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFieldArray");

  vtkFieldData *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkFieldData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkDataArray *tempr = vtkFieldDataToAttributeDataFilter::GetFieldArray(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_UpdateComponentRange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UpdateComponentRange");

  vtkDataArray *temp0 = NULL;
  vtkIdType temp1[2];
  vtkIdType save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = vtkFieldDataToAttributeDataFilter::UpdateComponentRange(temp0, temp1);

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

static PyMethodDef PyvtkFieldDataToAttributeDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkFieldDataToAttributeDataFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFieldDataToAttributeDataFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFieldDataToAttributeDataFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFieldDataToAttributeDataFilter\nC++: vtkFieldDataToAttributeDataFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFieldDataToAttributeDataFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFieldDataToAttributeDataFilter\nC++: vtkFieldDataToAttributeDataFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInputField", PyvtkFieldDataToAttributeDataFilter_SetInputField, METH_VARARGS,
   (char*)"V.SetInputField(int)\nC++: void SetInputField(int a)\n\nSpecify which field data to use to generate the output attribute\ndata. There are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {(char*)"GetInputField", PyvtkFieldDataToAttributeDataFilter_GetInputField, METH_VARARGS,
   (char*)"V.GetInputField() -> int\nC++: int GetInputField()\n\nSpecify which field data to use to generate the output attribute\ndata. There are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {(char*)"SetInputFieldToDataObjectField", PyvtkFieldDataToAttributeDataFilter_SetInputFieldToDataObjectField, METH_VARARGS,
   (char*)"V.SetInputFieldToDataObjectField()\nC++: void SetInputFieldToDataObjectField()\n\nSpecify which field data to use to generate the output attribute\ndata. There are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {(char*)"SetInputFieldToPointDataField", PyvtkFieldDataToAttributeDataFilter_SetInputFieldToPointDataField, METH_VARARGS,
   (char*)"V.SetInputFieldToPointDataField()\nC++: void SetInputFieldToPointDataField()\n\nSpecify which field data to use to generate the output attribute\ndata. There are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {(char*)"SetInputFieldToCellDataField", PyvtkFieldDataToAttributeDataFilter_SetInputFieldToCellDataField, METH_VARARGS,
   (char*)"V.SetInputFieldToCellDataField()\nC++: void SetInputFieldToCellDataField()\n\nSpecify which field data to use to generate the output attribute\ndata. There are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {(char*)"SetOutputAttributeData", PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeData, METH_VARARGS,
   (char*)"V.SetOutputAttributeData(int)\nC++: void SetOutputAttributeData(int a)\n\nSpecify which attribute data to output: point or cell data\nattributes.\n"},
  {(char*)"GetOutputAttributeData", PyvtkFieldDataToAttributeDataFilter_GetOutputAttributeData, METH_VARARGS,
   (char*)"V.GetOutputAttributeData() -> int\nC++: int GetOutputAttributeData()\n\nSpecify which attribute data to output: point or cell data\nattributes.\n"},
  {(char*)"SetOutputAttributeDataToCellData", PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeDataToCellData, METH_VARARGS,
   (char*)"V.SetOutputAttributeDataToCellData()\nC++: void SetOutputAttributeDataToCellData()\n\nSpecify which attribute data to output: point or cell data\nattributes.\n"},
  {(char*)"SetOutputAttributeDataToPointData", PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeDataToPointData, METH_VARARGS,
   (char*)"V.SetOutputAttributeDataToPointData()\nC++: void SetOutputAttributeDataToPointData()\n\nSpecify which attribute data to output: point or cell data\nattributes.\n"},
  {(char*)"SetScalarComponent", PyvtkFieldDataToAttributeDataFilter_SetScalarComponent, METH_VARARGS,
   (char*)"V.SetScalarComponent(int, string, int, int, int, int)\nC++: void SetScalarComponent(int comp, const char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nV.SetScalarComponent(int, string, int)\nC++: void SetScalarComponent(int comp, const char *arrayName,\n    int arrayComp)\n\nDefine the component(s) of the field to be used for the scalar\ncomponents.  Note that the parameter comp must lie between (0,4).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetScalarComponentArrayName", PyvtkFieldDataToAttributeDataFilter_GetScalarComponentArrayName, METH_VARARGS,
   (char*)"V.GetScalarComponentArrayName(int) -> string\nC++: const char *GetScalarComponentArrayName(int comp)\n\nDefine the component(s) of the field to be used for the scalar\ncomponents.  Note that the parameter comp must lie between (0,4).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetScalarComponentArrayComponent", PyvtkFieldDataToAttributeDataFilter_GetScalarComponentArrayComponent, METH_VARARGS,
   (char*)"V.GetScalarComponentArrayComponent(int) -> int\nC++: int GetScalarComponentArrayComponent(int comp)\n\nDefine the component(s) of the field to be used for the scalar\ncomponents.  Note that the parameter comp must lie between (0,4).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetScalarComponentMinRange", PyvtkFieldDataToAttributeDataFilter_GetScalarComponentMinRange, METH_VARARGS,
   (char*)"V.GetScalarComponentMinRange(int) -> int\nC++: int GetScalarComponentMinRange(int comp)\n\nDefine the component(s) of the field to be used for the scalar\ncomponents.  Note that the parameter comp must lie between (0,4).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetScalarComponentMaxRange", PyvtkFieldDataToAttributeDataFilter_GetScalarComponentMaxRange, METH_VARARGS,
   (char*)"V.GetScalarComponentMaxRange(int) -> int\nC++: int GetScalarComponentMaxRange(int comp)\n\nDefine the component(s) of the field to be used for the scalar\ncomponents.  Note that the parameter comp must lie between (0,4).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetScalarComponentNormalizeFlag", PyvtkFieldDataToAttributeDataFilter_GetScalarComponentNormalizeFlag, METH_VARARGS,
   (char*)"V.GetScalarComponentNormalizeFlag(int) -> int\nC++: int GetScalarComponentNormalizeFlag(int comp)\n\nDefine the component(s) of the field to be used for the scalar\ncomponents.  Note that the parameter comp must lie between (0,4).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"SetVectorComponent", PyvtkFieldDataToAttributeDataFilter_SetVectorComponent, METH_VARARGS,
   (char*)"V.SetVectorComponent(int, string, int, int, int, int)\nC++: void SetVectorComponent(int comp, const char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nV.SetVectorComponent(int, string, int)\nC++: void SetVectorComponent(int comp, const char *arrayName,\n    int arrayComp)\n\nDefine the component(s) of the field to be used for the vector\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetVectorComponentArrayName", PyvtkFieldDataToAttributeDataFilter_GetVectorComponentArrayName, METH_VARARGS,
   (char*)"V.GetVectorComponentArrayName(int) -> string\nC++: const char *GetVectorComponentArrayName(int comp)\n\nDefine the component(s) of the field to be used for the vector\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetVectorComponentArrayComponent", PyvtkFieldDataToAttributeDataFilter_GetVectorComponentArrayComponent, METH_VARARGS,
   (char*)"V.GetVectorComponentArrayComponent(int) -> int\nC++: int GetVectorComponentArrayComponent(int comp)\n\nDefine the component(s) of the field to be used for the vector\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetVectorComponentMinRange", PyvtkFieldDataToAttributeDataFilter_GetVectorComponentMinRange, METH_VARARGS,
   (char*)"V.GetVectorComponentMinRange(int) -> int\nC++: int GetVectorComponentMinRange(int comp)\n\nDefine the component(s) of the field to be used for the vector\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetVectorComponentMaxRange", PyvtkFieldDataToAttributeDataFilter_GetVectorComponentMaxRange, METH_VARARGS,
   (char*)"V.GetVectorComponentMaxRange(int) -> int\nC++: int GetVectorComponentMaxRange(int comp)\n\nDefine the component(s) of the field to be used for the vector\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetVectorComponentNormalizeFlag", PyvtkFieldDataToAttributeDataFilter_GetVectorComponentNormalizeFlag, METH_VARARGS,
   (char*)"V.GetVectorComponentNormalizeFlag(int) -> int\nC++: int GetVectorComponentNormalizeFlag(int comp)\n\nDefine the component(s) of the field to be used for the vector\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"SetNormalComponent", PyvtkFieldDataToAttributeDataFilter_SetNormalComponent, METH_VARARGS,
   (char*)"V.SetNormalComponent(int, string, int, int, int, int)\nC++: void SetNormalComponent(int comp, const char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nV.SetNormalComponent(int, string, int)\nC++: void SetNormalComponent(int comp, const char *arrayName,\n    int arrayComp)\n\nDefine the component(s) of the field to be used for the normal\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetNormalComponentArrayName", PyvtkFieldDataToAttributeDataFilter_GetNormalComponentArrayName, METH_VARARGS,
   (char*)"V.GetNormalComponentArrayName(int) -> string\nC++: const char *GetNormalComponentArrayName(int comp)\n\nDefine the component(s) of the field to be used for the normal\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetNormalComponentArrayComponent", PyvtkFieldDataToAttributeDataFilter_GetNormalComponentArrayComponent, METH_VARARGS,
   (char*)"V.GetNormalComponentArrayComponent(int) -> int\nC++: int GetNormalComponentArrayComponent(int comp)\n\nDefine the component(s) of the field to be used for the normal\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetNormalComponentMinRange", PyvtkFieldDataToAttributeDataFilter_GetNormalComponentMinRange, METH_VARARGS,
   (char*)"V.GetNormalComponentMinRange(int) -> int\nC++: int GetNormalComponentMinRange(int comp)\n\nDefine the component(s) of the field to be used for the normal\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetNormalComponentMaxRange", PyvtkFieldDataToAttributeDataFilter_GetNormalComponentMaxRange, METH_VARARGS,
   (char*)"V.GetNormalComponentMaxRange(int) -> int\nC++: int GetNormalComponentMaxRange(int comp)\n\nDefine the component(s) of the field to be used for the normal\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetNormalComponentNormalizeFlag", PyvtkFieldDataToAttributeDataFilter_GetNormalComponentNormalizeFlag, METH_VARARGS,
   (char*)"V.GetNormalComponentNormalizeFlag(int) -> int\nC++: int GetNormalComponentNormalizeFlag(int comp)\n\nDefine the component(s) of the field to be used for the normal\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"SetTensorComponent", PyvtkFieldDataToAttributeDataFilter_SetTensorComponent, METH_VARARGS,
   (char*)"V.SetTensorComponent(int, string, int, int, int, int)\nC++: void SetTensorComponent(int comp, const char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nV.SetTensorComponent(int, string, int)\nC++: void SetTensorComponent(int comp, const char *arrayName,\n    int arrayComp)\n\nDefine the components of the field to be used for the tensor\ncomponents.  Note that the parameter comp must lie between (0,9).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetTensorComponentArrayName", PyvtkFieldDataToAttributeDataFilter_GetTensorComponentArrayName, METH_VARARGS,
   (char*)"V.GetTensorComponentArrayName(int) -> string\nC++: const char *GetTensorComponentArrayName(int comp)\n\nDefine the components of the field to be used for the tensor\ncomponents.  Note that the parameter comp must lie between (0,9).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetTensorComponentArrayComponent", PyvtkFieldDataToAttributeDataFilter_GetTensorComponentArrayComponent, METH_VARARGS,
   (char*)"V.GetTensorComponentArrayComponent(int) -> int\nC++: int GetTensorComponentArrayComponent(int comp)\n\nDefine the components of the field to be used for the tensor\ncomponents.  Note that the parameter comp must lie between (0,9).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetTensorComponentMinRange", PyvtkFieldDataToAttributeDataFilter_GetTensorComponentMinRange, METH_VARARGS,
   (char*)"V.GetTensorComponentMinRange(int) -> int\nC++: int GetTensorComponentMinRange(int comp)\n\nDefine the components of the field to be used for the tensor\ncomponents.  Note that the parameter comp must lie between (0,9).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetTensorComponentMaxRange", PyvtkFieldDataToAttributeDataFilter_GetTensorComponentMaxRange, METH_VARARGS,
   (char*)"V.GetTensorComponentMaxRange(int) -> int\nC++: int GetTensorComponentMaxRange(int comp)\n\nDefine the components of the field to be used for the tensor\ncomponents.  Note that the parameter comp must lie between (0,9).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"GetTensorComponentNormalizeFlag", PyvtkFieldDataToAttributeDataFilter_GetTensorComponentNormalizeFlag, METH_VARARGS,
   (char*)"V.GetTensorComponentNormalizeFlag(int) -> int\nC++: int GetTensorComponentNormalizeFlag(int comp)\n\nDefine the components of the field to be used for the tensor\ncomponents.  Note that the parameter comp must lie between (0,9).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {(char*)"SetTCoordComponent", PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent, METH_VARARGS,
   (char*)"V.SetTCoordComponent(int, string, int, int, int, int)\nC++: void SetTCoordComponent(int comp, const char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nV.SetTCoordComponent(int, string, int)\nC++: void SetTCoordComponent(int comp, const char *arrayName,\n    int arrayComp)\n\nDefine the components of the field to be used for the cell\ntexture coord components.  Note that the parameter comp must lie\nbetween (0,9). To define the field component to use you specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract.\n"},
  {(char*)"GetTCoordComponentArrayName", PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentArrayName, METH_VARARGS,
   (char*)"V.GetTCoordComponentArrayName(int) -> string\nC++: const char *GetTCoordComponentArrayName(int comp)\n\nDefine the components of the field to be used for the cell\ntexture coord components.  Note that the parameter comp must lie\nbetween (0,9). To define the field component to use you specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract.\n"},
  {(char*)"GetTCoordComponentArrayComponent", PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentArrayComponent, METH_VARARGS,
   (char*)"V.GetTCoordComponentArrayComponent(int) -> int\nC++: int GetTCoordComponentArrayComponent(int comp)\n\nDefine the components of the field to be used for the cell\ntexture coord components.  Note that the parameter comp must lie\nbetween (0,9). To define the field component to use you specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract.\n"},
  {(char*)"GetTCoordComponentMinRange", PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentMinRange, METH_VARARGS,
   (char*)"V.GetTCoordComponentMinRange(int) -> int\nC++: int GetTCoordComponentMinRange(int comp)\n\nDefine the components of the field to be used for the cell\ntexture coord components.  Note that the parameter comp must lie\nbetween (0,9). To define the field component to use you specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract.\n"},
  {(char*)"GetTCoordComponentMaxRange", PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentMaxRange, METH_VARARGS,
   (char*)"V.GetTCoordComponentMaxRange(int) -> int\nC++: int GetTCoordComponentMaxRange(int comp)\n\nDefine the components of the field to be used for the cell\ntexture coord components.  Note that the parameter comp must lie\nbetween (0,9). To define the field component to use you specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract.\n"},
  {(char*)"GetTCoordComponentNormalizeFlag", PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentNormalizeFlag, METH_VARARGS,
   (char*)"V.GetTCoordComponentNormalizeFlag(int) -> int\nC++: int GetTCoordComponentNormalizeFlag(int comp)\n\nDefine the components of the field to be used for the cell\ntexture coord components.  Note that the parameter comp must lie\nbetween (0,9). To define the field component to use you specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract.\n"},
  {(char*)"SetDefaultNormalize", PyvtkFieldDataToAttributeDataFilter_SetDefaultNormalize, METH_VARARGS,
   (char*)"V.SetDefaultNormalize(int)\nC++: void SetDefaultNormalize(int a)\n\nSet the default Normalize() flag for those methods setting a\ndefault Normalize value (e.g., SetScalarComponents).\n"},
  {(char*)"GetDefaultNormalize", PyvtkFieldDataToAttributeDataFilter_GetDefaultNormalize, METH_VARARGS,
   (char*)"V.GetDefaultNormalize() -> int\nC++: int GetDefaultNormalize()\n\nSet the default Normalize() flag for those methods setting a\ndefault Normalize value (e.g., SetScalarComponents).\n"},
  {(char*)"DefaultNormalizeOn", PyvtkFieldDataToAttributeDataFilter_DefaultNormalizeOn, METH_VARARGS,
   (char*)"V.DefaultNormalizeOn()\nC++: void DefaultNormalizeOn()\n\nSet the default Normalize() flag for those methods setting a\ndefault Normalize value (e.g., SetScalarComponents).\n"},
  {(char*)"DefaultNormalizeOff", PyvtkFieldDataToAttributeDataFilter_DefaultNormalizeOff, METH_VARARGS,
   (char*)"V.DefaultNormalizeOff()\nC++: void DefaultNormalizeOff()\n\nSet the default Normalize() flag for those methods setting a\ndefault Normalize value (e.g., SetScalarComponents).\n"},
  {(char*)"ConstructArray", PyvtkFieldDataToAttributeDataFilter_ConstructArray, METH_VARARGS | METH_STATIC,
   (char*)"V.ConstructArray(vtkDataArray, int, vtkDataArray, int, int, int,\n    int) -> int\nC++: static int ConstructArray(vtkDataArray *da, int comp,\n    vtkDataArray *frray, int fieldComp, vtkIdType min,\n    vtkIdType max, int normalize)\n\nConstruct a portion of a data array (the comp portion) from\nanother data array and its component. The variables min and max\ncontrol the range of the data to use from the other data array;\nnormalize is a flag that when set will normalize the data between\n(0,1).\n"},
  {(char*)"GetFieldArray", PyvtkFieldDataToAttributeDataFilter_GetFieldArray, METH_VARARGS | METH_STATIC,
   (char*)"V.GetFieldArray(vtkFieldData, string, int) -> vtkDataArray\nC++: static vtkDataArray *GetFieldArray(vtkFieldData *fd,\n    char *name, int comp)\n\nReturn an array of a particular name from field data and do error\nchecking.\n"},
  {(char*)"UpdateComponentRange", PyvtkFieldDataToAttributeDataFilter_UpdateComponentRange, METH_VARARGS | METH_STATIC,
   (char*)"V.UpdateComponentRange(vtkDataArray, [int, int]) -> int\nC++: static int UpdateComponentRange(vtkDataArray *da,\n    vtkIdType compRange[2])\n\nUpdate the maximum and minimum component range values. Returns a\nflag indicating whether the range was updated.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFieldDataToAttributeDataFilter_StaticNew()
{
  return vtkFieldDataToAttributeDataFilter::New();
}

PyObject *PyVTKClass_vtkFieldDataToAttributeDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFieldDataToAttributeDataFilter_StaticNew,
    PyvtkFieldDataToAttributeDataFilter_Methods,
    "vtkFieldDataToAttributeDataFilter", modulename,
    NULL, NULL,
    PyvtkFieldDataToAttributeDataFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkFieldDataToAttributeDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkFieldDataToAttributeDataFilter - map field data to dataset\nattribute data\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkFieldDataToAttributeDataFilter is a class that maps field data\ninto dataset attributes. The input to this filter is any type of\ndataset and the output is the same dataset (geometry/topology) with\nnew attribute data (attribute data is passed through if not replaced\nduring filter execution).\n\nTo use this filter you must specify which field data from the input\ndataset to use. There are three possi",
    "bilities: the cell field data,\nthe point field data, or the field data associated with the data\nobject superclass. Then you specify which attribute data to create:\neither cell attribute data or point attribute data.  Finally, you\nmust define how to construct the various attribute data types (e.g.,\nscalars, vectors, normals, etc.) from the arrays and the components\nof the arrays from the field data",
    ". This is done by associating\ncomponents in the input field with components making up the attribute\ndata. For example, you would specify a scalar with three components\n(RGB) by assigning components from the field for the R, then G, then\nB values of the scalars.  You may also have to specify component\nranges (for each R-G-B) to make sure that the number of R, G, and B\nvalues is the same. Also, you ",
    "may want to normalize the components\nwhich helps distribute the data uniformly.\n\nThis filter is often used in conjunction with\nvtkDataObjectToDataSetFilter.  vtkDataObjectToDataSetFilter filter\ngenerates dataset topology and geometry and passes its input field\ndata along to its output. Then this filter is used to generate the\nattribute data to go along with the dataset.\n\nCaveats:\n\nMake sure that t",
    "he data you extract is consistent. That is, if you\nhave N points, extract N point attributes (scalars, vectors, etc.).\n\nSee Also:\n\nvtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\nvtkDataSetAttributes vtkDataArray\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFieldDataToAttributeDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFieldDataToAttributeDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFieldDataToAttributeDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 5; c++)
    {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_DATA_OBJECT_FIELD", 0 },
        { "VTK_POINT_DATA_FIELD", 1 },
        { "VTK_CELL_DATA_FIELD", 2 },
        { "VTK_CELL_DATA", 0 },
        { "VTK_POINT_DATA", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

