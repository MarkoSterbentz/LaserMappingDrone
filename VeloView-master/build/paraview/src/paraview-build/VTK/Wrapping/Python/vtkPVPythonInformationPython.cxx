// python wrapper for vtkPVPythonInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkPVPythonInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVPythonInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVPythonInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVPythonInformation_Doc();


static PyObject *
PyvtkPVPythonInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVPythonInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPythonInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVPythonInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPythonInformation::NewInstance());

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
PyvtkPVPythonInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVPythonInformation *tempr = vtkPVPythonInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  vtkPVPythonInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVPythonInformation"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkPVPythonInformation::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

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
      op->vtkPVPythonInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

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
      op->vtkPVPythonInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

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
      op->vtkPVPythonInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

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
      op->vtkPVPythonInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetPythonSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPythonSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPythonSupport(temp0);
      }
    else
      {
      op->vtkPVPythonInformation::SetPythonSupport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetPythonSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPythonSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPythonSupport() :
      op->vtkPVPythonInformation::GetPythonSupport());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_PythonSupportOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PythonSupportOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PythonSupportOn();
      }
    else
      {
      op->vtkPVPythonInformation::PythonSupportOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_PythonSupportOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PythonSupportOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PythonSupportOff();
      }
    else
      {
      op->vtkPVPythonInformation::PythonSupportOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetPythonVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPythonVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  std::string temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPythonVersion(temp0);
      }
    else
      {
      op->vtkPVPythonInformation::SetPythonVersion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetPythonVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPythonVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetPythonVersion() :
      &op->vtkPVPythonInformation::GetPythonVersion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetPythonPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPythonPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  std::string temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPythonPath(temp0);
      }
    else
      {
      op->vtkPVPythonInformation::SetPythonPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetPythonPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPythonPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetPythonPath() :
      &op->vtkPVPythonInformation::GetPythonPath());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetNumpySupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumpySupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumpySupport(temp0);
      }
    else
      {
      op->vtkPVPythonInformation::SetNumpySupport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetNumpySupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumpySupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetNumpySupport() :
      op->vtkPVPythonInformation::GetNumpySupport());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_NumpySupportOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NumpySupportOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NumpySupportOn();
      }
    else
      {
      op->vtkPVPythonInformation::NumpySupportOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_NumpySupportOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NumpySupportOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NumpySupportOff();
      }
    else
      {
      op->vtkPVPythonInformation::NumpySupportOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetNumpyVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumpyVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  std::string temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumpyVersion(temp0);
      }
    else
      {
      op->vtkPVPythonInformation::SetNumpyVersion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetNumpyVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumpyVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetNumpyVersion() :
      &op->vtkPVPythonInformation::GetNumpyVersion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetNumpyPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumpyPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  std::string temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumpyPath(temp0);
      }
    else
      {
      op->vtkPVPythonInformation::SetNumpyPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetNumpyPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumpyPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetNumpyPath() :
      &op->vtkPVPythonInformation::GetNumpyPath());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetMatplotlibSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatplotlibSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMatplotlibSupport(temp0);
      }
    else
      {
      op->vtkPVPythonInformation::SetMatplotlibSupport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetMatplotlibSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatplotlibSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetMatplotlibSupport() :
      op->vtkPVPythonInformation::GetMatplotlibSupport());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_MatplotlibSupportOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MatplotlibSupportOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MatplotlibSupportOn();
      }
    else
      {
      op->vtkPVPythonInformation::MatplotlibSupportOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_MatplotlibSupportOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MatplotlibSupportOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MatplotlibSupportOff();
      }
    else
      {
      op->vtkPVPythonInformation::MatplotlibSupportOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetMatplotlibVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatplotlibVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  std::string temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMatplotlibVersion(temp0);
      }
    else
      {
      op->vtkPVPythonInformation::SetMatplotlibVersion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetMatplotlibVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatplotlibVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetMatplotlibVersion() :
      &op->vtkPVPythonInformation::GetMatplotlibVersion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetMatplotlibPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatplotlibPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  std::string temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMatplotlibPath(temp0);
      }
    else
      {
      op->vtkPVPythonInformation::SetMatplotlibPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetMatplotlibPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatplotlibPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetMatplotlibPath() :
      &op->vtkPVPythonInformation::GetMatplotlibPath());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVPythonInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVPythonInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVPythonInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVPythonInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVPythonInformation\nC++: vtkPVPythonInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVPythonInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVPythonInformation\nC++: vtkPVPythonInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DeepCopy", PyvtkPVPythonInformation_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkPVPythonInformation)\nC++: void DeepCopy(vtkPVPythonInformation *info)\n\n"},
  {(char*)"CopyFromObject", PyvtkPVPythonInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\nTransfer information about a single object into this object.\n"},
  {(char*)"AddInformation", PyvtkPVPythonInformation_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *)\n\nSame as DeepCopy for this object.\n"},
  {(char*)"CopyToStream", PyvtkPVPythonInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkPVPythonInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"SetPythonSupport", PyvtkPVPythonInformation_SetPythonSupport, METH_VARARGS,
   (char*)"V.SetPythonSupport(bool)\nC++: void SetPythonSupport(bool a)\n\nWhether the server was compiled with python support.\n"},
  {(char*)"GetPythonSupport", PyvtkPVPythonInformation_GetPythonSupport, METH_VARARGS,
   (char*)"V.GetPythonSupport() -> bool\nC++: bool GetPythonSupport()\n\nWhether the server was compiled with python support.\n"},
  {(char*)"PythonSupportOn", PyvtkPVPythonInformation_PythonSupportOn, METH_VARARGS,
   (char*)"V.PythonSupportOn()\nC++: void PythonSupportOn()\n\nWhether the server was compiled with python support.\n"},
  {(char*)"PythonSupportOff", PyvtkPVPythonInformation_PythonSupportOff, METH_VARARGS,
   (char*)"V.PythonSupportOff()\nC++: void PythonSupportOff()\n\nWhether the server was compiled with python support.\n"},
  {(char*)"SetPythonVersion", PyvtkPVPythonInformation_SetPythonVersion, METH_VARARGS,
   (char*)"V.SetPythonVersion(string)\nC++: void SetPythonVersion(const std::string &arg)\n\nIf GetPythonSupport() is true, returns the version of python\ndetected on the server.\n"},
  {(char*)"GetPythonVersion", PyvtkPVPythonInformation_GetPythonVersion, METH_VARARGS,
   (char*)"V.GetPythonVersion() -> string\nC++: const std::string &GetPythonVersion()\n\nIf GetPythonSupport() is true, returns the version of python\ndetected on the server.\n"},
  {(char*)"SetPythonPath", PyvtkPVPythonInformation_SetPythonPath, METH_VARARGS,
   (char*)"V.SetPythonPath(string)\nC++: void SetPythonPath(const std::string &arg)\n\nIf GetPythonSupport() is true, returns the path to the python\nlibraries detected on the server.\n"},
  {(char*)"GetPythonPath", PyvtkPVPythonInformation_GetPythonPath, METH_VARARGS,
   (char*)"V.GetPythonPath() -> string\nC++: const std::string &GetPythonPath()\n\nIf GetPythonSupport() is true, returns the path to the python\nlibraries detected on the server.\n"},
  {(char*)"SetNumpySupport", PyvtkPVPythonInformation_SetNumpySupport, METH_VARARGS,
   (char*)"V.SetNumpySupport(bool)\nC++: void SetNumpySupport(bool a)\n\nWhether the numpy module is available on the server.\n"},
  {(char*)"GetNumpySupport", PyvtkPVPythonInformation_GetNumpySupport, METH_VARARGS,
   (char*)"V.GetNumpySupport() -> bool\nC++: bool GetNumpySupport()\n\nWhether the numpy module is available on the server.\n"},
  {(char*)"NumpySupportOn", PyvtkPVPythonInformation_NumpySupportOn, METH_VARARGS,
   (char*)"V.NumpySupportOn()\nC++: void NumpySupportOn()\n\nWhether the numpy module is available on the server.\n"},
  {(char*)"NumpySupportOff", PyvtkPVPythonInformation_NumpySupportOff, METH_VARARGS,
   (char*)"V.NumpySupportOff()\nC++: void NumpySupportOff()\n\nWhether the numpy module is available on the server.\n"},
  {(char*)"SetNumpyVersion", PyvtkPVPythonInformation_SetNumpyVersion, METH_VARARGS,
   (char*)"V.SetNumpyVersion(string)\nC++: void SetNumpyVersion(const std::string &arg)\n\nIf GetNumpySupport() is true, returns the version of numpy\ndetected on the server.\n"},
  {(char*)"GetNumpyVersion", PyvtkPVPythonInformation_GetNumpyVersion, METH_VARARGS,
   (char*)"V.GetNumpyVersion() -> string\nC++: const std::string &GetNumpyVersion()\n\nIf GetNumpySupport() is true, returns the version of numpy\ndetected on the server.\n"},
  {(char*)"SetNumpyPath", PyvtkPVPythonInformation_SetNumpyPath, METH_VARARGS,
   (char*)"V.SetNumpyPath(string)\nC++: void SetNumpyPath(const std::string &arg)\n\nIf GetNumpySupport() is true, returns the path to numpy detected\non the server.\n"},
  {(char*)"GetNumpyPath", PyvtkPVPythonInformation_GetNumpyPath, METH_VARARGS,
   (char*)"V.GetNumpyPath() -> string\nC++: const std::string &GetNumpyPath()\n\nIf GetNumpySupport() is true, returns the path to numpy detected\non the server.\n"},
  {(char*)"SetMatplotlibSupport", PyvtkPVPythonInformation_SetMatplotlibSupport, METH_VARARGS,
   (char*)"V.SetMatplotlibSupport(bool)\nC++: void SetMatplotlibSupport(bool a)\n\nWhether the matplotlib module is available on the server.\n"},
  {(char*)"GetMatplotlibSupport", PyvtkPVPythonInformation_GetMatplotlibSupport, METH_VARARGS,
   (char*)"V.GetMatplotlibSupport() -> bool\nC++: bool GetMatplotlibSupport()\n\nWhether the matplotlib module is available on the server.\n"},
  {(char*)"MatplotlibSupportOn", PyvtkPVPythonInformation_MatplotlibSupportOn, METH_VARARGS,
   (char*)"V.MatplotlibSupportOn()\nC++: void MatplotlibSupportOn()\n\nWhether the matplotlib module is available on the server.\n"},
  {(char*)"MatplotlibSupportOff", PyvtkPVPythonInformation_MatplotlibSupportOff, METH_VARARGS,
   (char*)"V.MatplotlibSupportOff()\nC++: void MatplotlibSupportOff()\n\nWhether the matplotlib module is available on the server.\n"},
  {(char*)"SetMatplotlibVersion", PyvtkPVPythonInformation_SetMatplotlibVersion, METH_VARARGS,
   (char*)"V.SetMatplotlibVersion(string)\nC++: void SetMatplotlibVersion(const std::string &arg)\n\nIf GetMatplotlibSupport() is true, returns the version of\nmatplotlib detected on the server.\n"},
  {(char*)"GetMatplotlibVersion", PyvtkPVPythonInformation_GetMatplotlibVersion, METH_VARARGS,
   (char*)"V.GetMatplotlibVersion() -> string\nC++: const std::string &GetMatplotlibVersion()\n\nIf GetMatplotlibSupport() is true, returns the version of\nmatplotlib detected on the server.\n"},
  {(char*)"SetMatplotlibPath", PyvtkPVPythonInformation_SetMatplotlibPath, METH_VARARGS,
   (char*)"V.SetMatplotlibPath(string)\nC++: void SetMatplotlibPath(const std::string &arg)\n\nIf GetMatplotlibSupport() is true, returns the path to matplotlib\ndetected on the server.\n"},
  {(char*)"GetMatplotlibPath", PyvtkPVPythonInformation_GetMatplotlibPath, METH_VARARGS,
   (char*)"V.GetMatplotlibPath() -> string\nC++: const std::string &GetMatplotlibPath()\n\nIf GetMatplotlibSupport() is true, returns the path to matplotlib\ndetected on the server.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVPythonInformation_StaticNew()
{
  return vtkPVPythonInformation::New();
}

PyObject *PyVTKClass_vtkPVPythonInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVPythonInformation_StaticNew,
    PyvtkPVPythonInformation_Methods,
    "vtkPVPythonInformation", modulename,
    NULL, NULL,
    PyvtkPVPythonInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkPVPythonInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVPythonInformation - Gets python features.\n\n",
    "Superclass: vtkPVInformation\n\n",
    "Get details of python availabilty on the root server.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVPythonInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVPythonInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVPythonInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

