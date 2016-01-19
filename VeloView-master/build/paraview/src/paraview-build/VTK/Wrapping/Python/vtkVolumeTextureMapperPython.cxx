// python wrapper for vtkVolumeTextureMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVolumeTextureMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVolumeTextureMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVolumeTextureMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeMapperNew
#endif

static const char **PyvtkVolumeTextureMapper_Doc();


static PyObject *
PyvtkVolumeTextureMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVolumeTextureMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeTextureMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeTextureMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeTextureMapper::NewInstance());

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
PyvtkVolumeTextureMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVolumeTextureMapper *tempr = vtkVolumeTextureMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkVolumeTextureMapper::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeTextureMapper_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Update(temp0);
      }
    else
      {
      op->vtkVolumeTextureMapper::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeTextureMapper_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkVolumeTextureMapper_Update_s1(self, args);
    case 1:
      return PyvtkVolumeTextureMapper_Update_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return NULL;
}



static PyObject *
PyvtkVolumeTextureMapper_SetGradientEstimator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientEstimator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  vtkEncodedGradientEstimator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEncodedGradientEstimator"))
    {
    if (ap.IsBound())
      {
      op->SetGradientEstimator(temp0);
      }
    else
      {
      op->vtkVolumeTextureMapper::SetGradientEstimator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetGradientEstimator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientEstimator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEncodedGradientEstimator *tempr = (ap.IsBound() ?
      op->GetGradientEstimator() :
      op->vtkVolumeTextureMapper::GetGradientEstimator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetGradientShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEncodedGradientShader *tempr = (ap.IsBound() ?
      op->GetGradientShader() :
      op->vtkVolumeTextureMapper::GetGradientShader());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetGradientOpacityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetGradientOpacityArray() :
      op->vtkVolumeTextureMapper::GetGradientOpacityArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetRGBAArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBAArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetRGBAArray() :
      op->vtkVolumeTextureMapper::GetRGBAArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetRedDiffuseShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedDiffuseShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetRedDiffuseShadingTable() :
      op->vtkVolumeTextureMapper::GetRedDiffuseShadingTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetGreenDiffuseShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreenDiffuseShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetGreenDiffuseShadingTable() :
      op->vtkVolumeTextureMapper::GetGreenDiffuseShadingTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetBlueDiffuseShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlueDiffuseShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetBlueDiffuseShadingTable() :
      op->vtkVolumeTextureMapper::GetBlueDiffuseShadingTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetRedSpecularShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedSpecularShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetRedSpecularShadingTable() :
      op->vtkVolumeTextureMapper::GetRedSpecularShadingTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetGreenSpecularShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreenSpecularShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetGreenSpecularShadingTable() :
      op->vtkVolumeTextureMapper::GetGreenSpecularShadingTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetBlueSpecularShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlueSpecularShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetBlueSpecularShadingTable() :
      op->vtkVolumeTextureMapper::GetBlueSpecularShadingTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetEncodedNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetEncodedNormals() :
      op->vtkVolumeTextureMapper::GetEncodedNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetGradientMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetGradientMagnitudes() :
      op->vtkVolumeTextureMapper::GetGradientMagnitudes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetShade(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShade");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShade() :
      op->vtkVolumeTextureMapper::GetShade());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkVolumeTextureMapper::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDataOrigin() :
      op->vtkVolumeTextureMapper::GetDataOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDataSpacing() :
      op->vtkVolumeTextureMapper::GetDataSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    op->Render(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetGradientMagnitudeScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeScale() :
      op->vtkVolumeTextureMapper::GetGradientMagnitudeScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeTextureMapper_GetGradientMagnitudeScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeScale(temp0) :
      op->vtkVolumeTextureMapper::GetGradientMagnitudeScale(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeTextureMapper_GetGradientMagnitudeScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkVolumeTextureMapper_GetGradientMagnitudeScale_s1(self, args);
    case 1:
      return PyvtkVolumeTextureMapper_GetGradientMagnitudeScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientMagnitudeScale");
  return NULL;
}



static PyObject *
PyvtkVolumeTextureMapper_GetGradientMagnitudeBias_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeBias() :
      op->vtkVolumeTextureMapper::GetGradientMagnitudeBias());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeTextureMapper_GetGradientMagnitudeBias_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeBias(temp0) :
      op->vtkVolumeTextureMapper::GetGradientMagnitudeBias(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeTextureMapper_GetGradientMagnitudeBias(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkVolumeTextureMapper_GetGradientMagnitudeBias_s1(self, args);
    case 1:
      return PyvtkVolumeTextureMapper_GetGradientMagnitudeBias_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientMagnitudeBias");
  return NULL;
}


static PyMethodDef PyvtkVolumeTextureMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeTextureMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeTextureMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeTextureMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVolumeTextureMapper\nC++: vtkVolumeTextureMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeTextureMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeTextureMapper\nC++: vtkVolumeTextureMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkVolumeTextureMapper_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\nV.Update(int)\nC++: virtual void Update(int port)\n\nUpdate the volume rendering pipeline by updating the scalar input\n"},
  {(char*)"SetGradientEstimator", PyvtkVolumeTextureMapper_SetGradientEstimator, METH_VARARGS,
   (char*)"V.SetGradientEstimator(vtkEncodedGradientEstimator)\nC++: virtual void SetGradientEstimator(\n    vtkEncodedGradientEstimator *gradest)\n\nSet / Get the gradient estimator used to estimate normals\n"},
  {(char*)"GetGradientEstimator", PyvtkVolumeTextureMapper_GetGradientEstimator, METH_VARARGS,
   (char*)"V.GetGradientEstimator() -> vtkEncodedGradientEstimator\nC++: vtkEncodedGradientEstimator *GetGradientEstimator()\n\nSet / Get the gradient estimator used to estimate normals\n"},
  {(char*)"GetGradientShader", PyvtkVolumeTextureMapper_GetGradientShader, METH_VARARGS,
   (char*)"V.GetGradientShader() -> vtkEncodedGradientShader\nC++: vtkEncodedGradientShader *GetGradientShader()\n\nGet the gradient shader.\n"},
  {(char*)"GetGradientOpacityArray", PyvtkVolumeTextureMapper_GetGradientOpacityArray, METH_VARARGS,
   (char*)"V.GetGradientOpacityArray() -> (float, ...)\nC++: float *GetGradientOpacityArray()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"GetRGBAArray", PyvtkVolumeTextureMapper_GetRGBAArray, METH_VARARGS,
   (char*)"V.GetRGBAArray() -> (int, ...)\nC++: unsigned char *GetRGBAArray()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"GetRedDiffuseShadingTable", PyvtkVolumeTextureMapper_GetRedDiffuseShadingTable, METH_VARARGS,
   (char*)"V.GetRedDiffuseShadingTable() -> (float, ...)\nC++: float *GetRedDiffuseShadingTable()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"GetGreenDiffuseShadingTable", PyvtkVolumeTextureMapper_GetGreenDiffuseShadingTable, METH_VARARGS,
   (char*)"V.GetGreenDiffuseShadingTable() -> (float, ...)\nC++: float *GetGreenDiffuseShadingTable()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"GetBlueDiffuseShadingTable", PyvtkVolumeTextureMapper_GetBlueDiffuseShadingTable, METH_VARARGS,
   (char*)"V.GetBlueDiffuseShadingTable() -> (float, ...)\nC++: float *GetBlueDiffuseShadingTable()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"GetRedSpecularShadingTable", PyvtkVolumeTextureMapper_GetRedSpecularShadingTable, METH_VARARGS,
   (char*)"V.GetRedSpecularShadingTable() -> (float, ...)\nC++: float *GetRedSpecularShadingTable()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"GetGreenSpecularShadingTable", PyvtkVolumeTextureMapper_GetGreenSpecularShadingTable, METH_VARARGS,
   (char*)"V.GetGreenSpecularShadingTable() -> (float, ...)\nC++: float *GetGreenSpecularShadingTable()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"GetBlueSpecularShadingTable", PyvtkVolumeTextureMapper_GetBlueSpecularShadingTable, METH_VARARGS,
   (char*)"V.GetBlueSpecularShadingTable() -> (float, ...)\nC++: float *GetBlueSpecularShadingTable()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"GetEncodedNormals", PyvtkVolumeTextureMapper_GetEncodedNormals, METH_VARARGS,
   (char*)"V.GetEncodedNormals() -> (int, ...)\nC++: unsigned short *GetEncodedNormals()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"GetGradientMagnitudes", PyvtkVolumeTextureMapper_GetGradientMagnitudes, METH_VARARGS,
   (char*)"V.GetGradientMagnitudes() -> (int, ...)\nC++: unsigned char *GetGradientMagnitudes()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"GetShade", PyvtkVolumeTextureMapper_GetShade, METH_VARARGS,
   (char*)"V.GetShade() -> int\nC++: int GetShade()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"GetRenderWindow", PyvtkVolumeTextureMapper_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"GetDataOrigin", PyvtkVolumeTextureMapper_GetDataOrigin, METH_VARARGS,
   (char*)"V.GetDataOrigin() -> (float, float, float)\nC++: double *GetDataOrigin()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"GetDataSpacing", PyvtkVolumeTextureMapper_GetDataSpacing, METH_VARARGS,
   (char*)"V.GetDataSpacing() -> (float, float, float)\nC++: double *GetDataSpacing()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"Render", PyvtkVolumeTextureMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *ren, vtkVolume *vol)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {(char*)"GetGradientMagnitudeScale", PyvtkVolumeTextureMapper_GetGradientMagnitudeScale, METH_VARARGS,
   (char*)"V.GetGradientMagnitudeScale() -> float\nC++: virtual float GetGradientMagnitudeScale()\nV.GetGradientMagnitudeScale(int) -> float\nC++: virtual float GetGradientMagnitudeScale(int)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Values\nneeded by the volume\n"},
  {(char*)"GetGradientMagnitudeBias", PyvtkVolumeTextureMapper_GetGradientMagnitudeBias, METH_VARARGS,
   (char*)"V.GetGradientMagnitudeBias() -> float\nC++: virtual float GetGradientMagnitudeBias()\nV.GetGradientMagnitudeBias(int) -> float\nC++: virtual float GetGradientMagnitudeBias(int)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Values\nneeded by the volume\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkVolumeTextureMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkVolumeTextureMapper_Methods,
    "vtkVolumeTextureMapper", modulename,
    NULL, NULL,
    PyvtkVolumeTextureMapper_Doc(),
    PyVTKClass_vtkVolumeMapperNew(modulename));
  return cls;
}

const char **PyvtkVolumeTextureMapper_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeTextureMapper - Abstract class for a volume mapper\n\n",
    "Superclass: vtkVolumeMapper\n\n",
    "vtkVolumeTextureMapper is the abstract definition of a volume mapper\nthat uses a texture mapping approach.\n\nSee Also:\n\nvtkVolumeMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeTextureMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeTextureMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeTextureMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

