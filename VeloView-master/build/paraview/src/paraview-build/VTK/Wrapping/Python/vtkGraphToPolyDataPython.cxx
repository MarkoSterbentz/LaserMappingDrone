// python wrapper for vtkGraphToPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGraphToPolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGraphToPolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGraphToPolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGraphToPolyData_Doc();


static PyObject *
PyvtkGraphToPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGraphToPolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphToPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraphToPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphToPolyData::NewInstance());

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
PyvtkGraphToPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGraphToPolyData *tempr = vtkGraphToPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_SetEdgeGlyphOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeGlyphOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeGlyphOutput(temp0);
      }
    else
      {
      op->vtkGraphToPolyData::SetEdgeGlyphOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_GetEdgeGlyphOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeGlyphOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeGlyphOutput() :
      op->vtkGraphToPolyData::GetEdgeGlyphOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_EdgeGlyphOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeGlyphOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeGlyphOutputOn();
      }
    else
      {
      op->vtkGraphToPolyData::EdgeGlyphOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_EdgeGlyphOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeGlyphOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeGlyphOutputOff();
      }
    else
      {
      op->vtkGraphToPolyData::EdgeGlyphOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_SetEdgeGlyphPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeGlyphPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeGlyphPosition(temp0);
      }
    else
      {
      op->vtkGraphToPolyData::SetEdgeGlyphPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToPolyData_GetEdgeGlyphPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeGlyphPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToPolyData *op = static_cast<vtkGraphToPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEdgeGlyphPosition() :
      op->vtkGraphToPolyData::GetEdgeGlyphPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphToPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphToPolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphToPolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphToPolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGraphToPolyData\nC++: vtkGraphToPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphToPolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphToPolyData\nC++: vtkGraphToPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEdgeGlyphOutput", PyvtkGraphToPolyData_SetEdgeGlyphOutput, METH_VARARGS,
   (char*)"V.SetEdgeGlyphOutput(bool)\nC++: void SetEdgeGlyphOutput(bool a)\n\nCreate a second output containing points and orientation vectors\nfor drawing arrows or other glyphs on edges.  This output should\nbe set as the first input to vtkGlyph3D to place glyphs on the\nedges. vtkGlyphSource2D's VTK_EDGEARROW_GLYPH provides a good\nglyph for drawing arrows. Default value is off.\n"},
  {(char*)"GetEdgeGlyphOutput", PyvtkGraphToPolyData_GetEdgeGlyphOutput, METH_VARARGS,
   (char*)"V.GetEdgeGlyphOutput() -> bool\nC++: bool GetEdgeGlyphOutput()\n\nCreate a second output containing points and orientation vectors\nfor drawing arrows or other glyphs on edges.  This output should\nbe set as the first input to vtkGlyph3D to place glyphs on the\nedges. vtkGlyphSource2D's VTK_EDGEARROW_GLYPH provides a good\nglyph for drawing arrows. Default value is off.\n"},
  {(char*)"EdgeGlyphOutputOn", PyvtkGraphToPolyData_EdgeGlyphOutputOn, METH_VARARGS,
   (char*)"V.EdgeGlyphOutputOn()\nC++: void EdgeGlyphOutputOn()\n\nCreate a second output containing points and orientation vectors\nfor drawing arrows or other glyphs on edges.  This output should\nbe set as the first input to vtkGlyph3D to place glyphs on the\nedges. vtkGlyphSource2D's VTK_EDGEARROW_GLYPH provides a good\nglyph for drawing arrows. Default value is off.\n"},
  {(char*)"EdgeGlyphOutputOff", PyvtkGraphToPolyData_EdgeGlyphOutputOff, METH_VARARGS,
   (char*)"V.EdgeGlyphOutputOff()\nC++: void EdgeGlyphOutputOff()\n\nCreate a second output containing points and orientation vectors\nfor drawing arrows or other glyphs on edges.  This output should\nbe set as the first input to vtkGlyph3D to place glyphs on the\nedges. vtkGlyphSource2D's VTK_EDGEARROW_GLYPH provides a good\nglyph for drawing arrows. Default value is off.\n"},
  {(char*)"SetEdgeGlyphPosition", PyvtkGraphToPolyData_SetEdgeGlyphPosition, METH_VARARGS,
   (char*)"V.SetEdgeGlyphPosition(float)\nC++: void SetEdgeGlyphPosition(double a)\n\nThe position of the glyph point along the edge. 0 puts a glyph\npoint at the source of each edge. 1 puts a glyph point at the\ntarget of each edge. An intermediate value will place the glyph\npoint between the source and target. The default value is 1.\n"},
  {(char*)"GetEdgeGlyphPosition", PyvtkGraphToPolyData_GetEdgeGlyphPosition, METH_VARARGS,
   (char*)"V.GetEdgeGlyphPosition() -> float\nC++: double GetEdgeGlyphPosition()\n\nThe position of the glyph point along the edge. 0 puts a glyph\npoint at the source of each edge. 1 puts a glyph point at the\ntarget of each edge. An intermediate value will place the glyph\npoint between the source and target. The default value is 1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphToPolyData_StaticNew()
{
  return vtkGraphToPolyData::New();
}

PyObject *PyVTKClass_vtkGraphToPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphToPolyData_StaticNew,
    PyvtkGraphToPolyData_Methods,
    "vtkGraphToPolyData", modulename,
    NULL, NULL,
    PyvtkGraphToPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGraphToPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkGraphToPolyData - convert a vtkGraph to vtkPolyData\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "Converts a vtkGraph to a vtkPolyData.  This assumes that the points\nof the graph have already been filled (perhaps by vtkGraphLayout),\nand coverts all the edge of the graph into lines in the polydata. The\nvertex data is passed along to the point data, and the edge data is\npassed along to the cell data.\n\nOnly the owned graph edges (i.e. edges with ghost level 0) are copied\ninto the vtkPolyData.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphToPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphToPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphToPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

