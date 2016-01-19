// python wrapper for vtkAMRFragmentIntegration
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRFragmentIntegration.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRFragmentIntegration(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRFragmentIntegrationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkAMRFragmentIntegration_Doc();


static PyObject *
PyvtkAMRFragmentIntegration_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentIntegration *op = static_cast<vtkAMRFragmentIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRFragmentIntegration::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentIntegration_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentIntegration *op = static_cast<vtkAMRFragmentIntegration *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRFragmentIntegration::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentIntegration_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentIntegration *op = static_cast<vtkAMRFragmentIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRFragmentIntegration *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRFragmentIntegration::NewInstance());

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
PyvtkAMRFragmentIntegration_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRFragmentIntegration *tempr = vtkAMRFragmentIntegration::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRFragmentIntegration_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRFragmentIntegration_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRFragmentIntegration_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRFragmentIntegration_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRFragmentIntegration\nC++: vtkAMRFragmentIntegration *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRFragmentIntegration_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRFragmentIntegration\nC++: vtkAMRFragmentIntegration *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRFragmentIntegration_StaticNew()
{
  return vtkAMRFragmentIntegration::New();
}

PyObject *PyVTKClass_vtkAMRFragmentIntegrationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRFragmentIntegration_StaticNew,
    PyvtkAMRFragmentIntegration_Methods,
    "vtkAMRFragmentIntegration", modulename,
    NULL, NULL,
    PyvtkAMRFragmentIntegration_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAMRFragmentIntegration_Doc()
{
  static const char *docstring[] = {
    "vtkAMRFragmentIntegration - Generates fragment analysis from an\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "Input 0: The AMR Volume\n\n\n  Output 0: A multiblock containing tables of fragments, one block\n            for each requested material\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRFragmentIntegration(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRFragmentIntegrationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRFragmentIntegration", o) != 0)
    {
    Py_DECREF(o);
    }

}

