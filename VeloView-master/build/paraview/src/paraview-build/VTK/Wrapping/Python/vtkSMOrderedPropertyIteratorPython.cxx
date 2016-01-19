// python wrapper for vtkSMOrderedPropertyIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMOrderedPropertyIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMOrderedPropertyIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMOrderedPropertyIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMOrderedPropertyIterator_Doc();


static PyObject *
PyvtkSMOrderedPropertyIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMOrderedPropertyIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMOrderedPropertyIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMOrderedPropertyIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMOrderedPropertyIterator::NewInstance());

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
PyvtkSMOrderedPropertyIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMOrderedPropertyIterator *tempr = vtkSMOrderedPropertyIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_SetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

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
      op->vtkSMOrderedPropertyIterator::SetProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy() :
      op->vtkSMOrderedPropertyIterator::GetProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Begin();
      }
    else
      {
      op->vtkSMOrderedPropertyIterator::Begin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsAtEnd() :
      op->vtkSMOrderedPropertyIterator::IsAtEnd());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Next();
      }
    else
      {
      op->vtkSMOrderedPropertyIterator::Next();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_GetKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetKey() :
      op->vtkSMOrderedPropertyIterator::GetKey());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkSMOrderedPropertyIterator::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_GetPropertyLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPropertyLabel() :
      op->vtkSMOrderedPropertyIterator::GetPropertyLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMOrderedPropertyIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkSMOrderedPropertyIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMOrderedPropertyIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMOrderedPropertyIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMOrderedPropertyIterator\nC++: vtkSMOrderedPropertyIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMOrderedPropertyIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMOrderedPropertyIterator\nC++: vtkSMOrderedPropertyIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetProxy", PyvtkSMOrderedPropertyIterator_SetProxy, METH_VARARGS,
   (char*)"V.SetProxy(vtkSMProxy)\nC++: void SetProxy(vtkSMProxy *proxy)\n\nSet the proxy to be used.\n"},
  {(char*)"GetProxy", PyvtkSMOrderedPropertyIterator_GetProxy, METH_VARARGS,
   (char*)"V.GetProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetProxy()\n\nReturn the proxy.\n"},
  {(char*)"Begin", PyvtkSMOrderedPropertyIterator_Begin, METH_VARARGS,
   (char*)"V.Begin()\nC++: void Begin()\n\nGo to the first property.\n"},
  {(char*)"IsAtEnd", PyvtkSMOrderedPropertyIterator_IsAtEnd, METH_VARARGS,
   (char*)"V.IsAtEnd() -> int\nC++: int IsAtEnd()\n\nReturns true if iterator points past the end of the collection.\n"},
  {(char*)"Next", PyvtkSMOrderedPropertyIterator_Next, METH_VARARGS,
   (char*)"V.Next()\nC++: void Next()\n\nMove to the next property.\n"},
  {(char*)"GetKey", PyvtkSMOrderedPropertyIterator_GetKey, METH_VARARGS,
   (char*)"V.GetKey() -> string\nC++: const char *GetKey()\n\nReturns the key (name) at the current iterator position.\n"},
  {(char*)"GetProperty", PyvtkSMOrderedPropertyIterator_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkSMProperty\nC++: vtkSMProperty *GetProperty()\n\nReturns the property at the current iterator position.\n"},
  {(char*)"GetPropertyLabel", PyvtkSMOrderedPropertyIterator_GetPropertyLabel, METH_VARARGS,
   (char*)"V.GetPropertyLabel() -> string\nC++: const char *GetPropertyLabel()\n\nReturns the XMLLabel for self properties and the exposed name for\nsub-proxy properties.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMOrderedPropertyIterator_StaticNew()
{
  return vtkSMOrderedPropertyIterator::New();
}

PyObject *PyVTKClass_vtkSMOrderedPropertyIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMOrderedPropertyIterator_StaticNew,
    PyvtkSMOrderedPropertyIterator_Methods,
    "vtkSMOrderedPropertyIterator", modulename,
    NULL, NULL,
    PyvtkSMOrderedPropertyIterator_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMOrderedPropertyIterator_Doc()
{
  static const char *docstring[] = {
    "vtkSMOrderedPropertyIterator - iterates over the properties of a proxy\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMOrderedPropertyIterator is used to iterate over the properties\nof a proxy. The properties of the root proxies as well as sub-proxies\nare included in the iteration. For sub-proxies, only exposed\nproperties are iterated over. vtkSMOrderedPropertyIterator iterates\nover properties in the order they appear in the xml or in the order\nthey were added. This is possible because vtkSMProxy keeps track ",
    "of\nthe order in which properties were added or exposed in a\nPropertyNamesInOrder vector.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMOrderedPropertyIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMOrderedPropertyIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMOrderedPropertyIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

