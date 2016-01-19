// python wrapper for vtkSMPWriterProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMPWriterProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMPWriterProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMPWriterProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMWriterProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMWriterProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMWriterProxyNew
#endif

static const char **PyvtkSMPWriterProxy_Doc();


static PyObject *
PyvtkSMPWriterProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPWriterProxy *op = static_cast<vtkSMPWriterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMPWriterProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPWriterProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPWriterProxy *op = static_cast<vtkSMPWriterProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPWriterProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPWriterProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPWriterProxy *op = static_cast<vtkSMPWriterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMPWriterProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPWriterProxy::NewInstance());

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
PyvtkSMPWriterProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMPWriterProxy *tempr = vtkSMPWriterProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMPWriterProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMPWriterProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMPWriterProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMPWriterProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMPWriterProxy\nC++: vtkSMPWriterProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMPWriterProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMPWriterProxy\nC++: vtkSMPWriterProxy *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMPWriterProxy_StaticNew()
{
  return vtkSMPWriterProxy::New();
}

PyObject *PyVTKClass_vtkSMPWriterProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMPWriterProxy_StaticNew,
    PyvtkSMPWriterProxy_Methods,
    "vtkSMPWriterProxy", modulename,
    NULL, NULL,
    PyvtkSMPWriterProxy_Doc(),
    PyVTKClass_vtkSMWriterProxyNew(modulename));
  return cls;
}

const char **PyvtkSMPWriterProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMPWriterProxy - proxy for a VTK writer that supports parallel \n\n",
    "Superclass: vtkSMWriterProxy\n\n",
    "vtkSMPWriterProxy is the proxy for all writers that can write in\nparallel. The only extra functionality provided by this class is that\nit sets up the piece information on the writer.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMPWriterProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMPWriterProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMPWriterProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

