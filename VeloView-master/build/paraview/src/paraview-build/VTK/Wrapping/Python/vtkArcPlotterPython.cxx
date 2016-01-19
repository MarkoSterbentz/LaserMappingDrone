// python wrapper for vtkArcPlotter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkArcPlotter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkArcPlotter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkArcPlotterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkArcPlotter_Doc();


static PyObject *
PyvtkArcPlotter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkArcPlotter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArcPlotter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArcPlotter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArcPlotter::NewInstance());

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
PyvtkArcPlotter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkArcPlotter *tempr = vtkArcPlotter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  vtkCamera *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->SetCamera(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkArcPlotter::GetCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlotMode(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetPlotMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetPlotMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPlotMode() :
      op->vtkArcPlotter::GetPlotMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlotModeToPlotScalars();
      }
    else
      {
      op->vtkArcPlotter::SetPlotModeToPlotScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlotModeToPlotVectors();
      }
    else
      {
      op->vtkArcPlotter::SetPlotModeToPlotVectors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlotModeToPlotNormals();
      }
    else
      {
      op->vtkArcPlotter::SetPlotModeToPlotNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlotModeToPlotTCoords();
      }
    else
      {
      op->vtkArcPlotter::SetPlotModeToPlotTCoords();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlotModeToPlotTensors();
      }
    else
      {
      op->vtkArcPlotter::SetPlotModeToPlotTensors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlotModeToPlotFieldData();
      }
    else
      {
      op->vtkArcPlotter::SetPlotModeToPlotFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlotComponent(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetPlotComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetPlotComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPlotComponent() :
      op->vtkArcPlotter::GetPlotComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkArcPlotter::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkArcPlotter::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkArcPlotter::GetRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeight(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetHeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHeightMinValue() :
      op->vtkArcPlotter::GetHeightMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetHeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHeightMaxValue() :
      op->vtkArcPlotter::GetHeightMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkArcPlotter::GetHeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOffset(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOffsetMinValue() :
      op->vtkArcPlotter::GetOffsetMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOffsetMaxValue() :
      op->vtkArcPlotter::GetOffsetMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkArcPlotter::GetOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDefaultNormal(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetUseDefaultNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseDefaultNormal() :
      op->vtkArcPlotter::GetUseDefaultNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_UseDefaultNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDefaultNormalOn();
      }
    else
      {
      op->vtkArcPlotter::UseDefaultNormalOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_UseDefaultNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDefaultNormalOff();
      }
    else
      {
      op->vtkArcPlotter::UseDefaultNormalOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetDefaultNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetDefaultNormal(temp0, temp1, temp2);
      }
    else
      {
      op->vtkArcPlotter::SetDefaultNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcPlotter_SetDefaultNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  float temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultNormal(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetDefaultNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcPlotter_SetDefaultNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkArcPlotter_SetDefaultNormal_s1(self, args);
    case 1:
      return PyvtkArcPlotter_SetDefaultNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDefaultNormal");
  return NULL;
}



static PyObject *
PyvtkArcPlotter_GetDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetDefaultNormal() :
      op->vtkArcPlotter::GetDefaultNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldDataArray(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetFieldDataArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetFieldDataArrayMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArrayMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldDataArrayMinValue() :
      op->vtkArcPlotter::GetFieldDataArrayMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetFieldDataArrayMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArrayMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldDataArrayMaxValue() :
      op->vtkArcPlotter::GetFieldDataArrayMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldDataArray() :
      op->vtkArcPlotter::GetFieldDataArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkArcPlotter::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkArcPlotter_Methods[] = {
  {(char*)"GetClassName", PyvtkArcPlotter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArcPlotter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArcPlotter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkArcPlotter\nC++: vtkArcPlotter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkArcPlotter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkArcPlotter\nC++: vtkArcPlotter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCamera", PyvtkArcPlotter_SetCamera, METH_VARARGS,
   (char*)"V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSpecify a camera used to orient the plot along the arc. If no\ncamera is specified, then the orientation of the plot is\narbitrary.\n"},
  {(char*)"GetCamera", PyvtkArcPlotter_GetCamera, METH_VARARGS,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nSpecify a camera used to orient the plot along the arc. If no\ncamera is specified, then the orientation of the plot is\narbitrary.\n"},
  {(char*)"SetPlotMode", PyvtkArcPlotter_SetPlotMode, METH_VARARGS,
   (char*)"V.SetPlotMode(int)\nC++: void SetPlotMode(int a)\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {(char*)"GetPlotMode", PyvtkArcPlotter_GetPlotMode, METH_VARARGS,
   (char*)"V.GetPlotMode() -> int\nC++: int GetPlotMode()\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {(char*)"SetPlotModeToPlotScalars", PyvtkArcPlotter_SetPlotModeToPlotScalars, METH_VARARGS,
   (char*)"V.SetPlotModeToPlotScalars()\nC++: void SetPlotModeToPlotScalars()\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {(char*)"SetPlotModeToPlotVectors", PyvtkArcPlotter_SetPlotModeToPlotVectors, METH_VARARGS,
   (char*)"V.SetPlotModeToPlotVectors()\nC++: void SetPlotModeToPlotVectors()\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {(char*)"SetPlotModeToPlotNormals", PyvtkArcPlotter_SetPlotModeToPlotNormals, METH_VARARGS,
   (char*)"V.SetPlotModeToPlotNormals()\nC++: void SetPlotModeToPlotNormals()\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {(char*)"SetPlotModeToPlotTCoords", PyvtkArcPlotter_SetPlotModeToPlotTCoords, METH_VARARGS,
   (char*)"V.SetPlotModeToPlotTCoords()\nC++: void SetPlotModeToPlotTCoords()\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {(char*)"SetPlotModeToPlotTensors", PyvtkArcPlotter_SetPlotModeToPlotTensors, METH_VARARGS,
   (char*)"V.SetPlotModeToPlotTensors()\nC++: void SetPlotModeToPlotTensors()\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {(char*)"SetPlotModeToPlotFieldData", PyvtkArcPlotter_SetPlotModeToPlotFieldData, METH_VARARGS,
   (char*)"V.SetPlotModeToPlotFieldData()\nC++: void SetPlotModeToPlotFieldData()\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {(char*)"SetPlotComponent", PyvtkArcPlotter_SetPlotComponent, METH_VARARGS,
   (char*)"V.SetPlotComponent(int)\nC++: void SetPlotComponent(int a)\n\nSet/Get the component number to plot if the data has more than\none component. If the value of the plot component is == (-1),\nthen all the components will be plotted.\n"},
  {(char*)"GetPlotComponent", PyvtkArcPlotter_GetPlotComponent, METH_VARARGS,
   (char*)"V.GetPlotComponent() -> int\nC++: int GetPlotComponent()\n\nSet/Get the component number to plot if the data has more than\none component. If the value of the plot component is == (-1),\nthen all the components will be plotted.\n"},
  {(char*)"SetRadius", PyvtkArcPlotter_SetRadius, METH_VARARGS,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double)\n\nSet the radius of the \"median\" value of the first plotted\ncomponent.\n"},
  {(char*)"GetRadiusMinValue", PyvtkArcPlotter_GetRadiusMinValue, METH_VARARGS,
   (char*)"V.GetRadiusMinValue() -> float\nC++: double GetRadiusMinValue()\n\nSet the radius of the \"median\" value of the first plotted\ncomponent.\n"},
  {(char*)"GetRadiusMaxValue", PyvtkArcPlotter_GetRadiusMaxValue, METH_VARARGS,
   (char*)"V.GetRadiusMaxValue() -> float\nC++: double GetRadiusMaxValue()\n\nSet the radius of the \"median\" value of the first plotted\ncomponent.\n"},
  {(char*)"GetRadius", PyvtkArcPlotter_GetRadius, METH_VARARGS,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet the radius of the \"median\" value of the first plotted\ncomponent.\n"},
  {(char*)"SetHeight", PyvtkArcPlotter_SetHeight, METH_VARARGS,
   (char*)"V.SetHeight(float)\nC++: void SetHeight(double)\n\nSet the height of the plot. (The radius combined with the height\ndefine the location of the plot relative to the generating\npolyline.)\n"},
  {(char*)"GetHeightMinValue", PyvtkArcPlotter_GetHeightMinValue, METH_VARARGS,
   (char*)"V.GetHeightMinValue() -> float\nC++: double GetHeightMinValue()\n\nSet the height of the plot. (The radius combined with the height\ndefine the location of the plot relative to the generating\npolyline.)\n"},
  {(char*)"GetHeightMaxValue", PyvtkArcPlotter_GetHeightMaxValue, METH_VARARGS,
   (char*)"V.GetHeightMaxValue() -> float\nC++: double GetHeightMaxValue()\n\nSet the height of the plot. (The radius combined with the height\ndefine the location of the plot relative to the generating\npolyline.)\n"},
  {(char*)"GetHeight", PyvtkArcPlotter_GetHeight, METH_VARARGS,
   (char*)"V.GetHeight() -> float\nC++: double GetHeight()\n\nSet the height of the plot. (The radius combined with the height\ndefine the location of the plot relative to the generating\npolyline.)\n"},
  {(char*)"SetOffset", PyvtkArcPlotter_SetOffset, METH_VARARGS,
   (char*)"V.SetOffset(float)\nC++: void SetOffset(double)\n\nSpecify an offset that translates each subsequent plot (if there\nis more than one component plotted) from the defining arc (i.e.,\npolyline).\n"},
  {(char*)"GetOffsetMinValue", PyvtkArcPlotter_GetOffsetMinValue, METH_VARARGS,
   (char*)"V.GetOffsetMinValue() -> float\nC++: double GetOffsetMinValue()\n\nSpecify an offset that translates each subsequent plot (if there\nis more than one component plotted) from the defining arc (i.e.,\npolyline).\n"},
  {(char*)"GetOffsetMaxValue", PyvtkArcPlotter_GetOffsetMaxValue, METH_VARARGS,
   (char*)"V.GetOffsetMaxValue() -> float\nC++: double GetOffsetMaxValue()\n\nSpecify an offset that translates each subsequent plot (if there\nis more than one component plotted) from the defining arc (i.e.,\npolyline).\n"},
  {(char*)"GetOffset", PyvtkArcPlotter_GetOffset, METH_VARARGS,
   (char*)"V.GetOffset() -> float\nC++: double GetOffset()\n\nSpecify an offset that translates each subsequent plot (if there\nis more than one component plotted) from the defining arc (i.e.,\npolyline).\n"},
  {(char*)"SetUseDefaultNormal", PyvtkArcPlotter_SetUseDefaultNormal, METH_VARARGS,
   (char*)"V.SetUseDefaultNormal(int)\nC++: void SetUseDefaultNormal(int a)\n\nSet a boolean to control whether to use default normals. By\ndefault, normals are automatically computed from the generating\npolyline and camera.\n"},
  {(char*)"GetUseDefaultNormal", PyvtkArcPlotter_GetUseDefaultNormal, METH_VARARGS,
   (char*)"V.GetUseDefaultNormal() -> int\nC++: int GetUseDefaultNormal()\n\nSet a boolean to control whether to use default normals. By\ndefault, normals are automatically computed from the generating\npolyline and camera.\n"},
  {(char*)"UseDefaultNormalOn", PyvtkArcPlotter_UseDefaultNormalOn, METH_VARARGS,
   (char*)"V.UseDefaultNormalOn()\nC++: void UseDefaultNormalOn()\n\nSet a boolean to control whether to use default normals. By\ndefault, normals are automatically computed from the generating\npolyline and camera.\n"},
  {(char*)"UseDefaultNormalOff", PyvtkArcPlotter_UseDefaultNormalOff, METH_VARARGS,
   (char*)"V.UseDefaultNormalOff()\nC++: void UseDefaultNormalOff()\n\nSet a boolean to control whether to use default normals. By\ndefault, normals are automatically computed from the generating\npolyline and camera.\n"},
  {(char*)"SetDefaultNormal", PyvtkArcPlotter_SetDefaultNormal, METH_VARARGS,
   (char*)"V.SetDefaultNormal(float, float, float)\nC++: void SetDefaultNormal(float, float, float)\nV.SetDefaultNormal((float, float, float))\nC++: void SetDefaultNormal(float a[3])\n\n"},
  {(char*)"GetDefaultNormal", PyvtkArcPlotter_GetDefaultNormal, METH_VARARGS,
   (char*)"V.GetDefaultNormal() -> (float, float, float)\nC++: float *GetDefaultNormal()\n\nSet the default normal to use if you do not wish automatic normal\ncalculation. The arc plot will be generated using this normal.\n"},
  {(char*)"SetFieldDataArray", PyvtkArcPlotter_SetFieldDataArray, METH_VARARGS,
   (char*)"V.SetFieldDataArray(int)\nC++: void SetFieldDataArray(int)\n\nSet/Get the field data array to plot. This instance variable is\nonly applicable if field data is plotted.\n"},
  {(char*)"GetFieldDataArrayMinValue", PyvtkArcPlotter_GetFieldDataArrayMinValue, METH_VARARGS,
   (char*)"V.GetFieldDataArrayMinValue() -> int\nC++: int GetFieldDataArrayMinValue()\n\nSet/Get the field data array to plot. This instance variable is\nonly applicable if field data is plotted.\n"},
  {(char*)"GetFieldDataArrayMaxValue", PyvtkArcPlotter_GetFieldDataArrayMaxValue, METH_VARARGS,
   (char*)"V.GetFieldDataArrayMaxValue() -> int\nC++: int GetFieldDataArrayMaxValue()\n\nSet/Get the field data array to plot. This instance variable is\nonly applicable if field data is plotted.\n"},
  {(char*)"GetFieldDataArray", PyvtkArcPlotter_GetFieldDataArray, METH_VARARGS,
   (char*)"V.GetFieldDataArray() -> int\nC++: int GetFieldDataArray()\n\nSet/Get the field data array to plot. This instance variable is\nonly applicable if field data is plotted.\n"},
  {(char*)"GetMTime", PyvtkArcPlotter_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nNew GetMTime because of camera dependency.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkArcPlotter_StaticNew()
{
  return vtkArcPlotter::New();
}

PyObject *PyVTKClass_vtkArcPlotterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkArcPlotter_StaticNew,
    PyvtkArcPlotter_Methods,
    "vtkArcPlotter", modulename,
    NULL, NULL,
    PyvtkArcPlotter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkArcPlotter_Doc()
{
  static const char *docstring[] = {
    "vtkArcPlotter - plot data along an arbitrary polyline\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkArcPlotter performs plotting of attribute data along polylines\ndefined with an input vtkPolyData data object. Any type of attribute\ndata can be plotted including scalars, vectors, tensors, normals,\ntexture coordinates, and field data. Either one or multiple data\ncomponents can be plotted.\n\nTo use this class you must specify an input data set that contains\none or more polylines, and some attribu",
    "te data including which\ncomponent of the attribute data. (By default, this class processes\nthe first component of scalar data.) You will also need to set an\noffset radius (the distance of the polyline to the median line of the\nplot), a width for the plot (the distance that the minimum and\nmaximum plot values are mapped into), an possibly an offset (used to\noffset attribute data with multiple compo",
    "nents).\n\nNormally the filter automatically computes normals for generating the\noffset arc plot. However, you can specify a default normal and use\nthat instead.\n\nSee Also:\n\nvtkXYPlotActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArcPlotter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArcPlotterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArcPlotter", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 6; c++)
    {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_PLOT_SCALARS", 1 },
        { "VTK_PLOT_VECTORS", 2 },
        { "VTK_PLOT_NORMALS", 3 },
        { "VTK_PLOT_TCOORDS", 4 },
        { "VTK_PLOT_TENSORS", 5 },
        { "VTK_PLOT_FIELD_DATA", 6 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

