// python wrapper for vtkSMBoxRepresentationProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMBoxRepresentationProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMBoxRepresentationProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMBoxRepresentationProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMWidgetRepresentationProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMWidgetRepresentationProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMWidgetRepresentationProxyNew
#endif

static const char **PyvtkSMBoxRepresentationProxy_Doc();


static PyObject *
PyvtkSMBoxRepresentationProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoxRepresentationProxy *op = static_cast<vtkSMBoxRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMBoxRepresentationProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBoxRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoxRepresentationProxy *op = static_cast<vtkSMBoxRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMBoxRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBoxRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoxRepresentationProxy *op = static_cast<vtkSMBoxRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMBoxRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMBoxRepresentationProxy::NewInstance());

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
PyvtkSMBoxRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMBoxRepresentationProxy *tempr = vtkSMBoxRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBoxRepresentationProxy_UpdateVTKObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateVTKObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoxRepresentationProxy *op = static_cast<vtkSMBoxRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateVTKObjects();
      }
    else
      {
      op->vtkSMBoxRepresentationProxy::UpdateVTKObjects();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMBoxRepresentationProxy_UpdatePropertyInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePropertyInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoxRepresentationProxy *op = static_cast<vtkSMBoxRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdatePropertyInformation();
      }
    else
      {
      op->vtkSMBoxRepresentationProxy::UpdatePropertyInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMBoxRepresentationProxy_UpdatePropertyInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePropertyInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoxRepresentationProxy *op = static_cast<vtkSMBoxRepresentationProxy *>(vp);

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
      op->vtkSMBoxRepresentationProxy::UpdatePropertyInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMBoxRepresentationProxy_UpdatePropertyInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMBoxRepresentationProxy_UpdatePropertyInformation_s1(self, args);
    case 1:
      return PyvtkSMBoxRepresentationProxy_UpdatePropertyInformation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdatePropertyInformation");
  return NULL;
}


static PyMethodDef PyvtkSMBoxRepresentationProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMBoxRepresentationProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMBoxRepresentationProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMBoxRepresentationProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMBoxRepresentationProxy\nC++: vtkSMBoxRepresentationProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMBoxRepresentationProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMBoxRepresentationProxy\nC++: vtkSMBoxRepresentationProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"UpdateVTKObjects", PyvtkSMBoxRepresentationProxy_UpdateVTKObjects, METH_VARARGS,
   (char*)"V.UpdateVTKObjects()\nC++: virtual void UpdateVTKObjects()\n\n"},
  {(char*)"UpdatePropertyInformation", PyvtkSMBoxRepresentationProxy_UpdatePropertyInformation, METH_VARARGS,
   (char*)"V.UpdatePropertyInformation()\nC++: virtual void UpdatePropertyInformation()\nV.UpdatePropertyInformation(vtkSMProperty)\nC++: virtual void UpdatePropertyInformation(vtkSMProperty *prop)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMBoxRepresentationProxy_StaticNew()
{
  return vtkSMBoxRepresentationProxy::New();
}

PyObject *PyVTKClass_vtkSMBoxRepresentationProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMBoxRepresentationProxy_StaticNew,
    PyvtkSMBoxRepresentationProxy_Methods,
    "vtkSMBoxRepresentationProxy", modulename,
    NULL, NULL,
    PyvtkSMBoxRepresentationProxy_Doc(),
    PyVTKClass_vtkSMWidgetRepresentationProxyNew(modulename));
  return cls;
}

const char **PyvtkSMBoxRepresentationProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMBoxRepresentationProxy - proxy for vtkBoxRepresentation\n\n",
    "Superclass: vtkSMWidgetRepresentationProxy\n\n",
    "vtkSMBoxRepresentationProxy is a proxy for vtkBoxRepresentation. A\nspecialization is needed to set the tranform on the\nvtkBoxRepresentation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMBoxRepresentationProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMBoxRepresentationProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMBoxRepresentationProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

