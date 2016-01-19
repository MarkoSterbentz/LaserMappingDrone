// python wrapper for vtkPVServerInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVServerInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVServerInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVServerInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVServerInformation_Doc();


static PyObject *
PyvtkPVServerInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVServerInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVServerInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVServerInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVServerInformation::NewInstance());

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
PyvtkPVServerInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVServerInformation *tempr = vtkPVServerInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetRemoteRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoteRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRemoteRendering(temp0);
      }
    else
      {
      op->vtkPVServerInformation::SetRemoteRendering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetRemoteRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRemoteRendering() :
      op->vtkPVServerInformation::GetRemoteRendering());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  vtkPVServerInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVServerInformation"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkPVServerInformation::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

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
      op->vtkPVServerInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

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
      op->vtkPVServerInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

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
      op->vtkPVServerInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

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
      op->vtkPVServerInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetTileDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTileDimensions(temp0, temp1);
      }
    else
      {
      op->vtkPVServerInformation::SetTileDimensions(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVServerInformation_SetTileDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTileDimensions(temp0);
      }
    else
      {
      op->vtkPVServerInformation::SetTileDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVServerInformation_SetTileDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPVServerInformation_SetTileDimensions_s1(self, args);
    case 1:
      return PyvtkPVServerInformation_SetTileDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTileDimensions");
  return NULL;
}



static PyObject *
PyvtkPVServerInformation_GetTileDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTileDimensions() :
      op->vtkPVServerInformation::GetTileDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetTileMullions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTileMullions(temp0, temp1);
      }
    else
      {
      op->vtkPVServerInformation::SetTileMullions(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVServerInformation_SetTileMullions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTileMullions(temp0);
      }
    else
      {
      op->vtkPVServerInformation::SetTileMullions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVServerInformation_SetTileMullions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPVServerInformation_SetTileMullions_s1(self, args);
    case 1:
      return PyvtkPVServerInformation_SetTileMullions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTileMullions");
  return NULL;
}



static PyObject *
PyvtkPVServerInformation_GetTileMullions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTileMullions() :
      op->vtkPVServerInformation::GetTileMullions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetUseOffscreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOffscreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOffscreenRendering(temp0);
      }
    else
      {
      op->vtkPVServerInformation::SetUseOffscreenRendering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetUseOffscreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOffscreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseOffscreenRendering() :
      op->vtkPVServerInformation::GetUseOffscreenRendering());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetUseIceT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIceT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseIceT(temp0);
      }
    else
      {
      op->vtkPVServerInformation::SetUseIceT(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetUseIceT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIceT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseIceT() :
      op->vtkPVServerInformation::GetUseIceT());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetOGVSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOGVSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOGVSupport(temp0);
      }
    else
      {
      op->vtkPVServerInformation::SetOGVSupport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetOGVSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOGVSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOGVSupport() :
      op->vtkPVServerInformation::GetOGVSupport());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetAVISupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAVISupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAVISupport(temp0);
      }
    else
      {
      op->vtkPVServerInformation::SetAVISupport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetAVISupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAVISupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAVISupport() :
      op->vtkPVServerInformation::GetAVISupport());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetTimeout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeout(temp0);
      }
    else
      {
      op->vtkPVServerInformation::SetTimeout(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetTimeout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeout() :
      op->vtkPVServerInformation::GetTimeout());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetEyeSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEyeSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEyeSeparation(temp0);
      }
    else
      {
      op->vtkPVServerInformation::SetEyeSeparation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetEyeSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEyeSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEyeSeparation() :
      op->vtkPVServerInformation::GetEyeSeparation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetNumberOfMachines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfMachines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfMachines(temp0);
      }
    else
      {
      op->vtkPVServerInformation::SetNumberOfMachines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetNumberOfMachines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMachines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfMachines() :
      op->vtkPVServerInformation::GetNumberOfMachines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetEnvironment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnvironment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetEnvironment(temp0, temp1);
      }
    else
      {
      op->vtkPVServerInformation::SetEnvironment(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetEnvironment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnvironment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetEnvironment(temp0) :
      op->vtkPVServerInformation::GetEnvironment(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  int temp1[4];
  int save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetGeometry(temp0, temp1);
      }
    else
      {
      op->vtkPVServerInformation::SetGeometry(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetGeometry(temp0) :
      op->vtkPVServerInformation::GetGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFullScreen(temp0, temp1);
      }
    else
      {
      op->vtkPVServerInformation::SetFullScreen(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetFullScreen(temp0) :
      op->vtkPVServerInformation::GetFullScreen(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetShowBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetShowBorders(temp0, temp1);
      }
    else
      {
      op->vtkPVServerInformation::SetShowBorders(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetShowBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetShowBorders(temp0) :
      op->vtkPVServerInformation::GetShowBorders(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStereoType(temp0) :
      op->vtkPVServerInformation::GetStereoType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetStereoType(temp0, temp1);
      }
    else
      {
      op->vtkPVServerInformation::SetStereoType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetLowerLeft(temp0, temp1);
      }
    else
      {
      op->vtkPVServerInformation::SetLowerLeft(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetLowerLeft(temp0) :
      op->vtkPVServerInformation::GetLowerLeft(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetLowerRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowerRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetLowerRight(temp0, temp1);
      }
    else
      {
      op->vtkPVServerInformation::SetLowerRight(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetLowerRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetLowerRight(temp0) :
      op->vtkPVServerInformation::GetLowerRight(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetUpperRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpperRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetUpperRight(temp0, temp1);
      }
    else
      {
      op->vtkPVServerInformation::SetUpperRight(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetUpperRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetUpperRight(temp0) :
      op->vtkPVServerInformation::GetUpperRight(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses() :
      op->vtkPVServerInformation::GetNumberOfProcesses());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_IsMPIInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMPIInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsMPIInitialized() :
      op->vtkPVServerInformation::IsMPIInitialized());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetMultiClientsEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiClientsEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMultiClientsEnable() :
      op->vtkPVServerInformation::GetMultiClientsEnable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetClientId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClientId() :
      op->vtkPVServerInformation::GetClientId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVServerInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVServerInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVServerInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVServerInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVServerInformation\nC++: vtkPVServerInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVServerInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVServerInformation\nC++: vtkPVServerInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRemoteRendering", PyvtkPVServerInformation_SetRemoteRendering, METH_VARARGS,
   (char*)"V.SetRemoteRendering(int)\nC++: void SetRemoteRendering(int a)\n\nThis flag indicates whether the server can render remotely. If it\nis off, all rendering has to be on the client. This is only off\nwhen the user starts the server with the --disable-composite\ncommand line option.\n"},
  {(char*)"GetRemoteRendering", PyvtkPVServerInformation_GetRemoteRendering, METH_VARARGS,
   (char*)"V.GetRemoteRendering() -> int\nC++: int GetRemoteRendering()\n\nThis flag indicates whether the server can render remotely. If it\nis off, all rendering has to be on the client. This is only off\nwhen the user starts the server with the --disable-composite\ncommand line option.\n"},
  {(char*)"DeepCopy", PyvtkPVServerInformation_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkPVServerInformation)\nC++: void DeepCopy(vtkPVServerInformation *info)\n\n"},
  {(char*)"CopyFromObject", PyvtkPVServerInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\nTransfer information about a single object into this object.\n"},
  {(char*)"AddInformation", PyvtkPVServerInformation_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *)\n\nMerge another information object.\n"},
  {(char*)"CopyToStream", PyvtkPVServerInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkPVServerInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"SetTileDimensions", PyvtkPVServerInformation_SetTileDimensions, METH_VARARGS,
   (char*)"V.SetTileDimensions(int, int)\nC++: void SetTileDimensions(int, int)\nV.SetTileDimensions((int, int))\nC++: void SetTileDimensions(int a[2])\n\n"},
  {(char*)"GetTileDimensions", PyvtkPVServerInformation_GetTileDimensions, METH_VARARGS,
   (char*)"V.GetTileDimensions() -> (int, int)\nC++: int *GetTileDimensions()\n\n"},
  {(char*)"SetTileMullions", PyvtkPVServerInformation_SetTileMullions, METH_VARARGS,
   (char*)"V.SetTileMullions(int, int)\nC++: void SetTileMullions(int, int)\nV.SetTileMullions((int, int))\nC++: void SetTileMullions(int a[2])\n\n"},
  {(char*)"GetTileMullions", PyvtkPVServerInformation_GetTileMullions, METH_VARARGS,
   (char*)"V.GetTileMullions() -> (int, int)\nC++: int *GetTileMullions()\n\n"},
  {(char*)"SetUseOffscreenRendering", PyvtkPVServerInformation_SetUseOffscreenRendering, METH_VARARGS,
   (char*)"V.SetUseOffscreenRendering(int)\nC++: void SetUseOffscreenRendering(int a)\n\nVariable (command line argument) to use offscreen rendering.\n"},
  {(char*)"GetUseOffscreenRendering", PyvtkPVServerInformation_GetUseOffscreenRendering, METH_VARARGS,
   (char*)"V.GetUseOffscreenRendering() -> int\nC++: int GetUseOffscreenRendering()\n\nVariable (command line argument) to use offscreen rendering.\n"},
  {(char*)"SetUseIceT", PyvtkPVServerInformation_SetUseIceT, METH_VARARGS,
   (char*)"V.SetUseIceT(int)\nC++: void SetUseIceT(int a)\n\nReturns 1 if IceT is available.\n"},
  {(char*)"GetUseIceT", PyvtkPVServerInformation_GetUseIceT, METH_VARARGS,
   (char*)"V.GetUseIceT() -> int\nC++: int GetUseIceT()\n\nReturns 1 if IceT is available.\n"},
  {(char*)"SetOGVSupport", PyvtkPVServerInformation_SetOGVSupport, METH_VARARGS,
   (char*)"V.SetOGVSupport(int)\nC++: void SetOGVSupport(int a)\n\nGet/Set if the server supports saving OGVs.\n"},
  {(char*)"GetOGVSupport", PyvtkPVServerInformation_GetOGVSupport, METH_VARARGS,
   (char*)"V.GetOGVSupport() -> int\nC++: int GetOGVSupport()\n\nGet/Set if the server supports saving OGVs.\n"},
  {(char*)"SetAVISupport", PyvtkPVServerInformation_SetAVISupport, METH_VARARGS,
   (char*)"V.SetAVISupport(int)\nC++: void SetAVISupport(int a)\n\nGet/Set if the server supports saving AVIs.\n"},
  {(char*)"GetAVISupport", PyvtkPVServerInformation_GetAVISupport, METH_VARARGS,
   (char*)"V.GetAVISupport() -> int\nC++: int GetAVISupport()\n\nGet/Set if the server supports saving AVIs.\n"},
  {(char*)"SetTimeout", PyvtkPVServerInformation_SetTimeout, METH_VARARGS,
   (char*)"V.SetTimeout(int)\nC++: void SetTimeout(int a)\n\nGet/Set the time after which the server timesout.\n"},
  {(char*)"GetTimeout", PyvtkPVServerInformation_GetTimeout, METH_VARARGS,
   (char*)"V.GetTimeout() -> int\nC++: int GetTimeout()\n\nGet/Set the time after which the server timesout.\n"},
  {(char*)"SetEyeSeparation", PyvtkPVServerInformation_SetEyeSeparation, METH_VARARGS,
   (char*)"V.SetEyeSeparation(float)\nC++: void SetEyeSeparation(double value)\n\nSet/Get the EyeSeparation on server\n"},
  {(char*)"GetEyeSeparation", PyvtkPVServerInformation_GetEyeSeparation, METH_VARARGS,
   (char*)"V.GetEyeSeparation() -> float\nC++: double GetEyeSeparation()\n\nSet/Get the EyeSeparation on server\n"},
  {(char*)"SetNumberOfMachines", PyvtkPVServerInformation_SetNumberOfMachines, METH_VARARGS,
   (char*)"V.SetNumberOfMachines(int)\nC++: void SetNumberOfMachines(unsigned int num)\n\nNumber of machines to use in data or render server Setting the\nnumber of machines has the side effect of wiping out any machine\nparameters previously set.\n"},
  {(char*)"GetNumberOfMachines", PyvtkPVServerInformation_GetNumberOfMachines, METH_VARARGS,
   (char*)"V.GetNumberOfMachines() -> int\nC++: unsigned int GetNumberOfMachines()\n\nNumber of machines to use in data or render server Setting the\nnumber of machines has the side effect of wiping out any machine\nparameters previously set.\n"},
  {(char*)"SetEnvironment", PyvtkPVServerInformation_SetEnvironment, METH_VARARGS,
   (char*)"V.SetEnvironment(int, string)\nC++: void SetEnvironment(unsigned int idx, const char *name)\n\nValue of DISPLAY environment variable for this cave node\n"},
  {(char*)"GetEnvironment", PyvtkPVServerInformation_GetEnvironment, METH_VARARGS,
   (char*)"V.GetEnvironment(int) -> string\nC++: const char *GetEnvironment(unsigned int idx)\n\nValue of DISPLAY environment variable for this cave node\n"},
  {(char*)"SetGeometry", PyvtkPVServerInformation_SetGeometry, METH_VARARGS,
   (char*)"V.SetGeometry(int, [int, int, int, int])\nC++: void SetGeometry(unsigned int idx, int geo[4])\n\nWindow geometry for server, specified as x, y, width, height.\nThis is only used if FullScreen is false.\n"},
  {(char*)"GetGeometry", PyvtkPVServerInformation_GetGeometry, METH_VARARGS,
   (char*)"V.GetGeometry(int) -> (int, ...)\nC++: int *GetGeometry(unsigned int idx)\n\nWindow geometry for server, specified as x, y, width, height.\nThis is only used if FullScreen is false.\n"},
  {(char*)"SetFullScreen", PyvtkPVServerInformation_SetFullScreen, METH_VARARGS,
   (char*)"V.SetFullScreen(int, bool)\nC++: void SetFullScreen(unsigned int idx, bool fullscreen)\n\nWhether to show the server window as fullscreen.\n"},
  {(char*)"GetFullScreen", PyvtkPVServerInformation_GetFullScreen, METH_VARARGS,
   (char*)"V.GetFullScreen(int) -> bool\nC++: bool GetFullScreen(unsigned int idx)\n\nWhether to show the server window as fullscreen.\n"},
  {(char*)"SetShowBorders", PyvtkPVServerInformation_SetShowBorders, METH_VARARGS,
   (char*)"V.SetShowBorders(int, bool)\nC++: void SetShowBorders(unsigned int idx, bool borders)\n\nWhether to show the server window with window decorations.\n"},
  {(char*)"GetShowBorders", PyvtkPVServerInformation_GetShowBorders, METH_VARARGS,
   (char*)"V.GetShowBorders(int) -> bool\nC++: bool GetShowBorders(unsigned int idx)\n\nWhether to show the server window with window decorations.\n"},
  {(char*)"GetStereoType", PyvtkPVServerInformation_GetStereoType, METH_VARARGS,
   (char*)"V.GetStereoType(int) -> int\nC++: int GetStereoType(unsigned int idx)\n\nGet the stereo-type specified in the pvx. -1=no-specified,\n0=no-stereo.\n"},
  {(char*)"SetStereoType", PyvtkPVServerInformation_SetStereoType, METH_VARARGS,
   (char*)"V.SetStereoType(int, int)\nC++: void SetStereoType(unsigned int idx, int type)\n\nGet the stereo-type specified in the pvx. -1=no-specified,\n0=no-stereo.\n"},
  {(char*)"SetLowerLeft", PyvtkPVServerInformation_SetLowerLeft, METH_VARARGS,
   (char*)"V.SetLowerLeft(int, [float, float, float])\nC++: void SetLowerLeft(unsigned int idx, double coord[3])\n\nCoordinates of lower left corner of this cave display\n"},
  {(char*)"GetLowerLeft", PyvtkPVServerInformation_GetLowerLeft, METH_VARARGS,
   (char*)"V.GetLowerLeft(int) -> (float, ...)\nC++: double *GetLowerLeft(unsigned int idx)\n\nCoordinates of lower left corner of this cave display\n"},
  {(char*)"SetLowerRight", PyvtkPVServerInformation_SetLowerRight, METH_VARARGS,
   (char*)"V.SetLowerRight(int, [float, float, float])\nC++: void SetLowerRight(unsigned int idx, double coord[3])\n\nCoordinates of lower right corner of this cave display\n"},
  {(char*)"GetLowerRight", PyvtkPVServerInformation_GetLowerRight, METH_VARARGS,
   (char*)"V.GetLowerRight(int) -> (float, ...)\nC++: double *GetLowerRight(unsigned int idx)\n\nCoordinates of lower right corner of this cave display\n"},
  {(char*)"SetUpperRight", PyvtkPVServerInformation_SetUpperRight, METH_VARARGS,
   (char*)"V.SetUpperRight(int, [float, float, float])\nC++: void SetUpperRight(unsigned int idx, double coord[3])\n\nCoordinates of lower left corner of this cave display\n"},
  {(char*)"GetUpperRight", PyvtkPVServerInformation_GetUpperRight, METH_VARARGS,
   (char*)"V.GetUpperRight(int) -> (float, ...)\nC++: double *GetUpperRight(unsigned int idx)\n\nCoordinates of lower left corner of this cave display\n"},
  {(char*)"GetNumberOfProcesses", PyvtkPVServerInformation_GetNumberOfProcesses, METH_VARARGS,
   (char*)"V.GetNumberOfProcesses() -> int\nC++: int GetNumberOfProcesses()\n\nGet the number of processes.\n"},
  {(char*)"IsMPIInitialized", PyvtkPVServerInformation_IsMPIInitialized, METH_VARARGS,
   (char*)"V.IsMPIInitialized() -> bool\nC++: virtual bool IsMPIInitialized()\n\nReturn whether MPI is initialized or not.\n"},
  {(char*)"GetMultiClientsEnable", PyvtkPVServerInformation_GetMultiClientsEnable, METH_VARARGS,
   (char*)"V.GetMultiClientsEnable() -> int\nC++: int GetMultiClientsEnable()\n\nReturn true if the server allow server client to connect to\nitself\n"},
  {(char*)"GetClientId", PyvtkPVServerInformation_GetClientId, METH_VARARGS,
   (char*)"V.GetClientId() -> int\nC++: int GetClientId()\n\nGet the id that correspond to the current client\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVServerInformation_StaticNew()
{
  return vtkPVServerInformation::New();
}

PyObject *PyVTKClass_vtkPVServerInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVServerInformation_StaticNew,
    PyvtkPVServerInformation_Methods,
    "vtkPVServerInformation", modulename,
    NULL, NULL,
    PyvtkPVServerInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkPVServerInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVServerInformation - Gets features of the server.\n\n",
    "Superclass: vtkPVInformation\n\n",
    "This objects is used by the client to get the features suported by\nthe server. At the moment, server information is only on the root.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVServerInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVServerInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVServerInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

