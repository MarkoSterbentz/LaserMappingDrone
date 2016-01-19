// python wrapper for vtkSITextSourceRepresentationProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSITextSourceRepresentationProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSITextSourceRepresentationProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSITextSourceRepresentationProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIProxyNew
extern "C" { PyObject *PyVTKClass_vtkSIProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIProxyNew
#endif

static const char **PyvtkSITextSourceRepresentationProxy_Doc();


static PyObject *
PyvtkSITextSourceRepresentationProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSITextSourceRepresentationProxy *op = static_cast<vtkSITextSourceRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSITextSourceRepresentationProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSITextSourceRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSITextSourceRepresentationProxy *op = static_cast<vtkSITextSourceRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSITextSourceRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSITextSourceRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSITextSourceRepresentationProxy *op = static_cast<vtkSITextSourceRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSITextSourceRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSITextSourceRepresentationProxy::NewInstance());

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
PyvtkSITextSourceRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSITextSourceRepresentationProxy *tempr = vtkSITextSourceRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSITextSourceRepresentationProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSITextSourceRepresentationProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSITextSourceRepresentationProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSITextSourceRepresentationProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSITextSourceRepresentationProxy\nC++: vtkSITextSourceRepresentationProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSITextSourceRepresentationProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSITextSourceRepresentationProxy\nC++: vtkSITextSourceRepresentationProxy *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSITextSourceRepresentationProxy_StaticNew()
{
  return vtkSITextSourceRepresentationProxy::New();
}

PyObject *PyVTKClass_vtkSITextSourceRepresentationProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSITextSourceRepresentationProxy_StaticNew,
    PyvtkSITextSourceRepresentationProxy_Methods,
    "vtkSITextSourceRepresentationProxy", modulename,
    NULL, NULL,
    PyvtkSITextSourceRepresentationProxy_Doc(),
    PyVTKClass_vtkSIProxyNew(modulename));
  return cls;
}

const char **PyvtkSITextSourceRepresentationProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSITextSourceRepresentationProxy\n\n",
    "Superclass: vtkSIProxy\n\n",
    "vtkSITextSourceRepresentationProxy is the proxy for (representations,\nTextSourceRepresentation). Merely overrides CreateVTKObjects to\nensure that the subproxies are passed to the\nvtkTextSourceRepresentation correctly.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSITextSourceRepresentationProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSITextSourceRepresentationProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSITextSourceRepresentationProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

