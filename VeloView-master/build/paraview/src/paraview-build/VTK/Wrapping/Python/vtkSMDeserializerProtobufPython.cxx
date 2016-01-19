// python wrapper for vtkSMDeserializerProtobuf
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMDeserializerProtobuf.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMDeserializerProtobuf(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMDeserializerProtobufNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDeserializerNew
extern "C" { PyObject *PyVTKClass_vtkSMDeserializerNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDeserializerNew
#endif

static const char **PyvtkSMDeserializerProtobuf_Doc();


static PyObject *
PyvtkSMDeserializerProtobuf_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializerProtobuf *op = static_cast<vtkSMDeserializerProtobuf *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMDeserializerProtobuf::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDeserializerProtobuf_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializerProtobuf *op = static_cast<vtkSMDeserializerProtobuf *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDeserializerProtobuf::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDeserializerProtobuf_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializerProtobuf *op = static_cast<vtkSMDeserializerProtobuf *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDeserializerProtobuf *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDeserializerProtobuf::NewInstance());

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
PyvtkSMDeserializerProtobuf_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMDeserializerProtobuf *tempr = vtkSMDeserializerProtobuf::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDeserializerProtobuf_GetStateLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStateLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializerProtobuf *op = static_cast<vtkSMDeserializerProtobuf *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMStateLocator *tempr = (ap.IsBound() ?
      op->GetStateLocator() :
      op->vtkSMDeserializerProtobuf::GetStateLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDeserializerProtobuf_SetStateLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStateLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializerProtobuf *op = static_cast<vtkSMDeserializerProtobuf *>(vp);

  vtkSMStateLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMStateLocator"))
    {
    if (ap.IsBound())
      {
      op->SetStateLocator(temp0);
      }
    else
      {
      op->vtkSMDeserializerProtobuf::SetStateLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMDeserializerProtobuf_Methods[] = {
  {(char*)"GetClassName", PyvtkSMDeserializerProtobuf_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMDeserializerProtobuf_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMDeserializerProtobuf_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMDeserializerProtobuf\nC++: vtkSMDeserializerProtobuf *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMDeserializerProtobuf_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMDeserializerProtobuf\nC++: vtkSMDeserializerProtobuf *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetStateLocator", PyvtkSMDeserializerProtobuf_GetStateLocator, METH_VARARGS,
   (char*)"V.GetStateLocator() -> vtkSMStateLocator\nC++: vtkSMStateLocator *GetStateLocator()\n\nGet/Set the session.\n"},
  {(char*)"SetStateLocator", PyvtkSMDeserializerProtobuf_SetStateLocator, METH_VARARGS,
   (char*)"V.SetStateLocator(vtkSMStateLocator)\nC++: virtual void SetStateLocator(vtkSMStateLocator *)\n\nGet/Set the session.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMDeserializerProtobuf_StaticNew()
{
  return vtkSMDeserializerProtobuf::New();
}

PyObject *PyVTKClass_vtkSMDeserializerProtobufNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMDeserializerProtobuf_StaticNew,
    PyvtkSMDeserializerProtobuf_Methods,
    "vtkSMDeserializerProtobuf", modulename,
    NULL, NULL,
    PyvtkSMDeserializerProtobuf_Doc(),
    PyVTKClass_vtkSMDeserializerNew(modulename));
  return cls;
}

const char **PyvtkSMDeserializerProtobuf_Doc()
{
  static const char *docstring[] = {
    "vtkSMDeserializerProtobuf - deserializes proxies from their Protobuf\nstates.\n\n",
    "Superclass: vtkSMDeserializer\n\n",
    "vtkSMDeserializerProtobuf is used to deserialize proxies from their\nProtobuf states. This is the base class of deserialization classes\nthat load Protobuf messagess to restore proxy/servermanager state (or\npart thereof).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMDeserializerProtobuf(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMDeserializerProtobufNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMDeserializerProtobuf", o) != 0)
    {
    Py_DECREF(o);
    }

}

