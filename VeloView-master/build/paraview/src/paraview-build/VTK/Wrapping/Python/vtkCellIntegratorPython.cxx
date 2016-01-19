// python wrapper for vtkCellIntegrator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCellIntegrator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCellIntegrator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCellIntegratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCellIntegrator_Doc();


static PyObject *
PyvtkCellIntegrator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIntegrator *op = static_cast<vtkCellIntegrator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCellIntegrator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellIntegrator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIntegrator *op = static_cast<vtkCellIntegrator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellIntegrator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellIntegrator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIntegrator *op = static_cast<vtkCellIntegrator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellIntegrator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellIntegrator::NewInstance());

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
PyvtkCellIntegrator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCellIntegrator *tempr = vtkCellIntegrator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellIntegrator_Integrate(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Integrate");

  vtkDataSet *temp0 = NULL;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
    {
    double tempr = vtkCellIntegrator::Integrate(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCellIntegrator_Methods[] = {
  {(char*)"GetClassName", PyvtkCellIntegrator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCellIntegrator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCellIntegrator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCellIntegrator\nC++: vtkCellIntegrator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCellIntegrator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCellIntegrator\nC++: vtkCellIntegrator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Integrate", PyvtkCellIntegrator_Integrate, METH_VARARGS | METH_STATIC,
   (char*)"V.Integrate(vtkDataSet, int) -> float\nC++: static double Integrate(vtkDataSet *input, vtkIdType cellId)\n\nReturns length/area/volume of a 1D/2D/3D cell given by cell id.\nIf the length/area/volume cannot be calculated (because of\nunsupposed cell type), 0 is returned\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkCellIntegratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkCellIntegrator_Methods,
    "vtkCellIntegrator", modulename,
    NULL, NULL,
    PyvtkCellIntegrator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCellIntegrator_Doc()
{
  static const char *docstring[] = {
    "vtkCellIntegrator - Calculates length/area/volume of a cell\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCellIntegrator is a helper class that calculates the\nlength/area/volume of a 1D/2D/3D cell. The calculation is exact for\nlines, polylines, triangles, triangle strips, pixels, voxels, convex\npolygons, quads and tetrahedra. All other 3D cells are triangulated\nduring volume calculation. In such cases, the result may not be\nexact.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellIntegrator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellIntegratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellIntegrator", o) != 0)
    {
    Py_DECREF(o);
    }

}

