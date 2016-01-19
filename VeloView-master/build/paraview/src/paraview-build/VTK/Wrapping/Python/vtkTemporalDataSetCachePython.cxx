// python wrapper for vtkTemporalDataSetCache
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTemporalDataSetCache.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTemporalDataSetCache(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTemporalDataSetCacheNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkTemporalDataSetCache_Doc();


static PyObject *
PyvtkTemporalDataSetCache_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSetCache *op = static_cast<vtkTemporalDataSetCache *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTemporalDataSetCache::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalDataSetCache_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSetCache *op = static_cast<vtkTemporalDataSetCache *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalDataSetCache::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalDataSetCache_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSetCache *op = static_cast<vtkTemporalDataSetCache *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTemporalDataSetCache *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalDataSetCache::NewInstance());

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
PyvtkTemporalDataSetCache_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTemporalDataSetCache *tempr = vtkTemporalDataSetCache::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalDataSetCache_SetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSetCache *op = static_cast<vtkTemporalDataSetCache *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheSize(temp0);
      }
    else
      {
      op->vtkTemporalDataSetCache::SetCacheSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalDataSetCache_GetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSetCache *op = static_cast<vtkTemporalDataSetCache *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCacheSize() :
      op->vtkTemporalDataSetCache::GetCacheSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalDataSetCache_Methods[] = {
  {(char*)"GetClassName", PyvtkTemporalDataSetCache_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTemporalDataSetCache_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTemporalDataSetCache_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTemporalDataSetCache\nC++: vtkTemporalDataSetCache *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTemporalDataSetCache_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTemporalDataSetCache\nC++: vtkTemporalDataSetCache *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCacheSize", PyvtkTemporalDataSetCache_SetCacheSize, METH_VARARGS,
   (char*)"V.SetCacheSize(int)\nC++: void SetCacheSize(int size)\n\nThis is the maximum number of time steps that can be retained in\nmemory. it defaults to 10.\n"},
  {(char*)"GetCacheSize", PyvtkTemporalDataSetCache_GetCacheSize, METH_VARARGS,
   (char*)"V.GetCacheSize() -> int\nC++: int GetCacheSize()\n\nThis is the maximum number of time steps that can be retained in\nmemory. it defaults to 10.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTemporalDataSetCache_StaticNew()
{
  return vtkTemporalDataSetCache::New();
}

PyObject *PyVTKClass_vtkTemporalDataSetCacheNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTemporalDataSetCache_StaticNew,
    PyvtkTemporalDataSetCache_Methods,
    "vtkTemporalDataSetCache", modulename,
    NULL, NULL,
    PyvtkTemporalDataSetCache_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTemporalDataSetCache_Doc()
{
  static const char *docstring[] = {
    "vtkTemporalDataSetCache - cache time steps\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkTemporalDataSetCache cache time step requests of a temporal\ndataset, when cached data is requested it is returned using a shallow\ncopy.\n\nThanks:\n\nKen Martin (Kitware) and John Bidiscombe of CSCS - Swiss National\nSupercomputing Centre for creating and contributing this class. For\nrelated material, please refer to : John Biddiscombe, Berk Geveci,\nKen Martin, Kenneth Moreland, David Thompson, \"Tim",
    "e Dependent Processing in a Parallel Pipeline\nArchitecture\", IEEE Visualization 2007.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTemporalDataSetCache(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTemporalDataSetCacheNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTemporalDataSetCache", o) != 0)
    {
    Py_DECREF(o);
    }

}

