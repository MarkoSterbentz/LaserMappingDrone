// python wrapper for vtkStreamTracer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStreamTracer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStreamTracer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStreamTracerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkStreamTracer_Doc();

#ifndef DECLARED_PyvtkStreamTracer_Units_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkStreamTracer_Units_Type;
#define DECLARED_PyvtkStreamTracer_Units_Type
#endif

PyTypeObject PyvtkStreamTracer_Units_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Units", // tp_name
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

PyObject *PyvtkStreamTracer_Units_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkStreamTracer_Units_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkStreamTracer_Solvers_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkStreamTracer_Solvers_Type;
#define DECLARED_PyvtkStreamTracer_Solvers_Type
#endif

PyTypeObject PyvtkStreamTracer_Solvers_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Solvers", // tp_name
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

PyObject *PyvtkStreamTracer_Solvers_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkStreamTracer_Solvers_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkStreamTracer_ReasonForTermination_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkStreamTracer_ReasonForTermination_Type;
#define DECLARED_PyvtkStreamTracer_ReasonForTermination_Type
#endif

PyTypeObject PyvtkStreamTracer_ReasonForTermination_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ReasonForTermination", // tp_name
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

PyObject *PyvtkStreamTracer_ReasonForTermination_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkStreamTracer_ReasonForTermination_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkStreamTracer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStreamTracer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamTracer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStreamTracer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamTracer::NewInstance());

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
PyvtkStreamTracer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStreamTracer *tempr = vtkStreamTracer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetStartPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetStartPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkStreamTracer::SetStartPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStreamTracer_SetStartPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetStartPosition(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetStartPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStreamTracer_SetStartPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkStreamTracer_SetStartPosition_s1(self, args);
    case 1:
      return PyvtkStreamTracer_SetStartPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetStartPosition");
  return NULL;
}



static PyObject *
PyvtkStreamTracer_GetStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetStartPosition() :
      op->vtkStreamTracer::GetStartPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetSourceData(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetSourceData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkStreamTracer::GetSource());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

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
      op->vtkStreamTracer::SetSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkInitialValueProblemSolver *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInitialValueProblemSolver"))
    {
    if (ap.IsBound())
      {
      op->SetIntegrator(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetIntegrator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInitialValueProblemSolver *tempr = (ap.IsBound() ?
      op->GetIntegrator() :
      op->vtkStreamTracer::GetIntegrator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntegratorType(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetIntegratorType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIntegratorType() :
      op->vtkStreamTracer::GetIntegratorType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegratorTypeToRungeKutta2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegratorTypeToRungeKutta2();
      }
    else
      {
      op->vtkStreamTracer::SetIntegratorTypeToRungeKutta2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegratorTypeToRungeKutta4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegratorTypeToRungeKutta4();
      }
    else
      {
      op->vtkStreamTracer::SetIntegratorTypeToRungeKutta4();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegratorTypeToRungeKutta45(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta45");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegratorTypeToRungeKutta45();
      }
    else
      {
      op->vtkStreamTracer::SetIntegratorTypeToRungeKutta45();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInterpolatorTypeToDataSetPointLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorTypeToDataSetPointLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolatorTypeToDataSetPointLocator();
      }
    else
      {
      op->vtkStreamTracer::SetInterpolatorTypeToDataSetPointLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInterpolatorTypeToCellLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorTypeToCellLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolatorTypeToCellLocator();
      }
    else
      {
      op->vtkStreamTracer::SetInterpolatorTypeToCellLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMaximumPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumPropagation(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetMaximumPropagation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMaximumPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumPropagation() :
      op->vtkStreamTracer::GetMaximumPropagation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationStepUnit(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetIntegrationStepUnit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationStepUnit() :
      op->vtkStreamTracer::GetIntegrationStepUnit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInitialIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInitialIntegrationStep(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetInitialIntegrationStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetInitialIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetInitialIntegrationStep() :
      op->vtkStreamTracer::GetInitialIntegrationStep());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMinimumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumIntegrationStep(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetMinimumIntegrationStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMinimumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumIntegrationStep() :
      op->vtkStreamTracer::GetMinimumIntegrationStep());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMaximumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumIntegrationStep(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetMaximumIntegrationStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMaximumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumIntegrationStep() :
      op->vtkStreamTracer::GetMaximumIntegrationStep());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumError(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetMaximumError(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumError() :
      op->vtkStreamTracer::GetMaximumError());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMaximumNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfSteps(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetMaximumNumberOfSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMaximumNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSteps() :
      op->vtkStreamTracer::GetMaximumNumberOfSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTerminalSpeed(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetTerminalSpeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTerminalSpeed() :
      op->vtkStreamTracer::GetTerminalSpeed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirection(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetIntegrationDirection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrationDirectionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationDirectionMinValue() :
      op->vtkStreamTracer::GetIntegrationDirectionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrationDirectionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationDirectionMaxValue() :
      op->vtkStreamTracer::GetIntegrationDirectionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationDirection() :
      op->vtkStreamTracer::GetIntegrationDirection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationDirectionToForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirectionToForward();
      }
    else
      {
      op->vtkStreamTracer::SetIntegrationDirectionToForward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationDirectionToBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirectionToBackward();
      }
    else
      {
      op->vtkStreamTracer::SetIntegrationDirectionToBackward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationDirectionToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationDirectionToBoth();
      }
    else
      {
      op->vtkStreamTracer::SetIntegrationDirectionToBoth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeVorticity(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetComputeVorticity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetComputeVorticity() :
      op->vtkStreamTracer::GetComputeVorticity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRotationScale(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetRotationScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRotationScale() :
      op->vtkStreamTracer::GetRotationScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInterpolatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkAbstractInterpolatedVelocityField *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractInterpolatedVelocityField"))
    {
    if (ap.IsBound())
      {
      op->SetInterpolatorPrototype(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetInterpolatorPrototype(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInterpolatorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolatorType(temp0);
      }
    else
      {
      op->vtkStreamTracer::SetInterpolatorType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamTracer_Methods[] = {
  {(char*)"GetClassName", PyvtkStreamTracer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStreamTracer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStreamTracer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStreamTracer\nC++: vtkStreamTracer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStreamTracer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStreamTracer\nC++: vtkStreamTracer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetStartPosition", PyvtkStreamTracer_SetStartPosition, METH_VARARGS,
   (char*)"V.SetStartPosition(float, float, float)\nC++: void SetStartPosition(double, double, double)\nV.SetStartPosition((float, float, float))\nC++: void SetStartPosition(double a[3])\n\n"},
  {(char*)"GetStartPosition", PyvtkStreamTracer_GetStartPosition, METH_VARARGS,
   (char*)"V.GetStartPosition() -> (float, float, float)\nC++: double *GetStartPosition()\n\n"},
  {(char*)"SetSourceData", PyvtkStreamTracer_SetSourceData, METH_VARARGS,
   (char*)"V.SetSourceData(vtkDataSet)\nC++: void SetSourceData(vtkDataSet *source)\n\nSpecify the source object used to generate starting points\n(seeds). Note that this method does not connect the pipeline. The\nalgorithm will work on the input data as it is without updating\nthe producer of the data. See SetSourceConnection for connecting\nthe pipeline.\n"},
  {(char*)"GetSource", PyvtkStreamTracer_GetSource, METH_VARARGS,
   (char*)"V.GetSource() -> vtkDataSet\nC++: vtkDataSet *GetSource()\n\nSpecify the source object used to generate starting points\n(seeds). Note that this method does not connect the pipeline. The\nalgorithm will work on the input data as it is without updating\nthe producer of the data. See SetSourceConnection for connecting\nthe pipeline.\n"},
  {(char*)"SetSourceConnection", PyvtkStreamTracer_SetSourceConnection, METH_VARARGS,
   (char*)"V.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the source object used to generate starting points\n(seeds). New style.\n"},
  {(char*)"SetIntegrator", PyvtkStreamTracer_SetIntegrator, METH_VARARGS,
   (char*)"V.SetIntegrator(vtkInitialValueProblemSolver)\nC++: void SetIntegrator(vtkInitialValueProblemSolver *)\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {(char*)"GetIntegrator", PyvtkStreamTracer_GetIntegrator, METH_VARARGS,
   (char*)"V.GetIntegrator() -> vtkInitialValueProblemSolver\nC++: vtkInitialValueProblemSolver *GetIntegrator()\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {(char*)"SetIntegratorType", PyvtkStreamTracer_SetIntegratorType, METH_VARARGS,
   (char*)"V.SetIntegratorType(int)\nC++: void SetIntegratorType(int type)\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {(char*)"GetIntegratorType", PyvtkStreamTracer_GetIntegratorType, METH_VARARGS,
   (char*)"V.GetIntegratorType() -> int\nC++: int GetIntegratorType()\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {(char*)"SetIntegratorTypeToRungeKutta2", PyvtkStreamTracer_SetIntegratorTypeToRungeKutta2, METH_VARARGS,
   (char*)"V.SetIntegratorTypeToRungeKutta2()\nC++: void SetIntegratorTypeToRungeKutta2()\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {(char*)"SetIntegratorTypeToRungeKutta4", PyvtkStreamTracer_SetIntegratorTypeToRungeKutta4, METH_VARARGS,
   (char*)"V.SetIntegratorTypeToRungeKutta4()\nC++: void SetIntegratorTypeToRungeKutta4()\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {(char*)"SetIntegratorTypeToRungeKutta45", PyvtkStreamTracer_SetIntegratorTypeToRungeKutta45, METH_VARARGS,
   (char*)"V.SetIntegratorTypeToRungeKutta45()\nC++: void SetIntegratorTypeToRungeKutta45()\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {(char*)"SetInterpolatorTypeToDataSetPointLocator", PyvtkStreamTracer_SetInterpolatorTypeToDataSetPointLocator, METH_VARARGS,
   (char*)"V.SetInterpolatorTypeToDataSetPointLocator()\nC++: void SetInterpolatorTypeToDataSetPointLocator()\n\nSet the velocity field interpolator type to the one involving a\ndataset point locator.\n"},
  {(char*)"SetInterpolatorTypeToCellLocator", PyvtkStreamTracer_SetInterpolatorTypeToCellLocator, METH_VARARGS,
   (char*)"V.SetInterpolatorTypeToCellLocator()\nC++: void SetInterpolatorTypeToCellLocator()\n\nSet the velocity field interpolator type to the one involving a\ncell locator.\n"},
  {(char*)"SetMaximumPropagation", PyvtkStreamTracer_SetMaximumPropagation, METH_VARARGS,
   (char*)"V.SetMaximumPropagation(float)\nC++: void SetMaximumPropagation(double a)\n\nSpecify the maximum length of a streamline expressed in\nLENGTH_UNIT.\n"},
  {(char*)"GetMaximumPropagation", PyvtkStreamTracer_GetMaximumPropagation, METH_VARARGS,
   (char*)"V.GetMaximumPropagation() -> float\nC++: double GetMaximumPropagation()\n\nSpecify the maximum length of a streamline expressed in\nLENGTH_UNIT.\n"},
  {(char*)"SetIntegrationStepUnit", PyvtkStreamTracer_SetIntegrationStepUnit, METH_VARARGS,
   (char*)"V.SetIntegrationStepUnit(int)\nC++: void SetIntegrationStepUnit(int unit)\n\nSpecify a uniform integration step unit for\nMinimumIntegrationStep, InitialIntegrationStep, and\nMaximumIntegrationStep. NOTE: The valid unit is now limited to\nonly LENGTH_UNIT (1) and CELL_LENGTH_UNIT (2), EXCLUDING the\npreviously-supported TIME_UNIT.\n"},
  {(char*)"GetIntegrationStepUnit", PyvtkStreamTracer_GetIntegrationStepUnit, METH_VARARGS,
   (char*)"V.GetIntegrationStepUnit() -> int\nC++: int GetIntegrationStepUnit()\n\nSpecify a uniform integration step unit for\nMinimumIntegrationStep, InitialIntegrationStep, and\nMaximumIntegrationStep. NOTE: The valid unit is now limited to\nonly LENGTH_UNIT (1) and CELL_LENGTH_UNIT (2), EXCLUDING the\npreviously-supported TIME_UNIT.\n"},
  {(char*)"SetInitialIntegrationStep", PyvtkStreamTracer_SetInitialIntegrationStep, METH_VARARGS,
   (char*)"V.SetInitialIntegrationStep(float)\nC++: void SetInitialIntegrationStep(double a)\n\nSpecify the Initial step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (either\nthe starting size for an adaptive integrator, e.g., RK45, or the\nconstant / fixed size for non-adaptive ones, i.e., RK2 and RK4)\n"},
  {(char*)"GetInitialIntegrationStep", PyvtkStreamTracer_GetInitialIntegrationStep, METH_VARARGS,
   (char*)"V.GetInitialIntegrationStep() -> float\nC++: double GetInitialIntegrationStep()\n\nSpecify the Initial step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (either\nthe starting size for an adaptive integrator, e.g., RK45, or the\nconstant / fixed size for non-adaptive ones, i.e., RK2 and RK4)\n"},
  {(char*)"SetMinimumIntegrationStep", PyvtkStreamTracer_SetMinimumIntegrationStep, METH_VARARGS,
   (char*)"V.SetMinimumIntegrationStep(float)\nC++: void SetMinimumIntegrationStep(double a)\n\nSpecify the Minimum step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (Only\nvalid for an adaptive integrator, e.g., RK45)\n"},
  {(char*)"GetMinimumIntegrationStep", PyvtkStreamTracer_GetMinimumIntegrationStep, METH_VARARGS,
   (char*)"V.GetMinimumIntegrationStep() -> float\nC++: double GetMinimumIntegrationStep()\n\nSpecify the Minimum step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (Only\nvalid for an adaptive integrator, e.g., RK45)\n"},
  {(char*)"SetMaximumIntegrationStep", PyvtkStreamTracer_SetMaximumIntegrationStep, METH_VARARGS,
   (char*)"V.SetMaximumIntegrationStep(float)\nC++: void SetMaximumIntegrationStep(double a)\n\nSpecify the Maximum step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (Only\nvalid for an adaptive integrator, e.g., RK45)\n"},
  {(char*)"GetMaximumIntegrationStep", PyvtkStreamTracer_GetMaximumIntegrationStep, METH_VARARGS,
   (char*)"V.GetMaximumIntegrationStep() -> float\nC++: double GetMaximumIntegrationStep()\n\nSpecify the Maximum step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (Only\nvalid for an adaptive integrator, e.g., RK45)\n"},
  {(char*)"SetMaximumError", PyvtkStreamTracer_SetMaximumError, METH_VARARGS,
   (char*)"V.SetMaximumError(float)\nC++: void SetMaximumError(double a)\n\n"},
  {(char*)"GetMaximumError", PyvtkStreamTracer_GetMaximumError, METH_VARARGS,
   (char*)"V.GetMaximumError() -> float\nC++: double GetMaximumError()\n\n"},
  {(char*)"SetMaximumNumberOfSteps", PyvtkStreamTracer_SetMaximumNumberOfSteps, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfSteps(int)\nC++: void SetMaximumNumberOfSteps(vtkIdType a)\n\n"},
  {(char*)"GetMaximumNumberOfSteps", PyvtkStreamTracer_GetMaximumNumberOfSteps, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfSteps() -> int\nC++: vtkIdType GetMaximumNumberOfSteps()\n\n"},
  {(char*)"SetTerminalSpeed", PyvtkStreamTracer_SetTerminalSpeed, METH_VARARGS,
   (char*)"V.SetTerminalSpeed(float)\nC++: void SetTerminalSpeed(double a)\n\n"},
  {(char*)"GetTerminalSpeed", PyvtkStreamTracer_GetTerminalSpeed, METH_VARARGS,
   (char*)"V.GetTerminalSpeed() -> float\nC++: double GetTerminalSpeed()\n\n"},
  {(char*)"SetIntegrationDirection", PyvtkStreamTracer_SetIntegrationDirection, METH_VARARGS,
   (char*)"V.SetIntegrationDirection(int)\nC++: void SetIntegrationDirection(int)\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {(char*)"GetIntegrationDirectionMinValue", PyvtkStreamTracer_GetIntegrationDirectionMinValue, METH_VARARGS,
   (char*)"V.GetIntegrationDirectionMinValue() -> int\nC++: int GetIntegrationDirectionMinValue()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {(char*)"GetIntegrationDirectionMaxValue", PyvtkStreamTracer_GetIntegrationDirectionMaxValue, METH_VARARGS,
   (char*)"V.GetIntegrationDirectionMaxValue() -> int\nC++: int GetIntegrationDirectionMaxValue()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {(char*)"GetIntegrationDirection", PyvtkStreamTracer_GetIntegrationDirection, METH_VARARGS,
   (char*)"V.GetIntegrationDirection() -> int\nC++: int GetIntegrationDirection()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {(char*)"SetIntegrationDirectionToForward", PyvtkStreamTracer_SetIntegrationDirectionToForward, METH_VARARGS,
   (char*)"V.SetIntegrationDirectionToForward()\nC++: void SetIntegrationDirectionToForward()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {(char*)"SetIntegrationDirectionToBackward", PyvtkStreamTracer_SetIntegrationDirectionToBackward, METH_VARARGS,
   (char*)"V.SetIntegrationDirectionToBackward()\nC++: void SetIntegrationDirectionToBackward()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {(char*)"SetIntegrationDirectionToBoth", PyvtkStreamTracer_SetIntegrationDirectionToBoth, METH_VARARGS,
   (char*)"V.SetIntegrationDirectionToBoth()\nC++: void SetIntegrationDirectionToBoth()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {(char*)"SetComputeVorticity", PyvtkStreamTracer_SetComputeVorticity, METH_VARARGS,
   (char*)"V.SetComputeVorticity(bool)\nC++: void SetComputeVorticity(bool a)\n\n"},
  {(char*)"GetComputeVorticity", PyvtkStreamTracer_GetComputeVorticity, METH_VARARGS,
   (char*)"V.GetComputeVorticity() -> bool\nC++: bool GetComputeVorticity()\n\n"},
  {(char*)"SetRotationScale", PyvtkStreamTracer_SetRotationScale, METH_VARARGS,
   (char*)"V.SetRotationScale(float)\nC++: void SetRotationScale(double a)\n\n"},
  {(char*)"GetRotationScale", PyvtkStreamTracer_GetRotationScale, METH_VARARGS,
   (char*)"V.GetRotationScale() -> float\nC++: double GetRotationScale()\n\n"},
  {(char*)"SetInterpolatorPrototype", PyvtkStreamTracer_SetInterpolatorPrototype, METH_VARARGS,
   (char*)"V.SetInterpolatorPrototype(vtkAbstractInterpolatedVelocityField)\nC++: void SetInterpolatorPrototype(\n    vtkAbstractInterpolatedVelocityField *ivf)\n\nThe object used to interpolate the velocity field during\nintegration is of the same class as this prototype.\n"},
  {(char*)"SetInterpolatorType", PyvtkStreamTracer_SetInterpolatorType, METH_VARARGS,
   (char*)"V.SetInterpolatorType(int)\nC++: void SetInterpolatorType(int interpType)\n\nSet the type of the velocity field interpolator to determine\nwhether vtkInterpolatedVelocityField\n(INTERPOLATOR_WITH_DATASET_POINT_LOCATOR) or\nvtkCellLocatorInterpolatedVelocityField\n(INTERPOLATOR_WITH_CELL_LOCATOR) is employed for locating cells\nduring streamline integration. The latter (adopting\nvtkAbstractCellLocator sub-classes such as vtkCellLocator and\nvtkModifiedBSPTree) is more robust then the former (through\nvtkDataSet / vtkPointSet::FindCell() coupled with\nvtkPointLocator).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStreamTracer_StaticNew()
{
  return vtkStreamTracer::New();
}

PyObject *PyVTKClass_vtkStreamTracerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStreamTracer_StaticNew,
    PyvtkStreamTracer_Methods,
    "vtkStreamTracer", modulename,
    NULL, NULL,
    PyvtkStreamTracer_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkStreamTracer_Units_Type);
    PyvtkStreamTracer_Units_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkStreamTracer_Units_Type;
    if (o && PyDict_SetItemString(d, (char *)"Units", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkStreamTracer_Solvers_Type);
    PyvtkStreamTracer_Solvers_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkStreamTracer_Solvers_Type;
    if (o && PyDict_SetItemString(d, (char *)"Solvers", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkStreamTracer_ReasonForTermination_Type);
    PyvtkStreamTracer_ReasonForTermination_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkStreamTracer_ReasonForTermination_Type;
    if (o && PyDict_SetItemString(d, (char *)"ReasonForTermination", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkStreamTracer::Units cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "LENGTH_UNIT", vtkStreamTracer::LENGTH_UNIT },
          { "CELL_LENGTH_UNIT", vtkStreamTracer::CELL_LENGTH_UNIT },
        };

      o = PyvtkStreamTracer_Units_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkStreamTracer::Solvers cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "RUNGE_KUTTA2", vtkStreamTracer::RUNGE_KUTTA2 },
          { "RUNGE_KUTTA4", vtkStreamTracer::RUNGE_KUTTA4 },
          { "RUNGE_KUTTA45", vtkStreamTracer::RUNGE_KUTTA45 },
          { "NONE", vtkStreamTracer::NONE },
          { "UNKNOWN", vtkStreamTracer::UNKNOWN },
        };

      o = PyvtkStreamTracer_Solvers_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 6; c++)
      {
      typedef vtkStreamTracer::ReasonForTermination cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[6] = {
          { "OUT_OF_DOMAIN", vtkStreamTracer::OUT_OF_DOMAIN },
          { "NOT_INITIALIZED", vtkStreamTracer::NOT_INITIALIZED },
          { "UNEXPECTED_VALUE", vtkStreamTracer::UNEXPECTED_VALUE },
          { "OUT_OF_LENGTH", vtkStreamTracer::OUT_OF_LENGTH },
          { "OUT_OF_STEPS", vtkStreamTracer::OUT_OF_STEPS },
          { "STAGNATION", vtkStreamTracer::STAGNATION },
        };

      o = PyvtkStreamTracer_ReasonForTermination_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 5; c++)
      {
      static const struct { const char *name; int value; }
        constants[5] = {
          { "FORWARD", vtkStreamTracer::FORWARD },
          { "BACKWARD", vtkStreamTracer::BACKWARD },
          { "BOTH", vtkStreamTracer::BOTH },
          { "INTERPOLATOR_WITH_DATASET_POINT_LOCATOR", vtkStreamTracer::INTERPOLATOR_WITH_DATASET_POINT_LOCATOR },
          { "INTERPOLATOR_WITH_CELL_LOCATOR", vtkStreamTracer::INTERPOLATOR_WITH_CELL_LOCATOR },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkStreamTracer_Doc()
{
  static const char *docstring[] = {
    "vtkStreamTracer - Streamline generator\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkStreamTracer is a filter that integrates a vector field to\ngenerate streamlines. The integration is performed using a specified\nintegrator, by default Runge-Kutta2.\n\nvtkStreamTracer produces polylines as the output, with each cell\n(i.e., polyline) representing a streamline. The attribute values\nassociated with each streamline are stored in the cell data, whereas\nthose associated with streamline",
    "-points are stored in the point data.\n\nvtkStreamTracer supports forward (the default), backward, and\ncombined (i.e., BOTH) integration. The length of a streamline is\ngoverned by specifying a maximum value either in physical arc length\nor in (local) cell length. Otherwise, the integration terminates upon\nexiting the flow field domain, or if the particle speed is reduced to\na value less than a speci",
    "fied terminal speed, or when a maximum\nnumber of steps is completed. The specific reason for the termination\nis stored in a cell array named ReasonForTermination.\n\nNote that normalized vectors are adopted in streamline integration,\nwhich achieves high numerical accuracy/smoothness of flow lines that\nis particularly guaranteed for Runge-Kutta45 with adaptive step size\nand error control). In support",
    " of this feature, the underlying step\nsize is ALWAYS in arc length unit (LENGTH_UNIT) while the 'real' time\ninterval (virtual for steady flows) that a particle actually takes to\ntrave in a single step is obtained by dividing the arc length by the\nLOCAL speed. The overall elapsed time (i.e., the life span) of the\nparticle is the sum of those individual step-wise time intervals.\n\nThe quality of stre",
    "amline integration can be controlled by setting\nthe initial integration step (InitialIntegrationStep), particularly\nfor Runge-Kutta2 and Runge-Kutta4 (with a fixed step size), and in\nthe case of Runge-Kutta45 (with an adaptive step size and error\ncontrol) the minimum integration step, the maximum integration step,\nand the maximum error. These steps are in either LENGTH_UNIT or\nCELL_LENGTH_UNIT whi",
    "le the error is in physical arc length. For the\nformer two integrators, there is a trade-off between integration\nspeed and streamline quality.\n\nThe integration time, vorticity, rotation and angular velocity are\nstored in point data arrays named \"IntegrationTime\", \"Vorticity\",\n\"Rotation\" and \"AngularVelocity\", respectively (vorticity, rotation\nand angular velocity are computed only when ComputeVort",
    "icity is on).\nAll point data attributes in the source dataset are interpolated on\nthe new streamline points.\n\nvtkStreamTracer supports integration through any type of dataset.\nThus if the dataset contains 2D cells like polygons or triangles, the\nintegration is constrained to lie on the surface defined by 2D cells.\n\nThe starting point, or the so-called 'seed', of a streamline may be\nset in two diff",
    "erent ways. Starting from global x-y-z \"position\"\nallows you to start a single trace at a specified x-y-z coordinate.\nIf you specify a source object, traces will be generated from each\npoint in the source that is inside the dataset.\n\nSee Also:\n\nvtkRibbonFilter vtkRuledSurfaceFilter vtkInitialValueProblemSolver\nvtkRungeKutta2 vtkRungeKutta4 vtkRungeKutta45 vtkTemporalStreamTracer\nvtkAbstractInterpo",
    "latedVelocityField vtkInterpolatedVelocityField\nvtkCellLocatorInterpolatedVelocityField\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStreamTracer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStreamTracerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStreamTracer", o) != 0)
    {
    Py_DECREF(o);
    }

}

