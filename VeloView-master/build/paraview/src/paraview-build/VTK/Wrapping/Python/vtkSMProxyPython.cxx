// python wrapper for vtkSMProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMRemoteObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMRemoteObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMRemoteObjectNew
#endif

static const char **PyvtkSMProxy_Doc();


static PyObject *
PyvtkSMProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxy::NewInstance());

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
PyvtkSMProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMProxy *tempr = vtkSMProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_SetAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAnnotation(temp0, temp1);
      }
    else
      {
      op->vtkSMProxy::SetAnnotation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAnnotation(temp0) :
      op->vtkSMProxy::GetAnnotation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_RemoveAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveAnnotation(temp0);
      }
    else
      {
      op->vtkSMProxy::RemoveAnnotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_RemoveAllAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllAnnotations();
      }
    else
      {
      op->vtkSMProxy::RemoveAllAnnotations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_HasAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasAnnotation(temp0) :
      op->vtkSMProxy::HasAnnotation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetNumberOfAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAnnotations() :
      op->vtkSMProxy::GetNumberOfAnnotations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetAnnotationKeyAt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationKeyAt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAnnotationKeyAt(temp0) :
      op->vtkSMProxy::GetAnnotationKeyAt(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_SetLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLocation(temp0);
      }
    else
      {
      op->vtkSMProxy::SetLocation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty(temp0) :
      op->vtkSMProxy::GetProperty(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxy_GetProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty(temp0, temp1) :
      op->vtkSMProxy::GetProperty(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxy_GetProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMProxy_GetProperty_s1(self, args);
    case 2:
      return PyvtkSMProxy_GetProperty_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetProperty");
  return NULL;
}



static PyObject *
PyvtkSMProxy_GetPropertyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPropertyName(temp0) :
      op->vtkSMProxy::GetPropertyName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_UpdateVTKObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateVTKObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateVTKObjects();
      }
    else
      {
      op->vtkSMProxy::UpdateVTKObjects();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_UpdateProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->UpdateProperty(temp0) :
      op->vtkSMProxy::UpdateProperty(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxy_UpdateProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->UpdateProperty(temp0, temp1) :
      op->vtkSMProxy::UpdateProperty(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxy_UpdateProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMProxy_UpdateProperty_s1(self, args);
    case 2:
      return PyvtkSMProxy_UpdateProperty_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateProperty");
  return NULL;
}



static PyObject *
PyvtkSMProxy_InvokeCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->InvokeCommand(temp0);
      }
    else
      {
      op->vtkSMProxy::InvokeCommand(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetVTKClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetVTKClassName() :
      op->vtkSMProxy::GetVTKClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_SetVTKClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVTKClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVTKClassName(temp0);
      }
    else
      {
      op->vtkSMProxy::SetVTKClassName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_NewPropertyIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewPropertyIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMPropertyIterator *tempr = (ap.IsBound() ?
      op->NewPropertyIterator() :
      op->vtkSMProxy::NewPropertyIterator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetNumberOfConsumers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConsumers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfConsumers() :
      op->vtkSMProxy::GetNumberOfConsumers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetConsumerProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConsumerProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetConsumerProxy(temp0) :
      op->vtkSMProxy::GetConsumerProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetConsumerProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConsumerProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetConsumerProperty(temp0) :
      op->vtkSMProxy::GetConsumerProperty(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetNumberOfProducers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProducers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProducers() :
      op->vtkSMProxy::GetNumberOfProducers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetProducerProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProducerProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProducerProxy(temp0) :
      op->vtkSMProxy::GetProducerProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetProducerProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProducerProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProducerProperty(temp0) :
      op->vtkSMProxy::GetProducerProperty(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetXMLName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXMLName() :
      op->vtkSMProxy::GetXMLName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetXMLGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXMLGroup() :
      op->vtkSMProxy::GetXMLGroup());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetXMLLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXMLLabel() :
      op->vtkSMProxy::GetXMLLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_UpdatePropertyInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePropertyInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdatePropertyInformation();
      }
    else
      {
      op->vtkSMProxy::UpdatePropertyInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxy_UpdatePropertyInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePropertyInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    if (ap.IsBound())
      {
      op->UpdatePropertyInformation(temp0);
      }
    else
      {
      op->vtkSMProxy::UpdatePropertyInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxy_UpdatePropertyInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMProxy_UpdatePropertyInformation_s1(self, args);
    case 1:
      return PyvtkSMProxy_UpdatePropertyInformation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdatePropertyInformation");
  return NULL;
}



static PyObject *
PyvtkSMProxy_MarkAllPropertiesAsModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkAllPropertiesAsModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MarkAllPropertiesAsModified();
      }
    else
      {
      op->vtkSMProxy::MarkAllPropertiesAsModified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_ResetPropertiesToXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetPropertiesToXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetPropertiesToXMLDefaults();
      }
    else
      {
      op->vtkSMProxy::ResetPropertiesToXMLDefaults();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_Copy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->Copy(temp0);
      }
    else
      {
      op->vtkSMProxy::Copy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxy_Copy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Copy(temp0, temp1);
      }
    else
      {
      op->vtkSMProxy::Copy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxy_Copy_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Copy(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMProxy::Copy(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxy_Copy(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMProxy_Copy_s1(self, args);
    case 2:
      return PyvtkSMProxy_Copy_s2(self, args);
    case 3:
      return PyvtkSMProxy_Copy_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Copy");
  return NULL;
}



static PyObject *
PyvtkSMProxy_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->MarkModified(temp0);
      }
    else
      {
      op->vtkSMProxy::MarkModified(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetDocumentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDocumentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDocumentation *tempr = (ap.IsBound() ?
      op->GetDocumentation() :
      op->vtkSMProxy::GetDocumentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetHints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetHints() :
      op->vtkSMProxy::GetHints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetObjectsCreated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectsCreated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetObjectsCreated() :
      op->vtkSMProxy::GetObjectsCreated());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_InitializeAndCopyFromProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeAndCopyFromProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->InitializeAndCopyFromProxy(temp0);
      }
    else
      {
      op->vtkSMProxy::InitializeAndCopyFromProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_MarkDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->MarkDirty(temp0);
      }
    else
      {
      op->vtkSMProxy::MarkDirty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetClientSideObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientSideObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkObjectBase *tempr = (ap.IsBound() ?
      op->GetClientSideObject() :
      op->vtkSMProxy::GetClientSideObject());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GatherInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkPVInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
    {
    bool tempr = (ap.IsBound() ?
      op->GatherInformation(temp0) :
      op->vtkSMProxy::GatherInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxy_GatherInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkPVInformation *temp0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVInformation") &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->GatherInformation(temp0, temp1) :
      op->vtkSMProxy::GatherInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxy_GatherInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMProxy_GatherInformation_s1(self, args);
    case 2:
      return PyvtkSMProxy_GatherInformation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GatherInformation");
  return NULL;
}



static PyObject *
PyvtkSMProxy_SaveXMLState_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0) :
      op->vtkSMProxy::SaveXMLState(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxy_SaveXMLState_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  vtkSMPropertyIterator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMPropertyIterator"))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0, temp1) :
      op->vtkSMProxy::SaveXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxy_SaveXMLState(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMProxy_SaveXMLState_s1(self, args);
    case 2:
      return PyvtkSMProxy_SaveXMLState_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SaveXMLState");
  return NULL;
}



static PyObject *
PyvtkSMProxy_LoadXMLState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  vtkSMProxyLocator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
    {
    int tempr = (ap.IsBound() ?
      op->LoadXMLState(temp0, temp1) :
      op->vtkSMProxy::LoadXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_PrototypeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrototypeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrototypeOn();
      }
    else
      {
      op->vtkSMProxy::PrototypeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_PrototypeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrototypeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrototypeOff();
      }
    else
      {
      op->vtkSMProxy::PrototypeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_SetPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPrototype(temp0);
      }
    else
      {
      op->vtkSMProxy::SetPrototype(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_UpdateSelfAndAllInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSelfAndAllInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateSelfAndAllInputs();
      }
    else
      {
      op->vtkSMProxy::UpdateSelfAndAllInputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetIsSubProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsSubProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIsSubProxy() :
      op->vtkSMProxy::GetIsSubProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetParentProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetParentProxy() :
      op->vtkSMProxy::GetParentProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetTrueParentProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrueParentProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetTrueParentProxy() :
      op->vtkSMProxy::GetTrueParentProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_EnableLocalPushOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableLocalPushOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableLocalPushOnly();
      }
    else
      {
      op->vtkSMProxy::EnableLocalPushOnly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_DisableLocalPushOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableLocalPushOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableLocalPushOnly();
      }
    else
      {
      op->vtkSMProxy::DisableLocalPushOnly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetFullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkSMMessage *tempr = (ap.IsBound() ?
      op->GetFullState() :
      op->vtkSMProxy::GetFullState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

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
      op->vtkSMProxy::LoadState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetPropertyGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  size_t temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMPropertyGroup *tempr = (ap.IsBound() ?
      op->GetPropertyGroup(temp0) :
      op->vtkSMProxy::GetPropertyGroup(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxy_GetNumberOfPropertyGroups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPropertyGroups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    size_t tempr = (ap.IsBound() ?
      op->GetNumberOfPropertyGroups() :
      op->vtkSMProxy::GetNumberOfPropertyGroups());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMProxy\nC++: vtkSMProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMProxy\nC++: vtkSMProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAnnotation", PyvtkSMProxy_SetAnnotation, METH_VARARGS,
   (char*)"V.SetAnnotation(string, string)\nC++: void SetAnnotation(const char *key, const char *value)\n\n"},
  {(char*)"GetAnnotation", PyvtkSMProxy_GetAnnotation, METH_VARARGS,
   (char*)"V.GetAnnotation(string) -> string\nC++: const char *GetAnnotation(const char *key)\n\nRetreive an annotation with a given key. If not found, this will\nreturn NULL.\n"},
  {(char*)"RemoveAnnotation", PyvtkSMProxy_RemoveAnnotation, METH_VARARGS,
   (char*)"V.RemoveAnnotation(string)\nC++: void RemoveAnnotation(const char *key)\n\nRemove a given annotation based on its key to the proxy.\n"},
  {(char*)"RemoveAllAnnotations", PyvtkSMProxy_RemoveAllAnnotations, METH_VARARGS,
   (char*)"V.RemoveAllAnnotations()\nC++: void RemoveAllAnnotations()\n\nRemove all proxy annotations.\n"},
  {(char*)"HasAnnotation", PyvtkSMProxy_HasAnnotation, METH_VARARGS,
   (char*)"V.HasAnnotation(string) -> bool\nC++: bool HasAnnotation(const char *key)\n\nReturn true if a given annotation exists.\n"},
  {(char*)"GetNumberOfAnnotations", PyvtkSMProxy_GetNumberOfAnnotations, METH_VARARGS,
   (char*)"V.GetNumberOfAnnotations() -> int\nC++: int GetNumberOfAnnotations()\n\nReturn the number of available annotations.\n"},
  {(char*)"GetAnnotationKeyAt", PyvtkSMProxy_GetAnnotationKeyAt, METH_VARARGS,
   (char*)"V.GetAnnotationKeyAt(int) -> string\nC++: const char *GetAnnotationKeyAt(int index)\n\nReturn the nth key of the available annotations.\n"},
  {(char*)"SetLocation", PyvtkSMProxy_SetLocation, METH_VARARGS,
   (char*)"V.SetLocation(int)\nC++: virtual void SetLocation(vtkTypeUInt32)\n\nGet/Set the location where the underlying VTK-objects are\ncreated. The value can be contructed by or-ing\nvtkSMSession::ServerFlags\n"},
  {(char*)"GetProperty", PyvtkSMProxy_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty(string) -> vtkSMProperty\nC++: virtual vtkSMProperty *GetProperty(const char *name)\nV.GetProperty(string, int) -> vtkSMProperty\nC++: virtual vtkSMProperty *GetProperty(const char *name,\n    int selfOnly)\n\nReturn the property with the given name. If no property is found\nNULL is returned.\n"},
  {(char*)"GetPropertyName", PyvtkSMProxy_GetPropertyName, METH_VARARGS,
   (char*)"V.GetPropertyName(vtkSMProperty) -> string\nC++: const char *GetPropertyName(vtkSMProperty *prop)\n\nGiven a property pointer, returns the name that was used to add\nit to the proxy. Returns NULL if the property is not in the\nproxy. If the property belongs to a sub-proxy, it returns the\nexposed name or NULL if the property is not exposed.\n"},
  {(char*)"UpdateVTKObjects", PyvtkSMProxy_UpdateVTKObjects, METH_VARARGS,
   (char*)"V.UpdateVTKObjects()\nC++: virtual void UpdateVTKObjects()\n\nUpdate the VTK object on the server by pushing the values of all\nmodifed properties (un-modified properties are ignored). If the\nobject has not been created, it will be created first.\n"},
  {(char*)"UpdateProperty", PyvtkSMProxy_UpdateProperty, METH_VARARGS,
   (char*)"V.UpdateProperty(string) -> bool\nC++: bool UpdateProperty(const char *name)\nV.UpdateProperty(string, int) -> bool\nC++: bool UpdateProperty(const char *name, int force)\n\nUpdate the value of one property (pushed to the server) if it is\nmodified.  If the object has not been created, it will be created\nfirst. If force is true, the property is pushed even if it not\nmodified. Return true if UpdateProperty pushes the property\nvalue.\n"},
  {(char*)"InvokeCommand", PyvtkSMProxy_InvokeCommand, METH_VARARGS,
   (char*)"V.InvokeCommand(string)\nC++: void InvokeCommand(const char *name)\n\nConvenience method equivalent to UpdateProperty(name, 1).\n"},
  {(char*)"GetVTKClassName", PyvtkSMProxy_GetVTKClassName, METH_VARARGS,
   (char*)"V.GetVTKClassName() -> string\nC++: char *GetVTKClassName()\n\nReturns the type of object managed by the proxy.\n"},
  {(char*)"SetVTKClassName", PyvtkSMProxy_SetVTKClassName, METH_VARARGS,
   (char*)"V.SetVTKClassName(string)\nC++: void SetVTKClassName(char *)\n\nthe type of object created by the proxy. This is used only when\ncreating the server objects. Once the server object(s) have been\ncreated, changing this has no effect.\n"},
  {(char*)"NewPropertyIterator", PyvtkSMProxy_NewPropertyIterator, METH_VARARGS,
   (char*)"V.NewPropertyIterator() -> vtkSMPropertyIterator\nC++: virtual vtkSMPropertyIterator *NewPropertyIterator()\n\nReturns a new (initialized) iterator of the properties.\n"},
  {(char*)"GetNumberOfConsumers", PyvtkSMProxy_GetNumberOfConsumers, METH_VARARGS,
   (char*)"V.GetNumberOfConsumers() -> int\nC++: unsigned int GetNumberOfConsumers()\n\nReturns the number of consumers. Consumers are proxies that point\nto this proxy through a property (usually vtkSMProxyProperty)\n"},
  {(char*)"GetConsumerProxy", PyvtkSMProxy_GetConsumerProxy, METH_VARARGS,
   (char*)"V.GetConsumerProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetConsumerProxy(unsigned int idx)\n\nReturns the consumer of given index. Consumers are proxies that\npoint to this proxy through a property (usually\nvtkSMProxyProperty)\n"},
  {(char*)"GetConsumerProperty", PyvtkSMProxy_GetConsumerProperty, METH_VARARGS,
   (char*)"V.GetConsumerProperty(int) -> vtkSMProperty\nC++: vtkSMProperty *GetConsumerProperty(unsigned int idx)\n\nReturns the corresponding property of the consumer of given\nindex. Consumers are proxies that point to this proxy through a\nproperty (usually vtkSMProxyProperty)\n"},
  {(char*)"GetNumberOfProducers", PyvtkSMProxy_GetNumberOfProducers, METH_VARARGS,
   (char*)"V.GetNumberOfProducers() -> int\nC++: unsigned int GetNumberOfProducers()\n\nReturns the number of proxies this proxy depends on (uses or is\nconnected to through the pipeline).\n"},
  {(char*)"GetProducerProxy", PyvtkSMProxy_GetProducerProxy, METH_VARARGS,
   (char*)"V.GetProducerProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetProducerProxy(unsigned int idx)\n\nReturns a proxy this proxy depends on, given index.\n"},
  {(char*)"GetProducerProperty", PyvtkSMProxy_GetProducerProperty, METH_VARARGS,
   (char*)"V.GetProducerProperty(int) -> vtkSMProperty\nC++: vtkSMProperty *GetProducerProperty(unsigned int idx)\n\nReturns the property holding a producer proxy given an index.\nNote that this is a property of this proxy and it points to the\nproducer proxy.\n"},
  {(char*)"GetXMLName", PyvtkSMProxy_GetXMLName, METH_VARARGS,
   (char*)"V.GetXMLName() -> string\nC++: char *GetXMLName()\n\nAssigned by the XML parser. The name assigned in the XML\nconfiguration. Can be used to figure out the origin of the proxy.\n"},
  {(char*)"GetXMLGroup", PyvtkSMProxy_GetXMLGroup, METH_VARARGS,
   (char*)"V.GetXMLGroup() -> string\nC++: char *GetXMLGroup()\n\nAssigned by the XML parser. The group in the XML configuration\nthat this proxy belongs to. Can be used to figure out the origin\nof the proxy.\n"},
  {(char*)"GetXMLLabel", PyvtkSMProxy_GetXMLLabel, METH_VARARGS,
   (char*)"V.GetXMLLabel() -> string\nC++: char *GetXMLLabel()\n\nAssigned by the XML parser. The label assigned in the XML\nconfiguration. This is a more user-friendly name for the proxy,\nalthough it's cannot be used to locate the proxy.\n"},
  {(char*)"UpdatePropertyInformation", PyvtkSMProxy_UpdatePropertyInformation, METH_VARARGS,
   (char*)"V.UpdatePropertyInformation()\nC++: virtual void UpdatePropertyInformation()\nV.UpdatePropertyInformation(vtkSMProperty)\nC++: virtual void UpdatePropertyInformation(vtkSMProperty *prop)\n\nUpdates all property informations by calling UpdateInformation()\nand populating the values.\n"},
  {(char*)"MarkAllPropertiesAsModified", PyvtkSMProxy_MarkAllPropertiesAsModified, METH_VARARGS,
   (char*)"V.MarkAllPropertiesAsModified()\nC++: virtual void MarkAllPropertiesAsModified()\n\nMarks all properties as modified.  This will cause them all to be\nsent to be sent on the next call to UpdateVTKObjects.  This\nmethod is useful when the proxy is first created to make sure\nthat the default property values in the properties is synced with\nthe values in the actual objects.\n"},
  {(char*)"ResetPropertiesToXMLDefaults", PyvtkSMProxy_ResetPropertiesToXMLDefaults, METH_VARARGS,
   (char*)"V.ResetPropertiesToXMLDefaults()\nC++: virtual void ResetPropertiesToXMLDefaults()\n\nUse this method to set all properties on this proxy to their\ndefault values. This iterates over all properties on this proxy,\nthus if this proxy had subproxies, this method will iterate over\nonly the exposed properties and call\nvtkSMProperty::ResetToXMLDefaults().\n"},
  {(char*)"Copy", PyvtkSMProxy_Copy, METH_VARARGS,
   (char*)"V.Copy(vtkSMProxy)\nC++: void Copy(vtkSMProxy *src)\nV.Copy(vtkSMProxy, string)\nC++: void Copy(vtkSMProxy *src, const char *exceptionClass)\nV.Copy(vtkSMProxy, string, int)\nC++: virtual void Copy(vtkSMProxy *src,\n    const char *exceptionClass, int proxyPropertyCopyFlag)\n\nCopies values of all the properties and sub-proxies from\nsrc.NOTE: This does NOT create properties and sub-proxies. Only\ncopies values. Mismatched property and sub-proxy pairs are\nignored. Properties of type exceptionClass are not copied. This\nis usually vtkSMInputProperty. proxyPropertyCopyFlag specifies\nhow the values for vtkSMProxyProperty and its subclasses are\ncopied over: by reference or by cloning (ie. creating new\ninstances of the value proxies and synchronizing their values).\nThis is no longer relevant since we don't support\nCOPY_PROXY_PROPERTY_VALUES_BY_CLONING anymore.\n"},
  {(char*)"MarkModified", PyvtkSMProxy_MarkModified, METH_VARARGS,
   (char*)"V.MarkModified(vtkSMProxy)\nC++: virtual void MarkModified(vtkSMProxy *modifiedProxy)\n\nCalls MarkDirty() and invokes ModifiedEvent.\n"},
  {(char*)"GetDocumentation", PyvtkSMProxy_GetDocumentation, METH_VARARGS,
   (char*)"V.GetDocumentation() -> vtkSMDocumentation\nC++: vtkSMDocumentation *GetDocumentation()\n\nReturns the documentation for this proxy.\n"},
  {(char*)"GetHints", PyvtkSMProxy_GetHints, METH_VARARGS,
   (char*)"V.GetHints() -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetHints()\n\nThe server manager configuration XML may define <Hints /> element\nfor a proxy. Hints are metadata associated with the proxy. The\nServer Manager does not (and should not) interpret the hints.\nHints provide a mechanism to add GUI pertinant information to the\nserver manager XML. Returns the XML element for the hints\nassociated with this proxy, if any, otherwise returns NULL.\n"},
  {(char*)"GetObjectsCreated", PyvtkSMProxy_GetObjectsCreated, METH_VARARGS,
   (char*)"V.GetObjectsCreated() -> int\nC++: int GetObjectsCreated()\n\nRetuns if the VTK objects for this proxy have been created.\n"},
  {(char*)"InitializeAndCopyFromProxy", PyvtkSMProxy_InitializeAndCopyFromProxy, METH_VARARGS,
   (char*)"V.InitializeAndCopyFromProxy(vtkSMProxy)\nC++: void InitializeAndCopyFromProxy(vtkSMProxy *source)\n\nGiven a source proxy, makes this proxy point to the same\nserver-side object (with a new id). This method copies connection\nid as well as server ids. This method can be called only once on\nan uninitialized proxy (CreateVTKObjects() also initialized a\nproxy) This is useful to make two (or more) proxies represent the\nsame VTK object. This method does not copy IDs for any\nsubproxies.\n"},
  {(char*)"MarkDirty", PyvtkSMProxy_MarkDirty, METH_VARARGS,
   (char*)"V.MarkDirty(vtkSMProxy)\nC++: virtual void MarkDirty(vtkSMProxy *modifiedProxy)\n\nDirty means this algorithm will execute during next update. This\nall marks all consumers as dirty.\n"},
  {(char*)"GetClientSideObject", PyvtkSMProxy_GetClientSideObject, METH_VARARGS,
   (char*)"V.GetClientSideObject() -> vtkObjectBase\nC++: vtkObjectBase *GetClientSideObject()\n\nReturns the client side object associated with the VTKObjectID\n(if any). Returns 0 otherwise.\n"},
  {(char*)"GatherInformation", PyvtkSMProxy_GatherInformation, METH_VARARGS,
   (char*)"V.GatherInformation(vtkPVInformation) -> bool\nC++: bool GatherInformation(vtkPVInformation *information)\nV.GatherInformation(vtkPVInformation, int) -> bool\nC++: bool GatherInformation(vtkPVInformation *information,\n    vtkTypeUInt32 location)\n\nGathers information about this proxy. On success, the information\nobject is filled up with details about the VTK object.\n"},
  {(char*)"SaveXMLState", PyvtkSMProxy_SaveXMLState, METH_VARARGS,
   (char*)"V.SaveXMLState(vtkPVXMLElement) -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root)\nV.SaveXMLState(vtkPVXMLElement, vtkSMPropertyIterator)\n    -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root,\n    vtkSMPropertyIterator *iter)\n\nSaves the state of the proxy. This state can be reloaded to\ncreate a new proxy that is identical the present state of this\nproxy. The resulting proxy's XML hieratchy is returned, in\naddition if the root argument is not NULL then it's also inserted\nas a nested element. This call saves all a proxy's properties,\nincluding exposed properties and sub-proxies. More control is\nprovided by the following overload.\n"},
  {(char*)"LoadXMLState", PyvtkSMProxy_LoadXMLState, METH_VARARGS,
   (char*)"V.LoadXMLState(vtkPVXMLElement, vtkSMProxyLocator) -> int\nC++: virtual int LoadXMLState(vtkPVXMLElement *element,\n    vtkSMProxyLocator *locator)\n\nLoads the proxy state from the XML element. Returns 0 on\nfailure.locator is used to locate other proxies that may be\nreferred to in the state XML (which happens in case of properties\nof type vtkSMProxyProperty or subclasses). If locator is NULL,\nthen such properties are left unchanged.\n"},
  {(char*)"PrototypeOn", PyvtkSMProxy_PrototypeOn, METH_VARARGS,
   (char*)"V.PrototypeOn()\nC++: virtual void PrototypeOn()\n\nAllow user to set the remote object to be discard for Undo/Redo\naction. By default, any remote object is Undoable. This override\nthe RemoteObject ones to propagate the flag to the sub-proxy\n"},
  {(char*)"PrototypeOff", PyvtkSMProxy_PrototypeOff, METH_VARARGS,
   (char*)"V.PrototypeOff()\nC++: virtual void PrototypeOff()\n\nAllow user to set the remote object to be discard for Undo/Redo\naction. By default, any remote object is Undoable. This override\nthe RemoteObject ones to propagate the flag to the sub-proxy\n"},
  {(char*)"SetPrototype", PyvtkSMProxy_SetPrototype, METH_VARARGS,
   (char*)"V.SetPrototype(bool)\nC++: virtual void SetPrototype(bool undo)\n\nAllow user to set the remote object to be discard for Undo/Redo\naction. By default, any remote object is Undoable. This override\nthe RemoteObject ones to propagate the flag to the sub-proxy\n"},
  {(char*)"UpdateSelfAndAllInputs", PyvtkSMProxy_UpdateSelfAndAllInputs, METH_VARARGS,
   (char*)"V.UpdateSelfAndAllInputs()\nC++: void UpdateSelfAndAllInputs()\n\nThis method call UpdateVTKObjects on the current pipeline by\nstarting at the sources. The sources are found by getting the\nInput of all the filter along the pipeline.\n"},
  {(char*)"GetIsSubProxy", PyvtkSMProxy_GetIsSubProxy, METH_VARARGS,
   (char*)"V.GetIsSubProxy() -> bool\nC++: bool GetIsSubProxy()\n\nA proxy instance can be a sub-proxy for some other proxy. In that\ncase, this method returns true.\n"},
  {(char*)"GetParentProxy", PyvtkSMProxy_GetParentProxy, METH_VARARGS,
   (char*)"V.GetParentProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetParentProxy()\n\nIf this instance is a sub-proxy, this method will return the\nproxy of which this instance is an immediate sub-proxy.\n"},
  {(char*)"GetTrueParentProxy", PyvtkSMProxy_GetTrueParentProxy, METH_VARARGS,
   (char*)"V.GetTrueParentProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetTrueParentProxy()\n\nCall GetParentProxy() recursively till a proxy that is not a\nsubproxy of any other proxy is found. May return this instance,\nif this is not a subproxy of any other proxy.\n"},
  {(char*)"EnableLocalPushOnly", PyvtkSMProxy_EnableLocalPushOnly, METH_VARARGS,
   (char*)"V.EnableLocalPushOnly()\nC++: virtual void EnableLocalPushOnly()\n\nAllow to switch off any push of state change to the server for\nthat particular object. This is used when we load a state based\non a server notification. In that particular case, the server is\nalready aware of that new state, so we keep those changes local.\n"},
  {(char*)"DisableLocalPushOnly", PyvtkSMProxy_DisableLocalPushOnly, METH_VARARGS,
   (char*)"V.DisableLocalPushOnly()\nC++: virtual void DisableLocalPushOnly()\n\nEnable the given remote object to communicate its state normaly\nto the server location.\n"},
  {(char*)"GetFullState", PyvtkSMProxy_GetFullState, METH_VARARGS,
   (char*)"V.GetFullState() -> vtkSMMessage\nC++: virtual const vtkSMMessage *GetFullState()\n\nThis method return the full object state that can be used to\ncreate that object from scratch. This method will be used to fill\nthe undo stack. If not overriden this will return NULL.\n"},
  {(char*)"LoadState", PyvtkSMProxy_LoadState, METH_VARARGS,
   (char*)"V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: virtual void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator)\n\nThis method is used to initialise the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalID set. This allow to split the load process\nin 2 step to prevent invalid state when property refere to a\nsub-proxy that does not exist yet.\n"},
  {(char*)"GetPropertyGroup", PyvtkSMProxy_GetPropertyGroup, METH_VARARGS,
   (char*)"V.GetPropertyGroup(int) -> vtkSMPropertyGroup\nC++: vtkSMPropertyGroup *GetPropertyGroup(size_t index)\n\nReturns the property group at index for the proxy.\n"},
  {(char*)"GetNumberOfPropertyGroups", PyvtkSMProxy_GetNumberOfPropertyGroups, METH_VARARGS,
   (char*)"V.GetNumberOfPropertyGroups() -> int\nC++: size_t GetNumberOfPropertyGroups()\n\nReturns the number of property groups that the proxy contains.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMProxy_StaticNew()
{
  return vtkSMProxy::New();
}

PyObject *PyVTKClass_vtkSMProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMProxy_StaticNew,
    PyvtkSMProxy_Methods,
    "vtkSMProxy", modulename,
    NULL, NULL,
    PyvtkSMProxy_Doc(),
    PyVTKClass_vtkSMRemoteObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 2; c++)
      {
      static const struct { const char *name; int value; }
        constants[2] = {
          { "COPY_PROXY_PROPERTY_VALUES_BY_REFERENCE", vtkSMProxy::COPY_PROXY_PROPERTY_VALUES_BY_REFERENCE },
          { "COPY_PROXY_PROPERTY_VALUES_BY_CLONING", vtkSMProxy::COPY_PROXY_PROPERTY_VALUES_BY_CLONING },
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

const char **PyvtkSMProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMProxy - proxy for a VTK object(s) on a server\n\n",
    "Superclass: vtkSMRemoteObject\n\n",
    "vtkSMProxy manages VTK object(s) that are created on a server using\nthe proxy pattern. The managed object is manipulated through\nproperties. The type of object created and managed by vtkSMProxy is\ndetermined by the VTKClassName variable. The object is managed by\ngetting the desired property from the proxy, changing it's value and\nupdating the server with UpdateVTKObjects(). A proxy can be\ncomposit",
    "e. Sub-proxies can be added by the proxy manager. This is\ntransparent to the user who sees all properties as if they belong to\nthe root proxy.\n\nA proxy keeps an iVar ConnectionID. This is the connection ID for the\nconnection on which this proxy exists. Currently, since a ParaView\nclient is connected to 1 and only 1 server. This ID is insignificant.\nHowever, it provides the ground work to enable a ",
    "client to connect\nwith multiple servers.  ConnectionID must be set immediately after\ninstantiating the proxy (if at all).  Chanding the ConnectionID after\nthat can be dangerous.\n\nWhen defining a proxy in the XML configuration file, to derrive the\nproperty interface from another proxy definition, we can use\nattributes \"base_proxygroup\" and \"base_proxyname\" which identify the\nproxy group and proxy n",
    "ame of another proxy. Base interfaces can be\ndefined recursively, however care must be taken to avoid cycles.\n\nThere are several special XML features available for subproxies.\n\\li 1) It is possible to share properties among subproxies.\n   eg.   <Proxy name=\"Display\" class=\"Alpha\">\n     <SubProxy>\n       <Proxy name=\"Mapper\" class=\"vtkPolyDataMapper\">\n         <InputProperty name=\"Input\" ...>\n     ",
    "      ...\n         </InputProperty>\n         <IntVectorProperty name=\"ScalarVisibility\" ...>\n           ...\n         </IntVectorProperty>\n           ...\n       </Proxy>\n     </SubProxy>\n     <SubProxy>\n       <Proxy name=\"Mapper2\" class=\"vtkPolyDataMapper\">\n         <InputProperty name=\"Input\" ...>\n           ...\n         </InputProperty>\n         <IntVectorProperty name=\"ScalarVisibility\" ...>\n  ",
    "         ...\n         </IntVectorProperty>\n           ...\n       </Proxy>\n       <ShareProperties subproxy=\"Mapper\">\n         <Exception name=\"Input\" />\n       </ShareProperties>\n     </SubProxy>\n   </Proxy>   \n\n   Thus, subproxies Mapper and Mapper2 share the properties that are\n   common to both; except those listed as exceptions using the\n\"Exception\"\n   tag.\n\n\\li 2) It is possible for a subprox",
    "y to use proxy definition defined\n    elsewhere\n    by identifying the interface with attribues \"proxygroup\" and\n\"proxyname\".\n    eg.    <SubProxy>\n      <Proxy name=\"Mapper\" proxygroup=\"mappers\"\nproxyname=\"PolyDataMapper\" />\n    </SubProxy>    \n\n\\li 3) It is possible to scope the properties exposed by a subproxy\n    and expose\n    only a fixed set of properties to be accessible from outside.\nAlso",
    ",\n    while exposing the property, it can be exposed with a different\nname.\n    eg.    <Proxy name=\"Alpha\" ....>\n      ....\n      <SubProxy>\n        <Proxy name=\"Mapper\" proxygroup=\"mappers\"\nproxyname=\"PolyDataMapper\" />\n        <ExposedProperties>\n          <Property name=\"LookupTable\"\nexposed_name=\"MapperLookupTable\" />\n        </ExposedProperties>\n      </SubProxy>\n    </Proxy>    \n\n    Here, f",
    "or the proxy Alpha, the property with the name LookupTable\nfrom its\n    subproxy \"Mapper\" can be obtained by calling\nGetProperty(\"MapperLookupTable\")\n    on an instance of the proxy Alpha. \"exposed_name\" attribute is\noptional, if\n    not specified, then the \"name\" is used as the exposed property\nname.\n    Properties that are not exposed are treated as\n    non-saveable and non-animateable (see vtkS",
    "MProperty for details).\n    Exposed property restrictions only work when\n    using the GetProperty on the container proxy (in this case Alpha)\nor\n    using the PropertyIterator obtained from the container proxy. If\none\n    is to some how obtain a pointer to the subproxy and call\nGetProperty on\n    it (or get a PropertyIterator for the subproxy), the properties\nexposed\n    by the container class ar",
    "e no longer applicable.\n    If two exposed properties are exposed with the same name, then a\nWarning is\n    flagged -- only one of the two exposed properties will get\nexposed.\n\nSee Also:\n\nvtkSMProxyManager vtkSMProperty vtkSMSourceProxy\nvtkSMPropertyIterator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

