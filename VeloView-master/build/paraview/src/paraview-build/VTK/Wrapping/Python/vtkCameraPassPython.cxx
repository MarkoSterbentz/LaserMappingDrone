// python wrapper for vtkCameraPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCameraPass.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCameraPass(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCameraPassNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRenderPassNew
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderPassNew
#endif

static const char **PyvtkCameraPass_Doc();


static PyObject *
PyvtkCameraPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPass *op = static_cast<vtkCameraPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCameraPass::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPass *op = static_cast<vtkCameraPass *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraPass::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPass *op = static_cast<vtkCameraPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCameraPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraPass::NewInstance());

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
PyvtkCameraPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCameraPass *tempr = vtkCameraPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPass *op = static_cast<vtkCameraPass *>(vp);

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
      op->vtkCameraPass::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraPass_GetDelegatePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelegatePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPass *op = static_cast<vtkCameraPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetDelegatePass() :
      op->vtkCameraPass::GetDelegatePass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraPass_SetDelegatePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelegatePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPass *op = static_cast<vtkCameraPass *>(vp);

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
      op->vtkCameraPass::SetDelegatePass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraPass_SetAspectRatioOverride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAspectRatioOverride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPass *op = static_cast<vtkCameraPass *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAspectRatioOverride(temp0);
      }
    else
      {
      op->vtkCameraPass::SetAspectRatioOverride(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraPass_GetAspectRatioOverride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAspectRatioOverride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPass *op = static_cast<vtkCameraPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAspectRatioOverride() :
      op->vtkCameraPass::GetAspectRatioOverride());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCameraPass_Methods[] = {
  {(char*)"GetClassName", PyvtkCameraPass_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCameraPass_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCameraPass_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCameraPass\nC++: vtkCameraPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCameraPass_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCameraPass\nC++: vtkCameraPass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkCameraPass_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w)\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {(char*)"GetDelegatePass", PyvtkCameraPass_GetDelegatePass, METH_VARARGS,
   (char*)"V.GetDelegatePass() -> vtkRenderPass\nC++: vtkRenderPass *GetDelegatePass()\n\nDelegate for rendering the geometry. If it is NULL, nothing will\nbe rendered and a warning will be emitted. It is usually set to a\nvtkSequencePass with a vtkLigthsPass and a list of passes for the\ngeometry. Initial value is a NULL pointer.\n"},
  {(char*)"SetDelegatePass", PyvtkCameraPass_SetDelegatePass, METH_VARARGS,
   (char*)"V.SetDelegatePass(vtkRenderPass)\nC++: virtual void SetDelegatePass(vtkRenderPass *delegatePass)\n\nDelegate for rendering the geometry. If it is NULL, nothing will\nbe rendered and a warning will be emitted. It is usually set to a\nvtkSequencePass with a vtkLigthsPass and a list of passes for the\ngeometry. Initial value is a NULL pointer.\n"},
  {(char*)"SetAspectRatioOverride", PyvtkCameraPass_SetAspectRatioOverride, METH_VARARGS,
   (char*)"V.SetAspectRatioOverride(float)\nC++: void SetAspectRatioOverride(double a)\n\nUsed to override the aspect ratio used when computing the\nprojection matrix. This is useful when rendering for\ntile-displays for example.\n"},
  {(char*)"GetAspectRatioOverride", PyvtkCameraPass_GetAspectRatioOverride, METH_VARARGS,
   (char*)"V.GetAspectRatioOverride() -> float\nC++: double GetAspectRatioOverride()\n\nUsed to override the aspect ratio used when computing the\nprojection matrix. This is useful when rendering for\ntile-displays for example.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCameraPass_StaticNew()
{
  return vtkCameraPass::New();
}

PyObject *PyVTKClass_vtkCameraPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCameraPass_StaticNew,
    PyvtkCameraPass_Methods,
    "vtkCameraPass", modulename,
    NULL, NULL,
    PyvtkCameraPass_Doc(),
    PyVTKClass_vtkRenderPassNew(modulename));
  return cls;
}

const char **PyvtkCameraPass_Doc()
{
  static const char *docstring[] = {
    "vtkCameraPass - Implement the camera render pass.\n\n",
    "Superclass: vtkRenderPass\n\n",
    "Render the camera.\n\nIt setups the projection and modelview matrices and can clear the\nbackground It calls its delegate once. After its delegate returns, it\nrestore the modelview matrix stack.\n\nIts delegate is usually set to a vtkSequencePass with a vtkLigthsPass\nand a list of passes for the geometry.\n\nSee Also:\n\nvtkRenderPass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCameraPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCameraPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCameraPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

