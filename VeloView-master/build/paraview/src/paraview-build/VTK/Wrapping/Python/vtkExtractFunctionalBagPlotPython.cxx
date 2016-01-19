// python wrapper for vtkExtractFunctionalBagPlot
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractFunctionalBagPlot.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractFunctionalBagPlot(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractFunctionalBagPlotNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkExtractFunctionalBagPlot_Doc();


static PyObject *
PyvtkExtractFunctionalBagPlot_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractFunctionalBagPlot *op = static_cast<vtkExtractFunctionalBagPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractFunctionalBagPlot::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractFunctionalBagPlot_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractFunctionalBagPlot *op = static_cast<vtkExtractFunctionalBagPlot *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractFunctionalBagPlot::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractFunctionalBagPlot_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractFunctionalBagPlot *op = static_cast<vtkExtractFunctionalBagPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractFunctionalBagPlot *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractFunctionalBagPlot::NewInstance());

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
PyvtkExtractFunctionalBagPlot_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractFunctionalBagPlot *tempr = vtkExtractFunctionalBagPlot::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractFunctionalBagPlot_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractFunctionalBagPlot_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractFunctionalBagPlot_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractFunctionalBagPlot_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractFunctionalBagPlot\nC++: vtkExtractFunctionalBagPlot *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractFunctionalBagPlot_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractFunctionalBagPlot\nC++: vtkExtractFunctionalBagPlot *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractFunctionalBagPlot_StaticNew()
{
  return vtkExtractFunctionalBagPlot::New();
}

PyObject *PyVTKClass_vtkExtractFunctionalBagPlotNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractFunctionalBagPlot_StaticNew,
    PyvtkExtractFunctionalBagPlot_Methods,
    "vtkExtractFunctionalBagPlot", modulename,
    NULL, NULL,
    PyvtkExtractFunctionalBagPlot_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractFunctionalBagPlot_Doc()
{
  static const char *docstring[] = {
    "vtkExtractFunctionalBagPlot\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "From an input table containing series on port 0 and another table\ndescribing densities on port 1 (for instance obtained by applying\nfilter  vtkHighestDensityRegionsStatistics, this filter generates a\ntable containing all the columns of the input port 0 plus two 2\ncomponents columns containing the bag series to be used by\nvtkFunctionalBagPlot.\n\nSee Also:\n\nvtkFunctionalBagPlot vtkHighestDensityRegio",
    "nsStatistics\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractFunctionalBagPlot(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractFunctionalBagPlotNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractFunctionalBagPlot", o) != 0)
    {
    Py_DECREF(o);
    }

}

