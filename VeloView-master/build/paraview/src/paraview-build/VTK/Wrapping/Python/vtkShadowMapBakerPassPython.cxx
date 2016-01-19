// python wrapper for vtkShadowMapBakerPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkShadowMapBakerPass.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkShadowMapBakerPass(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkShadowMapBakerPassNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRenderPassNew
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderPassNew
#endif

static const char **PyvtkShadowMapBakerPass_Doc();


static PyObject *
PyvtkShadowMapBakerPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkShadowMapBakerPass::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkShadowMapBakerPass::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkShadowMapBakerPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkShadowMapBakerPass::NewInstance());

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
PyvtkShadowMapBakerPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkShadowMapBakerPass *tempr = vtkShadowMapBakerPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_OCCLUDER(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "OCCLUDER");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkShadowMapBakerPass::OCCLUDER();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_RECEIVER(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RECEIVER");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkShadowMapBakerPass::RECEIVER();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

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
      op->vtkShadowMapBakerPass::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetOpaquePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpaquePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetOpaquePass() :
      op->vtkShadowMapBakerPass::GetOpaquePass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_SetOpaquePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpaquePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  vtkRenderPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
    {
    if (ap.IsBound())
      {
      op->SetOpaquePass(temp0);
      }
    else
      {
      op->vtkShadowMapBakerPass::SetOpaquePass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetCompositeZPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeZPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetCompositeZPass() :
      op->vtkShadowMapBakerPass::GetCompositeZPass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_SetCompositeZPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeZPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  vtkRenderPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
    {
    if (ap.IsBound())
      {
      op->SetCompositeZPass(temp0);
      }
    else
      {
      op->vtkShadowMapBakerPass::SetCompositeZPass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResolution(temp0);
      }
    else
      {
      op->vtkShadowMapBakerPass::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkShadowMapBakerPass::GetResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_SetPolygonOffsetFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolygonOffsetFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPolygonOffsetFactor(temp0);
      }
    else
      {
      op->vtkShadowMapBakerPass::SetPolygonOffsetFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetPolygonOffsetFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonOffsetFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetPolygonOffsetFactor() :
      op->vtkShadowMapBakerPass::GetPolygonOffsetFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_SetPolygonOffsetUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolygonOffsetUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPolygonOffsetUnits(temp0);
      }
    else
      {
      op->vtkShadowMapBakerPass::SetPolygonOffsetUnits(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetPolygonOffsetUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonOffsetUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetPolygonOffsetUnits() :
      op->vtkShadowMapBakerPass::GetPolygonOffsetUnits());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetHasShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetHasShadows() :
      op->vtkShadowMapBakerPass::GetHasShadows());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_LightCreatesShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightCreatesShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  vtkLight *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLight"))
    {
    bool tempr = (ap.IsBound() ?
      op->LightCreatesShadow(temp0) :
      op->vtkShadowMapBakerPass::LightCreatesShadow(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetShadowMaps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadowMaps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkShadowMapBakerPassTextures *tempr = (ap.IsBound() ?
      op->GetShadowMaps() :
      op->vtkShadowMapBakerPass::GetShadowMaps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetLightCameras(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightCameras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkShadowMapBakerPassLightCameras *tempr = (ap.IsBound() ?
      op->GetLightCameras() :
      op->vtkShadowMapBakerPass::GetLightCameras());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetNeedUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetNeedUpdate() :
      op->vtkShadowMapBakerPass::GetNeedUpdate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_SetUpToDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpToDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetUpToDate();
      }
    else
      {
      op->vtkShadowMapBakerPass::SetUpToDate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkShadowMapBakerPass_Methods[] = {
  {(char*)"GetClassName", PyvtkShadowMapBakerPass_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkShadowMapBakerPass_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkShadowMapBakerPass_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkShadowMapBakerPass\nC++: vtkShadowMapBakerPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkShadowMapBakerPass_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkShadowMapBakerPass\nC++: vtkShadowMapBakerPass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OCCLUDER", PyvtkShadowMapBakerPass_OCCLUDER, METH_VARARGS | METH_STATIC,
   (char*)"V.OCCLUDER() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *OCCLUDER()\n\nIf this key exists on the PropertyKeys of a prop, the prop is\nviewed as a light occluder (ie it casts shadows). This key is not\nmutually exclusive with the RECEIVER() key.\n"},
  {(char*)"RECEIVER", PyvtkShadowMapBakerPass_RECEIVER, METH_VARARGS | METH_STATIC,
   (char*)"V.RECEIVER() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *RECEIVER()\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkShadowMapBakerPass_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w)\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {(char*)"GetOpaquePass", PyvtkShadowMapBakerPass_GetOpaquePass, METH_VARARGS,
   (char*)"V.GetOpaquePass() -> vtkRenderPass\nC++: vtkRenderPass *GetOpaquePass()\n\nDelegate for rendering the opaque polygonal geometry. If it is\nNULL, nothing will be rendered and a warning will be emitted. It\nis usually set to a vtkCameraPass with a sequence of\nvtkLightPass/vtkOpaquePass. Initial value is a NULL pointer.\n"},
  {(char*)"SetOpaquePass", PyvtkShadowMapBakerPass_SetOpaquePass, METH_VARARGS,
   (char*)"V.SetOpaquePass(vtkRenderPass)\nC++: virtual void SetOpaquePass(vtkRenderPass *opaquePass)\n\nDelegate for rendering the opaque polygonal geometry. If it is\nNULL, nothing will be rendered and a warning will be emitted. It\nis usually set to a vtkCameraPass with a sequence of\nvtkLightPass/vtkOpaquePass. Initial value is a NULL pointer.\n"},
  {(char*)"GetCompositeZPass", PyvtkShadowMapBakerPass_GetCompositeZPass, METH_VARARGS,
   (char*)"V.GetCompositeZPass() -> vtkRenderPass\nC++: vtkRenderPass *GetCompositeZPass()\n\nDelegate for compositing of the shadow maps across processors. If\nit is NULL, there is no z compositing. It is usually set to a\nvtkCompositeZPass (Parallel package). Initial value is a NULL\npointer.\n"},
  {(char*)"SetCompositeZPass", PyvtkShadowMapBakerPass_SetCompositeZPass, METH_VARARGS,
   (char*)"V.SetCompositeZPass(vtkRenderPass)\nC++: virtual void SetCompositeZPass(vtkRenderPass *compositeZPass)\n\nDelegate for compositing of the shadow maps across processors. If\nit is NULL, there is no z compositing. It is usually set to a\nvtkCompositeZPass (Parallel package). Initial value is a NULL\npointer.\n"},
  {(char*)"SetResolution", PyvtkShadowMapBakerPass_SetResolution, METH_VARARGS,
   (char*)"V.SetResolution(int)\nC++: void SetResolution(unsigned int a)\n\nSet/Get the number of pixels in each dimension of the shadow maps\n(shadow maps are square). Initial value is 256. The greater the\nbetter. Resolution does not have to be a power-of-two value.\n"},
  {(char*)"GetResolution", PyvtkShadowMapBakerPass_GetResolution, METH_VARARGS,
   (char*)"V.GetResolution() -> int\nC++: unsigned int GetResolution()\n\nSet/Get the number of pixels in each dimension of the shadow maps\n(shadow maps are square). Initial value is 256. The greater the\nbetter. Resolution does not have to be a power-of-two value.\n"},
  {(char*)"SetPolygonOffsetFactor", PyvtkShadowMapBakerPass_SetPolygonOffsetFactor, METH_VARARGS,
   (char*)"V.SetPolygonOffsetFactor(float)\nC++: void SetPolygonOffsetFactor(float a)\n\nFactor used to scale the maximum depth slope of a polygon\n(definition from OpenGL 2.1 spec section 3.5.5 \"Depth Offset\"\npage 112). This is used during the creation the shadow maps (not\nduring mapping of the shadow maps onto the geometry) Play with\nthis value and PolygonOffsetUnits to solve self-shadowing. Valid\nvalues can be either positive or negative. Initial value is 1.1f\n(recommended by the nVidia presentation about Shadow Mapping by\nCass Everitt). 3.1f works well with the regression test.\n"},
  {(char*)"GetPolygonOffsetFactor", PyvtkShadowMapBakerPass_GetPolygonOffsetFactor, METH_VARARGS,
   (char*)"V.GetPolygonOffsetFactor() -> float\nC++: float GetPolygonOffsetFactor()\n\nFactor used to scale the maximum depth slope of a polygon\n(definition from OpenGL 2.1 spec section 3.5.5 \"Depth Offset\"\npage 112). This is used during the creation the shadow maps (not\nduring mapping of the shadow maps onto the geometry) Play with\nthis value and PolygonOffsetUnits to solve self-shadowing. Valid\nvalues can be either positive or negative. Initial value is 1.1f\n(recommended by the nVidia presentation about Shadow Mapping by\nCass Everitt). 3.1f works well with the regression test.\n"},
  {(char*)"SetPolygonOffsetUnits", PyvtkShadowMapBakerPass_SetPolygonOffsetUnits, METH_VARARGS,
   (char*)"V.SetPolygonOffsetUnits(float)\nC++: void SetPolygonOffsetUnits(float a)\n\nFactor used to scale an implementation dependent constant that\nrelates to the usable resolution of the depth buffer (definition\nfrom OpenGL 2.1 spec section 3.5.5 \"Depth Offset\" page 112). This\nis used during the creation the shadow maps (not during mapping\nof the shadow maps onto the geometry) Play with this value and\nPolygonOffsetFactor to solve self-shadowing. Valid values can be\neither positive or negative. Initial value is 4.0f (recommended\nby the nVidia presentation about Shadow Mapping by Cass Everitt).\n10.0f works well with the regression test.\n"},
  {(char*)"GetPolygonOffsetUnits", PyvtkShadowMapBakerPass_GetPolygonOffsetUnits, METH_VARARGS,
   (char*)"V.GetPolygonOffsetUnits() -> float\nC++: float GetPolygonOffsetUnits()\n\nFactor used to scale an implementation dependent constant that\nrelates to the usable resolution of the depth buffer (definition\nfrom OpenGL 2.1 spec section 3.5.5 \"Depth Offset\" page 112). This\nis used during the creation the shadow maps (not during mapping\nof the shadow maps onto the geometry) Play with this value and\nPolygonOffsetFactor to solve self-shadowing. Valid values can be\neither positive or negative. Initial value is 4.0f (recommended\nby the nVidia presentation about Shadow Mapping by Cass Everitt).\n10.0f works well with the regression test.\n"},
  {(char*)"GetHasShadows", PyvtkShadowMapBakerPass_GetHasShadows, METH_VARARGS,
   (char*)"V.GetHasShadows() -> bool\nC++: bool GetHasShadows()\n\nINTERNAL USE ONLY. Internally used by vtkShadowMapBakerPass and\nvtkShadowMapPass.\n\nTell if there is at least one shadow. Initial value is false.\n"},
  {(char*)"LightCreatesShadow", PyvtkShadowMapBakerPass_LightCreatesShadow, METH_VARARGS,
   (char*)"V.LightCreatesShadow(vtkLight) -> bool\nC++: bool LightCreatesShadow(vtkLight *l)\n\nINTERNAL USE ONLY. Internally used by vtkShadowMapBakerPass and\nvtkShadowMapPass.\n\nTell if the light `l' can create shadows. The light has to not be\na head light and to be directional or positional with an angle\nless than 180 degrees.\n\\pre l_exists: l!=0\n"},
  {(char*)"GetShadowMaps", PyvtkShadowMapBakerPass_GetShadowMaps, METH_VARARGS,
   (char*)"V.GetShadowMaps() -> vtkShadowMapBakerPassTextures\nC++: vtkShadowMapBakerPassTextures *GetShadowMaps()\n\nINTERNAL USE ONLY Internally used by vtkShadowMapBakerPass and\nvtkShadowMapPass.\n\nGive access to the baked shadow maps.\n"},
  {(char*)"GetLightCameras", PyvtkShadowMapBakerPass_GetLightCameras, METH_VARARGS,
   (char*)"V.GetLightCameras() -> vtkShadowMapBakerPassLightCameras\nC++: vtkShadowMapBakerPassLightCameras *GetLightCameras()\n\nINTERNAL USE ONLY. Internally used by vtkShadowMapBakerPass and\nvtkShadowMapPass.\n\nGive access the cameras builds from the ligths.\n"},
  {(char*)"GetNeedUpdate", PyvtkShadowMapBakerPass_GetNeedUpdate, METH_VARARGS,
   (char*)"V.GetNeedUpdate() -> bool\nC++: bool GetNeedUpdate()\n\nINTERNAL USE ONLY. Internally used by vtkShadowMapBakerPass and\nvtkShadowMapPass.\n\nDo the shadows need to be updated? Value changed by\nvtkShadowMapBakerPass and used by vtkShadowMapPass. Initial value\nis true.\n"},
  {(char*)"SetUpToDate", PyvtkShadowMapBakerPass_SetUpToDate, METH_VARARGS,
   (char*)"V.SetUpToDate()\nC++: void SetUpToDate()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkShadowMapBakerPass_StaticNew()
{
  return vtkShadowMapBakerPass::New();
}

PyObject *PyVTKClass_vtkShadowMapBakerPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkShadowMapBakerPass_StaticNew,
    PyvtkShadowMapBakerPass_Methods,
    "vtkShadowMapBakerPass", modulename,
    NULL, NULL,
    PyvtkShadowMapBakerPass_Doc(),
    PyVTKClass_vtkRenderPassNew(modulename));
  return cls;
}

const char **PyvtkShadowMapBakerPass_Doc()
{
  static const char *docstring[] = {
    "vtkShadowMapBakerPass - Implement a builder of shadow map pass.\n\n",
    "Superclass: vtkRenderPass\n\n",
    "Bake a list of shadow maps, once per spot light. It work in\nconjunction with the vtkShadowMapPass, which uses the shadow maps for\nrendering the opaque geometry (a technique to render hard shadows in\nhardware).\n\nThis pass expects an initialized depth buffer and color buffer.\nInitialized buffers means they have been cleared with farest z-value\nand background color/gradient/transparent color. An opaq",
    "ue pass may\nhave been performed right after the initialization.\n\nIts delegate is usually set to a vtkOpaquePass.\n\nImplementation:\n\nThe first pass of the algorithm is to generate a shadow map per light\n(depth map from the light point of view) by rendering the opaque\nobjects with the vtkShadowMapBakerPass::OCCLUDER property keys. The\nsecond pass is to render the opaque objects with the\nvtkShadowMap:",
    ":RECEIVER keys.\n\nSee Also:\n\nvtkRenderPass, vtkOpaquePass, vtkShadowMapPass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkShadowMapBakerPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkShadowMapBakerPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkShadowMapBakerPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

