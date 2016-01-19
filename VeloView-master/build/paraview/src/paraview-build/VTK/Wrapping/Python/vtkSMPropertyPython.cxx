// python wrapper for vtkSMProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMDomain.h"
#include "vtkSMProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMProperty_Doc();


static PyObject *
PyvtkSMProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProperty::NewInstance());

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
PyvtkSMProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMProperty *tempr = vtkSMProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_SetCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCommand(temp0);
      }
    else
      {
      op->vtkSMProperty::SetCommand(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetCommand() :
      op->vtkSMProperty::GetCommand());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_SetImmediateUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImmediateUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImmediateUpdate(temp0);
      }
    else
      {
      op->vtkSMProperty::SetImmediateUpdate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetImmediateUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImmediateUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImmediateUpdate() :
      op->vtkSMProperty::GetImmediateUpdate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_IsInDomains(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomains");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsInDomains() :
      op->vtkSMProperty::IsInDomains());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_NewDomainIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewDomainIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDomainIterator *tempr = (ap.IsBound() ?
      op->NewDomainIterator() :
      op->vtkSMProperty::NewDomainIterator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMDomain *tempr = (ap.IsBound() ?
      op->GetDomain(temp0) :
      op->vtkSMProperty::GetDomain(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_FindDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMDomain *tempr = (ap.IsBound() ?
      op->FindDomain(temp0) :
      op->vtkSMProperty::FindDomain(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetNumberOfDomains(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDomains");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfDomains() :
      op->vtkSMProperty::GetNumberOfDomains());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkSMProperty_UpdateDependentDomains(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateDependentDomains");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateDependentDomains();
      }
    else
      {
      op->vtkSMProperty::UpdateDependentDomains();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


static PyObject *
PyvtkSMProperty_GetInformationOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInformationOnly() :
      op->vtkSMProperty::GetInformationOnly());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetIgnoreSynchronization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreSynchronization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIgnoreSynchronization() :
      op->vtkSMProperty::GetIgnoreSynchronization());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetInformationProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetInformationProperty() :
      op->vtkSMProperty::GetInformationProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_AddDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  char *temp0 = NULL;
  vtkSMDomain *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMDomain"))
    {
    if (ap.IsBound())
      {
      op->AddDomain(temp0, temp1);
      }
    else
      {
      op->vtkSMProperty::AddDomain(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_AddLinkedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    if (ap.IsBound())
      {
      op->AddLinkedProperty(temp0);
      }
    else
      {
      op->vtkSMProperty::AddLinkedProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_RemoveLinkedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLinkedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    if (ap.IsBound())
      {
      op->RemoveLinkedProperty(temp0);
      }
    else
      {
      op->vtkSMProperty::RemoveLinkedProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_RemoveFromSourceLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFromSourceLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveFromSourceLink();
      }
    else
      {
      op->vtkSMProperty::RemoveFromSourceLink();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_SetAnimateable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimateable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAnimateable(temp0);
      }
    else
      {
      op->vtkSMProperty::SetAnimateable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetAnimateable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimateable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAnimateable() :
      op->vtkSMProperty::GetAnimateable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_SetIsInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIsInternal(temp0);
      }
    else
      {
      op->vtkSMProperty::SetIsInternal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetIsInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIsInternal() :
      op->vtkSMProperty::GetIsInternal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_SetNoCustomDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoCustomDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNoCustomDefault(temp0);
      }
    else
      {
      op->vtkSMProperty::SetNoCustomDefault(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetNoCustomDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoCustomDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNoCustomDefault() :
      op->vtkSMProperty::GetNoCustomDefault());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_SetPanelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPanelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPanelVisibility(temp0);
      }
    else
      {
      op->vtkSMProperty::SetPanelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetPanelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPanelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPanelVisibility() :
      op->vtkSMProperty::GetPanelVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_SetPanelVisibilityDefaultForRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPanelVisibilityDefaultForRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPanelVisibilityDefaultForRepresentation(temp0);
      }
    else
      {
      op->vtkSMProperty::SetPanelVisibilityDefaultForRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetPanelVisibilityDefaultForRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPanelVisibilityDefaultForRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPanelVisibilityDefaultForRepresentation() :
      op->vtkSMProperty::GetPanelVisibilityDefaultForRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_SetPanelWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPanelWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPanelWidget(temp0);
      }
    else
      {
      op->vtkSMProperty::SetPanelWidget(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetPanelWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPanelWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPanelWidget() :
      op->vtkSMProperty::GetPanelWidget());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    if (ap.IsBound())
      {
      op->Copy(temp0);
      }
    else
      {
      op->vtkSMProperty::Copy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetDocumentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDocumentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDocumentation *tempr = (ap.IsBound() ?
      op->GetDocumentation() :
      op->vtkSMProperty::GetDocumentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_ResetToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetToDefault();
      }
    else
      {
      op->vtkSMProperty::ResetToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_ResetToXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetToXMLDefaults();
      }
    else
      {
      op->vtkSMProperty::ResetToXMLDefaults();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_ResetToDomainDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToDomainDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    bool tempr = (ap.IsBound() ?
      op->ResetToDomainDefaults(temp0) :
      op->vtkSMProperty::ResetToDomainDefaults(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetXMLLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXMLLabel() :
      op->vtkSMProperty::GetXMLLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetXMLName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXMLName() :
      op->vtkSMProperty::GetXMLName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetRepeatable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeatable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepeatable() :
      op->vtkSMProperty::GetRepeatable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetHints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetHints() :
      op->vtkSMProperty::GetHints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_SetHints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    if (ap.IsBound())
      {
      op->SetHints(temp0);
      }
    else
      {
      op->vtkSMProperty::SetHints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Modified();
      }
    else
      {
      op->vtkSMProperty::Modified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetParent() :
      op->vtkSMProperty::GetParent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_IsStateIgnored(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStateIgnored");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsStateIgnored() :
      op->vtkSMProperty::IsStateIgnored());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProperty_IsValueDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValueDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsValueDefault() :
      op->vtkSMProperty::IsValueDefault());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSMProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMProperty\nC++: vtkSMProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMProperty\nC++: vtkSMProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCommand", PyvtkSMProperty_SetCommand, METH_VARARGS,
   (char*)"V.SetCommand(string)\nC++: void SetCommand(char *)\n\nThe command name used to set the value on the server object. For\nexample: SetThetaResolution\n"},
  {(char*)"GetCommand", PyvtkSMProperty_GetCommand, METH_VARARGS,
   (char*)"V.GetCommand() -> string\nC++: char *GetCommand()\n\nThe command name used to set the value on the server object. For\nexample: SetThetaResolution\n"},
  {(char*)"SetImmediateUpdate", PyvtkSMProperty_SetImmediateUpdate, METH_VARARGS,
   (char*)"V.SetImmediateUpdate(int)\nC++: void SetImmediateUpdate(int a)\n\nIf ImmediateUpdate is true, the value of the property will be\npushed to the server as soon as it is modified. Properties that\ndo not have values can be pushed by calling Modified().\n"},
  {(char*)"GetImmediateUpdate", PyvtkSMProperty_GetImmediateUpdate, METH_VARARGS,
   (char*)"V.GetImmediateUpdate() -> int\nC++: int GetImmediateUpdate()\n\nIf ImmediateUpdate is true, the value of the property will be\npushed to the server as soon as it is modified. Properties that\ndo not have values can be pushed by calling Modified().\n"},
  {(char*)"IsInDomains", PyvtkSMProperty_IsInDomains, METH_VARARGS,
   (char*)"V.IsInDomains() -> int\nC++: int IsInDomains()\n\nReturns true if all values are in all domains, false otherwise.\nThe domains will check the unchecked values (SetUncheckedXXX())\ninstead of the actual values.\n"},
  {(char*)"NewDomainIterator", PyvtkSMProperty_NewDomainIterator, METH_VARARGS,
   (char*)"V.NewDomainIterator() -> vtkSMDomainIterator\nC++: vtkSMDomainIterator *NewDomainIterator()\n\nCreates, initializes and returns a new domain iterator. The user\nhas to delete the iterator.\n"},
  {(char*)"GetDomain", PyvtkSMProperty_GetDomain, METH_VARARGS,
   (char*)"V.GetDomain(string) -> vtkSMDomain\nC++: vtkSMDomain *GetDomain(const char *name)\n\nReturns a domain give a name.\n"},
  {(char*)"FindDomain", PyvtkSMProperty_FindDomain, METH_VARARGS,
   (char*)"V.FindDomain(string) -> vtkSMDomain\nC++: vtkSMDomain *FindDomain(const char *classname)\n\nReturns the first domain which is of the specified type.\n"},
  {(char*)"GetNumberOfDomains", PyvtkSMProperty_GetNumberOfDomains, METH_VARARGS,
   (char*)"V.GetNumberOfDomains() -> int\nC++: unsigned int GetNumberOfDomains()\n\nReturns the number of domains this property has. This can be used\nto specify a valid index for GetDomain(index).\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"UpdateDependentDomains", PyvtkSMProperty_UpdateDependentDomains, METH_VARARGS,
   (char*)"V.UpdateDependentDomains()\nC++: void UpdateDependentDomains()\n\nCalls Update() on all domains contained by the property as well\nas all dependant domains. This is usually called after\nSetUncheckedXXX() to tell all dependant domains to update\nthemselves according to the new value. Note that when calling\nUpdate() on domains contained by this property, a NULL is passed\nas the argument. This is because the domain does not really\n\"depend\" on the property. When calling Update() on dependent\ndomains, the property passes itself as the argument.@deprecated\nThis method is no longer needed. Dependent domains are now\nautomatically updated when a property fires\nvtkCommand::UncheckedPropertyModifiedEvent. The implementation\nhas been changed to do nothing and the method will be removed in\nfuture releases.\n"},
#endif
  {(char*)"GetInformationOnly", PyvtkSMProperty_GetInformationOnly, METH_VARARGS,
   (char*)"V.GetInformationOnly() -> int\nC++: int GetInformationOnly()\n\nIs InformationOnly is set to true, this property is used to get\ninformation from server instead of setting values.\n"},
  {(char*)"GetIgnoreSynchronization", PyvtkSMProperty_GetIgnoreSynchronization, METH_VARARGS,
   (char*)"V.GetIgnoreSynchronization() -> int\nC++: int GetIgnoreSynchronization()\n\nIf IgnoreSynchronization is set to true, this property is used to\nprevent that property from beeing updated when changed remotely\nby another collaborative client.\n"},
  {(char*)"GetInformationProperty", PyvtkSMProperty_GetInformationProperty, METH_VARARGS,
   (char*)"V.GetInformationProperty() -> vtkSMProperty\nC++: vtkSMProperty *GetInformationProperty()\n\nGet the associated information property. This allows applications\nto have access to both the in and out properties. The information\nproperty has to be specified in the xml configuration file.\n"},
  {(char*)"AddDomain", PyvtkSMProperty_AddDomain, METH_VARARGS,
   (char*)"V.AddDomain(string, vtkSMDomain)\nC++: void AddDomain(const char *name, vtkSMDomain *dom)\n\nProperties can have one or more domains. These are assigned by\nthe proxy manager and can be used to obtain information other\nthan given by the type of the propery and its values.\n"},
  {(char*)"AddLinkedProperty", PyvtkSMProperty_AddLinkedProperty, METH_VARARGS,
   (char*)"V.AddLinkedProperty(vtkSMProperty)\nC++: virtual void AddLinkedProperty(vtkSMProperty *targetProperty)\n\nAdd a link to a property whose value should be synchronized with\nthis property value.\n"},
  {(char*)"RemoveLinkedProperty", PyvtkSMProperty_RemoveLinkedProperty, METH_VARARGS,
   (char*)"V.RemoveLinkedProperty(vtkSMProperty)\nC++: virtual void RemoveLinkedProperty(\n    vtkSMProperty *targetProperty)\n\nRemove a link to a property added with AddLinkedProperty()\n"},
  {(char*)"RemoveFromSourceLink", PyvtkSMProperty_RemoveFromSourceLink, METH_VARARGS,
   (char*)"V.RemoveFromSourceLink()\nC++: virtual void RemoveFromSourceLink()\n\nRemove a link from the source property. This is a useful way for\ntarget properties to unlink themselves from a source property\nprior to, for instance, the deletion of the target property\ninstance. This method only does any work if this instance was\npassed as the argument to AddLinkedProperty() on a different\nproperty instance at some point. Otherwise, it is a no-op.\n"},
  {(char*)"SetAnimateable", PyvtkSMProperty_SetAnimateable, METH_VARARGS,
   (char*)"V.SetAnimateable(int)\nC++: void SetAnimateable(int a)\n\nGet/Set if the property is animateable. Non-animateable\nproperties are shown in the GUI only in advanced mode.\n"},
  {(char*)"GetAnimateable", PyvtkSMProperty_GetAnimateable, METH_VARARGS,
   (char*)"V.GetAnimateable() -> int\nC++: int GetAnimateable()\n\nGet/Set if the property is animateable. Non-animateable\nproperties are shown in the GUI only in advanced mode.\n"},
  {(char*)"SetIsInternal", PyvtkSMProperty_SetIsInternal, METH_VARARGS,
   (char*)"V.SetIsInternal(int)\nC++: void SetIsInternal(int a)\n\nGet/Set if the property is internal to server manager. Internal\nproperties are not saved in state and should not be displayed in\nthe user interface.\n"},
  {(char*)"GetIsInternal", PyvtkSMProperty_GetIsInternal, METH_VARARGS,
   (char*)"V.GetIsInternal() -> int\nC++: int GetIsInternal()\n\nGet/Set if the property is internal to server manager. Internal\nproperties are not saved in state and should not be displayed in\nthe user interface.\n"},
  {(char*)"SetNoCustomDefault", PyvtkSMProperty_SetNoCustomDefault, METH_VARARGS,
   (char*)"V.SetNoCustomDefault(int)\nC++: void SetNoCustomDefault(int a)\n\nSets whether the property should ignore custom default settings.\n"},
  {(char*)"GetNoCustomDefault", PyvtkSMProperty_GetNoCustomDefault, METH_VARARGS,
   (char*)"V.GetNoCustomDefault() -> int\nC++: int GetNoCustomDefault()\n\nGets whether the property should ignore custom default settings.\n"},
  {(char*)"SetPanelVisibility", PyvtkSMProperty_SetPanelVisibility, METH_VARARGS,
   (char*)"V.SetPanelVisibility(string)\nC++: void SetPanelVisibility(char *)\n\nSets the panel visibility for the property. The value can be one\nof:\n* \"default\": Show the property by default.\n* \"advanced\": Only show the property in the advanced view.\n* \"never\": Never show the property on the panel.\n\nBy default, all properties have \"default\" visibility.\n"},
  {(char*)"GetPanelVisibility", PyvtkSMProperty_GetPanelVisibility, METH_VARARGS,
   (char*)"V.GetPanelVisibility() -> string\nC++: char *GetPanelVisibility()\n\nReturns the panel visibility for the property.\n"},
  {(char*)"SetPanelVisibilityDefaultForRepresentation", PyvtkSMProperty_SetPanelVisibilityDefaultForRepresentation, METH_VARARGS,
   (char*)"V.SetPanelVisibilityDefaultForRepresentation(string)\nC++: void SetPanelVisibilityDefaultForRepresentation(char *)\n\nSets the panel visibility to default if the current\nrepresentation type matches representation.\n"},
  {(char*)"GetPanelVisibilityDefaultForRepresentation", PyvtkSMProperty_GetPanelVisibilityDefaultForRepresentation, METH_VARARGS,
   (char*)"V.GetPanelVisibilityDefaultForRepresentation() -> string\nC++: char *GetPanelVisibilityDefaultForRepresentation()\n\nReturns which representation type the property will be shown by\ndefault for.\n"},
  {(char*)"SetPanelWidget", PyvtkSMProperty_SetPanelWidget, METH_VARARGS,
   (char*)"V.SetPanelWidget(string)\nC++: void SetPanelWidget(char *)\n\nSets the name of the custom panel widget to use for the property.\n"},
  {(char*)"GetPanelWidget", PyvtkSMProperty_GetPanelWidget, METH_VARARGS,
   (char*)"V.GetPanelWidget() -> string\nC++: char *GetPanelWidget()\n\nReturns name of the panel widget for the property.\n"},
  {(char*)"Copy", PyvtkSMProperty_Copy, METH_VARARGS,
   (char*)"V.Copy(vtkSMProperty)\nC++: virtual void Copy(vtkSMProperty *src)\n\nCopy all property values. This will copy both checked and\nunchecked values, if applicable.\n"},
  {(char*)"GetDocumentation", PyvtkSMProperty_GetDocumentation, METH_VARARGS,
   (char*)"V.GetDocumentation() -> vtkSMDocumentation\nC++: vtkSMDocumentation *GetDocumentation()\n\nReturns the documentation for this proxy. The return value may be\nNULL if no documentation is defined in the XML for this property.\n"},
  {(char*)"ResetToDefault", PyvtkSMProperty_ResetToDefault, METH_VARARGS,
   (char*)"V.ResetToDefault()\nC++: void ResetToDefault()\n\nSimply calls this->ResetToDomainDefaults() and if that returns\nfalse, calls this->ResetToXMLDefaults().\n"},
  {(char*)"ResetToXMLDefaults", PyvtkSMProperty_ResetToXMLDefaults, METH_VARARGS,
   (char*)"V.ResetToXMLDefaults()\nC++: virtual void ResetToXMLDefaults()\n\nFor properties that support specifying defaults in XML\nconfiguration, this method will reset the property value to the\ndefault values specified in the XML. Default implementation does\nnothing.\n"},
  {(char*)"ResetToDomainDefaults", PyvtkSMProperty_ResetToDomainDefaults, METH_VARARGS,
   (char*)"V.ResetToDomainDefaults(bool) -> bool\nC++: bool ResetToDomainDefaults(bool use_unchecked_values=false)\n\nIterates over all domains and call SetDefaultValues() on each\ndomain until the first one returns true i.e. indicate that it can\nset a default value and did so. Returns true if any domain can\nsetup a default value for this property. Otherwise false.\n"},
  {(char*)"GetXMLLabel", PyvtkSMProperty_GetXMLLabel, METH_VARARGS,
   (char*)"V.GetXMLLabel() -> string\nC++: char *GetXMLLabel()\n\nThe label assigned by the xml parser.\n"},
  {(char*)"GetXMLName", PyvtkSMProperty_GetXMLName, METH_VARARGS,
   (char*)"V.GetXMLName() -> string\nC++: char *GetXMLName()\n\nThe name assigned by the xml parser. Used to get the property\nfrom a proxy. Note that the name used to obtain a property that\nis on a subproxy may be different from the XMLName of the\nproperty, see the note on ExposedProperties for vtkSMProxy.\n"},
  {(char*)"GetRepeatable", PyvtkSMProperty_GetRepeatable, METH_VARARGS,
   (char*)"V.GetRepeatable() -> int\nC++: int GetRepeatable()\n\nIf repeatable, a property can have 1 or more values of the same\nkind. This ivar is configured when the xml file is read and is\nmainly useful for information (for example from python).\n"},
  {(char*)"GetHints", PyvtkSMProperty_GetHints, METH_VARARGS,
   (char*)"V.GetHints() -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetHints()\n\nThe server manager configuration XML may define <Hints /> element\nfor a property. Hints are metadata associated with the property.\nThe Server Manager does not (and should not) interpret the hints.\nHints provide a mechanism to add GUI pertinant information to the\nserver manager XML.  Returns the XML element for the hints\nassociated with this property, if any, otherwise returns NULL.\n"},
  {(char*)"SetHints", PyvtkSMProperty_SetHints, METH_VARARGS,
   (char*)"V.SetHints(vtkPVXMLElement)\nC++: void SetHints(vtkPVXMLElement *hints)\n\nThe server manager configuration XML may define <Hints /> element\nfor a property. Hints are metadata associated with the property.\nThe Server Manager does not (and should not) interpret the hints.\nHints provide a mechanism to add GUI pertinant information to the\nserver manager XML.  Returns the XML element for the hints\nassociated with this property, if any, otherwise returns NULL.\n"},
  {(char*)"Modified", PyvtkSMProperty_Modified, METH_VARARGS,
   (char*)"V.Modified()\nC++: virtual void Modified()\n\nOverridden to support blocking of modified events.\n"},
  {(char*)"GetParent", PyvtkSMProperty_GetParent, METH_VARARGS,
   (char*)"V.GetParent() -> vtkSMProxy\nC++: vtkSMProxy *GetParent()\n\nGet the proxy to which this property belongs. Note that is this\nproperty is belong to a sub-proxy of a proxy, the returned value\nwill indeed be that sub-proxy (and not the outer container\nproxy).\n"},
  {(char*)"IsStateIgnored", PyvtkSMProperty_IsStateIgnored, METH_VARARGS,
   (char*)"V.IsStateIgnored() -> bool\nC++: virtual bool IsStateIgnored()\n\n"},
  {(char*)"IsValueDefault", PyvtkSMProperty_IsValueDefault, METH_VARARGS,
   (char*)"V.IsValueDefault() -> bool\nC++: virtual bool IsValueDefault()\n\nReturns true if the property's value is different from the\ndefault value. This is used as a hint by the state saving code to\ndetermine if the value should be written to the file or if the\ndefaults are sufficient.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMProperty_StaticNew()
{
  return vtkSMProperty::New();
}

PyObject *PyVTKClass_vtkSMPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMProperty_StaticNew,
    PyvtkSMProperty_Methods,
    "vtkSMProperty", modulename,
    NULL, NULL,
    PyvtkSMProperty_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSMProperty - superclass for all SM properties\n\n",
    "Superclass: vtkSMObject\n\n",
    "Each instance of vtkSMProperty or a sub-class represents a method and\nassociated arguments (if any) of a VTK object stored on one or more\nclient manager or server nodes. It may have a state and can push this\nstate to the vtk object it refers to. vtkSMProperty only supports\nmethods with no arguments. Sub-classes support methods with different\narguments types and numbers.\n\nProperty is typically mean",
    "t for pushing its values to athe VTK\nobject. However, a property may be marked as an InformationOnly\nproperty in which case its values are obtained from the server with\nthe UpdateInformation() call.\n\nEach non-information property can have one or more domains. A domain\nrepresents a set of acceptable values the property can have. Domains\nprovide applications mechanisms to extract semantic informatio",
    "n from\na property.\n\nA property has two kinds of values: regular (or checked) values and\nunchecked values. Regular values are the ones that are pushed to the\nVTK object when the property is updated. These are the ones that get\nsaved in state, etc. Unchecked values are provided so that domains\ncan update their conditions without having the change the property's\nvalue e.g. if the domain range for the",
    " IsoContour property changes\nbased on the value of the ArrayName property which selects the array\nto contour with, the can set the unchecked value on the ArrayName\nproperty to each of the available arrays to determine what the domain\nwould be without having to modify the property and update its VTK\nobject. If a property has no unchecked-values explicitly set, then\nthe \"Get\" methods that access the",
    " unchecked-values should simply\nreturn the checked values. If the checked values are changed, the\nunchecked values are reset to match the checked values.\n\nA property fires the following events:\n\n\\li vtkCommand::ModifiedEvent : fired when property's value(s)\n    is(are)\n       modified. This must be fired only when values are really\nchanged, not\n       just the \"set\" methods are called. This event ",
    "must be fired no\nmatter\n       how the property's values are changed.\n\n\\li vtkCommand::UncheckedPropertyModifiedEvent : fired when the\n    property's\n       unchecked-value(s) is(are) changed. Note that when a\nproperty's\n       checked values change, it's unchecked values are reset to\nmatch the\n       checked values, so technically,\n       vtkCommand::UncheckedPropertyModifiedEvent must be fired e",
    "very\ntime\n       vtkCommand::ModifiedEvent is fired.\n\n\\li vtkCommand::DomainModifiedEvent : fired when any of this\n    properties\n       domain's fire the same event.\n\nProperties are typically constructed from ServerManager XML\nconfiguration files. Attributes available on a Property XML are as\nfollows:\n\n\\li name: string: This is the name for the property. This typically\n       ends up being the na",
    "me used by the Proxy to refer to this\nproperty. It\n       must be unique for all properties on a Proxy.\n\n\\li label: string:This is the user-friendly label. Ideally, the label\n       should be same as the name, however traditionally that hasn't\nbeen the\n       case.\n\n\\li command: string: This is the name of the method to call on the\n    VTK\n       update for the property.\n\n\\li repeatable or repeat_",
    "command: \\c{0, 1}: This used to indicate\n    that\n       the command can be called repeatedly to update the VTK object.\ne.g.\n       for multiple inputs, one must call AddInput(..) repeatedly. It\nalso\n       implies that the number of elements/items in the property can\nchange.\n\n\\li information_only: \\c{0, 1}: When set, it implies that this\n    property\n       is used to obtain values from the VTK o",
    "bject, rather than the\ndefault\n       behavior which is to set values on the VTK object.\n\n\\li information_property: string: Value is the name of the property\n    on the\n       proxy to which this property belongs that can is\ninformation_only\n       property corresponding to this. This is useful when the\nvariable that\n       this property sets can be changed by other means besides this\nproperty\n   ",
    "    e.g. through interaction. Applications can use this\ninformation to\n       update the value of this property to reflect the VTK-side\nstate.\n\n\\li immediate_update: \\c{0, 1}: When set, the Proxy will attempt to\n    push\n       the value for this property to the VTK object as soon as the\nproperty\n       is changed. It is no longer common and should be avoided. It\nmay be\n       deprecated in near f",
    "uture.\n\n\\li state_ignored: \\c{0, 1}: When set, changes to this property are\n    not\n       captured in undo-redo stacks. Unlike is_internal, the value\nfor this\n       property is saved in state files.\n\n\\li ignore_synchronization: \\c{0, 1}: When set, changes to this\n    property\n       are not synchronized among client-processes in collaborative\nmode.\n\n\\li is_internal: \\c{0, 1}: When set, the prope",
    "rty is treated as\n    internal\n       which implies that it will not be shown in the UI; it value\nwill not\n       be pushed when the proxy is created, nor saved in state files\nor\n       undo-redo stacks.\n\n\\li animateable: \\c{0, 1}: When set, the property is considered as\n       animatable which the UI can use to build the animation\ninterface.\n\n\\li panel_visibility: \\c{default, advanced, never}: In",
    "dicates to the\n    UI\n       that the widget corresponding to this property should be shown\nin the\n       default or advanced mode, or never at all.\n\n\\li panel_widget: string: provides a hint to the UI to determine\n    which\n       what widget to create to edit this property.\n\n\\li no_custom_default: \\c{0, 1}: When set, vtkSMSettings will neither\n       change the value of a property upon creation ",
    "nor save the\nproperty\n       value as a default.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

