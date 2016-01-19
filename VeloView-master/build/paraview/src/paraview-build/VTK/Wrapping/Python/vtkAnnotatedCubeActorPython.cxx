// python wrapper for vtkAnnotatedCubeActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAnnotatedCubeActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAnnotatedCubeActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAnnotatedCubeActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkProp3DNew
extern "C" { PyObject *PyVTKClass_vtkProp3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkProp3DNew
#endif

static const char **PyvtkAnnotatedCubeActor_Doc();


static PyObject *
PyvtkAnnotatedCubeActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAnnotatedCubeActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnnotatedCubeActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAnnotatedCubeActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnnotatedCubeActor::NewInstance());

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
PyvtkAnnotatedCubeActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAnnotatedCubeActor *tempr = vtkAnnotatedCubeActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

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
      op->vtkAnnotatedCubeActor::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkAnnotatedCubeActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkAnnotatedCubeActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkAnnotatedCubeActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

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
      op->vtkAnnotatedCubeActor::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

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
      op->vtkAnnotatedCubeActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

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
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::GetBounds(temp0);
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
PyvtkAnnotatedCubeActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAnnotatedCubeActor::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAnnotatedCubeActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAnnotatedCubeActor_GetBounds_s1(self, args);
    case 0:
      return PyvtkAnnotatedCubeActor_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkAnnotatedCubeActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAnnotatedCubeActor::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetFaceTextScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFaceTextScale(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetFaceTextScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetFaceTextScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFaceTextScale() :
      op->vtkAnnotatedCubeActor::GetFaceTextScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetXPlusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXPlusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXPlusFaceProperty() :
      op->vtkAnnotatedCubeActor::GetXPlusFaceProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetXMinusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMinusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXMinusFaceProperty() :
      op->vtkAnnotatedCubeActor::GetXMinusFaceProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetYPlusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYPlusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYPlusFaceProperty() :
      op->vtkAnnotatedCubeActor::GetYPlusFaceProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetYMinusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYMinusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYMinusFaceProperty() :
      op->vtkAnnotatedCubeActor::GetYMinusFaceProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetZPlusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZPlusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZPlusFaceProperty() :
      op->vtkAnnotatedCubeActor::GetZPlusFaceProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetZMinusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZMinusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZMinusFaceProperty() :
      op->vtkAnnotatedCubeActor::GetZMinusFaceProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetCubeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCubeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetCubeProperty() :
      op->vtkAnnotatedCubeActor::GetCubeProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetTextEdgesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextEdgesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetTextEdgesProperty() :
      op->vtkAnnotatedCubeActor::GetTextEdgesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetXPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXPlusFaceText(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetXPlusFaceText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetXPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXPlusFaceText() :
      op->vtkAnnotatedCubeActor::GetXPlusFaceText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetXMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXMinusFaceText(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetXMinusFaceText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetXMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXMinusFaceText() :
      op->vtkAnnotatedCubeActor::GetXMinusFaceText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetYPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYPlusFaceText(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetYPlusFaceText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetYPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetYPlusFaceText() :
      op->vtkAnnotatedCubeActor::GetYPlusFaceText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetYMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYMinusFaceText(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetYMinusFaceText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetYMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetYMinusFaceText() :
      op->vtkAnnotatedCubeActor::GetYMinusFaceText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetZPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZPlusFaceText(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetZPlusFaceText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetZPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetZPlusFaceText() :
      op->vtkAnnotatedCubeActor::GetZPlusFaceText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetZMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZMinusFaceText(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetZMinusFaceText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetZMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetZMinusFaceText() :
      op->vtkAnnotatedCubeActor::GetZMinusFaceText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetTextEdgesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextEdgesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextEdgesVisibility(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetTextEdgesVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetTextEdgesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextEdgesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextEdgesVisibility() :
      op->vtkAnnotatedCubeActor::GetTextEdgesVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetCubeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCubeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCubeVisibility(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetCubeVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetCubeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCubeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCubeVisibility() :
      op->vtkAnnotatedCubeActor::GetCubeVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetFaceTextVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceTextVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFaceTextVisibility(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetFaceTextVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetFaceTextVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceTextVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFaceTextVisibility() :
      op->vtkAnnotatedCubeActor::GetFaceTextVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetXFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXFaceTextRotation(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetXFaceTextRotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetXFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetXFaceTextRotation() :
      op->vtkAnnotatedCubeActor::GetXFaceTextRotation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetYFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYFaceTextRotation(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetYFaceTextRotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetYFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetYFaceTextRotation() :
      op->vtkAnnotatedCubeActor::GetYFaceTextRotation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetZFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZFaceTextRotation(temp0);
      }
    else
      {
      op->vtkAnnotatedCubeActor::SetZFaceTextRotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetZFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetZFaceTextRotation() :
      op->vtkAnnotatedCubeActor::GetZFaceTextRotation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetAssembly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssembly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAssembly *tempr = (ap.IsBound() ?
      op->GetAssembly() :
      op->vtkAnnotatedCubeActor::GetAssembly());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAnnotatedCubeActor_Methods[] = {
  {(char*)"GetClassName", PyvtkAnnotatedCubeActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAnnotatedCubeActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAnnotatedCubeActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAnnotatedCubeActor\nC++: vtkAnnotatedCubeActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAnnotatedCubeActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAnnotatedCubeActor\nC++: vtkAnnotatedCubeActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetActors", PyvtkAnnotatedCubeActor_GetActors, METH_VARARGS,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkAnnotatedCubeActor_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkAnnotatedCubeActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkAnnotatedCubeActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ShallowCopy", PyvtkAnnotatedCubeActor_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of an axes actor. Overloads the virtual vtkProp\nmethod.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAnnotatedCubeActor_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetBounds", PyvtkAnnotatedCubeActor_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\nV.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\nGet the bounds for this Actor as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n(The method GetBounds(double bounds[6]) is available from the\nsuperclass.)\n"},
  {(char*)"GetMTime", PyvtkAnnotatedCubeActor_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nGet the actors mtime plus consider its properties and texture if\nset.\n"},
  {(char*)"SetFaceTextScale", PyvtkAnnotatedCubeActor_SetFaceTextScale, METH_VARARGS,
   (char*)"V.SetFaceTextScale(float)\nC++: void SetFaceTextScale(double)\n\nSet/Get the scale factor for the face text\n"},
  {(char*)"GetFaceTextScale", PyvtkAnnotatedCubeActor_GetFaceTextScale, METH_VARARGS,
   (char*)"V.GetFaceTextScale() -> float\nC++: double GetFaceTextScale()\n\nSet/Get the scale factor for the face text\n"},
  {(char*)"GetXPlusFaceProperty", PyvtkAnnotatedCubeActor_GetXPlusFaceProperty, METH_VARARGS,
   (char*)"V.GetXPlusFaceProperty() -> vtkProperty\nC++: vtkProperty *GetXPlusFaceProperty()\n\nGet the individual face text properties.\n"},
  {(char*)"GetXMinusFaceProperty", PyvtkAnnotatedCubeActor_GetXMinusFaceProperty, METH_VARARGS,
   (char*)"V.GetXMinusFaceProperty() -> vtkProperty\nC++: vtkProperty *GetXMinusFaceProperty()\n\nGet the individual face text properties.\n"},
  {(char*)"GetYPlusFaceProperty", PyvtkAnnotatedCubeActor_GetYPlusFaceProperty, METH_VARARGS,
   (char*)"V.GetYPlusFaceProperty() -> vtkProperty\nC++: vtkProperty *GetYPlusFaceProperty()\n\nGet the individual face text properties.\n"},
  {(char*)"GetYMinusFaceProperty", PyvtkAnnotatedCubeActor_GetYMinusFaceProperty, METH_VARARGS,
   (char*)"V.GetYMinusFaceProperty() -> vtkProperty\nC++: vtkProperty *GetYMinusFaceProperty()\n\nGet the individual face text properties.\n"},
  {(char*)"GetZPlusFaceProperty", PyvtkAnnotatedCubeActor_GetZPlusFaceProperty, METH_VARARGS,
   (char*)"V.GetZPlusFaceProperty() -> vtkProperty\nC++: vtkProperty *GetZPlusFaceProperty()\n\nGet the individual face text properties.\n"},
  {(char*)"GetZMinusFaceProperty", PyvtkAnnotatedCubeActor_GetZMinusFaceProperty, METH_VARARGS,
   (char*)"V.GetZMinusFaceProperty() -> vtkProperty\nC++: vtkProperty *GetZMinusFaceProperty()\n\nGet the individual face text properties.\n"},
  {(char*)"GetCubeProperty", PyvtkAnnotatedCubeActor_GetCubeProperty, METH_VARARGS,
   (char*)"V.GetCubeProperty() -> vtkProperty\nC++: vtkProperty *GetCubeProperty()\n\nGet the cube properties.\n"},
  {(char*)"GetTextEdgesProperty", PyvtkAnnotatedCubeActor_GetTextEdgesProperty, METH_VARARGS,
   (char*)"V.GetTextEdgesProperty() -> vtkProperty\nC++: vtkProperty *GetTextEdgesProperty()\n\nGet the text edges properties.\n"},
  {(char*)"SetXPlusFaceText", PyvtkAnnotatedCubeActor_SetXPlusFaceText, METH_VARARGS,
   (char*)"V.SetXPlusFaceText(string)\nC++: void SetXPlusFaceText(char *)\n\nSet/get the face text.\n"},
  {(char*)"GetXPlusFaceText", PyvtkAnnotatedCubeActor_GetXPlusFaceText, METH_VARARGS,
   (char*)"V.GetXPlusFaceText() -> string\nC++: char *GetXPlusFaceText()\n\nSet/get the face text.\n"},
  {(char*)"SetXMinusFaceText", PyvtkAnnotatedCubeActor_SetXMinusFaceText, METH_VARARGS,
   (char*)"V.SetXMinusFaceText(string)\nC++: void SetXMinusFaceText(char *)\n\nSet/get the face text.\n"},
  {(char*)"GetXMinusFaceText", PyvtkAnnotatedCubeActor_GetXMinusFaceText, METH_VARARGS,
   (char*)"V.GetXMinusFaceText() -> string\nC++: char *GetXMinusFaceText()\n\nSet/get the face text.\n"},
  {(char*)"SetYPlusFaceText", PyvtkAnnotatedCubeActor_SetYPlusFaceText, METH_VARARGS,
   (char*)"V.SetYPlusFaceText(string)\nC++: void SetYPlusFaceText(char *)\n\nSet/get the face text.\n"},
  {(char*)"GetYPlusFaceText", PyvtkAnnotatedCubeActor_GetYPlusFaceText, METH_VARARGS,
   (char*)"V.GetYPlusFaceText() -> string\nC++: char *GetYPlusFaceText()\n\nSet/get the face text.\n"},
  {(char*)"SetYMinusFaceText", PyvtkAnnotatedCubeActor_SetYMinusFaceText, METH_VARARGS,
   (char*)"V.SetYMinusFaceText(string)\nC++: void SetYMinusFaceText(char *)\n\nSet/get the face text.\n"},
  {(char*)"GetYMinusFaceText", PyvtkAnnotatedCubeActor_GetYMinusFaceText, METH_VARARGS,
   (char*)"V.GetYMinusFaceText() -> string\nC++: char *GetYMinusFaceText()\n\nSet/get the face text.\n"},
  {(char*)"SetZPlusFaceText", PyvtkAnnotatedCubeActor_SetZPlusFaceText, METH_VARARGS,
   (char*)"V.SetZPlusFaceText(string)\nC++: void SetZPlusFaceText(char *)\n\nSet/get the face text.\n"},
  {(char*)"GetZPlusFaceText", PyvtkAnnotatedCubeActor_GetZPlusFaceText, METH_VARARGS,
   (char*)"V.GetZPlusFaceText() -> string\nC++: char *GetZPlusFaceText()\n\nSet/get the face text.\n"},
  {(char*)"SetZMinusFaceText", PyvtkAnnotatedCubeActor_SetZMinusFaceText, METH_VARARGS,
   (char*)"V.SetZMinusFaceText(string)\nC++: void SetZMinusFaceText(char *)\n\nSet/get the face text.\n"},
  {(char*)"GetZMinusFaceText", PyvtkAnnotatedCubeActor_GetZMinusFaceText, METH_VARARGS,
   (char*)"V.GetZMinusFaceText() -> string\nC++: char *GetZMinusFaceText()\n\nSet/get the face text.\n"},
  {(char*)"SetTextEdgesVisibility", PyvtkAnnotatedCubeActor_SetTextEdgesVisibility, METH_VARARGS,
   (char*)"V.SetTextEdgesVisibility(int)\nC++: void SetTextEdgesVisibility(int)\n\nEnable/disable drawing the vector text edges.\n"},
  {(char*)"GetTextEdgesVisibility", PyvtkAnnotatedCubeActor_GetTextEdgesVisibility, METH_VARARGS,
   (char*)"V.GetTextEdgesVisibility() -> int\nC++: int GetTextEdgesVisibility()\n\nEnable/disable drawing the vector text edges.\n"},
  {(char*)"SetCubeVisibility", PyvtkAnnotatedCubeActor_SetCubeVisibility, METH_VARARGS,
   (char*)"V.SetCubeVisibility(int)\nC++: void SetCubeVisibility(int)\n\nEnable/disable drawing the cube.\n"},
  {(char*)"GetCubeVisibility", PyvtkAnnotatedCubeActor_GetCubeVisibility, METH_VARARGS,
   (char*)"V.GetCubeVisibility() -> int\nC++: int GetCubeVisibility()\n\nEnable/disable drawing the cube.\n"},
  {(char*)"SetFaceTextVisibility", PyvtkAnnotatedCubeActor_SetFaceTextVisibility, METH_VARARGS,
   (char*)"V.SetFaceTextVisibility(int)\nC++: void SetFaceTextVisibility(int)\n\nEnable/disable drawing the vector text.\n"},
  {(char*)"GetFaceTextVisibility", PyvtkAnnotatedCubeActor_GetFaceTextVisibility, METH_VARARGS,
   (char*)"V.GetFaceTextVisibility() -> int\nC++: int GetFaceTextVisibility()\n\nEnable/disable drawing the vector text.\n"},
  {(char*)"SetXFaceTextRotation", PyvtkAnnotatedCubeActor_SetXFaceTextRotation, METH_VARARGS,
   (char*)"V.SetXFaceTextRotation(float)\nC++: void SetXFaceTextRotation(double a)\n\nAugment individual face text orientations.\n"},
  {(char*)"GetXFaceTextRotation", PyvtkAnnotatedCubeActor_GetXFaceTextRotation, METH_VARARGS,
   (char*)"V.GetXFaceTextRotation() -> float\nC++: double GetXFaceTextRotation()\n\nAugment individual face text orientations.\n"},
  {(char*)"SetYFaceTextRotation", PyvtkAnnotatedCubeActor_SetYFaceTextRotation, METH_VARARGS,
   (char*)"V.SetYFaceTextRotation(float)\nC++: void SetYFaceTextRotation(double a)\n\nAugment individual face text orientations.\n"},
  {(char*)"GetYFaceTextRotation", PyvtkAnnotatedCubeActor_GetYFaceTextRotation, METH_VARARGS,
   (char*)"V.GetYFaceTextRotation() -> float\nC++: double GetYFaceTextRotation()\n\nAugment individual face text orientations.\n"},
  {(char*)"SetZFaceTextRotation", PyvtkAnnotatedCubeActor_SetZFaceTextRotation, METH_VARARGS,
   (char*)"V.SetZFaceTextRotation(float)\nC++: void SetZFaceTextRotation(double a)\n\nAugment individual face text orientations.\n"},
  {(char*)"GetZFaceTextRotation", PyvtkAnnotatedCubeActor_GetZFaceTextRotation, METH_VARARGS,
   (char*)"V.GetZFaceTextRotation() -> float\nC++: double GetZFaceTextRotation()\n\nAugment individual face text orientations.\n"},
  {(char*)"GetAssembly", PyvtkAnnotatedCubeActor_GetAssembly, METH_VARARGS,
   (char*)"V.GetAssembly() -> vtkAssembly\nC++: vtkAssembly *GetAssembly()\n\nGet the assembly so that user supplied transforms can be applied\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAnnotatedCubeActor_StaticNew()
{
  return vtkAnnotatedCubeActor::New();
}

PyObject *PyVTKClass_vtkAnnotatedCubeActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAnnotatedCubeActor_StaticNew,
    PyvtkAnnotatedCubeActor_Methods,
    "vtkAnnotatedCubeActor", modulename,
    NULL, NULL,
    PyvtkAnnotatedCubeActor_Doc(),
    PyVTKClass_vtkProp3DNew(modulename));
  return cls;
}

const char **PyvtkAnnotatedCubeActor_Doc()
{
  static const char *docstring[] = {
    "vtkAnnotatedCubeActor - a 3D cube with face labels\n\n",
    "Superclass: vtkProp3D\n\n",
    "vtkAnnotatedCubeActor is a hybrid 3D actor used to represent an\nanatomical orientation marker in a scene.  The class consists of a 3D\nunit cube centered on the origin with each face labelled in\ncorrespondance to a particular coordinate direction.  For example,\nwith Cartesian directions, the user defined text labels could be: +X,\n-X, +Y, -Y, +Z, -Z, while for anatomical directions: A, P, L, R, S,\nI",
    ".  Text is automatically centered on each cube face and is not\nrestriceted to single characters. In addition to or in replace of a\nsolid text label representation, the outline edges of the labels can\nbe displayed.  The individual properties of the cube, face labels and\ntext outlines can be manipulated as can their visibility.\n\nCaveats:\n\nvtkAnnotatedCubeActor is primarily intended for use with\nvtkO",
    "rientationMarkerWidget. The cube face text is generated by\nvtkVectorText and therefore the font attributes are restricted.\n\nSee Also:\n\nvtkAxesActor vtkOrientationMarkerWidget vtkVectorText\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAnnotatedCubeActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAnnotatedCubeActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAnnotatedCubeActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

