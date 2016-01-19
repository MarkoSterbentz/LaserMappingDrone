// python wrapper for vtkHierarchicalDataExtractDataSets
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHierarchicalDataExtractDataSets.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHierarchicalDataExtractDataSets(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHierarchicalDataExtractDataSetsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExtractDataSetsNew
extern "C" { PyObject *PyVTKClass_vtkExtractDataSetsNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractDataSetsNew
#endif

static const char **PyvtkHierarchicalDataExtractDataSets_Doc();


static PyObject *
PyvtkHierarchicalDataExtractDataSets_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataExtractDataSets *op = static_cast<vtkHierarchicalDataExtractDataSets *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHierarchicalDataExtractDataSets::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalDataExtractDataSets_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataExtractDataSets *op = static_cast<vtkHierarchicalDataExtractDataSets *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHierarchicalDataExtractDataSets::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalDataExtractDataSets_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataExtractDataSets *op = static_cast<vtkHierarchicalDataExtractDataSets *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHierarchicalDataExtractDataSets *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHierarchicalDataExtractDataSets::NewInstance());

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
PyvtkHierarchicalDataExtractDataSets_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHierarchicalDataExtractDataSets *tempr = vtkHierarchicalDataExtractDataSets::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalDataExtractDataSets_Methods[] = {
  {(char*)"GetClassName", PyvtkHierarchicalDataExtractDataSets_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHierarchicalDataExtractDataSets_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHierarchicalDataExtractDataSets_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHierarchicalDataExtractDataSets\nC++: vtkHierarchicalDataExtractDataSets *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHierarchicalDataExtractDataSets_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHierarchicalDataExtractDataSets\nC++: vtkHierarchicalDataExtractDataSets *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHierarchicalDataExtractDataSets_StaticNew()
{
  return vtkHierarchicalDataExtractDataSets::New();
}

PyObject *PyVTKClass_vtkHierarchicalDataExtractDataSetsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHierarchicalDataExtractDataSets_StaticNew,
    PyvtkHierarchicalDataExtractDataSets_Methods,
    "vtkHierarchicalDataExtractDataSets", modulename,
    NULL, NULL,
    PyvtkHierarchicalDataExtractDataSets_Doc(),
    PyVTKClass_vtkExtractDataSetsNew(modulename));
  return cls;
}

const char **PyvtkHierarchicalDataExtractDataSets_Doc()
{
  static const char *docstring[] = {
    "vtkHierarchicalDataExtractDataSets - extract a number of datasets\n\n",
    "Superclass: vtkExtractDataSets\n\n",
    "Legacy class. Use vtkExtractDataSets instead.\n\nSee Also:\n\nvtkExtractDataSets\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHierarchicalDataExtractDataSets(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHierarchicalDataExtractDataSetsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHierarchicalDataExtractDataSets", o) != 0)
    {
    Py_DECREF(o);
    }

}

