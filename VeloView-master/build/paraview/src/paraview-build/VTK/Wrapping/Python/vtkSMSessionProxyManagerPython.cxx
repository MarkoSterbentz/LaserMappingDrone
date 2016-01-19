// python wrapper for vtkSMSessionProxyManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkSMSessionProxyManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMSessionProxyManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMSessionProxyManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMSessionObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMSessionObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMSessionObjectNew
#endif

static const char **PyvtkSMSessionProxyManager_Doc();


static PyObject *
PyvtkSMSessionProxyManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMSessionProxyManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSessionProxyManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSessionProxyManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSessionProxyManager::NewInstance());

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
PyvtkSMSessionProxyManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMSessionProxyManager *tempr = vtkSMSessionProxyManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetReservedGlobalID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetReservedGlobalID");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    unsigned int tempr = vtkSMSessionProxyManager::GetReservedGlobalID();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_NewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->NewProxy(temp0, temp1, temp2) :
      op->vtkSMSessionProxyManager::NewProxy(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetProxyDocumentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDocumentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkSMDocumentation *tempr = (ap.IsBound() ?
      op->GetProxyDocumentation(temp0, temp1) :
      op->vtkSMSessionProxyManager::GetProxyDocumentation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetPropertyDocumentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyDocumentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkSMDocumentation *tempr = (ap.IsBound() ?
      op->GetPropertyDocumentation(temp0, temp1, temp2) :
      op->vtkSMSessionProxyManager::GetPropertyDocumentation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_RegisterProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkSMProxy *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->RegisterProxy(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMSessionProxyManager::RegisterProxy(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_RegisterProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->RegisterProxy(temp0, temp1) :
      op->vtkSMSessionProxyManager::RegisterProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_RegisterProxy(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSMSessionProxyManager_RegisterProxy_s1(self, args);
    case 2:
      return PyvtkSMSessionProxyManager_RegisterProxy_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RegisterProxy");
  return NULL;
}



static PyObject *
PyvtkSMSessionProxyManager_GetProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0, temp1) :
      op->vtkSMSessionProxyManager::GetProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_GetProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0) :
      op->vtkSMSessionProxyManager::GetProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_GetProxy(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMSessionProxyManager_GetProxy_s1(self, args);
    case 1:
      return PyvtkSMSessionProxyManager_GetProxy_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetProxy");
  return NULL;
}



static PyObject *
PyvtkSMSessionProxyManager_GetProxies_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkCollection *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->GetProxies(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMSessionProxyManager::GetProxies(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_GetProxies_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  vtkCollection *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->GetProxies(temp0, temp1);
      }
    else
      {
      op->vtkSMSessionProxyManager::GetProxies(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_GetProxies(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSMSessionProxyManager_GetProxies_s1(self, args);
    case 2:
      return PyvtkSMSessionProxyManager_GetProxies_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetProxies");
  return NULL;
}



static PyObject *
PyvtkSMSessionProxyManager_GetPrototypeProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrototypeProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetPrototypeProxy(temp0, temp1) :
      op->vtkSMSessionProxyManager::GetPrototypeProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetNumberOfProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProxies(temp0) :
      op->vtkSMSessionProxyManager::GetNumberOfProxies(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetProxyName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0, temp1) :
      op->vtkSMSessionProxyManager::GetProxyName(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_GetProxyName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0, temp1) :
      op->vtkSMSessionProxyManager::GetProxyName(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSessionProxyManager_GetProxyName_Methods[] = {
  {NULL, PyvtkSMSessionProxyManager_GetProxyName_s1, METH_VARARGS,
   (char*)"@zI"},
  {NULL, PyvtkSMSessionProxyManager_GetProxyName_s2, METH_VARARGS,
   (char*)"@zO *vtkSMProxy"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMSessionProxyManager_GetProxyName(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSessionProxyManager_GetProxyName_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetProxyName");
  return NULL;
}



static PyObject *
PyvtkSMSessionProxyManager_GetProxyNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  vtkStringList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetVTKObject(temp2, "vtkStringList"))
    {
    if (ap.IsBound())
      {
      op->GetProxyNames(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMSessionProxyManager::GetProxyNames(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetUniqueProxyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniqueProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetUniqueProxyName(temp0, temp1) :
      op->vtkSMSessionProxyManager::GetUniqueProxyName(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_IsProxyInGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsProxyInGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->IsProxyInGroup(temp0, temp1) :
      op->vtkSMSessionProxyManager::IsProxyInGroup(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UnRegisterProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkSMProxy *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->UnRegisterProxy(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMSessionProxyManager::UnRegisterProxy(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_UnRegisterProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnRegisterProxy(temp0);
      }
    else
      {
      op->vtkSMSessionProxyManager::UnRegisterProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_UnRegisterProxy_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->UnRegisterProxy(temp0);
      }
    else
      {
      op->vtkSMSessionProxyManager::UnRegisterProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSessionProxyManager_UnRegisterProxy_Methods[] = {
  {NULL, PyvtkSMSessionProxyManager_UnRegisterProxy_s2, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkSMSessionProxyManager_UnRegisterProxy_s3, METH_VARARGS,
   (char*)"@O *vtkSMProxy"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMSessionProxyManager_UnRegisterProxy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSessionProxyManager_UnRegisterProxy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSMSessionProxyManager_UnRegisterProxy_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UnRegisterProxy");
  return NULL;
}



static PyObject *
PyvtkSMSessionProxyManager_UnRegisterProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnRegisterProxies();
      }
    else
      {
      op->vtkSMSessionProxyManager::UnRegisterProxies();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UpdateRegisteredProxies_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateRegisteredProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  int temp1 = 1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->UpdateRegisteredProxies(temp0, temp1);
      }
    else
      {
      op->vtkSMSessionProxyManager::UpdateRegisteredProxies(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_UpdateRegisteredProxies_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateRegisteredProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  int temp0 = 1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      op->UpdateRegisteredProxies(temp0);
      }
    else
      {
      op->vtkSMSessionProxyManager::UpdateRegisteredProxies(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSessionProxyManager_UpdateRegisteredProxies_Methods[] = {
  {NULL, PyvtkSMSessionProxyManager_UpdateRegisteredProxies_s1, METH_VARARGS,
   (char*)"@z|i"},
  {NULL, PyvtkSMSessionProxyManager_UpdateRegisteredProxies_s2, METH_VARARGS,
   (char*)"@|i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMSessionProxyManager_UpdateRegisteredProxies(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSessionProxyManager_UpdateRegisteredProxies_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMSessionProxyManager_UpdateRegisteredProxies_s1(self, args);
    case 0:
      return PyvtkSMSessionProxyManager_UpdateRegisteredProxies_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateRegisteredProxies");
  return NULL;
}



static PyObject *
PyvtkSMSessionProxyManager_UpdateRegisteredProxiesInOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateRegisteredProxiesInOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  int temp0 = 1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      op->UpdateRegisteredProxiesInOrder(temp0);
      }
    else
      {
      op->vtkSMSessionProxyManager::UpdateRegisteredProxiesInOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UpdateProxyInOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateProxyInOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->UpdateProxyInOrder(temp0);
      }
    else
      {
      op->vtkSMSessionProxyManager::UpdateProxyInOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetNumberOfLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLinks() :
      op->vtkSMSessionProxyManager::GetNumberOfLinks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetLinkName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetLinkName(temp0) :
      op->vtkSMSessionProxyManager::GetLinkName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_RegisterLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  vtkSMLink *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMLink"))
    {
    if (ap.IsBound())
      {
      op->RegisterLink(temp0, temp1);
      }
    else
      {
      op->vtkSMSessionProxyManager::RegisterLink(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UnRegisterLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnRegisterLink(temp0);
      }
    else
      {
      op->vtkSMSessionProxyManager::UnRegisterLink(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetRegisteredLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegisteredLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMLink *tempr = (ap.IsBound() ?
      op->GetRegisteredLink(temp0) :
      op->vtkSMSessionProxyManager::GetRegisteredLink(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UnRegisterAllLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterAllLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnRegisterAllLinks();
      }
    else
      {
      op->vtkSMSessionProxyManager::UnRegisterAllLinks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_RegisterCustomProxyDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterCustomProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkPVXMLElement *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPVXMLElement"))
    {
    if (ap.IsBound())
      {
      op->RegisterCustomProxyDefinition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMSessionProxyManager::RegisterCustomProxyDefinition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UnRegisterCustomProxyDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterCustomProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->UnRegisterCustomProxyDefinition(temp0, temp1);
      }
    else
      {
      op->vtkSMSessionProxyManager::UnRegisterCustomProxyDefinition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UnRegisterCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnRegisterCustomProxyDefinitions();
      }
    else
      {
      op->vtkSMSessionProxyManager::UnRegisterCustomProxyDefinitions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetProxyDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetProxyDefinition(temp0, temp1) :
      op->vtkSMSessionProxyManager::GetProxyDefinition(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_LoadCustomProxyDefinitions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->LoadCustomProxyDefinitions(temp0);
      }
    else
      {
      op->vtkSMSessionProxyManager::LoadCustomProxyDefinitions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_LoadCustomProxyDefinitions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    if (ap.IsBound())
      {
      op->LoadCustomProxyDefinitions(temp0);
      }
    else
      {
      op->vtkSMSessionProxyManager::LoadCustomProxyDefinitions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSessionProxyManager_LoadCustomProxyDefinitions_Methods[] = {
  {NULL, PyvtkSMSessionProxyManager_LoadCustomProxyDefinitions_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkSMSessionProxyManager_LoadCustomProxyDefinitions_s2, METH_VARARGS,
   (char*)"@O *vtkPVXMLElement"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMSessionProxyManager_LoadCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSessionProxyManager_LoadCustomProxyDefinitions_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "LoadCustomProxyDefinitions");
  return NULL;
}



static PyObject *
PyvtkSMSessionProxyManager_SaveCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    if (ap.IsBound())
      {
      op->SaveCustomProxyDefinitions(temp0);
      }
    else
      {
      op->vtkSMSessionProxyManager::SaveCustomProxyDefinitions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_LoadXMLState_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  vtkSMStateLoader *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkSMStateLoader")))
    {
    if (ap.IsBound())
      {
      op->LoadXMLState(temp0, temp1);
      }
    else
      {
      op->vtkSMSessionProxyManager::LoadXMLState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_LoadXMLState_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  vtkSMStateLoader *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkSMStateLoader")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->LoadXMLState(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMSessionProxyManager::LoadXMLState(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSessionProxyManager_LoadXMLState_Methods[] = {
  {NULL, PyvtkSMSessionProxyManager_LoadXMLState_s1, METH_VARARGS,
   (char*)"@z|O *vtkSMStateLoader"},
  {NULL, PyvtkSMSessionProxyManager_LoadXMLState_s2, METH_VARARGS,
   (char*)"@O|OO *vtkPVXMLElement *vtkSMStateLoader bool"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMSessionProxyManager_LoadXMLState(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSessionProxyManager_LoadXMLState_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSMSessionProxyManager_LoadXMLState_s2(self, args);
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "LoadXMLState");
  return NULL;
}



static PyObject *
PyvtkSMSessionProxyManager_SaveXMLState_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SaveXMLState(temp0);
      }
    else
      {
      op->vtkSMSessionProxyManager::SaveXMLState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_SaveXMLState_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState() :
      op->vtkSMSessionProxyManager::SaveXMLState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_SaveXMLState(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMSessionProxyManager_SaveXMLState_s1(self, args);
    case 0:
      return PyvtkSMSessionProxyManager_SaveXMLState_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SaveXMLState");
  return NULL;
}



static PyObject *
PyvtkSMSessionProxyManager_InstantiateGroupPrototypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InstantiateGroupPrototypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->InstantiateGroupPrototypes(temp0);
      }
    else
      {
      op->vtkSMSessionProxyManager::InstantiateGroupPrototypes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_InstantiatePrototypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InstantiatePrototypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InstantiatePrototypes();
      }
    else
      {
      op->vtkSMSessionProxyManager::InstantiatePrototypes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_HasDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->HasDefinition(temp0, temp1) :
      op->vtkSMSessionProxyManager::HasDefinition(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_AreProxiesModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AreProxiesModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->AreProxiesModified() :
      op->vtkSMSessionProxyManager::AreProxiesModified());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetProxyHints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyHints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetProxyHints(temp0, temp1) :
      op->vtkSMSessionProxyManager::GetProxyHints(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetPropertyHints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyHints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetPropertyHints(temp0, temp1, temp2) :
      op->vtkSMSessionProxyManager::GetPropertyHints(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetUpdateInputProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateInputProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUpdateInputProxies() :
      op->vtkSMSessionProxyManager::GetUpdateInputProxies());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_LoadConfigurationXML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadConfigurationXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->LoadConfigurationXML(temp0) :
      op->vtkSMSessionProxyManager::LoadConfigurationXML(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetProxyDefinitionManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinitionManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxyDefinitionManager *tempr = (ap.IsBound() ?
      op->GetProxyDefinitionManager() :
      op->vtkSMSessionProxyManager::GetProxyDefinitionManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetSelectionModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxySelectionModel *tempr = (ap.IsBound() ?
      op->GetSelectionModel(temp0) :
      op->vtkSMSessionProxyManager::GetSelectionModel(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetNumberOfSelectionModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSelectionModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfSelectionModel() :
      op->vtkSMSessionProxyManager::GetNumberOfSelectionModel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetSelectionModelAt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModelAt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxySelectionModel *tempr = (ap.IsBound() ?
      op->GetSelectionModelAt(temp0) :
      op->vtkSMSessionProxyManager::GetSelectionModelAt(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_RegisterSelectionModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterSelectionModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  vtkSMProxySelectionModel *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxySelectionModel"))
    {
    if (ap.IsBound())
      {
      op->RegisterSelectionModel(temp0, temp1);
      }
    else
      {
      op->vtkSMSessionProxyManager::RegisterSelectionModel(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UnRegisterSelectionModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterSelectionModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnRegisterSelectionModel(temp0);
      }
    else
      {
      op->vtkSMSessionProxyManager::UnRegisterSelectionModel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UpdateFromRemote(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateFromRemote");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateFromRemote();
      }
    else
      {
      op->vtkSMSessionProxyManager::UpdateFromRemote();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_IsStateUpdateNotificationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStateUpdateNotificationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsStateUpdateNotificationEnabled() :
      op->vtkSMSessionProxyManager::IsStateUpdateNotificationEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_DisableStateUpdateNotification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableStateUpdateNotification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableStateUpdateNotification();
      }
    else
      {
      op->vtkSMSessionProxyManager::DisableStateUpdateNotification();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_EnableStateUpdateNotification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableStateUpdateNotification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableStateUpdateNotification();
      }
    else
      {
      op->vtkSMSessionProxyManager::EnableStateUpdateNotification();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_TriggerStateUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerStateUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TriggerStateUpdate();
      }
    else
      {
      op->vtkSMSessionProxyManager::TriggerStateUpdate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetFullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkSMMessage *tempr = (ap.IsBound() ?
      op->GetFullState() :
      op->vtkSMSessionProxyManager::GetFullState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  vtkSMMessage *temp0 = NULL;
  vtkSMProxyLocator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMMessage") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
    {
    if (ap.IsBound())
      {
      op->LoadState(temp0, temp1);
      }
    else
      {
      op->vtkSMSessionProxyManager::LoadState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_FindProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->FindProxy(temp0, temp1, temp2) :
      op->vtkSMSessionProxyManager::FindProxy(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSessionProxyManager_Methods[] = {
  {(char*)"GetClassName", PyvtkSMSessionProxyManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nvtkSMSessionProxyManager requires a session and cannot be created\nwithout one.\n"},
  {(char*)"IsA", PyvtkSMSessionProxyManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nvtkSMSessionProxyManager requires a session and cannot be created\nwithout one.\n"},
  {(char*)"NewInstance", PyvtkSMSessionProxyManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMSessionProxyManager\nC++: vtkSMSessionProxyManager *NewInstance()\n\nvtkSMSessionProxyManager requires a session and cannot be created\nwithout one.\n"},
  {(char*)"SafeDownCast", PyvtkSMSessionProxyManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMSessionProxyManager\nC++: vtkSMSessionProxyManager *SafeDownCast(vtkObject* o)\n\nvtkSMSessionProxyManager requires a session and cannot be created\nwithout one.\n"},
  {(char*)"GetReservedGlobalID", PyvtkSMSessionProxyManager_GetReservedGlobalID, METH_VARARGS | METH_STATIC,
   (char*)"V.GetReservedGlobalID() -> int\nC++: static vtkTypeUInt32 GetReservedGlobalID()\n\nReturn the GlobalID that should be used to refer to the\nProxyManager state\n"},
  {(char*)"NewProxy", PyvtkSMSessionProxyManager_NewProxy, METH_VARARGS,
   (char*)"V.NewProxy(string, string, string) -> vtkSMProxy\nC++: vtkSMProxy *NewProxy(const char *groupName,\n    const char *proxyName, const char *subProxyName=NULL)\n\nGiven a group and proxy name, create and return a proxy instance.\nThe user has to delete the proxy when done. NOTE: If this method\nis called from a scripting language, it may not be possible to\ndelete the returned object with Delete. The VTK wrappers handle\nNew and Delete specially and may not allow the deletion of object\ncreated through other methods. Use UnRegister instead.\n"},
  {(char*)"GetProxyDocumentation", PyvtkSMSessionProxyManager_GetProxyDocumentation, METH_VARARGS,
   (char*)"V.GetProxyDocumentation(string, string) -> vtkSMDocumentation\nC++: vtkSMDocumentation *GetProxyDocumentation(\n    const char *groupName, const char *proxyName)\n\nReturns a vtkSMDocumentation object with the documentation for\nthe proxy with given name and group name. Note that the name and\ngroup name are not those with the which the proxy is registered,\nbut those with which the proxy is created i.e. the arguments used\nfor NewProxy().\n"},
  {(char*)"GetPropertyDocumentation", PyvtkSMSessionProxyManager_GetPropertyDocumentation, METH_VARARGS,
   (char*)"V.GetPropertyDocumentation(string, string, string)\n    -> vtkSMDocumentation\nC++: vtkSMDocumentation *GetPropertyDocumentation(\n    const char *groupName, const char *proxyName,\n    const char *propertyName)\n\nReturns a vtkSMDocumentation object with the documentation for\nthe given property of the proxy with given name and group name.\nNote that the name and group name are not those with the which\nthe proxy is registered, but those with which the proxy is\ncreated i.e. the arguments used for NewProxy(). Also, the\nproperty name is the name of an exposed property.\n"},
  {(char*)"RegisterProxy", PyvtkSMSessionProxyManager_RegisterProxy, METH_VARARGS,
   (char*)"V.RegisterProxy(string, string, vtkSMProxy)\nC++: void RegisterProxy(const char *groupname, const char *name,\n    vtkSMProxy *proxy)\nV.RegisterProxy(string, vtkSMProxy) -> string\nC++: vtkStdString RegisterProxy(const char *groupname,\n    vtkSMProxy *proxy)\n\nUsed to pass the control of the proxy to the manager. The user\ncode can then release its reference count and not care about what\nhappens to the proxy. Managed proxies are deleted at destruction.\nNOTE: The name has to be unique (per group). If not, the existing\nproxy will be replaced (and unregistered). The proxy instances\nare grouped in collections (not necessarily the same as the group\nin the XML configuration file). These collections can be used to\nseparate proxies based on their functionality. For example,\nimplicit planes can be grouped together and the acceptable values\nof a proxy property can be restricted (using a domain) to this\ncollection.\n"},
  {(char*)"GetProxy", PyvtkSMSessionProxyManager_GetProxy, METH_VARARGS,
   (char*)"V.GetProxy(string, string) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(const char *groupname, const char *name)\nV.GetProxy(string) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(const char *name)\n\nGiven its name (and group) returns a proxy. If not a managed\nproxy, returns 0.\n"},
  {(char*)"GetProxies", PyvtkSMSessionProxyManager_GetProxies, METH_VARARGS,
   (char*)"V.GetProxies(string, string, vtkCollection)\nC++: void GetProxies(const char *groupname, const char *name,\n    vtkCollection *collection)\nV.GetProxies(string, vtkCollection)\nC++: void GetProxies(const char *groupname,\n    vtkCollection *collection)\n\nReturns all proxies registered under the given group with the\ngiven name. The collection is cleared before the proxies are\nadded to it.\n"},
  {(char*)"GetPrototypeProxy", PyvtkSMSessionProxyManager_GetPrototypeProxy, METH_VARARGS,
   (char*)"V.GetPrototypeProxy(string, string) -> vtkSMProxy\nC++: vtkSMProxy *GetPrototypeProxy(const char *groupname,\n    const char *name)\n\nReturns the prototype proxy for the given type. This method may\ncreate a new prototype proxy, if one does not already exist.\n"},
  {(char*)"GetNumberOfProxies", PyvtkSMSessionProxyManager_GetNumberOfProxies, METH_VARARGS,
   (char*)"V.GetNumberOfProxies(string) -> int\nC++: unsigned int GetNumberOfProxies(const char *groupname)\n\nReturns the number of proxies in a group.\n"},
  {(char*)"GetProxyName", PyvtkSMSessionProxyManager_GetProxyName, METH_VARARGS,
   (char*)"V.GetProxyName(string, int) -> string\nC++: const char *GetProxyName(const char *groupname,\n    unsigned int idx)\nV.GetProxyName(string, vtkSMProxy) -> string\nC++: const char *GetProxyName(const char *groupname,\n    vtkSMProxy *proxy)\n\nGiven a group and an index, returns the name of a proxy. NOTE:\nThis operation is slow.\n"},
  {(char*)"GetProxyNames", PyvtkSMSessionProxyManager_GetProxyNames, METH_VARARGS,
   (char*)"V.GetProxyNames(string, vtkSMProxy, vtkStringList)\nC++: void GetProxyNames(const char *groupname, vtkSMProxy *proxy,\n    vtkStringList *names)\n\nGiven a group and a proxy, return all its names. This clears\nthenames list before populating it with the names for the proxy\nunder the group. NOTE: This operation is slow.\n"},
  {(char*)"GetUniqueProxyName", PyvtkSMSessionProxyManager_GetUniqueProxyName, METH_VARARGS,
   (char*)"V.GetUniqueProxyName(string, string) -> string\nC++: vtkStdString GetUniqueProxyName(const char *groupname,\n    const char *prefix)\n\nGiven a group, returns a name not already used for proxies\nregistered in the given group. The prefix is used to come up with\na new name.\n"},
  {(char*)"IsProxyInGroup", PyvtkSMSessionProxyManager_IsProxyInGroup, METH_VARARGS,
   (char*)"V.IsProxyInGroup(vtkSMProxy, string) -> string\nC++: const char *IsProxyInGroup(vtkSMProxy *proxy,\n    const char *groupname)\n\nIf the proxy is in the given group, return its name, otherwise\nreturn null. NOTE: Any following call to proxy manager might make\nthe returned pointer invalid.\n"},
  {(char*)"UnRegisterProxy", PyvtkSMSessionProxyManager_UnRegisterProxy, METH_VARARGS,
   (char*)"V.UnRegisterProxy(string, string, vtkSMProxy)\nC++: void UnRegisterProxy(const char *groupname, const char *name,\n     vtkSMProxy *)\nV.UnRegisterProxy(string)\nC++: void UnRegisterProxy(const char *name)\nV.UnRegisterProxy(vtkSMProxy)\nC++: void UnRegisterProxy(vtkSMProxy *proxy)\n\nGiven its name, unregisters a proxy and removes it from the list\nof managed proxies.\n"},
  {(char*)"UnRegisterProxies", PyvtkSMSessionProxyManager_UnRegisterProxies, METH_VARARGS,
   (char*)"V.UnRegisterProxies()\nC++: void UnRegisterProxies()\n\nUnregisters all managed proxies.\n"},
  {(char*)"UpdateRegisteredProxies", PyvtkSMSessionProxyManager_UpdateRegisteredProxies, METH_VARARGS,
   (char*)"V.UpdateRegisteredProxies(string, int)\nC++: void UpdateRegisteredProxies(const char *groupname,\n    int modified_only=1)\nV.UpdateRegisteredProxies(int)\nC++: void UpdateRegisteredProxies(int modified_only=1)\n\nCalls UpdateVTKObjects() on all managed proxies. If modified_only\nflag is set, then UpdateVTKObjects will be called only those\nproxies that have any properties that were modifed i.e. not\npushed to the VTK objects.\n"},
  {(char*)"UpdateRegisteredProxiesInOrder", PyvtkSMSessionProxyManager_UpdateRegisteredProxiesInOrder, METH_VARARGS,
   (char*)"V.UpdateRegisteredProxiesInOrder(int)\nC++: void UpdateRegisteredProxiesInOrder(int modified_only=1)\n\nUpdates all registered proxies in order, respecting dependencies\namong each other. This is used after loading state or after\ninstantiating a compound proxy. This uses the\n\"UpdateInputProxies\" flag which vtkSMProxy checks in\nUpdateVTKObjects() to call UpdateVTKObjects() on the input\nproxies as well if the flag is set.\n"},
  {(char*)"UpdateProxyInOrder", PyvtkSMSessionProxyManager_UpdateProxyInOrder, METH_VARARGS,
   (char*)"V.UpdateProxyInOrder(vtkSMProxy)\nC++: void UpdateProxyInOrder(vtkSMProxy *proxy)\n\nUpdates all registered proxies in order, respecting dependencies\namong each other. This is used after loading state or after\ninstantiating a compound proxy. This uses the\n\"UpdateInputProxies\" flag which vtkSMProxy checks in\nUpdateVTKObjects() to call UpdateVTKObjects() on the input\nproxies as well if the flag is set.\n"},
  {(char*)"GetNumberOfLinks", PyvtkSMSessionProxyManager_GetNumberOfLinks, METH_VARARGS,
   (char*)"V.GetNumberOfLinks() -> int\nC++: int GetNumberOfLinks()\n\nGet the number of registered links with the server manager.\n"},
  {(char*)"GetLinkName", PyvtkSMSessionProxyManager_GetLinkName, METH_VARARGS,
   (char*)"V.GetLinkName(int) -> string\nC++: const char *GetLinkName(int index)\n\nGet the name of a link.\n"},
  {(char*)"RegisterLink", PyvtkSMSessionProxyManager_RegisterLink, METH_VARARGS,
   (char*)"V.RegisterLink(string, vtkSMLink)\nC++: void RegisterLink(const char *linkname, vtkSMLink *link)\n\nRegister proxy/property links with the server manager. The\nlinknames must be unique, if a link with the given name already\nexists, it will be replaced.\n"},
  {(char*)"UnRegisterLink", PyvtkSMSessionProxyManager_UnRegisterLink, METH_VARARGS,
   (char*)"V.UnRegisterLink(string)\nC++: void UnRegisterLink(const char *linkname)\n\nUnregister a proxy or property link previously registered with\nthe given name.\n"},
  {(char*)"GetRegisteredLink", PyvtkSMSessionProxyManager_GetRegisteredLink, METH_VARARGS,
   (char*)"V.GetRegisteredLink(string) -> vtkSMLink\nC++: vtkSMLink *GetRegisteredLink(const char *linkname)\n\nGet the link registered with the given name. If no such link\nexists, returns NULL.\n"},
  {(char*)"UnRegisterAllLinks", PyvtkSMSessionProxyManager_UnRegisterAllLinks, METH_VARARGS,
   (char*)"V.UnRegisterAllLinks()\nC++: void UnRegisterAllLinks()\n\nUnregister all registered proxy/property links.\n"},
  {(char*)"RegisterCustomProxyDefinition", PyvtkSMSessionProxyManager_RegisterCustomProxyDefinition, METH_VARARGS,
   (char*)"V.RegisterCustomProxyDefinition(string, string, vtkPVXMLElement)\nC++: void RegisterCustomProxyDefinition(const char *group,\n    const char *name, vtkPVXMLElement *top)\n\nRegister a custom proxy definition with the proxy manager. This\ncan be a compound proxy definition (look at\nvtkSMCompoundSourceProxy.h) or a regular proxy definition. For\nall practical purposes, there's no difference between a proxy\ndefinition added using this method or by parsing a server manager\nconfiguration file.\n"},
  {(char*)"UnRegisterCustomProxyDefinition", PyvtkSMSessionProxyManager_UnRegisterCustomProxyDefinition, METH_VARARGS,
   (char*)"V.UnRegisterCustomProxyDefinition(string, string)\nC++: void UnRegisterCustomProxyDefinition(const char *group,\n    const char *name)\n\nGiven its name, unregisters a custom proxy definition. Note that\nthis can only be used to remove definitions added using\nRegisterCustomProxyDefinition(), cannot be used to remove\ndefinitions loaded using vtkSMXMLParser.\n"},
  {(char*)"UnRegisterCustomProxyDefinitions", PyvtkSMSessionProxyManager_UnRegisterCustomProxyDefinitions, METH_VARARGS,
   (char*)"V.UnRegisterCustomProxyDefinitions()\nC++: void UnRegisterCustomProxyDefinitions()\n\nUnregisters all registered custom proxy definitions. Note that\nthis can only be used to remove definitions added using\nRegisterCustomProxyDefinition(), cannot be used to remove\ndefinitions loaded using vtkSMXMLParser.\n"},
  {(char*)"GetProxyDefinition", PyvtkSMSessionProxyManager_GetProxyDefinition, METH_VARARGS,
   (char*)"V.GetProxyDefinition(string, string) -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetProxyDefinition(const char *group,\n    const char *name)\n\nReturns a registered proxy definition.\n"},
  {(char*)"LoadCustomProxyDefinitions", PyvtkSMSessionProxyManager_LoadCustomProxyDefinitions, METH_VARARGS,
   (char*)"V.LoadCustomProxyDefinitions(string)\nC++: void LoadCustomProxyDefinitions(const char *filename)\nV.LoadCustomProxyDefinitions(vtkPVXMLElement)\nC++: void LoadCustomProxyDefinitions(vtkPVXMLElement *root)\n\nLoad custom proxy definitions and register them.\n"},
  {(char*)"SaveCustomProxyDefinitions", PyvtkSMSessionProxyManager_SaveCustomProxyDefinitions, METH_VARARGS,
   (char*)"V.SaveCustomProxyDefinitions(vtkPVXMLElement)\nC++: void SaveCustomProxyDefinitions(vtkPVXMLElement *root)\n\nSave registered custom proxy definitions.\n"},
  {(char*)"LoadXMLState", PyvtkSMSessionProxyManager_LoadXMLState, METH_VARARGS,
   (char*)"V.LoadXMLState(string, vtkSMStateLoader)\nC++: void LoadXMLState(const char *filename,\n    vtkSMStateLoader *loader=NULL)\nV.LoadXMLState(vtkPVXMLElement, vtkSMStateLoader, bool)\nC++: void LoadXMLState(vtkPVXMLElement *rootElement,\n    vtkSMStateLoader *loader=NULL, bool keepOriginalIds=false)\n\nLoads the state of the server manager from XML. If loader is not\nspecified, a vtkSMStateLoader instance is used.\n"},
  {(char*)"SaveXMLState", PyvtkSMSessionProxyManager_SaveXMLState, METH_VARARGS,
   (char*)"V.SaveXMLState(string)\nC++: void SaveXMLState(const char *filename)\nV.SaveXMLState() -> vtkPVXMLElement\nC++: vtkPVXMLElement *SaveXMLState()\n\nSave the state of the server manager in XML format in a file.\nThis saves the state of all proxies and properties.\n"},
  {(char*)"InstantiateGroupPrototypes", PyvtkSMSessionProxyManager_InstantiateGroupPrototypes, METH_VARARGS,
   (char*)"V.InstantiateGroupPrototypes(string)\nC++: void InstantiateGroupPrototypes(const char *groupName)\n\nGiven a group name, create prototypes and store them in a\ninstance group called groupName_prototypes. Prototypes have their\nConnectionID set to the SelfConnection.\n"},
  {(char*)"InstantiatePrototypes", PyvtkSMSessionProxyManager_InstantiatePrototypes, METH_VARARGS,
   (char*)"V.InstantiatePrototypes()\nC++: void InstantiatePrototypes()\n\nCreates protytpes for all known proxy types.\n"},
  {(char*)"HasDefinition", PyvtkSMSessionProxyManager_HasDefinition, METH_VARARGS,
   (char*)"V.HasDefinition(string, string) -> bool\nC++: bool HasDefinition(const char *groupName,\n    const char *proxyName)\n\nReturn true if the XML Definition was found by\nvtkSMProxyDefinitionManager\n"},
  {(char*)"AreProxiesModified", PyvtkSMSessionProxyManager_AreProxiesModified, METH_VARARGS,
   (char*)"V.AreProxiesModified() -> int\nC++: int AreProxiesModified()\n\nGet if there are any registered proxies that have their\nproperties in a modified state.\n"},
  {(char*)"GetProxyHints", PyvtkSMSessionProxyManager_GetProxyHints, METH_VARARGS,
   (char*)"V.GetProxyHints(string, string) -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetProxyHints(const char *xmlgroup,\n    const char *xmlname)\n\nThe server manager configuration XML may define <Hints /> element\nfor a proxy/property. Hints are metadata associated with the\nproxy/property. The Server Manager does not (and should not)\ninterpret the hints. Hints provide a mechanism to add\nGUI-pertinent information to the server manager XML.  Returns the\nXML element for the hints associated with this proxy/property, if\nany, otherwise returns NULL.\n"},
  {(char*)"GetPropertyHints", PyvtkSMSessionProxyManager_GetPropertyHints, METH_VARARGS,
   (char*)"V.GetPropertyHints(string, string, string) -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetPropertyHints(const char *groupName,\n    const char *proxyName, const char *propertyName)\n\nThe server manager configuration XML may define <Hints /> element\nfor a proxy/property. Hints are metadata associated with the\nproxy/property. The Server Manager does not (and should not)\ninterpret the hints. Hints provide a mechanism to add\nGUI-pertinent information to the server manager XML.  Returns the\nXML element for the hints associated with this proxy/property, if\nany, otherwise returns NULL.\n"},
  {(char*)"GetUpdateInputProxies", PyvtkSMSessionProxyManager_GetUpdateInputProxies, METH_VARARGS,
   (char*)"V.GetUpdateInputProxies() -> int\nC++: int GetUpdateInputProxies()\n\nCheck if UpdateInputProxies flag is set. This is used after\nloading state or after instantiating a compound proxy. This uses\nthe \"UpdateInputProxies\" flag which vtkSMProxy checks in\nUpdateVTKObjects() to call UpdateVTKObjects() on the input\nproxies as well if the flag is set.\n"},
  {(char*)"LoadConfigurationXML", PyvtkSMSessionProxyManager_LoadConfigurationXML, METH_VARARGS,
   (char*)"V.LoadConfigurationXML(string) -> bool\nC++: bool LoadConfigurationXML(const char *xmlcontents)\n\nLoads server-manager configuration xml.\n"},
  {(char*)"GetProxyDefinitionManager", PyvtkSMSessionProxyManager_GetProxyDefinitionManager, METH_VARARGS,
   (char*)"V.GetProxyDefinitionManager() -> vtkSMProxyDefinitionManager\nC++: vtkSMProxyDefinitionManager *GetProxyDefinitionManager()\n\nGet the proxy definition manager. Proxy definition manager\nmaintains all the information about proxy definitions.\n"},
  {(char*)"GetSelectionModel", PyvtkSMSessionProxyManager_GetSelectionModel, METH_VARARGS,
   (char*)"V.GetSelectionModel(string) -> vtkSMProxySelectionModel\nC++: vtkSMProxySelectionModel *GetSelectionModel(const char *name)\n\nGet a registered selection model. Will return null if no such\nmodel is registered. This will forward the call to the\nProxyManager singleton\n"},
  {(char*)"GetNumberOfSelectionModel", PyvtkSMSessionProxyManager_GetNumberOfSelectionModel, METH_VARARGS,
   (char*)"V.GetNumberOfSelectionModel() -> int\nC++: vtkIdType GetNumberOfSelectionModel()\n\nReturn the number of Selections models registered\n"},
  {(char*)"GetSelectionModelAt", PyvtkSMSessionProxyManager_GetSelectionModelAt, METH_VARARGS,
   (char*)"V.GetSelectionModelAt(int) -> vtkSMProxySelectionModel\nC++: vtkSMProxySelectionModel *GetSelectionModelAt(int idx)\n\nReturn the selection model present at the index idx.\n"},
  {(char*)"RegisterSelectionModel", PyvtkSMSessionProxyManager_RegisterSelectionModel, METH_VARARGS,
   (char*)"V.RegisterSelectionModel(string, vtkSMProxySelectionModel)\nC++: void RegisterSelectionModel(const char *name,\n    vtkSMProxySelectionModel *)\n\nRegister/UnRegister a selection model. A selection model can be\ntypically used by applications to keep track of active sources,\nfilters, views etc. This will forward the call to the\nProxyManager singleton\n"},
  {(char*)"UnRegisterSelectionModel", PyvtkSMSessionProxyManager_UnRegisterSelectionModel, METH_VARARGS,
   (char*)"V.UnRegisterSelectionModel(string)\nC++: void UnRegisterSelectionModel(const char *name)\n\nRegister/UnRegister a selection model. A selection model can be\ntypically used by applications to keep track of active sources,\nfilters, views etc. This will forward the call to the\nProxyManager singleton\n"},
  {(char*)"UpdateFromRemote", PyvtkSMSessionProxyManager_UpdateFromRemote, METH_VARARGS,
   (char*)"V.UpdateFromRemote()\nC++: void UpdateFromRemote()\n\nMethod used to fetch the last state of the ProxyManager from the\npvserver. This is used in the collaboration context when the user\nconnects to a remote server and wants to update its state before\ndoing anything.\n"},
  {(char*)"IsStateUpdateNotificationEnabled", PyvtkSMSessionProxyManager_IsStateUpdateNotificationEnabled, METH_VARARGS,
   (char*)"V.IsStateUpdateNotificationEnabled() -> bool\nC++: bool IsStateUpdateNotificationEnabled()\n\nThese methods allow the user to make atomic change set in the\nnotification collaboration in terms of set of proxy registration.\nThis enables us to prevent deletion on remote sites of proxies\nthat will end up in the ProxyManager but have not been set into\nit yet.\n"},
  {(char*)"DisableStateUpdateNotification", PyvtkSMSessionProxyManager_DisableStateUpdateNotification, METH_VARARGS,
   (char*)"V.DisableStateUpdateNotification()\nC++: void DisableStateUpdateNotification()\n\nThese methods allow the user to make atomic change set in the\nnotification collaboration in terms of set of proxy registration.\nThis enables us to prevent deletion on remote sites of proxies\nthat will end up in the ProxyManager but have not been set into\nit yet.\n"},
  {(char*)"EnableStateUpdateNotification", PyvtkSMSessionProxyManager_EnableStateUpdateNotification, METH_VARARGS,
   (char*)"V.EnableStateUpdateNotification()\nC++: void EnableStateUpdateNotification()\n\nThese methods allow the user to make atomic change set in the\nnotification collaboration in terms of set of proxy registration.\nThis enables us to prevent deletion on remote sites of proxies\nthat will end up in the ProxyManager but have not been set into\nit yet.\n"},
  {(char*)"TriggerStateUpdate", PyvtkSMSessionProxyManager_TriggerStateUpdate, METH_VARARGS,
   (char*)"V.TriggerStateUpdate()\nC++: void TriggerStateUpdate()\n\nThese methods allow the user to make atomic change set in the\nnotification collaboration in terms of set of proxy registration.\nThis enables us to prevent deletion on remote sites of proxies\nthat will end up in the ProxyManager but have not been set into\nit yet.\n"},
  {(char*)"GetFullState", PyvtkSMSessionProxyManager_GetFullState, METH_VARARGS,
   (char*)"V.GetFullState() -> vtkSMMessage\nC++: virtual const vtkSMMessage *GetFullState()\n\nThis method returns the full object state that can be used to\ncreate that object from scratch. This method will be used to fill\nthe undo stack. If not overriden this will return NULL.\n"},
  {(char*)"LoadState", PyvtkSMSessionProxyManager_LoadState, METH_VARARGS,
   (char*)"V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: virtual void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator)\n\nThis method is used to initialise the ProxyManager to the given\nstate\n"},
  {(char*)"FindProxy", PyvtkSMSessionProxyManager_FindProxy, METH_VARARGS,
   (char*)"V.FindProxy(string, string, string) -> vtkSMProxy\nC++: vtkSMProxy *FindProxy(const char *reggroup,\n    const char *xmlgroup, const char *xmltype)\n\nFind proxy of the group type (xmlgroup, xmltype) registered under\na particular group (reggroup). Returns the first proxy found, if\nany.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSMSessionProxyManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSMSessionProxyManager_Methods,
    "vtkSMSessionProxyManager", modulename,
    NULL, NULL,
    PyvtkSMSessionProxyManager_Doc(),
    PyVTKClass_vtkSMSessionObjectNew(modulename));
  return cls;
}

const char **PyvtkSMSessionProxyManager_Doc()
{
  static const char *docstring[] = {
    "vtkSMSessionProxyManager\n\n",
    "Superclass: vtkSMSessionObject\n\n",
    "vtkSMSessionProxyManager is an instance that creates and manages\nproxies for a given session/server. It maintains a map of XML\nelements (populated by the XML parser) from which it can create and\ninitialize proxies and properties. Once a proxy is created, it can\neither be managed by the user code or the proxy manager. In the\nlatter case, pass the control of the proxy to the manager with\nRegisterPro",
    "xy() and unregister it. At destruction, proxy manager\ndeletes all managed proxies.\n\nvtkSMSessionProxyManager is designed to work with only one session.\nWhen the session on which it is attached closes, it has no role and\nshould be deleted right away.\n\nSee Also:\n\nvtkSMProxyDefinitionManager\n\nBasic XML Proxy definition documentation:\n\n------------- Proxy definition ------------- <SourceProxy         ",
    "   \n      => Will create vtkSM + SourceProxy class. name=\"SphereSource\"  \n  => Key used to create the proxy. class=\"vtkSphereSource\" =>\n    Concrete VTK class that does the real job. label=\"Sphere\">       \n => Nice name used in menu and python shell.\n\n----------- Property definition ----------- <DoubleVectorProperty    \n   => Will create vtkSM + DoubleVectorProperty and vtkSI +\n    DoubleVectorPro",
    "perty class by default. name=\"Center\"           =>\nName of the property: Example usage: vtkPropertyHelper(proxy,\n    \"Center\").Set(0,1,2) command=\"SetCenter\"     => Real method name\n    that will be called on vtkObject when the property is updated.\n    number_of_elements=\"3\"  => Size of the vector. animateable=\"1\"   \n     => Tell the animation view that property can be used as an\n    evolving prop",
    "erty. default_values=\"0 0 0\"> => The value that will\nbe set at the </DoubleVectorProperty>         construction to the VTK\nobject. </SourceProxy> \n\nFor custom behaviour the user can add some extra attributes:\n\n- We can specify a custom SIProperty class to handle in a custom way\n  the data on the server:\n\n\n     <StringVectorProperty          => vtkSMStringVectorProperty\nclass.\n        name=\"Element",
    "BlocksInfo\"    => Property name.\n        information_only=\"1\"        => Can only be used to fetch\ndata.\n        si_class=\"vtkSISILProperty\" => Class name to instantiate on\nthe other side.\n        subtree=\"Blocks\"/>          => Extra attribute used by\nvtkSISILProperty. \n\n- We can trigger after any update a command to be executed:\n\n\n     <Proxy name=\"LookupTable\"\n            class=\"vtkLookupTable\"\n ",
    "           post_push=\"Build\"       => The method Build() will be\ncalled each\n                                       time a new property value is\npushed to\n                                       the VTK object.\n            processes=\"dataserver|renderserver|client\" > \n\n- We can force any property to push its value as soon as it is\n  changed:\n\n\n         <Property name=\"ResetFieldCriteria\"\n          ",
    "  command=\"ResetFieldCriteria\"\n            immediate_update=\"1\">     => Modifying the property will\nresult\n                                         in an immediate push of it\nand the\n                                         execution of the command on\nthe vtkObject. \n\n- To show a source proxy or a filter inside the menu of ParaView we\n  use a hint:\n\n\n      <SourceProxy ...>\n          <Hints>\n     ",
    "        <ShowInMenu                  => The category attribute\nenables\n                 category=\"PersoFilter\"/>    specification of the\nsub-menu in which\n                                             this proxy should be\nlisted. (optional)\n          </Hints>\n      </SourceProxy> \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMSessionProxyManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMSessionProxyManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMSessionProxyManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

