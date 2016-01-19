// python wrapper for vtkStructuredGridGhostDataGenerator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStructuredGridGhostDataGenerator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStructuredGridGhostDataGenerator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStructuredGridGhostDataGeneratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetGhostGeneratorNew
extern "C" { PyObject *PyVTKClass_vtkDataSetGhostGeneratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetGhostGeneratorNew
#endif

static const char **PyvtkStructuredGridGhostDataGenerator_Doc();


static PyObject *
PyvtkStructuredGridGhostDataGenerator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridGhostDataGenerator *op = static_cast<vtkStructuredGridGhostDataGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStructuredGridGhostDataGenerator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridGhostDataGenerator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridGhostDataGenerator *op = static_cast<vtkStructuredGridGhostDataGenerator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredGridGhostDataGenerator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridGhostDataGenerator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridGhostDataGenerator *op = static_cast<vtkStructuredGridGhostDataGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredGridGhostDataGenerator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredGridGhostDataGenerator::NewInstance());

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
PyvtkStructuredGridGhostDataGenerator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStructuredGridGhostDataGenerator *tempr = vtkStructuredGridGhostDataGenerator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredGridGhostDataGenerator_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredGridGhostDataGenerator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredGridGhostDataGenerator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredGridGhostDataGenerator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStructuredGridGhostDataGenerator\nC++: vtkStructuredGridGhostDataGenerator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredGridGhostDataGenerator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredGridGhostDataGenerator\nC++: vtkStructuredGridGhostDataGenerator *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredGridGhostDataGenerator_StaticNew()
{
  return vtkStructuredGridGhostDataGenerator::New();
}

PyObject *PyVTKClass_vtkStructuredGridGhostDataGeneratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredGridGhostDataGenerator_StaticNew,
    PyvtkStructuredGridGhostDataGenerator_Methods,
    "vtkStructuredGridGhostDataGenerator", modulename,
    NULL, NULL,
    PyvtkStructuredGridGhostDataGenerator_Doc(),
    PyVTKClass_vtkDataSetGhostGeneratorNew(modulename));
  return cls;
}

const char **PyvtkStructuredGridGhostDataGenerator_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredGridGhostDataGenerator.h-Ghost generator for structured\ngrids.\n\n",
    "Superclass: vtkDataSetGhostGenerator\n\n",
    "A concrete implementation of vtkDataSetGhostGenerator for generating\nghost\n data on partitioned structured grids on a singled process. For a\ndistributed\n data-set see vtkPStructuredGridGhostDataGenerator.\n\nCaveats:\n\n\n  \n   The input multi-block dataset must:\n   \n     Have the whole-extent set \n     Each block must be an instance of vtkStructuredGrid \n     Each block must have its corresponding glo",
    "bal extent set in the\n          meta-data using the PIECE_EXTENT() key \n     All blocks must have the same fields loaded \n   \n  \n  \n   The code currently does not handle the following cases:\n   \n     Ghost cells along Periodic boundaries\n     Growing ghost layers beyond the extents of the neighboring grid\n   \n   \n\nSee Also:\n\nvtkDataSetGhostGenerator, vtkPStructuredGridGhostDataGenerator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredGridGhostDataGenerator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredGridGhostDataGeneratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredGridGhostDataGenerator", o) != 0)
    {
    Py_DECREF(o);
    }

}

