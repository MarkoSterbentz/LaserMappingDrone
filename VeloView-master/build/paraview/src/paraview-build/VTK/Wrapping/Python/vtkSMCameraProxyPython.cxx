// python wrapper for vtkSMCameraProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMCameraProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMCameraProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMCameraProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMCameraProxy_Doc();


static PyObject *
PyvtkSMCameraProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraProxy *op = static_cast<vtkSMCameraProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMCameraProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraProxy *op = static_cast<vtkSMCameraProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCameraProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraProxy *op = static_cast<vtkSMCameraProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMCameraProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCameraProxy::NewInstance());

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
PyvtkSMCameraProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMCameraProxy *tempr = vtkSMCameraProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraProxy_UpdatePropertyInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePropertyInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraProxy *op = static_cast<vtkSMCameraProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdatePropertyInformation();
      }
    else
      {
      op->vtkSMCameraProxy::UpdatePropertyInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMCameraProxy_UpdatePropertyInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePropertyInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraProxy *op = static_cast<vtkSMCameraProxy *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    if (ap.IsBound())
      {
      op->UpdatePropertyInformation(temp0);
      }
    else
      {
      op->vtkSMCameraProxy::UpdatePropertyInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMCameraProxy_UpdatePropertyInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMCameraProxy_UpdatePropertyInformation_s1(self, args);
    case 1:
      return PyvtkSMCameraProxy_UpdatePropertyInformation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdatePropertyInformation");
  return NULL;
}


static PyMethodDef PyvtkSMCameraProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMCameraProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMCameraProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMCameraProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMCameraProxy\nC++: vtkSMCameraProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMCameraProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMCameraProxy\nC++: vtkSMCameraProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"UpdatePropertyInformation", PyvtkSMCameraProxy_UpdatePropertyInformation, METH_VARARGS,
   (char*)"V.UpdatePropertyInformation()\nC++: virtual void UpdatePropertyInformation()\nV.UpdatePropertyInformation(vtkSMProperty)\nC++: virtual void UpdatePropertyInformation(vtkSMProperty *prop)\n\nUpdates all property informations by calling UpdateInformation()\nand populating the values.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMCameraProxy_StaticNew()
{
  return vtkSMCameraProxy::New();
}

PyObject *PyVTKClass_vtkSMCameraProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMCameraProxy_StaticNew,
    PyvtkSMCameraProxy_Methods,
    "vtkSMCameraProxy", modulename,
    NULL, NULL,
    PyvtkSMCameraProxy_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));
  return cls;
}

const char **PyvtkSMCameraProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMCameraProxy - proxy for a camera.\n\n",
    "Superclass: vtkSMProxy\n\n",
    "This a proxy for a vtkCamera. This class optimizes\nUpdatePropertyInformation to use the client side object.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMCameraProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMCameraProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMCameraProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

