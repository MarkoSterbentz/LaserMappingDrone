// python wrapper for vtkSMDomainIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMDomainIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMDomainIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMDomainIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMDomainIterator_Doc();


static PyObject *
PyvtkSMDomainIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMDomainIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDomainIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDomainIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDomainIterator::NewInstance());

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
PyvtkSMDomainIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMDomainIterator *tempr = vtkSMDomainIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    if (ap.IsBound())
      {
      op->SetProperty(temp0);
      }
    else
      {
      op->vtkSMDomainIterator::SetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkSMDomainIterator::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Begin();
      }
    else
      {
      op->vtkSMDomainIterator::Begin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsAtEnd() :
      op->vtkSMDomainIterator::IsAtEnd());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Next();
      }
    else
      {
      op->vtkSMDomainIterator::Next();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_GetKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetKey() :
      op->vtkSMDomainIterator::GetKey());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_GetDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDomain *tempr = (ap.IsBound() ?
      op->GetDomain() :
      op->vtkSMDomainIterator::GetDomain());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMDomainIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkSMDomainIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMDomainIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMDomainIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMDomainIterator\nC++: vtkSMDomainIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMDomainIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMDomainIterator\nC++: vtkSMDomainIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetProperty", PyvtkSMDomainIterator_SetProperty, METH_VARARGS,
   (char*)"V.SetProperty(vtkSMProperty)\nC++: void SetProperty(vtkSMProperty *property)\n\nA property must be assigned before iteration is performed.\n"},
  {(char*)"GetProperty", PyvtkSMDomainIterator_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkSMProperty\nC++: vtkSMProperty *GetProperty()\n\nReturns the property being iterated over.\n"},
  {(char*)"Begin", PyvtkSMDomainIterator_Begin, METH_VARARGS,
   (char*)"V.Begin()\nC++: void Begin()\n\nGo to the first domain.\n"},
  {(char*)"IsAtEnd", PyvtkSMDomainIterator_IsAtEnd, METH_VARARGS,
   (char*)"V.IsAtEnd() -> int\nC++: int IsAtEnd()\n\nIs the iterator at the end of the list.\n"},
  {(char*)"Next", PyvtkSMDomainIterator_Next, METH_VARARGS,
   (char*)"V.Next()\nC++: void Next()\n\nMove to the next iterator.\n"},
  {(char*)"GetKey", PyvtkSMDomainIterator_GetKey, METH_VARARGS,
   (char*)"V.GetKey() -> string\nC++: const char *GetKey()\n\nReturns the key (the name) of the current domain.\n"},
  {(char*)"GetDomain", PyvtkSMDomainIterator_GetDomain, METH_VARARGS,
   (char*)"V.GetDomain() -> vtkSMDomain\nC++: vtkSMDomain *GetDomain()\n\nReturns the current domain.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMDomainIterator_StaticNew()
{
  return vtkSMDomainIterator::New();
}

PyObject *PyVTKClass_vtkSMDomainIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMDomainIterator_StaticNew,
    PyvtkSMDomainIterator_Methods,
    "vtkSMDomainIterator", modulename,
    NULL, NULL,
    PyvtkSMDomainIterator_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMDomainIterator_Doc()
{
  static const char *docstring[] = {
    "vtkSMDomainIterator - iterates over domains of a property\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMDomainIterator iterates over the domains of a property.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMDomainIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMDomainIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMDomainIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

