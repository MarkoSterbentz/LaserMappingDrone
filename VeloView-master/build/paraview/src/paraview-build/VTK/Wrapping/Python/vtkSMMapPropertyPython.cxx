// python wrapper for vtkSMMapProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMMapProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMMapProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMMapPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSMPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMPropertyNew
#endif

static const char **PyvtkSMMapProperty_Doc();


static PyObject *
PyvtkSMMapProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMapProperty *op = static_cast<vtkSMMapProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMMapProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMMapProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMapProperty *op = static_cast<vtkSMMapProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMMapProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMMapProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMapProperty *op = static_cast<vtkSMMapProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMMapProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMMapProperty::NewInstance());

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
PyvtkSMMapProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMMapProperty *tempr = vtkSMMapProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMMapProperty_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMapProperty *op = static_cast<vtkSMMapProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkSMMapProperty::GetNumberOfElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMMapProperty_IsValueDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValueDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMapProperty *op = static_cast<vtkSMMapProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsValueDefault() :
      op->vtkSMMapProperty::IsValueDefault());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMMapProperty_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMapProperty *op = static_cast<vtkSMMapProperty *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    if (ap.IsBound())
      {
      op->Copy(temp0);
      }
    else
      {
      op->vtkSMMapProperty::Copy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMMapProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSMMapProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMMapProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMMapProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMMapProperty\nC++: vtkSMMapProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMMapProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMMapProperty\nC++: vtkSMMapProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfElements", PyvtkSMMapProperty_GetNumberOfElements, METH_VARARGS,
   (char*)"V.GetNumberOfElements() -> int\nC++: virtual vtkIdType GetNumberOfElements()\n\nReturns the number of elements for the value type.\n"},
  {(char*)"IsValueDefault", PyvtkSMMapProperty_IsValueDefault, METH_VARARGS,
   (char*)"V.IsValueDefault() -> bool\nC++: virtual bool IsValueDefault()\n\nReturns true if the current value is the same as the default\nvalue.\n"},
  {(char*)"Copy", PyvtkSMMapProperty_Copy, METH_VARARGS,
   (char*)"V.Copy(vtkSMProperty)\nC++: virtual void Copy(vtkSMProperty *src)\n\nCopy all property values.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSMMapPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSMMapProperty_Methods,
    "vtkSMMapProperty", modulename,
    NULL, NULL,
    PyvtkSMMapProperty_Doc(),
    PyVTKClass_vtkSMPropertyNew(modulename));
  return cls;
}

const char **PyvtkSMMapProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSMMapProperty - abstract superclass for all map properties\n\n",
    "Superclass: vtkSMProperty\n\n",
    "vtkSMMapProperty defines an interface common for all map properties.\nA map property stores a set of keys and values.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMMapProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMMapPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMMapProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

