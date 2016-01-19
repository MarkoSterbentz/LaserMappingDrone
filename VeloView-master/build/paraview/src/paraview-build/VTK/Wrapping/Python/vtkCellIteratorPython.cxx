// python wrapper for vtkCellIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCellIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCellIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCellIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCellIterator_Doc();


static PyObject *
PyvtkCellIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkCellIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
    {
    vtkCellIterator *tempr = vtkCellIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellIterator::NewInstance());

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
PyvtkCellIterator_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal();
      }
    else
      {
      op->vtkCellIterator::InitTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellIterator_GoToNextCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToNextCell();
      }
    else
      {
      op->vtkCellIterator::GoToNextCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    bool tempr = op->IsDoneWithTraversal();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellIterator_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkCellIterator::GetCellType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellIterator_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetCellId();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellIterator_GetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetPointIds() :
      op->vtkCellIterator::GetPointIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellIterator_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkCellIterator::GetPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellIterator_GetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetFaces() :
      op->vtkCellIterator::GetFaces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellIterator_GetCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  vtkGenericCell *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericCell"))
    {
    if (ap.IsBound())
      {
      op->GetCell(temp0);
      }
    else
      {
      op->vtkCellIterator::GetCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellIterator_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkCellIterator::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellIterator_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfFaces() :
      op->vtkCellIterator::GetNumberOfFaces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCellIterator_Methods[] = {
  {(char*)"IsTypeOf", PyvtkCellIterator_IsTypeOf, METH_VARARGS | METH_STATIC,
   (char*)"V.IsTypeOf(string) -> int\nC++: static int IsTypeOf(const char *type)\n\n"},
  {(char*)"IsA", PyvtkCellIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: virtual int IsA(const char *type)\n\n"},
  {(char*)"SafeDownCast", PyvtkCellIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObjectBase) -> vtkCellIterator\nC++: static vtkCellIterator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {(char*)"NewInstance", PyvtkCellIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCellIterator\nC++: vtkCellIterator *NewInstance()\n\n"},
  {(char*)"InitTraversal", PyvtkCellIterator_InitTraversal, METH_VARARGS,
   (char*)"V.InitTraversal()\nC++: void InitTraversal()\n\nReset to the first cell.\n"},
  {(char*)"GoToNextCell", PyvtkCellIterator_GoToNextCell, METH_VARARGS,
   (char*)"V.GoToNextCell()\nC++: void GoToNextCell()\n\nIncrement to next cell. Always safe to call.\n"},
  {(char*)"IsDoneWithTraversal", PyvtkCellIterator_IsDoneWithTraversal, METH_VARARGS,
   (char*)"V.IsDoneWithTraversal() -> bool\nC++: virtual bool IsDoneWithTraversal()\n\nReturns false while the iterator is valid. Always safe to call.\n"},
  {(char*)"GetCellType", PyvtkCellIterator_GetCellType, METH_VARARGS,
   (char*)"V.GetCellType() -> int\nC++: int GetCellType()\n\nGet the current cell type (e.g. VTK_LINE, VTK_VERTEX, VTK_TETRA,\netc). This should only be called when IsDoneWithTraversal()\nreturns false.\n"},
  {(char*)"GetCellId", PyvtkCellIterator_GetCellId, METH_VARARGS,
   (char*)"V.GetCellId() -> int\nC++: virtual vtkIdType GetCellId()\n\nGet the id of the current cell.\n"},
  {(char*)"GetPointIds", PyvtkCellIterator_GetPointIds, METH_VARARGS,
   (char*)"V.GetPointIds() -> vtkIdList\nC++: vtkIdList *GetPointIds()\n\nGet the ids of the points in the current cell. This should only\nbe called when IsDoneWithTraversal() returns false.\n"},
  {(char*)"GetPoints", PyvtkCellIterator_GetPoints, METH_VARARGS,
   (char*)"V.GetPoints() -> vtkPoints\nC++: vtkPoints *GetPoints()\n\nGet the points in the current cell. This is usually a very\nexpensive call, and should be avoided when possible. This should\nonly be called when IsDoneWithTraversal() returns false.\n"},
  {(char*)"GetFaces", PyvtkCellIterator_GetFaces, METH_VARARGS,
   (char*)"V.GetFaces() -> vtkIdList\nC++: vtkIdList *GetFaces()\n\nGet the faces for a polyhedral cell.\n"},
  {(char*)"GetCell", PyvtkCellIterator_GetCell, METH_VARARGS,
   (char*)"V.GetCell(vtkGenericCell)\nC++: void GetCell(vtkGenericCell *cell)\n\nWrite the current full cell information into the argument. This\nis usually a very expensive call, and should be avoided when\npossible. This should only be called when IsDoneWithTraversal()\nreturns false.\n"},
  {(char*)"GetNumberOfPoints", PyvtkCellIterator_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nReturn the number of points in the current cell. This should only\nbe called when IsDoneWithTraversal() returns false.\n"},
  {(char*)"GetNumberOfFaces", PyvtkCellIterator_GetNumberOfFaces, METH_VARARGS,
   (char*)"V.GetNumberOfFaces() -> int\nC++: vtkIdType GetNumberOfFaces()\n\nReturn the number of faces in the current polyhedral cell. This\nshould only be called when IsDoneWithTraversal() returns false.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkCellIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkCellIterator_Methods,
    "vtkCellIterator", modulename,
    NULL, NULL,
    PyvtkCellIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCellIterator_Doc()
{
  static const char *docstring[] = {
    "vtkCellIterator - Efficient cell iterator for vtkDataSet topologies.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCellIterator provides a method for traversing cells in a data set.\nCall the vtkDataSet::NewCellIterator() method to use this class.\n\nThe cell is represented as a set of three pieces of information: The\ncell type, the ids of the points constituting the cell, and the\npoints themselves. This iterator fetches these as needed. If only the\ncell type is used, the type is not looked up until GetCellTyp",
    "e is\ncalled, and the point information is left uninitialized. This allows\nefficient screening of cells, since expensive point lookups may be\nskipped depending on the cell type/etc.\n\nAn example usage of this class: ~~~ void myWorkerFunction(vtkDataSet\n*ds) {\n  vtkCellIterator *it = ds->NewCellIterator();\n  for (it->InitTraversal(); it->IsDoneWithTraversal();\nit->GoToNextCell())\n    {\n    if (it->Ge",
    "tCellType() != VTK_TETRA)\n      {\n      continue; /* Skip non-tetrahedral cells */\n      }\n\n\n    vtkIdList *pointIds = it->GetPointIds();\n    /* Do screening on the point ids, maybe figure out scalar range\nand skip\n       cells that do not lie in a certain range? */\n\n\n    vtkPoints *points = it->GetPoints();\n    /* Do work using the cell points, or ... */\n\n\n    vtkGenericCell *cell = ...;\n    it->",
    "GetCell(cell);\n    /* ... do work with a vtkCell. */\n    }\n  it->Delete(); } ~~~\n\nThe example above pulls in bits of information as needed to filter\nout cells that aren't relevent. The least expensive lookups are\nperformed first (cell type, then point ids, then points/full cell) to\nprevent wasted cycles fetching unnecessary data. Also note that at\nthe end of the loop, the iterator must be deleted ",
    "as these iterators\nare vtkObject subclasses.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

