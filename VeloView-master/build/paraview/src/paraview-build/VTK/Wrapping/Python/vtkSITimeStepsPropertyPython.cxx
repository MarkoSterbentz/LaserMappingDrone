// python wrapper for vtkSITimeStepsProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSITimeStepsProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSITimeStepsProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSITimeStepsPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSIPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIPropertyNew
#endif

static const char **PyvtkSITimeStepsProperty_Doc();


static PyObject *
PyvtkSITimeStepsProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSITimeStepsProperty *op = static_cast<vtkSITimeStepsProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSITimeStepsProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSITimeStepsProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSITimeStepsProperty *op = static_cast<vtkSITimeStepsProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSITimeStepsProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSITimeStepsProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSITimeStepsProperty *op = static_cast<vtkSITimeStepsProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSITimeStepsProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSITimeStepsProperty::NewInstance());

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
PyvtkSITimeStepsProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSITimeStepsProperty *tempr = vtkSITimeStepsProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSITimeStepsProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSITimeStepsProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSITimeStepsProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSITimeStepsProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSITimeStepsProperty\nC++: vtkSITimeStepsProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSITimeStepsProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSITimeStepsProperty\nC++: vtkSITimeStepsProperty *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSITimeStepsProperty_StaticNew()
{
  return vtkSITimeStepsProperty::New();
}

PyObject *PyVTKClass_vtkSITimeStepsPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSITimeStepsProperty_StaticNew,
    PyvtkSITimeStepsProperty_Methods,
    "vtkSITimeStepsProperty", modulename,
    NULL, NULL,
    PyvtkSITimeStepsProperty_Doc(),
    PyVTKClass_vtkSIPropertyNew(modulename));
  return cls;
}

const char **PyvtkSITimeStepsProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSITimeRangeProperty\n\n",
    "Superclass: vtkSIProperty\n\n",
    "SIProperty that deals with TimeRange on Algorithm object type\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSITimeStepsProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSITimeStepsPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSITimeStepsProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

