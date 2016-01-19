// python wrapper for vtkBoxRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBoxRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBoxRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBoxRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkBoxRepresentation_Doc();


static PyObject *
PyvtkBoxRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBoxRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoxRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBoxRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoxRepresentation::NewInstance());

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
PyvtkBoxRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBoxRepresentation *tempr = vtkBoxRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

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
      op->vtkBoxRepresentation::GetPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

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
      op->vtkBoxRepresentation::SetInsideOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkBoxRepresentation::GetInsideOut());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOn();
      }
    else
      {
      op->vtkBoxRepresentation::InsideOutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOff();
      }
    else
      {
      op->vtkBoxRepresentation::InsideOutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

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
      op->vtkBoxRepresentation::GetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

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
      op->vtkBoxRepresentation::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

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
      op->vtkBoxRepresentation::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkBoxRepresentation::GetHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkBoxRepresentation::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetFaceProperty() :
      op->vtkBoxRepresentation::GetFaceProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetSelectedFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedFaceProperty() :
      op->vtkBoxRepresentation::GetSelectedFaceProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetOutlineProperty() :
      op->vtkBoxRepresentation::GetOutlineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetSelectedOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedOutlineProperty() :
      op->vtkBoxRepresentation::GetSelectedOutlineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetOutlineFaceWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineFaceWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

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
      op->vtkBoxRepresentation::SetOutlineFaceWires(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetOutlineFaceWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineFaceWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutlineFaceWires() :
      op->vtkBoxRepresentation::GetOutlineFaceWires());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_OutlineFaceWiresOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineFaceWiresOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineFaceWiresOn();
      }
    else
      {
      op->vtkBoxRepresentation::OutlineFaceWiresOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_OutlineFaceWiresOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineFaceWiresOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineFaceWiresOff();
      }
    else
      {
      op->vtkBoxRepresentation::OutlineFaceWiresOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetOutlineCursorWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineCursorWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

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
      op->vtkBoxRepresentation::SetOutlineCursorWires(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetOutlineCursorWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineCursorWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutlineCursorWires() :
      op->vtkBoxRepresentation::GetOutlineCursorWires());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_OutlineCursorWiresOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineCursorWiresOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineCursorWiresOn();
      }
    else
      {
      op->vtkBoxRepresentation::OutlineCursorWiresOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_OutlineCursorWiresOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineCursorWiresOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineCursorWiresOff();
      }
    else
      {
      op->vtkBoxRepresentation::OutlineCursorWiresOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_HandlesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandlesOn();
      }
    else
      {
      op->vtkBoxRepresentation::HandlesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_HandlesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandlesOff();
      }
    else
      {
      op->vtkBoxRepresentation::HandlesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

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
      op->vtkBoxRepresentation::PlaceWidget(temp0);
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
PyvtkBoxRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkBoxRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkBoxRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->StartWidgetInteraction(temp0);
      }
    else
      {
      op->vtkBoxRepresentation::StartWidgetInteraction(temp0);
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
PyvtkBoxRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->WidgetInteraction(temp0);
      }
    else
      {
      op->vtkBoxRepresentation::WidgetInteraction(temp0);
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
PyvtkBoxRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkBoxRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

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
      op->vtkBoxRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkBoxRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkBoxRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkBoxRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionState(temp0);
      }
    else
      {
      op->vtkBoxRepresentation::SetInteractionState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBoxRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkBoxRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for the class.\n"},
  {(char*)"IsA", PyvtkBoxRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for the class.\n"},
  {(char*)"NewInstance", PyvtkBoxRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBoxRepresentation\nC++: vtkBoxRepresentation *NewInstance()\n\nStandard methods for the class.\n"},
  {(char*)"SafeDownCast", PyvtkBoxRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBoxRepresentation\nC++: vtkBoxRepresentation *SafeDownCast(vtkObject* o)\n\nStandard methods for the class.\n"},
  {(char*)"GetPlanes", PyvtkBoxRepresentation_GetPlanes, METH_VARARGS,
   (char*)"V.GetPlanes(vtkPlanes)\nC++: void GetPlanes(vtkPlanes *planes)\n\nGet the planes describing the implicit function defined by the\nbox widget. The user must provide the instance of the class\nvtkPlanes. Note that vtkPlanes is a subclass of\nvtkImplicitFunction, meaning that it can be used by a variety of\nfilters to perform clipping, cutting, and selection of data. \n(The direction of the normals of the planes can be reversed\nenabling the InsideOut flag.)\n"},
  {(char*)"SetInsideOut", PyvtkBoxRepresentation_SetInsideOut, METH_VARARGS,
   (char*)"V.SetInsideOut(int)\nC++: void SetInsideOut(int a)\n\nSet/Get the InsideOut flag. This data member is used in\nconjunction with the GetPlanes() method. When off, the normals\npoint out of the box. When on, the normals point into the\nhexahedron.  InsideOut is off by default.\n"},
  {(char*)"GetInsideOut", PyvtkBoxRepresentation_GetInsideOut, METH_VARARGS,
   (char*)"V.GetInsideOut() -> int\nC++: int GetInsideOut()\n\nSet/Get the InsideOut flag. This data member is used in\nconjunction with the GetPlanes() method. When off, the normals\npoint out of the box. When on, the normals point into the\nhexahedron.  InsideOut is off by default.\n"},
  {(char*)"InsideOutOn", PyvtkBoxRepresentation_InsideOutOn, METH_VARARGS,
   (char*)"V.InsideOutOn()\nC++: void InsideOutOn()\n\nSet/Get the InsideOut flag. This data member is used in\nconjunction with the GetPlanes() method. When off, the normals\npoint out of the box. When on, the normals point into the\nhexahedron.  InsideOut is off by default.\n"},
  {(char*)"InsideOutOff", PyvtkBoxRepresentation_InsideOutOff, METH_VARARGS,
   (char*)"V.InsideOutOff()\nC++: void InsideOutOff()\n\nSet/Get the InsideOut flag. This data member is used in\nconjunction with the GetPlanes() method. When off, the normals\npoint out of the box. When on, the normals point into the\nhexahedron.  InsideOut is off by default.\n"},
  {(char*)"GetTransform", PyvtkBoxRepresentation_GetTransform, METH_VARARGS,
   (char*)"V.GetTransform(vtkTransform)\nC++: virtual void GetTransform(vtkTransform *t)\n\nRetrieve a linear transform characterizing the transformation of\nthe box. Note that the transformation is relative to where\nPlaceWidget() was initially called. This method modifies the\ntransform provided. The transform can be used to control the\nposition of vtkProp3D's, as well as other transformation\noperations (e.g., vtkTranformPolyData).\n"},
  {(char*)"SetTransform", PyvtkBoxRepresentation_SetTransform, METH_VARARGS,
   (char*)"V.SetTransform(vtkTransform)\nC++: virtual void SetTransform(vtkTransform *t)\n\nSet the position, scale and orientation of the box widget using\nthe transform specified. Note that the transformation is relative\nto where PlaceWidget() was initially called (i.e., the original\nbounding box).\n"},
  {(char*)"GetPolyData", PyvtkBoxRepresentation_GetPolyData, METH_VARARGS,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that define the box widget.\nThe polydata consists of 6 quadrilateral faces and 15 points. The\nfirst eight points define the eight corner vertices; the next six\ndefine the\n-x,+x, -y,+y, -z,+z face points; and the final point (the 15th\n    out of 15 points) defines the center of the box. These point\n    values are guaranteed to be up-to-date when either the\n    widget's corresponding InteractionEvent or\n    EndInteractionEvent events are invoked. The user provides the\n    vtkPolyData and the points and cells are added to it.\n"},
  {(char*)"GetHandleProperty", PyvtkBoxRepresentation_GetHandleProperty, METH_VARARGS,
   (char*)"V.GetHandleProperty() -> vtkProperty\nC++: vtkProperty *GetHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles, when selected or normal, can be\nspecified.\n"},
  {(char*)"GetSelectedHandleProperty", PyvtkBoxRepresentation_GetSelectedHandleProperty, METH_VARARGS,
   (char*)"V.GetSelectedHandleProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles, when selected or normal, can be\nspecified.\n"},
  {(char*)"GetFaceProperty", PyvtkBoxRepresentation_GetFaceProperty, METH_VARARGS,
   (char*)"V.GetFaceProperty() -> vtkProperty\nC++: vtkProperty *GetFaceProperty()\n\nGet the face properties (the faces of the box). The properties of\nthe face when selected and normal can be set.\n"},
  {(char*)"GetSelectedFaceProperty", PyvtkBoxRepresentation_GetSelectedFaceProperty, METH_VARARGS,
   (char*)"V.GetSelectedFaceProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedFaceProperty()\n\nGet the face properties (the faces of the box). The properties of\nthe face when selected and normal can be set.\n"},
  {(char*)"GetOutlineProperty", PyvtkBoxRepresentation_GetOutlineProperty, METH_VARARGS,
   (char*)"V.GetOutlineProperty() -> vtkProperty\nC++: vtkProperty *GetOutlineProperty()\n\nGet the outline properties (the outline of the box). The\nproperties of the outline when selected and normal can be set.\n"},
  {(char*)"GetSelectedOutlineProperty", PyvtkBoxRepresentation_GetSelectedOutlineProperty, METH_VARARGS,
   (char*)"V.GetSelectedOutlineProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedOutlineProperty()\n\nGet the outline properties (the outline of the box). The\nproperties of the outline when selected and normal can be set.\n"},
  {(char*)"SetOutlineFaceWires", PyvtkBoxRepresentation_SetOutlineFaceWires, METH_VARARGS,
   (char*)"V.SetOutlineFaceWires(int)\nC++: void SetOutlineFaceWires(int)\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {(char*)"GetOutlineFaceWires", PyvtkBoxRepresentation_GetOutlineFaceWires, METH_VARARGS,
   (char*)"V.GetOutlineFaceWires() -> int\nC++: int GetOutlineFaceWires()\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {(char*)"OutlineFaceWiresOn", PyvtkBoxRepresentation_OutlineFaceWiresOn, METH_VARARGS,
   (char*)"V.OutlineFaceWiresOn()\nC++: void OutlineFaceWiresOn()\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {(char*)"OutlineFaceWiresOff", PyvtkBoxRepresentation_OutlineFaceWiresOff, METH_VARARGS,
   (char*)"V.OutlineFaceWiresOff()\nC++: void OutlineFaceWiresOff()\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {(char*)"SetOutlineCursorWires", PyvtkBoxRepresentation_SetOutlineCursorWires, METH_VARARGS,
   (char*)"V.SetOutlineCursorWires(int)\nC++: void SetOutlineCursorWires(int)\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {(char*)"GetOutlineCursorWires", PyvtkBoxRepresentation_GetOutlineCursorWires, METH_VARARGS,
   (char*)"V.GetOutlineCursorWires() -> int\nC++: int GetOutlineCursorWires()\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {(char*)"OutlineCursorWiresOn", PyvtkBoxRepresentation_OutlineCursorWiresOn, METH_VARARGS,
   (char*)"V.OutlineCursorWiresOn()\nC++: void OutlineCursorWiresOn()\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {(char*)"OutlineCursorWiresOff", PyvtkBoxRepresentation_OutlineCursorWiresOff, METH_VARARGS,
   (char*)"V.OutlineCursorWiresOff()\nC++: void OutlineCursorWiresOff()\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {(char*)"HandlesOn", PyvtkBoxRepresentation_HandlesOn, METH_VARARGS,
   (char*)"V.HandlesOn()\nC++: virtual void HandlesOn()\n\nSwitches handles (the spheres) on or off by manipulating the\nunderlying actor visibility.\n"},
  {(char*)"HandlesOff", PyvtkBoxRepresentation_HandlesOff, METH_VARARGS,
   (char*)"V.HandlesOff()\nC++: virtual void HandlesOff()\n\nSwitches handles (the spheres) on or off by manipulating the\nunderlying actor visibility.\n"},
  {(char*)"PlaceWidget", PyvtkBoxRepresentation_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"BuildRepresentation", PyvtkBoxRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"ComputeInteractionState", PyvtkBoxRepresentation_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"StartWidgetInteraction", PyvtkBoxRepresentation_StartWidgetInteraction, METH_VARARGS,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"WidgetInteraction", PyvtkBoxRepresentation_WidgetInteraction, METH_VARARGS,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"GetBounds", PyvtkBoxRepresentation_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkBoxRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkBoxRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkBoxRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkBoxRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"SetInteractionState", PyvtkBoxRepresentation_SetInteractionState, METH_VARARGS,
   (char*)"V.SetInteractionState(int)\nC++: void SetInteractionState(int state)\n\nThe interaction state may be set from a widget (e.g.,\nvtkBoxWidget2) or other object. This controls how the interaction\nwith the widget proceeds. Normally this method is used as part of\na handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBoxRepresentation_StaticNew()
{
  return vtkBoxRepresentation::New();
}

PyObject *PyVTKClass_vtkBoxRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBoxRepresentation_StaticNew,
    PyvtkBoxRepresentation_Methods,
    "vtkBoxRepresentation", modulename,
    NULL, NULL,
    PyvtkBoxRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 10; c++)
      {
      static const struct { const char *name; int value; }
        constants[10] = {
          { "Outside", vtkBoxRepresentation::Outside },
          { "MoveF0", vtkBoxRepresentation::MoveF0 },
          { "MoveF1", vtkBoxRepresentation::MoveF1 },
          { "MoveF2", vtkBoxRepresentation::MoveF2 },
          { "MoveF3", vtkBoxRepresentation::MoveF3 },
          { "MoveF4", vtkBoxRepresentation::MoveF4 },
          { "MoveF5", vtkBoxRepresentation::MoveF5 },
          { "Translating", vtkBoxRepresentation::Translating },
          { "Rotating", vtkBoxRepresentation::Rotating },
          { "Scaling", vtkBoxRepresentation::Scaling },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkBoxRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkBoxRepresentation - a class defining the representation for the\nvtkBoxWidget2\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This class is a concrete representation for the vtkBoxWidget2. It\nrepresents a box with seven handles: one on each of the six faces,\nplus a center handle. Through interaction with the widget, the box\nrepresentation can be arbitrarily positioned in the 3D space.\n\nTo use this representation, you normally use the PlaceWidget() method\nto position the widget at a specified region in space.\n\nCaveats:\n\nT",
    "his class, and vtkBoxWidget2, are second generation VTK widgets. An\nearlier version of this functionality was defined in the class\nvtkBoxWidget.\n\nSee Also:\n\nvtkBoxWidget2 vtkBoxWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBoxRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBoxRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBoxRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

