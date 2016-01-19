// python wrapper for vtkUniformGridGhostDataGenerator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUniformGridGhostDataGenerator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUniformGridGhostDataGenerator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUniformGridGhostDataGeneratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetGhostGeneratorNew
extern "C" { PyObject *PyVTKClass_vtkDataSetGhostGeneratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetGhostGeneratorNew
#endif

static const char **PyvtkUniformGridGhostDataGenerator_Doc();


static PyObject *
PyvtkUniformGridGhostDataGenerator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridGhostDataGenerator *op = static_cast<vtkUniformGridGhostDataGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUniformGridGhostDataGenerator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridGhostDataGenerator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridGhostDataGenerator *op = static_cast<vtkUniformGridGhostDataGenerator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUniformGridGhostDataGenerator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridGhostDataGenerator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridGhostDataGenerator *op = static_cast<vtkUniformGridGhostDataGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUniformGridGhostDataGenerator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUniformGridGhostDataGenerator::NewInstance());

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
PyvtkUniformGridGhostDataGenerator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUniformGridGhostDataGenerator *tempr = vtkUniformGridGhostDataGenerator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUniformGridGhostDataGenerator_Methods[] = {
  {(char*)"GetClassName", PyvtkUniformGridGhostDataGenerator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUniformGridGhostDataGenerator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUniformGridGhostDataGenerator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUniformGridGhostDataGenerator\nC++: vtkUniformGridGhostDataGenerator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUniformGridGhostDataGenerator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUniformGridGhostDataGenerator\nC++: vtkUniformGridGhostDataGenerator *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUniformGridGhostDataGenerator_StaticNew()
{
  return vtkUniformGridGhostDataGenerator::New();
}

PyObject *PyVTKClass_vtkUniformGridGhostDataGeneratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUniformGridGhostDataGenerator_StaticNew,
    PyvtkUniformGridGhostDataGenerator_Methods,
    "vtkUniformGridGhostDataGenerator", modulename,
    NULL, NULL,
    PyvtkUniformGridGhostDataGenerator_Doc(),
    PyVTKClass_vtkDataSetGhostGeneratorNew(modulename));
  return cls;
}

const char **PyvtkUniformGridGhostDataGenerator_Doc()
{
  static const char *docstring[] = {
    "vtkUniformGridGhostDataGenerator.h--Ghost generator for uniform grids.\n\n",
    "Superclass: vtkDataSetGhostGenerator\n\n",
    "A concrete implementation of vtkDataSetGhostGenerator for generating\nghost\n data on partitioned uniform grids on a single process. For a\ndistributed\n data-set see vtkPUniformGridGhostDataGenerator.\n\nCaveats:\n\n\n \n  \n   The input multi-block dataset must:\n   \n     Have the whole-extent set \n     Each block must be an instance of vtkUniformGrid \n     Each block must have its corresponding global exte",
    "nt set in the\n          meta-data using the PIECE_EXTENT() key \n     The spacing of each block is the same \n     All blocks must have the same fields loaded \n   \n  \n  \n   The code currently does not handle the following cases:\n   \n     Ghost cells along Periodic boundaries\n     Growing ghost layers beyond the extents of the neighboring grid\n   \n  \n \n\nSee Also:\n\n\n vtkDataSetGhostGenerator, vtkPUnif",
    "ormGhostDataGenerator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUniformGridGhostDataGenerator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUniformGridGhostDataGeneratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUniformGridGhostDataGenerator", o) != 0)
    {
    Py_DECREF(o);
    }

}

