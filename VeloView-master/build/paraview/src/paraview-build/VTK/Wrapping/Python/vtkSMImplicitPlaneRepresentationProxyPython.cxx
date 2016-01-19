// python wrapper for vtkSMImplicitPlaneRepresentationProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMImplicitPlaneRepresentationProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMImplicitPlaneRepresentationProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMImplicitPlaneRepresentationProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMWidgetRepresentationProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMWidgetRepresentationProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMWidgetRepresentationProxyNew
#endif

static const char **PyvtkSMImplicitPlaneRepresentationProxy_Doc();


static PyObject *
PyvtkSMImplicitPlaneRepresentationProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMImplicitPlaneRepresentationProxy *op = static_cast<vtkSMImplicitPlaneRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMImplicitPlaneRepresentationProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMImplicitPlaneRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMImplicitPlaneRepresentationProxy *op = static_cast<vtkSMImplicitPlaneRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMImplicitPlaneRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMImplicitPlaneRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMImplicitPlaneRepresentationProxy *op = static_cast<vtkSMImplicitPlaneRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMImplicitPlaneRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMImplicitPlaneRepresentationProxy::NewInstance());

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
PyvtkSMImplicitPlaneRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMImplicitPlaneRepresentationProxy *tempr = vtkSMImplicitPlaneRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMImplicitPlaneRepresentationProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMImplicitPlaneRepresentationProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMImplicitPlaneRepresentationProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMImplicitPlaneRepresentationProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMImplicitPlaneRepresentationProxy\nC++: vtkSMImplicitPlaneRepresentationProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMImplicitPlaneRepresentationProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMImplicitPlaneRepresentationProxy\nC++: vtkSMImplicitPlaneRepresentationProxy *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMImplicitPlaneRepresentationProxy_StaticNew()
{
  return vtkSMImplicitPlaneRepresentationProxy::New();
}

PyObject *PyVTKClass_vtkSMImplicitPlaneRepresentationProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMImplicitPlaneRepresentationProxy_StaticNew,
    PyvtkSMImplicitPlaneRepresentationProxy_Methods,
    "vtkSMImplicitPlaneRepresentationProxy", modulename,
    NULL, NULL,
    PyvtkSMImplicitPlaneRepresentationProxy_Doc(),
    PyVTKClass_vtkSMWidgetRepresentationProxyNew(modulename));
  return cls;
}

const char **PyvtkSMImplicitPlaneRepresentationProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMImplicitPlaneRepresentationProxy - proxy for a implicit plane\nrepresentation\n\n",
    "Superclass: vtkSMWidgetRepresentationProxy\n\n",
    "Specialized proxy for implicit planes. Overrides the default\nappearance of VTK implicit plane representation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMImplicitPlaneRepresentationProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMImplicitPlaneRepresentationProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMImplicitPlaneRepresentationProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

