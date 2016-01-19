// python wrapper for vtkOpenGLExtensionManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLExtensionManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLExtensionManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLExtensionManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkOpenGLExtensionManager_Doc();


static PyObject *
PyvtkOpenGLExtensionManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLExtensionManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLExtensionManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLExtensionManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLExtensionManager::NewInstance());

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
PyvtkOpenGLExtensionManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLExtensionManager *tempr = vtkOpenGLExtensionManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkOpenGLExtensionManager::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetRenderWindow(temp0);
      }
    else
      {
      op->vtkOpenGLExtensionManager::SetRenderWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkOpenGLExtensionManager::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_GetExtensionsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtensionsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetExtensionsString() :
      op->vtkOpenGLExtensionManager::GetExtensionsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_ExtensionSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtensionSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->ExtensionSupported(temp0) :
      op->vtkOpenGLExtensionManager::ExtensionSupported(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_LoadExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->LoadExtension(temp0);
      }
    else
      {
      op->vtkOpenGLExtensionManager::LoadExtension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_LoadSupportedExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadSupportedExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->LoadSupportedExtension(temp0) :
      op->vtkOpenGLExtensionManager::LoadSupportedExtension(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_LoadCorePromotedExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCorePromotedExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->LoadCorePromotedExtension(temp0);
      }
    else
      {
      op->vtkOpenGLExtensionManager::LoadCorePromotedExtension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_LoadAsARBExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadAsARBExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->LoadAsARBExtension(temp0);
      }
    else
      {
      op->vtkOpenGLExtensionManager::LoadAsARBExtension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_GetDriverVersionMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDriverVersionMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDriverVersionMajor() :
      op->vtkOpenGLExtensionManager::GetDriverVersionMajor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_GetDriverVersionMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDriverVersionMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDriverVersionMinor() :
      op->vtkOpenGLExtensionManager::GetDriverVersionMinor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_GetDriverVersionPatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDriverVersionPatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDriverVersionPatch() :
      op->vtkOpenGLExtensionManager::GetDriverVersionPatch());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_GetDriverGLVersionMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDriverGLVersionMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDriverGLVersionMajor() :
      op->vtkOpenGLExtensionManager::GetDriverGLVersionMajor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_GetDriverGLVersionMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDriverGLVersionMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDriverGLVersionMinor() :
      op->vtkOpenGLExtensionManager::GetDriverGLVersionMinor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_GetDriverGLVersionPatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDriverGLVersionPatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDriverGLVersionPatch() :
      op->vtkOpenGLExtensionManager::GetDriverGLVersionPatch());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_DriverIsATI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverIsATI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverIsATI() :
      op->vtkOpenGLExtensionManager::DriverIsATI());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_DriverIsNvidia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverIsNvidia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverIsNvidia() :
      op->vtkOpenGLExtensionManager::DriverIsNvidia());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_DriverIsIntel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverIsIntel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverIsIntel() :
      op->vtkOpenGLExtensionManager::DriverIsIntel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_DriverIsMesa(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverIsMesa");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverIsMesa() :
      op->vtkOpenGLExtensionManager::DriverIsMesa());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_DriverIsMicrosoft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverIsMicrosoft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverIsMicrosoft() :
      op->vtkOpenGLExtensionManager::DriverIsMicrosoft());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_DriverVersionIs_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverVersionIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverVersionIs(temp0) :
      op->vtkOpenGLExtensionManager::DriverVersionIs(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOpenGLExtensionManager_DriverVersionIs_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverVersionIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverVersionIs(temp0, temp1) :
      op->vtkOpenGLExtensionManager::DriverVersionIs(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOpenGLExtensionManager_DriverVersionIs_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverVersionIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverVersionIs(temp0, temp1, temp2) :
      op->vtkOpenGLExtensionManager::DriverVersionIs(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOpenGLExtensionManager_DriverVersionIs(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkOpenGLExtensionManager_DriverVersionIs_s1(self, args);
    case 2:
      return PyvtkOpenGLExtensionManager_DriverVersionIs_s2(self, args);
    case 3:
      return PyvtkOpenGLExtensionManager_DriverVersionIs_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DriverVersionIs");
  return NULL;
}



static PyObject *
PyvtkOpenGLExtensionManager_DriverVersionAtLeast_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverVersionAtLeast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverVersionAtLeast(temp0) :
      op->vtkOpenGLExtensionManager::DriverVersionAtLeast(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOpenGLExtensionManager_DriverVersionAtLeast_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverVersionAtLeast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverVersionAtLeast(temp0, temp1) :
      op->vtkOpenGLExtensionManager::DriverVersionAtLeast(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOpenGLExtensionManager_DriverVersionAtLeast_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverVersionAtLeast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverVersionAtLeast(temp0, temp1, temp2) :
      op->vtkOpenGLExtensionManager::DriverVersionAtLeast(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOpenGLExtensionManager_DriverVersionAtLeast(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkOpenGLExtensionManager_DriverVersionAtLeast_s1(self, args);
    case 2:
      return PyvtkOpenGLExtensionManager_DriverVersionAtLeast_s2(self, args);
    case 3:
      return PyvtkOpenGLExtensionManager_DriverVersionAtLeast_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DriverVersionAtLeast");
  return NULL;
}



static PyObject *
PyvtkOpenGLExtensionManager_DriverGLVersionIs_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverGLVersionIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverGLVersionIs(temp0, temp1, temp2) :
      op->vtkOpenGLExtensionManager::DriverGLVersionIs(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOpenGLExtensionManager_DriverGLVersionIs_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverGLVersionIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverGLVersionIs(temp0, temp1) :
      op->vtkOpenGLExtensionManager::DriverGLVersionIs(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOpenGLExtensionManager_DriverGLVersionIs(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkOpenGLExtensionManager_DriverGLVersionIs_s1(self, args);
    case 2:
      return PyvtkOpenGLExtensionManager_DriverGLVersionIs_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DriverGLVersionIs");
  return NULL;
}



static PyObject *
PyvtkOpenGLExtensionManager_DriverGLRendererIs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverGLRendererIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverGLRendererIs(temp0) :
      op->vtkOpenGLExtensionManager::DriverGLRendererIs(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_DriverGLRendererHas(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverGLRendererHas");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverGLRendererHas(temp0) :
      op->vtkOpenGLExtensionManager::DriverGLRendererHas(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_DriverGLRendererHasToken(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverGLRendererHasToken");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverGLRendererHasToken(temp0) :
      op->vtkOpenGLExtensionManager::DriverGLRendererHasToken(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_DriverGLRendererIsOSMesa(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DriverGLRendererIsOSMesa");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->DriverGLRendererIsOSMesa() :
      op->vtkOpenGLExtensionManager::DriverGLRendererIsOSMesa());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_GetDriverGLVendor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDriverGLVendor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDriverGLVendor() :
      op->vtkOpenGLExtensionManager::GetDriverGLVendor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_GetDriverGLVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDriverGLVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDriverGLVersion() :
      op->vtkOpenGLExtensionManager::GetDriverGLVersion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_GetDriverGLRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDriverGLRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDriverGLRenderer() :
      op->vtkOpenGLExtensionManager::GetDriverGLRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_GetIgnoreDriverBugs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreDriverBugs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIgnoreDriverBugs(temp0) :
      op->vtkOpenGLExtensionManager::GetIgnoreDriverBugs(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_SetIgnoreDriverBugs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreDriverBugs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIgnoreDriverBugs(temp0);
      }
    else
      {
      op->vtkOpenGLExtensionManager::SetIgnoreDriverBugs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_IgnoreDriverBugsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreDriverBugsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IgnoreDriverBugsOn();
      }
    else
      {
      op->vtkOpenGLExtensionManager::IgnoreDriverBugsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_IgnoreDriverBugsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreDriverBugsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IgnoreDriverBugsOff();
      }
    else
      {
      op->vtkOpenGLExtensionManager::IgnoreDriverBugsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLExtensionManager_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLExtensionManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLExtensionManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLExtensionManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLExtensionManager\nC++: vtkOpenGLExtensionManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLExtensionManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLExtensionManager\nC++: vtkOpenGLExtensionManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetRenderWindow", PyvtkOpenGLExtensionManager_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nSet/Get the render window to query extensions on.  If set to\nnull, justs queries the current render window.\n"},
  {(char*)"SetRenderWindow", PyvtkOpenGLExtensionManager_SetRenderWindow, METH_VARARGS,
   (char*)"V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *renwin)\n\nSet/Get the render window to query extensions on.  If set to\nnull, justs queries the current render window.\n"},
  {(char*)"Update", PyvtkOpenGLExtensionManager_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nUpdates the extensions string.\n"},
  {(char*)"GetExtensionsString", PyvtkOpenGLExtensionManager_GetExtensionsString, METH_VARARGS,
   (char*)"V.GetExtensionsString() -> string\nC++: char *GetExtensionsString()\n\nReturns a string listing all available extensions.  Call Update\nfirst to validate this string.\n"},
  {(char*)"ExtensionSupported", PyvtkOpenGLExtensionManager_ExtensionSupported, METH_VARARGS,
   (char*)"V.ExtensionSupported(string) -> int\nC++: virtual int ExtensionSupported(const char *name)\n\nReturns true if the extension is supported, false otherwise.\n"},
  {(char*)"LoadExtension", PyvtkOpenGLExtensionManager_LoadExtension, METH_VARARGS,
   (char*)"V.LoadExtension(string)\nC++: virtual void LoadExtension(const char *name)\n\nLoads all the functions associated with the given extension into\nthe appropriate static members of vtkgl. This method emits a\nwarning if the requested extension is not supported. It emits an\nerror if the extension does not load successfully.\n"},
  {(char*)"LoadSupportedExtension", PyvtkOpenGLExtensionManager_LoadSupportedExtension, METH_VARARGS,
   (char*)"V.LoadSupportedExtension(string) -> int\nC++: virtual int LoadSupportedExtension(const char *name)\n\nReturns true if the extension is supported and loaded\nsuccessfully, false otherwise. This method will \"fail\nsilently/gracefully\" if the extension is not supported or does\nnot load properly. It emits neither warnings nor errors. It is up\nto the caller to determine if the extension loaded properly by\npaying attention to the return value.\n"},
  {(char*)"LoadCorePromotedExtension", PyvtkOpenGLExtensionManager_LoadCorePromotedExtension, METH_VARARGS,
   (char*)"V.LoadCorePromotedExtension(string)\nC++: virtual void LoadCorePromotedExtension(const char *name)\n\nLoads all the functions associated with the given core-promoted\nextension into the appropriate static members of vtkgl associated\nwith the OpenGL version that promoted the extension as a core\nfeature. This method emits a warning if the requested extension\nis not supported. It emits an error if the extension does not\nload successfully.\n\nFor instance, extension GL_ARB_multitexture was promoted as a\ncore feature into OpenGL 1.3. An implementation that uses this\nfeature has to (IN THIS ORDER), check if OpenGL 1.3 is supported\nwith ExtensionSupported(\"GL_VERSION_1_3\"), if true, load the\nextension with LoadExtension(\"GL_VERSION_1_3\"). If false, test\nfor the extension with\nExtensionSupported(\"GL_ARB_multitexture\"),if true load the\nextension with this method\nLoadCorePromotedExtension(\"GL_ARB_multitexture\"). If any of those\nloading stage succeeded, use vtgl::ActiveTexture() in any case,\nNOT vtgl::ActiveTextureARB(). This method avoids the use of if\nstatements everywhere in implementations using core-promoted\nextensions. Without this method, the implementation code should\nlook like:int\nopengl_1_3=extensions->ExtensionSupported(\"GL_VERSION_1_3\");\nif(opengl_1_3)\n{\n  extensions->LoadExtension(\"GL_VERSION_1_3\");\n}\nelse\n{\n if(extensions->ExtensionSupported(\"GL_ARB_multitexture\"))\n {\n  extensions->LoadCorePromotedExtension(\"GL_ARB_multitexture\");\n }\n else\n {\n  vtkErrorMacro(\"Required multitexture feature is not\nsupported!\");\n }\n}\n...\nif(opengl_1_3)\n{\n vtkgl::ActiveTexture(vtkgl::TEXTURE0)\n}\nelse\n{\n vtkgl::ActiveTextureARB(vtkgl::TEXTURE0_ARB)\n}\nThanks to this method, the code looks like:int\nopengl_1_3=extensions->ExtensionSupported(\"GL_VERSION_1_3\");\nif(opengl_1_3)\n{\n  extensions->LoadExtension(\"GL_VERSION_1_3\");\n}\nelse\n{\n if(extensions->ExtensionSupported(\"GL_ARB_multitexture\"))\n {\n  extensions->LoadCorePromotedExtension(\" ...\n [Truncated]\n"},
  {(char*)"LoadAsARBExtension", PyvtkOpenGLExtensionManager_LoadAsARBExtension, METH_VARARGS,
   (char*)"V.LoadAsARBExtension(string)\nC++: virtual void LoadAsARBExtension(const char *name)\n\nSimilar to LoadCorePromotedExtension(). It loads an EXT extension\ninto the pointers of its ARB equivalent.\n"},
  {(char*)"GetDriverVersionMajor", PyvtkOpenGLExtensionManager_GetDriverVersionMajor, METH_VARARGS,
   (char*)"V.GetDriverVersionMajor() -> int\nC++: virtual int GetDriverVersionMajor()\n\nReturn the driver's version parts. This may be used for fine\ngrained feature testing.\n"},
  {(char*)"GetDriverVersionMinor", PyvtkOpenGLExtensionManager_GetDriverVersionMinor, METH_VARARGS,
   (char*)"V.GetDriverVersionMinor() -> int\nC++: virtual int GetDriverVersionMinor()\n\nReturn the driver's version parts. This may be used for fine\ngrained feature testing.\n"},
  {(char*)"GetDriverVersionPatch", PyvtkOpenGLExtensionManager_GetDriverVersionPatch, METH_VARARGS,
   (char*)"V.GetDriverVersionPatch() -> int\nC++: virtual int GetDriverVersionPatch()\n\nReturn the driver's version parts. This may be used for fine\ngrained feature testing.\n"},
  {(char*)"GetDriverGLVersionMajor", PyvtkOpenGLExtensionManager_GetDriverGLVersionMajor, METH_VARARGS,
   (char*)"V.GetDriverGLVersionMajor() -> int\nC++: virtual int GetDriverGLVersionMajor()\n\nGet GL API version that the driver provides. This is often\ndifferent than the GL version that VTK recognizes so only use\nthis for identifying a specific driver.\n"},
  {(char*)"GetDriverGLVersionMinor", PyvtkOpenGLExtensionManager_GetDriverGLVersionMinor, METH_VARARGS,
   (char*)"V.GetDriverGLVersionMinor() -> int\nC++: virtual int GetDriverGLVersionMinor()\n\nGet GL API version that the driver provides. This is often\ndifferent than the GL version that VTK recognizes so only use\nthis for identifying a specific driver.\n"},
  {(char*)"GetDriverGLVersionPatch", PyvtkOpenGLExtensionManager_GetDriverGLVersionPatch, METH_VARARGS,
   (char*)"V.GetDriverGLVersionPatch() -> int\nC++: virtual int GetDriverGLVersionPatch()\n\nGet GL API version that the driver provides. This is often\ndifferent than the GL version that VTK recognizes so only use\nthis for identifying a specific driver.\n"},
  {(char*)"DriverIsATI", PyvtkOpenGLExtensionManager_DriverIsATI, METH_VARARGS,
   (char*)"V.DriverIsATI() -> bool\nC++: virtual bool DriverIsATI()\n\nTest's for common implementors of rendering drivers. This may be\nused for fine grained feature testing. Note: DriverIsMesa\nsucceeds for OS Mesa, use DriverGLRendererIsOSMessa to\ndifferentiate.\n"},
  {(char*)"DriverIsNvidia", PyvtkOpenGLExtensionManager_DriverIsNvidia, METH_VARARGS,
   (char*)"V.DriverIsNvidia() -> bool\nC++: virtual bool DriverIsNvidia()\n\nTest's for common implementors of rendering drivers. This may be\nused for fine grained feature testing. Note: DriverIsMesa\nsucceeds for OS Mesa, use DriverGLRendererIsOSMessa to\ndifferentiate.\n"},
  {(char*)"DriverIsIntel", PyvtkOpenGLExtensionManager_DriverIsIntel, METH_VARARGS,
   (char*)"V.DriverIsIntel() -> bool\nC++: virtual bool DriverIsIntel()\n\nTest's for common implementors of rendering drivers. This may be\nused for fine grained feature testing. Note: DriverIsMesa\nsucceeds for OS Mesa, use DriverGLRendererIsOSMessa to\ndifferentiate.\n"},
  {(char*)"DriverIsMesa", PyvtkOpenGLExtensionManager_DriverIsMesa, METH_VARARGS,
   (char*)"V.DriverIsMesa() -> bool\nC++: virtual bool DriverIsMesa()\n\nTest's for common implementors of rendering drivers. This may be\nused for fine grained feature testing. Note: DriverIsMesa\nsucceeds for OS Mesa, use DriverGLRendererIsOSMessa to\ndifferentiate.\n"},
  {(char*)"DriverIsMicrosoft", PyvtkOpenGLExtensionManager_DriverIsMicrosoft, METH_VARARGS,
   (char*)"V.DriverIsMicrosoft() -> bool\nC++: virtual bool DriverIsMicrosoft()\n\nTest's for common implementors of rendering drivers. This may be\nused for fine grained feature testing. Note: DriverIsMesa\nsucceeds for OS Mesa, use DriverGLRendererIsOSMessa to\ndifferentiate.\n"},
  {(char*)"DriverVersionIs", PyvtkOpenGLExtensionManager_DriverVersionIs, METH_VARARGS,
   (char*)"V.DriverVersionIs(int) -> bool\nC++: virtual bool DriverVersionIs(int major)\nV.DriverVersionIs(int, int) -> bool\nC++: virtual bool DriverVersionIs(int major, int minor)\nV.DriverVersionIs(int, int, int) -> bool\nC++: virtual bool DriverVersionIs(int major, int minor, int patch)\n\nTest for a specific driver version.\n"},
  {(char*)"DriverVersionAtLeast", PyvtkOpenGLExtensionManager_DriverVersionAtLeast, METH_VARARGS,
   (char*)"V.DriverVersionAtLeast(int) -> bool\nC++: virtual bool DriverVersionAtLeast(int major)\nV.DriverVersionAtLeast(int, int) -> bool\nC++: virtual bool DriverVersionAtLeast(int major, int minor)\nV.DriverVersionAtLeast(int, int, int) -> bool\nC++: virtual bool DriverVersionAtLeast(int major, int minor,\n    int patch)\n\nTest for driver version greater than or equal to the named\nversion.\n"},
  {(char*)"DriverGLVersionIs", PyvtkOpenGLExtensionManager_DriverGLVersionIs, METH_VARARGS,
   (char*)"V.DriverGLVersionIs(int, int, int) -> bool\nC++: virtual bool DriverGLVersionIs(int major, int minor,\n    int patch)\nV.DriverGLVersionIs(int, int) -> bool\nC++: virtual bool DriverGLVersionIs(int major, int minor)\n\nTest for the driver's GL version as reported in its GL_VERSION\nstring. This is intended for driver identification only, use\nExtensionSuppported to test for VTK support of a specific GL\nversion.\n"},
  {(char*)"DriverGLRendererIs", PyvtkOpenGLExtensionManager_DriverGLRendererIs, METH_VARARGS,
   (char*)"V.DriverGLRendererIs(string) -> bool\nC++: virtual bool DriverGLRendererIs(const char *str)\n\nTest for a specific renderer. This could be used in some cases to\nidentify the graphics card or specific driver. Use HasToken to\nprevent false matches eg. avoid GeForce4 matching GeForce400\n"},
  {(char*)"DriverGLRendererHas", PyvtkOpenGLExtensionManager_DriverGLRendererHas, METH_VARARGS,
   (char*)"V.DriverGLRendererHas(string) -> bool\nC++: virtual bool DriverGLRendererHas(const char *str)\n\nTest for a specific renderer. This could be used in some cases to\nidentify the graphics card or specific driver. Use HasToken to\nprevent false matches eg. avoid GeForce4 matching GeForce400\n"},
  {(char*)"DriverGLRendererHasToken", PyvtkOpenGLExtensionManager_DriverGLRendererHasToken, METH_VARARGS,
   (char*)"V.DriverGLRendererHasToken(string) -> bool\nC++: virtual bool DriverGLRendererHasToken(const char *str)\n\nTest for a specific renderer. This could be used in some cases to\nidentify the graphics card or specific driver. Use HasToken to\nprevent false matches eg. avoid GeForce4 matching GeForce400\n"},
  {(char*)"DriverGLRendererIsOSMesa", PyvtkOpenGLExtensionManager_DriverGLRendererIsOSMesa, METH_VARARGS,
   (char*)"V.DriverGLRendererIsOSMesa() -> bool\nC++: virtual bool DriverGLRendererIsOSMesa()\n\nTest for Mesa's offscreen renderer.\n"},
  {(char*)"GetDriverGLVendor", PyvtkOpenGLExtensionManager_GetDriverGLVendor, METH_VARARGS,
   (char*)"V.GetDriverGLVendor() -> string\nC++: virtual const char *GetDriverGLVendor()\n\nGet the OpenGL version, vendor and renderer strings. These can be\nused to idnetify a specific driver.\n"},
  {(char*)"GetDriverGLVersion", PyvtkOpenGLExtensionManager_GetDriverGLVersion, METH_VARARGS,
   (char*)"V.GetDriverGLVersion() -> string\nC++: virtual const char *GetDriverGLVersion()\n\nGet the OpenGL version, vendor and renderer strings. These can be\nused to idnetify a specific driver.\n"},
  {(char*)"GetDriverGLRenderer", PyvtkOpenGLExtensionManager_GetDriverGLRenderer, METH_VARARGS,
   (char*)"V.GetDriverGLRenderer() -> string\nC++: virtual const char *GetDriverGLRenderer()\n\nGet the OpenGL version, vendor and renderer strings. These can be\nused to idnetify a specific driver.\n"},
  {(char*)"GetIgnoreDriverBugs", PyvtkOpenGLExtensionManager_GetIgnoreDriverBugs, METH_VARARGS,
   (char*)"V.GetIgnoreDriverBugs(string) -> bool\nC++: bool GetIgnoreDriverBugs(const char *description)\n\nWhen set known driver bugs are ignored during driver feature\ndetection. This is used to evaluate the status of a new driver\nrelease to see if the bugs have been fixed. The function takes a\ndescription argument which, is sent to VTK's warning stream when\nthe ignore flag is set. This makes the test output searchable for\ntests which have problems with certain drivers. The CMakeLists\nvariable VTK_IGNORE_GLDRIVER_BUGS can be used to set this at\nbuild time. Default OFF.\n"},
  {(char*)"SetIgnoreDriverBugs", PyvtkOpenGLExtensionManager_SetIgnoreDriverBugs, METH_VARARGS,
   (char*)"V.SetIgnoreDriverBugs(bool)\nC++: void SetIgnoreDriverBugs(bool a)\n\nWhen set known driver bugs are ignored during driver feature\ndetection. This is used to evaluate the status of a new driver\nrelease to see if the bugs have been fixed. The function takes a\ndescription argument which, is sent to VTK's warning stream when\nthe ignore flag is set. This makes the test output searchable for\ntests which have problems with certain drivers. The CMakeLists\nvariable VTK_IGNORE_GLDRIVER_BUGS can be used to set this at\nbuild time. Default OFF.\n"},
  {(char*)"IgnoreDriverBugsOn", PyvtkOpenGLExtensionManager_IgnoreDriverBugsOn, METH_VARARGS,
   (char*)"V.IgnoreDriverBugsOn()\nC++: void IgnoreDriverBugsOn()\n\nWhen set known driver bugs are ignored during driver feature\ndetection. This is used to evaluate the status of a new driver\nrelease to see if the bugs have been fixed. The function takes a\ndescription argument which, is sent to VTK's warning stream when\nthe ignore flag is set. This makes the test output searchable for\ntests which have problems with certain drivers. The CMakeLists\nvariable VTK_IGNORE_GLDRIVER_BUGS can be used to set this at\nbuild time. Default OFF.\n"},
  {(char*)"IgnoreDriverBugsOff", PyvtkOpenGLExtensionManager_IgnoreDriverBugsOff, METH_VARARGS,
   (char*)"V.IgnoreDriverBugsOff()\nC++: void IgnoreDriverBugsOff()\n\nWhen set known driver bugs are ignored during driver feature\ndetection. This is used to evaluate the status of a new driver\nrelease to see if the bugs have been fixed. The function takes a\ndescription argument which, is sent to VTK's warning stream when\nthe ignore flag is set. This makes the test output searchable for\ntests which have problems with certain drivers. The CMakeLists\nvariable VTK_IGNORE_GLDRIVER_BUGS can be used to set this at\nbuild time. Default OFF.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLExtensionManager_StaticNew()
{
  return vtkOpenGLExtensionManager::New();
}

PyObject *PyVTKClass_vtkOpenGLExtensionManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLExtensionManager_StaticNew,
    PyvtkOpenGLExtensionManager_Methods,
    "vtkOpenGLExtensionManager", modulename,
    NULL, NULL,
    PyvtkOpenGLExtensionManager_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkOpenGLExtensionManager_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLExtensionManager - Interface class for querying and using\nOpenGL extensions.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkOpenGLExtensionManager acts as an interface to OpenGL extensions. \nIt provides methods to query OpenGL extensions on the current or a\ngiven render window and to load extension function pointers. \nCurrently does not support GLU extensions since the GLU library is\nnot linked to VTK.\n\nBefore using vtkOpenGLExtensionManager, an OpenGL context must be\ncreated. This is generally done with a vtkRender",
    "Window.  Note that\nsimply creating the vtkRenderWindow is not sufficient.  Usually you\nhave to call Render before the actual OpenGL context is created.  You\ncan specify the RenderWindow with the SetRenderWindow\nmethod.vtkOpenGLExtensionManager *extensions =\nvtkOpenGLExtensionManager::New();\nextensions->SetRenderWindow(renwin);\nIf no vtkRenderWindow is specified, the current OpenGL context (if\nany)",
    " is used.\n\nGenerally speaking, when using OpenGL extensions, you will need an\nvtkOpenGLExtensionManager and the prototypes defined in\nvtkgl.h.#include \"vtkOpenGLExtensionManager.h\"\n#include \"vtkgl.h\"\nThe vtkgl.h include file contains all the constants and function\n    pointers required for using OpenGL extensions in a portable and\n    namespace safe way.  vtkgl.h is built from parsed glext.h,\n    ",
    "glxext.h, and wglext.h files.  Snapshots of these files are\n    distributed with VTK, but you can also set CMake options to use\n    other files.\n\nTo use an OpenGL extension, you first need to make an instance of\nvtkOpenGLExtensionManager and give it a vtkRenderWindow.  You can\nthen query the vtkOpenGLExtensionManager to see if the extension is\nsupported with the ExtensionSupported method.  Valid n",
    "ames for\nextensions are given in the OpenGL extension registry at\nhttp://www.opengl.org/registry/ . You can also grep vtkgl.h (which\nwill be in the binary build directory if VTK is not installed) for\nappropriate names.  There are also special extensions GL_VERSION_X_X\n(where X_X is replaced with a major and minor version, respectively)\nwhich contain all the constants and functions for OpenGL versi",
    "ons for\nwhich the gl.h header file is of an older version than the driver.\n\nif (   !extensions->ExtensionSupported(\"GL_VERSION_1_2\")\n    || !extensions->ExtensionSupported(\"GL_ARB_multitexture\") ) {\n  {\n  vtkErrorMacro(\"Required extensions not supported!\");\n  }\n\nOnce you have verified that the extensions you want exist, before you\nuse them you have to load them with the LoadExtension method.\n\nexte",
    "nsions->LoadExtension(\"GL_VERSION_1_2\");\nextensions->LoadExtension(\"GL_ARB_multitexture\");\n\nAlternatively, you can use the LoadSupportedExtension method, which\nchecks whether the requested extension is supported and, if so, loads\nit. The LoadSupportedExtension method will not raise any errors or\nwarnings if it fails, so it is important for callers to pay attention\nto the return value.\n\nif (   exte",
    "nsions->LoadSupportedExtension(\"GL_VERSION_1_2\")\n    && extensions->LoadSupportedExtension(\"GL_ARB_multitexture\") ) {\n  {\n  vtkgl::ActiveTexture(vtkgl::TEXTURE0_ARB);\n  }\nelse\n  {\n  vtkErrorMacro(\"Required extensions could not be loaded!\");\n  }\n\nOnce you have queried and loaded all of the extensions you need, you\ncan delete the vtkOpenGLExtensionManager.  To use a constant of an\nextension, simply ",
    "replace the \"GL_\" prefix with \"vtkgl::\".  Likewise,\nreplace the \"gl\" prefix of functions with \"vtkgl::\".  In rare cases,\nan extension will add a type. In this case, add vtkgl:: to the type\n(i.e. vtkgl::GLchar).\n\nextensions->Delete();\n...\nvtkgl::ActiveTexture(vtkgl::TEXTURE0_ARB);\n\nFor wgl extensions, replace the \"WGL_\" and \"wgl\" prefixes with\n\"vtkwgl::\".  For glX extensions, replace the \"GLX_\" and",
    " \"glX\"\nprefixes with \"vtkglX::\".\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLExtensionManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLExtensionManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLExtensionManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

