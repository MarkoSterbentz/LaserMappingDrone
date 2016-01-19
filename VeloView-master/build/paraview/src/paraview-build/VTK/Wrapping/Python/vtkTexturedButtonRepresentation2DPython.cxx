// python wrapper for vtkTexturedButtonRepresentation2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTexturedButtonRepresentation2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTexturedButtonRepresentation2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTexturedButtonRepresentation2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkButtonRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkButtonRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkButtonRepresentationNew
#endif

static const char **PyvtkTexturedButtonRepresentation2D_Doc();


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTexturedButtonRepresentation2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTexturedButtonRepresentation2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTexturedButtonRepresentation2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTexturedButtonRepresentation2D::NewInstance());

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
PyvtkTexturedButtonRepresentation2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTexturedButtonRepresentation2D *tempr = vtkTexturedButtonRepresentation2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetProperty(temp0);
      }
    else
      {
      op->vtkTexturedButtonRepresentation2D::SetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkTexturedButtonRepresentation2D::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_SetHoveringProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoveringProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetHoveringProperty(temp0);
      }
    else
      {
      op->vtkTexturedButtonRepresentation2D::SetHoveringProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetHoveringProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoveringProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetHoveringProperty() :
      op->vtkTexturedButtonRepresentation2D::GetHoveringProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_SetSelectingProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectingProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetSelectingProperty(temp0);
      }
    else
      {
      op->vtkTexturedButtonRepresentation2D::SetSelectingProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetSelectingProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectingProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetSelectingProperty() :
      op->vtkTexturedButtonRepresentation2D::GetSelectingProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_SetButtonTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButtonTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  int temp0;
  vtkImageData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetButtonTexture(temp0, temp1);
      }
    else
      {
      op->vtkTexturedButtonRepresentation2D::SetButtonTexture(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetButtonTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButtonTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetButtonTexture(temp0) :
      op->vtkTexturedButtonRepresentation2D::GetButtonTexture(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetBalloon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBalloonRepresentation *tempr = (ap.IsBound() ?
      op->GetBalloon() :
      op->vtkTexturedButtonRepresentation2D::GetBalloon());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkTexturedButtonRepresentation2D::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::Highlight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::PlaceWidget(temp0);
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
PyvtkTexturedButtonRepresentation2D_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  int temp1[2];
  int save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->PlaceWidget(temp0, temp1);
      }
    else
      {
      op->vtkTexturedButtonRepresentation2D::PlaceWidget(temp0, temp1);
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
PyvtkTexturedButtonRepresentation2D_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkTexturedButtonRepresentation2D_PlaceWidget_s1(self, args);
    case 2:
      return PyvtkTexturedButtonRepresentation2D_PlaceWidget_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
PyvtkTexturedButtonRepresentation2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkTexturedButtonRepresentation2D::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkTexturedButtonRepresentation2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkTexturedButtonRepresentation2D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTexturedButtonRepresentation2D_Methods[] = {
  {(char*)"GetClassName", PyvtkTexturedButtonRepresentation2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for the class.\n"},
  {(char*)"IsA", PyvtkTexturedButtonRepresentation2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for the class.\n"},
  {(char*)"NewInstance", PyvtkTexturedButtonRepresentation2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTexturedButtonRepresentation2D\nC++: vtkTexturedButtonRepresentation2D *NewInstance()\n\nStandard methods for the class.\n"},
  {(char*)"SafeDownCast", PyvtkTexturedButtonRepresentation2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTexturedButtonRepresentation2D\nC++: vtkTexturedButtonRepresentation2D *SafeDownCast(vtkObject* o)\n\nStandard methods for the class.\n"},
  {(char*)"SetProperty", PyvtkTexturedButtonRepresentation2D_SetProperty, METH_VARARGS,
   (char*)"V.SetProperty(vtkProperty2D)\nC++: virtual void SetProperty(vtkProperty2D *p)\n\nSpecify the property to use when the button is to appear \"normal\"\ni.e., the mouse pointer is not hovering or selecting the button.\n"},
  {(char*)"GetProperty", PyvtkTexturedButtonRepresentation2D_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetProperty()\n\nSpecify the property to use when the button is to appear \"normal\"\ni.e., the mouse pointer is not hovering or selecting the button.\n"},
  {(char*)"SetHoveringProperty", PyvtkTexturedButtonRepresentation2D_SetHoveringProperty, METH_VARARGS,
   (char*)"V.SetHoveringProperty(vtkProperty2D)\nC++: virtual void SetHoveringProperty(vtkProperty2D *p)\n\nSpecify the property to use when the hovering over the button.\n"},
  {(char*)"GetHoveringProperty", PyvtkTexturedButtonRepresentation2D_GetHoveringProperty, METH_VARARGS,
   (char*)"V.GetHoveringProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetHoveringProperty()\n\nSpecify the property to use when the hovering over the button.\n"},
  {(char*)"SetSelectingProperty", PyvtkTexturedButtonRepresentation2D_SetSelectingProperty, METH_VARARGS,
   (char*)"V.SetSelectingProperty(vtkProperty2D)\nC++: virtual void SetSelectingProperty(vtkProperty2D *p)\n\nSpecify the property to use when selecting the button.\n"},
  {(char*)"GetSelectingProperty", PyvtkTexturedButtonRepresentation2D_GetSelectingProperty, METH_VARARGS,
   (char*)"V.GetSelectingProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetSelectingProperty()\n\nSpecify the property to use when selecting the button.\n"},
  {(char*)"SetButtonTexture", PyvtkTexturedButtonRepresentation2D_SetButtonTexture, METH_VARARGS,
   (char*)"V.SetButtonTexture(int, vtkImageData)\nC++: void SetButtonTexture(int i, vtkImageData *image)\n\nAdd the ith texture corresponding to the ith button state. The\nparameter i should be 0<=i<NumberOfStates.\n"},
  {(char*)"GetButtonTexture", PyvtkTexturedButtonRepresentation2D_GetButtonTexture, METH_VARARGS,
   (char*)"V.GetButtonTexture(int) -> vtkImageData\nC++: vtkImageData *GetButtonTexture(int i)\n\nAdd the ith texture corresponding to the ith button state. The\nparameter i should be 0<=i<NumberOfStates.\n"},
  {(char*)"GetBalloon", PyvtkTexturedButtonRepresentation2D_GetBalloon, METH_VARARGS,
   (char*)"V.GetBalloon() -> vtkBalloonRepresentation\nC++: vtkBalloonRepresentation *GetBalloon()\n\nGrab the underlying vtkBalloonRepresentation used to position and\ndisplay the button texture.\n"},
  {(char*)"ComputeInteractionState", PyvtkTexturedButtonRepresentation2D_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {(char*)"BuildRepresentation", PyvtkTexturedButtonRepresentation2D_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {(char*)"Highlight", PyvtkTexturedButtonRepresentation2D_Highlight, METH_VARARGS,
   (char*)"V.Highlight(int)\nC++: virtual void Highlight(int state)\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {(char*)"PlaceWidget", PyvtkTexturedButtonRepresentation2D_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\nV.PlaceWidget([float, float, float], [int, int])\nC++: virtual void PlaceWidget(double anchor[3], int size[2])\n\nConventional PlaceWidget() method to satisfy the\nvtkWidgetRepresentation API. In this version, bounds[6] specifies\na rectangle in *display* coordinates in which to place the\nbutton. The values for bounds[4] and bounds[5] can be set to\nzero. Note that PlaceWidget() is typically called at the end of\nconfiguring the button representation.\n"},
  {(char*)"ShallowCopy", PyvtkTexturedButtonRepresentation2D_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"GetBounds", PyvtkTexturedButtonRepresentation2D_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"GetActors", PyvtkTexturedButtonRepresentation2D_GetActors, METH_VARARGS,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *pc)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkTexturedButtonRepresentation2D_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"RenderOverlay", PyvtkTexturedButtonRepresentation2D_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkTexturedButtonRepresentation2D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTexturedButtonRepresentation2D_StaticNew()
{
  return vtkTexturedButtonRepresentation2D::New();
}

PyObject *PyVTKClass_vtkTexturedButtonRepresentation2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTexturedButtonRepresentation2D_StaticNew,
    PyvtkTexturedButtonRepresentation2D_Methods,
    "vtkTexturedButtonRepresentation2D", modulename,
    NULL, NULL,
    PyvtkTexturedButtonRepresentation2D_Doc(),
    PyVTKClass_vtkButtonRepresentationNew(modulename));
  return cls;
}

const char **PyvtkTexturedButtonRepresentation2D_Doc()
{
  static const char *docstring[] = {
    "vtkTexturedButtonRepresentation2D - defines a representation for a\nvtkButtonWidget\n\n",
    "Superclass: vtkButtonRepresentation\n\n",
    "This class implements one type of vtkButtonRepresentation. It changes\nthe appearance of a user-provided polydata by assigning textures\naccording to the current button state. It also provides highlighting\n(when hovering and selecting the button) by fiddling with the actor's\nproperty. Since this is a 2D version, the button is rendered in the\noverlay plane. Typically it is positioned in display coord",
    "inates, but\nit can be anchored to a world position so it will appear to move as\nthe camera moves.\n\nTo use this representation, always begin by specifying the number of\nbutton states.  Then provide a polydata (the polydata should have\nassociated texture coordinates), and a list of textures cooresponding\nto the button states. Optionally, the HoveringProperty and\nSelectionProperty can be adjusted to ",
    "obtain the appropriate\nappearance.\n\nSee Also:\n\nvtkButtonWidget vtkButtonRepresentation\nvtkTexturedButtonRepresentation vtkProp3DButtonRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTexturedButtonRepresentation2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTexturedButtonRepresentation2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTexturedButtonRepresentation2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

