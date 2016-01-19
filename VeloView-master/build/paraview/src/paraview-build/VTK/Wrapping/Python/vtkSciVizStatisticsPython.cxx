// python wrapper for vtkSciVizStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSciVizStatistics.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSciVizStatistics(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSciVizStatisticsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkSciVizStatistics_Doc();

#ifndef DECLARED_PyvtkSciVizStatistics_Tasks_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSciVizStatistics_Tasks_Type;
#define DECLARED_PyvtkSciVizStatistics_Tasks_Type
#endif

PyTypeObject PyvtkSciVizStatistics_Tasks_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Tasks", // tp_name
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

PyObject *PyvtkSciVizStatistics_Tasks_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSciVizStatistics_Tasks_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSciVizStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSciVizStatistics::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSciVizStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSciVizStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSciVizStatistics::NewInstance());

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
PyvtkSciVizStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSciVizStatistics *tempr = vtkSciVizStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_GetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttributeMode() :
      op->vtkSciVizStatistics::GetAttributeMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_SetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeMode(temp0);
      }
    else
      {
      op->vtkSciVizStatistics::SetAttributeMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_GetNumberOfAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAttributeArrays() :
      op->vtkSciVizStatistics::GetNumberOfAttributeArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_GetAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeArrayName(temp0) :
      op->vtkSciVizStatistics::GetAttributeArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_GetAttributeArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttributeArrayStatus(temp0) :
      op->vtkSciVizStatistics::GetAttributeArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_EnableAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->EnableAttributeArray(temp0);
      }
    else
      {
      op->vtkSciVizStatistics::EnableAttributeArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_ClearAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearAttributeArrays();
      }
    else
      {
      op->vtkSciVizStatistics::ClearAttributeArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_SetTrainingFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrainingFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTrainingFraction(temp0);
      }
    else
      {
      op->vtkSciVizStatistics::SetTrainingFraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_GetTrainingFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrainingFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTrainingFractionMinValue() :
      op->vtkSciVizStatistics::GetTrainingFractionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_GetTrainingFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrainingFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTrainingFractionMaxValue() :
      op->vtkSciVizStatistics::GetTrainingFractionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_GetTrainingFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrainingFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTrainingFraction() :
      op->vtkSciVizStatistics::GetTrainingFraction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_SetTask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTask(temp0);
      }
    else
      {
      op->vtkSciVizStatistics::SetTask(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_GetTask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTask() :
      op->vtkSciVizStatistics::GetTask());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_MULTIPLE_MODELS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MULTIPLE_MODELS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = (ap.IsBound() ?
      op->MULTIPLE_MODELS() :
      op->vtkSciVizStatistics::MULTIPLE_MODELS());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSciVizStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkSciVizStatistics_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSciVizStatistics_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSciVizStatistics_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSciVizStatistics\nC++: vtkSciVizStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSciVizStatistics_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSciVizStatistics\nC++: vtkSciVizStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetAttributeMode", PyvtkSciVizStatistics_GetAttributeMode, METH_VARARGS,
   (char*)"V.GetAttributeMode() -> int\nC++: int GetAttributeMode()\n\nSet/get the type of field attribute (cell, point, field)\n"},
  {(char*)"SetAttributeMode", PyvtkSciVizStatistics_SetAttributeMode, METH_VARARGS,
   (char*)"V.SetAttributeMode(int)\nC++: void SetAttributeMode(int a)\n\nSet/get the type of field attribute (cell, point, field)\n"},
  {(char*)"GetNumberOfAttributeArrays", PyvtkSciVizStatistics_GetNumberOfAttributeArrays, METH_VARARGS,
   (char*)"V.GetNumberOfAttributeArrays() -> int\nC++: int GetNumberOfAttributeArrays()\n\nReturn the number of columns available for the current value of\nAttributeMode.\n"},
  {(char*)"GetAttributeArrayName", PyvtkSciVizStatistics_GetAttributeArrayName, METH_VARARGS,
   (char*)"V.GetAttributeArrayName(int) -> string\nC++: const char *GetAttributeArrayName(int n)\n\nGet the name of the n-th array ffor the current value of\nAttributeMode.\n"},
  {(char*)"GetAttributeArrayStatus", PyvtkSciVizStatistics_GetAttributeArrayStatus, METH_VARARGS,
   (char*)"V.GetAttributeArrayStatus(string) -> int\nC++: int GetAttributeArrayStatus(const char *arrName)\n\nGet the status of the specified array (i.e., whether or not it is\na column of interest).\n"},
  {(char*)"EnableAttributeArray", PyvtkSciVizStatistics_EnableAttributeArray, METH_VARARGS,
   (char*)"V.EnableAttributeArray(string)\nC++: void EnableAttributeArray(const char *arrName)\n\nAn alternate interface for preparing a selection of arrays in\nParaView.\n"},
  {(char*)"ClearAttributeArrays", PyvtkSciVizStatistics_ClearAttributeArrays, METH_VARARGS,
   (char*)"V.ClearAttributeArrays()\nC++: void ClearAttributeArrays()\n\nAn alternate interface for preparing a selection of arrays in\nParaView.\n"},
  {(char*)"SetTrainingFraction", PyvtkSciVizStatistics_SetTrainingFraction, METH_VARARGS,
   (char*)"V.SetTrainingFraction(float)\nC++: void SetTrainingFraction(double)\n\nSet/get the amount of data to be used for training. When 0.0 <\nTrainingFraction < 1.0, a randomly-sampled subset of the data is\nused for training. When an assessment is requested, all data\n(including the training data) is assessed, regardless of the\nvalue of TrainingFraction. The default value is 0.1.\n\nThe random sample of the original dataset (say, of size N) is\nobtained by choosing N random numbers in [0,1). Any sample where\nthe random number is less than TrainingFraction is included in\nthe training data. Samples are then randomly added or removed\nfrom the training data until it is the desired size.\n"},
  {(char*)"GetTrainingFractionMinValue", PyvtkSciVizStatistics_GetTrainingFractionMinValue, METH_VARARGS,
   (char*)"V.GetTrainingFractionMinValue() -> float\nC++: double GetTrainingFractionMinValue()\n\nSet/get the amount of data to be used for training. When 0.0 <\nTrainingFraction < 1.0, a randomly-sampled subset of the data is\nused for training. When an assessment is requested, all data\n(including the training data) is assessed, regardless of the\nvalue of TrainingFraction. The default value is 0.1.\n\nThe random sample of the original dataset (say, of size N) is\nobtained by choosing N random numbers in [0,1). Any sample where\nthe random number is less than TrainingFraction is included in\nthe training data. Samples are then randomly added or removed\nfrom the training data until it is the desired size.\n"},
  {(char*)"GetTrainingFractionMaxValue", PyvtkSciVizStatistics_GetTrainingFractionMaxValue, METH_VARARGS,
   (char*)"V.GetTrainingFractionMaxValue() -> float\nC++: double GetTrainingFractionMaxValue()\n\nSet/get the amount of data to be used for training. When 0.0 <\nTrainingFraction < 1.0, a randomly-sampled subset of the data is\nused for training. When an assessment is requested, all data\n(including the training data) is assessed, regardless of the\nvalue of TrainingFraction. The default value is 0.1.\n\nThe random sample of the original dataset (say, of size N) is\nobtained by choosing N random numbers in [0,1). Any sample where\nthe random number is less than TrainingFraction is included in\nthe training data. Samples are then randomly added or removed\nfrom the training data until it is the desired size.\n"},
  {(char*)"GetTrainingFraction", PyvtkSciVizStatistics_GetTrainingFraction, METH_VARARGS,
   (char*)"V.GetTrainingFraction() -> float\nC++: double GetTrainingFraction()\n\nSet/get the amount of data to be used for training. When 0.0 <\nTrainingFraction < 1.0, a randomly-sampled subset of the data is\nused for training. When an assessment is requested, all data\n(including the training data) is assessed, regardless of the\nvalue of TrainingFraction. The default value is 0.1.\n\nThe random sample of the original dataset (say, of size N) is\nobtained by choosing N random numbers in [0,1). Any sample where\nthe random number is less than TrainingFraction is included in\nthe training data. Samples are then randomly added or removed\nfrom the training data until it is the desired size.\n"},
  {(char*)"SetTask", PyvtkSciVizStatistics_SetTask, METH_VARARGS,
   (char*)"V.SetTask(int)\nC++: void SetTask(int a)\n\nSet/get whether this filter should create a model of the input or\nassess the input or both. This should take on a value from the\nTasks enum. The default is MODEL_AND_ASSESS.\n"},
  {(char*)"GetTask", PyvtkSciVizStatistics_GetTask, METH_VARARGS,
   (char*)"V.GetTask() -> int\nC++: int GetTask()\n\nSet/get whether this filter should create a model of the input or\nassess the input or both. This should take on a value from the\nTasks enum. The default is MODEL_AND_ASSESS.\n"},
  {(char*)"MULTIPLE_MODELS", PyvtkSciVizStatistics_MULTIPLE_MODELS, METH_VARARGS,
   (char*)"V.MULTIPLE_MODELS() -> vtkInformationIntegerKey\nC++: vtkInformationIntegerKey *MULTIPLE_MODELS()\n\nA key used to mark the output model data object (output port 0)\nwhen it is a multiblock of models (any of which may be multiblock\ndataset themselves) as opposed to a multiblock dataset containing\na single model.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSciVizStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSciVizStatistics_Methods,
    "vtkSciVizStatistics", modulename,
    NULL, NULL,
    PyvtkSciVizStatistics_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSciVizStatistics_Tasks_Type);
    PyvtkSciVizStatistics_Tasks_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSciVizStatistics_Tasks_Type;
    if (o && PyDict_SetItemString(d, (char *)"Tasks", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkSciVizStatistics::Tasks cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "MODEL_INPUT", vtkSciVizStatistics::MODEL_INPUT },
          { "CREATE_MODEL", vtkSciVizStatistics::CREATE_MODEL },
          { "ASSESS_INPUT", vtkSciVizStatistics::ASSESS_INPUT },
          { "MODEL_AND_ASSESS", vtkSciVizStatistics::MODEL_AND_ASSESS },
        };

      o = PyvtkSciVizStatistics_Tasks_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSciVizStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkSciVizStatistics - Abstract base class for computing statistics\nwith vtkStatistics\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "This filter either computes a statistical model of a dataset or takes\nsuch a model as its second input. Then, the model (however it is\nobtained) may optionally be used to assess the input dataset.\n\nThis class serves as a base class that handles table conversion,\ninterfacing with the array selection in the ParaView user interface,\nand provides a simplified interface to vtkStatisticsAlgorithm.\n\nThan",
    "ks:\n\nThanks to David Thompson and Philippe Pebay from Sandia National\nLaboratories for implementing this class. Updated by Philippe Pebay,\nKitware SAS 2012\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSciVizStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSciVizStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSciVizStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

