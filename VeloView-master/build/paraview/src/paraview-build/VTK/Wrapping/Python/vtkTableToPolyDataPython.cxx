// python wrapper for vtkTableToPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTableToPolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTableToPolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTableToPolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkTableToPolyData_Doc();


static PyObject *
PyvtkTableToPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTableToPolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableToPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTableToPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableToPolyData::NewInstance());

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
PyvtkTableToPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTableToPolyData *tempr = vtkTableToPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetXColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXColumn(temp0);
      }
    else
      {
      op->vtkTableToPolyData::SetXColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetXColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXColumn() :
      op->vtkTableToPolyData::GetXColumn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetXColumnIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXColumnIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXColumnIndex(temp0);
      }
    else
      {
      op->vtkTableToPolyData::SetXColumnIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetXColumnIndexMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXColumnIndexMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXColumnIndexMinValue() :
      op->vtkTableToPolyData::GetXColumnIndexMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetXColumnIndexMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXColumnIndexMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXColumnIndexMaxValue() :
      op->vtkTableToPolyData::GetXColumnIndexMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetXColumnIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXColumnIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXColumnIndex() :
      op->vtkTableToPolyData::GetXColumnIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXComponent(temp0);
      }
    else
      {
      op->vtkTableToPolyData::SetXComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetXComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXComponentMinValue() :
      op->vtkTableToPolyData::GetXComponentMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetXComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXComponentMaxValue() :
      op->vtkTableToPolyData::GetXComponentMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXComponent() :
      op->vtkTableToPolyData::GetXComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetYColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYColumn(temp0);
      }
    else
      {
      op->vtkTableToPolyData::SetYColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetYColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetYColumn() :
      op->vtkTableToPolyData::GetYColumn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetYColumnIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYColumnIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYColumnIndex(temp0);
      }
    else
      {
      op->vtkTableToPolyData::SetYColumnIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetYColumnIndexMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYColumnIndexMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYColumnIndexMinValue() :
      op->vtkTableToPolyData::GetYColumnIndexMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetYColumnIndexMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYColumnIndexMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYColumnIndexMaxValue() :
      op->vtkTableToPolyData::GetYColumnIndexMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetYColumnIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYColumnIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYColumnIndex() :
      op->vtkTableToPolyData::GetYColumnIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYComponent(temp0);
      }
    else
      {
      op->vtkTableToPolyData::SetYComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetYComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYComponentMinValue() :
      op->vtkTableToPolyData::GetYComponentMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetYComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYComponentMaxValue() :
      op->vtkTableToPolyData::GetYComponentMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYComponent() :
      op->vtkTableToPolyData::GetYComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetZColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZColumn(temp0);
      }
    else
      {
      op->vtkTableToPolyData::SetZColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetZColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetZColumn() :
      op->vtkTableToPolyData::GetZColumn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetZColumnIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZColumnIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZColumnIndex(temp0);
      }
    else
      {
      op->vtkTableToPolyData::SetZColumnIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetZColumnIndexMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZColumnIndexMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZColumnIndexMinValue() :
      op->vtkTableToPolyData::GetZColumnIndexMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetZColumnIndexMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZColumnIndexMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZColumnIndexMaxValue() :
      op->vtkTableToPolyData::GetZColumnIndexMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetZColumnIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZColumnIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZColumnIndex() :
      op->vtkTableToPolyData::GetZColumnIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetZComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZComponent(temp0);
      }
    else
      {
      op->vtkTableToPolyData::SetZComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetZComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZComponentMinValue() :
      op->vtkTableToPolyData::GetZComponentMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetZComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZComponentMaxValue() :
      op->vtkTableToPolyData::GetZComponentMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetZComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZComponent() :
      op->vtkTableToPolyData::GetZComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetCreate2DPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreate2DPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCreate2DPoints(temp0);
      }
    else
      {
      op->vtkTableToPolyData::SetCreate2DPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetCreate2DPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreate2DPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCreate2DPoints() :
      op->vtkTableToPolyData::GetCreate2DPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_Create2DPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create2DPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Create2DPointsOn();
      }
    else
      {
      op->vtkTableToPolyData::Create2DPointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_Create2DPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create2DPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Create2DPointsOff();
      }
    else
      {
      op->vtkTableToPolyData::Create2DPointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetPreserveCoordinateColumnsAsDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveCoordinateColumnsAsDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreserveCoordinateColumnsAsDataArrays(temp0);
      }
    else
      {
      op->vtkTableToPolyData::SetPreserveCoordinateColumnsAsDataArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetPreserveCoordinateColumnsAsDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveCoordinateColumnsAsDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPreserveCoordinateColumnsAsDataArrays() :
      op->vtkTableToPolyData::GetPreserveCoordinateColumnsAsDataArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_PreserveCoordinateColumnsAsDataArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveCoordinateColumnsAsDataArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreserveCoordinateColumnsAsDataArraysOn();
      }
    else
      {
      op->vtkTableToPolyData::PreserveCoordinateColumnsAsDataArraysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToPolyData_PreserveCoordinateColumnsAsDataArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveCoordinateColumnsAsDataArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreserveCoordinateColumnsAsDataArraysOff();
      }
    else
      {
      op->vtkTableToPolyData::PreserveCoordinateColumnsAsDataArraysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTableToPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkTableToPolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTableToPolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTableToPolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTableToPolyData\nC++: vtkTableToPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTableToPolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTableToPolyData\nC++: vtkTableToPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetXColumn", PyvtkTableToPolyData_SetXColumn, METH_VARARGS,
   (char*)"V.SetXColumn(string)\nC++: void SetXColumn(char *)\n\nSet the name of the column to use as the X coordinate for the\npoints.\n"},
  {(char*)"GetXColumn", PyvtkTableToPolyData_GetXColumn, METH_VARARGS,
   (char*)"V.GetXColumn() -> string\nC++: char *GetXColumn()\n\nSet the name of the column to use as the X coordinate for the\npoints.\n"},
  {(char*)"SetXColumnIndex", PyvtkTableToPolyData_SetXColumnIndex, METH_VARARGS,
   (char*)"V.SetXColumnIndex(int)\nC++: void SetXColumnIndex(int)\n\nSet the index of the column to use as the X coordinate for the\npoints.\n"},
  {(char*)"GetXColumnIndexMinValue", PyvtkTableToPolyData_GetXColumnIndexMinValue, METH_VARARGS,
   (char*)"V.GetXColumnIndexMinValue() -> int\nC++: int GetXColumnIndexMinValue()\n\nSet the index of the column to use as the X coordinate for the\npoints.\n"},
  {(char*)"GetXColumnIndexMaxValue", PyvtkTableToPolyData_GetXColumnIndexMaxValue, METH_VARARGS,
   (char*)"V.GetXColumnIndexMaxValue() -> int\nC++: int GetXColumnIndexMaxValue()\n\nSet the index of the column to use as the X coordinate for the\npoints.\n"},
  {(char*)"GetXColumnIndex", PyvtkTableToPolyData_GetXColumnIndex, METH_VARARGS,
   (char*)"V.GetXColumnIndex() -> int\nC++: int GetXColumnIndex()\n\nSet the index of the column to use as the X coordinate for the\npoints.\n"},
  {(char*)"SetXComponent", PyvtkTableToPolyData_SetXComponent, METH_VARARGS,
   (char*)"V.SetXComponent(int)\nC++: void SetXComponent(int)\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {(char*)"GetXComponentMinValue", PyvtkTableToPolyData_GetXComponentMinValue, METH_VARARGS,
   (char*)"V.GetXComponentMinValue() -> int\nC++: int GetXComponentMinValue()\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {(char*)"GetXComponentMaxValue", PyvtkTableToPolyData_GetXComponentMaxValue, METH_VARARGS,
   (char*)"V.GetXComponentMaxValue() -> int\nC++: int GetXComponentMaxValue()\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {(char*)"GetXComponent", PyvtkTableToPolyData_GetXComponent, METH_VARARGS,
   (char*)"V.GetXComponent() -> int\nC++: int GetXComponent()\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {(char*)"SetYColumn", PyvtkTableToPolyData_SetYColumn, METH_VARARGS,
   (char*)"V.SetYColumn(string)\nC++: void SetYColumn(char *)\n\nSet the name of the column to use as the Y coordinate for the\npoints. Default is 0.\n"},
  {(char*)"GetYColumn", PyvtkTableToPolyData_GetYColumn, METH_VARARGS,
   (char*)"V.GetYColumn() -> string\nC++: char *GetYColumn()\n\nSet the name of the column to use as the Y coordinate for the\npoints. Default is 0.\n"},
  {(char*)"SetYColumnIndex", PyvtkTableToPolyData_SetYColumnIndex, METH_VARARGS,
   (char*)"V.SetYColumnIndex(int)\nC++: void SetYColumnIndex(int)\n\nSet the index of the column to use as the Y coordinate for the\npoints.\n"},
  {(char*)"GetYColumnIndexMinValue", PyvtkTableToPolyData_GetYColumnIndexMinValue, METH_VARARGS,
   (char*)"V.GetYColumnIndexMinValue() -> int\nC++: int GetYColumnIndexMinValue()\n\nSet the index of the column to use as the Y coordinate for the\npoints.\n"},
  {(char*)"GetYColumnIndexMaxValue", PyvtkTableToPolyData_GetYColumnIndexMaxValue, METH_VARARGS,
   (char*)"V.GetYColumnIndexMaxValue() -> int\nC++: int GetYColumnIndexMaxValue()\n\nSet the index of the column to use as the Y coordinate for the\npoints.\n"},
  {(char*)"GetYColumnIndex", PyvtkTableToPolyData_GetYColumnIndex, METH_VARARGS,
   (char*)"V.GetYColumnIndex() -> int\nC++: int GetYColumnIndex()\n\nSet the index of the column to use as the Y coordinate for the\npoints.\n"},
  {(char*)"SetYComponent", PyvtkTableToPolyData_SetYComponent, METH_VARARGS,
   (char*)"V.SetYComponent(int)\nC++: void SetYComponent(int)\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetYComponentMinValue", PyvtkTableToPolyData_GetYComponentMinValue, METH_VARARGS,
   (char*)"V.GetYComponentMinValue() -> int\nC++: int GetYComponentMinValue()\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetYComponentMaxValue", PyvtkTableToPolyData_GetYComponentMaxValue, METH_VARARGS,
   (char*)"V.GetYComponentMaxValue() -> int\nC++: int GetYComponentMaxValue()\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetYComponent", PyvtkTableToPolyData_GetYComponent, METH_VARARGS,
   (char*)"V.GetYComponent() -> int\nC++: int GetYComponent()\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"SetZColumn", PyvtkTableToPolyData_SetZColumn, METH_VARARGS,
   (char*)"V.SetZColumn(string)\nC++: void SetZColumn(char *)\n\nSet the name of the column to use as the Z coordinate for the\npoints. Default is 0.\n"},
  {(char*)"GetZColumn", PyvtkTableToPolyData_GetZColumn, METH_VARARGS,
   (char*)"V.GetZColumn() -> string\nC++: char *GetZColumn()\n\nSet the name of the column to use as the Z coordinate for the\npoints. Default is 0.\n"},
  {(char*)"SetZColumnIndex", PyvtkTableToPolyData_SetZColumnIndex, METH_VARARGS,
   (char*)"V.SetZColumnIndex(int)\nC++: void SetZColumnIndex(int)\n\nSet the index of the column to use as the Z coordinate for the\npoints.\n"},
  {(char*)"GetZColumnIndexMinValue", PyvtkTableToPolyData_GetZColumnIndexMinValue, METH_VARARGS,
   (char*)"V.GetZColumnIndexMinValue() -> int\nC++: int GetZColumnIndexMinValue()\n\nSet the index of the column to use as the Z coordinate for the\npoints.\n"},
  {(char*)"GetZColumnIndexMaxValue", PyvtkTableToPolyData_GetZColumnIndexMaxValue, METH_VARARGS,
   (char*)"V.GetZColumnIndexMaxValue() -> int\nC++: int GetZColumnIndexMaxValue()\n\nSet the index of the column to use as the Z coordinate for the\npoints.\n"},
  {(char*)"GetZColumnIndex", PyvtkTableToPolyData_GetZColumnIndex, METH_VARARGS,
   (char*)"V.GetZColumnIndex() -> int\nC++: int GetZColumnIndex()\n\nSet the index of the column to use as the Z coordinate for the\npoints.\n"},
  {(char*)"SetZComponent", PyvtkTableToPolyData_SetZComponent, METH_VARARGS,
   (char*)"V.SetZComponent(int)\nC++: void SetZComponent(int)\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetZComponentMinValue", PyvtkTableToPolyData_GetZComponentMinValue, METH_VARARGS,
   (char*)"V.GetZComponentMinValue() -> int\nC++: int GetZComponentMinValue()\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetZComponentMaxValue", PyvtkTableToPolyData_GetZComponentMaxValue, METH_VARARGS,
   (char*)"V.GetZComponentMaxValue() -> int\nC++: int GetZComponentMaxValue()\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetZComponent", PyvtkTableToPolyData_GetZComponent, METH_VARARGS,
   (char*)"V.GetZComponent() -> int\nC++: int GetZComponent()\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"SetCreate2DPoints", PyvtkTableToPolyData_SetCreate2DPoints, METH_VARARGS,
   (char*)"V.SetCreate2DPoints(bool)\nC++: void SetCreate2DPoints(bool a)\n\nSpecify whether the points of the polydata are 3D or 2D. If this\nis set to true then the Z Column will be ignored and the z value\nof each point on the polydata will be set to 0. By default this\nwill be off.\n"},
  {(char*)"GetCreate2DPoints", PyvtkTableToPolyData_GetCreate2DPoints, METH_VARARGS,
   (char*)"V.GetCreate2DPoints() -> bool\nC++: bool GetCreate2DPoints()\n\nSpecify whether the points of the polydata are 3D or 2D. If this\nis set to true then the Z Column will be ignored and the z value\nof each point on the polydata will be set to 0. By default this\nwill be off.\n"},
  {(char*)"Create2DPointsOn", PyvtkTableToPolyData_Create2DPointsOn, METH_VARARGS,
   (char*)"V.Create2DPointsOn()\nC++: void Create2DPointsOn()\n\nSpecify whether the points of the polydata are 3D or 2D. If this\nis set to true then the Z Column will be ignored and the z value\nof each point on the polydata will be set to 0. By default this\nwill be off.\n"},
  {(char*)"Create2DPointsOff", PyvtkTableToPolyData_Create2DPointsOff, METH_VARARGS,
   (char*)"V.Create2DPointsOff()\nC++: void Create2DPointsOff()\n\nSpecify whether the points of the polydata are 3D or 2D. If this\nis set to true then the Z Column will be ignored and the z value\nof each point on the polydata will be set to 0. By default this\nwill be off.\n"},
  {(char*)"SetPreserveCoordinateColumnsAsDataArrays", PyvtkTableToPolyData_SetPreserveCoordinateColumnsAsDataArrays, METH_VARARGS,
   (char*)"V.SetPreserveCoordinateColumnsAsDataArrays(bool)\nC++: void SetPreserveCoordinateColumnsAsDataArrays(bool a)\n\nAllow user to keep columns specified as X,Y,Z as Data arrays. By\ndefault this will be off.\n"},
  {(char*)"GetPreserveCoordinateColumnsAsDataArrays", PyvtkTableToPolyData_GetPreserveCoordinateColumnsAsDataArrays, METH_VARARGS,
   (char*)"V.GetPreserveCoordinateColumnsAsDataArrays() -> bool\nC++: bool GetPreserveCoordinateColumnsAsDataArrays()\n\nAllow user to keep columns specified as X,Y,Z as Data arrays. By\ndefault this will be off.\n"},
  {(char*)"PreserveCoordinateColumnsAsDataArraysOn", PyvtkTableToPolyData_PreserveCoordinateColumnsAsDataArraysOn, METH_VARARGS,
   (char*)"V.PreserveCoordinateColumnsAsDataArraysOn()\nC++: void PreserveCoordinateColumnsAsDataArraysOn()\n\nAllow user to keep columns specified as X,Y,Z as Data arrays. By\ndefault this will be off.\n"},
  {(char*)"PreserveCoordinateColumnsAsDataArraysOff", PyvtkTableToPolyData_PreserveCoordinateColumnsAsDataArraysOff, METH_VARARGS,
   (char*)"V.PreserveCoordinateColumnsAsDataArraysOff()\nC++: void PreserveCoordinateColumnsAsDataArraysOff()\n\nAllow user to keep columns specified as X,Y,Z as Data arrays. By\ndefault this will be off.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTableToPolyData_StaticNew()
{
  return vtkTableToPolyData::New();
}

PyObject *PyVTKClass_vtkTableToPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTableToPolyData_StaticNew,
    PyvtkTableToPolyData_Methods,
    "vtkTableToPolyData", modulename,
    NULL, NULL,
    PyvtkTableToPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTableToPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkTableToPolyData - filter used to convert a vtkTable to a\nvtkPolyData\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkTableToPolyData is a filter used to convert a vtkTable  to a\nvtkPolyData consisting of vertices.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTableToPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTableToPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTableToPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

