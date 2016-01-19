// python wrapper for vtkMoleculeMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMoleculeMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMoleculeMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMoleculeMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMapperNew
extern "C" { PyObject *PyVTKClass_vtkMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkMapperNew
#endif

static const char **PyvtkMoleculeMapper_Doc();


static PyObject *
PyvtkMoleculeMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMoleculeMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMoleculeMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMoleculeMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMoleculeMapper::NewInstance());

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
PyvtkMoleculeMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMoleculeMapper *tempr = vtkMoleculeMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  vtkMolecule *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMolecule"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkMoleculeMapper::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMolecule *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkMoleculeMapper::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseBallAndStickSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBallAndStickSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseBallAndStickSettings();
      }
    else
      {
      op->vtkMoleculeMapper::UseBallAndStickSettings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseVDWSpheresSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseVDWSpheresSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseVDWSpheresSettings();
      }
    else
      {
      op->vtkMoleculeMapper::UseVDWSpheresSettings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseLiquoriceStickSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLiquoriceStickSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseLiquoriceStickSettings();
      }
    else
      {
      op->vtkMoleculeMapper::UseLiquoriceStickSettings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseFastSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFastSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseFastSettings();
      }
    else
      {
      op->vtkMoleculeMapper::UseFastSettings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetRenderAtoms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderAtoms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRenderAtoms() :
      op->vtkMoleculeMapper::GetRenderAtoms());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetRenderAtoms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderAtoms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderAtoms(temp0);
      }
    else
      {
      op->vtkMoleculeMapper::SetRenderAtoms(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_RenderAtomsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderAtomsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderAtomsOn();
      }
    else
      {
      op->vtkMoleculeMapper::RenderAtomsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_RenderAtomsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderAtomsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderAtomsOff();
      }
    else
      {
      op->vtkMoleculeMapper::RenderAtomsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetRenderBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRenderBonds() :
      op->vtkMoleculeMapper::GetRenderBonds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetRenderBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderBonds(temp0);
      }
    else
      {
      op->vtkMoleculeMapper::SetRenderBonds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_RenderBondsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderBondsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderBondsOn();
      }
    else
      {
      op->vtkMoleculeMapper::RenderBondsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_RenderBondsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderBondsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderBondsOff();
      }
    else
      {
      op->vtkMoleculeMapper::RenderBondsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetAtomicRadiusType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicRadiusType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAtomicRadiusType() :
      op->vtkMoleculeMapper::GetAtomicRadiusType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAtomicRadiusType(temp0);
      }
    else
      {
      op->vtkMoleculeMapper::SetAtomicRadiusType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetAtomicRadiusTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicRadiusTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAtomicRadiusTypeAsString() :
      op->vtkMoleculeMapper::GetAtomicRadiusTypeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusTypeToCovalentRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusTypeToCovalentRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAtomicRadiusTypeToCovalentRadius();
      }
    else
      {
      op->vtkMoleculeMapper::SetAtomicRadiusTypeToCovalentRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusTypeToVDWRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusTypeToVDWRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAtomicRadiusTypeToVDWRadius();
      }
    else
      {
      op->vtkMoleculeMapper::SetAtomicRadiusTypeToVDWRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusTypeToUnitRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusTypeToUnitRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAtomicRadiusTypeToUnitRadius();
      }
    else
      {
      op->vtkMoleculeMapper::SetAtomicRadiusTypeToUnitRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetAtomicRadiusScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicRadiusScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetAtomicRadiusScaleFactor() :
      op->vtkMoleculeMapper::GetAtomicRadiusScaleFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAtomicRadiusScaleFactor(temp0);
      }
    else
      {
      op->vtkMoleculeMapper::SetAtomicRadiusScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetUseMultiCylindersForBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMultiCylindersForBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseMultiCylindersForBonds() :
      op->vtkMoleculeMapper::GetUseMultiCylindersForBonds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetUseMultiCylindersForBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMultiCylindersForBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseMultiCylindersForBonds(temp0);
      }
    else
      {
      op->vtkMoleculeMapper::SetUseMultiCylindersForBonds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseMultiCylindersForBondsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMultiCylindersForBondsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseMultiCylindersForBondsOn();
      }
    else
      {
      op->vtkMoleculeMapper::UseMultiCylindersForBondsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseMultiCylindersForBondsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMultiCylindersForBondsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseMultiCylindersForBondsOff();
      }
    else
      {
      op->vtkMoleculeMapper::UseMultiCylindersForBondsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetBondColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBondColorMode() :
      op->vtkMoleculeMapper::GetBondColorMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetBondColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBondColorMode(temp0);
      }
    else
      {
      op->vtkMoleculeMapper::SetBondColorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetBondColorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondColorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetBondColorModeAsString() :
      op->vtkMoleculeMapper::GetBondColorModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetBondColorModeToSingleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondColorModeToSingleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBondColorModeToSingleColor();
      }
    else
      {
      op->vtkMoleculeMapper::SetBondColorModeToSingleColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetBondColorModeToDiscreteByAtom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondColorModeToDiscreteByAtom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBondColorModeToDiscreteByAtom();
      }
    else
      {
      op->vtkMoleculeMapper::SetBondColorModeToDiscreteByAtom();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetBondColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBondColor() :
      op->vtkMoleculeMapper::GetBondColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetBondColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetBondColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMoleculeMapper::SetBondColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMoleculeMapper_SetBondColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  unsigned char temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBondColor(temp0);
      }
    else
      {
      op->vtkMoleculeMapper::SetBondColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMoleculeMapper_SetBondColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkMoleculeMapper_SetBondColor_s1(self, args);
    case 1:
      return PyvtkMoleculeMapper_SetBondColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBondColor");
  return NULL;
}



static PyObject *
PyvtkMoleculeMapper_GetBondRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetBondRadius() :
      op->vtkMoleculeMapper::GetBondRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetBondRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBondRadius(temp0);
      }
    else
      {
      op->vtkMoleculeMapper::SetBondRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetSelectedAtomsAndBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedAtomsAndBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  vtkSelection *temp0 = NULL;
  vtkIdTypeArray *temp1 = NULL;
  vtkIdTypeArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->GetSelectedAtomsAndBonds(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMoleculeMapper::GetSelectedAtomsAndBonds(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetSelectedAtoms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedAtoms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  vtkSelection *temp0 = NULL;
  vtkIdTypeArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->GetSelectedAtoms(temp0, temp1);
      }
    else
      {
      op->vtkMoleculeMapper::GetSelectedAtoms(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetSelectedBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  vtkSelection *temp0 = NULL;
  vtkIdTypeArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->GetSelectedBonds(temp0, temp1);
      }
    else
      {
      op->vtkMoleculeMapper::GetSelectedBonds(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

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
      op->vtkMoleculeMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

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
      op->vtkMoleculeMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkMoleculeMapper::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMoleculeMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

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
      op->vtkMoleculeMapper::GetBounds(temp0);
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

  return result;
}

static PyObject *
PyvtkMoleculeMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMoleculeMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkMoleculeMapper_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkMoleculeMapper_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkMoleculeMapper::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsSelection() :
      op->vtkMoleculeMapper::GetSupportsSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMoleculeMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkMoleculeMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMoleculeMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMoleculeMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMoleculeMapper\nC++: vtkMoleculeMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMoleculeMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMoleculeMapper\nC++: vtkMoleculeMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInputData", PyvtkMoleculeMapper_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkMolecule)\nC++: void SetInputData(vtkMolecule *in)\n\nGet/Set the input vtkMolecule.\n"},
  {(char*)"GetInput", PyvtkMoleculeMapper_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkMolecule\nC++: vtkMolecule *GetInput()\n\nGet/Set the input vtkMolecule.\n"},
  {(char*)"UseBallAndStickSettings", PyvtkMoleculeMapper_UseBallAndStickSettings, METH_VARARGS,
   (char*)"V.UseBallAndStickSettings()\nC++: void UseBallAndStickSettings()\n\nSet ivars to default ball-and-stick settings. This is equivalent\nto the following:\n- SetRenderAtoms( true )\n- SetRenderBonds( true )\n- SetAtomicRadiusType( VDWRadius )\n- SetAtomicRadiusScaleFactor( 0.3 )\n- SetBondColorMode( DiscreteByAtom )\n- SetUseMultiCylindersForBonds( true )\n- SetBondRadius( 0.075 )\n"},
  {(char*)"UseVDWSpheresSettings", PyvtkMoleculeMapper_UseVDWSpheresSettings, METH_VARARGS,
   (char*)"V.UseVDWSpheresSettings()\nC++: void UseVDWSpheresSettings()\n\nSet ivars to default van der Waals spheres settings. This is\nequivalent to the following:\n- SetRenderAtoms( true )\n- SetRenderBonds( true )\n- SetAtomicRadiusType( VDWRadius )\n- SetAtomicRadiusScaleFactor( 1.0 )\n- SetBondColorMode( DiscreteByAtom )\n- SetUseMultiCylindersForBonds( true )\n- SetBondRadius( 0.075 )\n"},
  {(char*)"UseLiquoriceStickSettings", PyvtkMoleculeMapper_UseLiquoriceStickSettings, METH_VARARGS,
   (char*)"V.UseLiquoriceStickSettings()\nC++: void UseLiquoriceStickSettings()\n\nSet ivars to default liquorice stick settings. This is equivalent\nto the following:\n- SetRenderAtoms( true )\n- SetRenderBonds( true )\n- SetAtomicRadiusType( UnitRadius )\n- SetAtomicRadiusScaleFactor( 0.1 )\n- SetBondColorMode( DiscreteByAtom )\n- SetUseMultiCylindersForBonds( false )\n- SetBondRadius( 0.1 )\n"},
  {(char*)"UseFastSettings", PyvtkMoleculeMapper_UseFastSettings, METH_VARARGS,
   (char*)"V.UseFastSettings()\nC++: void UseFastSettings()\n\nSet ivars to use fast settings that may be useful for rendering\nextremely large molecules where the overall shape is more\nimportant than the details of the atoms/bond. This is equivalent\nto the following:\n- SetRenderAtoms( true )\n- SetRenderBonds( true )\n- SetAtomicRadiusType( UnitRadius )\n- SetAtomicRadiusScaleFactor( 0.60 )\n- SetBondColorMode( SingleColor )\n- SetBondColor( 50, 50, 50 )\n- SetUseMultiCylindersForBonds( false )\n- SetBondRadius( 0.075 )\n"},
  {(char*)"GetRenderAtoms", PyvtkMoleculeMapper_GetRenderAtoms, METH_VARARGS,
   (char*)"V.GetRenderAtoms() -> bool\nC++: bool GetRenderAtoms()\n\nGet/Set whether or not to render atoms. Default: On.\n"},
  {(char*)"SetRenderAtoms", PyvtkMoleculeMapper_SetRenderAtoms, METH_VARARGS,
   (char*)"V.SetRenderAtoms(bool)\nC++: void SetRenderAtoms(bool a)\n\nGet/Set whether or not to render atoms. Default: On.\n"},
  {(char*)"RenderAtomsOn", PyvtkMoleculeMapper_RenderAtomsOn, METH_VARARGS,
   (char*)"V.RenderAtomsOn()\nC++: void RenderAtomsOn()\n\nGet/Set whether or not to render atoms. Default: On.\n"},
  {(char*)"RenderAtomsOff", PyvtkMoleculeMapper_RenderAtomsOff, METH_VARARGS,
   (char*)"V.RenderAtomsOff()\nC++: void RenderAtomsOff()\n\nGet/Set whether or not to render atoms. Default: On.\n"},
  {(char*)"GetRenderBonds", PyvtkMoleculeMapper_GetRenderBonds, METH_VARARGS,
   (char*)"V.GetRenderBonds() -> bool\nC++: bool GetRenderBonds()\n\nGet/Set whether or not to render bonds. Default: On.\n"},
  {(char*)"SetRenderBonds", PyvtkMoleculeMapper_SetRenderBonds, METH_VARARGS,
   (char*)"V.SetRenderBonds(bool)\nC++: void SetRenderBonds(bool a)\n\nGet/Set whether or not to render bonds. Default: On.\n"},
  {(char*)"RenderBondsOn", PyvtkMoleculeMapper_RenderBondsOn, METH_VARARGS,
   (char*)"V.RenderBondsOn()\nC++: void RenderBondsOn()\n\nGet/Set whether or not to render bonds. Default: On.\n"},
  {(char*)"RenderBondsOff", PyvtkMoleculeMapper_RenderBondsOff, METH_VARARGS,
   (char*)"V.RenderBondsOff()\nC++: void RenderBondsOff()\n\nGet/Set whether or not to render bonds. Default: On.\n"},
  {(char*)"GetAtomicRadiusType", PyvtkMoleculeMapper_GetAtomicRadiusType, METH_VARARGS,
   (char*)"V.GetAtomicRadiusType() -> int\nC++: int GetAtomicRadiusType()\n\nGet/Set the type of radius used to generate the atoms. Default:\nVDWRadius.\n"},
  {(char*)"SetAtomicRadiusType", PyvtkMoleculeMapper_SetAtomicRadiusType, METH_VARARGS,
   (char*)"V.SetAtomicRadiusType(int)\nC++: void SetAtomicRadiusType(int a)\n\nGet/Set the type of radius used to generate the atoms. Default:\nVDWRadius.\n"},
  {(char*)"GetAtomicRadiusTypeAsString", PyvtkMoleculeMapper_GetAtomicRadiusTypeAsString, METH_VARARGS,
   (char*)"V.GetAtomicRadiusTypeAsString() -> string\nC++: const char *GetAtomicRadiusTypeAsString()\n\nGet/Set the type of radius used to generate the atoms. Default:\nVDWRadius.\n"},
  {(char*)"SetAtomicRadiusTypeToCovalentRadius", PyvtkMoleculeMapper_SetAtomicRadiusTypeToCovalentRadius, METH_VARARGS,
   (char*)"V.SetAtomicRadiusTypeToCovalentRadius()\nC++: void SetAtomicRadiusTypeToCovalentRadius()\n\nGet/Set the type of radius used to generate the atoms. Default:\nVDWRadius.\n"},
  {(char*)"SetAtomicRadiusTypeToVDWRadius", PyvtkMoleculeMapper_SetAtomicRadiusTypeToVDWRadius, METH_VARARGS,
   (char*)"V.SetAtomicRadiusTypeToVDWRadius()\nC++: void SetAtomicRadiusTypeToVDWRadius()\n\nGet/Set the type of radius used to generate the atoms. Default:\nVDWRadius.\n"},
  {(char*)"SetAtomicRadiusTypeToUnitRadius", PyvtkMoleculeMapper_SetAtomicRadiusTypeToUnitRadius, METH_VARARGS,
   (char*)"V.SetAtomicRadiusTypeToUnitRadius()\nC++: void SetAtomicRadiusTypeToUnitRadius()\n\nGet/Set the type of radius used to generate the atoms. Default:\nVDWRadius.\n"},
  {(char*)"GetAtomicRadiusScaleFactor", PyvtkMoleculeMapper_GetAtomicRadiusScaleFactor, METH_VARARGS,
   (char*)"V.GetAtomicRadiusScaleFactor() -> float\nC++: float GetAtomicRadiusScaleFactor()\n\nGet/Set the uniform scaling factor applied to the atoms. Default:\n0.3.\n"},
  {(char*)"SetAtomicRadiusScaleFactor", PyvtkMoleculeMapper_SetAtomicRadiusScaleFactor, METH_VARARGS,
   (char*)"V.SetAtomicRadiusScaleFactor(float)\nC++: void SetAtomicRadiusScaleFactor(float a)\n\nGet/Set the uniform scaling factor applied to the atoms. Default:\n0.3.\n"},
  {(char*)"GetUseMultiCylindersForBonds", PyvtkMoleculeMapper_GetUseMultiCylindersForBonds, METH_VARARGS,
   (char*)"V.GetUseMultiCylindersForBonds() -> bool\nC++: bool GetUseMultiCylindersForBonds()\n\nGet/Set whether multicylinders will be used to represent multiple\nbonds. Default: On.\n"},
  {(char*)"SetUseMultiCylindersForBonds", PyvtkMoleculeMapper_SetUseMultiCylindersForBonds, METH_VARARGS,
   (char*)"V.SetUseMultiCylindersForBonds(bool)\nC++: void SetUseMultiCylindersForBonds(bool a)\n\nGet/Set whether multicylinders will be used to represent multiple\nbonds. Default: On.\n"},
  {(char*)"UseMultiCylindersForBondsOn", PyvtkMoleculeMapper_UseMultiCylindersForBondsOn, METH_VARARGS,
   (char*)"V.UseMultiCylindersForBondsOn()\nC++: void UseMultiCylindersForBondsOn()\n\nGet/Set whether multicylinders will be used to represent multiple\nbonds. Default: On.\n"},
  {(char*)"UseMultiCylindersForBondsOff", PyvtkMoleculeMapper_UseMultiCylindersForBondsOff, METH_VARARGS,
   (char*)"V.UseMultiCylindersForBondsOff()\nC++: void UseMultiCylindersForBondsOff()\n\nGet/Set whether multicylinders will be used to represent multiple\nbonds. Default: On.\n"},
  {(char*)"GetBondColorMode", PyvtkMoleculeMapper_GetBondColorMode, METH_VARARGS,
   (char*)"V.GetBondColorMode() -> int\nC++: int GetBondColorMode()\n\nGet/Set the method by which bonds are colored.\n\nIf 'SingleColor' is used, all bonds will be the same color. Use\nSetBondColor to set the rgb values used.\n\nIf 'DiscreteByAtom' is selected, each bond is colored using the\nsame lookup table as the atoms at each end, with a sharp color\nboundary at the bond center.\n"},
  {(char*)"SetBondColorMode", PyvtkMoleculeMapper_SetBondColorMode, METH_VARARGS,
   (char*)"V.SetBondColorMode(int)\nC++: void SetBondColorMode(int a)\n\nGet/Set the method by which bonds are colored.\n\nIf 'SingleColor' is used, all bonds will be the same color. Use\nSetBondColor to set the rgb values used.\n\nIf 'DiscreteByAtom' is selected, each bond is colored using the\nsame lookup table as the atoms at each end, with a sharp color\nboundary at the bond center.\n"},
  {(char*)"GetBondColorModeAsString", PyvtkMoleculeMapper_GetBondColorModeAsString, METH_VARARGS,
   (char*)"V.GetBondColorModeAsString() -> string\nC++: const char *GetBondColorModeAsString()\n\nGet/Set the method by which bonds are colored.\n\nIf 'SingleColor' is used, all bonds will be the same color. Use\nSetBondColor to set the rgb values used.\n\nIf 'DiscreteByAtom' is selected, each bond is colored using the\nsame lookup table as the atoms at each end, with a sharp color\nboundary at the bond center.\n"},
  {(char*)"SetBondColorModeToSingleColor", PyvtkMoleculeMapper_SetBondColorModeToSingleColor, METH_VARARGS,
   (char*)"V.SetBondColorModeToSingleColor()\nC++: void SetBondColorModeToSingleColor()\n\nGet/Set the method by which bonds are colored.\n\nIf 'SingleColor' is used, all bonds will be the same color. Use\nSetBondColor to set the rgb values used.\n\nIf 'DiscreteByAtom' is selected, each bond is colored using the\nsame lookup table as the atoms at each end, with a sharp color\nboundary at the bond center.\n"},
  {(char*)"SetBondColorModeToDiscreteByAtom", PyvtkMoleculeMapper_SetBondColorModeToDiscreteByAtom, METH_VARARGS,
   (char*)"V.SetBondColorModeToDiscreteByAtom()\nC++: void SetBondColorModeToDiscreteByAtom()\n\nGet/Set the method by which bonds are colored.\n\nIf 'SingleColor' is used, all bonds will be the same color. Use\nSetBondColor to set the rgb values used.\n\nIf 'DiscreteByAtom' is selected, each bond is colored using the\nsame lookup table as the atoms at each end, with a sharp color\nboundary at the bond center.\n"},
  {(char*)"GetBondColor", PyvtkMoleculeMapper_GetBondColor, METH_VARARGS,
   (char*)"V.GetBondColor() -> (int, int, int)\nC++: unsigned char *GetBondColor()\n\n"},
  {(char*)"SetBondColor", PyvtkMoleculeMapper_SetBondColor, METH_VARARGS,
   (char*)"V.SetBondColor(int, int, int)\nC++: void SetBondColor(unsigned char, unsigned char,\n    unsigned char)\nV.SetBondColor((int, int, int))\nC++: void SetBondColor(unsigned char a[3])\n\n"},
  {(char*)"GetBondRadius", PyvtkMoleculeMapper_GetBondRadius, METH_VARARGS,
   (char*)"V.GetBondRadius() -> float\nC++: float GetBondRadius()\n\nGet/Set the radius of the bond cylinders. Default: 0.075\n"},
  {(char*)"SetBondRadius", PyvtkMoleculeMapper_SetBondRadius, METH_VARARGS,
   (char*)"V.SetBondRadius(float)\nC++: void SetBondRadius(float a)\n\nGet/Set the radius of the bond cylinders. Default: 0.075\n"},
  {(char*)"GetSelectedAtomsAndBonds", PyvtkMoleculeMapper_GetSelectedAtomsAndBonds, METH_VARARGS,
   (char*)"V.GetSelectedAtomsAndBonds(vtkSelection, vtkIdTypeArray,\n    vtkIdTypeArray)\nC++: virtual void GetSelectedAtomsAndBonds(\n    vtkSelection *selection, vtkIdTypeArray *atomIds,\n    vtkIdTypeArray *bondIds)\n\nExtract the ids atoms and/or bonds rendered by this molecule from\na vtkSelection object. The vtkIdTypeArray\n"},
  {(char*)"GetSelectedAtoms", PyvtkMoleculeMapper_GetSelectedAtoms, METH_VARARGS,
   (char*)"V.GetSelectedAtoms(vtkSelection, vtkIdTypeArray)\nC++: virtual void GetSelectedAtoms(vtkSelection *selection,\n    vtkIdTypeArray *atomIds)\n\nExtract the ids atoms and/or bonds rendered by this molecule from\na vtkSelection object. The vtkIdTypeArray\n"},
  {(char*)"GetSelectedBonds", PyvtkMoleculeMapper_GetSelectedBonds, METH_VARARGS,
   (char*)"V.GetSelectedBonds(vtkSelection, vtkIdTypeArray)\nC++: virtual void GetSelectedBonds(vtkSelection *selection,\n    vtkIdTypeArray *bondIds)\n\nExtract the ids atoms and/or bonds rendered by this molecule from\na vtkSelection object. The vtkIdTypeArray\n"},
  {(char*)"Render", PyvtkMoleculeMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkActor)\nC++: virtual void Render(vtkRenderer *, vtkActor *)\n\nReimplemented from base class\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkMoleculeMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nReimplemented from base class\n"},
  {(char*)"GetBounds", PyvtkMoleculeMapper_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nReimplemented from base class\n"},
  {(char*)"FillInputPortInformation", PyvtkMoleculeMapper_FillInputPortInformation, METH_VARARGS,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: virtual int FillInputPortInformation(int port,\n    vtkInformation *info)\n\nReimplemented from base class\n"},
  {(char*)"GetSupportsSelection", PyvtkMoleculeMapper_GetSupportsSelection, METH_VARARGS,
   (char*)"V.GetSupportsSelection() -> bool\nC++: virtual bool GetSupportsSelection()\n\nReimplemented from base class\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMoleculeMapper_StaticNew()
{
  return vtkMoleculeMapper::New();
}

PyObject *PyVTKClass_vtkMoleculeMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMoleculeMapper_StaticNew,
    PyvtkMoleculeMapper_Methods,
    "vtkMoleculeMapper", modulename,
    NULL, NULL,
    PyvtkMoleculeMapper_Doc(),
    PyVTKClass_vtkMapperNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 5; c++)
      {
      static const struct { const char *name; int value; }
        constants[5] = {
          { "CovalentRadius", vtkMoleculeMapper::CovalentRadius },
          { "VDWRadius", vtkMoleculeMapper::VDWRadius },
          { "UnitRadius", vtkMoleculeMapper::UnitRadius },
          { "SingleColor", vtkMoleculeMapper::SingleColor },
          { "DiscreteByAtom", vtkMoleculeMapper::DiscreteByAtom },
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

const char **PyvtkMoleculeMapper_Doc()
{
  static const char *docstring[] = {
    "vtkMoleculeMapper - Mapper that draws vtkMolecule objects\n\n",
    "Superclass: vtkMapper\n\n",
    "vtkMoleculeMapper uses glyphs (display lists) to quickly render a\nmolecule.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMoleculeMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMoleculeMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMoleculeMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

