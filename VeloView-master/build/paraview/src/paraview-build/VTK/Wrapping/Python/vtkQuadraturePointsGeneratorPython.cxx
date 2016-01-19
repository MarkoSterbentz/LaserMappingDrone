// python wrapper for vtkQuadraturePointsGenerator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkQuadraturePointsGenerator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkQuadraturePointsGenerator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkQuadraturePointsGeneratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkQuadraturePointsGenerator_Doc();


static PyObject *
PyvtkQuadraturePointsGenerator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraturePointsGenerator *op = static_cast<vtkQuadraturePointsGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkQuadraturePointsGenerator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraturePointsGenerator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraturePointsGenerator *op = static_cast<vtkQuadraturePointsGenerator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuadraturePointsGenerator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraturePointsGenerator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraturePointsGenerator *op = static_cast<vtkQuadraturePointsGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkQuadraturePointsGenerator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuadraturePointsGenerator::NewInstance());

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
PyvtkQuadraturePointsGenerator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkQuadraturePointsGenerator *tempr = vtkQuadraturePointsGenerator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkQuadraturePointsGenerator_Methods[] = {
  {(char*)"GetClassName", PyvtkQuadraturePointsGenerator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkQuadraturePointsGenerator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkQuadraturePointsGenerator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkQuadraturePointsGenerator\nC++: vtkQuadraturePointsGenerator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkQuadraturePointsGenerator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkQuadraturePointsGenerator\nC++: vtkQuadraturePointsGenerator *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkQuadraturePointsGenerator_StaticNew()
{
  return vtkQuadraturePointsGenerator::New();
}

PyObject *PyVTKClass_vtkQuadraturePointsGeneratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkQuadraturePointsGenerator_StaticNew,
    PyvtkQuadraturePointsGenerator_Methods,
    "vtkQuadraturePointsGenerator", modulename,
    NULL, NULL,
    PyvtkQuadraturePointsGenerator_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkQuadraturePointsGenerator_Doc()
{
  static const char *docstring[] = {
    "vtkQuadraturePointsGenerator\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "Create a vtkPolyData on its output containing the vertices for the\nquadrature points for one of the vtkDataArrays present on its input\nvtkUnstructuredGrid. If the input data set has has FieldData\ngenerated by vtkQuadraturePointInterpolator then this will be set as\npoint data. Note: Point sets are generated per field array. This is\nbecause each field array may contain its own dictionary.\n\nSee also:",
    "\n\nvtkQuadraturePointInterpolator, vtkQuadratureSchemeDefinition,\nvtkInformationQuadratureSchemeDefinitionVectorKey\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuadraturePointsGenerator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkQuadraturePointsGeneratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuadraturePointsGenerator", o) != 0)
    {
    Py_DECREF(o);
    }

}

