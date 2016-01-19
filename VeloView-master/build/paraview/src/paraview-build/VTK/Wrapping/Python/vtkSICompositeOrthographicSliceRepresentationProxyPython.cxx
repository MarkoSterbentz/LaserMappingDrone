// python wrapper for vtkSICompositeOrthographicSliceRepresentationProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSICompositeOrthographicSliceRepresentationProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSICompositeOrthographicSliceRepresentationProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSICompositeOrthographicSliceRepresentationProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIPVRepresentationProxyNew
extern "C" { PyObject *PyVTKClass_vtkSIPVRepresentationProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIPVRepresentationProxyNew
#endif

static const char **PyvtkSICompositeOrthographicSliceRepresentationProxy_Doc();


static PyObject *
PyvtkSICompositeOrthographicSliceRepresentationProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSICompositeOrthographicSliceRepresentationProxy *op = static_cast<vtkSICompositeOrthographicSliceRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSICompositeOrthographicSliceRepresentationProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSICompositeOrthographicSliceRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSICompositeOrthographicSliceRepresentationProxy *op = static_cast<vtkSICompositeOrthographicSliceRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSICompositeOrthographicSliceRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSICompositeOrthographicSliceRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSICompositeOrthographicSliceRepresentationProxy *op = static_cast<vtkSICompositeOrthographicSliceRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSICompositeOrthographicSliceRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSICompositeOrthographicSliceRepresentationProxy::NewInstance());

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
PyvtkSICompositeOrthographicSliceRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSICompositeOrthographicSliceRepresentationProxy *tempr = vtkSICompositeOrthographicSliceRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSICompositeOrthographicSliceRepresentationProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSICompositeOrthographicSliceRepresentationProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSICompositeOrthographicSliceRepresentationProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSICompositeOrthographicSliceRepresentationProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance()\n    -> vtkSICompositeOrthographicSliceRepresentationProxy\nC++: vtkSICompositeOrthographicSliceRepresentationProxy *NewInstance(\n    )\n\n"},
  {(char*)"SafeDownCast", PyvtkSICompositeOrthographicSliceRepresentationProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkSICompositeOrthographicSliceRepresentationProxy\nC++: vtkSICompositeOrthographicSliceRepresentationProxy *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSICompositeOrthographicSliceRepresentationProxy_StaticNew()
{
  return vtkSICompositeOrthographicSliceRepresentationProxy::New();
}

PyObject *PyVTKClass_vtkSICompositeOrthographicSliceRepresentationProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSICompositeOrthographicSliceRepresentationProxy_StaticNew,
    PyvtkSICompositeOrthographicSliceRepresentationProxy_Methods,
    "vtkSICompositeOrthographicSliceRepresentationProxy", modulename,
    NULL, NULL,
    PyvtkSICompositeOrthographicSliceRepresentationProxy_Doc(),
    PyVTKClass_vtkSIPVRepresentationProxyNew(modulename));
  return cls;
}

const char **PyvtkSICompositeOrthographicSliceRepresentationProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSICompositeOrthographicSliceRepresentationProxy\n\n",
    "Superclass: vtkSIPVRepresentationProxy\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSICompositeOrthographicSliceRepresentationProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSICompositeOrthographicSliceRepresentationProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSICompositeOrthographicSliceRepresentationProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

