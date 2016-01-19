// python wrapper for vtkSIChartRepresentationProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIChartRepresentationProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIChartRepresentationProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIChartRepresentationProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSISourceProxyNew
extern "C" { PyObject *PyVTKClass_vtkSISourceProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSISourceProxyNew
#endif

static const char **PyvtkSIChartRepresentationProxy_Doc();


static PyObject *
PyvtkSIChartRepresentationProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIChartRepresentationProxy *op = static_cast<vtkSIChartRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIChartRepresentationProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIChartRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIChartRepresentationProxy *op = static_cast<vtkSIChartRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIChartRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIChartRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIChartRepresentationProxy *op = static_cast<vtkSIChartRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIChartRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIChartRepresentationProxy::NewInstance());

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
PyvtkSIChartRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIChartRepresentationProxy *tempr = vtkSIChartRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIChartRepresentationProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSIChartRepresentationProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIChartRepresentationProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIChartRepresentationProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIChartRepresentationProxy\nC++: vtkSIChartRepresentationProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIChartRepresentationProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIChartRepresentationProxy\nC++: vtkSIChartRepresentationProxy *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIChartRepresentationProxy_StaticNew()
{
  return vtkSIChartRepresentationProxy::New();
}

PyObject *PyVTKClass_vtkSIChartRepresentationProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIChartRepresentationProxy_StaticNew,
    PyvtkSIChartRepresentationProxy_Methods,
    "vtkSIChartRepresentationProxy", modulename,
    NULL, NULL,
    PyvtkSIChartRepresentationProxy_Doc(),
    PyVTKClass_vtkSISourceProxyNew(modulename));
  return cls;
}

const char **PyvtkSIChartRepresentationProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSIChartRepresentationProxy\n\n",
    "Superclass: vtkSISourceProxy\n\n",
    "vtkSIChartRepresentationProxy is the server-side helper for\nvtkSMChartRepresentationProxy. It initializes the\nvtkXYChartRepresentation instance with the\nvtkChartSelectionRepresentation instance sub-proxy, if any, during\nCreateVTKObjects().\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIChartRepresentationProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIChartRepresentationProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIChartRepresentationProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

