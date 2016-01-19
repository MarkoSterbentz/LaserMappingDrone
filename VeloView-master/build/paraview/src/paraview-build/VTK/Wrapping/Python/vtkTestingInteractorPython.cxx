// python wrapper for vtkTestingInteractor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTestingInteractor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTestingInteractor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTestingInteractorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRenderWindowInteractorNew
extern "C" { PyObject *PyVTKClass_vtkRenderWindowInteractorNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderWindowInteractorNew
#endif

static const char **PyvtkTestingInteractor_Doc();


static PyObject *
PyvtkTestingInteractor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingInteractor *op = static_cast<vtkTestingInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTestingInteractor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTestingInteractor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingInteractor *op = static_cast<vtkTestingInteractor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTestingInteractor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTestingInteractor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingInteractor *op = static_cast<vtkTestingInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTestingInteractor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTestingInteractor::NewInstance());

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
PyvtkTestingInteractor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTestingInteractor *tempr = vtkTestingInteractor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTestingInteractor_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingInteractor *op = static_cast<vtkTestingInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Start();
      }
    else
      {
      op->vtkTestingInteractor::Start();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTestingInteractor_Methods[] = {
  {(char*)"GetClassName", PyvtkTestingInteractor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nType and printing information.\n"},
  {(char*)"IsA", PyvtkTestingInteractor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nType and printing information.\n"},
  {(char*)"NewInstance", PyvtkTestingInteractor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTestingInteractor\nC++: vtkTestingInteractor *NewInstance()\n\nType and printing information.\n"},
  {(char*)"SafeDownCast", PyvtkTestingInteractor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTestingInteractor\nC++: vtkTestingInteractor *SafeDownCast(vtkObject* o)\n\nType and printing information.\n"},
  {(char*)"Start", PyvtkTestingInteractor_Start, METH_VARARGS,
   (char*)"V.Start()\nC++: virtual void Start()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTestingInteractor_StaticNew()
{
  return vtkTestingInteractor::New();
}

PyObject *PyVTKClass_vtkTestingInteractorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTestingInteractor_StaticNew,
    PyvtkTestingInteractor_Methods,
    "vtkTestingInteractor", modulename,
    NULL, NULL,
    PyvtkTestingInteractor_Doc(),
    PyVTKClass_vtkRenderWindowInteractorNew(modulename));
  return cls;
}

const char **PyvtkTestingInteractor_Doc()
{
  static const char *docstring[] = {
    "vtkTestingInteractor - A RenderWindowInteractor for testing\n\n",
    "Superclass: vtkRenderWindowInteractor\n\n",
    "Provides a Start() method that passes arguments to a test for\nregression testing and returns. This permits programs that run as\ntests to exit gracefully during the test run without needing\ninteraction.\n\nSee Also:\n\nvtkTestingObjectFactory\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTestingInteractor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTestingInteractorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTestingInteractor", o) != 0)
    {
    Py_DECREF(o);
    }

}

