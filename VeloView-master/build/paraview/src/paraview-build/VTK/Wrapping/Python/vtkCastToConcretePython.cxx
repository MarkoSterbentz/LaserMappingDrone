// python wrapper for vtkCastToConcrete
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCastToConcrete.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCastToConcrete(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCastToConcreteNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkCastToConcrete_Doc();


static PyObject *
PyvtkCastToConcrete_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCastToConcrete *op = static_cast<vtkCastToConcrete *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCastToConcrete::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCastToConcrete_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCastToConcrete *op = static_cast<vtkCastToConcrete *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCastToConcrete::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCastToConcrete_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCastToConcrete *op = static_cast<vtkCastToConcrete *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCastToConcrete *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCastToConcrete::NewInstance());

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
PyvtkCastToConcrete_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCastToConcrete *tempr = vtkCastToConcrete::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCastToConcrete_Methods[] = {
  {(char*)"GetClassName", PyvtkCastToConcrete_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCastToConcrete_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCastToConcrete_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCastToConcrete\nC++: vtkCastToConcrete *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCastToConcrete_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCastToConcrete\nC++: vtkCastToConcrete *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCastToConcrete_StaticNew()
{
  return vtkCastToConcrete::New();
}

PyObject *PyVTKClass_vtkCastToConcreteNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCastToConcrete_StaticNew,
    PyvtkCastToConcrete_Methods,
    "vtkCastToConcrete", modulename,
    NULL, NULL,
    PyvtkCastToConcrete_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCastToConcrete_Doc()
{
  static const char *docstring[] = {
    "vtkCastToConcrete - works around type-checking limitations\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkCastToConcrete is a filter that works around type-checking\nlimitations in the filter classes. Some filters generate abstract\ntypes on output, and cannot be connected to the input of filters\nrequiring a concrete input type. For example, vtkElevationFilter\ngenerates vtkDataSet for output, and cannot be connected to\nvtkDecimate, because vtkDecimate requires vtkPolyData as input. This\nis true even ",
    "though (in this example) the input to vtkElevationFilter\nis of type vtkPolyData, and you know the output of vtkElevationFilter\nis the same type as its input.\n\nvtkCastToConcrete performs run-time checking to insure that output\ntype is of the right type. An error message will result if you try to\ncast an input type improperly. Otherwise, the filter performs the\nappropriate cast and returns the data.",
    "\n\nCaveats:\n\nYou must specify the input before you can get the output. Otherwise\nan error results.\n\nSee Also:\n\nvtkDataSetAlgorithm vtkPointSetToPointSetFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCastToConcrete(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCastToConcreteNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCastToConcrete", o) != 0)
    {
    Py_DECREF(o);
    }

}

