// python wrapper for vtkPVProminentValuesInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMultiProcessStream.h"
#include "vtkPVProminentValuesInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVProminentValuesInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVProminentValuesInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVProminentValuesInformation_Doc();


static PyObject *
PyvtkPVProminentValuesInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVProminentValuesInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVProminentValuesInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVProminentValuesInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVProminentValuesInformation::NewInstance());

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
PyvtkPVProminentValuesInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVProminentValuesInformation *tempr = vtkPVProminentValuesInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_SetPortNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPortNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPortNumber(temp0);
      }
    else
      {
      op->vtkPVProminentValuesInformation::SetPortNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetPortNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPortNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPortNumber() :
      op->vtkPVProminentValuesInformation::GetPortNumber());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldAssociation(temp0);
      }
    else
      {
      op->vtkPVProminentValuesInformation::SetFieldAssociation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFieldAssociation() :
      op->vtkPVProminentValuesInformation::GetFieldAssociation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_SetFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldName(temp0);
      }
    else
      {
      op->vtkPVProminentValuesInformation::SetFieldName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFieldName() :
      op->vtkPVProminentValuesInformation::GetFieldName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfComponents(temp0);
      }
    else
      {
      op->vtkPVProminentValuesInformation::SetNumberOfComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkPVProminentValuesInformation::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_SetFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFraction(temp0);
      }
    else
      {
      op->vtkPVProminentValuesInformation::SetFraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFractionMinValue() :
      op->vtkPVProminentValuesInformation::GetFractionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFractionMaxValue() :
      op->vtkPVProminentValuesInformation::GetFractionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFraction() :
      op->vtkPVProminentValuesInformation::GetFraction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_SetUncertainty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncertainty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUncertainty(temp0);
      }
    else
      {
      op->vtkPVProminentValuesInformation::SetUncertainty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetUncertaintyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncertaintyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUncertaintyMinValue() :
      op->vtkPVProminentValuesInformation::GetUncertaintyMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetUncertaintyMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncertaintyMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUncertaintyMaxValue() :
      op->vtkPVProminentValuesInformation::GetUncertaintyMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetUncertainty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncertainty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUncertainty() :
      op->vtkPVProminentValuesInformation::GetUncertainty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compare");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  vtkPVProminentValuesInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVProminentValuesInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->Compare(temp0) :
      op->vtkPVProminentValuesInformation::Compare(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  vtkPVProminentValuesInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVProminentValuesInformation"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkPVProminentValuesInformation::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->CopyFromObject(temp0);
      }
    else
      {
      op->vtkPVProminentValuesInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_CopyDistinctValuesFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyDistinctValuesFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      op->CopyDistinctValuesFromObject(temp0);
      }
    else
      {
      op->vtkPVProminentValuesInformation::CopyDistinctValuesFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  vtkPVInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
    {
    if (ap.IsBound())
      {
      op->AddInformation(temp0);
      }
    else
      {
      op->vtkPVProminentValuesInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyToStream(temp0);
      }
    else
      {
      op->vtkPVProminentValuesInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyFromStream(temp0);
      }
    else
      {
      op->vtkPVProminentValuesInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_InitializeParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializeParameters();
      }
    else
      {
      op->vtkPVProminentValuesInformation::InitializeParameters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPVProminentValuesInformation::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_AddDistinctValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDistinctValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  vtkPVProminentValuesInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVProminentValuesInformation"))
    {
    if (ap.IsBound())
      {
      op->AddDistinctValues(temp0);
      }
    else
      {
      op->vtkPVProminentValuesInformation::AddDistinctValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProminentValuesInformation_GetProminentComponentValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProminentComponentValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProminentValuesInformation *op = static_cast<vtkPVProminentValuesInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetProminentComponentValues(temp0) :
      op->vtkPVProminentValuesInformation::GetProminentComponentValues(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVProminentValuesInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVProminentValuesInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVProminentValuesInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVProminentValuesInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVProminentValuesInformation\nC++: vtkPVProminentValuesInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVProminentValuesInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVProminentValuesInformation\nC++: vtkPVProminentValuesInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPortNumber", PyvtkPVProminentValuesInformation_SetPortNumber, METH_VARARGS,
   (char*)"V.SetPortNumber(int)\nC++: void SetPortNumber(int a)\n\nSet/get the output port whose dataset should be queried.\n"},
  {(char*)"GetPortNumber", PyvtkPVProminentValuesInformation_GetPortNumber, METH_VARARGS,
   (char*)"V.GetPortNumber() -> int\nC++: int GetPortNumber()\n\nSet/get the output port whose dataset should be queried.\n"},
  {(char*)"SetFieldAssociation", PyvtkPVProminentValuesInformation_SetFieldAssociation, METH_VARARGS,
   (char*)"V.SetFieldAssociation(string)\nC++: void SetFieldAssociation(char *)\n\nSet/get array's association\n"},
  {(char*)"GetFieldAssociation", PyvtkPVProminentValuesInformation_GetFieldAssociation, METH_VARARGS,
   (char*)"V.GetFieldAssociation() -> string\nC++: char *GetFieldAssociation()\n\nSet/get array's association\n"},
  {(char*)"SetFieldName", PyvtkPVProminentValuesInformation_SetFieldName, METH_VARARGS,
   (char*)"V.SetFieldName(string)\nC++: void SetFieldName(char *)\n\nSet/get array's name\n"},
  {(char*)"GetFieldName", PyvtkPVProminentValuesInformation_GetFieldName, METH_VARARGS,
   (char*)"V.GetFieldName() -> string\nC++: char *GetFieldName()\n\nSet/get array's name\n"},
  {(char*)"SetNumberOfComponents", PyvtkPVProminentValuesInformation_SetNumberOfComponents, METH_VARARGS,
   (char*)"V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps)\n\nChanging the number of components clears the ranges back to the\ndefault.\n"},
  {(char*)"GetNumberOfComponents", PyvtkPVProminentValuesInformation_GetNumberOfComponents, METH_VARARGS,
   (char*)"V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nChanging the number of components clears the ranges back to the\ndefault.\n"},
  {(char*)"SetFraction", PyvtkPVProminentValuesInformation_SetFraction, METH_VARARGS,
   (char*)"V.SetFraction(float)\nC++: void SetFraction(double)\n\nSet/get the minimum fraction of the array that should be composed\nof a value (between 0 and 1) in order for it to be considered\nprominent.\n\nSetting this to one indicates that an array must have every value\nbe identical in order to have any considered prominent.\n"},
  {(char*)"GetFractionMinValue", PyvtkPVProminentValuesInformation_GetFractionMinValue, METH_VARARGS,
   (char*)"V.GetFractionMinValue() -> float\nC++: double GetFractionMinValue()\n\nSet/get the minimum fraction of the array that should be composed\nof a value (between 0 and 1) in order for it to be considered\nprominent.\n\nSetting this to one indicates that an array must have every value\nbe identical in order to have any considered prominent.\n"},
  {(char*)"GetFractionMaxValue", PyvtkPVProminentValuesInformation_GetFractionMaxValue, METH_VARARGS,
   (char*)"V.GetFractionMaxValue() -> float\nC++: double GetFractionMaxValue()\n\nSet/get the minimum fraction of the array that should be composed\nof a value (between 0 and 1) in order for it to be considered\nprominent.\n\nSetting this to one indicates that an array must have every value\nbe identical in order to have any considered prominent.\n"},
  {(char*)"GetFraction", PyvtkPVProminentValuesInformation_GetFraction, METH_VARARGS,
   (char*)"V.GetFraction() -> float\nC++: double GetFraction()\n\nSet/get the minimum fraction of the array that should be composed\nof a value (between 0 and 1) in order for it to be considered\nprominent.\n\nSetting this to one indicates that an array must have every value\nbe identical in order to have any considered prominent.\n"},
  {(char*)"SetUncertainty", PyvtkPVProminentValuesInformation_SetUncertainty, METH_VARARGS,
   (char*)"V.SetUncertainty(float)\nC++: void SetUncertainty(double)\n\nSet/get the maximum uncertainty allowed in the detection of\nprominent values. The uncertainty is the probability of prominent\nvalues going undetected. Setting this to zero forces the entire\narray to be inspected.\n"},
  {(char*)"GetUncertaintyMinValue", PyvtkPVProminentValuesInformation_GetUncertaintyMinValue, METH_VARARGS,
   (char*)"V.GetUncertaintyMinValue() -> float\nC++: double GetUncertaintyMinValue()\n\nSet/get the maximum uncertainty allowed in the detection of\nprominent values. The uncertainty is the probability of prominent\nvalues going undetected. Setting this to zero forces the entire\narray to be inspected.\n"},
  {(char*)"GetUncertaintyMaxValue", PyvtkPVProminentValuesInformation_GetUncertaintyMaxValue, METH_VARARGS,
   (char*)"V.GetUncertaintyMaxValue() -> float\nC++: double GetUncertaintyMaxValue()\n\nSet/get the maximum uncertainty allowed in the detection of\nprominent values. The uncertainty is the probability of prominent\nvalues going undetected. Setting this to zero forces the entire\narray to be inspected.\n"},
  {(char*)"GetUncertainty", PyvtkPVProminentValuesInformation_GetUncertainty, METH_VARARGS,
   (char*)"V.GetUncertainty() -> float\nC++: double GetUncertainty()\n\nSet/get the maximum uncertainty allowed in the detection of\nprominent values. The uncertainty is the probability of prominent\nvalues going undetected. Setting this to zero forces the entire\narray to be inspected.\n"},
  {(char*)"Compare", PyvtkPVProminentValuesInformation_Compare, METH_VARARGS,
   (char*)"V.Compare(vtkPVProminentValuesInformation) -> int\nC++: int Compare(vtkPVProminentValuesInformation *info)\n\nReturns 1 if the array can be combined. It must have the same\nname and number of components.\n"},
  {(char*)"DeepCopy", PyvtkPVProminentValuesInformation_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkPVProminentValuesInformation)\nC++: void DeepCopy(vtkPVProminentValuesInformation *other)\n\nCopy information from an other object.\n"},
  {(char*)"CopyFromObject", PyvtkPVProminentValuesInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\nTransfer information about a single object into this object.\n"},
  {(char*)"CopyDistinctValuesFromObject", PyvtkPVProminentValuesInformation_CopyDistinctValuesFromObject, METH_VARARGS,
   (char*)"V.CopyDistinctValuesFromObject(vtkAbstractArray)\nC++: virtual void CopyDistinctValuesFromObject(vtkAbstractArray *)\n\nTransfer information about a single vtkAbstractArray's prominent\nvalues into this object.\n\nThis is called *after* CopyFromObject has determined the number\nof components available; this method relies on\nthis->NumberOfComponents being valid.\n"},
  {(char*)"AddInformation", PyvtkPVProminentValuesInformation_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *other)\n\nMerge another information object.\n"},
  {(char*)"CopyToStream", PyvtkPVProminentValuesInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkPVProminentValuesInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"InitializeParameters", PyvtkPVProminentValuesInformation_InitializeParameters, METH_VARARGS,
   (char*)"V.InitializeParameters()\nC++: void InitializeParameters()\n\nRemove all parameter information.\n\nYou must copy/set parameter values before adding data or copying\ndata from an object.\n"},
  {(char*)"Initialize", PyvtkPVProminentValuesInformation_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nRemove all gathered information (but not parameters). Next add\nwill behave like a copy.\n"},
  {(char*)"AddDistinctValues", PyvtkPVProminentValuesInformation_AddDistinctValues, METH_VARARGS,
   (char*)"V.AddDistinctValues(vtkPVProminentValuesInformation)\nC++: void AddDistinctValues(vtkPVProminentValuesInformation *)\n\nMerge another list of prominent values.\n"},
  {(char*)"GetProminentComponentValues", PyvtkPVProminentValuesInformation_GetProminentComponentValues, METH_VARARGS,
   (char*)"V.GetProminentComponentValues(int) -> vtkAbstractArray\nC++: vtkAbstractArray *GetProminentComponentValues(int component)\n\nReturns either NULL (array component appears to be continuous) or\na pointer to a vtkAbstractArray (array component appears to be\ndiscrete) containing a sorted list of all distinct prominent\nvalues encountered in the array component.\n\nPassing -1 as the component will return information about\ndistinct tuple values as opposed to distinct component values.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVProminentValuesInformation_StaticNew()
{
  return vtkPVProminentValuesInformation::New();
}

PyObject *PyVTKClass_vtkPVProminentValuesInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVProminentValuesInformation_StaticNew,
    PyvtkPVProminentValuesInformation_Methods,
    "vtkPVProminentValuesInformation", modulename,
    NULL, NULL,
    PyvtkPVProminentValuesInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkPVProminentValuesInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVProminentValuesInformation - Prominent values a data array takes\non.\n\n",
    "Superclass: vtkPVInformation\n\n",
    "This vtkPVInformation subclass provides a way for clients to discover\nwhether a specific remote vtkAbstractArray instance behaves like a\ndiscrete set or a continuum (for each component of its tuples as well\nas for its tuples as a whole).\n\nIf the array behaves discretely (which we define to be: takes on\nfewer than 33 distinct values over more than 99.9% of its entries to\nwithin a given confidence t",
    "hat dictates the number of samples\nrequired), then the prominent values are also made available.\n\nThis class uses vtkAbstractArray::GetProminentComponentValues().\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVProminentValuesInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVProminentValuesInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVProminentValuesInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

