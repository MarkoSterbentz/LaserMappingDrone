// python wrapper for vtkEdgeCenters
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEdgeCenters.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEdgeCenters(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEdgeCentersNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkEdgeCenters_Doc();


static PyObject *
PyvtkEdgeCenters_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeCenters *op = static_cast<vtkEdgeCenters *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEdgeCenters::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeCenters_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeCenters *op = static_cast<vtkEdgeCenters *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEdgeCenters::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeCenters_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeCenters *op = static_cast<vtkEdgeCenters *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEdgeCenters *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEdgeCenters::NewInstance());

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
PyvtkEdgeCenters_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEdgeCenters *tempr = vtkEdgeCenters::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeCenters_SetVertexCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeCenters *op = static_cast<vtkEdgeCenters *>(vp);

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
      op->vtkEdgeCenters::SetVertexCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeCenters_GetVertexCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeCenters *op = static_cast<vtkEdgeCenters *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVertexCells() :
      op->vtkEdgeCenters::GetVertexCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeCenters_VertexCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeCenters *op = static_cast<vtkEdgeCenters *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VertexCellsOn();
      }
    else
      {
      op->vtkEdgeCenters::VertexCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeCenters_VertexCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeCenters *op = static_cast<vtkEdgeCenters *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VertexCellsOff();
      }
    else
      {
      op->vtkEdgeCenters::VertexCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkEdgeCenters_Methods[] = {
  {(char*)"GetClassName", PyvtkEdgeCenters_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEdgeCenters_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEdgeCenters_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEdgeCenters\nC++: vtkEdgeCenters *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEdgeCenters_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEdgeCenters\nC++: vtkEdgeCenters *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVertexCells", PyvtkEdgeCenters_SetVertexCells, METH_VARARGS,
   (char*)"V.SetVertexCells(int)\nC++: void SetVertexCells(int a)\n\nEnable/disable the generation of vertex cells.\n"},
  {(char*)"GetVertexCells", PyvtkEdgeCenters_GetVertexCells, METH_VARARGS,
   (char*)"V.GetVertexCells() -> int\nC++: int GetVertexCells()\n\nEnable/disable the generation of vertex cells.\n"},
  {(char*)"VertexCellsOn", PyvtkEdgeCenters_VertexCellsOn, METH_VARARGS,
   (char*)"V.VertexCellsOn()\nC++: void VertexCellsOn()\n\nEnable/disable the generation of vertex cells.\n"},
  {(char*)"VertexCellsOff", PyvtkEdgeCenters_VertexCellsOff, METH_VARARGS,
   (char*)"V.VertexCellsOff()\nC++: void VertexCellsOff()\n\nEnable/disable the generation of vertex cells.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEdgeCenters_StaticNew()
{
  return vtkEdgeCenters::New();
}

PyObject *PyVTKClass_vtkEdgeCentersNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEdgeCenters_StaticNew,
    PyvtkEdgeCenters_Methods,
    "vtkEdgeCenters", modulename,
    NULL, NULL,
    PyvtkEdgeCenters_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkEdgeCenters_Doc()
{
  static const char *docstring[] = {
    "vtkEdgeCenters - generate points at center of edges\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkEdgeCenters is a filter that takes as input any graph and\ngenerates on output points at the center of the cells in the dataset.\nThese points can be used for placing glyphs (vtkGlyph3D) or labeling\n(vtkLabeledDataMapper). (The center is the parametric center of the\ncell, not necessarily the geometric or bounding box center.) The edge\nattributes will be associated with the points on output.\n\nCave",
    "ats:\n\nYou can choose to generate just points or points and vertex cells.\nVertex cells are drawn during rendering; points are not. Use the ivar\nVertexCells to generate cells.\n\nSee Also:\n\nvtkGlyph3D vtkLabeledDataMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEdgeCenters(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEdgeCentersNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEdgeCenters", o) != 0)
    {
    Py_DECREF(o);
    }

}

