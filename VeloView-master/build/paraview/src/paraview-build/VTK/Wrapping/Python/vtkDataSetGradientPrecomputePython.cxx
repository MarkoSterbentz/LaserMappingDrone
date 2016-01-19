// python wrapper for vtkDataSetGradientPrecompute
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataSetGradientPrecompute.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataSetGradientPrecompute(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataSetGradientPrecomputeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkDataSetGradientPrecompute_Doc();


static PyObject *
PyvtkDataSetGradientPrecompute_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGradientPrecompute *op = static_cast<vtkDataSetGradientPrecompute *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataSetGradientPrecompute::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetGradientPrecompute_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGradientPrecompute *op = static_cast<vtkDataSetGradientPrecompute *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetGradientPrecompute::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetGradientPrecompute_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGradientPrecompute *op = static_cast<vtkDataSetGradientPrecompute *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSetGradientPrecompute *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetGradientPrecompute::NewInstance());

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
PyvtkDataSetGradientPrecompute_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataSetGradientPrecompute *tempr = vtkDataSetGradientPrecompute::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetGradientPrecompute_GradientPrecompute(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GradientPrecompute");

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    int tempr = vtkDataSetGradientPrecompute::GradientPrecompute(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetGradientPrecompute_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetGradientPrecompute_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetGradientPrecompute_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetGradientPrecompute_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataSetGradientPrecompute\nC++: vtkDataSetGradientPrecompute *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataSetGradientPrecompute_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataSetGradientPrecompute\nC++: vtkDataSetGradientPrecompute *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GradientPrecompute", PyvtkDataSetGradientPrecompute_GradientPrecompute, METH_VARARGS | METH_STATIC,
   (char*)"V.GradientPrecompute(vtkDataSet) -> int\nC++: static int GradientPrecompute(vtkDataSet *ds)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataSetGradientPrecompute_StaticNew()
{
  return vtkDataSetGradientPrecompute::New();
}

PyObject *PyVTKClass_vtkDataSetGradientPrecomputeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataSetGradientPrecompute_StaticNew,
    PyvtkDataSetGradientPrecompute_Methods,
    "vtkDataSetGradientPrecompute", modulename,
    NULL, NULL,
    PyvtkDataSetGradientPrecompute_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDataSetGradientPrecompute_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetGradientPrecompute\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "Computes a geometry based vector field that the DataSetGradient\nfilter uses to accelerate gradient computation. This vector field is\nadded to FieldData since it has a different value for each vertex of\neach cell (a vertex shared by two cell has two differents values).\n\nThanks:\n\nThis file is part of the generalized Youngs material interface\nreconstruction algorithm contributed by CEA/DIF - Commissa",
    "riat a\nl'Energie Atomique, Centre DAM Ile-De-France\n\nBP12, F-91297 Arpajon, France.\n\nImplementation by Thierry Carrard (CEA)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetGradientPrecompute(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetGradientPrecomputeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetGradientPrecompute", o) != 0)
    {
    Py_DECREF(o);
    }

}

