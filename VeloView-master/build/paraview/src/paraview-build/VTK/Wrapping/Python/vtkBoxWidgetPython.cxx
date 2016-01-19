// python wrapper for vtkBoxWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBoxWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBoxWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBoxWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtk3DWidgetNew
extern "C" { PyObject *PyVTKClass_vtk3DWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtk3DWidgetNew
#endif

static const char **PyvtkBoxWidget_Doc();


static PyObject *
PyvtkBoxWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBoxWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoxWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBoxWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoxWidget::NewInstance());

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
PyvtkBoxWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBoxWidget *tempr = vtkBoxWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkBoxWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

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
      op->PlaceWidget(temp0);
      }
    else
      {
      op->vtkBoxWidget::PlaceWidget(temp0);
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
PyvtkBoxWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlaceWidget();
      }
    else
      {
      op->vtkBoxWidget::PlaceWidget();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBoxWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkBoxWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBoxWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkBoxWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkBoxWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkBoxWidget_PlaceWidget_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
PyvtkBoxWidget_GetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  vtkPlanes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
    {
    if (ap.IsBound())
      {
      op->GetPlanes(temp0);
      }
    else
      {
      op->vtkBoxWidget::GetPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInsideOut(temp0);
      }
    else
      {
      op->vtkBoxWidget::SetInsideOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkBoxWidget::GetInsideOut());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOn();
      }
    else
      {
      op->vtkBoxWidget::InsideOutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOff();
      }
    else
      {
      op->vtkBoxWidget::InsideOutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  vtkTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->GetTransform(temp0);
      }
    else
      {
      op->vtkBoxWidget::GetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  vtkTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0);
      }
    else
      {
      op->vtkBoxWidget::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GetPolyData(temp0);
      }
    else
      {
      op->vtkBoxWidget::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkBoxWidget::GetHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkBoxWidget::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_HandlesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandlesOn();
      }
    else
      {
      op->vtkBoxWidget::HandlesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_HandlesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandlesOff();
      }
    else
      {
      op->vtkBoxWidget::HandlesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetFaceProperty() :
      op->vtkBoxWidget::GetFaceProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetSelectedFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedFaceProperty() :
      op->vtkBoxWidget::GetSelectedFaceProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetOutlineProperty() :
      op->vtkBoxWidget::GetOutlineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetSelectedOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedOutlineProperty() :
      op->vtkBoxWidget::GetSelectedOutlineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_SetOutlineFaceWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineFaceWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutlineFaceWires(temp0);
      }
    else
      {
      op->vtkBoxWidget::SetOutlineFaceWires(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetOutlineFaceWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineFaceWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutlineFaceWires() :
      op->vtkBoxWidget::GetOutlineFaceWires());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_OutlineFaceWiresOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineFaceWiresOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineFaceWiresOn();
      }
    else
      {
      op->vtkBoxWidget::OutlineFaceWiresOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_OutlineFaceWiresOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineFaceWiresOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineFaceWiresOff();
      }
    else
      {
      op->vtkBoxWidget::OutlineFaceWiresOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_SetOutlineCursorWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineCursorWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutlineCursorWires(temp0);
      }
    else
      {
      op->vtkBoxWidget::SetOutlineCursorWires(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetOutlineCursorWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineCursorWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutlineCursorWires() :
      op->vtkBoxWidget::GetOutlineCursorWires());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_OutlineCursorWiresOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineCursorWiresOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineCursorWiresOn();
      }
    else
      {
      op->vtkBoxWidget::OutlineCursorWiresOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_OutlineCursorWiresOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineCursorWiresOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineCursorWiresOff();
      }
    else
      {
      op->vtkBoxWidget::OutlineCursorWiresOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_SetTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTranslationEnabled(temp0);
      }
    else
      {
      op->vtkBoxWidget::SetTranslationEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTranslationEnabled() :
      op->vtkBoxWidget::GetTranslationEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_TranslationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TranslationEnabledOn();
      }
    else
      {
      op->vtkBoxWidget::TranslationEnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_TranslationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TranslationEnabledOff();
      }
    else
      {
      op->vtkBoxWidget::TranslationEnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_SetScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalingEnabled(temp0);
      }
    else
      {
      op->vtkBoxWidget::SetScalingEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalingEnabled() :
      op->vtkBoxWidget::GetScalingEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_ScalingEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingEnabledOn();
      }
    else
      {
      op->vtkBoxWidget::ScalingEnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_ScalingEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingEnabledOff();
      }
    else
      {
      op->vtkBoxWidget::ScalingEnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_SetRotationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRotationEnabled(temp0);
      }
    else
      {
      op->vtkBoxWidget::SetRotationEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetRotationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRotationEnabled() :
      op->vtkBoxWidget::GetRotationEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_RotationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RotationEnabledOn();
      }
    else
      {
      op->vtkBoxWidget::RotationEnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget_RotationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RotationEnabledOff();
      }
    else
      {
      op->vtkBoxWidget::RotationEnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBoxWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkBoxWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBoxWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBoxWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBoxWidget\nC++: vtkBoxWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBoxWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBoxWidget\nC++: vtkBoxWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnabled", PyvtkBoxWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"PlaceWidget", PyvtkBoxWidget_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\nV.PlaceWidget()\nC++: void PlaceWidget()\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"GetPlanes", PyvtkBoxWidget_GetPlanes, METH_VARARGS,
   (char*)"V.GetPlanes(vtkPlanes)\nC++: void GetPlanes(vtkPlanes *planes)\n\nGet the planes describing the implicit function defined by the\nbox widget. The user must provide the instance of the class\nvtkPlanes. Note that vtkPlanes is a subclass of\nvtkImplicitFunction, meaning that it can be used by a variety of\nfilters to perform clipping, cutting, and selection of data. \n(The direction of the normals of the planes can be reversed\nenabling the InsideOut flag.)\n"},
  {(char*)"SetInsideOut", PyvtkBoxWidget_SetInsideOut, METH_VARARGS,
   (char*)"V.SetInsideOut(int)\nC++: void SetInsideOut(int a)\n\nSet/Get the InsideOut flag. When off, the normals point out of\nthe box. When on, the normals point into the hexahedron. \nInsideOut is off by default.\n"},
  {(char*)"GetInsideOut", PyvtkBoxWidget_GetInsideOut, METH_VARARGS,
   (char*)"V.GetInsideOut() -> int\nC++: int GetInsideOut()\n\nSet/Get the InsideOut flag. When off, the normals point out of\nthe box. When on, the normals point into the hexahedron. \nInsideOut is off by default.\n"},
  {(char*)"InsideOutOn", PyvtkBoxWidget_InsideOutOn, METH_VARARGS,
   (char*)"V.InsideOutOn()\nC++: void InsideOutOn()\n\nSet/Get the InsideOut flag. When off, the normals point out of\nthe box. When on, the normals point into the hexahedron. \nInsideOut is off by default.\n"},
  {(char*)"InsideOutOff", PyvtkBoxWidget_InsideOutOff, METH_VARARGS,
   (char*)"V.InsideOutOff()\nC++: void InsideOutOff()\n\nSet/Get the InsideOut flag. When off, the normals point out of\nthe box. When on, the normals point into the hexahedron. \nInsideOut is off by default.\n"},
  {(char*)"GetTransform", PyvtkBoxWidget_GetTransform, METH_VARARGS,
   (char*)"V.GetTransform(vtkTransform)\nC++: virtual void GetTransform(vtkTransform *t)\n\nRetrieve a linear transform characterizing the transformation of\nthe box. Note that the transformation is relative to where\nPlaceWidget was initially called. This method modifies the\ntransform provided. The transform can be used to control the\nposition of vtkProp3D's, as well as other transformation\noperations (e.g., vtkTranformPolyData).\n"},
  {(char*)"SetTransform", PyvtkBoxWidget_SetTransform, METH_VARARGS,
   (char*)"V.SetTransform(vtkTransform)\nC++: virtual void SetTransform(vtkTransform *t)\n\nSet the position, scale and orientation of the box widget using\nthe transform specified. Note that the transformation is relative\nto where PlaceWidget was initially called (i.e., the original\nbounding box).\n"},
  {(char*)"GetPolyData", PyvtkBoxWidget_GetPolyData, METH_VARARGS,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that define the box widget.\nThe polydata consists of 6 quadrilateral faces and 15 points. The\nfirst eight points define the eight corner vertices; the next six\ndefine the\n-x,+x, -y,+y, -z,+z face points; and the final point (the 15th\n    out of 15 points) defines the center of the hexahedron. These\npoint values are guaranteed to be up-to-date when either the\n    InteractionEvent or EndInteractionEvent events are invoked.\n    The user provides the vtkPolyData and the points and cells\n    are added to it.\n"},
  {(char*)"GetHandleProperty", PyvtkBoxWidget_GetHandleProperty, METH_VARARGS,
   (char*)"V.GetHandleProperty() -> vtkProperty\nC++: vtkProperty *GetHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be set.\n"},
  {(char*)"GetSelectedHandleProperty", PyvtkBoxWidget_GetSelectedHandleProperty, METH_VARARGS,
   (char*)"V.GetSelectedHandleProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be set.\n"},
  {(char*)"HandlesOn", PyvtkBoxWidget_HandlesOn, METH_VARARGS,
   (char*)"V.HandlesOn()\nC++: void HandlesOn()\n\nSwitches handles (the spheres) on or off by manipulating the\nactor visibility.\n"},
  {(char*)"HandlesOff", PyvtkBoxWidget_HandlesOff, METH_VARARGS,
   (char*)"V.HandlesOff()\nC++: void HandlesOff()\n\nSwitches handles (the spheres) on or off by manipulating the\nactor visibility.\n"},
  {(char*)"GetFaceProperty", PyvtkBoxWidget_GetFaceProperty, METH_VARARGS,
   (char*)"V.GetFaceProperty() -> vtkProperty\nC++: vtkProperty *GetFaceProperty()\n\nGet the face properties (the faces of the box). The properties of\nthe face when selected and normal can be set.\n"},
  {(char*)"GetSelectedFaceProperty", PyvtkBoxWidget_GetSelectedFaceProperty, METH_VARARGS,
   (char*)"V.GetSelectedFaceProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedFaceProperty()\n\nGet the face properties (the faces of the box). The properties of\nthe face when selected and normal can be set.\n"},
  {(char*)"GetOutlineProperty", PyvtkBoxWidget_GetOutlineProperty, METH_VARARGS,
   (char*)"V.GetOutlineProperty() -> vtkProperty\nC++: vtkProperty *GetOutlineProperty()\n\nGet the outline properties (the outline of the box). The\nproperties of the outline when selected and normal can be set.\n"},
  {(char*)"GetSelectedOutlineProperty", PyvtkBoxWidget_GetSelectedOutlineProperty, METH_VARARGS,
   (char*)"V.GetSelectedOutlineProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedOutlineProperty()\n\nGet the outline properties (the outline of the box). The\nproperties of the outline when selected and normal can be set.\n"},
  {(char*)"SetOutlineFaceWires", PyvtkBoxWidget_SetOutlineFaceWires, METH_VARARGS,
   (char*)"V.SetOutlineFaceWires(int)\nC++: void SetOutlineFaceWires(int)\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {(char*)"GetOutlineFaceWires", PyvtkBoxWidget_GetOutlineFaceWires, METH_VARARGS,
   (char*)"V.GetOutlineFaceWires() -> int\nC++: int GetOutlineFaceWires()\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {(char*)"OutlineFaceWiresOn", PyvtkBoxWidget_OutlineFaceWiresOn, METH_VARARGS,
   (char*)"V.OutlineFaceWiresOn()\nC++: void OutlineFaceWiresOn()\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {(char*)"OutlineFaceWiresOff", PyvtkBoxWidget_OutlineFaceWiresOff, METH_VARARGS,
   (char*)"V.OutlineFaceWiresOff()\nC++: void OutlineFaceWiresOff()\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {(char*)"SetOutlineCursorWires", PyvtkBoxWidget_SetOutlineCursorWires, METH_VARARGS,
   (char*)"V.SetOutlineCursorWires(int)\nC++: void SetOutlineCursorWires(int)\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {(char*)"GetOutlineCursorWires", PyvtkBoxWidget_GetOutlineCursorWires, METH_VARARGS,
   (char*)"V.GetOutlineCursorWires() -> int\nC++: int GetOutlineCursorWires()\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {(char*)"OutlineCursorWiresOn", PyvtkBoxWidget_OutlineCursorWiresOn, METH_VARARGS,
   (char*)"V.OutlineCursorWiresOn()\nC++: void OutlineCursorWiresOn()\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {(char*)"OutlineCursorWiresOff", PyvtkBoxWidget_OutlineCursorWiresOff, METH_VARARGS,
   (char*)"V.OutlineCursorWiresOff()\nC++: void OutlineCursorWiresOff()\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {(char*)"SetTranslationEnabled", PyvtkBoxWidget_SetTranslationEnabled, METH_VARARGS,
   (char*)"V.SetTranslationEnabled(int)\nC++: void SetTranslationEnabled(int a)\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {(char*)"GetTranslationEnabled", PyvtkBoxWidget_GetTranslationEnabled, METH_VARARGS,
   (char*)"V.GetTranslationEnabled() -> int\nC++: int GetTranslationEnabled()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {(char*)"TranslationEnabledOn", PyvtkBoxWidget_TranslationEnabledOn, METH_VARARGS,
   (char*)"V.TranslationEnabledOn()\nC++: void TranslationEnabledOn()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {(char*)"TranslationEnabledOff", PyvtkBoxWidget_TranslationEnabledOff, METH_VARARGS,
   (char*)"V.TranslationEnabledOff()\nC++: void TranslationEnabledOff()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {(char*)"SetScalingEnabled", PyvtkBoxWidget_SetScalingEnabled, METH_VARARGS,
   (char*)"V.SetScalingEnabled(int)\nC++: void SetScalingEnabled(int a)\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {(char*)"GetScalingEnabled", PyvtkBoxWidget_GetScalingEnabled, METH_VARARGS,
   (char*)"V.GetScalingEnabled() -> int\nC++: int GetScalingEnabled()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {(char*)"ScalingEnabledOn", PyvtkBoxWidget_ScalingEnabledOn, METH_VARARGS,
   (char*)"V.ScalingEnabledOn()\nC++: void ScalingEnabledOn()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {(char*)"ScalingEnabledOff", PyvtkBoxWidget_ScalingEnabledOff, METH_VARARGS,
   (char*)"V.ScalingEnabledOff()\nC++: void ScalingEnabledOff()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {(char*)"SetRotationEnabled", PyvtkBoxWidget_SetRotationEnabled, METH_VARARGS,
   (char*)"V.SetRotationEnabled(int)\nC++: void SetRotationEnabled(int a)\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {(char*)"GetRotationEnabled", PyvtkBoxWidget_GetRotationEnabled, METH_VARARGS,
   (char*)"V.GetRotationEnabled() -> int\nC++: int GetRotationEnabled()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {(char*)"RotationEnabledOn", PyvtkBoxWidget_RotationEnabledOn, METH_VARARGS,
   (char*)"V.RotationEnabledOn()\nC++: void RotationEnabledOn()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {(char*)"RotationEnabledOff", PyvtkBoxWidget_RotationEnabledOff, METH_VARARGS,
   (char*)"V.RotationEnabledOff()\nC++: void RotationEnabledOff()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBoxWidget_StaticNew()
{
  return vtkBoxWidget::New();
}

PyObject *PyVTKClass_vtkBoxWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBoxWidget_StaticNew,
    PyvtkBoxWidget_Methods,
    "vtkBoxWidget", modulename,
    NULL, NULL,
    PyvtkBoxWidget_Doc(),
    PyVTKClass_vtk3DWidgetNew(modulename));
  return cls;
}

const char **PyvtkBoxWidget_Doc()
{
  static const char *docstring[] = {
    "vtkBoxWidget - orthogonal hexahedron 3D widget\n\n",
    "Superclass: vtk3DWidget\n\n",
    "This 3D widget defines a region of interest that is represented by an\narbitrarily oriented hexahedron with interior face angles of 90\ndegrees (orthogonal faces). The object creates 7 handles that can be\nmoused on and manipulated. The first six correspond to the six faces,\nthe seventh is in the center of the hexahedron. In addition, a\nbounding box outline is shown, the \"faces\" of which can be selec",
    "ted\nfor object rotation or scaling. A nice feature of the object is that\nthe vtkBoxWidget, like any 3D widget, will work with the current\ninteractor style. That is, if vtkBoxWidget does not handle an event,\nthen all other registered observers (including the interactor style)\nhave an opportunity to process the event. Otherwise, the vtkBoxWidget\nwill terminate the processing of the event that it han",
    "dles.\n\nTo use this object, just invoke SetInteractor() with the argument of\nthe method a vtkRenderWindowInteractor.  You may also wish to invoke\n\"PlaceWidget()\" to initially position the widget. The interactor will\nact normally until the \"i\" key (for \"interactor\") is pressed, at\nwhich point the vtkBoxWidget will appear. (See superclass\ndocumentation for information about changing this behavior.) B",
    "y\ngrabbing the six face handles (use the left mouse button), faces can\nbe moved. By grabbing the center handle (with the left mouse button),\nthe entire hexahedron can be translated. (Translation can also be\nemployed by using the \"shift-left-mouse-button\" combination inside of\nthe widget.) Scaling is achieved by using the right mouse button \"up\"\nthe render window (makes the widget bigger) or \"down\"",
    " the render\nwindow (makes the widget smaller). To rotate vtkBoxWidget, pick a\nface (but not a face handle) and move the left mouse. (Note: the\nmouse button must be held down during manipulation.) Events that\noccur outside of the widget (i.e., no part of the widget is picked)\nare propagated to any other registered obsevers (such as the\ninteraction style).  Turn off the widget by pressing the \"i\" ke",
    "y\nagain. (See the superclass documentation on key press activiation.)\n\nThe vtkBoxWidget is very flexible. It can be used to select, cut,\nclip, or perform any other operation that depends on an implicit\nfunction (use the GetPlanes() method); or it can be used to transform\nobjects using a linear transformation (use the GetTransform()\nmethod). Typical usage of the widget is to make use of the\nStartIn",
    "teractionEvent, InteractionEvent, and EndInteractionEvent\nevents. The InteractionEvent is called on mouse motion; the other two\nevents are called on button down and button up (either left or right\nbutton).\n\nSome additional features of this class include the ability to control\nthe rendered properties of the widget. You can set the properties of\nthe selected and unselected representations of the par",
    "ts of the\nwidget. For example, you can set the property for the handles, faces,\nand outline in their normal and selected states.\n\nThe box widget can be oriented by specifying a transformation matrix.\nThis transformation is applied to the initial bounding box as defined\nby the PlaceWidget() method. DO NOT ASSUME that the transformation is\napplied to a unit box centered at the origin; this is wrong!",
    "\n\nSee Also:\n\nvtk3DWidget vtkPointWidget vtkLineWidget vtkPlaneWidget\nvtkImplicitPlaneWidget vtkImagePlaneWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBoxWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBoxWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBoxWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

