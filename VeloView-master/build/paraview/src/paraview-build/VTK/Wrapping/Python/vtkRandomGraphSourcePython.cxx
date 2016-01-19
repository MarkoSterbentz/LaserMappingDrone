// python wrapper for vtkRandomGraphSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRandomGraphSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRandomGraphSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRandomGraphSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkRandomGraphSource_Doc();


static PyObject *
PyvtkRandomGraphSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRandomGraphSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRandomGraphSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRandomGraphSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRandomGraphSource::NewInstance());

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
PyvtkRandomGraphSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRandomGraphSource *tempr = vtkRandomGraphSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVertices() :
      op->vtkRandomGraphSource::GetNumberOfVertices());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfVertices(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetNumberOfVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfVerticesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVerticesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVerticesMinValue() :
      op->vtkRandomGraphSource::GetNumberOfVerticesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfVerticesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVerticesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVerticesMaxValue() :
      op->vtkRandomGraphSource::GetNumberOfVerticesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkRandomGraphSource::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfEdges(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetNumberOfEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfEdgesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgesMinValue() :
      op->vtkRandomGraphSource::GetNumberOfEdgesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfEdgesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgesMaxValue() :
      op->vtkRandomGraphSource::GetNumberOfEdgesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgeProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEdgeProbability() :
      op->vtkRandomGraphSource::GetEdgeProbability());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetEdgeProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeProbability(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetEdgeProbability(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgeProbabilityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeProbabilityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEdgeProbabilityMinValue() :
      op->vtkRandomGraphSource::GetEdgeProbabilityMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgeProbabilityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeProbabilityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEdgeProbabilityMaxValue() :
      op->vtkRandomGraphSource::GetEdgeProbabilityMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetIncludeEdgeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeEdgeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIncludeEdgeWeights(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetIncludeEdgeWeights(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetIncludeEdgeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeEdgeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIncludeEdgeWeights() :
      op->vtkRandomGraphSource::GetIncludeEdgeWeights());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_IncludeEdgeWeightsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeEdgeWeightsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncludeEdgeWeightsOn();
      }
    else
      {
      op->vtkRandomGraphSource::IncludeEdgeWeightsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_IncludeEdgeWeightsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeEdgeWeightsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncludeEdgeWeightsOff();
      }
    else
      {
      op->vtkRandomGraphSource::IncludeEdgeWeightsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeWeightArrayName(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetEdgeWeightArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetEdgeWeightArrayName() :
      op->vtkRandomGraphSource::GetEdgeWeightArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDirected(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetDirected(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDirected() :
      op->vtkRandomGraphSource::GetDirected());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_DirectedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectedOn();
      }
    else
      {
      op->vtkRandomGraphSource::DirectedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_DirectedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectedOff();
      }
    else
      {
      op->vtkRandomGraphSource::DirectedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetUseEdgeProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseEdgeProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseEdgeProbability(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetUseEdgeProbability(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetUseEdgeProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseEdgeProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseEdgeProbability() :
      op->vtkRandomGraphSource::GetUseEdgeProbability());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_UseEdgeProbabilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeProbabilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseEdgeProbabilityOn();
      }
    else
      {
      op->vtkRandomGraphSource::UseEdgeProbabilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_UseEdgeProbabilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeProbabilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseEdgeProbabilityOff();
      }
    else
      {
      op->vtkRandomGraphSource::UseEdgeProbabilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetStartWithTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartWithTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartWithTree(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetStartWithTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetStartWithTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartWithTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetStartWithTree() :
      op->vtkRandomGraphSource::GetStartWithTree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_StartWithTreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWithTreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartWithTreeOn();
      }
    else
      {
      op->vtkRandomGraphSource::StartWithTreeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_StartWithTreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWithTreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartWithTreeOff();
      }
    else
      {
      op->vtkRandomGraphSource::StartWithTreeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetAllowSelfLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowSelfLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllowSelfLoops(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetAllowSelfLoops(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetAllowSelfLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowSelfLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAllowSelfLoops() :
      op->vtkRandomGraphSource::GetAllowSelfLoops());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_AllowSelfLoopsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowSelfLoopsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowSelfLoopsOn();
      }
    else
      {
      op->vtkRandomGraphSource::AllowSelfLoopsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_AllowSelfLoopsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowSelfLoopsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowSelfLoopsOff();
      }
    else
      {
      op->vtkRandomGraphSource::AllowSelfLoopsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetAllowParallelEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowParallelEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllowParallelEdges(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetAllowParallelEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetAllowParallelEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowParallelEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAllowParallelEdges() :
      op->vtkRandomGraphSource::GetAllowParallelEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_AllowParallelEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowParallelEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowParallelEdgesOn();
      }
    else
      {
      op->vtkRandomGraphSource::AllowParallelEdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_AllowParallelEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowParallelEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowParallelEdgesOff();
      }
    else
      {
      op->vtkRandomGraphSource::AllowParallelEdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePedigreeIds(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetGeneratePedigreeIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePedigreeIds() :
      op->vtkRandomGraphSource::GetGeneratePedigreeIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GeneratePedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePedigreeIdsOn();
      }
    else
      {
      op->vtkRandomGraphSource::GeneratePedigreeIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GeneratePedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePedigreeIdsOff();
      }
    else
      {
      op->vtkRandomGraphSource::GeneratePedigreeIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetVertexPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexPedigreeIdArrayName(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetVertexPedigreeIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetVertexPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetVertexPedigreeIdArrayName() :
      op->vtkRandomGraphSource::GetVertexPedigreeIdArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetEdgePedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgePedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgePedigreeIdArrayName(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetEdgePedigreeIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgePedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgePedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetEdgePedigreeIdArrayName() :
      op->vtkRandomGraphSource::GetEdgePedigreeIdArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSeed(temp0);
      }
    else
      {
      op->vtkRandomGraphSource::SetSeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSeed() :
      op->vtkRandomGraphSource::GetSeed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRandomGraphSource_Methods[] = {
  {(char*)"GetClassName", PyvtkRandomGraphSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRandomGraphSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRandomGraphSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRandomGraphSource\nC++: vtkRandomGraphSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRandomGraphSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRandomGraphSource\nC++: vtkRandomGraphSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfVertices", PyvtkRandomGraphSource_GetNumberOfVertices, METH_VARARGS,
   (char*)"V.GetNumberOfVertices() -> int\nC++: int GetNumberOfVertices()\n\nThe number of vertices in the graph.\n"},
  {(char*)"SetNumberOfVertices", PyvtkRandomGraphSource_SetNumberOfVertices, METH_VARARGS,
   (char*)"V.SetNumberOfVertices(int)\nC++: void SetNumberOfVertices(int)\n\nThe number of vertices in the graph.\n"},
  {(char*)"GetNumberOfVerticesMinValue", PyvtkRandomGraphSource_GetNumberOfVerticesMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfVerticesMinValue() -> int\nC++: int GetNumberOfVerticesMinValue()\n\nThe number of vertices in the graph.\n"},
  {(char*)"GetNumberOfVerticesMaxValue", PyvtkRandomGraphSource_GetNumberOfVerticesMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfVerticesMaxValue() -> int\nC++: int GetNumberOfVerticesMaxValue()\n\nThe number of vertices in the graph.\n"},
  {(char*)"GetNumberOfEdges", PyvtkRandomGraphSource_GetNumberOfEdges, METH_VARARGS,
   (char*)"V.GetNumberOfEdges() -> int\nC++: int GetNumberOfEdges()\n\nIf UseEdgeProbability is off, creates a graph with the specified\nnumber of edges.  Duplicate (parallel) edges are allowed.\n"},
  {(char*)"SetNumberOfEdges", PyvtkRandomGraphSource_SetNumberOfEdges, METH_VARARGS,
   (char*)"V.SetNumberOfEdges(int)\nC++: void SetNumberOfEdges(int)\n\nIf UseEdgeProbability is off, creates a graph with the specified\nnumber of edges.  Duplicate (parallel) edges are allowed.\n"},
  {(char*)"GetNumberOfEdgesMinValue", PyvtkRandomGraphSource_GetNumberOfEdgesMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfEdgesMinValue() -> int\nC++: int GetNumberOfEdgesMinValue()\n\nIf UseEdgeProbability is off, creates a graph with the specified\nnumber of edges.  Duplicate (parallel) edges are allowed.\n"},
  {(char*)"GetNumberOfEdgesMaxValue", PyvtkRandomGraphSource_GetNumberOfEdgesMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfEdgesMaxValue() -> int\nC++: int GetNumberOfEdgesMaxValue()\n\nIf UseEdgeProbability is off, creates a graph with the specified\nnumber of edges.  Duplicate (parallel) edges are allowed.\n"},
  {(char*)"GetEdgeProbability", PyvtkRandomGraphSource_GetEdgeProbability, METH_VARARGS,
   (char*)"V.GetEdgeProbability() -> float\nC++: double GetEdgeProbability()\n\nIf UseEdgeProbability is on, adds an edge with this probability\nbetween 0 and 1 for each pair of vertices in the graph.\n"},
  {(char*)"SetEdgeProbability", PyvtkRandomGraphSource_SetEdgeProbability, METH_VARARGS,
   (char*)"V.SetEdgeProbability(float)\nC++: void SetEdgeProbability(double)\n\nIf UseEdgeProbability is on, adds an edge with this probability\nbetween 0 and 1 for each pair of vertices in the graph.\n"},
  {(char*)"GetEdgeProbabilityMinValue", PyvtkRandomGraphSource_GetEdgeProbabilityMinValue, METH_VARARGS,
   (char*)"V.GetEdgeProbabilityMinValue() -> float\nC++: double GetEdgeProbabilityMinValue()\n\nIf UseEdgeProbability is on, adds an edge with this probability\nbetween 0 and 1 for each pair of vertices in the graph.\n"},
  {(char*)"GetEdgeProbabilityMaxValue", PyvtkRandomGraphSource_GetEdgeProbabilityMaxValue, METH_VARARGS,
   (char*)"V.GetEdgeProbabilityMaxValue() -> float\nC++: double GetEdgeProbabilityMaxValue()\n\nIf UseEdgeProbability is on, adds an edge with this probability\nbetween 0 and 1 for each pair of vertices in the graph.\n"},
  {(char*)"SetIncludeEdgeWeights", PyvtkRandomGraphSource_SetIncludeEdgeWeights, METH_VARARGS,
   (char*)"V.SetIncludeEdgeWeights(bool)\nC++: void SetIncludeEdgeWeights(bool a)\n\nWhen set, includes edge weights in an array named \"edge_weights\".\nDefaults to off.  Weights are random between 0 and 1.\n"},
  {(char*)"GetIncludeEdgeWeights", PyvtkRandomGraphSource_GetIncludeEdgeWeights, METH_VARARGS,
   (char*)"V.GetIncludeEdgeWeights() -> bool\nC++: bool GetIncludeEdgeWeights()\n\nWhen set, includes edge weights in an array named \"edge_weights\".\nDefaults to off.  Weights are random between 0 and 1.\n"},
  {(char*)"IncludeEdgeWeightsOn", PyvtkRandomGraphSource_IncludeEdgeWeightsOn, METH_VARARGS,
   (char*)"V.IncludeEdgeWeightsOn()\nC++: void IncludeEdgeWeightsOn()\n\nWhen set, includes edge weights in an array named \"edge_weights\".\nDefaults to off.  Weights are random between 0 and 1.\n"},
  {(char*)"IncludeEdgeWeightsOff", PyvtkRandomGraphSource_IncludeEdgeWeightsOff, METH_VARARGS,
   (char*)"V.IncludeEdgeWeightsOff()\nC++: void IncludeEdgeWeightsOff()\n\nWhen set, includes edge weights in an array named \"edge_weights\".\nDefaults to off.  Weights are random between 0 and 1.\n"},
  {(char*)"SetEdgeWeightArrayName", PyvtkRandomGraphSource_SetEdgeWeightArrayName, METH_VARARGS,
   (char*)"V.SetEdgeWeightArrayName(string)\nC++: void SetEdgeWeightArrayName(char *)\n\nThe name of the edge weight array. Default \"edge weight\".\n"},
  {(char*)"GetEdgeWeightArrayName", PyvtkRandomGraphSource_GetEdgeWeightArrayName, METH_VARARGS,
   (char*)"V.GetEdgeWeightArrayName() -> string\nC++: char *GetEdgeWeightArrayName()\n\nThe name of the edge weight array. Default \"edge weight\".\n"},
  {(char*)"SetDirected", PyvtkRandomGraphSource_SetDirected, METH_VARARGS,
   (char*)"V.SetDirected(bool)\nC++: void SetDirected(bool a)\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {(char*)"GetDirected", PyvtkRandomGraphSource_GetDirected, METH_VARARGS,
   (char*)"V.GetDirected() -> bool\nC++: bool GetDirected()\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {(char*)"DirectedOn", PyvtkRandomGraphSource_DirectedOn, METH_VARARGS,
   (char*)"V.DirectedOn()\nC++: void DirectedOn()\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {(char*)"DirectedOff", PyvtkRandomGraphSource_DirectedOff, METH_VARARGS,
   (char*)"V.DirectedOff()\nC++: void DirectedOff()\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {(char*)"SetUseEdgeProbability", PyvtkRandomGraphSource_SetUseEdgeProbability, METH_VARARGS,
   (char*)"V.SetUseEdgeProbability(bool)\nC++: void SetUseEdgeProbability(bool a)\n\nWhen set, uses the EdgeProbability parameter to determine the\ndensity of edges.  Otherwise, NumberOfEdges is used.\n"},
  {(char*)"GetUseEdgeProbability", PyvtkRandomGraphSource_GetUseEdgeProbability, METH_VARARGS,
   (char*)"V.GetUseEdgeProbability() -> bool\nC++: bool GetUseEdgeProbability()\n\nWhen set, uses the EdgeProbability parameter to determine the\ndensity of edges.  Otherwise, NumberOfEdges is used.\n"},
  {(char*)"UseEdgeProbabilityOn", PyvtkRandomGraphSource_UseEdgeProbabilityOn, METH_VARARGS,
   (char*)"V.UseEdgeProbabilityOn()\nC++: void UseEdgeProbabilityOn()\n\nWhen set, uses the EdgeProbability parameter to determine the\ndensity of edges.  Otherwise, NumberOfEdges is used.\n"},
  {(char*)"UseEdgeProbabilityOff", PyvtkRandomGraphSource_UseEdgeProbabilityOff, METH_VARARGS,
   (char*)"V.UseEdgeProbabilityOff()\nC++: void UseEdgeProbabilityOff()\n\nWhen set, uses the EdgeProbability parameter to determine the\ndensity of edges.  Otherwise, NumberOfEdges is used.\n"},
  {(char*)"SetStartWithTree", PyvtkRandomGraphSource_SetStartWithTree, METH_VARARGS,
   (char*)"V.SetStartWithTree(bool)\nC++: void SetStartWithTree(bool a)\n\nWhen set, builds a random tree structure first, then adds\nadditional random edges.\n"},
  {(char*)"GetStartWithTree", PyvtkRandomGraphSource_GetStartWithTree, METH_VARARGS,
   (char*)"V.GetStartWithTree() -> bool\nC++: bool GetStartWithTree()\n\nWhen set, builds a random tree structure first, then adds\nadditional random edges.\n"},
  {(char*)"StartWithTreeOn", PyvtkRandomGraphSource_StartWithTreeOn, METH_VARARGS,
   (char*)"V.StartWithTreeOn()\nC++: void StartWithTreeOn()\n\nWhen set, builds a random tree structure first, then adds\nadditional random edges.\n"},
  {(char*)"StartWithTreeOff", PyvtkRandomGraphSource_StartWithTreeOff, METH_VARARGS,
   (char*)"V.StartWithTreeOff()\nC++: void StartWithTreeOff()\n\nWhen set, builds a random tree structure first, then adds\nadditional random edges.\n"},
  {(char*)"SetAllowSelfLoops", PyvtkRandomGraphSource_SetAllowSelfLoops, METH_VARARGS,
   (char*)"V.SetAllowSelfLoops(bool)\nC++: void SetAllowSelfLoops(bool a)\n\nIf this flag is set to true, edges where the source and target\nvertex are the same can be generated.  The default is to forbid\nsuch loops.\n"},
  {(char*)"GetAllowSelfLoops", PyvtkRandomGraphSource_GetAllowSelfLoops, METH_VARARGS,
   (char*)"V.GetAllowSelfLoops() -> bool\nC++: bool GetAllowSelfLoops()\n\nIf this flag is set to true, edges where the source and target\nvertex are the same can be generated.  The default is to forbid\nsuch loops.\n"},
  {(char*)"AllowSelfLoopsOn", PyvtkRandomGraphSource_AllowSelfLoopsOn, METH_VARARGS,
   (char*)"V.AllowSelfLoopsOn()\nC++: void AllowSelfLoopsOn()\n\nIf this flag is set to true, edges where the source and target\nvertex are the same can be generated.  The default is to forbid\nsuch loops.\n"},
  {(char*)"AllowSelfLoopsOff", PyvtkRandomGraphSource_AllowSelfLoopsOff, METH_VARARGS,
   (char*)"V.AllowSelfLoopsOff()\nC++: void AllowSelfLoopsOff()\n\nIf this flag is set to true, edges where the source and target\nvertex are the same can be generated.  The default is to forbid\nsuch loops.\n"},
  {(char*)"SetAllowParallelEdges", PyvtkRandomGraphSource_SetAllowParallelEdges, METH_VARARGS,
   (char*)"V.SetAllowParallelEdges(bool)\nC++: void SetAllowParallelEdges(bool a)\n\nWhen set, multiple edges from a source to a target vertex are\nallowed. The default is to forbid such loops.\n"},
  {(char*)"GetAllowParallelEdges", PyvtkRandomGraphSource_GetAllowParallelEdges, METH_VARARGS,
   (char*)"V.GetAllowParallelEdges() -> bool\nC++: bool GetAllowParallelEdges()\n\nWhen set, multiple edges from a source to a target vertex are\nallowed. The default is to forbid such loops.\n"},
  {(char*)"AllowParallelEdgesOn", PyvtkRandomGraphSource_AllowParallelEdgesOn, METH_VARARGS,
   (char*)"V.AllowParallelEdgesOn()\nC++: void AllowParallelEdgesOn()\n\nWhen set, multiple edges from a source to a target vertex are\nallowed. The default is to forbid such loops.\n"},
  {(char*)"AllowParallelEdgesOff", PyvtkRandomGraphSource_AllowParallelEdgesOff, METH_VARARGS,
   (char*)"V.AllowParallelEdgesOff()\nC++: void AllowParallelEdgesOff()\n\nWhen set, multiple edges from a source to a target vertex are\nallowed. The default is to forbid such loops.\n"},
  {(char*)"SetGeneratePedigreeIds", PyvtkRandomGraphSource_SetGeneratePedigreeIds, METH_VARARGS,
   (char*)"V.SetGeneratePedigreeIds(bool)\nC++: void SetGeneratePedigreeIds(bool a)\n\nAdd pedigree ids to vertex and edge data.\n"},
  {(char*)"GetGeneratePedigreeIds", PyvtkRandomGraphSource_GetGeneratePedigreeIds, METH_VARARGS,
   (char*)"V.GetGeneratePedigreeIds() -> bool\nC++: bool GetGeneratePedigreeIds()\n\nAdd pedigree ids to vertex and edge data.\n"},
  {(char*)"GeneratePedigreeIdsOn", PyvtkRandomGraphSource_GeneratePedigreeIdsOn, METH_VARARGS,
   (char*)"V.GeneratePedigreeIdsOn()\nC++: void GeneratePedigreeIdsOn()\n\nAdd pedigree ids to vertex and edge data.\n"},
  {(char*)"GeneratePedigreeIdsOff", PyvtkRandomGraphSource_GeneratePedigreeIdsOff, METH_VARARGS,
   (char*)"V.GeneratePedigreeIdsOff()\nC++: void GeneratePedigreeIdsOff()\n\nAdd pedigree ids to vertex and edge data.\n"},
  {(char*)"SetVertexPedigreeIdArrayName", PyvtkRandomGraphSource_SetVertexPedigreeIdArrayName, METH_VARARGS,
   (char*)"V.SetVertexPedigreeIdArrayName(string)\nC++: void SetVertexPedigreeIdArrayName(char *)\n\nThe name of the vertex pedigree id array. Default \"vertex id\".\n"},
  {(char*)"GetVertexPedigreeIdArrayName", PyvtkRandomGraphSource_GetVertexPedigreeIdArrayName, METH_VARARGS,
   (char*)"V.GetVertexPedigreeIdArrayName() -> string\nC++: char *GetVertexPedigreeIdArrayName()\n\nThe name of the vertex pedigree id array. Default \"vertex id\".\n"},
  {(char*)"SetEdgePedigreeIdArrayName", PyvtkRandomGraphSource_SetEdgePedigreeIdArrayName, METH_VARARGS,
   (char*)"V.SetEdgePedigreeIdArrayName(string)\nC++: void SetEdgePedigreeIdArrayName(char *)\n\nThe name of the edge pedigree id array. Default \"edge id\".\n"},
  {(char*)"GetEdgePedigreeIdArrayName", PyvtkRandomGraphSource_GetEdgePedigreeIdArrayName, METH_VARARGS,
   (char*)"V.GetEdgePedigreeIdArrayName() -> string\nC++: char *GetEdgePedigreeIdArrayName()\n\nThe name of the edge pedigree id array. Default \"edge id\".\n"},
  {(char*)"SetSeed", PyvtkRandomGraphSource_SetSeed, METH_VARARGS,
   (char*)"V.SetSeed(int)\nC++: void SetSeed(int a)\n\nControl the seed used for pseudo-random-number generation. This\nensures that vtkRandomGraphSource can produce repeatable results.\n"},
  {(char*)"GetSeed", PyvtkRandomGraphSource_GetSeed, METH_VARARGS,
   (char*)"V.GetSeed() -> int\nC++: int GetSeed()\n\nControl the seed used for pseudo-random-number generation. This\nensures that vtkRandomGraphSource can produce repeatable results.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRandomGraphSource_StaticNew()
{
  return vtkRandomGraphSource::New();
}

PyObject *PyVTKClass_vtkRandomGraphSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRandomGraphSource_StaticNew,
    PyvtkRandomGraphSource_Methods,
    "vtkRandomGraphSource", modulename,
    NULL, NULL,
    PyvtkRandomGraphSource_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRandomGraphSource_Doc()
{
  static const char *docstring[] = {
    "vtkRandomGraphSource - a graph with random edges\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "Generates a graph with a specified number of vertices, with the\ndensity of edges specified by either an exact number of edges or the\nprobability of an edge.  You may additionally specify whether to\nbegin with a random tree (which enforces graph connectivity).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRandomGraphSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRandomGraphSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRandomGraphSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

