// python wrapper for vtkSobelGradientMagnitudePass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSobelGradientMagnitudePass.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSobelGradientMagnitudePass(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSobelGradientMagnitudePassNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageProcessingPassNew
extern "C" { PyObject *PyVTKClass_vtkImageProcessingPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageProcessingPassNew
#endif

static const char **PyvtkSobelGradientMagnitudePass_Doc();


static PyObject *
PyvtkSobelGradientMagnitudePass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSobelGradientMagnitudePass *op = static_cast<vtkSobelGradientMagnitudePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSobelGradientMagnitudePass::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSobelGradientMagnitudePass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSobelGradientMagnitudePass *op = static_cast<vtkSobelGradientMagnitudePass *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSobelGradientMagnitudePass::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSobelGradientMagnitudePass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSobelGradientMagnitudePass *op = static_cast<vtkSobelGradientMagnitudePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSobelGradientMagnitudePass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSobelGradientMagnitudePass::NewInstance());

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
PyvtkSobelGradientMagnitudePass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSobelGradientMagnitudePass *tempr = vtkSobelGradientMagnitudePass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSobelGradientMagnitudePass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSobelGradientMagnitudePass *op = static_cast<vtkSobelGradientMagnitudePass *>(vp);

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
      op->vtkSobelGradientMagnitudePass::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSobelGradientMagnitudePass_Methods[] = {
  {(char*)"GetClassName", PyvtkSobelGradientMagnitudePass_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSobelGradientMagnitudePass_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSobelGradientMagnitudePass_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSobelGradientMagnitudePass\nC++: vtkSobelGradientMagnitudePass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSobelGradientMagnitudePass_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSobelGradientMagnitudePass\nC++: vtkSobelGradientMagnitudePass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkSobelGradientMagnitudePass_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w)\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSobelGradientMagnitudePass_StaticNew()
{
  return vtkSobelGradientMagnitudePass::New();
}

PyObject *PyVTKClass_vtkSobelGradientMagnitudePassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSobelGradientMagnitudePass_StaticNew,
    PyvtkSobelGradientMagnitudePass_Methods,
    "vtkSobelGradientMagnitudePass", modulename,
    NULL, NULL,
    PyvtkSobelGradientMagnitudePass_Doc(),
    PyVTKClass_vtkImageProcessingPassNew(modulename));
  return cls;
}

const char **PyvtkSobelGradientMagnitudePass_Doc()
{
  static const char *docstring[] = {
    "vtkSobelGradientMagnitudePass - Implement a post-processing edge\n\n",
    "Superclass: vtkImageProcessingPass\n\n",
    "Detect the edges of the image renderered by its delegate.\nEdge-detection uses a Sobel high-pass filter (3x3 kernel).\n\nThis pass expects an initialized depth buffer and color buffer.\nInitialized buffers means they have been cleared with farest z-value\nand background color/gradient/transparent color. An opaque pass may\nhave been performed right after the initialization.\n\nThe delegate is used once.\n\n",
    "Its delegate is usually set to a vtkCameraPass or to a\npost-processing pass.\n\nThis pass requires a OpenGL context that supports texture objects\n(TO), framebuffer objects (FBO) and GLSL. If not, it will emit an\nerror message and will render its delegate and return.\n\nImplementation:\n\nTo compute the gradient magnitude, the x and y components of the\ngradient (Gx and Gy) have to be computed first. Each",
    " computation of\nGx and Gy uses a separable filter. The first pass takes the image\nfrom the delegate as the single input texture. The first pass has two\noutputs, one for the first part of Gx, Gx1, result of a convolution\nwith (-1 0 1), one for the first part of Gy, Gy1, result of a\nconvolution with (1 2 1). The second pass has two inputs, Gx1 and\nGy1. Kernel (1 2 1)^T is applied to Gx1 and kernel (",
    "-1 0 1)^T is\napplied to Gx2. It gives the values for Gx and Gy. Thoses values are\nthen used to compute the magnitude of the gradient which is stored in\nthe render target. The gradient computation happens per component\n(R,G,B). A is arbitrarly set to 1 (full opacity).\n\n\\image html vtkSobelGradientMagnitudePassFigure.png\\image latex\nvtkSobelGradientMagnitudePassFigure.eps\n\nSee Also:\n\nvtkRenderPass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSobelGradientMagnitudePass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSobelGradientMagnitudePassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSobelGradientMagnitudePass", o) != 0)
    {
    Py_DECREF(o);
    }

}

