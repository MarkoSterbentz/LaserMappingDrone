// python wrapper for vtkCellDerivatives
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCellDerivatives.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCellDerivatives(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCellDerivativesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkCellDerivatives_Doc();


static PyObject *
PyvtkCellDerivatives_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCellDerivatives::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellDerivatives_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellDerivatives::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellDerivatives_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellDerivatives *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellDerivatives::NewInstance());

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
PyvtkCellDerivatives_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCellDerivatives *tempr = vtkCellDerivatives::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorMode(temp0);
      }
    else
      {
      op->vtkCellDerivatives::SetVectorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellDerivatives_GetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVectorMode() :
      op->vtkCellDerivatives::GetVectorMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetVectorModeToPassVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToPassVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToPassVectors();
      }
    else
      {
      op->vtkCellDerivatives::SetVectorModeToPassVectors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetVectorModeToComputeGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToComputeGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToComputeGradient();
      }
    else
      {
      op->vtkCellDerivatives::SetVectorModeToComputeGradient();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetVectorModeToComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToComputeVorticity();
      }
    else
      {
      op->vtkCellDerivatives::SetVectorModeToComputeVorticity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellDerivatives_GetVectorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetVectorModeAsString() :
      op->vtkCellDerivatives::GetVectorModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetTensorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTensorMode(temp0);
      }
    else
      {
      op->vtkCellDerivatives::SetTensorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellDerivatives_GetTensorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTensorMode() :
      op->vtkCellDerivatives::GetTensorMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetTensorModeToPassTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorModeToPassTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTensorModeToPassTensors();
      }
    else
      {
      op->vtkCellDerivatives::SetTensorModeToPassTensors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetTensorModeToComputeGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorModeToComputeGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTensorModeToComputeGradient();
      }
    else
      {
      op->vtkCellDerivatives::SetTensorModeToComputeGradient();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetTensorModeToComputeStrain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorModeToComputeStrain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTensorModeToComputeStrain();
      }
    else
      {
      op->vtkCellDerivatives::SetTensorModeToComputeStrain();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellDerivatives_GetTensorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetTensorModeAsString() :
      op->vtkCellDerivatives::GetTensorModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCellDerivatives_Methods[] = {
  {(char*)"GetClassName", PyvtkCellDerivatives_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCellDerivatives_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCellDerivatives_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCellDerivatives\nC++: vtkCellDerivatives *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCellDerivatives_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCellDerivatives\nC++: vtkCellDerivatives *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVectorMode", PyvtkCellDerivatives_SetVectorMode, METH_VARARGS,
   (char*)"V.SetVectorMode(int)\nC++: void SetVectorMode(int a)\n\nControl how the filter works to generate vector cell data. You\ncan choose to pass the input cell vectors, compute the gradient\nof the input scalars, or extract the vorticity of the computed\nvector gradient tensor. By default (VectorModeToComputeGradient),\nthe filter will take the gradient of the input scalar data.\n"},
  {(char*)"GetVectorMode", PyvtkCellDerivatives_GetVectorMode, METH_VARARGS,
   (char*)"V.GetVectorMode() -> int\nC++: int GetVectorMode()\n\nControl how the filter works to generate vector cell data. You\ncan choose to pass the input cell vectors, compute the gradient\nof the input scalars, or extract the vorticity of the computed\nvector gradient tensor. By default (VectorModeToComputeGradient),\nthe filter will take the gradient of the input scalar data.\n"},
  {(char*)"SetVectorModeToPassVectors", PyvtkCellDerivatives_SetVectorModeToPassVectors, METH_VARARGS,
   (char*)"V.SetVectorModeToPassVectors()\nC++: void SetVectorModeToPassVectors()\n\nControl how the filter works to generate vector cell data. You\ncan choose to pass the input cell vectors, compute the gradient\nof the input scalars, or extract the vorticity of the computed\nvector gradient tensor. By default (VectorModeToComputeGradient),\nthe filter will take the gradient of the input scalar data.\n"},
  {(char*)"SetVectorModeToComputeGradient", PyvtkCellDerivatives_SetVectorModeToComputeGradient, METH_VARARGS,
   (char*)"V.SetVectorModeToComputeGradient()\nC++: void SetVectorModeToComputeGradient()\n\nControl how the filter works to generate vector cell data. You\ncan choose to pass the input cell vectors, compute the gradient\nof the input scalars, or extract the vorticity of the computed\nvector gradient tensor. By default (VectorModeToComputeGradient),\nthe filter will take the gradient of the input scalar data.\n"},
  {(char*)"SetVectorModeToComputeVorticity", PyvtkCellDerivatives_SetVectorModeToComputeVorticity, METH_VARARGS,
   (char*)"V.SetVectorModeToComputeVorticity()\nC++: void SetVectorModeToComputeVorticity()\n\nControl how the filter works to generate vector cell data. You\ncan choose to pass the input cell vectors, compute the gradient\nof the input scalars, or extract the vorticity of the computed\nvector gradient tensor. By default (VectorModeToComputeGradient),\nthe filter will take the gradient of the input scalar data.\n"},
  {(char*)"GetVectorModeAsString", PyvtkCellDerivatives_GetVectorModeAsString, METH_VARARGS,
   (char*)"V.GetVectorModeAsString() -> string\nC++: const char *GetVectorModeAsString()\n\nControl how the filter works to generate vector cell data. You\ncan choose to pass the input cell vectors, compute the gradient\nof the input scalars, or extract the vorticity of the computed\nvector gradient tensor. By default (VectorModeToComputeGradient),\nthe filter will take the gradient of the input scalar data.\n"},
  {(char*)"SetTensorMode", PyvtkCellDerivatives_SetTensorMode, METH_VARARGS,
   (char*)"V.SetTensorMode(int)\nC++: void SetTensorMode(int a)\n\nControl how the filter works to generate tensor cell data. You\ncan choose to pass the input cell tensors, compute the gradient\nof the input vectors, or compute the strain tensor of the vector\ngradient tensor. By default (TensorModeToComputeGradient), the\nfilter will take the gradient of the vector data to construct a\ntensor.\n"},
  {(char*)"GetTensorMode", PyvtkCellDerivatives_GetTensorMode, METH_VARARGS,
   (char*)"V.GetTensorMode() -> int\nC++: int GetTensorMode()\n\nControl how the filter works to generate tensor cell data. You\ncan choose to pass the input cell tensors, compute the gradient\nof the input vectors, or compute the strain tensor of the vector\ngradient tensor. By default (TensorModeToComputeGradient), the\nfilter will take the gradient of the vector data to construct a\ntensor.\n"},
  {(char*)"SetTensorModeToPassTensors", PyvtkCellDerivatives_SetTensorModeToPassTensors, METH_VARARGS,
   (char*)"V.SetTensorModeToPassTensors()\nC++: void SetTensorModeToPassTensors()\n\nControl how the filter works to generate tensor cell data. You\ncan choose to pass the input cell tensors, compute the gradient\nof the input vectors, or compute the strain tensor of the vector\ngradient tensor. By default (TensorModeToComputeGradient), the\nfilter will take the gradient of the vector data to construct a\ntensor.\n"},
  {(char*)"SetTensorModeToComputeGradient", PyvtkCellDerivatives_SetTensorModeToComputeGradient, METH_VARARGS,
   (char*)"V.SetTensorModeToComputeGradient()\nC++: void SetTensorModeToComputeGradient()\n\nControl how the filter works to generate tensor cell data. You\ncan choose to pass the input cell tensors, compute the gradient\nof the input vectors, or compute the strain tensor of the vector\ngradient tensor. By default (TensorModeToComputeGradient), the\nfilter will take the gradient of the vector data to construct a\ntensor.\n"},
  {(char*)"SetTensorModeToComputeStrain", PyvtkCellDerivatives_SetTensorModeToComputeStrain, METH_VARARGS,
   (char*)"V.SetTensorModeToComputeStrain()\nC++: void SetTensorModeToComputeStrain()\n\nControl how the filter works to generate tensor cell data. You\ncan choose to pass the input cell tensors, compute the gradient\nof the input vectors, or compute the strain tensor of the vector\ngradient tensor. By default (TensorModeToComputeGradient), the\nfilter will take the gradient of the vector data to construct a\ntensor.\n"},
  {(char*)"GetTensorModeAsString", PyvtkCellDerivatives_GetTensorModeAsString, METH_VARARGS,
   (char*)"V.GetTensorModeAsString() -> string\nC++: const char *GetTensorModeAsString()\n\nControl how the filter works to generate tensor cell data. You\ncan choose to pass the input cell tensors, compute the gradient\nof the input vectors, or compute the strain tensor of the vector\ngradient tensor. By default (TensorModeToComputeGradient), the\nfilter will take the gradient of the vector data to construct a\ntensor.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCellDerivatives_StaticNew()
{
  return vtkCellDerivatives::New();
}

PyObject *PyVTKClass_vtkCellDerivativesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCellDerivatives_StaticNew,
    PyvtkCellDerivatives_Methods,
    "vtkCellDerivatives", modulename,
    NULL, NULL,
    PyvtkCellDerivatives_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCellDerivatives_Doc()
{
  static const char *docstring[] = {
    "vtkCellDerivatives - compute derivatives of scalars and vectors\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkCellDerivatives is a filter that computes derivatives of scalars\nand vectors at the center of cells. You can choose to generate\ndifferent output including the scalar gradient (a vector), computed\ntensor vorticity (a vector), gradient of input vectors (a tensor),\nand strain matrix of the input vectors (a tensor); or you may choose\nto pass data through to the output.\n\nNote that it is assumed that",
    " on input scalars and vector point data\nis available, which are then used to generate cell vectors and\ntensors. (The interpolation functions of the cells are used to\ncompute the derivatives which is why point data is required.)\n\nCaveats:\n\nThe computed derivatives are cell attribute data; you can convert\nthem to point attribute data by using the vtkCellDataToPointData\nfilter. Note that, due to the ",
    "interpolation function used (obtained\nusing 1/r**2 normalized sum), the derivatives calculated for polygons\nwith more than 4 vertices are inaccurate in most cases.\n\nThe point data is passed through the filter to the output.\n\nSee Also:\n\nvtkVectorNorm\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellDerivatives(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellDerivativesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellDerivatives", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 6; c++)
    {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_VECTOR_MODE_PASS_VECTORS", 0 },
        { "VTK_VECTOR_MODE_COMPUTE_GRADIENT", 1 },
        { "VTK_VECTOR_MODE_COMPUTE_VORTICITY", 2 },
        { "VTK_TENSOR_MODE_PASS_TENSORS", 0 },
        { "VTK_TENSOR_MODE_COMPUTE_GRADIENT", 1 },
        { "VTK_TENSOR_MODE_COMPUTE_STRAIN", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

