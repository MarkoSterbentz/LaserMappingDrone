// python wrapper for vtkLight
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLight.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLight(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLightNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkLight_Doc();


static PyObject *
PyvtkLight_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLight::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLight::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLight *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLight::NewInstance());

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
PyvtkLight_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLight *tempr = vtkLight::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_ShallowClone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowClone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLight *tempr = (ap.IsBound() ?
      op->ShallowClone() :
      op->vtkLight::ShallowClone());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  vtkRenderer *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkLight::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SetAmbientColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->SetAmbientColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLight::SetAmbientColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_SetAmbientColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAmbientColor(temp0);
      }
    else
      {
      op->vtkLight::SetAmbientColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_SetAmbientColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLight_SetAmbientColor_s1(self, args);
    case 1:
      return PyvtkLight_SetAmbientColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAmbientColor");
  return NULL;
}



static PyObject *
PyvtkLight_GetAmbientColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAmbientColor() :
      op->vtkLight::GetAmbientColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SetDiffuseColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->SetDiffuseColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLight::SetDiffuseColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_SetDiffuseColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDiffuseColor(temp0);
      }
    else
      {
      op->vtkLight::SetDiffuseColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_SetDiffuseColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLight_SetDiffuseColor_s1(self, args);
    case 1:
      return PyvtkLight_SetDiffuseColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDiffuseColor");
  return NULL;
}



static PyObject *
PyvtkLight_GetDiffuseColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDiffuseColor() :
      op->vtkLight::GetDiffuseColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SetSpecularColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->SetSpecularColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLight::SetSpecularColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_SetSpecularColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSpecularColor(temp0);
      }
    else
      {
      op->vtkLight::SetSpecularColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_SetSpecularColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLight_SetSpecularColor_s1(self, args);
    case 1:
      return PyvtkLight_SetSpecularColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSpecularColor");
  return NULL;
}



static PyObject *
PyvtkLight_GetSpecularColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSpecularColor() :
      op->vtkLight::GetSpecularColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->SetColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLight::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0);
      }
    else
      {
      op->vtkLight::SetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLight_SetColor_s1(self, args);
    case 1:
      return PyvtkLight_SetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkLight_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLight::SetPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkLight::SetPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLight_SetPosition_s1(self, args);
    case 1:
      return PyvtkLight_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkLight_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkLight::GetPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SetFocalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->SetFocalPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLight::SetFocalPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_SetFocalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetFocalPoint(temp0);
      }
    else
      {
      op->vtkLight::SetFocalPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_SetFocalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLight_SetFocalPoint_s1(self, args);
    case 1:
      return PyvtkLight_SetFocalPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetFocalPoint");
  return NULL;
}



static PyObject *
PyvtkLight_GetFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetFocalPoint() :
      op->vtkLight::GetFocalPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SetIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntensity(temp0);
      }
    else
      {
      op->vtkLight::SetIntensity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLight_GetIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetIntensity() :
      op->vtkLight::GetIntensity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SetSwitch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwitch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSwitch(temp0);
      }
    else
      {
      op->vtkLight::SetSwitch(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLight_GetSwitch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwitch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSwitch() :
      op->vtkLight::GetSwitch());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SwitchOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwitchOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwitchOn();
      }
    else
      {
      op->vtkLight::SwitchOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SwitchOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwitchOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwitchOff();
      }
    else
      {
      op->vtkLight::SwitchOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SetPositional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPositional(temp0);
      }
    else
      {
      op->vtkLight::SetPositional(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLight_GetPositional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPositional() :
      op->vtkLight::GetPositional());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_PositionalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PositionalOn();
      }
    else
      {
      op->vtkLight::PositionalOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLight_PositionalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PositionalOff();
      }
    else
      {
      op->vtkLight::PositionalOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SetExponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExponent(temp0);
      }
    else
      {
      op->vtkLight::SetExponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLight_GetExponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetExponentMinValue() :
      op->vtkLight::GetExponentMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_GetExponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetExponentMaxValue() :
      op->vtkLight::GetExponentMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_GetExponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetExponent() :
      op->vtkLight::GetExponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SetConeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConeAngle(temp0);
      }
    else
      {
      op->vtkLight::SetConeAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLight_GetConeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetConeAngle() :
      op->vtkLight::GetConeAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SetAttenuationValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttenuationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->SetAttenuationValues(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLight::SetAttenuationValues(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_SetAttenuationValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttenuationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAttenuationValues(temp0);
      }
    else
      {
      op->vtkLight::SetAttenuationValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_SetAttenuationValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLight_SetAttenuationValues_s1(self, args);
    case 1:
      return PyvtkLight_SetAttenuationValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAttenuationValues");
  return NULL;
}



static PyObject *
PyvtkLight_GetAttenuationValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttenuationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAttenuationValues() :
      op->vtkLight::GetAttenuationValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SetTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetTransformMatrix(temp0);
      }
    else
      {
      op->vtkLight::SetTransformMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLight_GetTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetTransformMatrix() :
      op->vtkLight::GetTransformMatrix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_GetTransformedPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->GetTransformedPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLight::GetTransformedPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_GetTransformedPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->GetTransformedPosition(temp0);
      }
    else
      {
      op->vtkLight::GetTransformedPosition(temp0);
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
PyvtkLight_GetTransformedPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTransformedPosition() :
      op->vtkLight::GetTransformedPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLight_GetTransformedPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLight_GetTransformedPosition_s1(self, args);
    case 1:
      return PyvtkLight_GetTransformedPosition_s2(self, args);
    case 0:
      return PyvtkLight_GetTransformedPosition_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTransformedPosition");
  return NULL;
}



static PyObject *
PyvtkLight_GetTransformedFocalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->GetTransformedFocalPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLight::GetTransformedFocalPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_GetTransformedFocalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->GetTransformedFocalPoint(temp0);
      }
    else
      {
      op->vtkLight::GetTransformedFocalPoint(temp0);
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
PyvtkLight_GetTransformedFocalPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTransformedFocalPoint() :
      op->vtkLight::GetTransformedFocalPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLight_GetTransformedFocalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLight_GetTransformedFocalPoint_s1(self, args);
    case 1:
      return PyvtkLight_GetTransformedFocalPoint_s2(self, args);
    case 0:
      return PyvtkLight_GetTransformedFocalPoint_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTransformedFocalPoint");
  return NULL;
}



static PyObject *
PyvtkLight_SetDirectionAngle_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDirectionAngle(temp0, temp1);
      }
    else
      {
      op->vtkLight::SetDirectionAngle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_SetDirectionAngle_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDirectionAngle(temp0);
      }
    else
      {
      op->vtkLight::SetDirectionAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLight_SetDirectionAngle(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLight_SetDirectionAngle_s1(self, args);
    case 1:
      return PyvtkLight_SetDirectionAngle_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDirectionAngle");
  return NULL;
}



static PyObject *
PyvtkLight_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  vtkLight *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLight"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkLight::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SetLightType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLightType(temp0);
      }
    else
      {
      op->vtkLight::SetLightType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLight_GetLightType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLightType() :
      op->vtkLight::GetLightType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SetLightTypeToHeadlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightTypeToHeadlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLightTypeToHeadlight();
      }
    else
      {
      op->vtkLight::SetLightTypeToHeadlight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SetLightTypeToSceneLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightTypeToSceneLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLightTypeToSceneLight();
      }
    else
      {
      op->vtkLight::SetLightTypeToSceneLight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLight_SetLightTypeToCameraLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightTypeToCameraLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLightTypeToCameraLight();
      }
    else
      {
      op->vtkLight::SetLightTypeToCameraLight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLight_LightTypeIsHeadlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightTypeIsHeadlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->LightTypeIsHeadlight() :
      op->vtkLight::LightTypeIsHeadlight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_LightTypeIsSceneLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightTypeIsSceneLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->LightTypeIsSceneLight() :
      op->vtkLight::LightTypeIsSceneLight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLight_LightTypeIsCameraLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightTypeIsCameraLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->LightTypeIsCameraLight() :
      op->vtkLight::LightTypeIsCameraLight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLight_Methods[] = {
  {(char*)"GetClassName", PyvtkLight_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLight_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLight_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLight\nC++: vtkLight *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLight_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLight\nC++: vtkLight *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ShallowClone", PyvtkLight_ShallowClone, METH_VARARGS,
   (char*)"V.ShallowClone() -> vtkLight\nC++: virtual vtkLight *ShallowClone()\n\nCreate a new light object with the same light parameters than the\ncurrent object (any ivar from the superclasses (vtkObject and\nvtkObjectBase), like reference counting, timestamp and observers\nare not copied). This is a shallow clone (TransformMatrix is\nreferenced)\n"},
  {(char*)"Render", PyvtkLight_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, int)\nC++: virtual void Render(vtkRenderer *, int)\n\nAbstract interface to renderer. Each concrete subclass of\nvtkLight will load its data into the graphics system in response\nto this method invocation. The actual loading is performed by a\nvtkLightDevice subclass, which will get created automatically.\n"},
  {(char*)"SetAmbientColor", PyvtkLight_SetAmbientColor, METH_VARARGS,
   (char*)"V.SetAmbientColor(float, float, float)\nC++: void SetAmbientColor(double, double, double)\nV.SetAmbientColor((float, float, float))\nC++: void SetAmbientColor(double a[3])\n\n"},
  {(char*)"GetAmbientColor", PyvtkLight_GetAmbientColor, METH_VARARGS,
   (char*)"V.GetAmbientColor() -> (float, float, float)\nC++: double *GetAmbientColor()\n\nSet/Get the color of the light. It is possible to set the\nambient, diffuse and specular colors separately. The SetColor()\nmethod sets the diffuse and specular colors to the same color\n(this is a feature to preserve backward compatbility.)\n"},
  {(char*)"SetDiffuseColor", PyvtkLight_SetDiffuseColor, METH_VARARGS,
   (char*)"V.SetDiffuseColor(float, float, float)\nC++: void SetDiffuseColor(double, double, double)\nV.SetDiffuseColor((float, float, float))\nC++: void SetDiffuseColor(double a[3])\n\n"},
  {(char*)"GetDiffuseColor", PyvtkLight_GetDiffuseColor, METH_VARARGS,
   (char*)"V.GetDiffuseColor() -> (float, float, float)\nC++: double *GetDiffuseColor()\n\nSet/Get the color of the light. It is possible to set the\nambient, diffuse and specular colors separately. The SetColor()\nmethod sets the diffuse and specular colors to the same color\n(this is a feature to preserve backward compatbility.)\n"},
  {(char*)"SetSpecularColor", PyvtkLight_SetSpecularColor, METH_VARARGS,
   (char*)"V.SetSpecularColor(float, float, float)\nC++: void SetSpecularColor(double, double, double)\nV.SetSpecularColor((float, float, float))\nC++: void SetSpecularColor(double a[3])\n\n"},
  {(char*)"GetSpecularColor", PyvtkLight_GetSpecularColor, METH_VARARGS,
   (char*)"V.GetSpecularColor() -> (float, float, float)\nC++: double *GetSpecularColor()\n\nSet/Get the color of the light. It is possible to set the\nambient, diffuse and specular colors separately. The SetColor()\nmethod sets the diffuse and specular colors to the same color\n(this is a feature to preserve backward compatbility.)\n"},
  {(char*)"SetColor", PyvtkLight_SetColor, METH_VARARGS,
   (char*)"V.SetColor(float, float, float)\nC++: void SetColor(double, double, double)\nV.SetColor((float, float, float))\nC++: void SetColor(const double a[3])\n\nSet/Get the color of the light. It is possible to set the\nambient, diffuse and specular colors separately. The SetColor()\nmethod sets the diffuse and specular colors to the same color\n(this is a feature to preserve backward compatbility.)\n"},
  {(char*)"SetPosition", PyvtkLight_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\nV.SetPosition((float, float, float))\nC++: void SetPosition(double a[3])\n\n"},
  {(char*)"GetPosition", PyvtkLight_GetPosition, METH_VARARGS,
   (char*)"V.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\n\nSet/Get the position of the light. Note: The position of the\nlight is defined in the coordinate space indicated by its\ntransformation matrix (if it exists). Thus, to get the light's\nworld space position, use vtkGetTransformedPosition() instead of\nvtkGetPosition().\n"},
  {(char*)"SetFocalPoint", PyvtkLight_SetFocalPoint, METH_VARARGS,
   (char*)"V.SetFocalPoint(float, float, float)\nC++: void SetFocalPoint(double, double, double)\nV.SetFocalPoint((float, float, float))\nC++: void SetFocalPoint(double a[3])\n\n"},
  {(char*)"GetFocalPoint", PyvtkLight_GetFocalPoint, METH_VARARGS,
   (char*)"V.GetFocalPoint() -> (float, float, float)\nC++: double *GetFocalPoint()\n\nSet/Get the point at which the light is shining. Note: The focal\npoint of the light is defined in the coordinate space indicated\nby its transformation matrix (if it exists). Thus, to get the\nlight's world space focal point, use\nvtkGetTransformedFocalPoint() instead of vtkGetFocalPoint().\n"},
  {(char*)"SetIntensity", PyvtkLight_SetIntensity, METH_VARARGS,
   (char*)"V.SetIntensity(float)\nC++: void SetIntensity(double a)\n\nSet/Get the brightness of the light (from one to zero).\n"},
  {(char*)"GetIntensity", PyvtkLight_GetIntensity, METH_VARARGS,
   (char*)"V.GetIntensity() -> float\nC++: double GetIntensity()\n\nSet/Get the brightness of the light (from one to zero).\n"},
  {(char*)"SetSwitch", PyvtkLight_SetSwitch, METH_VARARGS,
   (char*)"V.SetSwitch(int)\nC++: void SetSwitch(int a)\n\nTurn the light on or off.\n"},
  {(char*)"GetSwitch", PyvtkLight_GetSwitch, METH_VARARGS,
   (char*)"V.GetSwitch() -> int\nC++: int GetSwitch()\n\nTurn the light on or off.\n"},
  {(char*)"SwitchOn", PyvtkLight_SwitchOn, METH_VARARGS,
   (char*)"V.SwitchOn()\nC++: void SwitchOn()\n\nTurn the light on or off.\n"},
  {(char*)"SwitchOff", PyvtkLight_SwitchOff, METH_VARARGS,
   (char*)"V.SwitchOff()\nC++: void SwitchOff()\n\nTurn the light on or off.\n"},
  {(char*)"SetPositional", PyvtkLight_SetPositional, METH_VARARGS,
   (char*)"V.SetPositional(int)\nC++: void SetPositional(int a)\n\nTurn positional lighting on or off.\n"},
  {(char*)"GetPositional", PyvtkLight_GetPositional, METH_VARARGS,
   (char*)"V.GetPositional() -> int\nC++: int GetPositional()\n\nTurn positional lighting on or off.\n"},
  {(char*)"PositionalOn", PyvtkLight_PositionalOn, METH_VARARGS,
   (char*)"V.PositionalOn()\nC++: void PositionalOn()\n\nTurn positional lighting on or off.\n"},
  {(char*)"PositionalOff", PyvtkLight_PositionalOff, METH_VARARGS,
   (char*)"V.PositionalOff()\nC++: void PositionalOff()\n\nTurn positional lighting on or off.\n"},
  {(char*)"SetExponent", PyvtkLight_SetExponent, METH_VARARGS,
   (char*)"V.SetExponent(float)\nC++: void SetExponent(double)\n\nSet/Get the exponent of the cosine used in positional lighting.\n"},
  {(char*)"GetExponentMinValue", PyvtkLight_GetExponentMinValue, METH_VARARGS,
   (char*)"V.GetExponentMinValue() -> float\nC++: double GetExponentMinValue()\n\nSet/Get the exponent of the cosine used in positional lighting.\n"},
  {(char*)"GetExponentMaxValue", PyvtkLight_GetExponentMaxValue, METH_VARARGS,
   (char*)"V.GetExponentMaxValue() -> float\nC++: double GetExponentMaxValue()\n\nSet/Get the exponent of the cosine used in positional lighting.\n"},
  {(char*)"GetExponent", PyvtkLight_GetExponent, METH_VARARGS,
   (char*)"V.GetExponent() -> float\nC++: double GetExponent()\n\nSet/Get the exponent of the cosine used in positional lighting.\n"},
  {(char*)"SetConeAngle", PyvtkLight_SetConeAngle, METH_VARARGS,
   (char*)"V.SetConeAngle(float)\nC++: void SetConeAngle(double a)\n\nSet/Get the lighting cone angle of a positional light in degrees.\nThis is the angle between the axis of the cone and a ray along\nthe edge of the cone. A value of 180 indicates that you want no\nspot lighting effects just a positional light.\n"},
  {(char*)"GetConeAngle", PyvtkLight_GetConeAngle, METH_VARARGS,
   (char*)"V.GetConeAngle() -> float\nC++: double GetConeAngle()\n\nSet/Get the lighting cone angle of a positional light in degrees.\nThis is the angle between the axis of the cone and a ray along\nthe edge of the cone. A value of 180 indicates that you want no\nspot lighting effects just a positional light.\n"},
  {(char*)"SetAttenuationValues", PyvtkLight_SetAttenuationValues, METH_VARARGS,
   (char*)"V.SetAttenuationValues(float, float, float)\nC++: void SetAttenuationValues(double, double, double)\nV.SetAttenuationValues((float, float, float))\nC++: void SetAttenuationValues(double a[3])\n\n"},
  {(char*)"GetAttenuationValues", PyvtkLight_GetAttenuationValues, METH_VARARGS,
   (char*)"V.GetAttenuationValues() -> (float, float, float)\nC++: double *GetAttenuationValues()\n\nSet/Get the quadratic attenuation constants. They are specified\nas constant, linear, and quadratic, in that order.\n"},
  {(char*)"SetTransformMatrix", PyvtkLight_SetTransformMatrix, METH_VARARGS,
   (char*)"V.SetTransformMatrix(vtkMatrix4x4)\nC++: virtual void SetTransformMatrix(vtkMatrix4x4 *)\n\nSet/Get the light's transformation matrix.  If a matrix is set\nfor a light, the light's parameters (position and focal point)\nare transformed by the matrix before being rendered.\n"},
  {(char*)"GetTransformMatrix", PyvtkLight_GetTransformMatrix, METH_VARARGS,
   (char*)"V.GetTransformMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetTransformMatrix()\n\nSet/Get the light's transformation matrix.  If a matrix is set\nfor a light, the light's parameters (position and focal point)\nare transformed by the matrix before being rendered.\n"},
  {(char*)"GetTransformedPosition", PyvtkLight_GetTransformedPosition, METH_VARARGS,
   (char*)"V.GetTransformedPosition(float, float, float)\nC++: void GetTransformedPosition(double &a0, double &a1,\n    double &a2)\nV.GetTransformedPosition([float, float, float])\nC++: void GetTransformedPosition(double a[3])\nV.GetTransformedPosition() -> (float, float, float)\nC++: double *GetTransformedPosition()\n\nGet the position of the light, modified by the transformation\nmatrix (if it exists).\n"},
  {(char*)"GetTransformedFocalPoint", PyvtkLight_GetTransformedFocalPoint, METH_VARARGS,
   (char*)"V.GetTransformedFocalPoint(float, float, float)\nC++: void GetTransformedFocalPoint(double &a0, double &a1,\n    double &a2)\nV.GetTransformedFocalPoint([float, float, float])\nC++: void GetTransformedFocalPoint(double a[3])\nV.GetTransformedFocalPoint() -> (float, float, float)\nC++: double *GetTransformedFocalPoint()\n\nGet the focal point of the light, modified by the transformation\nmatrix (if it exists).\n"},
  {(char*)"SetDirectionAngle", PyvtkLight_SetDirectionAngle, METH_VARARGS,
   (char*)"V.SetDirectionAngle(float, float)\nC++: void SetDirectionAngle(double elevation, double azimuth)\nV.SetDirectionAngle((float, float))\nC++: void SetDirectionAngle(const double ang[2])\n\nSet the position and focal point of a light based on elevation\nand azimuth.  The light is moved so it is shining from the given\nangle. Angles are given in degrees.  If the light is a positional\nlight, it is made directional instead.\n"},
  {(char*)"DeepCopy", PyvtkLight_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkLight)\nC++: void DeepCopy(vtkLight *light)\n\nPerform deep copy of this light.\n"},
  {(char*)"SetLightType", PyvtkLight_SetLightType, METH_VARARGS,
   (char*)"V.SetLightType(int)\nC++: void SetLightType(int a)\n\nSet/Get the type of the light. A SceneLight is a light located in\nthe world coordinate space.  A light is initially created as a\nscene light.\n\nA Headlight is always located at the camera and is pointed at the\ncamera's focal point.  The renderer is free to modify the\nposition and focal point of the camera at any time.\n\nA CameraLight is also attached to the camera, but is not\nnecessarily located at the camera's position.  CameraLights are\ndefined in a coordinate space where the camera is located at (0,\n0, 1), looking towards (0, 0, 0) at a distance of 1, with up\nbeing (0, 1, 0).\n\nNote: Use SetLightTypeToSceneLight, rather than SetLightType(3),\nsince the former clears the light's transform matrix.\n"},
  {(char*)"GetLightType", PyvtkLight_GetLightType, METH_VARARGS,
   (char*)"V.GetLightType() -> int\nC++: int GetLightType()\n\nSet/Get the type of the light. A SceneLight is a light located in\nthe world coordinate space.  A light is initially created as a\nscene light.\n\nA Headlight is always located at the camera and is pointed at the\ncamera's focal point.  The renderer is free to modify the\nposition and focal point of the camera at any time.\n\nA CameraLight is also attached to the camera, but is not\nnecessarily located at the camera's position.  CameraLights are\ndefined in a coordinate space where the camera is located at (0,\n0, 1), looking towards (0, 0, 0) at a distance of 1, with up\nbeing (0, 1, 0).\n\nNote: Use SetLightTypeToSceneLight, rather than SetLightType(3),\nsince the former clears the light's transform matrix.\n"},
  {(char*)"SetLightTypeToHeadlight", PyvtkLight_SetLightTypeToHeadlight, METH_VARARGS,
   (char*)"V.SetLightTypeToHeadlight()\nC++: void SetLightTypeToHeadlight()\n\nSet/Get the type of the light. A SceneLight is a light located in\nthe world coordinate space.  A light is initially created as a\nscene light.\n\nA Headlight is always located at the camera and is pointed at the\ncamera's focal point.  The renderer is free to modify the\nposition and focal point of the camera at any time.\n\nA CameraLight is also attached to the camera, but is not\nnecessarily located at the camera's position.  CameraLights are\ndefined in a coordinate space where the camera is located at (0,\n0, 1), looking towards (0, 0, 0) at a distance of 1, with up\nbeing (0, 1, 0).\n\nNote: Use SetLightTypeToSceneLight, rather than SetLightType(3),\nsince the former clears the light's transform matrix.\n"},
  {(char*)"SetLightTypeToSceneLight", PyvtkLight_SetLightTypeToSceneLight, METH_VARARGS,
   (char*)"V.SetLightTypeToSceneLight()\nC++: void SetLightTypeToSceneLight()\n\nSet/Get the type of the light. A SceneLight is a light located in\nthe world coordinate space.  A light is initially created as a\nscene light.\n\nA Headlight is always located at the camera and is pointed at the\ncamera's focal point.  The renderer is free to modify the\nposition and focal point of the camera at any time.\n\nA CameraLight is also attached to the camera, but is not\nnecessarily located at the camera's position.  CameraLights are\ndefined in a coordinate space where the camera is located at (0,\n0, 1), looking towards (0, 0, 0) at a distance of 1, with up\nbeing (0, 1, 0).\n\nNote: Use SetLightTypeToSceneLight, rather than SetLightType(3),\nsince the former clears the light's transform matrix.\n"},
  {(char*)"SetLightTypeToCameraLight", PyvtkLight_SetLightTypeToCameraLight, METH_VARARGS,
   (char*)"V.SetLightTypeToCameraLight()\nC++: void SetLightTypeToCameraLight()\n\nSet/Get the type of the light. A SceneLight is a light located in\nthe world coordinate space.  A light is initially created as a\nscene light.\n\nA Headlight is always located at the camera and is pointed at the\ncamera's focal point.  The renderer is free to modify the\nposition and focal point of the camera at any time.\n\nA CameraLight is also attached to the camera, but is not\nnecessarily located at the camera's position.  CameraLights are\ndefined in a coordinate space where the camera is located at (0,\n0, 1), looking towards (0, 0, 0) at a distance of 1, with up\nbeing (0, 1, 0).\n\nNote: Use SetLightTypeToSceneLight, rather than SetLightType(3),\nsince the former clears the light's transform matrix.\n"},
  {(char*)"LightTypeIsHeadlight", PyvtkLight_LightTypeIsHeadlight, METH_VARARGS,
   (char*)"V.LightTypeIsHeadlight() -> int\nC++: int LightTypeIsHeadlight()\n\nQuery the type of the light.\n"},
  {(char*)"LightTypeIsSceneLight", PyvtkLight_LightTypeIsSceneLight, METH_VARARGS,
   (char*)"V.LightTypeIsSceneLight() -> int\nC++: int LightTypeIsSceneLight()\n\nQuery the type of the light.\n"},
  {(char*)"LightTypeIsCameraLight", PyvtkLight_LightTypeIsCameraLight, METH_VARARGS,
   (char*)"V.LightTypeIsCameraLight() -> int\nC++: int LightTypeIsCameraLight()\n\nQuery the type of the light.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLight_StaticNew()
{
  return vtkLight::New();
}

PyObject *PyVTKClass_vtkLightNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLight_StaticNew,
    PyvtkLight_Methods,
    "vtkLight", modulename,
    NULL, NULL,
    PyvtkLight_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkLight_Doc()
{
  static const char *docstring[] = {
    "vtkLight - a virtual light for 3D rendering\n\n",
    "Superclass: vtkObject\n\n",
    "vtkLight is a virtual light for 3D rendering. It provides methods to\nlocate and point the light, turn it on and off, and set its\nbrightness and color. In addition to the basic infinite distance\npoint light source attributes, you also can specify the light\nattenuation values and cone angle. These attributes are only used if\nthe light is a positional light. The default is a directional light\n(e.g. i",
    "nfinite point light source).\n\nLights have a type that describes how the light should move with\nrespect to the camera.  A Headlight is always located at the current\ncamera position and shines on the camera's focal point.  A\nCameraLight also moves with the camera, but may not be coincident to\nit.  CameraLights are defined in a normalized coordinate space where\nthe camera is located at (0, 0, 1), the",
    " camera is looking at (0, 0,\n0), and up is (0, 1, 0).  Finally, a SceneLight is part of the scene\nitself and does not move with the camera. (Renderers are responsible\nfor moving the light based on its type.)\n\nLights have a transformation matrix that describes the space in which\nthey are positioned.  A light's world space position and focal point\nare defined by their local position and focal point,",
    " transformed by\ntheir transformation matrix (if it exists).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLight(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLightNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLight", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_LIGHT_TYPE_HEADLIGHT", 1 },
        { "VTK_LIGHT_TYPE_CAMERA_LIGHT", 2 },
        { "VTK_LIGHT_TYPE_SCENE_LIGHT", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

