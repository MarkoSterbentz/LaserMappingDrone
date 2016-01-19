// python wrapper for vtkImageProcessingPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageProcessingPass.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageProcessingPass(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageProcessingPassNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRenderPassNew
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderPassNew
#endif

static const char **PyvtkImageProcessingPass_Doc();


static PyObject *
PyvtkImageProcessingPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageProcessingPass::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProcessingPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageProcessingPass::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProcessingPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageProcessingPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageProcessingPass::NewInstance());

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
PyvtkImageProcessingPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageProcessingPass *tempr = vtkImageProcessingPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProcessingPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

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
      op->vtkImageProcessingPass::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageProcessingPass_GetDelegatePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelegatePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetDelegatePass() :
      op->vtkImageProcessingPass::GetDelegatePass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageProcessingPass_SetDelegatePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelegatePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProcessingPass *op = static_cast<vtkImageProcessingPass *>(vp);

  vtkRenderPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
    {
    if (ap.IsBound())
      {
      op->SetDelegatePass(temp0);
      }
    else
      {
      op->vtkImageProcessingPass::SetDelegatePass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageProcessingPass_Methods[] = {
  {(char*)"GetClassName", PyvtkImageProcessingPass_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageProcessingPass_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageProcessingPass_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageProcessingPass\nC++: vtkImageProcessingPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageProcessingPass_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageProcessingPass\nC++: vtkImageProcessingPass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkImageProcessingPass_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w)\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {(char*)"GetDelegatePass", PyvtkImageProcessingPass_GetDelegatePass, METH_VARARGS,
   (char*)"V.GetDelegatePass() -> vtkRenderPass\nC++: vtkRenderPass *GetDelegatePass()\n\nDelegate for rendering the image to be processed. If it is NULL,\nnothing will be rendered and a warning will be emitted. It is\nusually set to a vtkCameraPass or to a post-processing pass.\nInitial value is a NULL pointer.\n"},
  {(char*)"SetDelegatePass", PyvtkImageProcessingPass_SetDelegatePass, METH_VARARGS,
   (char*)"V.SetDelegatePass(vtkRenderPass)\nC++: virtual void SetDelegatePass(vtkRenderPass *delegatePass)\n\nDelegate for rendering the image to be processed. If it is NULL,\nnothing will be rendered and a warning will be emitted. It is\nusually set to a vtkCameraPass or to a post-processing pass.\nInitial value is a NULL pointer.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageProcessingPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageProcessingPass_Methods,
    "vtkImageProcessingPass", modulename,
    NULL, NULL,
    PyvtkImageProcessingPass_Doc(),
    PyVTKClass_vtkRenderPassNew(modulename));
  return cls;
}

const char **PyvtkImageProcessingPass_Doc()
{
  static const char *docstring[] = {
    "vtkImageProcessingPass - Convenient class for post-processing passes.\n\n",
    "Superclass: vtkRenderPass\n\n",
    "Abstract class with some convenient methods frequently used in\nsubclasses.\n\nImplementation:\n\nSee Also:\n\nvtkRenderPass vtkGaussianBlurPass vtkSobelGradientMagnitudePass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageProcessingPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageProcessingPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageProcessingPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

