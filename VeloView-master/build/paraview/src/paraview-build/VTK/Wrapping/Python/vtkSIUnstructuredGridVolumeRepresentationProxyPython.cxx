// python wrapper for vtkSIUnstructuredGridVolumeRepresentationProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIUnstructuredGridVolumeRepresentationProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIUnstructuredGridVolumeRepresentationProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIUnstructuredGridVolumeRepresentationProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIProxyNew
extern "C" { PyObject *PyVTKClass_vtkSIProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIProxyNew
#endif

static const char **PyvtkSIUnstructuredGridVolumeRepresentationProxy_Doc();


static PyObject *
PyvtkSIUnstructuredGridVolumeRepresentationProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIUnstructuredGridVolumeRepresentationProxy *op = static_cast<vtkSIUnstructuredGridVolumeRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIUnstructuredGridVolumeRepresentationProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIUnstructuredGridVolumeRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIUnstructuredGridVolumeRepresentationProxy *op = static_cast<vtkSIUnstructuredGridVolumeRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIUnstructuredGridVolumeRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIUnstructuredGridVolumeRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIUnstructuredGridVolumeRepresentationProxy *op = static_cast<vtkSIUnstructuredGridVolumeRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIUnstructuredGridVolumeRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIUnstructuredGridVolumeRepresentationProxy::NewInstance());

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
PyvtkSIUnstructuredGridVolumeRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIUnstructuredGridVolumeRepresentationProxy *tempr = vtkSIUnstructuredGridVolumeRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIUnstructuredGridVolumeRepresentationProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSIUnstructuredGridVolumeRepresentationProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIUnstructuredGridVolumeRepresentationProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIUnstructuredGridVolumeRepresentationProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIUnstructuredGridVolumeRepresentationProxy\nC++: vtkSIUnstructuredGridVolumeRepresentationProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIUnstructuredGridVolumeRepresentationProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkSIUnstructuredGridVolumeRepresentationProxy\nC++: vtkSIUnstructuredGridVolumeRepresentationProxy *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIUnstructuredGridVolumeRepresentationProxy_StaticNew()
{
  return vtkSIUnstructuredGridVolumeRepresentationProxy::New();
}

PyObject *PyVTKClass_vtkSIUnstructuredGridVolumeRepresentationProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIUnstructuredGridVolumeRepresentationProxy_StaticNew,
    PyvtkSIUnstructuredGridVolumeRepresentationProxy_Methods,
    "vtkSIUnstructuredGridVolumeRepresentationProxy", modulename,
    NULL, NULL,
    PyvtkSIUnstructuredGridVolumeRepresentationProxy_Doc(),
    PyVTKClass_vtkSIProxyNew(modulename));
  return cls;
}

const char **PyvtkSIUnstructuredGridVolumeRepresentationProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSIUnstructuredGridVolumeRepresentationProxy - representation that\ncan be used to\n\n",
    "Superclass: vtkSIProxy\n\n",
    "vtkSIUnstructuredGridVolumeRepresentationProxy is a concrete\nrepresentation that can be used to render the unstructured grid\nvolume in a vtkSIRenderViewProxy.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIUnstructuredGridVolumeRepresentationProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIUnstructuredGridVolumeRepresentationProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIUnstructuredGridVolumeRepresentationProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

