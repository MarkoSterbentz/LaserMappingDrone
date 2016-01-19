// python wrapper for vtkPointHandleRepresentationSphere
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPointHandleRepresentationSphere.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPointHandleRepresentationSphere(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPointHandleRepresentationSphereNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkHandleRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkHandleRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkHandleRepresentationNew
#endif

static const char **PyvtkPointHandleRepresentationSphere_Doc();


static PyObject *
PyvtkPointHandleRepresentationSphere_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPointHandleRepresentationSphere::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointHandleRepresentationSphere::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPointHandleRepresentationSphere *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointHandleRepresentationSphere::NewInstance());

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
PyvtkPointHandleRepresentationSphere_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPointHandleRepresentationSphere *tempr = vtkPointHandleRepresentationSphere::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_SetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetCursorShape(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentationSphere::SetCursorShape(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_GetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCursorShape() :
      op->vtkPointHandleRepresentationSphere::GetCursorShape());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetDisplayPosition(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentationSphere::SetDisplayPosition(temp0);
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
PyvtkPointHandleRepresentationSphere_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetProperty(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentationSphere::SetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_SetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetSelectedProperty(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentationSphere::SetSelectedProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkPointHandleRepresentationSphere::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkPointHandleRepresentationSphere::GetSelectedProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPointHandleRepresentationSphere::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkPointHandleRepresentationSphere::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

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
      op->vtkPointHandleRepresentationSphere::StartWidgetInteraction(temp0);
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
PyvtkPointHandleRepresentationSphere_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

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
      op->vtkPointHandleRepresentationSphere::WidgetInteraction(temp0);
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
PyvtkPointHandleRepresentationSphere_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

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
      op->vtkPointHandleRepresentationSphere::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentationSphere::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentationSphere::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

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
      op->vtkPointHandleRepresentationSphere::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPointHandleRepresentationSphere::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_SetScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalar(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentationSphere::SetScalar(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_GetScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScalar() :
      op->vtkPointHandleRepresentationSphere::GetScalar());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_SetAddCircleAroundSphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddCircleAroundSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAddCircleAroundSphere(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentationSphere::SetAddCircleAroundSphere(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_GetAddCircleAroundSphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddCircleAroundSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAddCircleAroundSphere() :
      op->vtkPointHandleRepresentationSphere::GetAddCircleAroundSphere());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_AddCircleAroundSphereOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCircleAroundSphereOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddCircleAroundSphereOn();
      }
    else
      {
      op->vtkPointHandleRepresentationSphere::AddCircleAroundSphereOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_AddCircleAroundSphereOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCircleAroundSphereOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddCircleAroundSphereOff();
      }
    else
      {
      op->vtkPointHandleRepresentationSphere::AddCircleAroundSphereOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentationSphere_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentationSphere *op = static_cast<vtkPointHandleRepresentationSphere *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Highlight(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentationSphere::Highlight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPointHandleRepresentationSphere_Methods[] = {
  {(char*)"GetClassName", PyvtkPointHandleRepresentationSphere_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkPointHandleRepresentationSphere_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkPointHandleRepresentationSphere_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPointHandleRepresentationSphere\nC++: vtkPointHandleRepresentationSphere *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkPointHandleRepresentationSphere_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointHandleRepresentationSphere\nC++: vtkPointHandleRepresentationSphere *SafeDownCast(\n    vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"SetCursorShape", PyvtkPointHandleRepresentationSphere_SetCursorShape, METH_VARARGS,
   (char*)"V.SetCursorShape(vtkPolyData)\nC++: void SetCursorShape(vtkPolyData *cursorShape)\n\nSpecify the cursor shape with an instance of vtkPolyData. Note\nthat shape is assumed to be defined in the display coordinate\nsystem. By default a sphere (the output of vtkSphereSource) shape\nis used.\n"},
  {(char*)"GetCursorShape", PyvtkPointHandleRepresentationSphere_GetCursorShape, METH_VARARGS,
   (char*)"V.GetCursorShape() -> vtkPolyData\nC++: vtkPolyData *GetCursorShape()\n\nSpecify the cursor shape with an instance of vtkPolyData. Note\nthat shape is assumed to be defined in the display coordinate\nsystem. By default a sphere (the output of vtkSphereSource) shape\nis used.\n"},
  {(char*)"SetDisplayPosition", PyvtkPointHandleRepresentationSphere_SetDisplayPosition, METH_VARARGS,
   (char*)"V.SetDisplayPosition([float, float, float])\nC++: virtual void SetDisplayPosition(double xyz[3])\n\nSet/Get the position of the point in display coordinates.  This\noverloads the superclasses SetDisplayPosition in order to set the\nfocal point of the cursor.\n"},
  {(char*)"SetProperty", PyvtkPointHandleRepresentationSphere_SetProperty, METH_VARARGS,
   (char*)"V.SetProperty(vtkProperty)\nC++: void SetProperty(vtkProperty *)\n\nSet/Get the handle properties when unselected and selected.\n"},
  {(char*)"SetSelectedProperty", PyvtkPointHandleRepresentationSphere_SetSelectedProperty, METH_VARARGS,
   (char*)"V.SetSelectedProperty(vtkProperty)\nC++: void SetSelectedProperty(vtkProperty *)\n\nSet/Get the handle properties when unselected and selected.\n"},
  {(char*)"GetProperty", PyvtkPointHandleRepresentationSphere_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkProperty\nC++: vtkProperty *GetProperty()\n\nSet/Get the handle properties when unselected and selected.\n"},
  {(char*)"GetSelectedProperty", PyvtkPointHandleRepresentationSphere_GetSelectedProperty, METH_VARARGS,
   (char*)"V.GetSelectedProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedProperty()\n\nSet/Get the handle properties when unselected and selected.\n"},
  {(char*)"GetBounds", PyvtkPointHandleRepresentationSphere_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\n\nSubclasses of vtkPointHandleRepresentationSphere must implement\nthese methods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {(char*)"BuildRepresentation", PyvtkPointHandleRepresentationSphere_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nSubclasses of vtkPointHandleRepresentationSphere must implement\nthese methods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {(char*)"StartWidgetInteraction", PyvtkPointHandleRepresentationSphere_StartWidgetInteraction, METH_VARARGS,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double eventPos[2])\n\nSubclasses of vtkPointHandleRepresentationSphere must implement\nthese methods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {(char*)"WidgetInteraction", PyvtkPointHandleRepresentationSphere_WidgetInteraction, METH_VARARGS,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double eventPos[2])\n\nSubclasses of vtkPointHandleRepresentationSphere must implement\nthese methods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {(char*)"ComputeInteractionState", PyvtkPointHandleRepresentationSphere_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nSubclasses of vtkPointHandleRepresentationSphere must implement\nthese methods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {(char*)"ShallowCopy", PyvtkPointHandleRepresentationSphere_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"GetActors", PyvtkPointHandleRepresentationSphere_GetActors, METH_VARARGS,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkPointHandleRepresentationSphere_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkPointHandleRepresentationSphere_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"SetScalar", PyvtkPointHandleRepresentationSphere_SetScalar, METH_VARARGS,
   (char*)"V.SetScalar(float)\nC++: void SetScalar(double a)\n\nSet/get the scalar value associated with this handle.\n"},
  {(char*)"GetScalar", PyvtkPointHandleRepresentationSphere_GetScalar, METH_VARARGS,
   (char*)"V.GetScalar() -> float\nC++: double GetScalar()\n\nSet/get the scalar value associated with this handle.\n"},
  {(char*)"SetAddCircleAroundSphere", PyvtkPointHandleRepresentationSphere_SetAddCircleAroundSphere, METH_VARARGS,
   (char*)"V.SetAddCircleAroundSphere(int)\nC++: void SetAddCircleAroundSphere(int)\n\nSet/get the flag whether to add a circle (disk) source around the\nsphere.\n"},
  {(char*)"GetAddCircleAroundSphere", PyvtkPointHandleRepresentationSphere_GetAddCircleAroundSphere, METH_VARARGS,
   (char*)"V.GetAddCircleAroundSphere() -> int\nC++: int GetAddCircleAroundSphere()\n\nSet/get the flag whether to add a circle (disk) source around the\nsphere.\n"},
  {(char*)"AddCircleAroundSphereOn", PyvtkPointHandleRepresentationSphere_AddCircleAroundSphereOn, METH_VARARGS,
   (char*)"V.AddCircleAroundSphereOn()\nC++: void AddCircleAroundSphereOn()\n\nSet/get the flag whether to add a circle (disk) source around the\nsphere.\n"},
  {(char*)"AddCircleAroundSphereOff", PyvtkPointHandleRepresentationSphere_AddCircleAroundSphereOff, METH_VARARGS,
   (char*)"V.AddCircleAroundSphereOff()\nC++: void AddCircleAroundSphereOff()\n\nSet/get the flag whether to add a circle (disk) source around the\nsphere.\n"},
  {(char*)"Highlight", PyvtkPointHandleRepresentationSphere_Highlight, METH_VARARGS,
   (char*)"V.Highlight(int)\nC++: void Highlight(int highlight)\n\nToggle whether this handle should be highlighted.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointHandleRepresentationSphere_StaticNew()
{
  return vtkPointHandleRepresentationSphere::New();
}

PyObject *PyVTKClass_vtkPointHandleRepresentationSphereNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointHandleRepresentationSphere_StaticNew,
    PyvtkPointHandleRepresentationSphere_Methods,
    "vtkPointHandleRepresentationSphere", modulename,
    NULL, NULL,
    PyvtkPointHandleRepresentationSphere_Doc(),
    PyVTKClass_vtkHandleRepresentationNew(modulename));
  return cls;
}

const char **PyvtkPointHandleRepresentationSphere_Doc()
{
  static const char *docstring[] = {
    "vtkPointHandleRepresentationSphere - represent the position of a\npoint in display coordinates\n\n",
    "Superclass: vtkHandleRepresentation\n\n",
    "This class is used to represent a vtkHandleWidget. It represents a\nposition in 2D world coordinates using a x-y cursor (the cursor\ndefined by an instance of vtkPolyData and generated by a\nvtkPolyDataAlgorithm).\n\nSee Also:\n\nvtkHandleRepresentation vtkHandleWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointHandleRepresentationSphere(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointHandleRepresentationSphereNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointHandleRepresentationSphere", o) != 0)
    {
    Py_DECREF(o);
    }

}

