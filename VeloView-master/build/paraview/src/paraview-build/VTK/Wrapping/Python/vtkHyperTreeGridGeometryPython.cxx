// python wrapper for vtkHyperTreeGridGeometry
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHyperTreeGridGeometry.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHyperTreeGridGeometry(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHyperTreeGridGeometryNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkHyperTreeGridGeometry_Doc();


static PyObject *
PyvtkHyperTreeGridGeometry_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometry *op = static_cast<vtkHyperTreeGridGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHyperTreeGridGeometry::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometry_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometry *op = static_cast<vtkHyperTreeGridGeometry *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridGeometry::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometry_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometry *op = static_cast<vtkHyperTreeGridGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperTreeGridGeometry *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridGeometry::NewInstance());

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
PyvtkHyperTreeGridGeometry_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHyperTreeGridGeometry *tempr = vtkHyperTreeGridGeometry::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridGeometry_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperTreeGridGeometry_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperTreeGridGeometry_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperTreeGridGeometry_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHyperTreeGridGeometry\nC++: vtkHyperTreeGridGeometry *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperTreeGridGeometry_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperTreeGridGeometry\nC++: vtkHyperTreeGridGeometry *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperTreeGridGeometry_StaticNew()
{
  return vtkHyperTreeGridGeometry::New();
}

PyObject *PyVTKClass_vtkHyperTreeGridGeometryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperTreeGridGeometry_StaticNew,
    PyvtkHyperTreeGridGeometry_Methods,
    "vtkHyperTreeGridGeometry", modulename,
    NULL, NULL,
    PyvtkHyperTreeGridGeometry_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHyperTreeGridGeometry_Doc()
{
  static const char *docstring[] = {
    "vtkHyperTreeGridGeometry - Hyper tree grid outer surface\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "See Also:\n\nvtkHyperTreeGrid\n\nThanks:\n\nThis class was written by Philippe Pebay, Joachim Pouderoux and\nCharles Law, Kitware 2013 This work was supported in part by\nCommissariat a l'Energie Atomique (CEA/DIF)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperTreeGridGeometry(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperTreeGridGeometryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperTreeGridGeometry", o) != 0)
    {
    Py_DECREF(o);
    }

}

