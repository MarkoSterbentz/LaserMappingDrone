// python wrapper for vtkExtractCells
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractCells.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractCells(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractCellsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkExtractCells_Doc();


static PyObject *
PyvtkExtractCells_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractCells::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCells_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractCells::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCells_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractCells *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractCells::NewInstance());

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
PyvtkExtractCells_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractCells *tempr = vtkExtractCells::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCells_SetCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  vtkIdList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->SetCellList(temp0);
      }
    else
      {
      op->vtkExtractCells::SetCellList(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCells_AddCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  vtkIdList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->AddCellList(temp0);
      }
    else
      {
      op->vtkExtractCells::AddCellList(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCells_AddCellRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddCellRange(temp0, temp1);
      }
    else
      {
      op->vtkExtractCells::AddCellRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractCells_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractCells_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractCells_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractCells_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractCells\nC++: vtkExtractCells *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractCells_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractCells\nC++: vtkExtractCells *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCellList", PyvtkExtractCells_SetCellList, METH_VARARGS,
   (char*)"V.SetCellList(vtkIdList)\nC++: void SetCellList(vtkIdList *l)\n\nSet the list of cell IDs that the output vtkUnstructuredGrid will\nbe composed of.  Replaces any other cell ID list supplied so far.\n (Set to NULL to free memory used by cell list.)\n"},
  {(char*)"AddCellList", PyvtkExtractCells_AddCellList, METH_VARARGS,
   (char*)"V.AddCellList(vtkIdList)\nC++: void AddCellList(vtkIdList *l)\n\nAdd the supplied list of cell IDs to those that will be included\nin the output vtkUnstructuredGrid.\n"},
  {(char*)"AddCellRange", PyvtkExtractCells_AddCellRange, METH_VARARGS,
   (char*)"V.AddCellRange(int, int)\nC++: void AddCellRange(vtkIdType from, vtkIdType to)\n\nAdd this range of cell IDs to those that will be included in the\noutput vtkUnstructuredGrid.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractCells_StaticNew()
{
  return vtkExtractCells::New();
}

PyObject *PyVTKClass_vtkExtractCellsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractCells_StaticNew,
    PyvtkExtractCells_Methods,
    "vtkExtractCells", modulename,
    NULL, NULL,
    PyvtkExtractCells_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractCells_Doc()
{
  static const char *docstring[] = {
    "vtkExtractCells - subset a vtkDataSet to create a vtkUnstructuredGrid\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "Given a vtkDataSet and a list of cell Ids, create a\nvtkUnstructuredGrid\n   composed of these cells.  If the cell list is empty when\nvtkExtractCells\n   executes, it will set up the ugrid, point and cell arrays, with no\npoints,\n   cells or data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractCells(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractCellsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractCells", o) != 0)
    {
    Py_DECREF(o);
    }

}

