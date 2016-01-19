// python wrapper for vtkCleanPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCleanPolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCleanPolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCleanPolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkCleanPolyData_Doc();


static PyObject *
PyvtkCleanPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCleanPolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCleanPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCleanPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCleanPolyData::NewInstance());

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
PyvtkCleanPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCleanPolyData *tempr = vtkCleanPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetToleranceIsAbsolute(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetToleranceIsAbsolute(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ToleranceIsAbsoluteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ToleranceIsAbsoluteOn();
      }
    else
      {
      op->vtkCleanPolyData::ToleranceIsAbsoluteOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ToleranceIsAbsoluteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ToleranceIsAbsoluteOff();
      }
    else
      {
      op->vtkCleanPolyData::ToleranceIsAbsoluteOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceIsAbsolute() :
      op->vtkCleanPolyData::GetToleranceIsAbsolute());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkCleanPolyData::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkCleanPolyData::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkCleanPolyData::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetAbsoluteTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAbsoluteTolerance(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetAbsoluteTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetAbsoluteToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteToleranceMinValue() :
      op->vtkCleanPolyData::GetAbsoluteToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetAbsoluteToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteToleranceMaxValue() :
      op->vtkCleanPolyData::GetAbsoluteToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetAbsoluteTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteTolerance() :
      op->vtkCleanPolyData::GetAbsoluteTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetConvertLinesToPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertLinesToPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertLinesToPoints(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetConvertLinesToPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertLinesToPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertLinesToPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertLinesToPointsOn();
      }
    else
      {
      op->vtkCleanPolyData::ConvertLinesToPointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertLinesToPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertLinesToPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertLinesToPointsOff();
      }
    else
      {
      op->vtkCleanPolyData::ConvertLinesToPointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetConvertLinesToPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertLinesToPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetConvertLinesToPoints() :
      op->vtkCleanPolyData::GetConvertLinesToPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetConvertPolysToLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertPolysToLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertPolysToLines(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetConvertPolysToLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertPolysToLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertPolysToLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertPolysToLinesOn();
      }
    else
      {
      op->vtkCleanPolyData::ConvertPolysToLinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertPolysToLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertPolysToLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertPolysToLinesOff();
      }
    else
      {
      op->vtkCleanPolyData::ConvertPolysToLinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetConvertPolysToLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertPolysToLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetConvertPolysToLines() :
      op->vtkCleanPolyData::GetConvertPolysToLines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetConvertStripsToPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertStripsToPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertStripsToPolys(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetConvertStripsToPolys(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertStripsToPolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertStripsToPolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertStripsToPolysOn();
      }
    else
      {
      op->vtkCleanPolyData::ConvertStripsToPolysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertStripsToPolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertStripsToPolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertStripsToPolysOff();
      }
    else
      {
      op->vtkCleanPolyData::ConvertStripsToPolysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetConvertStripsToPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertStripsToPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetConvertStripsToPolys() :
      op->vtkCleanPolyData::GetConvertStripsToPolys());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetPointMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointMerging(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetPointMerging(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetPointMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointMerging() :
      op->vtkCleanPolyData::GetPointMerging());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_PointMergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointMergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointMergingOn();
      }
    else
      {
      op->vtkCleanPolyData::PointMergingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_PointMergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointMergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointMergingOff();
      }
    else
      {
      op->vtkCleanPolyData::PointMergingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkCleanPolyData::GetLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  vtkPolyData *temp0 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkPolyData")))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator(temp0);
      }
    else
      {
      op->vtkCleanPolyData::CreateDefaultLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ReleaseLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseLocator();
      }
    else
      {
      op->vtkCleanPolyData::ReleaseLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkCleanPolyData::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_OperateOnPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OperateOnPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

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
      op->OperateOnPoint(temp0, temp1);
      }
    else
      {
      op->vtkCleanPolyData::OperateOnPoint(temp0, temp1);
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
PyvtkCleanPolyData_OperateOnBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OperateOnBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->OperateOnBounds(temp0, temp1);
      }
    else
      {
      op->vtkCleanPolyData::OperateOnBounds(temp0, temp1);
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
PyvtkCleanPolyData_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPieceInvariant(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetPieceInvariant(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPieceInvariant() :
      op->vtkCleanPolyData::GetPieceInvariant());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_PieceInvariantOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PieceInvariantOn();
      }
    else
      {
      op->vtkCleanPolyData::PieceInvariantOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_PieceInvariantOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PieceInvariantOff();
      }
    else
      {
      op->vtkCleanPolyData::PieceInvariantOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPointsPrecision(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkCleanPolyData::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCleanPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkCleanPolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCleanPolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCleanPolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCleanPolyData\nC++: vtkCleanPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCleanPolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCleanPolyData\nC++: vtkCleanPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetToleranceIsAbsolute", PyvtkCleanPolyData_SetToleranceIsAbsolute, METH_VARARGS,
   (char*)"V.SetToleranceIsAbsolute(int)\nC++: void SetToleranceIsAbsolute(int a)\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {(char*)"ToleranceIsAbsoluteOn", PyvtkCleanPolyData_ToleranceIsAbsoluteOn, METH_VARARGS,
   (char*)"V.ToleranceIsAbsoluteOn()\nC++: void ToleranceIsAbsoluteOn()\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {(char*)"ToleranceIsAbsoluteOff", PyvtkCleanPolyData_ToleranceIsAbsoluteOff, METH_VARARGS,
   (char*)"V.ToleranceIsAbsoluteOff()\nC++: void ToleranceIsAbsoluteOff()\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {(char*)"GetToleranceIsAbsolute", PyvtkCleanPolyData_GetToleranceIsAbsolute, METH_VARARGS,
   (char*)"V.GetToleranceIsAbsolute() -> int\nC++: int GetToleranceIsAbsolute()\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {(char*)"SetTolerance", PyvtkCleanPolyData_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double)\n\nSpecify tolerance in terms of fraction of bounding box length.\nDefault is 0.0.\n"},
  {(char*)"GetToleranceMinValue", PyvtkCleanPolyData_GetToleranceMinValue, METH_VARARGS,
   (char*)"V.GetToleranceMinValue() -> float\nC++: double GetToleranceMinValue()\n\nSpecify tolerance in terms of fraction of bounding box length.\nDefault is 0.0.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkCleanPolyData_GetToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetToleranceMaxValue() -> float\nC++: double GetToleranceMaxValue()\n\nSpecify tolerance in terms of fraction of bounding box length.\nDefault is 0.0.\n"},
  {(char*)"GetTolerance", PyvtkCleanPolyData_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nSpecify tolerance in terms of fraction of bounding box length.\nDefault is 0.0.\n"},
  {(char*)"SetAbsoluteTolerance", PyvtkCleanPolyData_SetAbsoluteTolerance, METH_VARARGS,
   (char*)"V.SetAbsoluteTolerance(float)\nC++: void SetAbsoluteTolerance(double)\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {(char*)"GetAbsoluteToleranceMinValue", PyvtkCleanPolyData_GetAbsoluteToleranceMinValue, METH_VARARGS,
   (char*)"V.GetAbsoluteToleranceMinValue() -> float\nC++: double GetAbsoluteToleranceMinValue()\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {(char*)"GetAbsoluteToleranceMaxValue", PyvtkCleanPolyData_GetAbsoluteToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetAbsoluteToleranceMaxValue() -> float\nC++: double GetAbsoluteToleranceMaxValue()\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {(char*)"GetAbsoluteTolerance", PyvtkCleanPolyData_GetAbsoluteTolerance, METH_VARARGS,
   (char*)"V.GetAbsoluteTolerance() -> float\nC++: double GetAbsoluteTolerance()\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {(char*)"SetConvertLinesToPoints", PyvtkCleanPolyData_SetConvertLinesToPoints, METH_VARARGS,
   (char*)"V.SetConvertLinesToPoints(int)\nC++: void SetConvertLinesToPoints(int a)\n\nTurn on/off conversion of degenerate lines to points. Default is\nOn.\n"},
  {(char*)"ConvertLinesToPointsOn", PyvtkCleanPolyData_ConvertLinesToPointsOn, METH_VARARGS,
   (char*)"V.ConvertLinesToPointsOn()\nC++: void ConvertLinesToPointsOn()\n\nTurn on/off conversion of degenerate lines to points. Default is\nOn.\n"},
  {(char*)"ConvertLinesToPointsOff", PyvtkCleanPolyData_ConvertLinesToPointsOff, METH_VARARGS,
   (char*)"V.ConvertLinesToPointsOff()\nC++: void ConvertLinesToPointsOff()\n\nTurn on/off conversion of degenerate lines to points. Default is\nOn.\n"},
  {(char*)"GetConvertLinesToPoints", PyvtkCleanPolyData_GetConvertLinesToPoints, METH_VARARGS,
   (char*)"V.GetConvertLinesToPoints() -> int\nC++: int GetConvertLinesToPoints()\n\nTurn on/off conversion of degenerate lines to points. Default is\nOn.\n"},
  {(char*)"SetConvertPolysToLines", PyvtkCleanPolyData_SetConvertPolysToLines, METH_VARARGS,
   (char*)"V.SetConvertPolysToLines(int)\nC++: void SetConvertPolysToLines(int a)\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOn.\n"},
  {(char*)"ConvertPolysToLinesOn", PyvtkCleanPolyData_ConvertPolysToLinesOn, METH_VARARGS,
   (char*)"V.ConvertPolysToLinesOn()\nC++: void ConvertPolysToLinesOn()\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOn.\n"},
  {(char*)"ConvertPolysToLinesOff", PyvtkCleanPolyData_ConvertPolysToLinesOff, METH_VARARGS,
   (char*)"V.ConvertPolysToLinesOff()\nC++: void ConvertPolysToLinesOff()\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOn.\n"},
  {(char*)"GetConvertPolysToLines", PyvtkCleanPolyData_GetConvertPolysToLines, METH_VARARGS,
   (char*)"V.GetConvertPolysToLines() -> int\nC++: int GetConvertPolysToLines()\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOn.\n"},
  {(char*)"SetConvertStripsToPolys", PyvtkCleanPolyData_SetConvertStripsToPolys, METH_VARARGS,
   (char*)"V.SetConvertStripsToPolys(int)\nC++: void SetConvertStripsToPolys(int a)\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOn.\n"},
  {(char*)"ConvertStripsToPolysOn", PyvtkCleanPolyData_ConvertStripsToPolysOn, METH_VARARGS,
   (char*)"V.ConvertStripsToPolysOn()\nC++: void ConvertStripsToPolysOn()\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOn.\n"},
  {(char*)"ConvertStripsToPolysOff", PyvtkCleanPolyData_ConvertStripsToPolysOff, METH_VARARGS,
   (char*)"V.ConvertStripsToPolysOff()\nC++: void ConvertStripsToPolysOff()\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOn.\n"},
  {(char*)"GetConvertStripsToPolys", PyvtkCleanPolyData_GetConvertStripsToPolys, METH_VARARGS,
   (char*)"V.GetConvertStripsToPolys() -> int\nC++: int GetConvertStripsToPolys()\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOn.\n"},
  {(char*)"SetPointMerging", PyvtkCleanPolyData_SetPointMerging, METH_VARARGS,
   (char*)"V.SetPointMerging(int)\nC++: void SetPointMerging(int a)\n\nSet/Get a boolean value that controls whether point merging is\nperformed. If on, a locator will be used, and points laying\nwithin the appropriate tolerance may be merged. If off, points\nare never merged. By default, merging is on.\n"},
  {(char*)"GetPointMerging", PyvtkCleanPolyData_GetPointMerging, METH_VARARGS,
   (char*)"V.GetPointMerging() -> int\nC++: int GetPointMerging()\n\nSet/Get a boolean value that controls whether point merging is\nperformed. If on, a locator will be used, and points laying\nwithin the appropriate tolerance may be merged. If off, points\nare never merged. By default, merging is on.\n"},
  {(char*)"PointMergingOn", PyvtkCleanPolyData_PointMergingOn, METH_VARARGS,
   (char*)"V.PointMergingOn()\nC++: void PointMergingOn()\n\nSet/Get a boolean value that controls whether point merging is\nperformed. If on, a locator will be used, and points laying\nwithin the appropriate tolerance may be merged. If off, points\nare never merged. By default, merging is on.\n"},
  {(char*)"PointMergingOff", PyvtkCleanPolyData_PointMergingOff, METH_VARARGS,
   (char*)"V.PointMergingOff()\nC++: void PointMergingOff()\n\nSet/Get a boolean value that controls whether point merging is\nperformed. If on, a locator will be used, and points laying\nwithin the appropriate tolerance may be merged. If off, points\nare never merged. By default, merging is on.\n"},
  {(char*)"SetLocator", PyvtkCleanPolyData_SetLocator, METH_VARARGS,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: virtual void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet/Get a spatial locator for speeding the search process. By\ndefault an instance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkCleanPolyData_GetLocator, METH_VARARGS,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet/Get a spatial locator for speeding the search process. By\ndefault an instance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkCleanPolyData_CreateDefaultLocator, METH_VARARGS,
   (char*)"V.CreateDefaultLocator(vtkPolyData)\nC++: void CreateDefaultLocator(vtkPolyData *input=0)\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {(char*)"ReleaseLocator", PyvtkCleanPolyData_ReleaseLocator, METH_VARARGS,
   (char*)"V.ReleaseLocator()\nC++: void ReleaseLocator()\n\nRelease locator\n"},
  {(char*)"GetMTime", PyvtkCleanPolyData_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nGet the MTime of this object also considering the locator.\n"},
  {(char*)"OperateOnPoint", PyvtkCleanPolyData_OperateOnPoint, METH_VARARGS,
   (char*)"V.OperateOnPoint([float, float, float], [float, float, float])\nC++: virtual void OperateOnPoint(double in[3], double out[3])\n\nPerform operation on a point\n"},
  {(char*)"OperateOnBounds", PyvtkCleanPolyData_OperateOnBounds, METH_VARARGS,
   (char*)"V.OperateOnBounds([float, float, float, float, float, float],\n    [float, float, float, float, float, float])\nC++: virtual void OperateOnBounds(double in[6], double out[6])\n\nPerform operation on bounds\n"},
  {(char*)"SetPieceInvariant", PyvtkCleanPolyData_SetPieceInvariant, METH_VARARGS,
   (char*)"V.SetPieceInvariant(int)\nC++: void SetPieceInvariant(int a)\n\n"},
  {(char*)"GetPieceInvariant", PyvtkCleanPolyData_GetPieceInvariant, METH_VARARGS,
   (char*)"V.GetPieceInvariant() -> int\nC++: int GetPieceInvariant()\n\n"},
  {(char*)"PieceInvariantOn", PyvtkCleanPolyData_PieceInvariantOn, METH_VARARGS,
   (char*)"V.PieceInvariantOn()\nC++: void PieceInvariantOn()\n\n"},
  {(char*)"PieceInvariantOff", PyvtkCleanPolyData_PieceInvariantOff, METH_VARARGS,
   (char*)"V.PieceInvariantOff()\nC++: void PieceInvariantOff()\n\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkCleanPolyData_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkCleanPolyData_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCleanPolyData_StaticNew()
{
  return vtkCleanPolyData::New();
}

PyObject *PyVTKClass_vtkCleanPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCleanPolyData_StaticNew,
    PyvtkCleanPolyData_Methods,
    "vtkCleanPolyData", modulename,
    NULL, NULL,
    PyvtkCleanPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCleanPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkCleanPolyData - merge duplicate points, and/or remove unused\npoints and/or remove degenerate cells\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkCleanPolyData is a filter that takes polygonal data as input and\ngenerates polygonal data as output. vtkCleanPolyData will merge\nduplicate points (within specified tolerance and if enabled),\neliminate points that are not used in any cell, and if enabled,\ntransform degenerate cells into appropriate forms (for example, a\ntriangle is converted into a line if two points of triangle are\nmerged).\n\nCo",
    "nversion of degenerate cells is controlled by the flags\nConvertLinesToPoints, ConvertPolysToLines, ConvertStripsToPolys which\nact cumulatively such that a degenerate strip may become a poly. The\nfull set is Line with 1 points -> Vert (if ConvertLinesToPoints) Poly\nwith 2 points -> Line (if ConvertPolysToLines) Poly with 1 points ->\nVert (if ConvertPolysToLines && ConvertLinesToPoints) Strp with 3\n",
    "points -> Poly (if ConvertStripsToPolys) Strp with 2 points -> Line\n(if ConvertStripsToPolys && ConvertPolysToLines) Strp with 1 points\n-> Vert (if ConvertStripsToPolys && ConvertPolysToLines\n  && ConvertLinesToPoints)\n\nIf tolerance is specified precisely=0.0, then vtkCleanPolyData will\nuse the vtkMergePoints object to merge points (which is faster).\nOtherwise the slower vtkIncrementalPointLocator",
    " is used.  Before\ninserting points into the point locator, this class calls a function\nOperateOnPoint which can be used (in subclasses) to further refine\nthe cleaning process. See vtkQuantizePolyDataPoints.\n\nNote that merging of points can be disabled. In this case, a point\nlocator will not be used, and points that are not used by any cells\nwill be eliminated, but never merged.\n\nCaveats:\n\nMerging ",
    "points can alter topology, including introducing non-manifold\nforms. The tolerance should be chosen carefully to avoid these\nproblems. Subclasses should handle OperateOnBounds as well as\nOperateOnPoint to ensure that the locator is correctly initialized\n(i.e. all modified points must lie inside modified bounds).\n\nIf you wish to operate on a set of coordinates that has no cells, you\nmust add a vtkP",
    "olyVertex cell with all of the points to the PolyData\n(or use a vtkVertexGlyphFilter) before using the vtkCleanPolyData\nfilter.\n\nSee Also:\n\nvtkQuantizePolyDataPoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCleanPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCleanPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCleanPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

