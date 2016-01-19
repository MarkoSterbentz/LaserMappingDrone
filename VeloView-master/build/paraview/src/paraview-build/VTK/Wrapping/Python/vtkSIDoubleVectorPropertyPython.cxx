// python wrapper for vtkSIDoubleVectorProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIDoubleVectorProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIDoubleVectorProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIDoubleVectorPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIVectorPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSIVectorPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIVectorPropertyNew
#endif

static const char **PyvtkSIDoubleVectorProperty_Doc();


static PyObject *
PyvtkSIDoubleVectorProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDoubleVectorProperty *op = static_cast<vtkSIDoubleVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIDoubleVectorProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIDoubleVectorProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDoubleVectorProperty *op = static_cast<vtkSIDoubleVectorProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIDoubleVectorProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIDoubleVectorProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDoubleVectorProperty *op = static_cast<vtkSIDoubleVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIDoubleVectorProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIDoubleVectorProperty::NewInstance());

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
PyvtkSIDoubleVectorProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIDoubleVectorProperty *tempr = vtkSIDoubleVectorProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIDoubleVectorProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSIDoubleVectorProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIDoubleVectorProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIDoubleVectorProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIDoubleVectorProperty\nC++: vtkSIDoubleVectorProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIDoubleVectorProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIDoubleVectorProperty\nC++: vtkSIDoubleVectorProperty *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIDoubleVectorProperty_StaticNew()
{
  return vtkSIDoubleVectorProperty::New();
}

PyObject *PyVTKClass_vtkSIDoubleVectorPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIDoubleVectorProperty_StaticNew,
    PyvtkSIDoubleVectorProperty_Methods,
    "vtkSIDoubleVectorProperty", modulename,
    NULL, NULL,
    PyvtkSIDoubleVectorProperty_Doc(),
    PyVTKClass_vtkSIVectorPropertyNew(modulename));
  return cls;
}

const char **PyvtkSIDoubleVectorProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSIDoubleVectorProperty\n\n",
    "Superclass: vtkSIVectorProperty\n\n",
    "Vector property that manage double value to be set through a method\non a vtkObject.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIDoubleVectorProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIDoubleVectorPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIDoubleVectorProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

