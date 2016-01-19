// python wrapper for vtkSMSettings
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkSMSettings.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMSettings(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMSettingsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSMSettings_Doc();


static PyObject *
PyvtkSMSettings_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMSettings::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSettings_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSettings::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSettings_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSettings *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSettings::NewInstance());

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
PyvtkSMSettings_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMSettings *tempr = vtkSMSettings::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSettings_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkSMSettings *tempr = vtkSMSettings::GetInstance();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSettings_AddCollectionFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCollectionFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  std::string temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->AddCollectionFromString(temp0, temp1) :
      op->vtkSMSettings::AddCollectionFromString(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSettings_AddCollectionFromFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCollectionFromFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  std::string temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->AddCollectionFromFile(temp0, temp1) :
      op->vtkSMSettings::AddCollectionFromFile(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSettings_ClearAllSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearAllSettings();
      }
    else
      {
      op->vtkSMSettings::ClearAllSettings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSettings_DistributeSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistributeSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->DistributeSettings() :
      op->vtkSMSettings::DistributeSettings());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSettings_SaveSettingsToFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveSettingsToFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  std::string temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->SaveSettingsToFile(temp0) :
      op->vtkSMSettings::SaveSettingsToFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSettings_HasSetting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasSetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasSetting(temp0) :
      op->vtkSMSettings::HasSetting(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSettings_GetSettingNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettingNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSettingNumberOfElements(temp0) :
      op->vtkSMSettings::GetSettingNumberOfElements(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSettings_GetSettingAsInt_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettingAsInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetSettingAsInt(temp0, temp1) :
      op->vtkSMSettings::GetSettingAsInt(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSettings_GetSettingAsInt_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettingAsInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  unsigned int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->GetSettingAsInt(temp0, temp1, temp2) :
      op->vtkSMSettings::GetSettingAsInt(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSettings_GetSettingAsInt(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMSettings_GetSettingAsInt_s1(self, args);
    case 3:
      return PyvtkSMSettings_GetSettingAsInt_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSettingAsInt");
  return NULL;
}



static PyObject *
PyvtkSMSettings_GetSettingAsDouble_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettingAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = (ap.IsBound() ?
      op->GetSettingAsDouble(temp0, temp1) :
      op->vtkSMSettings::GetSettingAsDouble(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSettings_GetSettingAsDouble_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettingAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  unsigned int temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double tempr = (ap.IsBound() ?
      op->GetSettingAsDouble(temp0, temp1, temp2) :
      op->vtkSMSettings::GetSettingAsDouble(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSettings_GetSettingAsDouble(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMSettings_GetSettingAsDouble_s1(self, args);
    case 3:
      return PyvtkSMSettings_GetSettingAsDouble_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSettingAsDouble");
  return NULL;
}



static PyObject *
PyvtkSMSettings_GetSettingAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettingAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  std::string temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    std::string tempr = (ap.IsBound() ?
      op->GetSettingAsString(temp0, temp1) :
      op->vtkSMSettings::GetSettingAsString(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSettings_GetSettingAsString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettingAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  unsigned int temp1;
  std::string temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    std::string tempr = (ap.IsBound() ?
      op->GetSettingAsString(temp0, temp1, temp2) :
      op->vtkSMSettings::GetSettingAsString(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSettings_GetSettingAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMSettings_GetSettingAsString_s1(self, args);
    case 3:
      return PyvtkSMSettings_GetSettingAsString_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSettingAsString");
  return NULL;
}



static PyObject *
PyvtkSMSettings_GetProxySettings_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxySettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->GetProxySettings(temp0) :
      op->vtkSMSettings::GetProxySettings(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSettings_GetProxySettings_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxySettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->GetProxySettings(temp0, temp1) :
      op->vtkSMSettings::GetProxySettings(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSettings_GetProxySettings(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMSettings_GetProxySettings_s1(self, args);
    case 2:
      return PyvtkSMSettings_GetProxySettings_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetProxySettings");
  return NULL;
}



static PyObject *
PyvtkSMSettings_GetSettingDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettingDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    std::string tempr = (ap.IsBound() ?
      op->GetSettingDescription(temp0) :
      op->vtkSMSettings::GetSettingDescription(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSettings_SetSetting_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSetting(temp0, temp1);
      }
    else
      {
      op->vtkSMSettings::SetSetting(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSettings_SetSetting_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSetting(temp0, temp1);
      }
    else
      {
      op->vtkSMSettings::SetSetting(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSettings_SetSetting_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  std::string temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSetting(temp0, temp1);
      }
    else
      {
      op->vtkSMSettings::SetSetting(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSettings_SetSetting_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  unsigned int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetSetting(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMSettings::SetSetting(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSettings_SetSetting_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  unsigned int temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetSetting(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMSettings::SetSetting(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSettings_SetSetting_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  unsigned int temp1;
  std::string temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetSetting(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMSettings::SetSetting(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSettings_SetSetting_Methods[] = {
  {NULL, PyvtkSMSettings_SetSetting_s1, METH_VARARGS,
   (char*)"@zi"},
  {NULL, PyvtkSMSettings_SetSetting_s2, METH_VARARGS,
   (char*)"@zd"},
  {NULL, PyvtkSMSettings_SetSetting_s3, METH_VARARGS,
   (char*)"@zs"},
  {NULL, PyvtkSMSettings_SetSetting_s4, METH_VARARGS,
   (char*)"@zIi"},
  {NULL, PyvtkSMSettings_SetSetting_s5, METH_VARARGS,
   (char*)"@zId"},
  {NULL, PyvtkSMSettings_SetSetting_s6, METH_VARARGS,
   (char*)"@zIs"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMSettings_SetSetting(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSettings_SetSetting_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSetting");
  return NULL;
}



static PyObject *
PyvtkSMSettings_SetProxySettings_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxySettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->SetProxySettings(temp0);
      }
    else
      {
      op->vtkSMSettings::SetProxySettings(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSettings_SetProxySettings_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxySettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->SetProxySettings(temp0, temp1);
      }
    else
      {
      op->vtkSMSettings::SetProxySettings(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSettings_SetProxySettings(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMSettings_SetProxySettings_s1(self, args);
    case 2:
      return PyvtkSMSettings_SetProxySettings_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetProxySettings");
  return NULL;
}



static PyObject *
PyvtkSMSettings_SetSettingDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSettingDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSettingDescription(temp0, temp1);
      }
    else
      {
      op->vtkSMSettings::SetSettingDescription(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSettings_Methods[] = {
  {(char*)"GetClassName", PyvtkSMSettings_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMSettings_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMSettings_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMSettings\nC++: vtkSMSettings *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMSettings_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMSettings\nC++: vtkSMSettings *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInstance", PyvtkSMSettings_GetInstance, METH_VARARGS | METH_STATIC,
   (char*)"V.GetInstance() -> vtkSMSettings\nC++: static vtkSMSettings *GetInstance()\n\nGet singleton instance.\n"},
  {(char*)"AddCollectionFromString", PyvtkSMSettings_AddCollectionFromString, METH_VARARGS,
   (char*)"V.AddCollectionFromString(string, float) -> bool\nC++: bool AddCollectionFromString(const std::string &settings,\n    double priority)\n\nAdd settings from a string. The string should contain valid\nJSON-formatted text. The \"priority\" indicates how to treat a\nsetting that has definitions in more than one setting\ncollections. If two setting collections contain values for the\nsame setting, then the setting from the collection with higher\npriority will be used.\n"},
  {(char*)"AddCollectionFromFile", PyvtkSMSettings_AddCollectionFromFile, METH_VARARGS,
   (char*)"V.AddCollectionFromFile(string, float) -> bool\nC++: bool AddCollectionFromFile(const std::string &fileName,\n    double priority)\n\nThe same as AddCollectionFromString, but this method reads the\nsettings string from the named file. The fileName should be a\nfull path.\n"},
  {(char*)"ClearAllSettings", PyvtkSMSettings_ClearAllSettings, METH_VARARGS,
   (char*)"V.ClearAllSettings()\nC++: void ClearAllSettings()\n\nClear out all settings, deleting all collections.\n"},
  {(char*)"DistributeSettings", PyvtkSMSettings_DistributeSettings, METH_VARARGS,
   (char*)"V.DistributeSettings() -> bool\nC++: bool DistributeSettings()\n\nDistribute setting collections to all processes if in batch\nsymmetric mode.\n"},
  {(char*)"SaveSettingsToFile", PyvtkSMSettings_SaveSettingsToFile, METH_VARARGS,
   (char*)"V.SaveSettingsToFile(string) -> bool\nC++: bool SaveSettingsToFile(const std::string &filePath)\n\nSave highest priority setting collection to file.\n"},
  {(char*)"HasSetting", PyvtkSMSettings_HasSetting, METH_VARARGS,
   (char*)"V.HasSetting(string) -> bool\nC++: bool HasSetting(const char *settingName)\n\nCheck whether a setting is defined for the requested names.\n"},
  {(char*)"GetSettingNumberOfElements", PyvtkSMSettings_GetSettingNumberOfElements, METH_VARARGS,
   (char*)"V.GetSettingNumberOfElements(string) -> int\nC++: unsigned int GetSettingNumberOfElements(\n    const char *settingName)\n\nGet the number of elements in a setting.\n"},
  {(char*)"GetSettingAsInt", PyvtkSMSettings_GetSettingAsInt, METH_VARARGS,
   (char*)"V.GetSettingAsInt(string, int) -> int\nC++: int GetSettingAsInt(const char *settingName,\n    int defaultValue)\nV.GetSettingAsInt(string, int, int) -> int\nC++: int GetSettingAsInt(const char *settingName,\n    unsigned int index, int defaultValue)\n\nGet a vector setting as a scalar value. Shortcut for\nGetSettingAs...(settingName, 0, defaultValue)\n"},
  {(char*)"GetSettingAsDouble", PyvtkSMSettings_GetSettingAsDouble, METH_VARARGS,
   (char*)"V.GetSettingAsDouble(string, float) -> float\nC++: double GetSettingAsDouble(const char *settingName,\n    double defaultValue)\nV.GetSettingAsDouble(string, int, float) -> float\nC++: double GetSettingAsDouble(const char *settingName,\n    unsigned int index, double defaultValue)\n\nGet a vector setting as a scalar value. Shortcut for\nGetSettingAs...(settingName, 0, defaultValue)\n"},
  {(char*)"GetSettingAsString", PyvtkSMSettings_GetSettingAsString, METH_VARARGS,
   (char*)"V.GetSettingAsString(string, string) -> string\nC++: std::string GetSettingAsString(const char *settingName,\n    const std::string &defaultValue)\nV.GetSettingAsString(string, int, string) -> string\nC++: std::string GetSettingAsString(const char *settingName,\n    unsigned int index, const std::string &defaultValue)\n\nGet a vector setting as a scalar value. Shortcut for\nGetSettingAs...(settingName, 0, defaultValue)\n"},
  {(char*)"GetProxySettings", PyvtkSMSettings_GetProxySettings, METH_VARARGS,
   (char*)"V.GetProxySettings(vtkSMProxy) -> bool\nC++: bool GetProxySettings(vtkSMProxy *proxy)\nV.GetProxySettings(string, vtkSMProxy) -> bool\nC++: bool GetProxySettings(const char *prefix, vtkSMProxy *proxy)\n\nSet the property values in a vtkSMProxy from the setting\ncollections.\n"},
  {(char*)"GetSettingDescription", PyvtkSMSettings_GetSettingDescription, METH_VARARGS,
   (char*)"V.GetSettingDescription(string) -> string\nC++: std::string GetSettingDescription(const char *settingName)\n\nGet description for a setting.\n"},
  {(char*)"SetSetting", PyvtkSMSettings_SetSetting, METH_VARARGS,
   (char*)"V.SetSetting(string, int)\nC++: void SetSetting(const char *settingName, int value)\nV.SetSetting(string, float)\nC++: void SetSetting(const char *settingName, double value)\nV.SetSetting(string, string)\nC++: void SetSetting(const char *settingName,\n    const std::string &value)\nV.SetSetting(string, int, int)\nC++: void SetSetting(const char *settingName, unsigned int index,\n    int value)\nV.SetSetting(string, int, float)\nC++: void SetSetting(const char *settingName, unsigned int index,\n    double value)\nV.SetSetting(string, int, string)\nC++: void SetSetting(const char *settingName, unsigned int index,\n    const std::string &value)\n\nSet setting of a given name in the highest priority collection.\nShortcut for SetSetting(settingName, 0, value). Useful for\nsetting scalar values.\n"},
  {(char*)"SetProxySettings", PyvtkSMSettings_SetProxySettings, METH_VARARGS,
   (char*)"V.SetProxySettings(vtkSMProxy)\nC++: void SetProxySettings(vtkSMProxy *proxy)\nV.SetProxySettings(string, vtkSMProxy)\nC++: void SetProxySettings(const char *prefix, vtkSMProxy *proxy)\n\nSave non-default settings in the current user settings.\n"},
  {(char*)"SetSettingDescription", PyvtkSMSettings_SetSettingDescription, METH_VARARGS,
   (char*)"V.SetSettingDescription(string, string)\nC++: void SetSettingDescription(const char *settingName,\n    const char *description)\n\nSet the description of a setting.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMSettings_StaticNew()
{
  return vtkSMSettings::New();
}

PyObject *PyVTKClass_vtkSMSettingsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMSettings_StaticNew,
    PyvtkSMSettings_Methods,
    "vtkSMSettings", modulename,
    NULL, NULL,
    PyvtkSMSettings_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSMSettings_Doc()
{
  static const char *docstring[] = {
    "vtkSMSettings\n\n",
    "Superclass: vtkObject\n\n",
    "vtkSMSettings provides the underlying mechanism for setting default\nproperty values in ParaView.\n\nThis class is a singleton class. Instances should be retrieved with\nthe GetInstance() method.\n\nThis class provides the facilities for defining a linear hierarchy of\nsetting collections. A setting collection is a group of\nnot-necessarily-related settings defined in a string or text file.\nThe text defin",
    "ing a setting collection is formatted in JSON.\nCollections can be added using the methods AddSettingsFromString()\nand AddSettingsFromFile().\n\nEach setting collection has an associated priority. The priority is\nused to select the collection from which a setting should be\nretrieved when more than one collection has the same definition. A\nsetting in a collection with a higher priority than another\nco",
    "llection with the same setting has precedence and will be returned\nby the \"Get*\" methods in this class.\n\nSettings for proxies and proxy properties are defined by specifying\nthe XML names of the proxy group, proxies, and properties in a\nthree-level hierarchy. For example, the Sphere Source settings can be\ndefined by the following:\n\n\\pre{\\{\n  \"sources\" : \\{\n    \"SphereSource\" : \\{\n      \"Radius\" : 2",
    ".5,\n      \"Center\" : [0.0, 1.0, 0.0]    \\}\n  /}\\} }\n\nIn this example, \"sources\" is the proxy group, \"SphereSource\" is the\nname of a proxy, and \"Radius\" and \"Center\" are properties of the\nproxy.\n\nVector properties with a single element can be defined as a single\nelement (e.g., 2.5) or as a single-element array (e.g., [2.5]).\nMulti-element vector properties are specified as arrays (e.g., [0.0,\n1.0, ",
    "0.0]).\n\nThe \"Set*\" and \"Get*\" methods of this class take a character string\nspecifying the setting name. This string has the format\n\".level1.level2.level3[index]\". For example, to retrieve the\ny-component of the sphere center in the example JSON above, one would\nwrite \".sources.SphereSource.Center[1]\". Only literal values (int,\ndouble, and string) are available through this interface; access to\nno",
    "n-leaf nodes in the JSON format is not provided.\n\nThis class supports setting setting values. Settings modified through\nthe \"Set*\" methods modify thet setting collection that has priority\nover all other collections. This collection can be saved to a text\nfile in JSON format using the SaveSettingsToFile() method.\n\nSome convenience methods for getting and setting proxy property\nvalues are provided. ",
    "GetProxySettings() sets the values of proxy\nproperties that are defined in the setting collections.\nSetProxySettings() saves the non-default proxy properties in the\nhighest-priority collection.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMSettings(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMSettingsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMSettings", o) != 0)
    {
    Py_DECREF(o);
    }

}

