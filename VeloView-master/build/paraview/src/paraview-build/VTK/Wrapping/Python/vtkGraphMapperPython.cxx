// python wrapper for vtkGraphMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGraphMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGraphMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGraphMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMapperNew
extern "C" { PyObject *PyVTKClass_vtkMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkMapperNew
#endif

static const char **PyvtkGraphMapper_Doc();


static PyObject *
PyvtkGraphMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGraphMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraphMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphMapper::NewInstance());

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
PyvtkGraphMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGraphMapper *tempr = vtkGraphMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkActor *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkGraphMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetVertexColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexColorArrayName(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetVertexColorArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetVertexColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetVertexColorArrayName() :
      op->vtkGraphMapper::GetVertexColorArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetColorVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorVertices(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetColorVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetColorVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetColorVertices() :
      op->vtkGraphMapper::GetColorVertices());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_ColorVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorVerticesOn();
      }
    else
      {
      op->vtkGraphMapper::ColorVerticesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_ColorVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorVerticesOff();
      }
    else
      {
      op->vtkGraphMapper::ColorVerticesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetScaledGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaledGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaledGlyphs(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetScaledGlyphs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetScaledGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaledGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetScaledGlyphs() :
      op->vtkGraphMapper::GetScaledGlyphs());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_ScaledGlyphsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaledGlyphsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaledGlyphsOn();
      }
    else
      {
      op->vtkGraphMapper::ScaledGlyphsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_ScaledGlyphsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaledGlyphsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaledGlyphsOff();
      }
    else
      {
      op->vtkGraphMapper::ScaledGlyphsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetScalingArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalingArrayName(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetScalingArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetScalingArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetScalingArrayName() :
      op->vtkGraphMapper::GetScalingArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeVisibility(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetEdgeVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeVisibility() :
      op->vtkGraphMapper::GetEdgeVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_EdgeVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeVisibilityOn();
      }
    else
      {
      op->vtkGraphMapper::EdgeVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_EdgeVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeVisibilityOff();
      }
    else
      {
      op->vtkGraphMapper::EdgeVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeColorArrayName(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetEdgeColorArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeColorArrayName() :
      op->vtkGraphMapper::GetEdgeColorArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetColorEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorEdges(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetColorEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetColorEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetColorEdges() :
      op->vtkGraphMapper::GetColorEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_ColorEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorEdgesOn();
      }
    else
      {
      op->vtkGraphMapper::ColorEdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_ColorEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorEdgesOff();
      }
    else
      {
      op->vtkGraphMapper::ColorEdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEnabledEdgesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledEdgesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabledEdgesArrayName(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetEnabledEdgesArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEnabledEdgesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledEdgesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetEnabledEdgesArrayName() :
      op->vtkGraphMapper::GetEnabledEdgesArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEnableEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableEdgesByArray(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetEnableEdgesByArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEnableEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableEdgesByArray() :
      op->vtkGraphMapper::GetEnableEdgesByArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_EnableEdgesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableEdgesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableEdgesByArrayOn();
      }
    else
      {
      op->vtkGraphMapper::EnableEdgesByArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_EnableEdgesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableEdgesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableEdgesByArrayOff();
      }
    else
      {
      op->vtkGraphMapper::EnableEdgesByArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEnabledVerticesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledVerticesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabledVerticesArrayName(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetEnabledVerticesArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEnabledVerticesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledVerticesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetEnabledVerticesArrayName() :
      op->vtkGraphMapper::GetEnabledVerticesArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEnableVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableVerticesByArray(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetEnableVerticesByArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEnableVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableVerticesByArray() :
      op->vtkGraphMapper::GetEnableVerticesByArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_EnableVerticesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableVerticesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableVerticesByArrayOn();
      }
    else
      {
      op->vtkGraphMapper::EnableVerticesByArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_EnableVerticesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableVerticesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableVerticesByArrayOff();
      }
    else
      {
      op->vtkGraphMapper::EnableVerticesByArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIconArrayName(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetIconArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetIconArrayName() :
      op->vtkGraphMapper::GetIconArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_AddIconType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIconType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddIconType(temp0, temp1);
      }
    else
      {
      op->vtkGraphMapper::AddIconType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_ClearIconTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearIconTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearIconTypes();
      }
    else
      {
      op->vtkGraphMapper::ClearIconTypes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetIconSize(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetIconSize(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetIconSize() :
      op->vtkGraphMapper::GetIconSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetIconAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIconAlignment(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetIconAlignment(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetIconTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTexture *tempr = (ap.IsBound() ?
      op->GetIconTexture() :
      op->vtkGraphMapper::GetIconTexture());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetIconTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  vtkTexture *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
    {
    if (ap.IsBound())
      {
      op->SetIconTexture(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetIconTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIconVisibility(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetIconVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIconVisibility() :
      op->vtkGraphMapper::GetIconVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_IconVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IconVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IconVisibilityOn();
      }
    else
      {
      op->vtkGraphMapper::IconVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_IconVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IconVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IconVisibilityOff();
      }
    else
      {
      op->vtkGraphMapper::IconVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetVertexPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetVertexPointSize() :
      op->vtkGraphMapper::GetVertexPointSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetVertexPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexPointSize(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetVertexPointSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEdgeLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetEdgeLineWidth() :
      op->vtkGraphMapper::GetEdgeLineWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEdgeLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeLineWidth(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetEdgeLineWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkGraphMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGraphMapper::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  vtkGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkGraphMapper::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkGraphMapper::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkGraphMapper::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkGraphMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkGraphMapper::GetBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkGraphMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkGraphMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkGraphMapper_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkGraphMapper_GetEdgeLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetEdgeLookupTable() :
      op->vtkGraphMapper::GetEdgeLookupTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetVertexLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetVertexLookupTable() :
      op->vtkGraphMapper::GetVertexLookupTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGraphMapper\nC++: vtkGraphMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphMapper\nC++: vtkGraphMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkGraphMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkActor)\nC++: void Render(vtkRenderer *ren, vtkActor *act)\n\n"},
  {(char*)"SetVertexColorArrayName", PyvtkGraphMapper_SetVertexColorArrayName, METH_VARARGS,
   (char*)"V.SetVertexColorArrayName(string)\nC++: void SetVertexColorArrayName(const char *name)\n\nThe array to use for coloring vertices.  Default is \"color\".\n"},
  {(char*)"GetVertexColorArrayName", PyvtkGraphMapper_GetVertexColorArrayName, METH_VARARGS,
   (char*)"V.GetVertexColorArrayName() -> string\nC++: const char *GetVertexColorArrayName()\n\nThe array to use for coloring vertices.  Default is \"color\".\n"},
  {(char*)"SetColorVertices", PyvtkGraphMapper_SetColorVertices, METH_VARARGS,
   (char*)"V.SetColorVertices(bool)\nC++: void SetColorVertices(bool vis)\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"GetColorVertices", PyvtkGraphMapper_GetColorVertices, METH_VARARGS,
   (char*)"V.GetColorVertices() -> bool\nC++: bool GetColorVertices()\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"ColorVerticesOn", PyvtkGraphMapper_ColorVerticesOn, METH_VARARGS,
   (char*)"V.ColorVerticesOn()\nC++: void ColorVerticesOn()\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"ColorVerticesOff", PyvtkGraphMapper_ColorVerticesOff, METH_VARARGS,
   (char*)"V.ColorVerticesOff()\nC++: void ColorVerticesOff()\n\nWhether to color vertices.  Default is off.\n"},
  {(char*)"SetScaledGlyphs", PyvtkGraphMapper_SetScaledGlyphs, METH_VARARGS,
   (char*)"V.SetScaledGlyphs(bool)\nC++: void SetScaledGlyphs(bool arg)\n\nWhether scaled glyphs are on or not.  Default is off. By default\nthis mapper uses vertex glyphs that do not scale. If you turn\nthis option on you will get circles at each vertex and they will\nscale as you zoom in/out.\n"},
  {(char*)"GetScaledGlyphs", PyvtkGraphMapper_GetScaledGlyphs, METH_VARARGS,
   (char*)"V.GetScaledGlyphs() -> bool\nC++: bool GetScaledGlyphs()\n\nWhether scaled glyphs are on or not.  Default is off. By default\nthis mapper uses vertex glyphs that do not scale. If you turn\nthis option on you will get circles at each vertex and they will\nscale as you zoom in/out.\n"},
  {(char*)"ScaledGlyphsOn", PyvtkGraphMapper_ScaledGlyphsOn, METH_VARARGS,
   (char*)"V.ScaledGlyphsOn()\nC++: void ScaledGlyphsOn()\n\nWhether scaled glyphs are on or not.  Default is off. By default\nthis mapper uses vertex glyphs that do not scale. If you turn\nthis option on you will get circles at each vertex and they will\nscale as you zoom in/out.\n"},
  {(char*)"ScaledGlyphsOff", PyvtkGraphMapper_ScaledGlyphsOff, METH_VARARGS,
   (char*)"V.ScaledGlyphsOff()\nC++: void ScaledGlyphsOff()\n\nWhether scaled glyphs are on or not.  Default is off. By default\nthis mapper uses vertex glyphs that do not scale. If you turn\nthis option on you will get circles at each vertex and they will\nscale as you zoom in/out.\n"},
  {(char*)"SetScalingArrayName", PyvtkGraphMapper_SetScalingArrayName, METH_VARARGS,
   (char*)"V.SetScalingArrayName(string)\nC++: void SetScalingArrayName(char *)\n\nGlyph scaling array name. Default is \"scale\"\n"},
  {(char*)"GetScalingArrayName", PyvtkGraphMapper_GetScalingArrayName, METH_VARARGS,
   (char*)"V.GetScalingArrayName() -> string\nC++: char *GetScalingArrayName()\n\nGlyph scaling array name. Default is \"scale\"\n"},
  {(char*)"SetEdgeVisibility", PyvtkGraphMapper_SetEdgeVisibility, METH_VARARGS,
   (char*)"V.SetEdgeVisibility(bool)\nC++: void SetEdgeVisibility(bool vis)\n\nWhether to show edges or not.  Default is on.\n"},
  {(char*)"GetEdgeVisibility", PyvtkGraphMapper_GetEdgeVisibility, METH_VARARGS,
   (char*)"V.GetEdgeVisibility() -> bool\nC++: bool GetEdgeVisibility()\n\nWhether to show edges or not.  Default is on.\n"},
  {(char*)"EdgeVisibilityOn", PyvtkGraphMapper_EdgeVisibilityOn, METH_VARARGS,
   (char*)"V.EdgeVisibilityOn()\nC++: void EdgeVisibilityOn()\n\nWhether to show edges or not.  Default is on.\n"},
  {(char*)"EdgeVisibilityOff", PyvtkGraphMapper_EdgeVisibilityOff, METH_VARARGS,
   (char*)"V.EdgeVisibilityOff()\nC++: void EdgeVisibilityOff()\n\nWhether to show edges or not.  Default is on.\n"},
  {(char*)"SetEdgeColorArrayName", PyvtkGraphMapper_SetEdgeColorArrayName, METH_VARARGS,
   (char*)"V.SetEdgeColorArrayName(string)\nC++: void SetEdgeColorArrayName(const char *name)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {(char*)"GetEdgeColorArrayName", PyvtkGraphMapper_GetEdgeColorArrayName, METH_VARARGS,
   (char*)"V.GetEdgeColorArrayName() -> string\nC++: const char *GetEdgeColorArrayName()\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {(char*)"SetColorEdges", PyvtkGraphMapper_SetColorEdges, METH_VARARGS,
   (char*)"V.SetColorEdges(bool)\nC++: void SetColorEdges(bool vis)\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"GetColorEdges", PyvtkGraphMapper_GetColorEdges, METH_VARARGS,
   (char*)"V.GetColorEdges() -> bool\nC++: bool GetColorEdges()\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"ColorEdgesOn", PyvtkGraphMapper_ColorEdgesOn, METH_VARARGS,
   (char*)"V.ColorEdgesOn()\nC++: void ColorEdgesOn()\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"ColorEdgesOff", PyvtkGraphMapper_ColorEdgesOff, METH_VARARGS,
   (char*)"V.ColorEdgesOff()\nC++: void ColorEdgesOff()\n\nWhether to color edges.  Default is off.\n"},
  {(char*)"SetEnabledEdgesArrayName", PyvtkGraphMapper_SetEnabledEdgesArrayName, METH_VARARGS,
   (char*)"V.SetEnabledEdgesArrayName(string)\nC++: void SetEnabledEdgesArrayName(char *)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {(char*)"GetEnabledEdgesArrayName", PyvtkGraphMapper_GetEnabledEdgesArrayName, METH_VARARGS,
   (char*)"V.GetEnabledEdgesArrayName() -> string\nC++: char *GetEnabledEdgesArrayName()\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {(char*)"SetEnableEdgesByArray", PyvtkGraphMapper_SetEnableEdgesByArray, METH_VARARGS,
   (char*)"V.SetEnableEdgesByArray(int)\nC++: void SetEnableEdgesByArray(int a)\n\nWhether to enable/disable edges using array values.  Default is\noff.\n"},
  {(char*)"GetEnableEdgesByArray", PyvtkGraphMapper_GetEnableEdgesByArray, METH_VARARGS,
   (char*)"V.GetEnableEdgesByArray() -> int\nC++: int GetEnableEdgesByArray()\n\nWhether to enable/disable edges using array values.  Default is\noff.\n"},
  {(char*)"EnableEdgesByArrayOn", PyvtkGraphMapper_EnableEdgesByArrayOn, METH_VARARGS,
   (char*)"V.EnableEdgesByArrayOn()\nC++: void EnableEdgesByArrayOn()\n\nWhether to enable/disable edges using array values.  Default is\noff.\n"},
  {(char*)"EnableEdgesByArrayOff", PyvtkGraphMapper_EnableEdgesByArrayOff, METH_VARARGS,
   (char*)"V.EnableEdgesByArrayOff()\nC++: void EnableEdgesByArrayOff()\n\nWhether to enable/disable edges using array values.  Default is\noff.\n"},
  {(char*)"SetEnabledVerticesArrayName", PyvtkGraphMapper_SetEnabledVerticesArrayName, METH_VARARGS,
   (char*)"V.SetEnabledVerticesArrayName(string)\nC++: void SetEnabledVerticesArrayName(char *)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {(char*)"GetEnabledVerticesArrayName", PyvtkGraphMapper_GetEnabledVerticesArrayName, METH_VARARGS,
   (char*)"V.GetEnabledVerticesArrayName() -> string\nC++: char *GetEnabledVerticesArrayName()\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {(char*)"SetEnableVerticesByArray", PyvtkGraphMapper_SetEnableVerticesByArray, METH_VARARGS,
   (char*)"V.SetEnableVerticesByArray(int)\nC++: void SetEnableVerticesByArray(int a)\n\nWhether to enable/disable vertices using array values.  Default\nis off.\n"},
  {(char*)"GetEnableVerticesByArray", PyvtkGraphMapper_GetEnableVerticesByArray, METH_VARARGS,
   (char*)"V.GetEnableVerticesByArray() -> int\nC++: int GetEnableVerticesByArray()\n\nWhether to enable/disable vertices using array values.  Default\nis off.\n"},
  {(char*)"EnableVerticesByArrayOn", PyvtkGraphMapper_EnableVerticesByArrayOn, METH_VARARGS,
   (char*)"V.EnableVerticesByArrayOn()\nC++: void EnableVerticesByArrayOn()\n\nWhether to enable/disable vertices using array values.  Default\nis off.\n"},
  {(char*)"EnableVerticesByArrayOff", PyvtkGraphMapper_EnableVerticesByArrayOff, METH_VARARGS,
   (char*)"V.EnableVerticesByArrayOff()\nC++: void EnableVerticesByArrayOff()\n\nWhether to enable/disable vertices using array values.  Default\nis off.\n"},
  {(char*)"SetIconArrayName", PyvtkGraphMapper_SetIconArrayName, METH_VARARGS,
   (char*)"V.SetIconArrayName(string)\nC++: void SetIconArrayName(const char *name)\n\nThe array to use for assigning icons.\n"},
  {(char*)"GetIconArrayName", PyvtkGraphMapper_GetIconArrayName, METH_VARARGS,
   (char*)"V.GetIconArrayName() -> string\nC++: const char *GetIconArrayName()\n\nThe array to use for assigning icons.\n"},
  {(char*)"AddIconType", PyvtkGraphMapper_AddIconType, METH_VARARGS,
   (char*)"V.AddIconType(string, int)\nC++: void AddIconType(char *type, int index)\n\nAssociate the icon at index \"index\" in the vtkTexture to all\nvertices containing \"type\" as a value in the vertex attribute\narray specified by IconArrayName.\n"},
  {(char*)"ClearIconTypes", PyvtkGraphMapper_ClearIconTypes, METH_VARARGS,
   (char*)"V.ClearIconTypes()\nC++: void ClearIconTypes()\n\nClear all icon mappings.\n"},
  {(char*)"SetIconSize", PyvtkGraphMapper_SetIconSize, METH_VARARGS,
   (char*)"V.SetIconSize([int, ...])\nC++: void SetIconSize(int *size)\n\nSpecify the Width and Height, in pixels, of an icon in the icon\nsheet.\n"},
  {(char*)"GetIconSize", PyvtkGraphMapper_GetIconSize, METH_VARARGS,
   (char*)"V.GetIconSize() -> (int, ...)\nC++: int *GetIconSize()\n\nSpecify the Width and Height, in pixels, of an icon in the icon\nsheet.\n"},
  {(char*)"SetIconAlignment", PyvtkGraphMapper_SetIconAlignment, METH_VARARGS,
   (char*)"V.SetIconAlignment(int)\nC++: void SetIconAlignment(int alignment)\n\nSpecify where the icons should be placed in relation to the\nvertex. See vtkIconGlyphFilter.h for possible values.\n"},
  {(char*)"GetIconTexture", PyvtkGraphMapper_GetIconTexture, METH_VARARGS,
   (char*)"V.GetIconTexture() -> vtkTexture\nC++: vtkTexture *GetIconTexture()\n\nThe texture containing the icon sheet.\n"},
  {(char*)"SetIconTexture", PyvtkGraphMapper_SetIconTexture, METH_VARARGS,
   (char*)"V.SetIconTexture(vtkTexture)\nC++: void SetIconTexture(vtkTexture *texture)\n\nThe texture containing the icon sheet.\n"},
  {(char*)"SetIconVisibility", PyvtkGraphMapper_SetIconVisibility, METH_VARARGS,
   (char*)"V.SetIconVisibility(bool)\nC++: void SetIconVisibility(bool vis)\n\nWhether to show icons.  Default is off.\n"},
  {(char*)"GetIconVisibility", PyvtkGraphMapper_GetIconVisibility, METH_VARARGS,
   (char*)"V.GetIconVisibility() -> bool\nC++: bool GetIconVisibility()\n\nWhether to show icons.  Default is off.\n"},
  {(char*)"IconVisibilityOn", PyvtkGraphMapper_IconVisibilityOn, METH_VARARGS,
   (char*)"V.IconVisibilityOn()\nC++: void IconVisibilityOn()\n\nWhether to show icons.  Default is off.\n"},
  {(char*)"IconVisibilityOff", PyvtkGraphMapper_IconVisibilityOff, METH_VARARGS,
   (char*)"V.IconVisibilityOff()\nC++: void IconVisibilityOff()\n\nWhether to show icons.  Default is off.\n"},
  {(char*)"GetVertexPointSize", PyvtkGraphMapper_GetVertexPointSize, METH_VARARGS,
   (char*)"V.GetVertexPointSize() -> float\nC++: float GetVertexPointSize()\n\nGet/Set the vertex point size\n"},
  {(char*)"SetVertexPointSize", PyvtkGraphMapper_SetVertexPointSize, METH_VARARGS,
   (char*)"V.SetVertexPointSize(float)\nC++: void SetVertexPointSize(float size)\n\nGet/Set the vertex point size\n"},
  {(char*)"GetEdgeLineWidth", PyvtkGraphMapper_GetEdgeLineWidth, METH_VARARGS,
   (char*)"V.GetEdgeLineWidth() -> float\nC++: float GetEdgeLineWidth()\n\nGet/Set the edge line width\n"},
  {(char*)"SetEdgeLineWidth", PyvtkGraphMapper_SetEdgeLineWidth, METH_VARARGS,
   (char*)"V.SetEdgeLineWidth(float)\nC++: void SetEdgeLineWidth(float width)\n\nGet/Set the edge line width\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkGraphMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetMTime", PyvtkGraphMapper_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the mtime also considering the lookup table.\n"},
  {(char*)"SetInputData", PyvtkGraphMapper_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkGraph)\nC++: void SetInputData(vtkGraph *input)\n\nSet the Input of this mapper.\n"},
  {(char*)"GetInput", PyvtkGraphMapper_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkGraph\nC++: vtkGraph *GetInput()\n\nSet the Input of this mapper.\n"},
  {(char*)"GetBounds", PyvtkGraphMapper_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\nV.GetBounds([float, ...])\nC++: virtual void GetBounds(double *bounds)\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {(char*)"GetEdgeLookupTable", PyvtkGraphMapper_GetEdgeLookupTable, METH_VARARGS,
   (char*)"V.GetEdgeLookupTable() -> vtkLookupTable\nC++: vtkLookupTable *GetEdgeLookupTable()\n\nAccess to the lookup tables used by the vertex and edge mappers.\n"},
  {(char*)"GetVertexLookupTable", PyvtkGraphMapper_GetVertexLookupTable, METH_VARARGS,
   (char*)"V.GetVertexLookupTable() -> vtkLookupTable\nC++: vtkLookupTable *GetVertexLookupTable()\n\nAccess to the lookup tables used by the vertex and edge mappers.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphMapper_StaticNew()
{
  return vtkGraphMapper::New();
}

PyObject *PyVTKClass_vtkGraphMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphMapper_StaticNew,
    PyvtkGraphMapper_Methods,
    "vtkGraphMapper", modulename,
    NULL, NULL,
    PyvtkGraphMapper_Doc(),
    PyVTKClass_vtkMapperNew(modulename));
  return cls;
}

const char **PyvtkGraphMapper_Doc()
{
  static const char *docstring[] = {
    "vtkGraphMapper - map vtkGraph and derived\n\n",
    "Superclass: vtkMapper\n\n",
    "vtkGraphMapper is a mapper to map vtkGraph (and all derived classes)\nto graphics primitives.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

