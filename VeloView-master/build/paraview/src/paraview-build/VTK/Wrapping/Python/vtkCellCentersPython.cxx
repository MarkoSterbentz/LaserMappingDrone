// python wrapper for vtkCellCenters
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCellCenters.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCellCenters(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCellCentersNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkCellCenters_Doc();


static PyObject *
PyvtkCellCenters_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCellCenters::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenters_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellCenters::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenters_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellCenters *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellCenters::NewInstance());

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
PyvtkCellCenters_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCellCenters *tempr = vtkCellCenters::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenters_SetVertexCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexCells(temp0);
      }
    else
      {
      op->vtkCellCenters::SetVertexCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenters_GetVertexCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVertexCells() :
      op->vtkCellCenters::GetVertexCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenters_VertexCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VertexCellsOn();
      }
    else
      {
      op->vtkCellCenters::VertexCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenters_VertexCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VertexCellsOff();
      }
    else
      {
      op->vtkCellCenters::VertexCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCellCenters_Methods[] = {
  {(char*)"GetClassName", PyvtkCellCenters_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCellCenters_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCellCenters_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCellCenters\nC++: vtkCellCenters *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCellCenters_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCellCenters\nC++: vtkCellCenters *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVertexCells", PyvtkCellCenters_SetVertexCells, METH_VARARGS,
   (char*)"V.SetVertexCells(int)\nC++: void SetVertexCells(int a)\n\nEnable/disable the generation of vertex cells. The default is\nOff.\n"},
  {(char*)"GetVertexCells", PyvtkCellCenters_GetVertexCells, METH_VARARGS,
   (char*)"V.GetVertexCells() -> int\nC++: int GetVertexCells()\n\nEnable/disable the generation of vertex cells. The default is\nOff.\n"},
  {(char*)"VertexCellsOn", PyvtkCellCenters_VertexCellsOn, METH_VARARGS,
   (char*)"V.VertexCellsOn()\nC++: void VertexCellsOn()\n\nEnable/disable the generation of vertex cells. The default is\nOff.\n"},
  {(char*)"VertexCellsOff", PyvtkCellCenters_VertexCellsOff, METH_VARARGS,
   (char*)"V.VertexCellsOff()\nC++: void VertexCellsOff()\n\nEnable/disable the generation of vertex cells. The default is\nOff.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCellCenters_StaticNew()
{
  return vtkCellCenters::New();
}

PyObject *PyVTKClass_vtkCellCentersNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCellCenters_StaticNew,
    PyvtkCellCenters_Methods,
    "vtkCellCenters", modulename,
    NULL, NULL,
    PyvtkCellCenters_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCellCenters_Doc()
{
  static const char *docstring[] = {
    "vtkCellCenters - generate points at center of cells\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkCellCenters is a filter that takes as input any dataset and\ngenerates on output points at the center of the cells in the dataset.\nThese points can be used for placing glyphs (vtkGlyph3D) or labeling\n(vtkLabeledDataMapper). (The center is the parametric center of the\ncell, not necessarily the geometric or bounding box center.) The cell\nattributes will be associated with the points on output.\n\nCa",
    "veats:\n\nYou can choose to generate just points or points and vertex cells.\nVertex cells are drawn during rendering; points are not. Use the ivar\nVertexCells to generate cells.\n\nSee Also:\n\nvtkGlyph3D vtkLabeledDataMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellCenters(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellCentersNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellCenters", o) != 0)
    {
    Py_DECREF(o);
    }

}

