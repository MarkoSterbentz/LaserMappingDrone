// python wrapper for vtkPointHandleRepresentation3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPointHandleRepresentation3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPointHandleRepresentation3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPointHandleRepresentation3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkHandleRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkHandleRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkHandleRepresentationNew
#endif

static const char **PyvtkPointHandleRepresentation3D_Doc();


static PyObject *
PyvtkPointHandleRepresentation3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPointHandleRepresentation3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointHandleRepresentation3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPointHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointHandleRepresentation3D::NewInstance());

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
PyvtkPointHandleRepresentation3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPointHandleRepresentation3D *tempr = vtkPointHandleRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->SetWorldPosition(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation3D::SetWorldPosition(temp0);
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
PyvtkPointHandleRepresentation3D_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::SetDisplayPosition(temp0);
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
PyvtkPointHandleRepresentation3D_SetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutline(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation3D::SetOutline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutline() :
      op->vtkPointHandleRepresentation3D::GetOutline());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_OutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineOn();
      }
    else
      {
      op->vtkPointHandleRepresentation3D::OutlineOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_OutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineOff();
      }
    else
      {
      op->vtkPointHandleRepresentation3D::OutlineOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetXShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXShadows(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation3D::SetXShadows(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetXShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXShadows() :
      op->vtkPointHandleRepresentation3D::GetXShadows());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_XShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XShadowsOn();
      }
    else
      {
      op->vtkPointHandleRepresentation3D::XShadowsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_XShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XShadowsOff();
      }
    else
      {
      op->vtkPointHandleRepresentation3D::XShadowsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetYShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYShadows(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation3D::SetYShadows(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetYShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYShadows() :
      op->vtkPointHandleRepresentation3D::GetYShadows());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_YShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YShadowsOn();
      }
    else
      {
      op->vtkPointHandleRepresentation3D::YShadowsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_YShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YShadowsOff();
      }
    else
      {
      op->vtkPointHandleRepresentation3D::YShadowsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetZShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZShadows(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation3D::SetZShadows(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetZShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZShadows() :
      op->vtkPointHandleRepresentation3D::GetZShadows());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_ZShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZShadowsOn();
      }
    else
      {
      op->vtkPointHandleRepresentation3D::ZShadowsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_ZShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZShadowsOff();
      }
    else
      {
      op->vtkPointHandleRepresentation3D::ZShadowsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTranslationMode(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation3D::SetTranslationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTranslationMode() :
      op->vtkPointHandleRepresentation3D::GetTranslationMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_TranslationModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TranslationModeOn();
      }
    else
      {
      op->vtkPointHandleRepresentation3D::TranslationModeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_TranslationModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TranslationModeOff();
      }
    else
      {
      op->vtkPointHandleRepresentation3D::TranslationModeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_AllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllOn();
      }
    else
      {
      op->vtkPointHandleRepresentation3D::AllOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_AllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllOff();
      }
    else
      {
      op->vtkPointHandleRepresentation3D::AllOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::SetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::SetSelectedProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkPointHandleRepresentation3D::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkPointHandleRepresentation3D::GetSelectedProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetHotSpotSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHotSpotSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHotSpotSize(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation3D::SetHotSpotSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetHotSpotSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSizeMinValue() :
      op->vtkPointHandleRepresentation3D::GetHotSpotSizeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetHotSpotSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSizeMaxValue() :
      op->vtkPointHandleRepresentation3D::GetHotSpotSizeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetHotSpotSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSize() :
      op->vtkPointHandleRepresentation3D::GetHotSpotSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetHandleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHandleSize(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation3D::SetHandleSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPointHandleRepresentation3D::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkPointHandleRepresentation3D::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::StartWidgetInteraction(temp0);
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
PyvtkPointHandleRepresentation3D_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::WidgetInteraction(temp0);
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
PyvtkPointHandleRepresentation3D_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::PlaceWidget(temp0);
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
PyvtkPointHandleRepresentation3D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation3D::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPointHandleRepresentation3D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkPointHandleRepresentation3D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkPointHandleRepresentation3D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::Highlight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetSmoothMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSmoothMotion(temp0);
      }
    else
      {
      op->vtkPointHandleRepresentation3D::SetSmoothMotion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetSmoothMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSmoothMotion() :
      op->vtkPointHandleRepresentation3D::GetSmoothMotion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SmoothMotionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothMotionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SmoothMotionOn();
      }
    else
      {
      op->vtkPointHandleRepresentation3D::SmoothMotionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SmoothMotionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothMotionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SmoothMotionOff();
      }
    else
      {
      op->vtkPointHandleRepresentation3D::SmoothMotionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPointHandleRepresentation3D_Methods[] = {
  {(char*)"GetClassName", PyvtkPointHandleRepresentation3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkPointHandleRepresentation3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkPointHandleRepresentation3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPointHandleRepresentation3D\nC++: vtkPointHandleRepresentation3D *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkPointHandleRepresentation3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointHandleRepresentation3D\nC++: vtkPointHandleRepresentation3D *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"SetWorldPosition", PyvtkPointHandleRepresentation3D_SetWorldPosition, METH_VARARGS,
   (char*)"V.SetWorldPosition([float, float, float])\nC++: virtual void SetWorldPosition(double p[3])\n\nSet the position of the point in world and display coordinates.\nNote that if the position is set outside of the bounding box, it\nwill be clamped to the boundary of the bounding box. This method\noverloads the superclasses' SetWorldPosition() and\nSetDisplayPosition() in order to set the focal point of the\ncursor properly.\n"},
  {(char*)"SetDisplayPosition", PyvtkPointHandleRepresentation3D_SetDisplayPosition, METH_VARARGS,
   (char*)"V.SetDisplayPosition([float, float, float])\nC++: virtual void SetDisplayPosition(double p[3])\n\nSet the position of the point in world and display coordinates.\nNote that if the position is set outside of the bounding box, it\nwill be clamped to the boundary of the bounding box. This method\noverloads the superclasses' SetWorldPosition() and\nSetDisplayPosition() in order to set the focal point of the\ncursor properly.\n"},
  {(char*)"SetOutline", PyvtkPointHandleRepresentation3D_SetOutline, METH_VARARGS,
   (char*)"V.SetOutline(int)\nC++: void SetOutline(int o)\n\nTurn on/off the wireframe bounding box.\n"},
  {(char*)"GetOutline", PyvtkPointHandleRepresentation3D_GetOutline, METH_VARARGS,
   (char*)"V.GetOutline() -> int\nC++: int GetOutline()\n\nTurn on/off the wireframe bounding box.\n"},
  {(char*)"OutlineOn", PyvtkPointHandleRepresentation3D_OutlineOn, METH_VARARGS,
   (char*)"V.OutlineOn()\nC++: void OutlineOn()\n\nTurn on/off the wireframe bounding box.\n"},
  {(char*)"OutlineOff", PyvtkPointHandleRepresentation3D_OutlineOff, METH_VARARGS,
   (char*)"V.OutlineOff()\nC++: void OutlineOff()\n\nTurn on/off the wireframe bounding box.\n"},
  {(char*)"SetXShadows", PyvtkPointHandleRepresentation3D_SetXShadows, METH_VARARGS,
   (char*)"V.SetXShadows(int)\nC++: void SetXShadows(int o)\n\nTurn on/off the wireframe x-shadows.\n"},
  {(char*)"GetXShadows", PyvtkPointHandleRepresentation3D_GetXShadows, METH_VARARGS,
   (char*)"V.GetXShadows() -> int\nC++: int GetXShadows()\n\nTurn on/off the wireframe x-shadows.\n"},
  {(char*)"XShadowsOn", PyvtkPointHandleRepresentation3D_XShadowsOn, METH_VARARGS,
   (char*)"V.XShadowsOn()\nC++: void XShadowsOn()\n\nTurn on/off the wireframe x-shadows.\n"},
  {(char*)"XShadowsOff", PyvtkPointHandleRepresentation3D_XShadowsOff, METH_VARARGS,
   (char*)"V.XShadowsOff()\nC++: void XShadowsOff()\n\nTurn on/off the wireframe x-shadows.\n"},
  {(char*)"SetYShadows", PyvtkPointHandleRepresentation3D_SetYShadows, METH_VARARGS,
   (char*)"V.SetYShadows(int)\nC++: void SetYShadows(int o)\n\nTurn on/off the wireframe y-shadows.\n"},
  {(char*)"GetYShadows", PyvtkPointHandleRepresentation3D_GetYShadows, METH_VARARGS,
   (char*)"V.GetYShadows() -> int\nC++: int GetYShadows()\n\nTurn on/off the wireframe y-shadows.\n"},
  {(char*)"YShadowsOn", PyvtkPointHandleRepresentation3D_YShadowsOn, METH_VARARGS,
   (char*)"V.YShadowsOn()\nC++: void YShadowsOn()\n\nTurn on/off the wireframe y-shadows.\n"},
  {(char*)"YShadowsOff", PyvtkPointHandleRepresentation3D_YShadowsOff, METH_VARARGS,
   (char*)"V.YShadowsOff()\nC++: void YShadowsOff()\n\nTurn on/off the wireframe y-shadows.\n"},
  {(char*)"SetZShadows", PyvtkPointHandleRepresentation3D_SetZShadows, METH_VARARGS,
   (char*)"V.SetZShadows(int)\nC++: void SetZShadows(int o)\n\nTurn on/off the wireframe z-shadows.\n"},
  {(char*)"GetZShadows", PyvtkPointHandleRepresentation3D_GetZShadows, METH_VARARGS,
   (char*)"V.GetZShadows() -> int\nC++: int GetZShadows()\n\nTurn on/off the wireframe z-shadows.\n"},
  {(char*)"ZShadowsOn", PyvtkPointHandleRepresentation3D_ZShadowsOn, METH_VARARGS,
   (char*)"V.ZShadowsOn()\nC++: void ZShadowsOn()\n\nTurn on/off the wireframe z-shadows.\n"},
  {(char*)"ZShadowsOff", PyvtkPointHandleRepresentation3D_ZShadowsOff, METH_VARARGS,
   (char*)"V.ZShadowsOff()\nC++: void ZShadowsOff()\n\nTurn on/off the wireframe z-shadows.\n"},
  {(char*)"SetTranslationMode", PyvtkPointHandleRepresentation3D_SetTranslationMode, METH_VARARGS,
   (char*)"V.SetTranslationMode(int)\nC++: void SetTranslationMode(int mode)\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated and sized\nsimultaneously as the point moves (i.e., the left and middle\nmouse buttons act the same). If translation mode is off, the\ncursor does not scale itself (based on the specified handle\nsize), and the bounding box and shadows do not move or size\nthemselves as the cursor focal point moves, which is constrained\nby the bounds of the point representation. (Note that the bounds\ncan be scaled up using the right mouse button, and the bounds can\nbe manually set with the SetBounds() method.)\n"},
  {(char*)"GetTranslationMode", PyvtkPointHandleRepresentation3D_GetTranslationMode, METH_VARARGS,
   (char*)"V.GetTranslationMode() -> int\nC++: int GetTranslationMode()\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated and sized\nsimultaneously as the point moves (i.e., the left and middle\nmouse buttons act the same). If translation mode is off, the\ncursor does not scale itself (based on the specified handle\nsize), and the bounding box and shadows do not move or size\nthemselves as the cursor focal point moves, which is constrained\nby the bounds of the point representation. (Note that the bounds\ncan be scaled up using the right mouse button, and the bounds can\nbe manually set with the SetBounds() method.)\n"},
  {(char*)"TranslationModeOn", PyvtkPointHandleRepresentation3D_TranslationModeOn, METH_VARARGS,
   (char*)"V.TranslationModeOn()\nC++: void TranslationModeOn()\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated and sized\nsimultaneously as the point moves (i.e., the left and middle\nmouse buttons act the same). If translation mode is off, the\ncursor does not scale itself (based on the specified handle\nsize), and the bounding box and shadows do not move or size\nthemselves as the cursor focal point moves, which is constrained\nby the bounds of the point representation. (Note that the bounds\ncan be scaled up using the right mouse button, and the bounds can\nbe manually set with the SetBounds() method.)\n"},
  {(char*)"TranslationModeOff", PyvtkPointHandleRepresentation3D_TranslationModeOff, METH_VARARGS,
   (char*)"V.TranslationModeOff()\nC++: void TranslationModeOff()\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated and sized\nsimultaneously as the point moves (i.e., the left and middle\nmouse buttons act the same). If translation mode is off, the\ncursor does not scale itself (based on the specified handle\nsize), and the bounding box and shadows do not move or size\nthemselves as the cursor focal point moves, which is constrained\nby the bounds of the point representation. (Note that the bounds\ncan be scaled up using the right mouse button, and the bounds can\nbe manually set with the SetBounds() method.)\n"},
  {(char*)"AllOn", PyvtkPointHandleRepresentation3D_AllOn, METH_VARARGS,
   (char*)"V.AllOn()\nC++: void AllOn()\n\nConvenience methods to turn outline and shadows on and off.\n"},
  {(char*)"AllOff", PyvtkPointHandleRepresentation3D_AllOff, METH_VARARGS,
   (char*)"V.AllOff()\nC++: void AllOff()\n\nConvenience methods to turn outline and shadows on and off.\n"},
  {(char*)"SetProperty", PyvtkPointHandleRepresentation3D_SetProperty, METH_VARARGS,
   (char*)"V.SetProperty(vtkProperty)\nC++: void SetProperty(vtkProperty *)\n\nSet/Get the handle properties when unselected and selected.\n"},
  {(char*)"SetSelectedProperty", PyvtkPointHandleRepresentation3D_SetSelectedProperty, METH_VARARGS,
   (char*)"V.SetSelectedProperty(vtkProperty)\nC++: void SetSelectedProperty(vtkProperty *)\n\nSet/Get the handle properties when unselected and selected.\n"},
  {(char*)"GetProperty", PyvtkPointHandleRepresentation3D_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkProperty\nC++: vtkProperty *GetProperty()\n\nSet/Get the handle properties when unselected and selected.\n"},
  {(char*)"GetSelectedProperty", PyvtkPointHandleRepresentation3D_GetSelectedProperty, METH_VARARGS,
   (char*)"V.GetSelectedProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedProperty()\n\nSet/Get the handle properties when unselected and selected.\n"},
  {(char*)"SetHotSpotSize", PyvtkPointHandleRepresentation3D_SetHotSpotSize, METH_VARARGS,
   (char*)"V.SetHotSpotSize(float)\nC++: void SetHotSpotSize(double)\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {(char*)"GetHotSpotSizeMinValue", PyvtkPointHandleRepresentation3D_GetHotSpotSizeMinValue, METH_VARARGS,
   (char*)"V.GetHotSpotSizeMinValue() -> float\nC++: double GetHotSpotSizeMinValue()\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {(char*)"GetHotSpotSizeMaxValue", PyvtkPointHandleRepresentation3D_GetHotSpotSizeMaxValue, METH_VARARGS,
   (char*)"V.GetHotSpotSizeMaxValue() -> float\nC++: double GetHotSpotSizeMaxValue()\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {(char*)"GetHotSpotSize", PyvtkPointHandleRepresentation3D_GetHotSpotSize, METH_VARARGS,
   (char*)"V.GetHotSpotSize() -> float\nC++: double GetHotSpotSize()\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {(char*)"SetHandleSize", PyvtkPointHandleRepresentation3D_SetHandleSize, METH_VARARGS,
   (char*)"V.SetHandleSize(float)\nC++: virtual void SetHandleSize(double size)\n\nOverload the superclasses SetHandleSize() method to update\ninternal variables.\n"},
  {(char*)"GetBounds", PyvtkPointHandleRepresentation3D_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {(char*)"BuildRepresentation", PyvtkPointHandleRepresentation3D_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {(char*)"StartWidgetInteraction", PyvtkPointHandleRepresentation3D_StartWidgetInteraction, METH_VARARGS,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double eventPos[2])\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {(char*)"WidgetInteraction", PyvtkPointHandleRepresentation3D_WidgetInteraction, METH_VARARGS,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double eventPos[2])\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {(char*)"ComputeInteractionState", PyvtkPointHandleRepresentation3D_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {(char*)"PlaceWidget", PyvtkPointHandleRepresentation3D_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {(char*)"ShallowCopy", PyvtkPointHandleRepresentation3D_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"DeepCopy", PyvtkPointHandleRepresentation3D_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkProp)\nC++: virtual void DeepCopy(vtkProp *prop)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"GetActors", PyvtkPointHandleRepresentation3D_GetActors, METH_VARARGS,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkPointHandleRepresentation3D_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkPointHandleRepresentation3D_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkPointHandleRepresentation3D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkPointHandleRepresentation3D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"Highlight", PyvtkPointHandleRepresentation3D_Highlight, METH_VARARGS,
   (char*)"V.Highlight(int)\nC++: void Highlight(int highlight)\n\n"},
  {(char*)"SetSmoothMotion", PyvtkPointHandleRepresentation3D_SetSmoothMotion, METH_VARARGS,
   (char*)"V.SetSmoothMotion(int)\nC++: void SetSmoothMotion(int a)\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells, or\nusing a vtkPolygonalSurfacePointPlacer which constrains the\nwidget to the surface of a mesh. In such cases, inherent\nrestrictions on handle placement might conflict with a request\nfor smooth motion of the handles.\n"},
  {(char*)"GetSmoothMotion", PyvtkPointHandleRepresentation3D_GetSmoothMotion, METH_VARARGS,
   (char*)"V.GetSmoothMotion() -> int\nC++: int GetSmoothMotion()\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells, or\nusing a vtkPolygonalSurfacePointPlacer which constrains the\nwidget to the surface of a mesh. In such cases, inherent\nrestrictions on handle placement might conflict with a request\nfor smooth motion of the handles.\n"},
  {(char*)"SmoothMotionOn", PyvtkPointHandleRepresentation3D_SmoothMotionOn, METH_VARARGS,
   (char*)"V.SmoothMotionOn()\nC++: void SmoothMotionOn()\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells, or\nusing a vtkPolygonalSurfacePointPlacer which constrains the\nwidget to the surface of a mesh. In such cases, inherent\nrestrictions on handle placement might conflict with a request\nfor smooth motion of the handles.\n"},
  {(char*)"SmoothMotionOff", PyvtkPointHandleRepresentation3D_SmoothMotionOff, METH_VARARGS,
   (char*)"V.SmoothMotionOff()\nC++: void SmoothMotionOff()\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells, or\nusing a vtkPolygonalSurfacePointPlacer which constrains the\nwidget to the surface of a mesh. In such cases, inherent\nrestrictions on handle placement might conflict with a request\nfor smooth motion of the handles.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointHandleRepresentation3D_StaticNew()
{
  return vtkPointHandleRepresentation3D::New();
}

PyObject *PyVTKClass_vtkPointHandleRepresentation3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointHandleRepresentation3D_StaticNew,
    PyvtkPointHandleRepresentation3D_Methods,
    "vtkPointHandleRepresentation3D", modulename,
    NULL, NULL,
    PyvtkPointHandleRepresentation3D_Doc(),
    PyVTKClass_vtkHandleRepresentationNew(modulename));
  return cls;
}

const char **PyvtkPointHandleRepresentation3D_Doc()
{
  static const char *docstring[] = {
    "vtkPointHandleRepresentation3D - represent the position of a point in\n3D space\n\n",
    "Superclass: vtkHandleRepresentation\n\n",
    "This class is used to represent a vtkHandleWidget. It represents a\nposition in 3D world coordinates using a x-y-z cursor. The cursor can\nbe configured to show a bounding box and/or shadows.\n\nSee Also:\n\nvtkHandleRepresentation vtkHandleWidget vtkCursor3D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointHandleRepresentation3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointHandleRepresentation3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointHandleRepresentation3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

