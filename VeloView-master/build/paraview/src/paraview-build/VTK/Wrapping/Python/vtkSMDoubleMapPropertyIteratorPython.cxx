// python wrapper for vtkSMDoubleMapPropertyIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMDoubleMapPropertyIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMDoubleMapPropertyIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMDoubleMapPropertyIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMDoubleMapPropertyIterator_Doc();


static PyObject *
PyvtkSMDoubleMapPropertyIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMDoubleMapPropertyIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDoubleMapPropertyIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDoubleMapPropertyIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDoubleMapPropertyIterator::NewInstance());

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
PyvtkSMDoubleMapPropertyIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMDoubleMapPropertyIterator *tempr = vtkSMDoubleMapPropertyIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  vtkSMDoubleMapProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMDoubleMapProperty"))
    {
    if (ap.IsBound())
      {
      op->SetProperty(temp0);
      }
    else
      {
      op->vtkSMDoubleMapPropertyIterator::SetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDoubleMapProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkSMDoubleMapPropertyIterator::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Begin();
      }
    else
      {
      op->vtkSMDoubleMapPropertyIterator::Begin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsAtEnd() :
      op->vtkSMDoubleMapPropertyIterator::IsAtEnd());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Next();
      }
    else
      {
      op->vtkSMDoubleMapPropertyIterator::Next();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_GetKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetKey() :
      op->vtkSMDoubleMapPropertyIterator::GetKey());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_GetElementComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetElementComponent(temp0) :
      op->vtkSMDoubleMapPropertyIterator::GetElementComponent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMDoubleMapPropertyIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkSMDoubleMapPropertyIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMDoubleMapPropertyIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMDoubleMapPropertyIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMDoubleMapPropertyIterator\nC++: vtkSMDoubleMapPropertyIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMDoubleMapPropertyIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMDoubleMapPropertyIterator\nC++: vtkSMDoubleMapPropertyIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetProperty", PyvtkSMDoubleMapPropertyIterator_SetProperty, METH_VARARGS,
   (char*)"V.SetProperty(vtkSMDoubleMapProperty)\nC++: virtual void SetProperty(vtkSMDoubleMapProperty *property)\n\nSet/get the property to iterate over.\n"},
  {(char*)"GetProperty", PyvtkSMDoubleMapPropertyIterator_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkSMDoubleMapProperty\nC++: vtkSMDoubleMapProperty *GetProperty()\n\nSet/get the property to iterate over.\n"},
  {(char*)"Begin", PyvtkSMDoubleMapPropertyIterator_Begin, METH_VARARGS,
   (char*)"V.Begin()\nC++: virtual void Begin()\n\nGo to the first item.\n"},
  {(char*)"IsAtEnd", PyvtkSMDoubleMapPropertyIterator_IsAtEnd, METH_VARARGS,
   (char*)"V.IsAtEnd() -> int\nC++: virtual int IsAtEnd()\n\nReturns true if iterator points past the end of the collection.\n"},
  {(char*)"Next", PyvtkSMDoubleMapPropertyIterator_Next, METH_VARARGS,
   (char*)"V.Next()\nC++: virtual void Next()\n\nMove to the next item.\n"},
  {(char*)"GetKey", PyvtkSMDoubleMapPropertyIterator_GetKey, METH_VARARGS,
   (char*)"V.GetKey() -> int\nC++: virtual vtkIdType GetKey()\n\nReturns the key (index) at the current iterator position.\n"},
  {(char*)"GetElementComponent", PyvtkSMDoubleMapPropertyIterator_GetElementComponent, METH_VARARGS,
   (char*)"V.GetElementComponent(int) -> float\nC++: virtual double GetElementComponent(unsigned int component)\n\nReturns the value of the component for the current value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMDoubleMapPropertyIterator_StaticNew()
{
  return vtkSMDoubleMapPropertyIterator::New();
}

PyObject *PyVTKClass_vtkSMDoubleMapPropertyIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMDoubleMapPropertyIterator_StaticNew,
    PyvtkSMDoubleMapPropertyIterator_Methods,
    "vtkSMDoubleMapPropertyIterator", modulename,
    NULL, NULL,
    PyvtkSMDoubleMapPropertyIterator_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMDoubleMapPropertyIterator_Doc()
{
  static const char *docstring[] = {
    "vtkSMDoubleMapPropertyIterator - no description provided.\n\n",
    "Superclass: vtkSMObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMDoubleMapPropertyIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMDoubleMapPropertyIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMDoubleMapPropertyIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

