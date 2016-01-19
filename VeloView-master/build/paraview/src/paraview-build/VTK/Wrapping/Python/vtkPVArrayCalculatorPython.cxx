// python wrapper for vtkPVArrayCalculator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVArrayCalculator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVArrayCalculator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVArrayCalculatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayCalculatorNew
extern "C" { PyObject *PyVTKClass_vtkArrayCalculatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayCalculatorNew
#endif

static const char **PyvtkPVArrayCalculator_Doc();


static PyObject *
PyvtkPVArrayCalculator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayCalculator *op = static_cast<vtkPVArrayCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVArrayCalculator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayCalculator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayCalculator *op = static_cast<vtkPVArrayCalculator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVArrayCalculator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayCalculator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayCalculator *op = static_cast<vtkPVArrayCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVArrayCalculator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVArrayCalculator::NewInstance());

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
PyvtkPVArrayCalculator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVArrayCalculator *tempr = vtkPVArrayCalculator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVArrayCalculator_Methods[] = {
  {(char*)"GetClassName", PyvtkPVArrayCalculator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVArrayCalculator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVArrayCalculator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVArrayCalculator\nC++: vtkPVArrayCalculator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVArrayCalculator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVArrayCalculator\nC++: vtkPVArrayCalculator *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVArrayCalculator_StaticNew()
{
  return vtkPVArrayCalculator::New();
}

PyObject *PyVTKClass_vtkPVArrayCalculatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVArrayCalculator_StaticNew,
    PyvtkPVArrayCalculator_Methods,
    "vtkPVArrayCalculator", modulename,
    NULL, NULL,
    PyvtkPVArrayCalculator_Doc(),
    PyVTKClass_vtkArrayCalculatorNew(modulename));
  return cls;
}

const char **PyvtkPVArrayCalculator_Doc()
{
  static const char *docstring[] = {
    "vtkPVArrayCalculator - perform mathematical operations on data \n\n",
    "Superclass: vtkArrayCalculator\n\n",
    "vtkPVArrayCalculator performs operations on vectors or scalars in\nfield\n data arrays.\n vtkArrayCalculator provides API for users to add scalar/vector\nfields and\n their mapping with the input fields. We extend vtkArrayCalculator to\n automatically add scalar/vector fields mapping using the array\navailable in\n the input.\n\nSee Also:\n\n\n vtkArrayCalculator vtkFunctionParser\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVArrayCalculator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVArrayCalculatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVArrayCalculator", o) != 0)
    {
    Py_DECREF(o);
    }

}

