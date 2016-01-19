// python wrapper for vtkCompositeCutter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCompositeCutter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositeCutter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositeCutterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCutterNew
extern "C" { PyObject *PyVTKClass_vtkCutterNew(const char *); }
#define DECLARED_PyVTKClass_vtkCutterNew
#endif

static const char **PyvtkCompositeCutter_Doc();


static PyObject *
PyvtkCompositeCutter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCutter *op = static_cast<vtkCompositeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositeCutter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCutter *op = static_cast<vtkCompositeCutter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeCutter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeCutter *op = static_cast<vtkCompositeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeCutter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeCutter::NewInstance());

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
PyvtkCompositeCutter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositeCutter *tempr = vtkCompositeCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeCutter_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeCutter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeCutter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeCutter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositeCutter\nC++: vtkCompositeCutter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeCutter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeCutter\nC++: vtkCompositeCutter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeCutter_StaticNew()
{
  return vtkCompositeCutter::New();
}

PyObject *PyVTKClass_vtkCompositeCutterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeCutter_StaticNew,
    PyvtkCompositeCutter_Methods,
    "vtkCompositeCutter", modulename,
    NULL, NULL,
    PyvtkCompositeCutter_Doc(),
    PyVTKClass_vtkCutterNew(modulename));
  return cls;
}

const char **PyvtkCompositeCutter_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeCutter - Cut composite data sets with user-specified\nimplicit function\n\n",
    "Superclass: vtkCutter\n\n",
    "Loop over each data set in the composite input and apply vtkCutter\n\nSee Also:\n\nvtkCutter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeCutter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeCutterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeCutter", o) != 0)
    {
    Py_DECREF(o);
    }

}

