// python wrapper for vtkCleanUnstructuredGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCleanUnstructuredGrid.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCleanUnstructuredGrid(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCleanUnstructuredGridNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkCleanUnstructuredGrid_Doc();


static PyObject *
PyvtkCleanUnstructuredGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCleanUnstructuredGrid::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCleanUnstructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCleanUnstructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCleanUnstructuredGrid::NewInstance());

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
PyvtkCleanUnstructuredGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCleanUnstructuredGrid *tempr = vtkCleanUnstructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCleanUnstructuredGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkCleanUnstructuredGrid_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCleanUnstructuredGrid_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCleanUnstructuredGrid_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCleanUnstructuredGrid\nC++: vtkCleanUnstructuredGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCleanUnstructuredGrid_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCleanUnstructuredGrid\nC++: vtkCleanUnstructuredGrid *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCleanUnstructuredGrid_StaticNew()
{
  return vtkCleanUnstructuredGrid::New();
}

PyObject *PyVTKClass_vtkCleanUnstructuredGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCleanUnstructuredGrid_StaticNew,
    PyvtkCleanUnstructuredGrid_Methods,
    "vtkCleanUnstructuredGrid", modulename,
    NULL, NULL,
    PyvtkCleanUnstructuredGrid_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCleanUnstructuredGrid_Doc()
{
  static const char *docstring[] = {
    "vtkCleanUnstructuredGrid - merge duplicate points\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkCleanUnstructuredGrid is a filter that takes unstructured grid\ndata as input and generates unstructured grid data as output.\nvtkCleanUnstructuredGrid can merge duplicate points (with coincident\ncoordinates) using the vtkMergePoints object to merge points.\n\nSee Also:\n\nvtkCleanPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCleanUnstructuredGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCleanUnstructuredGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCleanUnstructuredGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

