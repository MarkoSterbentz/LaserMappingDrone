// python wrapper for vtkShadowMapPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkShadowMapPass.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkShadowMapPass(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkShadowMapPassNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRenderPassNew
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderPassNew
#endif

static const char **PyvtkShadowMapPass_Doc();


static PyObject *
PyvtkShadowMapPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkShadowMapPass::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkShadowMapPass::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkShadowMapPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkShadowMapPass::NewInstance());

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
PyvtkShadowMapPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkShadowMapPass *tempr = vtkShadowMapPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

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
      op->vtkShadowMapPass::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapPass_GetShadowMapBakerPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadowMapBakerPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkShadowMapBakerPass *tempr = (ap.IsBound() ?
      op->GetShadowMapBakerPass() :
      op->vtkShadowMapPass::GetShadowMapBakerPass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapPass_SetShadowMapBakerPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadowMapBakerPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  vtkShadowMapBakerPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShadowMapBakerPass"))
    {
    if (ap.IsBound())
      {
      op->SetShadowMapBakerPass(temp0);
      }
    else
      {
      op->vtkShadowMapPass::SetShadowMapBakerPass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapPass_GetOpaquePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpaquePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetOpaquePass() :
      op->vtkShadowMapPass::GetOpaquePass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShadowMapPass_SetOpaquePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpaquePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

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
      op->vtkShadowMapPass::SetOpaquePass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkShadowMapPass_Methods[] = {
  {(char*)"GetClassName", PyvtkShadowMapPass_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkShadowMapPass_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkShadowMapPass_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkShadowMapPass\nC++: vtkShadowMapPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkShadowMapPass_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkShadowMapPass\nC++: vtkShadowMapPass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkShadowMapPass_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w)\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {(char*)"GetShadowMapBakerPass", PyvtkShadowMapPass_GetShadowMapBakerPass, METH_VARARGS,
   (char*)"V.GetShadowMapBakerPass() -> vtkShadowMapBakerPass\nC++: vtkShadowMapBakerPass *GetShadowMapBakerPass()\n\nPass that generates the shadow maps. the vtkShadowMapPass will\nuse the Resolution ivar of this pass. Initial value is a NULL\npointer.\n"},
  {(char*)"SetShadowMapBakerPass", PyvtkShadowMapPass_SetShadowMapBakerPass, METH_VARARGS,
   (char*)"V.SetShadowMapBakerPass(vtkShadowMapBakerPass)\nC++: virtual void SetShadowMapBakerPass(\n    vtkShadowMapBakerPass *shadowMapBakerPass)\n\nPass that generates the shadow maps. the vtkShadowMapPass will\nuse the Resolution ivar of this pass. Initial value is a NULL\npointer.\n"},
  {(char*)"GetOpaquePass", PyvtkShadowMapPass_GetOpaquePass, METH_VARARGS,
   (char*)"V.GetOpaquePass() -> vtkRenderPass\nC++: vtkRenderPass *GetOpaquePass()\n\nPass that render the opaque geometry, with no camera pass\n(otherwise it does not work with Ice-T). Initial value is a NULL\npointer. Typically a sequence pass with a light pass and opaque\npass. This should be the Opaque pass of the vtkShadowMapBakerPass\nwithout the vtkCameraPass.\n"},
  {(char*)"SetOpaquePass", PyvtkShadowMapPass_SetOpaquePass, METH_VARARGS,
   (char*)"V.SetOpaquePass(vtkRenderPass)\nC++: virtual void SetOpaquePass(vtkRenderPass *opaquePass)\n\nPass that render the opaque geometry, with no camera pass\n(otherwise it does not work with Ice-T). Initial value is a NULL\npointer. Typically a sequence pass with a light pass and opaque\npass. This should be the Opaque pass of the vtkShadowMapBakerPass\nwithout the vtkCameraPass.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkShadowMapPass_StaticNew()
{
  return vtkShadowMapPass::New();
}

PyObject *PyVTKClass_vtkShadowMapPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkShadowMapPass_StaticNew,
    PyvtkShadowMapPass_Methods,
    "vtkShadowMapPass", modulename,
    NULL, NULL,
    PyvtkShadowMapPass_Doc(),
    PyVTKClass_vtkRenderPassNew(modulename));
  return cls;
}

const char **PyvtkShadowMapPass_Doc()
{
  static const char *docstring[] = {
    "vtkShadowMapPass - Implement a shadow mapping render pass.\n\n",
    "Superclass: vtkRenderPass\n\n",
    "Render the opaque polygonal geometry of a scene with shadow maps (a\ntechnique to render hard shadows in hardware).\n\nThis pass expects an initialized depth buffer and color buffer.\nInitialized buffers means they have been cleared with farest z-value\nand background color/gradient/transparent color. An opaque pass may\nhave been performed right after the initialization.\n\nIts delegate is usually set to",
    " a vtkOpaquePass.\n\nImplementation:\n\nThe first pass of the algorithm is to generate a shadow map per light\n(depth map from the light point of view) by rendering the opaque\nobjects with the OCCLUDER property keys. The second pass is to render\nthe opaque objects with the RECEIVER keys.\n\nSee Also:\n\nvtkRenderPass, vtkOpaquePass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkShadowMapPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkShadowMapPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkShadowMapPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

