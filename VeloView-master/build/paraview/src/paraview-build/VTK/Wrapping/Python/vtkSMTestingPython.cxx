// python wrapper for vtkSMTesting
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMTesting.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMTesting(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMTestingNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMTesting_Doc();


static PyObject *
PyvtkSMTesting_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTesting *op = static_cast<vtkSMTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMTesting::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTesting_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTesting *op = static_cast<vtkSMTesting *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTesting::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTesting_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTesting *op = static_cast<vtkSMTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMTesting *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTesting::NewInstance());

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
PyvtkSMTesting_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMTesting *tempr = vtkSMTesting::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTesting_SetViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTesting *op = static_cast<vtkSMTesting *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
    {
    if (ap.IsBound())
      {
      op->SetViewProxy(temp0);
      }
    else
      {
      op->vtkSMTesting::SetViewProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMTesting_SetRenderViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTesting *op = static_cast<vtkSMTesting *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
    {
    if (ap.IsBound())
      {
      op->SetRenderViewProxy(temp0);
      }
    else
      {
      op->vtkSMTesting::SetRenderViewProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMTesting_AddArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTesting *op = static_cast<vtkSMTesting *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddArgument(temp0);
      }
    else
      {
      op->vtkSMTesting::AddArgument(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMTesting_RegressionTest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegressionTest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTesting *op = static_cast<vtkSMTesting *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->RegressionTest(temp0) :
      op->vtkSMTesting::RegressionTest(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMTesting_Methods[] = {
  {(char*)"GetClassName", PyvtkSMTesting_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMTesting_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMTesting_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMTesting\nC++: vtkSMTesting *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMTesting_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMTesting\nC++: vtkSMTesting *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetViewProxy", PyvtkSMTesting_SetViewProxy, METH_VARARGS,
   (char*)"V.SetViewProxy(vtkSMViewProxy)\nC++: void SetViewProxy(vtkSMViewProxy *view)\n\nSet/get the render module proxy.\n"},
  {(char*)"SetRenderViewProxy", PyvtkSMTesting_SetRenderViewProxy, METH_VARARGS,
   (char*)"V.SetRenderViewProxy(vtkSMViewProxy)\nC++: void SetRenderViewProxy(vtkSMViewProxy *proxy)\n\nAPI for backwards compatibility. Simply calls SetViewProxy(..).\n"},
  {(char*)"AddArgument", PyvtkSMTesting_AddArgument, METH_VARARGS,
   (char*)"V.AddArgument(string)\nC++: virtual void AddArgument(const char *arg)\n\nAdd argument\n"},
  {(char*)"RegressionTest", PyvtkSMTesting_RegressionTest, METH_VARARGS,
   (char*)"V.RegressionTest(float) -> int\nC++: virtual int RegressionTest(float thresh)\n\nPerform the actual test.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMTesting_StaticNew()
{
  return vtkSMTesting::New();
}

PyObject *PyVTKClass_vtkSMTestingNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMTesting_StaticNew,
    PyvtkSMTesting_Methods,
    "vtkSMTesting", modulename,
    NULL, NULL,
    PyvtkSMTesting_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMTesting_Doc()
{
  static const char *docstring[] = {
    "vtkSMTesting - vtkTesting adaptor for Server Manager.\n\n",
    "Superclass: vtkSMObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMTesting(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMTestingNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMTesting", o) != 0)
    {
    Py_DECREF(o);
    }

}

