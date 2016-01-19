// python wrapper for vtkParticleTracerBase
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkParticleTracerBase.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkParticleTracerBase(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkParticleTracerBaseNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkParticleTracerBase_Doc();

#ifndef DECLARED_PyvtkParticleTracerBase_Solvers_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkParticleTracerBase_Solvers_Type;
#define DECLARED_PyvtkParticleTracerBase_Solvers_Type
#endif

PyTypeObject PyvtkParticleTracerBase_Solvers_Type = {
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

PyObject *PyvtkParticleTracerBase_Solvers_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkParticleTracerBase_Solvers_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkParticleTracerBase_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkParticleTracerBase::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParticleTracerBase::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParticleTracerBase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParticleTracerBase::NewInstance());

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
PyvtkParticleTracerBase_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkParticleTracerBase *tempr = vtkParticleTracerBase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_PrintParticleHistories(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintParticleHistories");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrintParticleHistories();
      }
    else
      {
      op->vtkParticleTracerBase::PrintParticleHistories();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetComputeVorticity() :
      op->vtkParticleTracerBase::GetComputeVorticity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

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
      op->vtkParticleTracerBase::SetComputeVorticity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTerminalSpeed() :
      op->vtkParticleTracerBase::GetTerminalSpeed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

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
      op->vtkParticleTracerBase::SetTerminalSpeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRotationScale() :
      op->vtkParticleTracerBase::GetRotationScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

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
      op->vtkParticleTracerBase::SetRotationScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetIgnorePipelineTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnorePipelineTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIgnorePipelineTime(temp0);
      }
    else
      {
      op->vtkParticleTracerBase::SetIgnorePipelineTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetIgnorePipelineTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnorePipelineTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIgnorePipelineTime() :
      op->vtkParticleTracerBase::GetIgnorePipelineTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_IgnorePipelineTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnorePipelineTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IgnorePipelineTimeOn();
      }
    else
      {
      op->vtkParticleTracerBase::IgnorePipelineTimeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_IgnorePipelineTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnorePipelineTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IgnorePipelineTimeOff();
      }
    else
      {
      op->vtkParticleTracerBase::IgnorePipelineTimeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetForceReinjectionEveryNSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceReinjectionEveryNSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetForceReinjectionEveryNSteps() :
      op->vtkParticleTracerBase::GetForceReinjectionEveryNSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetForceReinjectionEveryNSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceReinjectionEveryNSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForceReinjectionEveryNSteps(temp0);
      }
    else
      {
      op->vtkParticleTracerBase::SetForceReinjectionEveryNSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetTerminationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTerminationTime(temp0);
      }
    else
      {
      op->vtkParticleTracerBase::SetTerminationTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetTerminationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTerminationTime() :
      op->vtkParticleTracerBase::GetTerminationTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

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
      op->vtkParticleTracerBase::SetIntegrator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInitialValueProblemSolver *tempr = (ap.IsBound() ?
      op->GetIntegrator() :
      op->vtkParticleTracerBase::GetIntegrator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

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
      op->vtkParticleTracerBase::SetIntegratorType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIntegratorType() :
      op->vtkParticleTracerBase::GetIntegratorType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStartTime() :
      op->vtkParticleTracerBase::GetStartTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartTime(temp0);
      }
    else
      {
      op->vtkParticleTracerBase::SetStartTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetStaticSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStaticSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStaticSeeds(temp0);
      }
    else
      {
      op->vtkParticleTracerBase::SetStaticSeeds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetStaticSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStaticSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStaticSeeds() :
      op->vtkParticleTracerBase::GetStaticSeeds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetStaticMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStaticMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStaticMesh(temp0);
      }
    else
      {
      op->vtkParticleTracerBase::SetStaticMesh(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetStaticMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStaticMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStaticMesh() :
      op->vtkParticleTracerBase::GetStaticMesh());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetParticleWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  vtkAbstractParticleWriter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractParticleWriter"))
    {
    if (ap.IsBound())
      {
      op->SetParticleWriter(temp0);
      }
    else
      {
      op->vtkParticleTracerBase::SetParticleWriter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetParticleWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractParticleWriter *tempr = (ap.IsBound() ?
      op->GetParticleWriter() :
      op->vtkParticleTracerBase::GetParticleWriter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetParticleFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParticleFileName(temp0);
      }
    else
      {
      op->vtkParticleTracerBase::SetParticleFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetParticleFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetParticleFileName() :
      op->vtkParticleTracerBase::GetParticleFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetEnableParticleWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableParticleWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableParticleWriting(temp0);
      }
    else
      {
      op->vtkParticleTracerBase::SetEnableParticleWriting(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetEnableParticleWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableParticleWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableParticleWriting() :
      op->vtkParticleTracerBase::GetEnableParticleWriting());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_EnableParticleWritingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableParticleWritingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableParticleWritingOn();
      }
    else
      {
      op->vtkParticleTracerBase::EnableParticleWritingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_EnableParticleWritingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableParticleWritingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableParticleWritingOff();
      }
    else
      {
      op->vtkParticleTracerBase::EnableParticleWritingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetDisableResetCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisableResetCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisableResetCache(temp0);
      }
    else
      {
      op->vtkParticleTracerBase::SetDisableResetCache(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetDisableResetCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableResetCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDisableResetCache() :
      op->vtkParticleTracerBase::GetDisableResetCache());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_DisableResetCacheOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableResetCacheOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableResetCacheOn();
      }
    else
      {
      op->vtkParticleTracerBase::DisableResetCacheOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_DisableResetCacheOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableResetCacheOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableResetCacheOff();
      }
    else
      {
      op->vtkParticleTracerBase::DisableResetCacheOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_AddSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->AddSourceConnection(temp0);
      }
    else
      {
      op->vtkParticleTracerBase::AddSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_RemoveAllSources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllSources();
      }
    else
      {
      op->vtkParticleTracerBase::RemoveAllSources();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkParticleTracerBase_Methods[] = {
  {(char*)"GetClassName", PyvtkParticleTracerBase_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParticleTracerBase_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParticleTracerBase_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkParticleTracerBase\nC++: vtkParticleTracerBase *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParticleTracerBase_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParticleTracerBase\nC++: vtkParticleTracerBase *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"PrintParticleHistories", PyvtkParticleTracerBase_PrintParticleHistories, METH_VARARGS,
   (char*)"V.PrintParticleHistories()\nC++: void PrintParticleHistories()\n\n"},
  {(char*)"GetComputeVorticity", PyvtkParticleTracerBase_GetComputeVorticity, METH_VARARGS,
   (char*)"V.GetComputeVorticity() -> bool\nC++: bool GetComputeVorticity()\n\n"},
  {(char*)"SetComputeVorticity", PyvtkParticleTracerBase_SetComputeVorticity, METH_VARARGS,
   (char*)"V.SetComputeVorticity(bool)\nC++: void SetComputeVorticity(bool)\n\n"},
  {(char*)"GetTerminalSpeed", PyvtkParticleTracerBase_GetTerminalSpeed, METH_VARARGS,
   (char*)"V.GetTerminalSpeed() -> float\nC++: double GetTerminalSpeed()\n\n"},
  {(char*)"SetTerminalSpeed", PyvtkParticleTracerBase_SetTerminalSpeed, METH_VARARGS,
   (char*)"V.SetTerminalSpeed(float)\nC++: void SetTerminalSpeed(double)\n\n"},
  {(char*)"GetRotationScale", PyvtkParticleTracerBase_GetRotationScale, METH_VARARGS,
   (char*)"V.GetRotationScale() -> float\nC++: double GetRotationScale()\n\n"},
  {(char*)"SetRotationScale", PyvtkParticleTracerBase_SetRotationScale, METH_VARARGS,
   (char*)"V.SetRotationScale(float)\nC++: void SetRotationScale(double)\n\n"},
  {(char*)"SetIgnorePipelineTime", PyvtkParticleTracerBase_SetIgnorePipelineTime, METH_VARARGS,
   (char*)"V.SetIgnorePipelineTime(int)\nC++: void SetIgnorePipelineTime(int a)\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {(char*)"GetIgnorePipelineTime", PyvtkParticleTracerBase_GetIgnorePipelineTime, METH_VARARGS,
   (char*)"V.GetIgnorePipelineTime() -> int\nC++: int GetIgnorePipelineTime()\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {(char*)"IgnorePipelineTimeOn", PyvtkParticleTracerBase_IgnorePipelineTimeOn, METH_VARARGS,
   (char*)"V.IgnorePipelineTimeOn()\nC++: void IgnorePipelineTimeOn()\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {(char*)"IgnorePipelineTimeOff", PyvtkParticleTracerBase_IgnorePipelineTimeOff, METH_VARARGS,
   (char*)"V.IgnorePipelineTimeOff()\nC++: void IgnorePipelineTimeOff()\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {(char*)"GetForceReinjectionEveryNSteps", PyvtkParticleTracerBase_GetForceReinjectionEveryNSteps, METH_VARARGS,
   (char*)"V.GetForceReinjectionEveryNSteps() -> int\nC++: int GetForceReinjectionEveryNSteps()\n\nWhen animating particles, it is nice to inject new ones every Nth\nstep to produce a continuous flow. Setting\nForceReinjectionEveryNSteps to a non zero value will cause the\nparticle source to reinject particles every Nth step even if it\nis otherwise unchanged. Note that if the particle source is also\nanimated, this flag will be redundant as the particles will be\nreinjected whenever the source changes anyway\n"},
  {(char*)"SetForceReinjectionEveryNSteps", PyvtkParticleTracerBase_SetForceReinjectionEveryNSteps, METH_VARARGS,
   (char*)"V.SetForceReinjectionEveryNSteps(int)\nC++: void SetForceReinjectionEveryNSteps(int)\n\nWhen animating particles, it is nice to inject new ones every Nth\nstep to produce a continuous flow. Setting\nForceReinjectionEveryNSteps to a non zero value will cause the\nparticle source to reinject particles every Nth step even if it\nis otherwise unchanged. Note that if the particle source is also\nanimated, this flag will be redundant as the particles will be\nreinjected whenever the source changes anyway\n"},
  {(char*)"SetTerminationTime", PyvtkParticleTracerBase_SetTerminationTime, METH_VARARGS,
   (char*)"V.SetTerminationTime(float)\nC++: void SetTerminationTime(double t)\n\nSetting TerminationTime to a positive value will cause particles\nto terminate when the time is reached. Use a vlue of zero to\ndiable termination. The units of time should be consistent with\nthe primary time variable.\n"},
  {(char*)"GetTerminationTime", PyvtkParticleTracerBase_GetTerminationTime, METH_VARARGS,
   (char*)"V.GetTerminationTime() -> float\nC++: double GetTerminationTime()\n\nSetting TerminationTime to a positive value will cause particles\nto terminate when the time is reached. Use a vlue of zero to\ndiable termination. The units of time should be consistent with\nthe primary time variable.\n"},
  {(char*)"SetIntegrator", PyvtkParticleTracerBase_SetIntegrator, METH_VARARGS,
   (char*)"V.SetIntegrator(vtkInitialValueProblemSolver)\nC++: void SetIntegrator(vtkInitialValueProblemSolver *)\n\n"},
  {(char*)"GetIntegrator", PyvtkParticleTracerBase_GetIntegrator, METH_VARARGS,
   (char*)"V.GetIntegrator() -> vtkInitialValueProblemSolver\nC++: vtkInitialValueProblemSolver *GetIntegrator()\n\n"},
  {(char*)"SetIntegratorType", PyvtkParticleTracerBase_SetIntegratorType, METH_VARARGS,
   (char*)"V.SetIntegratorType(int)\nC++: void SetIntegratorType(int type)\n\n"},
  {(char*)"GetIntegratorType", PyvtkParticleTracerBase_GetIntegratorType, METH_VARARGS,
   (char*)"V.GetIntegratorType() -> int\nC++: int GetIntegratorType()\n\n"},
  {(char*)"GetStartTime", PyvtkParticleTracerBase_GetStartTime, METH_VARARGS,
   (char*)"V.GetStartTime() -> float\nC++: double GetStartTime()\n\nSetting TerminationTime to a positive value will cause particles\nto terminate when the time is reached. Use a vlue of zero to\ndiable termination. The units of time should be consistent with\nthe primary time variable.\n"},
  {(char*)"SetStartTime", PyvtkParticleTracerBase_SetStartTime, METH_VARARGS,
   (char*)"V.SetStartTime(float)\nC++: void SetStartTime(double t)\n\nSetting TerminationTime to a positive value will cause particles\nto terminate when the time is reached. Use a vlue of zero to\ndiable termination. The units of time should be consistent with\nthe primary time variable.\n"},
  {(char*)"SetStaticSeeds", PyvtkParticleTracerBase_SetStaticSeeds, METH_VARARGS,
   (char*)"V.SetStaticSeeds(int)\nC++: void SetStaticSeeds(int a)\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected. The default is that StaticSeeds is 0.\n"},
  {(char*)"GetStaticSeeds", PyvtkParticleTracerBase_GetStaticSeeds, METH_VARARGS,
   (char*)"V.GetStaticSeeds() -> int\nC++: int GetStaticSeeds()\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected. The default is that StaticSeeds is 0.\n"},
  {(char*)"SetStaticMesh", PyvtkParticleTracerBase_SetStaticMesh, METH_VARARGS,
   (char*)"V.SetStaticMesh(int)\nC++: void SetStaticMesh(int a)\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\nThe default is that StaticMesh is 0.\n"},
  {(char*)"GetStaticMesh", PyvtkParticleTracerBase_GetStaticMesh, METH_VARARGS,
   (char*)"V.GetStaticMesh() -> int\nC++: int GetStaticMesh()\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\nThe default is that StaticMesh is 0.\n"},
  {(char*)"SetParticleWriter", PyvtkParticleTracerBase_SetParticleWriter, METH_VARARGS,
   (char*)"V.SetParticleWriter(vtkAbstractParticleWriter)\nC++: virtual void SetParticleWriter(vtkAbstractParticleWriter *pw)\n\nSet/Get the Writer associated with this Particle Tracer Ideally a\nparallel IO capable vtkH5PartWriter should be used which will\ncollect particles from all parallel processes and write them to a\nsingle HDF5 file.\n"},
  {(char*)"GetParticleWriter", PyvtkParticleTracerBase_GetParticleWriter, METH_VARARGS,
   (char*)"V.GetParticleWriter() -> vtkAbstractParticleWriter\nC++: vtkAbstractParticleWriter *GetParticleWriter()\n\nSet/Get the Writer associated with this Particle Tracer Ideally a\nparallel IO capable vtkH5PartWriter should be used which will\ncollect particles from all parallel processes and write them to a\nsingle HDF5 file.\n"},
  {(char*)"SetParticleFileName", PyvtkParticleTracerBase_SetParticleFileName, METH_VARARGS,
   (char*)"V.SetParticleFileName(string)\nC++: void SetParticleFileName(char *)\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"GetParticleFileName", PyvtkParticleTracerBase_GetParticleFileName, METH_VARARGS,
   (char*)"V.GetParticleFileName() -> string\nC++: char *GetParticleFileName()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"SetEnableParticleWriting", PyvtkParticleTracerBase_SetEnableParticleWriting, METH_VARARGS,
   (char*)"V.SetEnableParticleWriting(int)\nC++: void SetEnableParticleWriting(int a)\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"GetEnableParticleWriting", PyvtkParticleTracerBase_GetEnableParticleWriting, METH_VARARGS,
   (char*)"V.GetEnableParticleWriting() -> int\nC++: int GetEnableParticleWriting()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"EnableParticleWritingOn", PyvtkParticleTracerBase_EnableParticleWritingOn, METH_VARARGS,
   (char*)"V.EnableParticleWritingOn()\nC++: void EnableParticleWritingOn()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"EnableParticleWritingOff", PyvtkParticleTracerBase_EnableParticleWritingOff, METH_VARARGS,
   (char*)"V.EnableParticleWritingOff()\nC++: void EnableParticleWritingOff()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"SetDisableResetCache", PyvtkParticleTracerBase_SetDisableResetCache, METH_VARARGS,
   (char*)"V.SetDisableResetCache(int)\nC++: void SetDisableResetCache(int a)\n\nSet/Get the flag to disable cache This is off by default and\nturned on in special circumstances such as in a coprocessing\nworkflow\n"},
  {(char*)"GetDisableResetCache", PyvtkParticleTracerBase_GetDisableResetCache, METH_VARARGS,
   (char*)"V.GetDisableResetCache() -> int\nC++: int GetDisableResetCache()\n\nSet/Get the flag to disable cache This is off by default and\nturned on in special circumstances such as in a coprocessing\nworkflow\n"},
  {(char*)"DisableResetCacheOn", PyvtkParticleTracerBase_DisableResetCacheOn, METH_VARARGS,
   (char*)"V.DisableResetCacheOn()\nC++: void DisableResetCacheOn()\n\nSet/Get the flag to disable cache This is off by default and\nturned on in special circumstances such as in a coprocessing\nworkflow\n"},
  {(char*)"DisableResetCacheOff", PyvtkParticleTracerBase_DisableResetCacheOff, METH_VARARGS,
   (char*)"V.DisableResetCacheOff()\nC++: void DisableResetCacheOff()\n\nSet/Get the flag to disable cache This is off by default and\nturned on in special circumstances such as in a coprocessing\nworkflow\n"},
  {(char*)"AddSourceConnection", PyvtkParticleTracerBase_AddSourceConnection, METH_VARARGS,
   (char*)"V.AddSourceConnection(vtkAlgorithmOutput)\nC++: void AddSourceConnection(vtkAlgorithmOutput *input)\n\nProvide support for multiple see sources\n"},
  {(char*)"RemoveAllSources", PyvtkParticleTracerBase_RemoveAllSources, METH_VARARGS,
   (char*)"V.RemoveAllSources()\nC++: void RemoveAllSources()\n\nProvide support for multiple see sources\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkParticleTracerBaseNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkParticleTracerBase_Methods,
    "vtkParticleTracerBase", modulename,
    NULL, NULL,
    PyvtkParticleTracerBase_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkParticleTracerBase_Solvers_Type);
    PyvtkParticleTracerBase_Solvers_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkParticleTracerBase_Solvers_Type;
    if (o && PyDict_SetItemString(d, (char *)"Solvers", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkParticleTracerBase::Solvers cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "RUNGE_KUTTA2", vtkParticleTracerBase::RUNGE_KUTTA2 },
          { "RUNGE_KUTTA4", vtkParticleTracerBase::RUNGE_KUTTA4 },
          { "RUNGE_KUTTA45", vtkParticleTracerBase::RUNGE_KUTTA45 },
          { "NONE", vtkParticleTracerBase::NONE },
          { "UNKNOWN", vtkParticleTracerBase::UNKNOWN },
        };

      o = PyvtkParticleTracerBase_Solvers_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkParticleTracerBase_Doc()
{
  static const char *docstring[] = {
    "vtkParticleTracerBase - A particle tracer for vector fields\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkParticleTracerBase is the base class for filters that advect\nparticles in a vector field. Note that the input vtkPointData\nstructure must be identical on all datasets.\n\nSee Also:\n\nvtkRibbonFilter vtkRuledSurfaceFilter vtkInitialValueProblemSolver\nvtkRungeKutta2 vtkRungeKutta4 vtkRungeKutta45 vtkStreamTracer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParticleTracerBase(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParticleTracerBaseNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParticleTracerBase", o) != 0)
    {
    Py_DECREF(o);
    }

}

