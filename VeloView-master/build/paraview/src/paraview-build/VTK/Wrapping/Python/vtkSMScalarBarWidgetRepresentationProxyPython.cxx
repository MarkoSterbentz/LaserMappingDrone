// python wrapper for vtkSMScalarBarWidgetRepresentationProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMScalarBarWidgetRepresentationProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMScalarBarWidgetRepresentationProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMScalarBarWidgetRepresentationProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMNewWidgetRepresentationProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMNewWidgetRepresentationProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMNewWidgetRepresentationProxyNew
#endif

static const char **PyvtkSMScalarBarWidgetRepresentationProxy_Doc();


static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMScalarBarWidgetRepresentationProxy *op = static_cast<vtkSMScalarBarWidgetRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMScalarBarWidgetRepresentationProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMScalarBarWidgetRepresentationProxy *op = static_cast<vtkSMScalarBarWidgetRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMScalarBarWidgetRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMScalarBarWidgetRepresentationProxy *op = static_cast<vtkSMScalarBarWidgetRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMScalarBarWidgetRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMScalarBarWidgetRepresentationProxy::NewInstance());

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
PyvtkSMScalarBarWidgetRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMScalarBarWidgetRepresentationProxy *tempr = vtkSMScalarBarWidgetRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_UpdateComponentTitle_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateComponentTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMScalarBarWidgetRepresentationProxy *op = static_cast<vtkSMScalarBarWidgetRepresentationProxy *>(vp);

  vtkPVArrayInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation"))
    {
    bool tempr = (ap.IsBound() ?
      op->UpdateComponentTitle(temp0) :
      op->vtkSMScalarBarWidgetRepresentationProxy::UpdateComponentTitle(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_UpdateComponentTitle_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UpdateComponentTitle");

  vtkSMProxy *temp0 = NULL;
  vtkPVArrayInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkPVArrayInformation"))
    {
    bool tempr = vtkSMScalarBarWidgetRepresentationProxy::UpdateComponentTitle(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_UpdateComponentTitle(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMScalarBarWidgetRepresentationProxy_UpdateComponentTitle_s1(self, args);
    case 2:
      return PyvtkSMScalarBarWidgetRepresentationProxy_UpdateComponentTitle_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateComponentTitle");
  return NULL;
}



static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_PlaceInView_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceInView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMScalarBarWidgetRepresentationProxy *op = static_cast<vtkSMScalarBarWidgetRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->PlaceInView(temp0) :
      op->vtkSMScalarBarWidgetRepresentationProxy::PlaceInView(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_PlaceInView_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PlaceInView");

  vtkSMProxy *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    bool tempr = vtkSMScalarBarWidgetRepresentationProxy::PlaceInView(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_PlaceInView(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMScalarBarWidgetRepresentationProxy_PlaceInView_s1(self, args);
    case 2:
      return PyvtkSMScalarBarWidgetRepresentationProxy_PlaceInView_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceInView");
  return NULL;
}


static PyMethodDef PyvtkSMScalarBarWidgetRepresentationProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMScalarBarWidgetRepresentationProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMScalarBarWidgetRepresentationProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMScalarBarWidgetRepresentationProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMScalarBarWidgetRepresentationProxy\nC++: vtkSMScalarBarWidgetRepresentationProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMScalarBarWidgetRepresentationProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkSMScalarBarWidgetRepresentationProxy\nC++: vtkSMScalarBarWidgetRepresentationProxy *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"UpdateComponentTitle", PyvtkSMScalarBarWidgetRepresentationProxy_UpdateComponentTitle, METH_VARARGS,
   (char*)"V.UpdateComponentTitle(vtkPVArrayInformation) -> bool\nC++: virtual bool UpdateComponentTitle(\n    vtkPVArrayInformation *dataInfo)\nV.UpdateComponentTitle(vtkSMProxy, vtkPVArrayInformation) -> bool\nC++: static bool UpdateComponentTitle(vtkSMProxy *proxy,\n    vtkPVArrayInformation *dataInfo)\n\nUpdates the scalar bar's component title using the data\ninformation to determine component names if possible.\n"},
  {(char*)"PlaceInView", PyvtkSMScalarBarWidgetRepresentationProxy_PlaceInView, METH_VARARGS,
   (char*)"V.PlaceInView(vtkSMProxy) -> bool\nC++: virtual bool PlaceInView(vtkSMProxy *view)\nV.PlaceInView(vtkSMProxy, vtkSMProxy) -> bool\nC++: static bool PlaceInView(vtkSMProxy *proxy, vtkSMProxy *view)\n\nAttempt to place the scalar bar in the view based on the\nplacement of other currently shown and visible scalar bars.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMScalarBarWidgetRepresentationProxy_StaticNew()
{
  return vtkSMScalarBarWidgetRepresentationProxy::New();
}

PyObject *PyVTKClass_vtkSMScalarBarWidgetRepresentationProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMScalarBarWidgetRepresentationProxy_StaticNew,
    PyvtkSMScalarBarWidgetRepresentationProxy_Methods,
    "vtkSMScalarBarWidgetRepresentationProxy", modulename,
    NULL, NULL,
    PyvtkSMScalarBarWidgetRepresentationProxy_Doc(),
    PyVTKClass_vtkSMNewWidgetRepresentationProxyNew(modulename));
  return cls;
}

const char **PyvtkSMScalarBarWidgetRepresentationProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMScalarBarWidgetRepresentationProxy - is the representation\n\n",
    "Superclass: vtkSMNewWidgetRepresentationProxy\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMScalarBarWidgetRepresentationProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMScalarBarWidgetRepresentationProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMScalarBarWidgetRepresentationProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

