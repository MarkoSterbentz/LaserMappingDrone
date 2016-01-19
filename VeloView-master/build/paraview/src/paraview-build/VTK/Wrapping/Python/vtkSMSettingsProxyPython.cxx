// python wrapper for vtkSMSettingsProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMSettingsProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMSettingsProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMSettingsProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMSettingsProxy_Doc();


static PyObject *
PyvtkSMSettingsProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettingsProxy *op = static_cast<vtkSMSettingsProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMSettingsProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSettingsProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettingsProxy *op = static_cast<vtkSMSettingsProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSettingsProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSettingsProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettingsProxy *op = static_cast<vtkSMSettingsProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSettingsProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSettingsProxy::NewInstance());

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
PyvtkSMSettingsProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMSettingsProxy *tempr = vtkSMSettingsProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSettingsProxy_ReadXMLAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadXMLAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettingsProxy *op = static_cast<vtkSMSettingsProxy *>(vp);

  vtkSMSessionProxyManager *temp0 = NULL;
  vtkPVXMLElement *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager") &&
      ap.GetVTKObject(temp1, "vtkPVXMLElement"))
    {
    int tempr = (ap.IsBound() ?
      op->ReadXMLAttributes(temp0, temp1) :
      op->vtkSMSettingsProxy::ReadXMLAttributes(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSettingsProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMSettingsProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMSettingsProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMSettingsProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMSettingsProxy\nC++: vtkSMSettingsProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMSettingsProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMSettingsProxy\nC++: vtkSMSettingsProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReadXMLAttributes", PyvtkSMSettingsProxy_ReadXMLAttributes, METH_VARARGS,
   (char*)"V.ReadXMLAttributes(vtkSMSessionProxyManager, vtkPVXMLElement)\n    -> int\nC++: int ReadXMLAttributes(vtkSMSessionProxyManager *pm,\n    vtkPVXMLElement *element)\n\nOverridden to link information properties with their\ncorresponding \"setter\" properties.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMSettingsProxy_StaticNew()
{
  return vtkSMSettingsProxy::New();
}

PyObject *PyVTKClass_vtkSMSettingsProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMSettingsProxy_StaticNew,
    PyvtkSMSettingsProxy_Methods,
    "vtkSMSettingsProxy", modulename,
    NULL, NULL,
    PyvtkSMSettingsProxy_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));
  return cls;
}

const char **PyvtkSMSettingsProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMSettingsProxy - proxy subclass responsible for linking settings\n\n",
    "Superclass: vtkSMProxy\n\n",
    "vtkSMSettingsProxy is used as a proxy for settings objects. It\nlistens for changes to the underlying VTK objects and updates the\nproxy properties whenever the VTK object settings change.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMSettingsProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMSettingsProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMSettingsProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

