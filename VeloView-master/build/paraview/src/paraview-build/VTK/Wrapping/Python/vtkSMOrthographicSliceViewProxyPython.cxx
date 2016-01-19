// python wrapper for vtkSMOrthographicSliceViewProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMOrthographicSliceViewProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMOrthographicSliceViewProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMOrthographicSliceViewProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMRenderViewProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMRenderViewProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMRenderViewProxyNew
#endif

static const char **PyvtkSMOrthographicSliceViewProxy_Doc();


static PyObject *
PyvtkSMOrthographicSliceViewProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrthographicSliceViewProxy *op = static_cast<vtkSMOrthographicSliceViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMOrthographicSliceViewProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOrthographicSliceViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrthographicSliceViewProxy *op = static_cast<vtkSMOrthographicSliceViewProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMOrthographicSliceViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOrthographicSliceViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrthographicSliceViewProxy *op = static_cast<vtkSMOrthographicSliceViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMOrthographicSliceViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMOrthographicSliceViewProxy::NewInstance());

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
PyvtkSMOrthographicSliceViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMOrthographicSliceViewProxy *tempr = vtkSMOrthographicSliceViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOrthographicSliceViewProxy_GetRepresentationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrthographicSliceViewProxy *op = static_cast<vtkSMOrthographicSliceViewProxy *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetRepresentationType(temp0, temp1) :
      op->vtkSMOrthographicSliceViewProxy::GetRepresentationType(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMOrthographicSliceViewProxy_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrthographicSliceViewProxy *op = static_cast<vtkSMOrthographicSliceViewProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    vtkSMRepresentationProxy *tempr = (ap.IsBound() ?
      op->CreateDefaultRepresentation(temp0, temp1) :
      op->vtkSMOrthographicSliceViewProxy::CreateDefaultRepresentation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMOrthographicSliceViewProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMOrthographicSliceViewProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMOrthographicSliceViewProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMOrthographicSliceViewProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMOrthographicSliceViewProxy\nC++: vtkSMOrthographicSliceViewProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMOrthographicSliceViewProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMOrthographicSliceViewProxy\nC++: vtkSMOrthographicSliceViewProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetRepresentationType", PyvtkSMOrthographicSliceViewProxy_GetRepresentationType, METH_VARARGS,
   (char*)"V.GetRepresentationType(vtkSMSourceProxy, int) -> string\nC++: virtual const char *GetRepresentationType(\n    vtkSMSourceProxy *producer, int outputPort)\n\nOverridden to forward the call to the internal root view proxy.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkSMOrthographicSliceViewProxy_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation(vtkSMProxy, int)\n    -> vtkSMRepresentationProxy\nC++: virtual vtkSMRepresentationProxy *CreateDefaultRepresentation(\n    vtkSMProxy *proxy, int outputPort)\n\nOverridden to set initial default slices when a representation is\ncreated. Not sure that's the best way to do this, but leaving the\nlogic unchanged in this pass.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMOrthographicSliceViewProxy_StaticNew()
{
  return vtkSMOrthographicSliceViewProxy::New();
}

PyObject *PyVTKClass_vtkSMOrthographicSliceViewProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMOrthographicSliceViewProxy_StaticNew,
    PyvtkSMOrthographicSliceViewProxy_Methods,
    "vtkSMOrthographicSliceViewProxy", modulename,
    NULL, NULL,
    PyvtkSMOrthographicSliceViewProxy_Doc(),
    PyVTKClass_vtkSMRenderViewProxyNew(modulename));
  return cls;
}

const char **PyvtkSMOrthographicSliceViewProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMOrthographicSliceViewProxy\n\n",
    "Superclass: vtkSMRenderViewProxy\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMOrthographicSliceViewProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMOrthographicSliceViewProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMOrthographicSliceViewProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

