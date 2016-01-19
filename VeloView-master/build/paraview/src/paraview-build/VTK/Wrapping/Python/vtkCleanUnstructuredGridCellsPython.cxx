// python wrapper for vtkCleanUnstructuredGridCells
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCleanUnstructuredGridCells.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCleanUnstructuredGridCells(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCleanUnstructuredGridCellsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkCleanUnstructuredGridCells_Doc();


static PyObject *
PyvtkCleanUnstructuredGridCells_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGridCells *op = static_cast<vtkCleanUnstructuredGridCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCleanUnstructuredGridCells::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGridCells_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGridCells *op = static_cast<vtkCleanUnstructuredGridCells *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCleanUnstructuredGridCells::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGridCells_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGridCells *op = static_cast<vtkCleanUnstructuredGridCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCleanUnstructuredGridCells *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCleanUnstructuredGridCells::NewInstance());

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
PyvtkCleanUnstructuredGridCells_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCleanUnstructuredGridCells *tempr = vtkCleanUnstructuredGridCells::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCleanUnstructuredGridCells_Methods[] = {
  {(char*)"GetClassName", PyvtkCleanUnstructuredGridCells_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCleanUnstructuredGridCells_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCleanUnstructuredGridCells_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCleanUnstructuredGridCells\nC++: vtkCleanUnstructuredGridCells *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCleanUnstructuredGridCells_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCleanUnstructuredGridCells\nC++: vtkCleanUnstructuredGridCells *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCleanUnstructuredGridCells_StaticNew()
{
  return vtkCleanUnstructuredGridCells::New();
}

PyObject *PyVTKClass_vtkCleanUnstructuredGridCellsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCleanUnstructuredGridCells_StaticNew,
    PyvtkCleanUnstructuredGridCells_Methods,
    "vtkCleanUnstructuredGridCells", modulename,
    NULL, NULL,
    PyvtkCleanUnstructuredGridCells_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCleanUnstructuredGridCells_Doc()
{
  static const char *docstring[] = {
    "vtkCleanUnstructuredGridCells - remove duplicate/degenerate cells\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "Merges degenerate cells. Assumes the input grid does not contain\nduplicate points. You may want to run vtkCleanUnstructuredGrid first\nto assert it. If duplicated cells are found they are removed in the\noutput. The filter also handles the case, where a cell may contain\ndegenerate nodes (i.e. one and the same node is referenced by a cell\nmore than once).\n\nSee Also:\n\nvtkCleanPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCleanUnstructuredGridCells(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCleanUnstructuredGridCellsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCleanUnstructuredGridCells", o) != 0)
    {
    Py_DECREF(o);
    }

}

