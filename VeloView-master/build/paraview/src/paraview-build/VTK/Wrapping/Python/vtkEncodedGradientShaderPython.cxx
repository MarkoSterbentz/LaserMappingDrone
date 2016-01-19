// python wrapper for vtkEncodedGradientShader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEncodedGradientShader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEncodedGradientShader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEncodedGradientShaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkEncodedGradientShader_Doc();


static PyObject *
PyvtkEncodedGradientShader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEncodedGradientShader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEncodedGradientShader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEncodedGradientShader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEncodedGradientShader::NewInstance());

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
PyvtkEncodedGradientShader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEncodedGradientShader *tempr = vtkEncodedGradientShader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_SetZeroNormalDiffuseIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZeroNormalDiffuseIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZeroNormalDiffuseIntensity(temp0);
      }
    else
      {
      op->vtkEncodedGradientShader::SetZeroNormalDiffuseIntensity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalDiffuseIntensityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalDiffuseIntensityMinValue() :
      op->vtkEncodedGradientShader::GetZeroNormalDiffuseIntensityMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalDiffuseIntensityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalDiffuseIntensityMaxValue() :
      op->vtkEncodedGradientShader::GetZeroNormalDiffuseIntensityMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalDiffuseIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalDiffuseIntensity() :
      op->vtkEncodedGradientShader::GetZeroNormalDiffuseIntensity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_SetZeroNormalSpecularIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZeroNormalSpecularIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZeroNormalSpecularIntensity(temp0);
      }
    else
      {
      op->vtkEncodedGradientShader::SetZeroNormalSpecularIntensity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalSpecularIntensityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalSpecularIntensityMinValue() :
      op->vtkEncodedGradientShader::GetZeroNormalSpecularIntensityMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalSpecularIntensityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalSpecularIntensityMaxValue() :
      op->vtkEncodedGradientShader::GetZeroNormalSpecularIntensityMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalSpecularIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalSpecularIntensity() :
      op->vtkEncodedGradientShader::GetZeroNormalSpecularIntensity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_UpdateShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  vtkEncodedGradientEstimator *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetVTKObject(temp2, "vtkEncodedGradientEstimator"))
    {
    if (ap.IsBound())
      {
      op->UpdateShadingTable(temp0, temp1, temp2);
      }
    else
      {
      op->vtkEncodedGradientShader::UpdateShadingTable(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetRedDiffuseShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedDiffuseShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    float *tempr = (ap.IsBound() ?
      op->GetRedDiffuseShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetRedDiffuseShadingTable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetGreenDiffuseShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreenDiffuseShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    float *tempr = (ap.IsBound() ?
      op->GetGreenDiffuseShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetGreenDiffuseShadingTable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetBlueDiffuseShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlueDiffuseShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    float *tempr = (ap.IsBound() ?
      op->GetBlueDiffuseShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetBlueDiffuseShadingTable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetRedSpecularShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedSpecularShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    float *tempr = (ap.IsBound() ?
      op->GetRedSpecularShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetRedSpecularShadingTable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetGreenSpecularShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreenSpecularShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    float *tempr = (ap.IsBound() ?
      op->GetGreenSpecularShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetGreenSpecularShadingTable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetBlueSpecularShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlueSpecularShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    float *tempr = (ap.IsBound() ?
      op->GetBlueSpecularShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetBlueSpecularShadingTable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_SetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActiveComponent(temp0);
      }
    else
      {
      op->vtkEncodedGradientShader::SetActiveComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetActiveComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponentMinValue() :
      op->vtkEncodedGradientShader::GetActiveComponentMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetActiveComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponentMaxValue() :
      op->vtkEncodedGradientShader::GetActiveComponentMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponent() :
      op->vtkEncodedGradientShader::GetActiveComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEncodedGradientShader_Methods[] = {
  {(char*)"GetClassName", PyvtkEncodedGradientShader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEncodedGradientShader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEncodedGradientShader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEncodedGradientShader\nC++: vtkEncodedGradientShader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEncodedGradientShader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEncodedGradientShader\nC++: vtkEncodedGradientShader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetZeroNormalDiffuseIntensity", PyvtkEncodedGradientShader_SetZeroNormalDiffuseIntensity, METH_VARARGS,
   (char*)"V.SetZeroNormalDiffuseIntensity(float)\nC++: void SetZeroNormalDiffuseIntensity(float)\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {(char*)"GetZeroNormalDiffuseIntensityMinValue", PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensityMinValue, METH_VARARGS,
   (char*)"V.GetZeroNormalDiffuseIntensityMinValue() -> float\nC++: float GetZeroNormalDiffuseIntensityMinValue()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {(char*)"GetZeroNormalDiffuseIntensityMaxValue", PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensityMaxValue, METH_VARARGS,
   (char*)"V.GetZeroNormalDiffuseIntensityMaxValue() -> float\nC++: float GetZeroNormalDiffuseIntensityMaxValue()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {(char*)"GetZeroNormalDiffuseIntensity", PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensity, METH_VARARGS,
   (char*)"V.GetZeroNormalDiffuseIntensity() -> float\nC++: float GetZeroNormalDiffuseIntensity()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {(char*)"SetZeroNormalSpecularIntensity", PyvtkEncodedGradientShader_SetZeroNormalSpecularIntensity, METH_VARARGS,
   (char*)"V.SetZeroNormalSpecularIntensity(float)\nC++: void SetZeroNormalSpecularIntensity(float)\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {(char*)"GetZeroNormalSpecularIntensityMinValue", PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensityMinValue, METH_VARARGS,
   (char*)"V.GetZeroNormalSpecularIntensityMinValue() -> float\nC++: float GetZeroNormalSpecularIntensityMinValue()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {(char*)"GetZeroNormalSpecularIntensityMaxValue", PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensityMaxValue, METH_VARARGS,
   (char*)"V.GetZeroNormalSpecularIntensityMaxValue() -> float\nC++: float GetZeroNormalSpecularIntensityMaxValue()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {(char*)"GetZeroNormalSpecularIntensity", PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensity, METH_VARARGS,
   (char*)"V.GetZeroNormalSpecularIntensity() -> float\nC++: float GetZeroNormalSpecularIntensity()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {(char*)"UpdateShadingTable", PyvtkEncodedGradientShader_UpdateShadingTable, METH_VARARGS,
   (char*)"V.UpdateShadingTable(vtkRenderer, vtkVolume,\n    vtkEncodedGradientEstimator)\nC++: void UpdateShadingTable(vtkRenderer *ren, vtkVolume *vol,\n    vtkEncodedGradientEstimator *gradest)\n\nCause the shading table to be updated\n"},
  {(char*)"GetRedDiffuseShadingTable", PyvtkEncodedGradientShader_GetRedDiffuseShadingTable, METH_VARARGS,
   (char*)"V.GetRedDiffuseShadingTable(vtkVolume) -> (float, ...)\nC++: float *GetRedDiffuseShadingTable(vtkVolume *vol)\n\nGet the red/green/blue shading table.\n"},
  {(char*)"GetGreenDiffuseShadingTable", PyvtkEncodedGradientShader_GetGreenDiffuseShadingTable, METH_VARARGS,
   (char*)"V.GetGreenDiffuseShadingTable(vtkVolume) -> (float, ...)\nC++: float *GetGreenDiffuseShadingTable(vtkVolume *vol)\n\nGet the red/green/blue shading table.\n"},
  {(char*)"GetBlueDiffuseShadingTable", PyvtkEncodedGradientShader_GetBlueDiffuseShadingTable, METH_VARARGS,
   (char*)"V.GetBlueDiffuseShadingTable(vtkVolume) -> (float, ...)\nC++: float *GetBlueDiffuseShadingTable(vtkVolume *vol)\n\nGet the red/green/blue shading table.\n"},
  {(char*)"GetRedSpecularShadingTable", PyvtkEncodedGradientShader_GetRedSpecularShadingTable, METH_VARARGS,
   (char*)"V.GetRedSpecularShadingTable(vtkVolume) -> (float, ...)\nC++: float *GetRedSpecularShadingTable(vtkVolume *vol)\n\nGet the red/green/blue shading table.\n"},
  {(char*)"GetGreenSpecularShadingTable", PyvtkEncodedGradientShader_GetGreenSpecularShadingTable, METH_VARARGS,
   (char*)"V.GetGreenSpecularShadingTable(vtkVolume) -> (float, ...)\nC++: float *GetGreenSpecularShadingTable(vtkVolume *vol)\n\nGet the red/green/blue shading table.\n"},
  {(char*)"GetBlueSpecularShadingTable", PyvtkEncodedGradientShader_GetBlueSpecularShadingTable, METH_VARARGS,
   (char*)"V.GetBlueSpecularShadingTable(vtkVolume) -> (float, ...)\nC++: float *GetBlueSpecularShadingTable(vtkVolume *vol)\n\nGet the red/green/blue shading table.\n"},
  {(char*)"SetActiveComponent", PyvtkEncodedGradientShader_SetActiveComponent, METH_VARARGS,
   (char*)"V.SetActiveComponent(int)\nC++: void SetActiveComponent(int)\n\nSet the active component for shading. This component's ambient /\ndiffuse / specular / specular power values will be used to create\nthe shading table. The default is 1.0\n"},
  {(char*)"GetActiveComponentMinValue", PyvtkEncodedGradientShader_GetActiveComponentMinValue, METH_VARARGS,
   (char*)"V.GetActiveComponentMinValue() -> int\nC++: int GetActiveComponentMinValue()\n\nSet the active component for shading. This component's ambient /\ndiffuse / specular / specular power values will be used to create\nthe shading table. The default is 1.0\n"},
  {(char*)"GetActiveComponentMaxValue", PyvtkEncodedGradientShader_GetActiveComponentMaxValue, METH_VARARGS,
   (char*)"V.GetActiveComponentMaxValue() -> int\nC++: int GetActiveComponentMaxValue()\n\nSet the active component for shading. This component's ambient /\ndiffuse / specular / specular power values will be used to create\nthe shading table. The default is 1.0\n"},
  {(char*)"GetActiveComponent", PyvtkEncodedGradientShader_GetActiveComponent, METH_VARARGS,
   (char*)"V.GetActiveComponent() -> int\nC++: int GetActiveComponent()\n\nSet the active component for shading. This component's ambient /\ndiffuse / specular / specular power values will be used to create\nthe shading table. The default is 1.0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEncodedGradientShader_StaticNew()
{
  return vtkEncodedGradientShader::New();
}

PyObject *PyVTKClass_vtkEncodedGradientShaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEncodedGradientShader_StaticNew,
    PyvtkEncodedGradientShader_Methods,
    "vtkEncodedGradientShader", modulename,
    NULL, NULL,
    PyvtkEncodedGradientShader_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkEncodedGradientShader_Doc()
{
  static const char *docstring[] = {
    "vtkEncodedGradientShader - Compute shading tables for encoded normals.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkEncodedGradientShader computes shading tables for encoded normals\nthat indicates the amount of diffuse and specular illumination that\nis received from all light sources at a surface location with that\nnormal. For diffuse illumination this is accurate, but for specular\nillumination it is approximate for perspective projections since the\ncenter view direction is always used as the view direction.",
    " Since the\nshading table is dependent on the volume (for the transformation that\nmust be applied to the normals to put them into world coordinates)\nthere is a shading table per volume. This is necessary because\nmultiple volumes can share a volume mapper.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEncodedGradientShader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEncodedGradientShaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEncodedGradientShader", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(100);
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTK_MAX_SHADING_TABLES", o);
    Py_DECREF(o);
    }
}

