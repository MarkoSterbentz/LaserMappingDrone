// python wrapper for vtkSMRepresentationProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkSMRepresentationProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMRepresentationProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMRepresentationProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMSourceProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMSourceProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMSourceProxyNew
#endif

static const char **PyvtkSMRepresentationProxy_Doc();


static PyObject *
PyvtkSMRepresentationProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMRepresentationProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMRepresentationProxy::NewInstance());

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
PyvtkSMRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMRepresentationProxy *tempr = vtkSMRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_MarkDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

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
      op->vtkSMRepresentationProxy::MarkDirty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_GetRepresentedDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentedDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetRepresentedDataInformation() :
      op->vtkSMRepresentationProxy::GetRepresentedDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_GetProminentValuesInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProminentValuesInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  vtkStdString temp0;
  int temp1;
  int temp2;
  double temp3 = 1e-6;
  double temp4 = 1e-3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    vtkPVProminentValuesInformation *tempr = (ap.IsBound() ?
      op->GetProminentValuesInformation(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSMRepresentationProxy::GetProminentValuesInformation(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_UpdatePipeline_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdatePipeline();
      }
    else
      {
      op->vtkSMRepresentationProxy::UpdatePipeline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMRepresentationProxy_UpdatePipeline_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UpdatePipeline(temp0);
      }
    else
      {
      op->vtkSMRepresentationProxy::UpdatePipeline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMRepresentationProxy_UpdatePipeline(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMRepresentationProxy_UpdatePipeline_s1(self, args);
    case 1:
      return PyvtkSMRepresentationProxy_UpdatePipeline_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdatePipeline");
  return NULL;
}



static PyObject *
PyvtkSMRepresentationProxy_PostUpdateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostUpdateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PostUpdateData();
      }
    else
      {
      op->vtkSMRepresentationProxy::PostUpdateData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_ViewUpdated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewUpdated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->ViewUpdated(temp0);
      }
    else
      {
      op->vtkSMRepresentationProxy::ViewUpdated(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_GetGlobalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetGlobalID() :
      op->vtkSMRepresentationProxy::GetGlobalID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_SetRepresentationType_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->SetRepresentationType(temp0) :
      op->vtkSMRepresentationProxy::SetRepresentationType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMRepresentationProxy_SetRepresentationType_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRepresentationType");

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    bool tempr = vtkSMRepresentationProxy::SetRepresentationType(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMRepresentationProxy_SetRepresentationType(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMRepresentationProxy_SetRepresentationType_s1(self, args);
    case 2:
      return PyvtkSMRepresentationProxy_SetRepresentationType_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRepresentationType");
  return NULL;
}


static PyMethodDef PyvtkSMRepresentationProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMRepresentationProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMRepresentationProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMRepresentationProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMRepresentationProxy\nC++: vtkSMRepresentationProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMRepresentationProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMRepresentationProxy\nC++: vtkSMRepresentationProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"MarkDirty", PyvtkSMRepresentationProxy_MarkDirty, METH_VARARGS,
   (char*)"V.MarkDirty(vtkSMProxy)\nC++: virtual void MarkDirty(vtkSMProxy *modifiedProxy)\n\nCalls MarkDirty() and invokes ModifiedEvent.\n"},
  {(char*)"GetRepresentedDataInformation", PyvtkSMRepresentationProxy_GetRepresentedDataInformation, METH_VARARGS,
   (char*)"V.GetRepresentedDataInformation() -> vtkPVDataInformation\nC++: virtual vtkPVDataInformation *GetRepresentedDataInformation()\n\nReturns information about the data that is finally rendered by\nthis representation.\n"},
  {(char*)"GetProminentValuesInformation", PyvtkSMRepresentationProxy_GetProminentValuesInformation, METH_VARARGS,
   (char*)"V.GetProminentValuesInformation(string, int, int, float, float)\n    -> vtkPVProminentValuesInformation\nC++: virtual vtkPVProminentValuesInformation *GetProminentValuesInformation(\n    vtkStdString name, int fieldAssoc, int numComponents,\n    double uncertaintyAllowed=1e-6, double fraction=1e-3)\n\nReturns information about a specific array component's prominent\nvalues (or NULL).\n\nThe name, fieldAssoc, and numComponents arguments specify which\narrays on the input dataset to examine. Because multiblock\ndatasets may have multiple arrays of the same name on different\nblocks, and these arrays may not have the same storage type or\nnumber of components, this method requires you to specify the\nnumber of components per tuple the array(s) of interest must\nhave. You may call GetRepresentedDataInformation() to obtain the\nnumber of components for any array.\n\nSee vtkAbstractArray::GetProminentComponentValues for more\ninformation about the uncertaintyAllowed and fraction arguments.\n"},
  {(char*)"UpdatePipeline", PyvtkSMRepresentationProxy_UpdatePipeline, METH_VARARGS,
   (char*)"V.UpdatePipeline()\nC++: virtual void UpdatePipeline()\nV.UpdatePipeline(float)\nC++: virtual void UpdatePipeline(double time)\n\nCalls Update() on all sources. It also creates output ports if\nthey are not already created.\n"},
  {(char*)"PostUpdateData", PyvtkSMRepresentationProxy_PostUpdateData, METH_VARARGS,
   (char*)"V.PostUpdateData()\nC++: virtual void PostUpdateData()\n\nOverridden to reset this->MarkedModified flag.\n"},
  {(char*)"ViewUpdated", PyvtkSMRepresentationProxy_ViewUpdated, METH_VARARGS,
   (char*)"V.ViewUpdated(vtkSMProxy)\nC++: virtual void ViewUpdated(vtkSMProxy *view)\n\nCalled after the view updates.\n"},
  {(char*)"GetGlobalID", PyvtkSMRepresentationProxy_GetGlobalID, METH_VARARGS,
   (char*)"V.GetGlobalID() -> int\nC++: virtual vtkTypeUInt32 GetGlobalID()\n\nOverridden to reserve additional IDs for use by internal\ncomposite representation\n"},
  {(char*)"SetRepresentationType", PyvtkSMRepresentationProxy_SetRepresentationType, METH_VARARGS,
   (char*)"V.SetRepresentationType(string) -> bool\nC++: virtual bool SetRepresentationType(const char *type)\nV.SetRepresentationType(vtkSMProxy, string) -> bool\nC++: static bool SetRepresentationType(vtkSMProxy *repr,\n    const char *type)\n\nSet the representation type. Default implementation simply\nupdates the \"Representation\" property, if present with the value\nprovided. Subclasses can override this method to add custom logic\nto manage the representation state to support the change e.g.\npick a scalar color array when switching to Volume or Slice\nrepresentation, for example. Returns true, if the change was\nsuccessful, otherwise returns false.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMRepresentationProxy_StaticNew()
{
  return vtkSMRepresentationProxy::New();
}

PyObject *PyVTKClass_vtkSMRepresentationProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMRepresentationProxy_StaticNew,
    PyvtkSMRepresentationProxy_Methods,
    "vtkSMRepresentationProxy", modulename,
    NULL, NULL,
    PyvtkSMRepresentationProxy_Doc(),
    PyVTKClass_vtkSMSourceProxyNew(modulename));
  return cls;
}

const char **PyvtkSMRepresentationProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMRepresentationProxy\n\n",
    "Superclass: vtkSMSourceProxy\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMRepresentationProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMRepresentationProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMRepresentationProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

