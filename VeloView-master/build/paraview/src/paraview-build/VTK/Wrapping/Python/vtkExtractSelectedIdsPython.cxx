// python wrapper for vtkExtractSelectedIds
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractSelectedIds.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractSelectedIds(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractSelectedIdsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
extern "C" { PyObject *PyVTKClass_vtkExtractSelectionBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
#endif

static const char **PyvtkExtractSelectedIds_Doc();


static PyObject *
PyvtkExtractSelectedIds_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedIds *op = static_cast<vtkExtractSelectedIds *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractSelectedIds::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedIds_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedIds *op = static_cast<vtkExtractSelectedIds *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSelectedIds::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedIds_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedIds *op = static_cast<vtkExtractSelectedIds *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractSelectedIds *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSelectedIds::NewInstance());

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
PyvtkExtractSelectedIds_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractSelectedIds *tempr = vtkExtractSelectedIds::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractSelectedIds_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractSelectedIds_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractSelectedIds_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractSelectedIds_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractSelectedIds\nC++: vtkExtractSelectedIds *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractSelectedIds_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractSelectedIds\nC++: vtkExtractSelectedIds *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractSelectedIds_StaticNew()
{
  return vtkExtractSelectedIds::New();
}

PyObject *PyVTKClass_vtkExtractSelectedIdsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractSelectedIds_StaticNew,
    PyvtkExtractSelectedIds_Methods,
    "vtkExtractSelectedIds", modulename,
    NULL, NULL,
    PyvtkExtractSelectedIds_Doc(),
    PyVTKClass_vtkExtractSelectionBaseNew(modulename));
  return cls;
}

const char **PyvtkExtractSelectedIds_Doc()
{
  static const char *docstring[] = {
    "vtkExtractSelectedIds - extract a list of cells from a dataset\n\n",
    "Superclass: vtkExtractSelectionBase\n\n",
    "vtkExtractSelectedIds extracts a set of cells and points from within\na vtkDataSet. The set of ids to extract are listed within a\nvtkSelection. This filter adds a scalar array called\nvtkOriginalCellIds that says what input cell produced each output\ncell. This is an example of a Pedigree ID which helps to trace back\nresults. Depending on whether the selection has GLOBALIDS, VALUES or\nINDICES, the se",
    "lection will use the contents of the array named in\nthe GLOBALIDS DataSetAttribute, and arbitrary array, or the position\n(tuple id or number) within the cell or point array.\n\nSee Also:\n\nvtkSelection vtkExtractSelection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractSelectedIds(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractSelectedIdsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractSelectedIds", o) != 0)
    {
    Py_DECREF(o);
    }

}

