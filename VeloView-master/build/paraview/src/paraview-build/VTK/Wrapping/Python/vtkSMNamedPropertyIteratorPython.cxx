// python wrapper for vtkSMNamedPropertyIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMNamedPropertyIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMNamedPropertyIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMNamedPropertyIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMPropertyIteratorNew
extern "C" { PyObject *PyVTKClass_vtkSMPropertyIteratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMPropertyIteratorNew
#endif

static const char **PyvtkSMNamedPropertyIterator_Doc();


static PyObject *
PyvtkSMNamedPropertyIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMNamedPropertyIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMNamedPropertyIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMNamedPropertyIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMNamedPropertyIterator::NewInstance());

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
PyvtkSMNamedPropertyIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMNamedPropertyIterator *tempr = vtkSMNamedPropertyIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_SetPropertyNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertyNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  vtkStringList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringList"))
    {
    if (ap.IsBound())
      {
      op->SetPropertyNames(temp0);
      }
    else
      {
      op->vtkSMNamedPropertyIterator::SetPropertyNames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Begin();
      }
    else
      {
      op->vtkSMNamedPropertyIterator::Begin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsAtEnd() :
      op->vtkSMNamedPropertyIterator::IsAtEnd());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Next();
      }
    else
      {
      op->vtkSMNamedPropertyIterator::Next();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_GetKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetKey() :
      op->vtkSMNamedPropertyIterator::GetKey());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_GetPropertyLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPropertyLabel() :
      op->vtkSMNamedPropertyIterator::GetPropertyLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkSMNamedPropertyIterator::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMNamedPropertyIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkSMNamedPropertyIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMNamedPropertyIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMNamedPropertyIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMNamedPropertyIterator\nC++: vtkSMNamedPropertyIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMNamedPropertyIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMNamedPropertyIterator\nC++: vtkSMNamedPropertyIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPropertyNames", PyvtkSMNamedPropertyIterator_SetPropertyNames, METH_VARARGS,
   (char*)"V.SetPropertyNames(vtkStringList)\nC++: void SetPropertyNames(vtkStringList *names)\n\nSet the names of properties to iterate over.\n"},
  {(char*)"Begin", PyvtkSMNamedPropertyIterator_Begin, METH_VARARGS,
   (char*)"V.Begin()\nC++: virtual void Begin()\n\nGo to the first property.\n"},
  {(char*)"IsAtEnd", PyvtkSMNamedPropertyIterator_IsAtEnd, METH_VARARGS,
   (char*)"V.IsAtEnd() -> int\nC++: virtual int IsAtEnd()\n\nReturns true if iterator points past the end of the collection.\n"},
  {(char*)"Next", PyvtkSMNamedPropertyIterator_Next, METH_VARARGS,
   (char*)"V.Next()\nC++: virtual void Next()\n\nMove to the next property.\n"},
  {(char*)"GetKey", PyvtkSMNamedPropertyIterator_GetKey, METH_VARARGS,
   (char*)"V.GetKey() -> string\nC++: virtual const char *GetKey()\n\nReturns the key (name) at the current iterator position.\n"},
  {(char*)"GetPropertyLabel", PyvtkSMNamedPropertyIterator_GetPropertyLabel, METH_VARARGS,
   (char*)"V.GetPropertyLabel() -> string\nC++: virtual const char *GetPropertyLabel()\n\nReturns the XMLLabel for self properties and the exposed name for\nsub-proxy properties.\n"},
  {(char*)"GetProperty", PyvtkSMNamedPropertyIterator_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkSMProperty\nC++: virtual vtkSMProperty *GetProperty()\n\nReturns the property at the current iterator position.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMNamedPropertyIterator_StaticNew()
{
  return vtkSMNamedPropertyIterator::New();
}

PyObject *PyVTKClass_vtkSMNamedPropertyIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMNamedPropertyIterator_StaticNew,
    PyvtkSMNamedPropertyIterator_Methods,
    "vtkSMNamedPropertyIterator", modulename,
    NULL, NULL,
    PyvtkSMNamedPropertyIterator_Doc(),
    PyVTKClass_vtkSMPropertyIteratorNew(modulename));
  return cls;
}

const char **PyvtkSMNamedPropertyIterator_Doc()
{
  static const char *docstring[] = {
    "vtkSMNamedPropertyIterator - iterates over a subset of a proxy's\nproperties\n\n",
    "Superclass: vtkSMPropertyIterator\n\n",
    "vtkSMNamedPropertyIterator can be used to iterate over a subset of a\nproxy's properties. The subset is defined through a list of strings\nnaming properties. The properties of the root proxies as well as\nsub-proxies are  included in the iteration. For sub-proxies, only\nexposed properties are iterated over.\n\nSee Also:\n\nvtkSMPropertyIterator\n\nThanks:\n\nThis class was contributed by SciberQuest Inc.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMNamedPropertyIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMNamedPropertyIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMNamedPropertyIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

