// python wrapper for vtkSIUniformGridVolumeRepresentationProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIUniformGridVolumeRepresentationProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIUniformGridVolumeRepresentationProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIUniformGridVolumeRepresentationProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIProxyNew
extern "C" { PyObject *PyVTKClass_vtkSIProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIProxyNew
#endif

static const char **PyvtkSIUniformGridVolumeRepresentationProxy_Doc();


static PyObject *
PyvtkSIUniformGridVolumeRepresentationProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIUniformGridVolumeRepresentationProxy *op = static_cast<vtkSIUniformGridVolumeRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIUniformGridVolumeRepresentationProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIUniformGridVolumeRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIUniformGridVolumeRepresentationProxy *op = static_cast<vtkSIUniformGridVolumeRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIUniformGridVolumeRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIUniformGridVolumeRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIUniformGridVolumeRepresentationProxy *op = static_cast<vtkSIUniformGridVolumeRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIUniformGridVolumeRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIUniformGridVolumeRepresentationProxy::NewInstance());

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
PyvtkSIUniformGridVolumeRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIUniformGridVolumeRepresentationProxy *tempr = vtkSIUniformGridVolumeRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIUniformGridVolumeRepresentationProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSIUniformGridVolumeRepresentationProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIUniformGridVolumeRepresentationProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIUniformGridVolumeRepresentationProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIUniformGridVolumeRepresentationProxy\nC++: vtkSIUniformGridVolumeRepresentationProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIUniformGridVolumeRepresentationProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkSIUniformGridVolumeRepresentationProxy\nC++: vtkSIUniformGridVolumeRepresentationProxy *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIUniformGridVolumeRepresentationProxy_StaticNew()
{
  return vtkSIUniformGridVolumeRepresentationProxy::New();
}

PyObject *PyVTKClass_vtkSIUniformGridVolumeRepresentationProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIUniformGridVolumeRepresentationProxy_StaticNew,
    PyvtkSIUniformGridVolumeRepresentationProxy_Methods,
    "vtkSIUniformGridVolumeRepresentationProxy", modulename,
    NULL, NULL,
    PyvtkSIUniformGridVolumeRepresentationProxy_Doc(),
    PyVTKClass_vtkSIProxyNew(modulename));
  return cls;
}

const char **PyvtkSIUniformGridVolumeRepresentationProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSIUniformGridVolumeRepresentationProxy - representation that can\nbe used to\n\n",
    "Superclass: vtkSIProxy\n\n",
    "vtkSIUniformGridVolumeRepresentationProxy is a concrete\nrepresentation that can be used to render the uniform grid volume in\na vtkSMRenderViewProxy. It supports rendering the uniform grid volume\ndata.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIUniformGridVolumeRepresentationProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIUniformGridVolumeRepresentationProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIUniformGridVolumeRepresentationProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

