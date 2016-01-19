// python wrapper for vtkDepthPeelingPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDepthPeelingPass.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDepthPeelingPass(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDepthPeelingPassNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRenderPassNew
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderPassNew
#endif

static const char **PyvtkDepthPeelingPass_Doc();


static PyObject *
PyvtkDepthPeelingPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDepthPeelingPass::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDepthPeelingPass::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDepthPeelingPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDepthPeelingPass::NewInstance());

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
PyvtkDepthPeelingPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDepthPeelingPass *tempr = vtkDepthPeelingPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

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
      op->vtkDepthPeelingPass::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_GetTranslucentPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslucentPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetTranslucentPass() :
      op->vtkDepthPeelingPass::GetTranslucentPass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_SetTranslucentPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslucentPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  vtkRenderPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
    {
    if (ap.IsBound())
      {
      op->SetTranslucentPass(temp0);
      }
    else
      {
      op->vtkDepthPeelingPass::SetTranslucentPass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_SetOcclusionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOcclusionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOcclusionRatio(temp0);
      }
    else
      {
      op->vtkDepthPeelingPass::SetOcclusionRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_GetOcclusionRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOcclusionRatioMinValue() :
      op->vtkDepthPeelingPass::GetOcclusionRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_GetOcclusionRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOcclusionRatioMaxValue() :
      op->vtkDepthPeelingPass::GetOcclusionRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_GetOcclusionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOcclusionRatio() :
      op->vtkDepthPeelingPass::GetOcclusionRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_SetMaximumNumberOfPeels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPeels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfPeels(temp0);
      }
    else
      {
      op->vtkDepthPeelingPass::SetMaximumNumberOfPeels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_GetMaximumNumberOfPeels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPeels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPeels() :
      op->vtkDepthPeelingPass::GetMaximumNumberOfPeels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_GetLastRenderingUsedDepthPeeling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRenderingUsedDepthPeeling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLastRenderingUsedDepthPeeling() :
      op->vtkDepthPeelingPass::GetLastRenderingUsedDepthPeeling());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDepthPeelingPass_Methods[] = {
  {(char*)"GetClassName", PyvtkDepthPeelingPass_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDepthPeelingPass_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDepthPeelingPass_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDepthPeelingPass\nC++: vtkDepthPeelingPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDepthPeelingPass_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDepthPeelingPass\nC++: vtkDepthPeelingPass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkDepthPeelingPass_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w)\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {(char*)"GetTranslucentPass", PyvtkDepthPeelingPass_GetTranslucentPass, METH_VARARGS,
   (char*)"V.GetTranslucentPass() -> vtkRenderPass\nC++: vtkRenderPass *GetTranslucentPass()\n\nDelegate for rendering the translucent polygonal geometry. If it\nis NULL, nothing will be rendered and a warning will be emitted.\nIt is usually set to a vtkTranslucentPass. Initial value is a\nNULL pointer.\n"},
  {(char*)"SetTranslucentPass", PyvtkDepthPeelingPass_SetTranslucentPass, METH_VARARGS,
   (char*)"V.SetTranslucentPass(vtkRenderPass)\nC++: virtual void SetTranslucentPass(\n    vtkRenderPass *translucentPass)\n\nDelegate for rendering the translucent polygonal geometry. If it\nis NULL, nothing will be rendered and a warning will be emitted.\nIt is usually set to a vtkTranslucentPass. Initial value is a\nNULL pointer.\n"},
  {(char*)"SetOcclusionRatio", PyvtkDepthPeelingPass_SetOcclusionRatio, METH_VARARGS,
   (char*)"V.SetOcclusionRatio(float)\nC++: void SetOcclusionRatio(double)\n\nIn case of use of depth peeling technique for rendering\ntranslucent material, define the threshold under which the\nalgorithm stops to iterate over peel layers. This is the ratio of\nthe number of pixels that have been touched by the last layer\nover the total number of pixels of the viewport area. Initial\nvalue is 0.0, meaning rendering have to be exact. Greater values\nmay speed-up the rendering with small impact on the quality.\n"},
  {(char*)"GetOcclusionRatioMinValue", PyvtkDepthPeelingPass_GetOcclusionRatioMinValue, METH_VARARGS,
   (char*)"V.GetOcclusionRatioMinValue() -> float\nC++: double GetOcclusionRatioMinValue()\n\nIn case of use of depth peeling technique for rendering\ntranslucent material, define the threshold under which the\nalgorithm stops to iterate over peel layers. This is the ratio of\nthe number of pixels that have been touched by the last layer\nover the total number of pixels of the viewport area. Initial\nvalue is 0.0, meaning rendering have to be exact. Greater values\nmay speed-up the rendering with small impact on the quality.\n"},
  {(char*)"GetOcclusionRatioMaxValue", PyvtkDepthPeelingPass_GetOcclusionRatioMaxValue, METH_VARARGS,
   (char*)"V.GetOcclusionRatioMaxValue() -> float\nC++: double GetOcclusionRatioMaxValue()\n\nIn case of use of depth peeling technique for rendering\ntranslucent material, define the threshold under which the\nalgorithm stops to iterate over peel layers. This is the ratio of\nthe number of pixels that have been touched by the last layer\nover the total number of pixels of the viewport area. Initial\nvalue is 0.0, meaning rendering have to be exact. Greater values\nmay speed-up the rendering with small impact on the quality.\n"},
  {(char*)"GetOcclusionRatio", PyvtkDepthPeelingPass_GetOcclusionRatio, METH_VARARGS,
   (char*)"V.GetOcclusionRatio() -> float\nC++: double GetOcclusionRatio()\n\nIn case of use of depth peeling technique for rendering\ntranslucent material, define the threshold under which the\nalgorithm stops to iterate over peel layers. This is the ratio of\nthe number of pixels that have been touched by the last layer\nover the total number of pixels of the viewport area. Initial\nvalue is 0.0, meaning rendering have to be exact. Greater values\nmay speed-up the rendering with small impact on the quality.\n"},
  {(char*)"SetMaximumNumberOfPeels", PyvtkDepthPeelingPass_SetMaximumNumberOfPeels, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfPeels(int)\nC++: void SetMaximumNumberOfPeels(int a)\n\nIn case of depth peeling, define the maximum number of peeling\nlayers. Initial value is 4. A special value of 0 means no maximum\nlimit. It has to be a positive value.\n"},
  {(char*)"GetMaximumNumberOfPeels", PyvtkDepthPeelingPass_GetMaximumNumberOfPeels, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfPeels() -> int\nC++: int GetMaximumNumberOfPeels()\n\nIn case of depth peeling, define the maximum number of peeling\nlayers. Initial value is 4. A special value of 0 means no maximum\nlimit. It has to be a positive value.\n"},
  {(char*)"GetLastRenderingUsedDepthPeeling", PyvtkDepthPeelingPass_GetLastRenderingUsedDepthPeeling, METH_VARARGS,
   (char*)"V.GetLastRenderingUsedDepthPeeling() -> bool\nC++: bool GetLastRenderingUsedDepthPeeling()\n\nTells if the last time this pass was executed, the depth peeling\nalgorithm was actually used. Initial value is false.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDepthPeelingPass_StaticNew()
{
  return vtkDepthPeelingPass::New();
}

PyObject *PyVTKClass_vtkDepthPeelingPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDepthPeelingPass_StaticNew,
    PyvtkDepthPeelingPass_Methods,
    "vtkDepthPeelingPass", modulename,
    NULL, NULL,
    PyvtkDepthPeelingPass_Doc(),
    PyVTKClass_vtkRenderPassNew(modulename));
  return cls;
}

const char **PyvtkDepthPeelingPass_Doc()
{
  static const char *docstring[] = {
    "vtkDepthPeelingPass - Implement an Order Independent Transparency\n\n",
    "Superclass: vtkRenderPass\n\n",
    "Render the translucent polygonal geometry of a scene without sorting\npolygons in the view direction.\n\nThis pass expects an initialized depth buffer and color buffer.\nInitialized buffers means they have been cleared with farest z-value\nand background color/gradient/transparent color. An opaque pass may\nhave been performed right after the initialization.\n\nThe depth peeling algorithm works by renderi",
    "ng the translucent\npolygonal geometry multiple times (once for each peel). The actually\nrendering of the translucent polygonal geometry is performed by its\ndelegate TranslucentPass. This delegate is therefore used multiple\ntimes.\n\nIts delegate is usually set to a vtkTranslucentPass.\n\nSee Also:\n\nvtkRenderPass, vtkTranslucentPass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDepthPeelingPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDepthPeelingPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDepthPeelingPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

