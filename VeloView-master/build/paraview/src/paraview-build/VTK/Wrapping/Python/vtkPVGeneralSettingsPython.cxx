// python wrapper for vtkPVGeneralSettings
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVGeneralSettings.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVGeneralSettings(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVGeneralSettingsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVGeneralSettings_Doc();


static PyObject *
PyvtkPVGeneralSettings_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVGeneralSettings::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVGeneralSettings::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVGeneralSettings *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVGeneralSettings::NewInstance());

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
PyvtkPVGeneralSettings_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVGeneralSettings *tempr = vtkPVGeneralSettings::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkPVGeneralSettings *tempr = vtkPVGeneralSettings::GetInstance();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetAutoConvertProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoConvertProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoConvertProperties(temp0);
      }
    else
      {
      op->vtkPVGeneralSettings::SetAutoConvertProperties(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetAutoConvertProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoConvertProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAutoConvertProperties() :
      op->vtkPVGeneralSettings::GetAutoConvertProperties());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetAutoApply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoApply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAutoApply() :
      op->vtkPVGeneralSettings::GetAutoApply());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetAutoApply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoApply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoApply(temp0);
      }
    else
      {
      op->vtkPVGeneralSettings::SetAutoApply(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetAutoApplyActiveOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoApplyActiveOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAutoApplyActiveOnly() :
      op->vtkPVGeneralSettings::GetAutoApplyActiveOnly());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetAutoApplyActiveOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoApplyActiveOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoApplyActiveOnly(temp0);
      }
    else
      {
      op->vtkPVGeneralSettings::SetAutoApplyActiveOnly(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetEnableAutoMPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableAutoMPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableAutoMPI(temp0);
      }
    else
      {
      op->vtkPVGeneralSettings::SetEnableAutoMPI(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetEnableAutoMPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableAutoMPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEnableAutoMPI() :
      op->vtkPVGeneralSettings::GetEnableAutoMPI());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetAutoMPILimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoMPILimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoMPILimit(temp0);
      }
    else
      {
      op->vtkPVGeneralSettings::SetAutoMPILimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetAutoMPILimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoMPILimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoMPILimit() :
      op->vtkPVGeneralSettings::GetAutoMPILimit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetDefaultViewType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultViewType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetDefaultViewType() :
      op->vtkPVGeneralSettings::GetDefaultViewType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetDefaultViewType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultViewType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultViewType(temp0);
      }
    else
      {
      op->vtkPVGeneralSettings::SetDefaultViewType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetTransferFunctionResetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunctionResetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTransferFunctionResetMode() :
      op->vtkPVGeneralSettings::GetTransferFunctionResetMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetTransferFunctionResetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunctionResetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTransferFunctionResetMode(temp0);
      }
    else
      {
      op->vtkPVGeneralSettings::SetTransferFunctionResetMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetScalarBarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarBarMode() :
      op->vtkPVGeneralSettings::GetScalarBarMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetScalarBarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarBarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarBarMode(temp0);
      }
    else
      {
      op->vtkPVGeneralSettings::SetScalarBarMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetCacheGeometryForAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheGeometryForAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheGeometryForAnimation(temp0);
      }
    else
      {
      op->vtkPVGeneralSettings::SetCacheGeometryForAnimation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetCacheGeometryForAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheGeometryForAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCacheGeometryForAnimation() :
      op->vtkPVGeneralSettings::GetCacheGeometryForAnimation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetAnimationGeometryCacheLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationGeometryCacheLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAnimationGeometryCacheLimit(temp0);
      }
    else
      {
      op->vtkPVGeneralSettings::SetAnimationGeometryCacheLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetAnimationGeometryCacheLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationGeometryCacheLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetAnimationGeometryCacheLimit() :
      op->vtkPVGeneralSettings::GetAnimationGeometryCacheLimit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetInheritRepresentationProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInheritRepresentationProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInheritRepresentationProperties(temp0);
      }
    else
      {
      op->vtkPVGeneralSettings::SetInheritRepresentationProperties(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetPropertiesPanelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertiesPanelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPropertiesPanelMode(temp0);
      }
    else
      {
      op->vtkPVGeneralSettings::SetPropertiesPanelMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetPropertiesPanelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertiesPanelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPropertiesPanelMode() :
      op->vtkPVGeneralSettings::GetPropertiesPanelMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetMultiViewImageBorderColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultiViewImageBorderColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  double temp0;
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
      op->SetMultiViewImageBorderColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVGeneralSettings::SetMultiViewImageBorderColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetMultiViewImageBorderWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultiViewImageBorderWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMultiViewImageBorderWidth(temp0);
      }
    else
      {
      op->vtkPVGeneralSettings::SetMultiViewImageBorderWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetTransparentBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransparentBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTransparentBackground(temp0);
      }
    else
      {
      op->vtkPVGeneralSettings::SetTransparentBackground(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVGeneralSettings_Methods[] = {
  {(char*)"GetClassName", PyvtkPVGeneralSettings_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVGeneralSettings_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVGeneralSettings_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVGeneralSettings\nC++: vtkPVGeneralSettings *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVGeneralSettings_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVGeneralSettings\nC++: vtkPVGeneralSettings *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInstance", PyvtkPVGeneralSettings_GetInstance, METH_VARARGS | METH_STATIC,
   (char*)"V.GetInstance() -> vtkPVGeneralSettings\nC++: static vtkPVGeneralSettings *GetInstance()\n\nAccess the singleton.\n"},
  {(char*)"SetAutoConvertProperties", PyvtkPVGeneralSettings_SetAutoConvertProperties, METH_VARARGS,
   (char*)"V.SetAutoConvertProperties(bool)\nC++: void SetAutoConvertProperties(bool val)\n\nAutomatically convert data arrays as needed by filters including\nconverting cell arrays to point arrays, or vice versa, and\nextracting single components from multi-component arrays.\nForwards the call to\nvtkSMInputArrayDomain::SetAutomaticPropertyConversion.\n"},
  {(char*)"GetAutoConvertProperties", PyvtkPVGeneralSettings_GetAutoConvertProperties, METH_VARARGS,
   (char*)"V.GetAutoConvertProperties() -> bool\nC++: bool GetAutoConvertProperties()\n\nAutomatically convert data arrays as needed by filters including\nconverting cell arrays to point arrays, or vice versa, and\nextracting single components from multi-component arrays.\nForwards the call to\nvtkSMInputArrayDomain::SetAutomaticPropertyConversion.\n"},
  {(char*)"GetAutoApply", PyvtkPVGeneralSettings_GetAutoApply, METH_VARARGS,
   (char*)"V.GetAutoApply() -> bool\nC++: bool GetAutoApply()\n\nAutomatically apply changes in the 'Properties' panel.\n"},
  {(char*)"SetAutoApply", PyvtkPVGeneralSettings_SetAutoApply, METH_VARARGS,
   (char*)"V.SetAutoApply(bool)\nC++: void SetAutoApply(bool a)\n\nAutomatically apply changes in the 'Properties' panel.\n"},
  {(char*)"GetAutoApplyActiveOnly", PyvtkPVGeneralSettings_GetAutoApplyActiveOnly, METH_VARARGS,
   (char*)"V.GetAutoApplyActiveOnly() -> bool\nC++: bool GetAutoApplyActiveOnly()\n\nAutomatically apply changes in the 'Properties' panel.\n"},
  {(char*)"SetAutoApplyActiveOnly", PyvtkPVGeneralSettings_SetAutoApplyActiveOnly, METH_VARARGS,
   (char*)"V.SetAutoApplyActiveOnly(bool)\nC++: void SetAutoApplyActiveOnly(bool a)\n\nAutomatically apply changes in the 'Properties' panel.\n"},
  {(char*)"SetEnableAutoMPI", PyvtkPVGeneralSettings_SetEnableAutoMPI, METH_VARARGS,
   (char*)"V.SetEnableAutoMPI(bool)\nC++: void SetEnableAutoMPI(bool)\n\nEnable auto-mpi. Forwarded to vtkProcessModuleAutoMPI.\n"},
  {(char*)"GetEnableAutoMPI", PyvtkPVGeneralSettings_GetEnableAutoMPI, METH_VARARGS,
   (char*)"V.GetEnableAutoMPI() -> bool\nC++: bool GetEnableAutoMPI()\n\nEnable auto-mpi. Forwarded to vtkProcessModuleAutoMPI.\n"},
  {(char*)"SetAutoMPILimit", PyvtkPVGeneralSettings_SetAutoMPILimit, METH_VARARGS,
   (char*)"V.SetAutoMPILimit(int)\nC++: void SetAutoMPILimit(int val)\n\nSet the core limit for auto-mpi.\n"},
  {(char*)"GetAutoMPILimit", PyvtkPVGeneralSettings_GetAutoMPILimit, METH_VARARGS,
   (char*)"V.GetAutoMPILimit() -> int\nC++: int GetAutoMPILimit()\n\nSet the core limit for auto-mpi.\n"},
  {(char*)"GetDefaultViewType", PyvtkPVGeneralSettings_GetDefaultViewType, METH_VARARGS,
   (char*)"V.GetDefaultViewType() -> string\nC++: char *GetDefaultViewType()\n\nGet/Set the default view type.\n"},
  {(char*)"SetDefaultViewType", PyvtkPVGeneralSettings_SetDefaultViewType, METH_VARARGS,
   (char*)"V.SetDefaultViewType(string)\nC++: void SetDefaultViewType(char *)\n\nGet/Set the default view type.\n"},
  {(char*)"GetTransferFunctionResetMode", PyvtkPVGeneralSettings_GetTransferFunctionResetMode, METH_VARARGS,
   (char*)"V.GetTransferFunctionResetMode() -> int\nC++: int GetTransferFunctionResetMode()\n\nGet/Set the transfer function reset mode.\n"},
  {(char*)"SetTransferFunctionResetMode", PyvtkPVGeneralSettings_SetTransferFunctionResetMode, METH_VARARGS,
   (char*)"V.SetTransferFunctionResetMode(int)\nC++: void SetTransferFunctionResetMode(int a)\n\nGet/Set the transfer function reset mode.\n"},
  {(char*)"GetScalarBarMode", PyvtkPVGeneralSettings_GetScalarBarMode, METH_VARARGS,
   (char*)"V.GetScalarBarMode() -> int\nC++: int GetScalarBarMode()\n\nEnum for ScalarBarMode.\n"},
  {(char*)"SetScalarBarMode", PyvtkPVGeneralSettings_SetScalarBarMode, METH_VARARGS,
   (char*)"V.SetScalarBarMode(int)\nC++: void SetScalarBarMode(int)\n\nEnum for ScalarBarMode.\n"},
  {(char*)"SetCacheGeometryForAnimation", PyvtkPVGeneralSettings_SetCacheGeometryForAnimation, METH_VARARGS,
   (char*)"V.SetCacheGeometryForAnimation(bool)\nC++: void SetCacheGeometryForAnimation(bool val)\n\nSet when animation geometry caching is enabled.\n"},
  {(char*)"GetCacheGeometryForAnimation", PyvtkPVGeneralSettings_GetCacheGeometryForAnimation, METH_VARARGS,
   (char*)"V.GetCacheGeometryForAnimation() -> bool\nC++: bool GetCacheGeometryForAnimation()\n\nSet when animation geometry caching is enabled.\n"},
  {(char*)"SetAnimationGeometryCacheLimit", PyvtkPVGeneralSettings_SetAnimationGeometryCacheLimit, METH_VARARGS,
   (char*)"V.SetAnimationGeometryCacheLimit(int)\nC++: void SetAnimationGeometryCacheLimit(unsigned long val)\n\nSet the animation cache limit in KBs.\n"},
  {(char*)"GetAnimationGeometryCacheLimit", PyvtkPVGeneralSettings_GetAnimationGeometryCacheLimit, METH_VARARGS,
   (char*)"V.GetAnimationGeometryCacheLimit() -> int\nC++: unsigned long GetAnimationGeometryCacheLimit()\n\nSet the animation cache limit in KBs.\n"},
  {(char*)"SetInheritRepresentationProperties", PyvtkPVGeneralSettings_SetInheritRepresentationProperties, METH_VARARGS,
   (char*)"V.SetInheritRepresentationProperties(bool)\nC++: void SetInheritRepresentationProperties(bool val)\n\nForwarded for vtkSMParaViewPipelineControllerWithRendering.\n"},
  {(char*)"SetPropertiesPanelMode", PyvtkPVGeneralSettings_SetPropertiesPanelMode, METH_VARARGS,
   (char*)"V.SetPropertiesPanelMode(int)\nC++: void SetPropertiesPanelMode(int a)\n\nProperties panel configuration.\n"},
  {(char*)"GetPropertiesPanelMode", PyvtkPVGeneralSettings_GetPropertiesPanelMode, METH_VARARGS,
   (char*)"V.GetPropertiesPanelMode() -> int\nC++: int GetPropertiesPanelMode()\n\nProperties panel configuration.\n"},
  {(char*)"SetMultiViewImageBorderColor", PyvtkPVGeneralSettings_SetMultiViewImageBorderColor, METH_VARARGS,
   (char*)"V.SetMultiViewImageBorderColor(float, float, float)\nC++: void SetMultiViewImageBorderColor(double r, double g,\n    double b)\n\nForwarded to vtkSMViewLayoutProxy.\n"},
  {(char*)"SetMultiViewImageBorderWidth", PyvtkPVGeneralSettings_SetMultiViewImageBorderWidth, METH_VARARGS,
   (char*)"V.SetMultiViewImageBorderWidth(int)\nC++: void SetMultiViewImageBorderWidth(int width)\n\nForwarded to vtkSMViewLayoutProxy.\n"},
  {(char*)"SetTransparentBackground", PyvtkPVGeneralSettings_SetTransparentBackground, METH_VARARGS,
   (char*)"V.SetTransparentBackground(bool)\nC++: void SetTransparentBackground(bool val)\n\nForwarded to vtkSMViewProxy.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVGeneralSettings_StaticNew()
{
  return vtkPVGeneralSettings::New();
}

PyObject *PyVTKClass_vtkPVGeneralSettingsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVGeneralSettings_StaticNew,
    PyvtkPVGeneralSettings_Methods,
    "vtkPVGeneralSettings", modulename,
    NULL, NULL,
    PyvtkPVGeneralSettings_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 14; c++)
      {
      static const struct { const char *name; int value; }
        constants[14] = {
          { "DEFAULT_TIME_STEP_UNCHANGED", vtkPVGeneralSettings::DEFAULT_TIME_STEP_UNCHANGED },
          { "DEFAULT_TIME_STEP_FIRST", vtkPVGeneralSettings::DEFAULT_TIME_STEP_FIRST },
          { "DEFAULT_TIME_STEP_LAST", vtkPVGeneralSettings::DEFAULT_TIME_STEP_LAST },
          { "GROW_ON_APPLY", vtkPVGeneralSettings::GROW_ON_APPLY },
          { "GROW_ON_APPLY_AND_TIMESTEP", vtkPVGeneralSettings::GROW_ON_APPLY_AND_TIMESTEP },
          { "RESET_ON_APPLY", vtkPVGeneralSettings::RESET_ON_APPLY },
          { "RESET_ON_APPLY_AND_TIMESTEP", vtkPVGeneralSettings::RESET_ON_APPLY_AND_TIMESTEP },
          { "AUTOMATICALLY_SHOW_AND_HIDE_SCALAR_BARS", vtkPVGeneralSettings::AUTOMATICALLY_SHOW_AND_HIDE_SCALAR_BARS },
          { "AUTOMATICALLY_HIDE_SCALAR_BARS", vtkPVGeneralSettings::AUTOMATICALLY_HIDE_SCALAR_BARS },
          { "MANUAL_SCALAR_BARS", vtkPVGeneralSettings::MANUAL_SCALAR_BARS },
          { "ALL_IN_ONE", vtkPVGeneralSettings::ALL_IN_ONE },
          { "SEPARATE_DISPLAY_PROPERTIES", vtkPVGeneralSettings::SEPARATE_DISPLAY_PROPERTIES },
          { "SEPARATE_VIEW_PROPERTIES", vtkPVGeneralSettings::SEPARATE_VIEW_PROPERTIES },
          { "ALL_SEPARATE", vtkPVGeneralSettings::ALL_SEPARATE },
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

const char **PyvtkPVGeneralSettings_Doc()
{
  static const char *docstring[] = {
    "vtkPVGeneralSettings - object for general options.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVGeneralSettings keeps track of general options in a ParaView\napplication. This is a singleton. All calls to\nvtkPVGeneralSettings::New() return a pointer to the same global\ninstance (with reference count incremented as expected).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVGeneralSettings(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVGeneralSettingsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVGeneralSettings", o) != 0)
    {
    Py_DECREF(o);
    }

}

