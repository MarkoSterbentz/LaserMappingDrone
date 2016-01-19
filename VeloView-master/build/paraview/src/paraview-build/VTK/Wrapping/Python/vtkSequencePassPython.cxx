// python wrapper for vtkSequencePass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSequencePass.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSequencePass(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSequencePassNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRenderPassNew
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderPassNew
#endif

static const char **PyvtkSequencePass_Doc();


static PyObject *
PyvtkSequencePass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequencePass *op = static_cast<vtkSequencePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSequencePass::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSequencePass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequencePass *op = static_cast<vtkSequencePass *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSequencePass::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSequencePass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequencePass *op = static_cast<vtkSequencePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSequencePass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSequencePass::NewInstance());

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
PyvtkSequencePass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSequencePass *tempr = vtkSequencePass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSequencePass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequencePass *op = static_cast<vtkSequencePass *>(vp);

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
      op->vtkSequencePass::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSequencePass_GetPasses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPasses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequencePass *op = static_cast<vtkSequencePass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderPassCollection *tempr = (ap.IsBound() ?
      op->GetPasses() :
      op->vtkSequencePass::GetPasses());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSequencePass_SetPasses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPasses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequencePass *op = static_cast<vtkSequencePass *>(vp);

  vtkRenderPassCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPassCollection"))
    {
    if (ap.IsBound())
      {
      op->SetPasses(temp0);
      }
    else
      {
      op->vtkSequencePass::SetPasses(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSequencePass_Methods[] = {
  {(char*)"GetClassName", PyvtkSequencePass_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSequencePass_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSequencePass_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSequencePass\nC++: vtkSequencePass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSequencePass_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSequencePass\nC++: vtkSequencePass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkSequencePass_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *w)\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {(char*)"GetPasses", PyvtkSequencePass_GetPasses, METH_VARARGS,
   (char*)"V.GetPasses() -> vtkRenderPassCollection\nC++: vtkRenderPassCollection *GetPasses()\n\nThe ordered list of render passes to execute sequentially. If the\npointer is NULL or the list is empty, it is silently ignored.\nThere is no warning. Initial value is a NULL pointer.\n"},
  {(char*)"SetPasses", PyvtkSequencePass_SetPasses, METH_VARARGS,
   (char*)"V.SetPasses(vtkRenderPassCollection)\nC++: virtual void SetPasses(vtkRenderPassCollection *passes)\n\nThe ordered list of render passes to execute sequentially. If the\npointer is NULL or the list is empty, it is silently ignored.\nThere is no warning. Initial value is a NULL pointer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSequencePass_StaticNew()
{
  return vtkSequencePass::New();
}

PyObject *PyVTKClass_vtkSequencePassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSequencePass_StaticNew,
    PyvtkSequencePass_Methods,
    "vtkSequencePass", modulename,
    NULL, NULL,
    PyvtkSequencePass_Doc(),
    PyVTKClass_vtkRenderPassNew(modulename));
  return cls;
}

const char **PyvtkSequencePass_Doc()
{
  static const char *docstring[] = {
    "vtkSequencePass - Execute render passes sequentially.\n\n",
    "Superclass: vtkRenderPass\n\n",
    "vtkSequencePass executes a list of render passes sequentially. This\nclass allows to define a sequence of render passes at run time. The\nother solution to write a sequence of render passes is to write an\neffective subclass of vtkRenderPass.\n\nAs vtkSequencePass is a vtkRenderPass itself, it is possible to have\na hierarchy of render passes built at runtime.\n\nSee Also:\n\nvtkRenderPass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSequencePass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSequencePassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSequencePass", o) != 0)
    {
    Py_DECREF(o);
    }

}

