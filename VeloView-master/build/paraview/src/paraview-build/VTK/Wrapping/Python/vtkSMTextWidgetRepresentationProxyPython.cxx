// python wrapper for vtkSMTextWidgetRepresentationProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMTextWidgetRepresentationProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMTextWidgetRepresentationProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMTextWidgetRepresentationProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMNewWidgetRepresentationProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMNewWidgetRepresentationProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMNewWidgetRepresentationProxyNew
#endif

static const char **PyvtkSMTextWidgetRepresentationProxy_Doc();


static PyObject *
PyvtkSMTextWidgetRepresentationProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTextWidgetRepresentationProxy *op = static_cast<vtkSMTextWidgetRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMTextWidgetRepresentationProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTextWidgetRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTextWidgetRepresentationProxy *op = static_cast<vtkSMTextWidgetRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTextWidgetRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTextWidgetRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTextWidgetRepresentationProxy *op = static_cast<vtkSMTextWidgetRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMTextWidgetRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTextWidgetRepresentationProxy::NewInstance());

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
PyvtkSMTextWidgetRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMTextWidgetRepresentationProxy *tempr = vtkSMTextWidgetRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMTextWidgetRepresentationProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMTextWidgetRepresentationProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMTextWidgetRepresentationProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMTextWidgetRepresentationProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMTextWidgetRepresentationProxy\nC++: vtkSMTextWidgetRepresentationProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMTextWidgetRepresentationProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMTextWidgetRepresentationProxy\nC++: vtkSMTextWidgetRepresentationProxy *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMTextWidgetRepresentationProxy_StaticNew()
{
  return vtkSMTextWidgetRepresentationProxy::New();
}

PyObject *PyVTKClass_vtkSMTextWidgetRepresentationProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMTextWidgetRepresentationProxy_StaticNew,
    PyvtkSMTextWidgetRepresentationProxy_Methods,
    "vtkSMTextWidgetRepresentationProxy", modulename,
    NULL, NULL,
    PyvtkSMTextWidgetRepresentationProxy_Doc(),
    PyVTKClass_vtkSMNewWidgetRepresentationProxyNew(modulename));
  return cls;
}

const char **PyvtkSMTextWidgetRepresentationProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMTextWidgetRepresentationProxy \n\n",
    "Superclass: vtkSMNewWidgetRepresentationProxy\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMTextWidgetRepresentationProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMTextWidgetRepresentationProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMTextWidgetRepresentationProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

