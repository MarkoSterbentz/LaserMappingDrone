// python wrapper for vtkQuadraturePointInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkQuadraturePointInterpolator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkQuadraturePointInterpolator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkQuadraturePointInterpolatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkQuadraturePointInterpolator_Doc();


static PyObject *
PyvtkQuadraturePointInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraturePointInterpolator *op = static_cast<vtkQuadraturePointInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkQuadraturePointInterpolator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraturePointInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraturePointInterpolator *op = static_cast<vtkQuadraturePointInterpolator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuadraturePointInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraturePointInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraturePointInterpolator *op = static_cast<vtkQuadraturePointInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkQuadraturePointInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuadraturePointInterpolator::NewInstance());

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
PyvtkQuadraturePointInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkQuadraturePointInterpolator *tempr = vtkQuadraturePointInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkQuadraturePointInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkQuadraturePointInterpolator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkQuadraturePointInterpolator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkQuadraturePointInterpolator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkQuadraturePointInterpolator\nC++: vtkQuadraturePointInterpolator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkQuadraturePointInterpolator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkQuadraturePointInterpolator\nC++: vtkQuadraturePointInterpolator *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkQuadraturePointInterpolator_StaticNew()
{
  return vtkQuadraturePointInterpolator::New();
}

PyObject *PyVTKClass_vtkQuadraturePointInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkQuadraturePointInterpolator_StaticNew,
    PyvtkQuadraturePointInterpolator_Methods,
    "vtkQuadraturePointInterpolator", modulename,
    NULL, NULL,
    PyvtkQuadraturePointInterpolator_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkQuadraturePointInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkQuadraturePointInterpolator\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "Interpolates each scalar/vector field in a vtkUnstrcturedGrid on its\ninput to a specific set of quadrature points. The set of quadrature\npoints is specified per array via a dictionary (ie an instance of\nvtkInformationQuadratureSchemeDefinitionVectorKey). contained in the\narray. The interpolated fields are placed in FieldData along with a\nset of per cell indexes, that allow random access to a given",
    " cells\nquadrature points.\n\nSee Also:\n\nvtkQuadratureSchemeDefinition, vtkQuadraturePointsGenerator,\nvtkInformationQuadratureSchemeDefinitionVectorKey\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuadraturePointInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkQuadraturePointInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuadraturePointInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

