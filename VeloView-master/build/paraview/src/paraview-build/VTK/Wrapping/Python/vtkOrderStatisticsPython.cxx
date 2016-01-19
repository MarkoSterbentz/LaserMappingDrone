// python wrapper for vtkOrderStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVariant.h"
#include "vtkOrderStatistics.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOrderStatistics(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOrderStatisticsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
#endif

static const char **PyvtkOrderStatistics_Doc();

#ifndef DECLARED_PyvtkOrderStatistics_QuantileDefinitionType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkOrderStatistics_QuantileDefinitionType_Type;
#define DECLARED_PyvtkOrderStatistics_QuantileDefinitionType_Type
#endif

PyTypeObject PyvtkOrderStatistics_QuantileDefinitionType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"QuantileDefinitionType", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkOrderStatistics_QuantileDefinitionType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkOrderStatistics_QuantileDefinitionType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkOrderStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOrderStatistics::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrderStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOrderStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrderStatistics::NewInstance());

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
PyvtkOrderStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOrderStatistics *tempr = vtkOrderStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_SetNumberOfIntervals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIntervals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfIntervals(temp0);
      }
    else
      {
      op->vtkOrderStatistics::SetNumberOfIntervals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_GetNumberOfIntervals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIntervals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfIntervals() :
      op->vtkOrderStatistics::GetNumberOfIntervals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_SetQuantileDefinition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuantileDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  typedef vtkOrderStatistics::QuantileDefinitionType temp0_type;
  temp0_type temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, &PyvtkOrderStatistics_QuantileDefinitionType_Type))
    {
    if (ap.IsBound())
      {
      op->SetQuantileDefinition(temp0);
      }
    else
      {
      op->vtkOrderStatistics::SetQuantileDefinition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkOrderStatistics_SetQuantileDefinition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuantileDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQuantileDefinition(temp0);
      }
    else
      {
      op->vtkOrderStatistics::SetQuantileDefinition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOrderStatistics_SetQuantileDefinition_Methods[] = {
  {NULL, PyvtkOrderStatistics_SetQuantileDefinition_s1, METH_VARARGS,
   (char*)"@O QuantileDefinitionType"},
  {NULL, PyvtkOrderStatistics_SetQuantileDefinition_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkOrderStatistics_SetQuantileDefinition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOrderStatistics_SetQuantileDefinition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetQuantileDefinition");
  return NULL;
}



static PyObject *
PyvtkOrderStatistics_SetQuantize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuantize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQuantize(temp0);
      }
    else
      {
      op->vtkOrderStatistics::SetQuantize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_GetQuantize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuantize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetQuantize() :
      op->vtkOrderStatistics::GetQuantize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_SetMaximumHistogramSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumHistogramSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumHistogramSize(temp0);
      }
    else
      {
      op->vtkOrderStatistics::SetMaximumHistogramSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_GetMaximumHistogramSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumHistogramSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumHistogramSize() :
      op->vtkOrderStatistics::GetMaximumHistogramSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_GetQuantileDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuantileDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetQuantileDefinition() :
      op->vtkOrderStatistics::GetQuantileDefinition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_SetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  char *temp0 = NULL;
  int temp1;
  vtkVariant *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
    {
    bool tempr = (ap.IsBound() ?
      op->SetParameter(temp0, temp1, *temp2) :
      op->vtkOrderStatistics::SetParameter(temp0, temp1, *temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj2);

  return result;
}


static PyObject *
PyvtkOrderStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  vtkDataObjectCollection *temp0 = NULL;
  vtkMultiBlockDataSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectCollection") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet"))
    {
    if (ap.IsBound())
      {
      op->Aggregate(temp0, temp1);
      }
    else
      {
      op->vtkOrderStatistics::Aggregate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOrderStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkOrderStatistics_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOrderStatistics_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOrderStatistics_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOrderStatistics\nC++: vtkOrderStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOrderStatistics_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOrderStatistics\nC++: vtkOrderStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfIntervals", PyvtkOrderStatistics_SetNumberOfIntervals, METH_VARARGS,
   (char*)"V.SetNumberOfIntervals(int)\nC++: void SetNumberOfIntervals(vtkIdType a)\n\nSet/Get the number of quantiles (with uniform spacing).\n"},
  {(char*)"GetNumberOfIntervals", PyvtkOrderStatistics_GetNumberOfIntervals, METH_VARARGS,
   (char*)"V.GetNumberOfIntervals() -> int\nC++: vtkIdType GetNumberOfIntervals()\n\nSet/Get the number of quantiles (with uniform spacing).\n"},
  {(char*)"SetQuantileDefinition", PyvtkOrderStatistics_SetQuantileDefinition, METH_VARARGS,
   (char*)"V.SetQuantileDefinition(QuantileDefinitionType)\nC++: void SetQuantileDefinition(QuantileDefinitionType a)\nV.SetQuantileDefinition(int)\nC++: void SetQuantileDefinition(int)\n\nSet the quantile definition.\n"},
  {(char*)"SetQuantize", PyvtkOrderStatistics_SetQuantize, METH_VARARGS,
   (char*)"V.SetQuantize(bool)\nC++: void SetQuantize(bool a)\n\nSet/Get whether quantization will be allowed to enforce maximum\nhistogram size.\n"},
  {(char*)"GetQuantize", PyvtkOrderStatistics_GetQuantize, METH_VARARGS,
   (char*)"V.GetQuantize() -> bool\nC++: bool GetQuantize()\n\nSet/Get whether quantization will be allowed to enforce maximum\nhistogram size.\n"},
  {(char*)"SetMaximumHistogramSize", PyvtkOrderStatistics_SetMaximumHistogramSize, METH_VARARGS,
   (char*)"V.SetMaximumHistogramSize(int)\nC++: void SetMaximumHistogramSize(vtkIdType a)\n\nSet/Get the maximum histogram size. This maximum size is enforced\nonly when Quantize is TRUE.\n"},
  {(char*)"GetMaximumHistogramSize", PyvtkOrderStatistics_GetMaximumHistogramSize, METH_VARARGS,
   (char*)"V.GetMaximumHistogramSize() -> int\nC++: vtkIdType GetMaximumHistogramSize()\n\nSet/Get the maximum histogram size. This maximum size is enforced\nonly when Quantize is TRUE.\n"},
  {(char*)"GetQuantileDefinition", PyvtkOrderStatistics_GetQuantileDefinition, METH_VARARGS,
   (char*)"V.GetQuantileDefinition() -> int\nC++: vtkIdType GetQuantileDefinition()\n\nGet the quantile definition.\n"},
  {(char*)"SetParameter", PyvtkOrderStatistics_SetParameter, METH_VARARGS,
   (char*)"V.SetParameter(string, int, vtkVariant) -> bool\nC++: virtual bool SetParameter(const char *parameter, int index,\n    vtkVariant value)\n\nA convenience method (in particular for access from other\napplications) to set parameter values. Return true if setting of\nrequested parameter name was excuted, false otherwise.\n"},
  {(char*)"Aggregate", PyvtkOrderStatistics_Aggregate, METH_VARARGS,
   (char*)"V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model NB: not\nimplemented\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOrderStatistics_StaticNew()
{
  return vtkOrderStatistics::New();
}

PyObject *PyVTKClass_vtkOrderStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOrderStatistics_StaticNew,
    PyvtkOrderStatistics_Methods,
    "vtkOrderStatistics", modulename,
    NULL, NULL,
    PyvtkOrderStatistics_Doc(),
    PyVTKClass_vtkStatisticsAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkOrderStatistics_QuantileDefinitionType_Type);
    PyvtkOrderStatistics_QuantileDefinitionType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkOrderStatistics_QuantileDefinitionType_Type;
    if (o && PyDict_SetItemString(d, (char *)"QuantileDefinitionType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkOrderStatistics::QuantileDefinitionType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "InverseCDF", vtkOrderStatistics::InverseCDF },
          { "InverseCDFAveragedSteps", vtkOrderStatistics::InverseCDFAveragedSteps },
          { "NearestObservation", vtkOrderStatistics::NearestObservation },
        };

      o = PyvtkOrderStatistics_QuantileDefinitionType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkOrderStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkOrderStatistics - A class for univariate order statistics\n\n",
    "Superclass: vtkStatisticsAlgorithm\n\n",
    "Given a selection of columns of interest in an input data table, this\nclass provides the following functionalities, depending on the\nexecution mode it is executed in:\n* Learn: calculate histogram.\n* Derive: calculate PDFs and arbitrary quantiles. Provide specific\n  names when 5-point statistics (minimum, 1st quartile, median, third\nquartile, maximum) requested.\n* Assess: given an input data set an",
    "d a set of q-quantiles, label\n  each datum either with the quantile interval to which it belongs,\n  or 0 if it is smaller than smaller quantile, or q if it is larger\n  than largest quantile.\n* Test: calculate Kolmogorov-Smirnov goodness-of-fit statistic\n  between CDF based on model quantiles, and empirical CDF\n\nThanks:\n\nThanks to Philippe Pebay and David Thompson from Sandia National\nLaboratories ",
    "for implementing this class. Updated by Philippe Pebay,\nKitware SAS 2012\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOrderStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOrderStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOrderStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

