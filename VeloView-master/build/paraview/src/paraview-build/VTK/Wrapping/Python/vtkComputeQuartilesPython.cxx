// python wrapper for vtkComputeQuartiles
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkComputeQuartiles.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkComputeQuartiles(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkComputeQuartilesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkComputeQuartiles_Doc();


static PyObject *
PyvtkComputeQuartiles_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeQuartiles *op = static_cast<vtkComputeQuartiles *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkComputeQuartiles::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkComputeQuartiles_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeQuartiles *op = static_cast<vtkComputeQuartiles *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkComputeQuartiles::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkComputeQuartiles_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeQuartiles *op = static_cast<vtkComputeQuartiles *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkComputeQuartiles *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkComputeQuartiles::NewInstance());

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
PyvtkComputeQuartiles_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkComputeQuartiles *tempr = vtkComputeQuartiles::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkComputeQuartiles_Methods[] = {
  {(char*)"GetClassName", PyvtkComputeQuartiles_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkComputeQuartiles_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkComputeQuartiles_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkComputeQuartiles\nC++: vtkComputeQuartiles *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkComputeQuartiles_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkComputeQuartiles\nC++: vtkComputeQuartiles *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkComputeQuartiles_StaticNew()
{
  return vtkComputeQuartiles::New();
}

PyObject *PyVTKClass_vtkComputeQuartilesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkComputeQuartiles_StaticNew,
    PyvtkComputeQuartiles_Methods,
    "vtkComputeQuartiles", modulename,
    NULL, NULL,
    PyvtkComputeQuartiles_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkComputeQuartiles_Doc()
{
  static const char *docstring[] = {
    "vtkComputeQuartiles - Extract quartiles and extremum values\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "vtkComputeQuartiles accepts any vtkDataObject as input and produces a\nvtkTable data as output. This filter can be used to generate a table\nto create box plots using a vtkPlotBox instance. The filter\ninternally uses vtkOrderStatistics to compute quartiles.\n\nSee also:\n\nvtkTableAlgorithm vtkOrderStatistics vtkPlotBox vtkChartBox\n\nThanks:\n\nThis class was written by Kitware SAS and supported by EDF -\nw",
    "ww.edf.fr\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkComputeQuartiles(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkComputeQuartilesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkComputeQuartiles", o) != 0)
    {
    Py_DECREF(o);
    }

}

