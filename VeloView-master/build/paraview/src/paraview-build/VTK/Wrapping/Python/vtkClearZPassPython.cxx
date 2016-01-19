// python wrapper for vtkClearZPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkClearZPass.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkClearZPass(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkClearZPassNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRenderPassNew
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderPassNew
#endif

static const char **PyvtkClearZPass_Doc();


static PyObject *
PyvtkClearZPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearZPass *op = static_cast<vtkClearZPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkClearZPass::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClearZPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearZPass *op = static_cast<vtkClearZPass *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClearZPass::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClearZPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearZPass *op = static_cast<vtkClearZPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkClearZPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClearZPass::NewInstance());

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
PyvtkClearZPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkClearZPass *tempr = vtkClearZPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClearZPass_SetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearZPass *op = static_cast<vtkClearZPass *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepth(temp0);
      }
    else
      {
      op->vtkClearZPass::SetDepth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClearZPass_GetDepthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearZPass *op = static_cast<vtkClearZPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDepthMinValue() :
      op->vtkClearZPass::GetDepthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClearZPass_GetDepthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearZPass *op = static_cast<vtkClearZPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDepthMaxValue() :
      op->vtkClearZPass::GetDepthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClearZPass_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearZPass *op = static_cast<vtkClearZPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDepth() :
      op->vtkClearZPass::GetDepth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkClearZPass_Methods[] = {
  {(char*)"GetClassName", PyvtkClearZPass_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkClearZPass_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkClearZPass_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkClearZPass\nC++: vtkClearZPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkClearZPass_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkClearZPass\nC++: vtkClearZPass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDepth", PyvtkClearZPass_SetDepth, METH_VARARGS,
   (char*)"V.SetDepth(float)\nC++: void SetDepth(double)\n\nSet/Get the depth value. Initial value is 1.0 (farest).\n"},
  {(char*)"GetDepthMinValue", PyvtkClearZPass_GetDepthMinValue, METH_VARARGS,
   (char*)"V.GetDepthMinValue() -> float\nC++: double GetDepthMinValue()\n\nSet/Get the depth value. Initial value is 1.0 (farest).\n"},
  {(char*)"GetDepthMaxValue", PyvtkClearZPass_GetDepthMaxValue, METH_VARARGS,
   (char*)"V.GetDepthMaxValue() -> float\nC++: double GetDepthMaxValue()\n\nSet/Get the depth value. Initial value is 1.0 (farest).\n"},
  {(char*)"GetDepth", PyvtkClearZPass_GetDepth, METH_VARARGS,
   (char*)"V.GetDepth() -> float\nC++: double GetDepth()\n\nSet/Get the depth value. Initial value is 1.0 (farest).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkClearZPass_StaticNew()
{
  return vtkClearZPass::New();
}

PyObject *PyVTKClass_vtkClearZPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkClearZPass_StaticNew,
    PyvtkClearZPass_Methods,
    "vtkClearZPass", modulename,
    NULL, NULL,
    PyvtkClearZPass_Doc(),
    PyVTKClass_vtkRenderPassNew(modulename));
  return cls;
}

const char **PyvtkClearZPass_Doc()
{
  static const char *docstring[] = {
    "vtkClearZPass - Clear the depth buffer with a given value.\n\n",
    "Superclass: vtkRenderPass\n\n",
    "Clear the depth buffer with a given value.\n\nSee Also:\n\nvtkRenderPass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkClearZPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkClearZPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkClearZPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

