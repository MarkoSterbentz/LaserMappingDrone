// python wrapper for vtkAppendRectilinearGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAppendRectilinearGrid.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAppendRectilinearGrid(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAppendRectilinearGridNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRectilinearGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkRectilinearGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkRectilinearGridAlgorithmNew
#endif

static const char **PyvtkAppendRectilinearGrid_Doc();


static PyObject *
PyvtkAppendRectilinearGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendRectilinearGrid *op = static_cast<vtkAppendRectilinearGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAppendRectilinearGrid::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendRectilinearGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendRectilinearGrid *op = static_cast<vtkAppendRectilinearGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAppendRectilinearGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendRectilinearGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendRectilinearGrid *op = static_cast<vtkAppendRectilinearGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAppendRectilinearGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAppendRectilinearGrid::NewInstance());

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
PyvtkAppendRectilinearGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAppendRectilinearGrid *tempr = vtkAppendRectilinearGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAppendRectilinearGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkAppendRectilinearGrid_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAppendRectilinearGrid_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAppendRectilinearGrid_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAppendRectilinearGrid\nC++: vtkAppendRectilinearGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAppendRectilinearGrid_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAppendRectilinearGrid\nC++: vtkAppendRectilinearGrid *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAppendRectilinearGrid_StaticNew()
{
  return vtkAppendRectilinearGrid::New();
}

PyObject *PyVTKClass_vtkAppendRectilinearGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAppendRectilinearGrid_StaticNew,
    PyvtkAppendRectilinearGrid_Methods,
    "vtkAppendRectilinearGrid", modulename,
    NULL, NULL,
    PyvtkAppendRectilinearGrid_Doc(),
    PyVTKClass_vtkRectilinearGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAppendRectilinearGrid_Doc()
{
  static const char *docstring[] = {
    "vtkAppendRectilinearGrid - appends rectliner grids together.\n\n",
    "Superclass: vtkRectilinearGridAlgorithm\n\n",
    "vtkAppendRectilinearGrid appends rectilinear grids to produce a\nsingle combined rectilinear grid. Inputs are appends based on their\nextents.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAppendRectilinearGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAppendRectilinearGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAppendRectilinearGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

