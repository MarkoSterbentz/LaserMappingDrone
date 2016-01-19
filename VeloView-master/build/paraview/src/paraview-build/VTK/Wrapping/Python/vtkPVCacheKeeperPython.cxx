// python wrapper for vtkPVCacheKeeper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVCacheKeeper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVCacheKeeper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVCacheKeeperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkPVCacheKeeper_Doc();


static PyObject *
PyvtkPVCacheKeeper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVCacheKeeper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCacheKeeper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVCacheKeeper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCacheKeeper::NewInstance());

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
PyvtkPVCacheKeeper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVCacheKeeper *tempr = vtkPVCacheKeeper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_RemoveAllCaches(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllCaches");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllCaches();
      }
    else
      {
      op->vtkPVCacheKeeper::RemoveAllCaches();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_SetCacheTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheTime(temp0);
      }
    else
      {
      op->vtkPVCacheKeeper::SetCacheTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_GetCacheTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCacheTime() :
      op->vtkPVCacheKeeper::GetCacheTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_IsCached_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCached");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsCached(temp0) :
      op->vtkPVCacheKeeper::IsCached(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVCacheKeeper_IsCached_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCached");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsCached() :
      op->vtkPVCacheKeeper::IsCached());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVCacheKeeper_IsCached(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVCacheKeeper_IsCached_s1(self, args);
    case 0:
      return PyvtkPVCacheKeeper_IsCached_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsCached");
  return NULL;
}



static PyObject *
PyvtkPVCacheKeeper_SetCachingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCachingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCachingEnabled(temp0);
      }
    else
      {
      op->vtkPVCacheKeeper::SetCachingEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_GetCachingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCachingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCachingEnabled() :
      op->vtkPVCacheKeeper::GetCachingEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_CachingEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CachingEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CachingEnabledOn();
      }
    else
      {
      op->vtkPVCacheKeeper::CachingEnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_CachingEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CachingEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CachingEnabledOff();
      }
    else
      {
      op->vtkPVCacheKeeper::CachingEnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVCacheKeeper_Methods[] = {
  {(char*)"GetClassName", PyvtkPVCacheKeeper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVCacheKeeper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVCacheKeeper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVCacheKeeper\nC++: vtkPVCacheKeeper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVCacheKeeper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVCacheKeeper\nC++: vtkPVCacheKeeper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RemoveAllCaches", PyvtkPVCacheKeeper_RemoveAllCaches, METH_VARARGS,
   (char*)"V.RemoveAllCaches()\nC++: void RemoveAllCaches()\n\nMethods for saving, clearing and updating flip books. This\nremoves all saved cache.\n"},
  {(char*)"SetCacheTime", PyvtkPVCacheKeeper_SetCacheTime, METH_VARARGS,
   (char*)"V.SetCacheTime(float)\nC++: void SetCacheTime(double a)\n\nSet/Get the current cache time.\n"},
  {(char*)"GetCacheTime", PyvtkPVCacheKeeper_GetCacheTime, METH_VARARGS,
   (char*)"V.GetCacheTime() -> float\nC++: double GetCacheTime()\n\nSet/Get the current cache time.\n"},
  {(char*)"IsCached", PyvtkPVCacheKeeper_IsCached, METH_VARARGS,
   (char*)"V.IsCached(float) -> bool\nC++: bool IsCached(double cacheTime)\nV.IsCached() -> bool\nC++: bool IsCached()\n\nReturns if the given cacheTime is available in the cache. Does\nnot cause any updates.\n"},
  {(char*)"SetCachingEnabled", PyvtkPVCacheKeeper_SetCachingEnabled, METH_VARARGS,
   (char*)"V.SetCachingEnabled(bool)\nC++: void SetCachingEnabled(bool a)\n\nGet/Set if caching is enabled. Default is true.\n"},
  {(char*)"GetCachingEnabled", PyvtkPVCacheKeeper_GetCachingEnabled, METH_VARARGS,
   (char*)"V.GetCachingEnabled() -> bool\nC++: bool GetCachingEnabled()\n\nGet/Set if caching is enabled. Default is true.\n"},
  {(char*)"CachingEnabledOn", PyvtkPVCacheKeeper_CachingEnabledOn, METH_VARARGS,
   (char*)"V.CachingEnabledOn()\nC++: void CachingEnabledOn()\n\nGet/Set if caching is enabled. Default is true.\n"},
  {(char*)"CachingEnabledOff", PyvtkPVCacheKeeper_CachingEnabledOff, METH_VARARGS,
   (char*)"V.CachingEnabledOff()\nC++: void CachingEnabledOff()\n\nGet/Set if caching is enabled. Default is true.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVCacheKeeper_StaticNew()
{
  return vtkPVCacheKeeper::New();
}

PyObject *PyVTKClass_vtkPVCacheKeeperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVCacheKeeper_StaticNew,
    PyvtkPVCacheKeeper_Methods,
    "vtkPVCacheKeeper", modulename,
    NULL, NULL,
    PyvtkPVCacheKeeper_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPVCacheKeeper_Doc()
{
  static const char *docstring[] = {
    "vtkPVCacheKeeper - manages data cache for flip book animations.\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkPVCacheKeeper manages data cache for flip book animations. When\ncaching is disabled, this simply acts as a pass through filter. When\ncaching is enabled, is the current time step has been previously\ncached then this filter shuts the update request, otherwise\npropagates the update and then cache the result for later use.  The\ncurrent time step is set using SetCacheTime().\n\nSee Also:\n\nvtkPVCacheKe",
    "eperPipeline\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVCacheKeeper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVCacheKeeperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVCacheKeeper", o) != 0)
    {
    Py_DECREF(o);
    }

}

