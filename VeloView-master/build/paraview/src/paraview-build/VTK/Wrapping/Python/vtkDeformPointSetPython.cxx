// python wrapper for vtkDeformPointSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDeformPointSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDeformPointSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDeformPointSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
#endif

static const char **PyvtkDeformPointSet_Doc();


static PyObject *
PyvtkDeformPointSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDeformPointSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDeformPointSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDeformPointSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDeformPointSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDeformPointSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDeformPointSet::NewInstance());

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
PyvtkDeformPointSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDeformPointSet *tempr = vtkDeformPointSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDeformPointSet_SetControlMeshData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlMeshData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetControlMeshData(temp0);
      }
    else
      {
      op->vtkDeformPointSet::SetControlMeshData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDeformPointSet_GetControlMeshData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlMeshData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetControlMeshData() :
      op->vtkDeformPointSet::GetControlMeshData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDeformPointSet_SetControlMeshConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlMeshConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetControlMeshConnection(temp0);
      }
    else
      {
      op->vtkDeformPointSet::SetControlMeshConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDeformPointSet_SetInitializeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitializeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInitializeWeights(temp0);
      }
    else
      {
      op->vtkDeformPointSet::SetInitializeWeights(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDeformPointSet_GetInitializeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitializeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInitializeWeights() :
      op->vtkDeformPointSet::GetInitializeWeights());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDeformPointSet_InitializeWeightsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeWeightsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializeWeightsOn();
      }
    else
      {
      op->vtkDeformPointSet::InitializeWeightsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDeformPointSet_InitializeWeightsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeWeightsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializeWeightsOff();
      }
    else
      {
      op->vtkDeformPointSet::InitializeWeightsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDeformPointSet_Methods[] = {
  {(char*)"GetClassName", PyvtkDeformPointSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instantiable (i.e., concrete) class.\n"},
  {(char*)"IsA", PyvtkDeformPointSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instantiable (i.e., concrete) class.\n"},
  {(char*)"NewInstance", PyvtkDeformPointSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDeformPointSet\nC++: vtkDeformPointSet *NewInstance()\n\nStandard methods for instantiable (i.e., concrete) class.\n"},
  {(char*)"SafeDownCast", PyvtkDeformPointSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDeformPointSet\nC++: vtkDeformPointSet *SafeDownCast(vtkObject* o)\n\nStandard methods for instantiable (i.e., concrete) class.\n"},
  {(char*)"SetControlMeshData", PyvtkDeformPointSet_SetControlMeshData, METH_VARARGS,
   (char*)"V.SetControlMeshData(vtkPolyData)\nC++: void SetControlMeshData(vtkPolyData *controlMesh)\n\nSpecify the control mesh to deform the input vtkPointSet. The\ncontrol mesh must be a closed, non-self-intersecting, manifold\nmesh.\n"},
  {(char*)"GetControlMeshData", PyvtkDeformPointSet_GetControlMeshData, METH_VARARGS,
   (char*)"V.GetControlMeshData() -> vtkPolyData\nC++: vtkPolyData *GetControlMeshData()\n\nSpecify the control mesh to deform the input vtkPointSet. The\ncontrol mesh must be a closed, non-self-intersecting, manifold\nmesh.\n"},
  {(char*)"SetControlMeshConnection", PyvtkDeformPointSet_SetControlMeshConnection, METH_VARARGS,
   (char*)"V.SetControlMeshConnection(vtkAlgorithmOutput)\nC++: void SetControlMeshConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the point locations used to probe input. Any geometry can\nbe used. New style. Equivalent to SetInputConnection(1,\nalgOutput).\n"},
  {(char*)"SetInitializeWeights", PyvtkDeformPointSet_SetInitializeWeights, METH_VARARGS,
   (char*)"V.SetInitializeWeights(int)\nC++: void SetInitializeWeights(int a)\n\nSpecify whether to regenerate interpolation weights or not.\nInitially the filter will reexecute no matter what this flag is\nset to (initial weights must be computed). Also, this flag is\nignored if the number of input points/cells or the number of\ncontrol mesh points/cells changes between executions. Thus flag\nis used to force reexecution and recomputation of weights.\n"},
  {(char*)"GetInitializeWeights", PyvtkDeformPointSet_GetInitializeWeights, METH_VARARGS,
   (char*)"V.GetInitializeWeights() -> int\nC++: int GetInitializeWeights()\n\nSpecify whether to regenerate interpolation weights or not.\nInitially the filter will reexecute no matter what this flag is\nset to (initial weights must be computed). Also, this flag is\nignored if the number of input points/cells or the number of\ncontrol mesh points/cells changes between executions. Thus flag\nis used to force reexecution and recomputation of weights.\n"},
  {(char*)"InitializeWeightsOn", PyvtkDeformPointSet_InitializeWeightsOn, METH_VARARGS,
   (char*)"V.InitializeWeightsOn()\nC++: void InitializeWeightsOn()\n\nSpecify whether to regenerate interpolation weights or not.\nInitially the filter will reexecute no matter what this flag is\nset to (initial weights must be computed). Also, this flag is\nignored if the number of input points/cells or the number of\ncontrol mesh points/cells changes between executions. Thus flag\nis used to force reexecution and recomputation of weights.\n"},
  {(char*)"InitializeWeightsOff", PyvtkDeformPointSet_InitializeWeightsOff, METH_VARARGS,
   (char*)"V.InitializeWeightsOff()\nC++: void InitializeWeightsOff()\n\nSpecify whether to regenerate interpolation weights or not.\nInitially the filter will reexecute no matter what this flag is\nset to (initial weights must be computed). Also, this flag is\nignored if the number of input points/cells or the number of\ncontrol mesh points/cells changes between executions. Thus flag\nis used to force reexecution and recomputation of weights.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDeformPointSet_StaticNew()
{
  return vtkDeformPointSet::New();
}

PyObject *PyVTKClass_vtkDeformPointSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDeformPointSet_StaticNew,
    PyvtkDeformPointSet_Methods,
    "vtkDeformPointSet", modulename,
    NULL, NULL,
    PyvtkDeformPointSet_Doc(),
    PyVTKClass_vtkPointSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDeformPointSet_Doc()
{
  static const char *docstring[] = {
    "vtkDeformPointSet - use a control polyhedron to deform an input\nvtkPointSet\n\n",
    "Superclass: vtkPointSetAlgorithm\n\n",
    "vtkDeformPointSet is a filter that uses a control polyhdron to deform\nan input dataset of type vtkPointSet. The control polyhedron (or\nmesh) must be a closed, manifold surface.\n\nThe filter executes as follows. In initial pipeline execution, the\ncontrol mesh and input vtkPointSet are assumed in undeformed\nposition, and an initial set of interpolation weights are computed\nfor each point in the vtkPo",
    "intSet (one interpolation weight value for\neach point in the control mesh). The filter then stores these\ninterpolation weights after filter execution. The next time the\nfilter executes, assuming that the number of points/cells in the\ncontrol mesh and vtkPointSet have not changed, the points in the\nvtkPointSet are recomputed based on the original weights. Hence if\nthe control mesh has been deformed",
    ", it will in turn cause deformation\nin the vtkPointSet. This can be used to animate or edit the geometry\nof the vtkPointSet.\n\nCaveats:\n\nNote that a set of interpolation weights per point in the vtkPointSet\nis maintained. The number of interpolation weights is the number of\npoints in the control mesh. Hence keep the control mesh small in size\nor a n^2 data explostion will occur.\n\nThe filter maintai",
    "ns interpolation weights between executions (after\nthe initial execution pass computes the interpolation weights). You\ncan explicitly cause the filter to reinitialize by setting the\nInitializeWeights boolean to true. By default, the filter will\nexecute and then set InitializeWeights to false.\n\nThis work was motivated by the work of Tao Ju et al in \"Mesh Value\nCoordinates for Closed Triangular Mesh",
    "es.\" The MVC algorithm is\ncurrently used to generate interpolation weights. However, in the\nfuture this filter may be extended to provide other interpolation\nfunctions.\n\nA final note: point data and cell data are passed from the input to\nthe output. Only the point coordinates of the input vtkPointSet are\nmodified.\n\nSee Also:\n\nvtkMeanValueCoordinatesInterpolator vtkProbePolyhedron vtkPolyhedron\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDeformPointSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDeformPointSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDeformPointSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

