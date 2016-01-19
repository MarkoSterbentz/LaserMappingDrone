// python wrapper for vtkSpiderPlotActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSpiderPlotActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSpiderPlotActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSpiderPlotActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkActor2DNew
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkActor2DNew
#endif

static const char **PyvtkSpiderPlotActor_Doc();


static PyObject *
PyvtkSpiderPlotActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSpiderPlotActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpiderPlotActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSpiderPlotActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpiderPlotActor::NewInstance());

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
PyvtkSpiderPlotActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSpiderPlotActor *tempr = vtkSpiderPlotActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkSpiderPlotActor::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0);
      }
    else
      {
      op->vtkSpiderPlotActor::SetInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkSpiderPlotActor::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetIndependentVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIndependentVariables(temp0);
      }
    else
      {
      op->vtkSpiderPlotActor::SetIndependentVariables(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetIndependentVariablesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentVariablesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIndependentVariablesMinValue() :
      op->vtkSpiderPlotActor::GetIndependentVariablesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetIndependentVariablesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentVariablesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIndependentVariablesMaxValue() :
      op->vtkSpiderPlotActor::GetIndependentVariablesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetIndependentVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIndependentVariables() :
      op->vtkSpiderPlotActor::GetIndependentVariables());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetIndependentVariablesToColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentVariablesToColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndependentVariablesToColumns();
      }
    else
      {
      op->vtkSpiderPlotActor::SetIndependentVariablesToColumns();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetIndependentVariablesToRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentVariablesToRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIndependentVariablesToRows();
      }
    else
      {
      op->vtkSpiderPlotActor::SetIndependentVariablesToRows();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleVisibility(temp0);
      }
    else
      {
      op->vtkSpiderPlotActor::SetTitleVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTitleVisibility() :
      op->vtkSpiderPlotActor::GetTitleVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_TitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TitleVisibilityOn();
      }
    else
      {
      op->vtkSpiderPlotActor::TitleVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_TitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TitleVisibilityOff();
      }
    else
      {
      op->vtkSpiderPlotActor::TitleVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitle(temp0);
      }
    else
      {
      op->vtkSpiderPlotActor::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkSpiderPlotActor::GetTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTitleTextProperty(temp0);
      }
    else
      {
      op->vtkSpiderPlotActor::SetTitleTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty() :
      op->vtkSpiderPlotActor::GetTitleTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelVisibility(temp0);
      }
    else
      {
      op->vtkSpiderPlotActor::SetLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLabelVisibility() :
      op->vtkSpiderPlotActor::GetLabelVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LabelVisibilityOn();
      }
    else
      {
      op->vtkSpiderPlotActor::LabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LabelVisibilityOff();
      }
    else
      {
      op->vtkSpiderPlotActor::LabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetLabelTextProperty(temp0);
      }
    else
      {
      op->vtkSpiderPlotActor::SetLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkSpiderPlotActor::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetNumberOfRings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfRings(temp0);
      }
    else
      {
      op->vtkSpiderPlotActor::SetNumberOfRings(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetNumberOfRingsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRingsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRingsMinValue() :
      op->vtkSpiderPlotActor::GetNumberOfRingsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetNumberOfRingsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRingsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRingsMaxValue() :
      op->vtkSpiderPlotActor::GetNumberOfRingsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetNumberOfRings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRings() :
      op->vtkSpiderPlotActor::GetNumberOfRings());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabel(temp0, temp1);
      }
    else
      {
      op->vtkSpiderPlotActor::SetAxisLabel(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAxisLabel(temp0) :
      op->vtkSpiderPlotActor::GetAxisLabel(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetAxisRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
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
      op->SetAxisRange(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSpiderPlotActor::SetAxisRange(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSpiderPlotActor_SetAxisRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetAxisRange(temp0, temp1);
      }
    else
      {
      op->vtkSpiderPlotActor::SetAxisRange(temp0, temp1);
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
PyvtkSpiderPlotActor_SetAxisRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSpiderPlotActor_SetAxisRange_s1(self, args);
    case 2:
      return PyvtkSpiderPlotActor_SetAxisRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisRange");
  return NULL;
}



static PyObject *
PyvtkSpiderPlotActor_GetAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetAxisRange(temp0, temp1);
      }
    else
      {
      op->vtkSpiderPlotActor::GetAxisRange(temp0, temp1);
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
PyvtkSpiderPlotActor_SetPlotColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
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
      op->SetPlotColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSpiderPlotActor::SetPlotColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSpiderPlotActor_SetPlotColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetPlotColor(temp0, temp1);
      }
    else
      {
      op->vtkSpiderPlotActor::SetPlotColor(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSpiderPlotActor_SetPlotColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkSpiderPlotActor_SetPlotColor_s1(self, args);
    case 2:
      return PyvtkSpiderPlotActor_SetPlotColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPlotColor");
  return NULL;
}



static PyObject *
PyvtkSpiderPlotActor_GetPlotColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPlotColor(temp0) :
      op->vtkSpiderPlotActor::GetPlotColor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_SetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLegendVisibility(temp0);
      }
    else
      {
      op->vtkSpiderPlotActor::SetLegendVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLegendVisibility() :
      op->vtkSpiderPlotActor::GetLegendVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_LegendVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LegendVisibilityOn();
      }
    else
      {
      op->vtkSpiderPlotActor::LegendVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_LegendVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LegendVisibilityOff();
      }
    else
      {
      op->vtkSpiderPlotActor::LegendVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_GetLegendActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLegendBoxActor *tempr = (ap.IsBound() ?
      op->GetLegendActor() :
      op->vtkSpiderPlotActor::GetLegendActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkSpiderPlotActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkSpiderPlotActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkSpiderPlotActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkSpiderPlotActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpiderPlotActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpiderPlotActor *op = static_cast<vtkSpiderPlotActor *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkSpiderPlotActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSpiderPlotActor_Methods[] = {
  {(char*)"GetClassName", PyvtkSpiderPlotActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for type information and printing.\n"},
  {(char*)"IsA", PyvtkSpiderPlotActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for type information and printing.\n"},
  {(char*)"NewInstance", PyvtkSpiderPlotActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSpiderPlotActor\nC++: vtkSpiderPlotActor *NewInstance()\n\nStandard methods for type information and printing.\n"},
  {(char*)"SafeDownCast", PyvtkSpiderPlotActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSpiderPlotActor\nC++: vtkSpiderPlotActor *SafeDownCast(vtkObject* o)\n\nStandard methods for type information and printing.\n"},
  {(char*)"SetInputData", PyvtkSpiderPlotActor_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkDataObject)\nC++: virtual void SetInputData(vtkDataObject *)\n\nSet the input to the pie chart actor. SetInputData() does not\nconnect the pipeline whereas SetInputConnection() does.\n"},
  {(char*)"SetInputConnection", PyvtkSpiderPlotActor_SetInputConnection, METH_VARARGS,
   (char*)"V.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *)\n\nSet the input to the pie chart actor. SetInputData() does not\nconnect the pipeline whereas SetInputConnection() does.\n"},
  {(char*)"GetInput", PyvtkSpiderPlotActor_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkDataObject\nC++: virtual vtkDataObject *GetInput()\n\nGet the input data object to this actor.\n"},
  {(char*)"SetIndependentVariables", PyvtkSpiderPlotActor_SetIndependentVariables, METH_VARARGS,
   (char*)"V.SetIndependentVariables(int)\nC++: void SetIndependentVariables(int)\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {(char*)"GetIndependentVariablesMinValue", PyvtkSpiderPlotActor_GetIndependentVariablesMinValue, METH_VARARGS,
   (char*)"V.GetIndependentVariablesMinValue() -> int\nC++: int GetIndependentVariablesMinValue()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {(char*)"GetIndependentVariablesMaxValue", PyvtkSpiderPlotActor_GetIndependentVariablesMaxValue, METH_VARARGS,
   (char*)"V.GetIndependentVariablesMaxValue() -> int\nC++: int GetIndependentVariablesMaxValue()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {(char*)"GetIndependentVariables", PyvtkSpiderPlotActor_GetIndependentVariables, METH_VARARGS,
   (char*)"V.GetIndependentVariables() -> int\nC++: int GetIndependentVariables()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {(char*)"SetIndependentVariablesToColumns", PyvtkSpiderPlotActor_SetIndependentVariablesToColumns, METH_VARARGS,
   (char*)"V.SetIndependentVariablesToColumns()\nC++: void SetIndependentVariablesToColumns()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {(char*)"SetIndependentVariablesToRows", PyvtkSpiderPlotActor_SetIndependentVariablesToRows, METH_VARARGS,
   (char*)"V.SetIndependentVariablesToRows()\nC++: void SetIndependentVariablesToRows()\n\nSpecify whether to use the rows or columns as independent\nvariables. If columns, then each row represents a separate point.\nIf rows, then each column represents a separate point.\n"},
  {(char*)"SetTitleVisibility", PyvtkSpiderPlotActor_SetTitleVisibility, METH_VARARGS,
   (char*)"V.SetTitleVisibility(int)\nC++: void SetTitleVisibility(int a)\n\nEnable/Disable the display of a plot title.\n"},
  {(char*)"GetTitleVisibility", PyvtkSpiderPlotActor_GetTitleVisibility, METH_VARARGS,
   (char*)"V.GetTitleVisibility() -> int\nC++: int GetTitleVisibility()\n\nEnable/Disable the display of a plot title.\n"},
  {(char*)"TitleVisibilityOn", PyvtkSpiderPlotActor_TitleVisibilityOn, METH_VARARGS,
   (char*)"V.TitleVisibilityOn()\nC++: void TitleVisibilityOn()\n\nEnable/Disable the display of a plot title.\n"},
  {(char*)"TitleVisibilityOff", PyvtkSpiderPlotActor_TitleVisibilityOff, METH_VARARGS,
   (char*)"V.TitleVisibilityOff()\nC++: void TitleVisibilityOff()\n\nEnable/Disable the display of a plot title.\n"},
  {(char*)"SetTitle", PyvtkSpiderPlotActor_SetTitle, METH_VARARGS,
   (char*)"V.SetTitle(string)\nC++: void SetTitle(char *)\n\nSet/Get the title of the spider plot.\n"},
  {(char*)"GetTitle", PyvtkSpiderPlotActor_GetTitle, METH_VARARGS,
   (char*)"V.GetTitle() -> string\nC++: char *GetTitle()\n\nSet/Get the title of the spider plot.\n"},
  {(char*)"SetTitleTextProperty", PyvtkSpiderPlotActor_SetTitleTextProperty, METH_VARARGS,
   (char*)"V.SetTitleTextProperty(vtkTextProperty)\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property.\n"},
  {(char*)"GetTitleTextProperty", PyvtkSpiderPlotActor_GetTitleTextProperty, METH_VARARGS,
   (char*)"V.GetTitleTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty()\n\nSet/Get the title text property.\n"},
  {(char*)"SetLabelVisibility", PyvtkSpiderPlotActor_SetLabelVisibility, METH_VARARGS,
   (char*)"V.SetLabelVisibility(int)\nC++: void SetLabelVisibility(int a)\n\n"},
  {(char*)"GetLabelVisibility", PyvtkSpiderPlotActor_GetLabelVisibility, METH_VARARGS,
   (char*)"V.GetLabelVisibility() -> int\nC++: int GetLabelVisibility()\n\n"},
  {(char*)"LabelVisibilityOn", PyvtkSpiderPlotActor_LabelVisibilityOn, METH_VARARGS,
   (char*)"V.LabelVisibilityOn()\nC++: void LabelVisibilityOn()\n\n"},
  {(char*)"LabelVisibilityOff", PyvtkSpiderPlotActor_LabelVisibilityOff, METH_VARARGS,
   (char*)"V.LabelVisibilityOff()\nC++: void LabelVisibilityOff()\n\n"},
  {(char*)"SetLabelTextProperty", PyvtkSpiderPlotActor_SetLabelTextProperty, METH_VARARGS,
   (char*)"V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"GetLabelTextProperty", PyvtkSpiderPlotActor_GetLabelTextProperty, METH_VARARGS,
   (char*)"V.GetLabelTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetLabelTextProperty()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"SetNumberOfRings", PyvtkSpiderPlotActor_SetNumberOfRings, METH_VARARGS,
   (char*)"V.SetNumberOfRings(int)\nC++: void SetNumberOfRings(int)\n\nSpecify the number of circumferential rings. If set to zero, then\nnone will be shown; otherwise the specified number will be shown.\n"},
  {(char*)"GetNumberOfRingsMinValue", PyvtkSpiderPlotActor_GetNumberOfRingsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfRingsMinValue() -> int\nC++: int GetNumberOfRingsMinValue()\n\nSpecify the number of circumferential rings. If set to zero, then\nnone will be shown; otherwise the specified number will be shown.\n"},
  {(char*)"GetNumberOfRingsMaxValue", PyvtkSpiderPlotActor_GetNumberOfRingsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfRingsMaxValue() -> int\nC++: int GetNumberOfRingsMaxValue()\n\nSpecify the number of circumferential rings. If set to zero, then\nnone will be shown; otherwise the specified number will be shown.\n"},
  {(char*)"GetNumberOfRings", PyvtkSpiderPlotActor_GetNumberOfRings, METH_VARARGS,
   (char*)"V.GetNumberOfRings() -> int\nC++: int GetNumberOfRings()\n\nSpecify the number of circumferential rings. If set to zero, then\nnone will be shown; otherwise the specified number will be shown.\n"},
  {(char*)"SetAxisLabel", PyvtkSpiderPlotActor_SetAxisLabel, METH_VARARGS,
   (char*)"V.SetAxisLabel(int, string)\nC++: void SetAxisLabel(const int i, const char *)\n\nSpecify the names of the radial spokes (i.e., the radial axes).\nIf not specified, then an integer number is automatically\ngenerated.\n"},
  {(char*)"GetAxisLabel", PyvtkSpiderPlotActor_GetAxisLabel, METH_VARARGS,
   (char*)"V.GetAxisLabel(int) -> string\nC++: const char *GetAxisLabel(int i)\n\nSpecify the names of the radial spokes (i.e., the radial axes).\nIf not specified, then an integer number is automatically\ngenerated.\n"},
  {(char*)"SetAxisRange", PyvtkSpiderPlotActor_SetAxisRange, METH_VARARGS,
   (char*)"V.SetAxisRange(int, float, float)\nC++: void SetAxisRange(int i, double min, double max)\nV.SetAxisRange(int, [float, float])\nC++: void SetAxisRange(int i, double range[2])\n\nSpecify the range of data on each radial axis. If not specified,\nthen the range is computed automatically.\n"},
  {(char*)"GetAxisRange", PyvtkSpiderPlotActor_GetAxisRange, METH_VARARGS,
   (char*)"V.GetAxisRange(int, [float, float])\nC++: void GetAxisRange(int i, double range[2])\n\nSpecify the range of data on each radial axis. If not specified,\nthen the range is computed automatically.\n"},
  {(char*)"SetPlotColor", PyvtkSpiderPlotActor_SetPlotColor, METH_VARARGS,
   (char*)"V.SetPlotColor(int, float, float, float)\nC++: void SetPlotColor(int i, double r, double g, double b)\nV.SetPlotColor(int, (float, float, float))\nC++: void SetPlotColor(int i, const double color[3])\n\nSpecify colors for each plot. If not specified, they are\nautomatically generated.\n"},
  {(char*)"GetPlotColor", PyvtkSpiderPlotActor_GetPlotColor, METH_VARARGS,
   (char*)"V.GetPlotColor(int) -> (float, ...)\nC++: double *GetPlotColor(int i)\n\nSpecify colors for each plot. If not specified, they are\nautomatically generated.\n"},
  {(char*)"SetLegendVisibility", PyvtkSpiderPlotActor_SetLegendVisibility, METH_VARARGS,
   (char*)"V.SetLegendVisibility(int)\nC++: void SetLegendVisibility(int a)\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"GetLegendVisibility", PyvtkSpiderPlotActor_GetLegendVisibility, METH_VARARGS,
   (char*)"V.GetLegendVisibility() -> int\nC++: int GetLegendVisibility()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"LegendVisibilityOn", PyvtkSpiderPlotActor_LegendVisibilityOn, METH_VARARGS,
   (char*)"V.LegendVisibilityOn()\nC++: void LegendVisibilityOn()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"LegendVisibilityOff", PyvtkSpiderPlotActor_LegendVisibilityOff, METH_VARARGS,
   (char*)"V.LegendVisibilityOff()\nC++: void LegendVisibilityOff()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"GetLegendActor", PyvtkSpiderPlotActor_GetLegendActor, METH_VARARGS,
   (char*)"V.GetLegendActor() -> vtkLegendBoxActor\nC++: vtkLegendBoxActor *GetLegendActor()\n\nRetrieve handles to the legend box. This is useful if you would\nlike to manually control the legend appearance.\n"},
  {(char*)"RenderOverlay", PyvtkSpiderPlotActor_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *)\n\nDraw the spider plot.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkSpiderPlotActor_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *)\n\nDraw the spider plot.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkSpiderPlotActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nDraw the spider plot.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkSpiderPlotActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkSpiderPlotActor_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSpiderPlotActor_StaticNew()
{
  return vtkSpiderPlotActor::New();
}

PyObject *PyVTKClass_vtkSpiderPlotActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSpiderPlotActor_StaticNew,
    PyvtkSpiderPlotActor_Methods,
    "vtkSpiderPlotActor", modulename,
    NULL, NULL,
    PyvtkSpiderPlotActor_Doc(),
    PyVTKClass_vtkActor2DNew(modulename));
  return cls;
}

const char **PyvtkSpiderPlotActor_Doc()
{
  static const char *docstring[] = {
    "vtkSpiderPlotActor - create a spider plot from input field\n\n",
    "Superclass: vtkActor2D\n\n",
    "vtkSpiderPlotActor generates a spider plot from an input field (i.e.,\nvtkDataObject). A spider plot represents N-dimensional data by using\na set of N axes that originate from the center of a circle, and form\nthe spokes of a wheel (like a spider web).  Each N-dimensional point\nis plotted as a polyline that forms a closed polygon; the vertices of\nthe polygon are plotted against the radial axes.\n\nTo ",
    "use this class, you must specify an input data object. You'll\nprobably also want to specify the position of the plot be setting the\nPosition and Position2 instance variables, which define a rectangle\nin which the plot lies. Another important parameter is the\nIndependentVariables ivar, which tells the instance how to interpret\nthe field data (independent variables as the rows or columns of the\nfiel",
    "d). There are also many other instance variables that control the\nlook of the plot includes its title and legend.\n\nSet the text property/attributes of the title and the labels through\nthe vtkTextProperty objects associated with these components.\n\nCaveats:\n\nField data is not necessarily \"rectangular\" in shape. In these cases,\nsome of the data may not be plotted.\n\nField data can contain non-numeric ",
    "arrays (i.e. arrays not subclasses\nof vtkDataArray). Such arrays are skipped.\n\nSee Also:\n\nvtkParallelCoordinatesActor vtkXYPlotActor2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSpiderPlotActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSpiderPlotActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSpiderPlotActor", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_IV_COLUMN", 0 },
        { "VTK_IV_ROW", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

