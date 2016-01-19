// python wrapper for vtkSMMultiSliceViewProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMMultiSliceViewProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMMultiSliceViewProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMMultiSliceViewProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMRenderViewProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMRenderViewProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMRenderViewProxyNew
#endif

static const char **PyvtkSMMultiSliceViewProxy_Doc();


static PyObject *
PyvtkSMMultiSliceViewProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiSliceViewProxy *op = static_cast<vtkSMMultiSliceViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMMultiSliceViewProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMMultiSliceViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiSliceViewProxy *op = static_cast<vtkSMMultiSliceViewProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMMultiSliceViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMMultiSliceViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiSliceViewProxy *op = static_cast<vtkSMMultiSliceViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMMultiSliceViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMMultiSliceViewProxy::NewInstance());

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
PyvtkSMMultiSliceViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMMultiSliceViewProxy *tempr = vtkSMMultiSliceViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMMultiSliceViewProxy_IsSelectVisiblePointsAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSelectVisiblePointsAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiSliceViewProxy *op = static_cast<vtkSMMultiSliceViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->IsSelectVisiblePointsAvailable() :
      op->vtkSMMultiSliceViewProxy::IsSelectVisiblePointsAvailable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMMultiSliceViewProxy_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiSliceViewProxy *op = static_cast<vtkSMMultiSliceViewProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    vtkSMRepresentationProxy *tempr = (ap.IsBound() ?
      op->CreateDefaultRepresentation(temp0, temp1) :
      op->vtkSMMultiSliceViewProxy::CreateDefaultRepresentation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMMultiSliceViewProxy_GetRepresentationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiSliceViewProxy *op = static_cast<vtkSMMultiSliceViewProxy *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetRepresentationType(temp0, temp1) :
      op->vtkSMMultiSliceViewProxy::GetRepresentationType(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMMultiSliceViewProxy_GetAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiSliceViewProxy *op = static_cast<vtkSMMultiSliceViewProxy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAxisLabel(temp0) :
      op->vtkSMMultiSliceViewProxy::GetAxisLabel(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMMultiSliceViewProxy_GetDataBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiSliceViewProxy *op = static_cast<vtkSMMultiSliceViewProxy *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetDataBounds(temp0);
      }
    else
      {
      op->vtkSMMultiSliceViewProxy::GetDataBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMMultiSliceViewProxy_GetDataBounds_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataBounds");

  vtkSMSourceProxy *temp0 = NULL;
  int temp1;
  double temp2[6];
  double save2[6];
  const int size2 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    bool tempr = vtkSMMultiSliceViewProxy::GetDataBounds(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMMultiSliceViewProxy_GetDataBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMMultiSliceViewProxy_GetDataBounds_s1(self, args);
    case 3:
      return PyvtkSMMultiSliceViewProxy_GetDataBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDataBounds");
  return NULL;
}



static PyObject *
PyvtkSMMultiSliceViewProxy_ForceRepresentationType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ForceRepresentationType");

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    vtkSMMultiSliceViewProxy::ForceRepresentationType(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMMultiSliceViewProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMMultiSliceViewProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMMultiSliceViewProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMMultiSliceViewProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMMultiSliceViewProxy\nC++: vtkSMMultiSliceViewProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMMultiSliceViewProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMMultiSliceViewProxy\nC++: vtkSMMultiSliceViewProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsSelectVisiblePointsAvailable", PyvtkSMMultiSliceViewProxy_IsSelectVisiblePointsAvailable, METH_VARARGS,
   (char*)"V.IsSelectVisiblePointsAvailable() -> string\nC++: virtual const char *IsSelectVisiblePointsAvailable()\n\nSimilar to IsSelectionAvailable(), however, on failure returns\nthe error message otherwise 0.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkSMMultiSliceViewProxy_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation(vtkSMProxy, int)\n    -> vtkSMRepresentationProxy\nC++: virtual vtkSMRepresentationProxy *CreateDefaultRepresentation(\n    vtkSMProxy *proxy, int outputPort)\n\nOverridden to set initial default slices when a representation is\ncreated. Not sure that's the best way to do this, but leaving the\nlogic unchanged in this pass.\n"},
  {(char*)"GetRepresentationType", PyvtkSMMultiSliceViewProxy_GetRepresentationType, METH_VARARGS,
   (char*)"V.GetRepresentationType(vtkSMSourceProxy, int) -> string\nC++: virtual const char *GetRepresentationType(\n    vtkSMSourceProxy *producer, int outputPort)\n\nOverridden to forward the call to the internal root view proxy.\n"},
  {(char*)"GetAxisLabel", PyvtkSMMultiSliceViewProxy_GetAxisLabel, METH_VARARGS,
   (char*)"V.GetAxisLabel(int) -> string\nC++: const char *GetAxisLabel(int axis)\n\nAccess the axis label (0: xaxis, 1: yaxis, 2: zaxis). Returns\nNULL if no custom label was specified.\n"},
  {(char*)"GetDataBounds", PyvtkSMMultiSliceViewProxy_GetDataBounds, METH_VARARGS,
   (char*)"V.GetDataBounds([float, float, float, float, float, float])\nC++: void GetDataBounds(double bounds[6])\nV.GetDataBounds(vtkSMSourceProxy, int, [float, float, float,\n    float, float, float]) -> bool\nC++: static bool GetDataBounds(vtkSMSourceProxy *source,\n    int opport, double bounds[6])\n\nFetchs data bounds from the client-side object. We simply fetch\nthe client-side data bounds since vtkPVMultiSliceView ensures\nthat they are synced among all ranks in Update().\n"},
  {(char*)"ForceRepresentationType", PyvtkSMMultiSliceViewProxy_ForceRepresentationType, METH_VARARGS | METH_STATIC,
   (char*)"V.ForceRepresentationType(vtkSMProxy, string)\nC++: static void ForceRepresentationType(vtkSMProxy *reprProxy,\n    const char *type)\n\nHACK: method to force representation type to \"Slices\".\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMMultiSliceViewProxy_StaticNew()
{
  return vtkSMMultiSliceViewProxy::New();
}

PyObject *PyVTKClass_vtkSMMultiSliceViewProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMMultiSliceViewProxy_StaticNew,
    PyvtkSMMultiSliceViewProxy_Methods,
    "vtkSMMultiSliceViewProxy", modulename,
    NULL, NULL,
    PyvtkSMMultiSliceViewProxy_Doc(),
    PyVTKClass_vtkSMRenderViewProxyNew(modulename));
  return cls;
}

const char **PyvtkSMMultiSliceViewProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMMultiSliceViewProxy\n\n",
    "Superclass: vtkSMRenderViewProxy\n\n",
    "Custom RenderViewProxy to override CreateDefaultRepresentation method\nso only the Multi-Slice representation will be available to the user\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMMultiSliceViewProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMMultiSliceViewProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMMultiSliceViewProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

