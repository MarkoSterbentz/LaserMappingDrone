// python wrapper for vtkSMPropertyIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMPropertyIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMPropertyIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMPropertyIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMPropertyIterator_Doc();


static PyObject *
PyvtkSMPropertyIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyIterator *op = static_cast<vtkSMPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMPropertyIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyIterator *op = static_cast<vtkSMPropertyIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPropertyIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyIterator *op = static_cast<vtkSMPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMPropertyIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPropertyIterator::NewInstance());

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
PyvtkSMPropertyIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMPropertyIterator *tempr = vtkSMPropertyIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyIterator_SetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyIterator *op = static_cast<vtkSMPropertyIterator *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->SetProxy(temp0);
      }
    else
      {
      op->vtkSMPropertyIterator::SetProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyIterator_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyIterator *op = static_cast<vtkSMPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy() :
      op->vtkSMPropertyIterator::GetProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyIterator *op = static_cast<vtkSMPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Begin();
      }
    else
      {
      op->vtkSMPropertyIterator::Begin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyIterator *op = static_cast<vtkSMPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsAtEnd() :
      op->vtkSMPropertyIterator::IsAtEnd());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyIterator *op = static_cast<vtkSMPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Next();
      }
    else
      {
      op->vtkSMPropertyIterator::Next();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyIterator_GetKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyIterator *op = static_cast<vtkSMPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetKey() :
      op->vtkSMPropertyIterator::GetKey());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyIterator_GetPropertyLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyIterator *op = static_cast<vtkSMPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPropertyLabel() :
      op->vtkSMPropertyIterator::GetPropertyLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyIterator_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyIterator *op = static_cast<vtkSMPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkSMPropertyIterator::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyIterator_SetTraverseSubProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTraverseSubProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyIterator *op = static_cast<vtkSMPropertyIterator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTraverseSubProxies(temp0);
      }
    else
      {
      op->vtkSMPropertyIterator::SetTraverseSubProxies(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyIterator_GetTraverseSubProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTraverseSubProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyIterator *op = static_cast<vtkSMPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTraverseSubProxies() :
      op->vtkSMPropertyIterator::GetTraverseSubProxies());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMPropertyIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkSMPropertyIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMPropertyIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMPropertyIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMPropertyIterator\nC++: vtkSMPropertyIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMPropertyIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMPropertyIterator\nC++: vtkSMPropertyIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetProxy", PyvtkSMPropertyIterator_SetProxy, METH_VARARGS,
   (char*)"V.SetProxy(vtkSMProxy)\nC++: virtual void SetProxy(vtkSMProxy *proxy)\n\nSet the proxy to be used.\n"},
  {(char*)"GetProxy", PyvtkSMPropertyIterator_GetProxy, METH_VARARGS,
   (char*)"V.GetProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetProxy()\n\nReturn the proxy.\n"},
  {(char*)"Begin", PyvtkSMPropertyIterator_Begin, METH_VARARGS,
   (char*)"V.Begin()\nC++: virtual void Begin()\n\nGo to the first property.\n"},
  {(char*)"IsAtEnd", PyvtkSMPropertyIterator_IsAtEnd, METH_VARARGS,
   (char*)"V.IsAtEnd() -> int\nC++: virtual int IsAtEnd()\n\nReturns true if iterator points past the end of the collection.\n"},
  {(char*)"Next", PyvtkSMPropertyIterator_Next, METH_VARARGS,
   (char*)"V.Next()\nC++: virtual void Next()\n\nMove to the next property.\n"},
  {(char*)"GetKey", PyvtkSMPropertyIterator_GetKey, METH_VARARGS,
   (char*)"V.GetKey() -> string\nC++: virtual const char *GetKey()\n\nReturns the key (name) at the current iterator position.\n"},
  {(char*)"GetPropertyLabel", PyvtkSMPropertyIterator_GetPropertyLabel, METH_VARARGS,
   (char*)"V.GetPropertyLabel() -> string\nC++: virtual const char *GetPropertyLabel()\n\nReturns the XMLLabel for self properties and the exposed name for\nsub-proxy properties.\n"},
  {(char*)"GetProperty", PyvtkSMPropertyIterator_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkSMProperty\nC++: virtual vtkSMProperty *GetProperty()\n\nReturns the property at the current iterator position.\n"},
  {(char*)"SetTraverseSubProxies", PyvtkSMPropertyIterator_SetTraverseSubProxies, METH_VARARGS,
   (char*)"V.SetTraverseSubProxies(int)\nC++: void SetTraverseSubProxies(int a)\n\nIf TraverseSubProxies is false, only the properties belonging to\nthe root proxy are returned. Default is true.\n"},
  {(char*)"GetTraverseSubProxies", PyvtkSMPropertyIterator_GetTraverseSubProxies, METH_VARARGS,
   (char*)"V.GetTraverseSubProxies() -> int\nC++: int GetTraverseSubProxies()\n\nIf TraverseSubProxies is false, only the properties belonging to\nthe root proxy are returned. Default is true.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMPropertyIterator_StaticNew()
{
  return vtkSMPropertyIterator::New();
}

PyObject *PyVTKClass_vtkSMPropertyIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMPropertyIterator_StaticNew,
    PyvtkSMPropertyIterator_Methods,
    "vtkSMPropertyIterator", modulename,
    NULL, NULL,
    PyvtkSMPropertyIterator_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMPropertyIterator_Doc()
{
  static const char *docstring[] = {
    "vtkSMPropertyIterator - iterates over the properties of a proxy\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMPropertyIterator is used to iterate over the properties of a\nproxy. The properties of the root proxies as well as sub-proxies are\nincluded in the iteration. For sub-proxies, only exposed properties\nare iterated over.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMPropertyIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMPropertyIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMPropertyIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

