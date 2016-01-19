// python wrapper for vtkPVExtractArraysOverTime
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVExtractArraysOverTime.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVExtractArraysOverTime(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVExtractArraysOverTimeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPExtractArraysOverTimeNew
extern "C" { PyObject *PyVTKClass_vtkPExtractArraysOverTimeNew(const char *); }
#define DECLARED_PyVTKClass_vtkPExtractArraysOverTimeNew
#endif

static const char **PyvtkPVExtractArraysOverTime_Doc();


static PyObject *
PyvtkPVExtractArraysOverTime_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractArraysOverTime *op = static_cast<vtkPVExtractArraysOverTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVExtractArraysOverTime::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractArraysOverTime_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractArraysOverTime *op = static_cast<vtkPVExtractArraysOverTime *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVExtractArraysOverTime::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractArraysOverTime_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractArraysOverTime *op = static_cast<vtkPVExtractArraysOverTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVExtractArraysOverTime *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVExtractArraysOverTime::NewInstance());

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
PyvtkPVExtractArraysOverTime_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVExtractArraysOverTime *tempr = vtkPVExtractArraysOverTime::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVExtractArraysOverTime_Methods[] = {
  {(char*)"GetClassName", PyvtkPVExtractArraysOverTime_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVExtractArraysOverTime_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVExtractArraysOverTime_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVExtractArraysOverTime\nC++: vtkPVExtractArraysOverTime *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVExtractArraysOverTime_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVExtractArraysOverTime\nC++: vtkPVExtractArraysOverTime *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVExtractArraysOverTime_StaticNew()
{
  return vtkPVExtractArraysOverTime::New();
}

PyObject *PyVTKClass_vtkPVExtractArraysOverTimeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVExtractArraysOverTime_StaticNew,
    PyvtkPVExtractArraysOverTime_Methods,
    "vtkPVExtractArraysOverTime", modulename,
    NULL, NULL,
    PyvtkPVExtractArraysOverTime_Doc(),
    PyVTKClass_vtkPExtractArraysOverTimeNew(modulename));
  return cls;
}

const char **PyvtkPVExtractArraysOverTime_Doc()
{
  static const char *docstring[] = {
    "vtkPVExtractArraysOverTime - extract point or cell data over time\n(parallel)\n\n",
    "Superclass: vtkPExtractArraysOverTime\n\n",
    "vtkPVExtractArraysOverTime is a subclass of vtkPExtractArraysOverTime\nthat overrides the default SelectionExtractor with a\nvtkPVExtractSelection instance. This enables query selections to be\nextracted at each time step.\n\nSee Also:\n\nvtkExtractArraysOverTime vtkPExtractArraysOverTime\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVExtractArraysOverTime(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVExtractArraysOverTimeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVExtractArraysOverTime", o) != 0)
    {
    Py_DECREF(o);
    }

}

