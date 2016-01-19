// python wrapper for vtkCoincidentTopologyResolutionPainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCoincidentTopologyResolutionPainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCoincidentTopologyResolutionPainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCoincidentTopologyResolutionPainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataPainterNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataPainterNew
#endif

static const char **PyvtkCoincidentTopologyResolutionPainter_Doc();


static PyObject *
PyvtkCoincidentTopologyResolutionPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentTopologyResolutionPainter *op = static_cast<vtkCoincidentTopologyResolutionPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCoincidentTopologyResolutionPainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentTopologyResolutionPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentTopologyResolutionPainter *op = static_cast<vtkCoincidentTopologyResolutionPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCoincidentTopologyResolutionPainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentTopologyResolutionPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentTopologyResolutionPainter *op = static_cast<vtkCoincidentTopologyResolutionPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCoincidentTopologyResolutionPainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCoincidentTopologyResolutionPainter::NewInstance());

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
PyvtkCoincidentTopologyResolutionPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCoincidentTopologyResolutionPainter *tempr = vtkCoincidentTopologyResolutionPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentTopologyResolutionPainter_RESOLVE_COINCIDENT_TOPOLOGY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RESOLVE_COINCIDENT_TOPOLOGY");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkCoincidentTopologyResolutionPainter::RESOLVE_COINCIDENT_TOPOLOGY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentTopologyResolutionPainter_Z_SHIFT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Z_SHIFT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleKey *tempr = vtkCoincidentTopologyResolutionPainter::Z_SHIFT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentTopologyResolutionPainter_POLYGON_OFFSET_PARAMETERS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POLYGON_OFFSET_PARAMETERS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleVectorKey *tempr = vtkCoincidentTopologyResolutionPainter::POLYGON_OFFSET_PARAMETERS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentTopologyResolutionPainter_POLYGON_OFFSET_FACES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POLYGON_OFFSET_FACES");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkCoincidentTopologyResolutionPainter::POLYGON_OFFSET_FACES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCoincidentTopologyResolutionPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkCoincidentTopologyResolutionPainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCoincidentTopologyResolutionPainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCoincidentTopologyResolutionPainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCoincidentTopologyResolutionPainter\nC++: vtkCoincidentTopologyResolutionPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCoincidentTopologyResolutionPainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkCoincidentTopologyResolutionPainter\nC++: vtkCoincidentTopologyResolutionPainter *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"RESOLVE_COINCIDENT_TOPOLOGY", PyvtkCoincidentTopologyResolutionPainter_RESOLVE_COINCIDENT_TOPOLOGY, METH_VARARGS | METH_STATIC,
   (char*)"V.RESOLVE_COINCIDENT_TOPOLOGY() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *RESOLVE_COINCIDENT_TOPOLOGY(\n    )\n\nSet/Get a global flag that controls whether coincident topology\n(e.g., a line on top of a polygon) is shifted to avoid z-buffer\nresolution (and hence rendering problems). If not off, there are\ntwo methods to choose from. PolygonOffset uses graphics systems\ncalls to shift polygons, but does not distinguish vertices and\nlines from one another. ShiftZBuffer remaps the z-buffer to\ndistinguish vertices, lines, and polygons, but does not always\nproduce acceptable results. If you use the ShiftZBuffer approach,\nyou may also want to set the ResolveCoincidentTopologyZShift\nvalue. (Note: not all mappers/graphics systems implement this\nfunctionality.)\n"},
  {(char*)"Z_SHIFT", PyvtkCoincidentTopologyResolutionPainter_Z_SHIFT, METH_VARARGS | METH_STATIC,
   (char*)"V.Z_SHIFT() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *Z_SHIFT()\n\nUsed to set the z-shift if ResolveCoincidentTopology is set to\nShiftZBuffer.\n"},
  {(char*)"POLYGON_OFFSET_PARAMETERS", PyvtkCoincidentTopologyResolutionPainter_POLYGON_OFFSET_PARAMETERS, METH_VARARGS | METH_STATIC,
   (char*)"V.POLYGON_OFFSET_PARAMETERS() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *POLYGON_OFFSET_PARAMETERS(\n    )\n\nUsed to set the polygon offset scale factor and units. Used when\nResolveCoincidentTopology is set to PolygonOffset.\n"},
  {(char*)"POLYGON_OFFSET_FACES", PyvtkCoincidentTopologyResolutionPainter_POLYGON_OFFSET_FACES, METH_VARARGS | METH_STATIC,
   (char*)"V.POLYGON_OFFSET_FACES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *POLYGON_OFFSET_FACES()\n\nWhen set and when RESOLVE_COINCIDENT_TOPOLOGY is set to use\npolygon offset, solid polygonal faces will be offsetted,\notherwise lines/vertices will be offsetted.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCoincidentTopologyResolutionPainter_StaticNew()
{
  return vtkCoincidentTopologyResolutionPainter::New();
}

PyObject *PyVTKClass_vtkCoincidentTopologyResolutionPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCoincidentTopologyResolutionPainter_StaticNew,
    PyvtkCoincidentTopologyResolutionPainter_Methods,
    "vtkCoincidentTopologyResolutionPainter", modulename,
    NULL, NULL,
    PyvtkCoincidentTopologyResolutionPainter_Doc(),
    PyVTKClass_vtkPolyDataPainterNew(modulename));
  return cls;
}

const char **PyvtkCoincidentTopologyResolutionPainter_Doc()
{
  static const char *docstring[] = {
    "vtkCoincidentTopologyResolutionPainter - painter that resolves\n\n",
    "Superclass: vtkPolyDataPainter\n\n",
    "Provides the ability to shift the z-buffer to resolve coincident\ntopology. For example, if you'd like to draw a mesh with some edges a\ndifferent color, and the edges lie on the mesh, this feature can be\nuseful to get nice looking lines.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCoincidentTopologyResolutionPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCoincidentTopologyResolutionPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCoincidentTopologyResolutionPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

