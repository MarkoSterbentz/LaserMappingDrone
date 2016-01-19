// python wrapper for vtkSIMetaReaderProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIMetaReaderProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIMetaReaderProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIMetaReaderProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSISourceProxyNew
extern "C" { PyObject *PyVTKClass_vtkSISourceProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSISourceProxyNew
#endif

static const char **PyvtkSIMetaReaderProxy_Doc();


static PyObject *
PyvtkSIMetaReaderProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIMetaReaderProxy *op = static_cast<vtkSIMetaReaderProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIMetaReaderProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIMetaReaderProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIMetaReaderProxy *op = static_cast<vtkSIMetaReaderProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIMetaReaderProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIMetaReaderProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIMetaReaderProxy *op = static_cast<vtkSIMetaReaderProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIMetaReaderProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIMetaReaderProxy::NewInstance());

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
PyvtkSIMetaReaderProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIMetaReaderProxy *tempr = vtkSIMetaReaderProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIMetaReaderProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSIMetaReaderProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIMetaReaderProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIMetaReaderProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIMetaReaderProxy\nC++: vtkSIMetaReaderProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIMetaReaderProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIMetaReaderProxy\nC++: vtkSIMetaReaderProxy *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIMetaReaderProxy_StaticNew()
{
  return vtkSIMetaReaderProxy::New();
}

PyObject *PyVTKClass_vtkSIMetaReaderProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIMetaReaderProxy_StaticNew,
    PyvtkSIMetaReaderProxy_Methods,
    "vtkSIMetaReaderProxy", modulename,
    NULL, NULL,
    PyvtkSIMetaReaderProxy_Doc(),
    PyVTKClass_vtkSISourceProxyNew(modulename));
  return cls;
}

const char **PyvtkSIMetaReaderProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSIMetaReaderProxy\n\n",
    "Superclass: vtkSISourceProxy\n\n",
    "vtkSISourceProxy is the server-side helper for a vtkSMSourceProxy. It\nadds support to handle various vtkAlgorithm specific Invoke requests\ncoming from the client. vtkSISourceProxy also inserts post-processing\nfilters for each output port from the vtkAlgorithm. These\npost-processing filters deal with things like parallelizing the data\netc.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIMetaReaderProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIMetaReaderProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIMetaReaderProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

