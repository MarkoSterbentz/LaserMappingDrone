// python wrapper for vtkTreeFieldAggregator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTreeFieldAggregator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTreeFieldAggregator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTreeFieldAggregatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeAlgorithmNew
#endif

static const char **PyvtkTreeFieldAggregator_Doc();


static PyObject *
PyvtkTreeFieldAggregator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTreeFieldAggregator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeFieldAggregator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTreeFieldAggregator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeFieldAggregator::NewInstance());

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
PyvtkTreeFieldAggregator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTreeFieldAggregator *tempr = vtkTreeFieldAggregator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_GetField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetField() :
      op->vtkTreeFieldAggregator::GetField());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_SetField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetField(temp0);
      }
    else
      {
      op->vtkTreeFieldAggregator::SetField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_GetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinValue() :
      op->vtkTreeFieldAggregator::GetMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_SetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinValue(temp0);
      }
    else
      {
      op->vtkTreeFieldAggregator::SetMinValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_SetLeafVertexUnitSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeafVertexUnitSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLeafVertexUnitSize(temp0);
      }
    else
      {
      op->vtkTreeFieldAggregator::SetLeafVertexUnitSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_GetLeafVertexUnitSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafVertexUnitSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLeafVertexUnitSize() :
      op->vtkTreeFieldAggregator::GetLeafVertexUnitSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_LeafVertexUnitSizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeafVertexUnitSizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LeafVertexUnitSizeOn();
      }
    else
      {
      op->vtkTreeFieldAggregator::LeafVertexUnitSizeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_LeafVertexUnitSizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeafVertexUnitSizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LeafVertexUnitSizeOff();
      }
    else
      {
      op->vtkTreeFieldAggregator::LeafVertexUnitSizeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_SetLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLogScale(temp0);
      }
    else
      {
      op->vtkTreeFieldAggregator::SetLogScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_GetLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLogScale() :
      op->vtkTreeFieldAggregator::GetLogScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_LogScaleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogScaleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LogScaleOn();
      }
    else
      {
      op->vtkTreeFieldAggregator::LogScaleOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_LogScaleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogScaleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LogScaleOff();
      }
    else
      {
      op->vtkTreeFieldAggregator::LogScaleOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeFieldAggregator_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeFieldAggregator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeFieldAggregator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeFieldAggregator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTreeFieldAggregator\nC++: vtkTreeFieldAggregator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeFieldAggregator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeFieldAggregator\nC++: vtkTreeFieldAggregator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetField", PyvtkTreeFieldAggregator_GetField, METH_VARARGS,
   (char*)"V.GetField() -> string\nC++: char *GetField()\n\nThe field to aggregate.  If this is a string array, the entries\nare converted to double. TODO: Remove this field and use the\nArrayToProcess in vtkAlgorithm.\n"},
  {(char*)"SetField", PyvtkTreeFieldAggregator_SetField, METH_VARARGS,
   (char*)"V.SetField(string)\nC++: void SetField(char *)\n\nThe field to aggregate.  If this is a string array, the entries\nare converted to double. TODO: Remove this field and use the\nArrayToProcess in vtkAlgorithm.\n"},
  {(char*)"GetMinValue", PyvtkTreeFieldAggregator_GetMinValue, METH_VARARGS,
   (char*)"V.GetMinValue() -> float\nC++: double GetMinValue()\n\nIf the value of the vertex is less than MinValue then consider\nit's value to be minVal.\n"},
  {(char*)"SetMinValue", PyvtkTreeFieldAggregator_SetMinValue, METH_VARARGS,
   (char*)"V.SetMinValue(float)\nC++: void SetMinValue(double a)\n\nIf the value of the vertex is less than MinValue then consider\nit's value to be minVal.\n"},
  {(char*)"SetLeafVertexUnitSize", PyvtkTreeFieldAggregator_SetLeafVertexUnitSize, METH_VARARGS,
   (char*)"V.SetLeafVertexUnitSize(bool)\nC++: void SetLeafVertexUnitSize(bool a)\n\nIf set, the algorithm will assume a size of 1 for each leaf\nvertex.\n"},
  {(char*)"GetLeafVertexUnitSize", PyvtkTreeFieldAggregator_GetLeafVertexUnitSize, METH_VARARGS,
   (char*)"V.GetLeafVertexUnitSize() -> bool\nC++: bool GetLeafVertexUnitSize()\n\nIf set, the algorithm will assume a size of 1 for each leaf\nvertex.\n"},
  {(char*)"LeafVertexUnitSizeOn", PyvtkTreeFieldAggregator_LeafVertexUnitSizeOn, METH_VARARGS,
   (char*)"V.LeafVertexUnitSizeOn()\nC++: void LeafVertexUnitSizeOn()\n\nIf set, the algorithm will assume a size of 1 for each leaf\nvertex.\n"},
  {(char*)"LeafVertexUnitSizeOff", PyvtkTreeFieldAggregator_LeafVertexUnitSizeOff, METH_VARARGS,
   (char*)"V.LeafVertexUnitSizeOff()\nC++: void LeafVertexUnitSizeOff()\n\nIf set, the algorithm will assume a size of 1 for each leaf\nvertex.\n"},
  {(char*)"SetLogScale", PyvtkTreeFieldAggregator_SetLogScale, METH_VARARGS,
   (char*)"V.SetLogScale(bool)\nC++: void SetLogScale(bool a)\n\nIf set, the leaf values in the tree will be logarithmically\nscaled (base 10).\n"},
  {(char*)"GetLogScale", PyvtkTreeFieldAggregator_GetLogScale, METH_VARARGS,
   (char*)"V.GetLogScale() -> bool\nC++: bool GetLogScale()\n\nIf set, the leaf values in the tree will be logarithmically\nscaled (base 10).\n"},
  {(char*)"LogScaleOn", PyvtkTreeFieldAggregator_LogScaleOn, METH_VARARGS,
   (char*)"V.LogScaleOn()\nC++: void LogScaleOn()\n\nIf set, the leaf values in the tree will be logarithmically\nscaled (base 10).\n"},
  {(char*)"LogScaleOff", PyvtkTreeFieldAggregator_LogScaleOff, METH_VARARGS,
   (char*)"V.LogScaleOff()\nC++: void LogScaleOff()\n\nIf set, the leaf values in the tree will be logarithmically\nscaled (base 10).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTreeFieldAggregator_StaticNew()
{
  return vtkTreeFieldAggregator::New();
}

PyObject *PyVTKClass_vtkTreeFieldAggregatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTreeFieldAggregator_StaticNew,
    PyvtkTreeFieldAggregator_Methods,
    "vtkTreeFieldAggregator", modulename,
    NULL, NULL,
    PyvtkTreeFieldAggregator_Doc(),
    PyVTKClass_vtkTreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTreeFieldAggregator_Doc()
{
  static const char *docstring[] = {
    "vtkTreeFieldAggregator - aggregate field values from the leaves up\nthe tree\n\n",
    "Superclass: vtkTreeAlgorithm\n\n",
    "vtkTreeFieldAggregator may be used to assign sizes to all the\nvertices in the tree, based on the sizes of the leaves.  The size of\na vertex will equal the sum of the sizes of the child vertices.  If\nyou have a data array with values for all leaves, you may specify\nthat array, and the values will be filled in for interior tree\nvertices.  If you do not yet have an array, you may tell the filter\nto c",
    "reate a new array, assuming that the size of each leaf vertex is\n1.  You may optionally set a flag to first take the log of all leaf\nvalues before aggregating.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeFieldAggregator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeFieldAggregatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeFieldAggregator", o) != 0)
    {
    Py_DECREF(o);
    }

}

