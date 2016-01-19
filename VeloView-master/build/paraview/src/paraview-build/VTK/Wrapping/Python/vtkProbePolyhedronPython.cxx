// python wrapper for vtkProbePolyhedron
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProbePolyhedron.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProbePolyhedron(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProbePolyhedronNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkProbePolyhedron_Doc();


static PyObject *
PyvtkProbePolyhedron_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProbePolyhedron::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProbePolyhedron::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProbePolyhedron *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProbePolyhedron::NewInstance());

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
PyvtkProbePolyhedron_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProbePolyhedron *tempr = vtkProbePolyhedron::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetSourceData(temp0);
      }
    else
      {
      op->vtkProbePolyhedron::SetSourceData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkProbePolyhedron::GetSource());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSourceConnection(temp0);
      }
    else
      {
      op->vtkProbePolyhedron::SetSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_SetProbePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProbePointData(temp0);
      }
    else
      {
      op->vtkProbePolyhedron::SetProbePointData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_GetProbePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProbePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProbePointData() :
      op->vtkProbePolyhedron::GetProbePointData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_ProbePointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProbePointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProbePointDataOn();
      }
    else
      {
      op->vtkProbePolyhedron::ProbePointDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_ProbePointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProbePointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProbePointDataOff();
      }
    else
      {
      op->vtkProbePolyhedron::ProbePointDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_SetProbeCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbeCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProbeCellData(temp0);
      }
    else
      {
      op->vtkProbePolyhedron::SetProbeCellData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_GetProbeCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProbeCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProbeCellData() :
      op->vtkProbePolyhedron::GetProbeCellData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_ProbeCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProbeCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProbeCellDataOn();
      }
    else
      {
      op->vtkProbePolyhedron::ProbeCellDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_ProbeCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProbeCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProbeCellDataOff();
      }
    else
      {
      op->vtkProbePolyhedron::ProbeCellDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProbePolyhedron_Methods[] = {
  {(char*)"GetClassName", PyvtkProbePolyhedron_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instantiable (i.e., concrete) class.\n"},
  {(char*)"IsA", PyvtkProbePolyhedron_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instantiable (i.e., concrete) class.\n"},
  {(char*)"NewInstance", PyvtkProbePolyhedron_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProbePolyhedron\nC++: vtkProbePolyhedron *NewInstance()\n\nStandard methods for instantiable (i.e., concrete) class.\n"},
  {(char*)"SafeDownCast", PyvtkProbePolyhedron_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProbePolyhedron\nC++: vtkProbePolyhedron *SafeDownCast(vtkObject* o)\n\nStandard methods for instantiable (i.e., concrete) class.\n"},
  {(char*)"SetSourceData", PyvtkProbePolyhedron_SetSourceData, METH_VARARGS,
   (char*)"V.SetSourceData(vtkPolyData)\nC++: void SetSourceData(vtkPolyData *source)\n\nSpecify the point locations used to probe input. Any geometry can\nbe used.\n"},
  {(char*)"GetSource", PyvtkProbePolyhedron_GetSource, METH_VARARGS,
   (char*)"V.GetSource() -> vtkPolyData\nC++: vtkPolyData *GetSource()\n\nSpecify the point locations used to probe input. Any geometry can\nbe used.\n"},
  {(char*)"SetSourceConnection", PyvtkProbePolyhedron_SetSourceConnection, METH_VARARGS,
   (char*)"V.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the point locations used to probe input. Any geometry can\nbe used. New style. Equivalent to SetInputConnection(1,\nalgOutput).\n"},
  {(char*)"SetProbePointData", PyvtkProbePolyhedron_SetProbePointData, METH_VARARGS,
   (char*)"V.SetProbePointData(int)\nC++: void SetProbePointData(int a)\n\nSpecify whether to probe (and hence produce) point data. The\ninterpolated point data of the source will produce the output\npoint data (output points are passed from the input points).\n"},
  {(char*)"GetProbePointData", PyvtkProbePolyhedron_GetProbePointData, METH_VARARGS,
   (char*)"V.GetProbePointData() -> int\nC++: int GetProbePointData()\n\nSpecify whether to probe (and hence produce) point data. The\ninterpolated point data of the source will produce the output\npoint data (output points are passed from the input points).\n"},
  {(char*)"ProbePointDataOn", PyvtkProbePolyhedron_ProbePointDataOn, METH_VARARGS,
   (char*)"V.ProbePointDataOn()\nC++: void ProbePointDataOn()\n\nSpecify whether to probe (and hence produce) point data. The\ninterpolated point data of the source will produce the output\npoint data (output points are passed from the input points).\n"},
  {(char*)"ProbePointDataOff", PyvtkProbePolyhedron_ProbePointDataOff, METH_VARARGS,
   (char*)"V.ProbePointDataOff()\nC++: void ProbePointDataOff()\n\nSpecify whether to probe (and hence produce) point data. The\ninterpolated point data of the source will produce the output\npoint data (output points are passed from the input points).\n"},
  {(char*)"SetProbeCellData", PyvtkProbePolyhedron_SetProbeCellData, METH_VARARGS,
   (char*)"V.SetProbeCellData(int)\nC++: void SetProbeCellData(int a)\n\nSpecify whether to probe (and hence produce) cell data. The\ninterpolated point data of the source will produce the output\ncell data (output cells are passed from the input cells). Note\nthat the probing of the input uses the centers of the cells as\nthe probe position.\n"},
  {(char*)"GetProbeCellData", PyvtkProbePolyhedron_GetProbeCellData, METH_VARARGS,
   (char*)"V.GetProbeCellData() -> int\nC++: int GetProbeCellData()\n\nSpecify whether to probe (and hence produce) cell data. The\ninterpolated point data of the source will produce the output\ncell data (output cells are passed from the input cells). Note\nthat the probing of the input uses the centers of the cells as\nthe probe position.\n"},
  {(char*)"ProbeCellDataOn", PyvtkProbePolyhedron_ProbeCellDataOn, METH_VARARGS,
   (char*)"V.ProbeCellDataOn()\nC++: void ProbeCellDataOn()\n\nSpecify whether to probe (and hence produce) cell data. The\ninterpolated point data of the source will produce the output\ncell data (output cells are passed from the input cells). Note\nthat the probing of the input uses the centers of the cells as\nthe probe position.\n"},
  {(char*)"ProbeCellDataOff", PyvtkProbePolyhedron_ProbeCellDataOff, METH_VARARGS,
   (char*)"V.ProbeCellDataOff()\nC++: void ProbeCellDataOff()\n\nSpecify whether to probe (and hence produce) cell data. The\ninterpolated point data of the source will produce the output\ncell data (output cells are passed from the input cells). Note\nthat the probing of the input uses the centers of the cells as\nthe probe position.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProbePolyhedron_StaticNew()
{
  return vtkProbePolyhedron::New();
}

PyObject *PyVTKClass_vtkProbePolyhedronNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProbePolyhedron_StaticNew,
    PyvtkProbePolyhedron_Methods,
    "vtkProbePolyhedron", modulename,
    NULL, NULL,
    PyvtkProbePolyhedron_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkProbePolyhedron_Doc()
{
  static const char *docstring[] = {
    "vtkProbePolyhedron - probe/interpolate data values in the interior,\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkProbePolyhedron is a filter that computes point attributes (e.g.,\nscalars, vectors, etc.) at specified point positions. The filter has\ntwo inputs: the Input and Source. The Source geometric structure is\npassed through the filter. The point attributes are computed at the\nInput point positions by interpolating into the source data. In this\nfilter, the Source is always a closed, non-self-intersect",
    "ing,\npolyhedral mesh. For example, we can compute data values on a plane\n(plane specified as Input) from a triangle mesh (e.g., output of\nmarching cubes).\n\nThis filter can be used to resample data from a mesh onto a different\ndataset type. For example, a polyhedral mesh (vtkPolyData) can be\nprobed with a volume (three-dimensional vtkImageData), and then\nvolume rendering techniques can be used to v",
    "isualize the results.\nAnother example: a line or curve can be used to probe a mesh to\nproduce x-y plots along that line or curve.\n\nCaveats:\n\nNote that cell data is not interpolated from the source. If you need\ncell data, you can always use vtkPointDataToCellData and/or\nvtkCellDataToPointData in various combinations.\n\nNote that the filter interpolates from a mesh to points interior,\nexterior or on ",
    "the surface of the mesh. This process is necessarily\nan approximation. Currently the approach of Mean Value Coordinates is\nused, but this filter may be extended in the future to use other\nmethods.\n\nSee Also:\n\nvtkProbeFilter vtkMeanValueCoordinatesInterpolator vtkPolyhedron\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProbePolyhedron(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProbePolyhedronNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProbePolyhedron", o) != 0)
    {
    Py_DECREF(o);
    }

}

