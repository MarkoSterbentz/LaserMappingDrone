// python wrapper for vtkSMDeserializer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMDeserializer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMDeserializer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMDeserializerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSMDeserializer_Doc();


static PyObject *
PyvtkSMDeserializer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializer *op = static_cast<vtkSMDeserializer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMDeserializer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDeserializer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializer *op = static_cast<vtkSMDeserializer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDeserializer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDeserializer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializer *op = static_cast<vtkSMDeserializer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDeserializer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDeserializer::NewInstance());

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
PyvtkSMDeserializer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMDeserializer *tempr = vtkSMDeserializer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDeserializer_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializer *op = static_cast<vtkSMDeserializer *>(vp);

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
      op->vtkSMDeserializer::SetSession(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDeserializer_GetSessionProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSessionProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializer *op = static_cast<vtkSMDeserializer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSessionProxyManager *tempr = (ap.IsBound() ?
      op->GetSessionProxyManager() :
      op->vtkSMDeserializer::GetSessionProxyManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDeserializer_SetSessionProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSessionProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializer *op = static_cast<vtkSMDeserializer *>(vp);

  vtkSMSessionProxyManager *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager"))
    {
    if (ap.IsBound())
      {
      op->SetSessionProxyManager(temp0);
      }
    else
      {
      op->vtkSMDeserializer::SetSessionProxyManager(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDeserializer_GetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializer *op = static_cast<vtkSMDeserializer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSession *tempr = (ap.IsBound() ?
      op->GetSession() :
      op->vtkSMDeserializer::GetSession());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMDeserializer_Methods[] = {
  {(char*)"GetClassName", PyvtkSMDeserializer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMDeserializer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMDeserializer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMDeserializer\nC++: vtkSMDeserializer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMDeserializer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMDeserializer\nC++: vtkSMDeserializer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSession", PyvtkSMDeserializer_SetSession, METH_VARARGS,
   (char*)"V.SetSession(vtkSMSession)\nC++: void SetSession(vtkSMSession *session)\n\nConvenience method for setting the SessionProxyManager. This is\nequivalent to calling\nvtkSMDeserializer::SetSessionProxyManager(session->GetSessionProxy\nManager()).\n"},
  {(char*)"GetSessionProxyManager", PyvtkSMDeserializer_GetSessionProxyManager, METH_VARARGS,
   (char*)"V.GetSessionProxyManager() -> vtkSMSessionProxyManager\nC++: vtkSMSessionProxyManager *GetSessionProxyManager()\n\nGet/Set the proxy manager on which this deserializer is expected\nto operate.\n"},
  {(char*)"SetSessionProxyManager", PyvtkSMDeserializer_SetSessionProxyManager, METH_VARARGS,
   (char*)"V.SetSessionProxyManager(vtkSMSessionProxyManager)\nC++: void SetSessionProxyManager(vtkSMSessionProxyManager *)\n\nGet/Set the proxy manager on which this deserializer is expected\nto operate.\n"},
  {(char*)"GetSession", PyvtkSMDeserializer_GetSession, METH_VARARGS,
   (char*)"V.GetSession() -> vtkSMSession\nC++: vtkSMSession *GetSession()\n\nProvides access to the session. This is same as calling\nthis->GetSessionProxyManager()->GetSession() (with NULL checks).\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSMDeserializerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSMDeserializer_Methods,
    "vtkSMDeserializer", modulename,
    NULL, NULL,
    PyvtkSMDeserializer_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSMDeserializer_Doc()
{
  static const char *docstring[] = {
    "vtkSMDeserializer - deserializes proxies from their states.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkSMDeserializer is used to deserialize proxies from their\nXML/Protobuf/? states. This is the base class of deserialization\nclasses that load XMLs/Protobuf/? to restore servermanager state (or\npart thereof).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMDeserializer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMDeserializerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMDeserializer", o) != 0)
    {
    Py_DECREF(o);
    }

}

