// python wrapper for vtkHyperTreeGridToUnstructuredGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHyperTreeGridToUnstructuredGrid.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHyperTreeGridToUnstructuredGrid(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHyperTreeGridToUnstructuredGridNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkHyperTreeGridToUnstructuredGrid_Doc();


static PyObject *
PyvtkHyperTreeGridToUnstructuredGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridToUnstructuredGrid *op = static_cast<vtkHyperTreeGridToUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHyperTreeGridToUnstructuredGrid::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridToUnstructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridToUnstructuredGrid *op = static_cast<vtkHyperTreeGridToUnstructuredGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridToUnstructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridToUnstructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridToUnstructuredGrid *op = static_cast<vtkHyperTreeGridToUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperTreeGridToUnstructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridToUnstructuredGrid::NewInstance());

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
PyvtkHyperTreeGridToUnstructuredGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHyperTreeGridToUnstructuredGrid *tempr = vtkHyperTreeGridToUnstructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridToUnstructuredGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperTreeGridToUnstructuredGrid_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperTreeGridToUnstructuredGrid_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperTreeGridToUnstructuredGrid_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHyperTreeGridToUnstructuredGrid\nC++: vtkHyperTreeGridToUnstructuredGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperTreeGridToUnstructuredGrid_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperTreeGridToUnstructuredGrid\nC++: vtkHyperTreeGridToUnstructuredGrid *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperTreeGridToUnstructuredGrid_StaticNew()
{
  return vtkHyperTreeGridToUnstructuredGrid::New();
}

PyObject *PyVTKClass_vtkHyperTreeGridToUnstructuredGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperTreeGridToUnstructuredGrid_StaticNew,
    PyvtkHyperTreeGridToUnstructuredGrid_Methods,
    "vtkHyperTreeGridToUnstructuredGrid", modulename,
    NULL, NULL,
    PyvtkHyperTreeGridToUnstructuredGrid_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHyperTreeGridToUnstructuredGrid_Doc()
{
  static const char *docstring[] = {
    "vtkHyperTreeGridToUnstructuredGrid - Convert hyper tree grid to\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "Make explicit all leaves of a hyper tree grid by converting them to\ncells of an unstructured grid. Produces segments in 1D, rectangles in\n2D, right hexahedra in 3D. NB: The output will contain superimposed\ninter-element boundaries and pending nodes as a result of\nT-junctions.\n\nSee Also:\n\nvtkHyperTreeGrid vtkUnstructuredGrid\n\nThanks:\n\nThis class was written by Philippe Pebay and Charles Law, Kitwar",
    "e\n2012 This work was supported in part by Commissariat a l'Energie\nAtomique (CEA/DIF)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperTreeGridToUnstructuredGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperTreeGridToUnstructuredGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperTreeGridToUnstructuredGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

