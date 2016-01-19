// python wrapper for vtkExplicitCell
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExplicitCell.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExplicitCell(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExplicitCellNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkNonLinearCellNew
extern "C" { PyObject *PyVTKClass_vtkNonLinearCellNew(const char *); }
#define DECLARED_PyVTKClass_vtkNonLinearCellNew
#endif

static const char **PyvtkExplicitCell_Doc();


static PyObject *
PyvtkExplicitCell_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitCell *op = static_cast<vtkExplicitCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExplicitCell::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExplicitCell_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitCell *op = static_cast<vtkExplicitCell *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExplicitCell::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExplicitCell_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitCell *op = static_cast<vtkExplicitCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExplicitCell *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExplicitCell::NewInstance());

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
PyvtkExplicitCell_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExplicitCell *tempr = vtkExplicitCell::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExplicitCell_IsExplicitCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsExplicitCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitCell *op = static_cast<vtkExplicitCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsExplicitCell() :
      op->vtkExplicitCell::IsExplicitCell());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExplicitCell_SetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitCell *op = static_cast<vtkExplicitCell *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellId(temp0);
      }
    else
      {
      op->vtkExplicitCell::SetCellId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExplicitCell_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitCell *op = static_cast<vtkExplicitCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellId() :
      op->vtkExplicitCell::GetCellId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExplicitCell_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitCell *op = static_cast<vtkExplicitCell *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetDataSet(temp0);
      }
    else
      {
      op->vtkExplicitCell::SetDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExplicitCell_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitCell *op = static_cast<vtkExplicitCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet() :
      op->vtkExplicitCell::GetDataSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExplicitCell_Methods[] = {
  {(char*)"GetClassName", PyvtkExplicitCell_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExplicitCell_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExplicitCell_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExplicitCell\nC++: vtkExplicitCell *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExplicitCell_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExplicitCell\nC++: vtkExplicitCell *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsExplicitCell", PyvtkExplicitCell_IsExplicitCell, METH_VARARGS,
   (char*)"V.IsExplicitCell() -> int\nC++: virtual int IsExplicitCell()\n\nExplicit cells require additional representational information\nbeyond the usual cell type and connectivity list information.\nMost cells in VTK are implicit cells. The\nvtkCell::IsImplicitCell() virtual function is overloaded to\nreflect this requirement.\n"},
  {(char*)"SetCellId", PyvtkExplicitCell_SetCellId, METH_VARARGS,
   (char*)"V.SetCellId(int)\nC++: void SetCellId(vtkIdType a)\n\nSet/Get the cell id. This is necessary for explicit cells because\nthey often need to keep extra information (typically contained in\nthe cell data of a point set). This information might be things\nlike knot points/weights, boundaries, etc.\n"},
  {(char*)"GetCellId", PyvtkExplicitCell_GetCellId, METH_VARARGS,
   (char*)"V.GetCellId() -> int\nC++: vtkIdType GetCellId()\n\nSet/Get the cell id. This is necessary for explicit cells because\nthey often need to keep extra information (typically contained in\nthe cell data of a point set). This information might be things\nlike knot points/weights, boundaries, etc.\n"},
  {(char*)"SetDataSet", PyvtkExplicitCell_SetDataSet, METH_VARARGS,
   (char*)"V.SetDataSet(vtkDataSet)\nC++: virtual void SetDataSet(vtkDataSet *)\n\nSet/Get the mesh that owns this cell. This is necessary for\nexplicit cells because they often need to keep extra information\n(typically contained in the cell data of a point set). This\ninformation might be things like knot points/weights, boundaries,\netc.\n"},
  {(char*)"GetDataSet", PyvtkExplicitCell_GetDataSet, METH_VARARGS,
   (char*)"V.GetDataSet() -> vtkDataSet\nC++: vtkDataSet *GetDataSet()\n\nSet/Get the mesh that owns this cell. This is necessary for\nexplicit cells because they often need to keep extra information\n(typically contained in the cell data of a point set). This\ninformation might be things like knot points/weights, boundaries,\netc.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkExplicitCellNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkExplicitCell_Methods,
    "vtkExplicitCell", modulename,
    NULL, NULL,
    PyvtkExplicitCell_Doc(),
    PyVTKClass_vtkNonLinearCellNew(modulename));
  return cls;
}

const char **PyvtkExplicitCell_Doc()
{
  static const char *docstring[] = {
    "vtkExplicitCell - abstract superclass for cells requiring an explicit\nrepresentation\n\n",
    "Superclass: vtkNonLinearCell\n\n",
    "vtkExplicitCell is an abstract superclass for cells that cannot be\nrepresented implicitly. An implicit representation requires only a\ncell type and connectivity list (e.g., triangle). Explicit cells\nrequire information beyond this; e.g., a NURBS surface or cells that\nrequire explicit face/edge descriptions. Most cells in VTK are\nimplicitly represented.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExplicitCell(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExplicitCellNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExplicitCell", o) != 0)
    {
    Py_DECREF(o);
    }

}

