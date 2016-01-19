// python wrapper for vtkSMDataSourceProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMDataSourceProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMDataSourceProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMDataSourceProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMSourceProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMSourceProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMSourceProxyNew
#endif

static const char **PyvtkSMDataSourceProxy_Doc();


static PyObject *
PyvtkSMDataSourceProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataSourceProxy *op = static_cast<vtkSMDataSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMDataSourceProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDataSourceProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataSourceProxy *op = static_cast<vtkSMDataSourceProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDataSourceProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDataSourceProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataSourceProxy *op = static_cast<vtkSMDataSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDataSourceProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDataSourceProxy::NewInstance());

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
PyvtkSMDataSourceProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMDataSourceProxy *tempr = vtkSMDataSourceProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDataSourceProxy_CopyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataSourceProxy *op = static_cast<vtkSMDataSourceProxy *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
    {
    if (ap.IsBound())
      {
      op->CopyData(temp0);
      }
    else
      {
      op->vtkSMDataSourceProxy::CopyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMDataSourceProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMDataSourceProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMDataSourceProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMDataSourceProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMDataSourceProxy\nC++: vtkSMDataSourceProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMDataSourceProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMDataSourceProxy\nC++: vtkSMDataSourceProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CopyData", PyvtkSMDataSourceProxy_CopyData, METH_VARARGS,
   (char*)"V.CopyData(vtkSMSourceProxy)\nC++: void CopyData(vtkSMSourceProxy *sourceProxy)\n\nCopies data from source proxy object to object represented by\nthis source proxy object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMDataSourceProxy_StaticNew()
{
  return vtkSMDataSourceProxy::New();
}

PyObject *PyVTKClass_vtkSMDataSourceProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMDataSourceProxy_StaticNew,
    PyvtkSMDataSourceProxy_Methods,
    "vtkSMDataSourceProxy", modulename,
    NULL, NULL,
    PyvtkSMDataSourceProxy_Doc(),
    PyVTKClass_vtkSMSourceProxyNew(modulename));
  return cls;
}

const char **PyvtkSMDataSourceProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMDataSourceProxy - \"data-centric\" proxy for VTK source on a server\n\n",
    "Superclass: vtkSMSourceProxy\n\n",
    "vtkSMDataSourceProxy adds a CopyData method to the vtkSMSourceProxy\nAPI to give a \"data-centric\" behaviour; the output data of the input\nvtkSMSourceProxy (to CopyData) is copied by the VTK object managed by\nthe vtkSMDataSourceProxy.\n\nSee Also:\n\nvtkSMSourceProxy\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMDataSourceProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMDataSourceProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMDataSourceProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

