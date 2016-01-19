// python wrapper for vtkTemporalStreamTracer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTemporalStreamTracer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTemporalStreamTracer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTemporalStreamTracerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStreamTracerNew
extern "C" { PyObject *PyVTKClass_vtkStreamTracerNew(const char *); }
#define DECLARED_PyVTKClass_vtkStreamTracerNew
#endif

static const char **PyvtkTemporalStreamTracer_Doc();

#ifndef DECLARED_PyvtkTemporalStreamTracer_Units_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTemporalStreamTracer_Units_Type;
#define DECLARED_PyvtkTemporalStreamTracer_Units_Type
#endif

PyTypeObject PyvtkTemporalStreamTracer_Units_Type = {
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

PyObject *PyvtkTemporalStreamTracer_Units_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkTemporalStreamTracer_Units_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkTemporalStreamTracer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTemporalStreamTracer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalStreamTracer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTemporalStreamTracer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalStreamTracer::NewInstance());

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
PyvtkTemporalStreamTracer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTemporalStreamTracer *tempr = vtkTemporalStreamTracer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStep(temp0);
      }
    else
      {
      op->vtkTemporalStreamTracer::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkTemporalStreamTracer::GetTimeStep());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetIgnorePipelineTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnorePipelineTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::SetIgnorePipelineTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetIgnorePipelineTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnorePipelineTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIgnorePipelineTime() :
      op->vtkTemporalStreamTracer::GetIgnorePipelineTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_IgnorePipelineTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnorePipelineTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IgnorePipelineTimeOn();
      }
    else
      {
      op->vtkTemporalStreamTracer::IgnorePipelineTimeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_IgnorePipelineTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnorePipelineTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IgnorePipelineTimeOff();
      }
    else
      {
      op->vtkTemporalStreamTracer::IgnorePipelineTimeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTimeStepResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStepResolution(temp0);
      }
    else
      {
      op->vtkTemporalStreamTracer::SetTimeStepResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetTimeStepResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTimeStepResolution() :
      op->vtkTemporalStreamTracer::GetTimeStepResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetForceReinjectionEveryNSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceReinjectionEveryNSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::SetForceReinjectionEveryNSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetForceReinjectionEveryNSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceReinjectionEveryNSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetForceReinjectionEveryNSteps() :
      op->vtkTemporalStreamTracer::GetForceReinjectionEveryNSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTerminationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::SetTerminationTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetTerminationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTerminationTime() :
      op->vtkTemporalStreamTracer::GetTerminationTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTerminationTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminationTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTerminationTimeUnit(temp0);
      }
    else
      {
      op->vtkTemporalStreamTracer::SetTerminationTimeUnit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetTerminationTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminationTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTerminationTimeUnit() :
      op->vtkTemporalStreamTracer::GetTerminationTimeUnit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTerminationTimeUnitToTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminationTimeUnitToTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTerminationTimeUnitToTimeUnit();
      }
    else
      {
      op->vtkTemporalStreamTracer::SetTerminationTimeUnitToTimeUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTerminationTimeUnitToStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminationTimeUnitToStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTerminationTimeUnitToStepUnit();
      }
    else
      {
      op->vtkTemporalStreamTracer::SetTerminationTimeUnitToStepUnit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetStaticSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStaticSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::SetStaticSeeds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetStaticSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStaticSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStaticSeeds() :
      op->vtkTemporalStreamTracer::GetStaticSeeds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_StaticSeedsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticSeedsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StaticSeedsOn();
      }
    else
      {
      op->vtkTemporalStreamTracer::StaticSeedsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_StaticSeedsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticSeedsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StaticSeedsOff();
      }
    else
      {
      op->vtkTemporalStreamTracer::StaticSeedsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetStaticMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStaticMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::SetStaticMesh(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetStaticMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStaticMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStaticMesh() :
      op->vtkTemporalStreamTracer::GetStaticMesh());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_StaticMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StaticMeshOn();
      }
    else
      {
      op->vtkTemporalStreamTracer::StaticMeshOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_StaticMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StaticMeshOff();
      }
    else
      {
      op->vtkTemporalStreamTracer::StaticMeshOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetParticleWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::SetParticleWriter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetParticleWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractParticleWriter *tempr = (ap.IsBound() ?
      op->GetParticleWriter() :
      op->vtkTemporalStreamTracer::GetParticleWriter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetParticleFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::SetParticleFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetParticleFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetParticleFileName() :
      op->vtkTemporalStreamTracer::GetParticleFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetEnableParticleWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableParticleWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::SetEnableParticleWriting(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetEnableParticleWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableParticleWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableParticleWriting() :
      op->vtkTemporalStreamTracer::GetEnableParticleWriting());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_EnableParticleWritingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableParticleWritingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableParticleWritingOn();
      }
    else
      {
      op->vtkTemporalStreamTracer::EnableParticleWritingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_EnableParticleWritingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableParticleWritingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableParticleWritingOff();
      }
    else
      {
      op->vtkTemporalStreamTracer::EnableParticleWritingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_AddSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::AddSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_RemoveAllSources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllSources();
      }
    else
      {
      op->vtkTemporalStreamTracer::RemoveAllSources();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalStreamTracer_Methods[] = {
  {(char*)"GetClassName", PyvtkTemporalStreamTracer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTemporalStreamTracer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTemporalStreamTracer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTemporalStreamTracer\nC++: vtkTemporalStreamTracer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTemporalStreamTracer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTemporalStreamTracer\nC++: vtkTemporalStreamTracer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTimeStep", PyvtkTemporalStreamTracer_SetTimeStep, METH_VARARGS,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(unsigned int a)\n\nSet/Get the TimeStep. This is the primary means of advancing the\nparticles. The TimeStep should be animated and this will drive\nthe pipeline forcing timesteps to be fetched from upstream.\n"},
  {(char*)"GetTimeStep", PyvtkTemporalStreamTracer_GetTimeStep, METH_VARARGS,
   (char*)"V.GetTimeStep() -> int\nC++: unsigned int GetTimeStep()\n\nSet/Get the TimeStep. This is the primary means of advancing the\nparticles. The TimeStep should be animated and this will drive\nthe pipeline forcing timesteps to be fetched from upstream.\n"},
  {(char*)"SetIgnorePipelineTime", PyvtkTemporalStreamTracer_SetIgnorePipelineTime, METH_VARARGS,
   (char*)"V.SetIgnorePipelineTime(int)\nC++: void SetIgnorePipelineTime(int a)\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {(char*)"GetIgnorePipelineTime", PyvtkTemporalStreamTracer_GetIgnorePipelineTime, METH_VARARGS,
   (char*)"V.GetIgnorePipelineTime() -> int\nC++: int GetIgnorePipelineTime()\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {(char*)"IgnorePipelineTimeOn", PyvtkTemporalStreamTracer_IgnorePipelineTimeOn, METH_VARARGS,
   (char*)"V.IgnorePipelineTimeOn()\nC++: void IgnorePipelineTimeOn()\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {(char*)"IgnorePipelineTimeOff", PyvtkTemporalStreamTracer_IgnorePipelineTimeOff, METH_VARARGS,
   (char*)"V.IgnorePipelineTimeOff()\nC++: void IgnorePipelineTimeOff()\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {(char*)"SetTimeStepResolution", PyvtkTemporalStreamTracer_SetTimeStepResolution, METH_VARARGS,
   (char*)"V.SetTimeStepResolution(float)\nC++: void SetTimeStepResolution(double a)\n\nIf the data source does not have the correct time values present\non each time step - setting this value to non unity can be used\nto adjust the time step size from 1s pre step to\n1x_TimeStepResolution : Not functional in this version. Broke it\n@todo, put back time scaling\n"},
  {(char*)"GetTimeStepResolution", PyvtkTemporalStreamTracer_GetTimeStepResolution, METH_VARARGS,
   (char*)"V.GetTimeStepResolution() -> float\nC++: double GetTimeStepResolution()\n\nIf the data source does not have the correct time values present\non each time step - setting this value to non unity can be used\nto adjust the time step size from 1s pre step to\n1x_TimeStepResolution : Not functional in this version. Broke it\n@todo, put back time scaling\n"},
  {(char*)"SetForceReinjectionEveryNSteps", PyvtkTemporalStreamTracer_SetForceReinjectionEveryNSteps, METH_VARARGS,
   (char*)"V.SetForceReinjectionEveryNSteps(int)\nC++: void SetForceReinjectionEveryNSteps(int a)\n\nWhen animating particles, it is nice to inject new ones every Nth\nstep to produce a continuous flow. Setting\nForceReinjectionEveryNSteps to a non zero value will cause the\nparticle source to reinject particles every Nth step even if it\nis otherwise unchanged. Note that if the particle source is also\nanimated, this flag will be redundant as the particles will be\nreinjected whenever the source changes anyway\n"},
  {(char*)"GetForceReinjectionEveryNSteps", PyvtkTemporalStreamTracer_GetForceReinjectionEveryNSteps, METH_VARARGS,
   (char*)"V.GetForceReinjectionEveryNSteps() -> int\nC++: int GetForceReinjectionEveryNSteps()\n\nWhen animating particles, it is nice to inject new ones every Nth\nstep to produce a continuous flow. Setting\nForceReinjectionEveryNSteps to a non zero value will cause the\nparticle source to reinject particles every Nth step even if it\nis otherwise unchanged. Note that if the particle source is also\nanimated, this flag will be redundant as the particles will be\nreinjected whenever the source changes anyway\n"},
  {(char*)"SetTerminationTime", PyvtkTemporalStreamTracer_SetTerminationTime, METH_VARARGS,
   (char*)"V.SetTerminationTime(float)\nC++: void SetTerminationTime(double a)\n\nSetting TerminationTime to a positive value will cause particles\nto terminate when the time is reached. Use a vlue of zero to\ndiable termination. The units of time should be consistent with\nthe primary time variable.\n"},
  {(char*)"GetTerminationTime", PyvtkTemporalStreamTracer_GetTerminationTime, METH_VARARGS,
   (char*)"V.GetTerminationTime() -> float\nC++: double GetTerminationTime()\n\nSetting TerminationTime to a positive value will cause particles\nto terminate when the time is reached. Use a vlue of zero to\ndiable termination. The units of time should be consistent with\nthe primary time variable.\n"},
  {(char*)"SetTerminationTimeUnit", PyvtkTemporalStreamTracer_SetTerminationTimeUnit, METH_VARARGS,
   (char*)"V.SetTerminationTimeUnit(int)\nC++: void SetTerminationTimeUnit(int a)\n\nThe units of TerminationTime may be actual 'Time' units as\ndescribed by the data, or just TimeSteps of iteration.\n"},
  {(char*)"GetTerminationTimeUnit", PyvtkTemporalStreamTracer_GetTerminationTimeUnit, METH_VARARGS,
   (char*)"V.GetTerminationTimeUnit() -> int\nC++: int GetTerminationTimeUnit()\n\nThe units of TerminationTime may be actual 'Time' units as\ndescribed by the data, or just TimeSteps of iteration.\n"},
  {(char*)"SetTerminationTimeUnitToTimeUnit", PyvtkTemporalStreamTracer_SetTerminationTimeUnitToTimeUnit, METH_VARARGS,
   (char*)"V.SetTerminationTimeUnitToTimeUnit()\nC++: void SetTerminationTimeUnitToTimeUnit()\n\nThe units of TerminationTime may be actual 'Time' units as\ndescribed by the data, or just TimeSteps of iteration.\n"},
  {(char*)"SetTerminationTimeUnitToStepUnit", PyvtkTemporalStreamTracer_SetTerminationTimeUnitToStepUnit, METH_VARARGS,
   (char*)"V.SetTerminationTimeUnitToStepUnit()\nC++: void SetTerminationTimeUnitToStepUnit()\n\nThe units of TerminationTime may be actual 'Time' units as\ndescribed by the data, or just TimeSteps of iteration.\n"},
  {(char*)"SetStaticSeeds", PyvtkTemporalStreamTracer_SetStaticSeeds, METH_VARARGS,
   (char*)"V.SetStaticSeeds(int)\nC++: void SetStaticSeeds(int a)\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected.\n"},
  {(char*)"GetStaticSeeds", PyvtkTemporalStreamTracer_GetStaticSeeds, METH_VARARGS,
   (char*)"V.GetStaticSeeds() -> int\nC++: int GetStaticSeeds()\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected.\n"},
  {(char*)"StaticSeedsOn", PyvtkTemporalStreamTracer_StaticSeedsOn, METH_VARARGS,
   (char*)"V.StaticSeedsOn()\nC++: void StaticSeedsOn()\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected.\n"},
  {(char*)"StaticSeedsOff", PyvtkTemporalStreamTracer_StaticSeedsOff, METH_VARARGS,
   (char*)"V.StaticSeedsOff()\nC++: void StaticSeedsOff()\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected.\n"},
  {(char*)"SetStaticMesh", PyvtkTemporalStreamTracer_SetStaticMesh, METH_VARARGS,
   (char*)"V.SetStaticMesh(int)\nC++: void SetStaticMesh(int a)\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\n"},
  {(char*)"GetStaticMesh", PyvtkTemporalStreamTracer_GetStaticMesh, METH_VARARGS,
   (char*)"V.GetStaticMesh() -> int\nC++: int GetStaticMesh()\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\n"},
  {(char*)"StaticMeshOn", PyvtkTemporalStreamTracer_StaticMeshOn, METH_VARARGS,
   (char*)"V.StaticMeshOn()\nC++: void StaticMeshOn()\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\n"},
  {(char*)"StaticMeshOff", PyvtkTemporalStreamTracer_StaticMeshOff, METH_VARARGS,
   (char*)"V.StaticMeshOff()\nC++: void StaticMeshOff()\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\n"},
  {(char*)"SetParticleWriter", PyvtkTemporalStreamTracer_SetParticleWriter, METH_VARARGS,
   (char*)"V.SetParticleWriter(vtkAbstractParticleWriter)\nC++: virtual void SetParticleWriter(vtkAbstractParticleWriter *pw)\n\nSet/Get the Writer associated with this Particle Tracer Ideally a\nparallel IO capable vtkH5PartWriter should be used which will\ncollect particles from all parallel processes and write them to a\nsingle HDF5 file.\n"},
  {(char*)"GetParticleWriter", PyvtkTemporalStreamTracer_GetParticleWriter, METH_VARARGS,
   (char*)"V.GetParticleWriter() -> vtkAbstractParticleWriter\nC++: vtkAbstractParticleWriter *GetParticleWriter()\n\nSet/Get the Writer associated with this Particle Tracer Ideally a\nparallel IO capable vtkH5PartWriter should be used which will\ncollect particles from all parallel processes and write them to a\nsingle HDF5 file.\n"},
  {(char*)"SetParticleFileName", PyvtkTemporalStreamTracer_SetParticleFileName, METH_VARARGS,
   (char*)"V.SetParticleFileName(string)\nC++: void SetParticleFileName(char *)\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"GetParticleFileName", PyvtkTemporalStreamTracer_GetParticleFileName, METH_VARARGS,
   (char*)"V.GetParticleFileName() -> string\nC++: char *GetParticleFileName()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"SetEnableParticleWriting", PyvtkTemporalStreamTracer_SetEnableParticleWriting, METH_VARARGS,
   (char*)"V.SetEnableParticleWriting(int)\nC++: void SetEnableParticleWriting(int a)\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"GetEnableParticleWriting", PyvtkTemporalStreamTracer_GetEnableParticleWriting, METH_VARARGS,
   (char*)"V.GetEnableParticleWriting() -> int\nC++: int GetEnableParticleWriting()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"EnableParticleWritingOn", PyvtkTemporalStreamTracer_EnableParticleWritingOn, METH_VARARGS,
   (char*)"V.EnableParticleWritingOn()\nC++: void EnableParticleWritingOn()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"EnableParticleWritingOff", PyvtkTemporalStreamTracer_EnableParticleWritingOff, METH_VARARGS,
   (char*)"V.EnableParticleWritingOff()\nC++: void EnableParticleWritingOff()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {(char*)"AddSourceConnection", PyvtkTemporalStreamTracer_AddSourceConnection, METH_VARARGS,
   (char*)"V.AddSourceConnection(vtkAlgorithmOutput)\nC++: void AddSourceConnection(vtkAlgorithmOutput *input)\n\nProvide support for multiple see sources\n"},
  {(char*)"RemoveAllSources", PyvtkTemporalStreamTracer_RemoveAllSources, METH_VARARGS,
   (char*)"V.RemoveAllSources()\nC++: void RemoveAllSources()\n\nProvide support for multiple see sources\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTemporalStreamTracer_StaticNew()
{
  return vtkTemporalStreamTracer::New();
}

PyObject *PyVTKClass_vtkTemporalStreamTracerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTemporalStreamTracer_StaticNew,
    PyvtkTemporalStreamTracer_Methods,
    "vtkTemporalStreamTracer", modulename,
    NULL, NULL,
    PyvtkTemporalStreamTracer_Doc(),
    PyVTKClass_vtkStreamTracerNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkTemporalStreamTracer_Units_Type);
    PyvtkTemporalStreamTracer_Units_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkTemporalStreamTracer_Units_Type;
    if (o && PyDict_SetItemString(d, (char *)"Units", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkTemporalStreamTracer::Units cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "TERMINATION_TIME_UNIT", vtkTemporalStreamTracer::TERMINATION_TIME_UNIT },
          { "TERMINATION_STEP_UNIT", vtkTemporalStreamTracer::TERMINATION_STEP_UNIT },
        };

      o = PyvtkTemporalStreamTracer_Units_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkTemporalStreamTracer_Doc()
{
  static const char *docstring[] = {
    "vtkTemporalStreamTracer - A Parallel Particle tracer for unsteady\nvector fields\n\n",
    "Superclass: vtkStreamTracer\n\n",
    "vtkTemporalStreamTracer is a filter that integrates a vector field to\ngenerate\n\nSee Also:\n\nvtkRibbonFilter vtkRuledSurfaceFilter vtkInitialValueProblemSolver\nvtkRungeKutta2 vtkRungeKutta4 vtkRungeKutta45 vtkStreamTracer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTemporalStreamTracer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTemporalStreamTracerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTemporalStreamTracer", o) != 0)
    {
    Py_DECREF(o);
    }

}

