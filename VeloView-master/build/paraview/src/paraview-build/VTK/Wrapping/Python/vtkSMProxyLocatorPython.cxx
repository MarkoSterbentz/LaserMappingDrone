// python wrapper for vtkSMProxyLocator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMProxyLocator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMProxyLocator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMProxyLocatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMProxyLocator_Doc();


static PyObject *
PyvtkSMProxyLocator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMProxyLocator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxyLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyLocator::NewInstance());

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
PyvtkSMProxyLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMProxyLocator *tempr = vtkSMProxyLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_LocateProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LocateProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->LocateProxy(temp0) :
      op->vtkSMProxyLocator::LocateProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_SetDeserializer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeserializer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  vtkSMDeserializer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMDeserializer"))
    {
    if (ap.IsBound())
      {
      op->SetDeserializer(temp0);
      }
    else
      {
      op->vtkSMProxyLocator::SetDeserializer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_GetDeserializer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeserializer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDeserializer *tempr = (ap.IsBound() ?
      op->GetDeserializer() :
      op->vtkSMProxyLocator::GetDeserializer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_GetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSession *tempr = (ap.IsBound() ?
      op->GetSession() :
      op->vtkSMProxyLocator::GetSession());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    if (ap.IsBound())
      {
      op->SetSession(temp0);
      }
    else
      {
      op->vtkSMProxyLocator::SetSession(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSMProxyLocator::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_GetLocatedProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocatedProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  vtkCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->GetLocatedProxies(temp0);
      }
    else
      {
      op->vtkSMProxyLocator::GetLocatedProxies(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_UseSessionToLocateProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSessionToLocateProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UseSessionToLocateProxy(temp0);
      }
    else
      {
      op->vtkSMProxyLocator::UseSessionToLocateProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_AssignProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  unsigned int temp0;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->AssignProxy(temp0, temp1);
      }
    else
      {
      op->vtkSMProxyLocator::AssignProxy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMProxyLocator_Methods[] = {
  {(char*)"GetClassName", PyvtkSMProxyLocator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMProxyLocator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMProxyLocator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMProxyLocator\nC++: vtkSMProxyLocator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMProxyLocator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMProxyLocator\nC++: vtkSMProxyLocator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"LocateProxy", PyvtkSMProxyLocator_LocateProxy, METH_VARARGS,
   (char*)"V.LocateProxy(int) -> vtkSMProxy\nC++: virtual vtkSMProxy *LocateProxy(vtkTypeUInt32 globalID)\n\nLocate a proxy with the given \"name\". If none can be found\nreturns NULL. If a proxy with the name was not previously\nlocated, it will ask the Deserializer (if any) to create a new\nproxy is possible.\n"},
  {(char*)"SetDeserializer", PyvtkSMProxyLocator_SetDeserializer, METH_VARARGS,
   (char*)"V.SetDeserializer(vtkSMDeserializer)\nC++: void SetDeserializer(vtkSMDeserializer *)\n\nGet/Set the de-serializer to used to locate XMLs/Protobuf for\nunknown proxies requested to be located using LocateProxy().\n"},
  {(char*)"GetDeserializer", PyvtkSMProxyLocator_GetDeserializer, METH_VARARGS,
   (char*)"V.GetDeserializer() -> vtkSMDeserializer\nC++: vtkSMDeserializer *GetDeserializer()\n\nGet/Set the de-serializer to used to locate XMLs/Protobuf for\nunknown proxies requested to be located using LocateProxy().\n"},
  {(char*)"GetSession", PyvtkSMProxyLocator_GetSession, METH_VARARGS,
   (char*)"V.GetSession() -> vtkSMSession\nC++: virtual vtkSMSession *GetSession()\n\nGet/Set the session.\n"},
  {(char*)"SetSession", PyvtkSMProxyLocator_SetSession, METH_VARARGS,
   (char*)"V.SetSession(vtkSMSession)\nC++: virtual void SetSession(vtkSMSession *s)\n\nGet/Set the session.\n"},
  {(char*)"Clear", PyvtkSMProxyLocator_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: virtual void Clear()\n\nClear the locator.\n"},
  {(char*)"GetLocatedProxies", PyvtkSMProxyLocator_GetLocatedProxies, METH_VARARGS,
   (char*)"V.GetLocatedProxies(vtkCollection)\nC++: virtual void GetLocatedProxies(\n    vtkCollection *collectionToFill)\n\nCopy all the Located proxy into the collection. This allow to\nkeep a reference to them outside of the current locator. This is\nneeded if we don't want to delete those proxy and if we want to\nClear() the current ProxyLocator.\n"},
  {(char*)"UseSessionToLocateProxy", PyvtkSMProxyLocator_UseSessionToLocateProxy, METH_VARARGS,
   (char*)"V.UseSessionToLocateProxy(bool)\nC++: virtual void UseSessionToLocateProxy(bool useSessionToo)\n\n"},
  {(char*)"AssignProxy", PyvtkSMProxyLocator_AssignProxy, METH_VARARGS,
   (char*)"V.AssignProxy(int, vtkSMProxy)\nC++: virtual void AssignProxy(vtkTypeUInt32 id, vtkSMProxy *proxy)\n\nFor custom applications managing custom state loading, one can\nuse this method to register proxies with locator to use  when\nLocateProxy() before attempting the standard route i.e. using the\ndeserializer or session.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMProxyLocator_StaticNew()
{
  return vtkSMProxyLocator::New();
}

PyObject *PyVTKClass_vtkSMProxyLocatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMProxyLocator_StaticNew,
    PyvtkSMProxyLocator_Methods,
    "vtkSMProxyLocator", modulename,
    NULL, NULL,
    PyvtkSMProxyLocator_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMProxyLocator_Doc()
{
  static const char *docstring[] = {
    "vtkSMProxyLocator - is used to locate proxies referred to in state\nxmls\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMProxyLocator is used to locate proxies referred to in state xmls\n(and otherwise) when loading state files.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMProxyLocator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMProxyLocatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMProxyLocator", o) != 0)
    {
    Py_DECREF(o);
    }

}

