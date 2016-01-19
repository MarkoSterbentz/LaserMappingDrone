// python wrapper for vtkRectilinearGridToPointSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRectilinearGridToPointSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRectilinearGridToPointSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRectilinearGridToPointSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
#endif

static const char **PyvtkRectilinearGridToPointSet_Doc();


static PyObject *
PyvtkRectilinearGridToPointSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToPointSet *op = static_cast<vtkRectilinearGridToPointSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRectilinearGridToPointSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToPointSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToPointSet *op = static_cast<vtkRectilinearGridToPointSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRectilinearGridToPointSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToPointSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToPointSet *op = static_cast<vtkRectilinearGridToPointSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRectilinearGridToPointSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRectilinearGridToPointSet::NewInstance());

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
PyvtkRectilinearGridToPointSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRectilinearGridToPointSet *tempr = vtkRectilinearGridToPointSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRectilinearGridToPointSet_Methods[] = {
  {(char*)"GetClassName", PyvtkRectilinearGridToPointSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRectilinearGridToPointSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRectilinearGridToPointSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRectilinearGridToPointSet\nC++: vtkRectilinearGridToPointSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRectilinearGridToPointSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRectilinearGridToPointSet\nC++: vtkRectilinearGridToPointSet *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRectilinearGridToPointSet_StaticNew()
{
  return vtkRectilinearGridToPointSet::New();
}

PyObject *PyVTKClass_vtkRectilinearGridToPointSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRectilinearGridToPointSet_StaticNew,
    PyvtkRectilinearGridToPointSet_Methods,
    "vtkRectilinearGridToPointSet", modulename,
    NULL, NULL,
    PyvtkRectilinearGridToPointSet_Doc(),
    PyVTKClass_vtkStructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRectilinearGridToPointSet_Doc()
{
  static const char *docstring[] = {
    "vtkRectilinearGridToPointSet - Converts a vtkRectilinearGrid to a\nvtkPointSet\n\n",
    "Superclass: vtkStructuredGridAlgorithm\n\n",
    "vtkRectilinearGridToPointSet takes a vtkRectilinearGrid as an image\nand outputs an equivalent vtkStructuredGrid (which is a subclass of\nvtkPointSet).\n\nThanks:\n\nThis class was developed by Kenneth Moreland (kmorel@sandia.gov) from\nSandia National Laboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRectilinearGridToPointSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRectilinearGridToPointSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectilinearGridToPointSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

