// python wrapper for vtkSMDeserializerXMLCache
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMDeserializerXMLCache.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMDeserializerXMLCache(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMDeserializerXMLCacheNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDeserializerXMLNew
extern "C" { PyObject *PyVTKClass_vtkSMDeserializerXMLNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDeserializerXMLNew
#endif

static const char **PyvtkSMDeserializerXMLCache_Doc();


static PyObject *
PyvtkSMDeserializerXMLCache_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializerXMLCache *op = static_cast<vtkSMDeserializerXMLCache *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMDeserializerXMLCache::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDeserializerXMLCache_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializerXMLCache *op = static_cast<vtkSMDeserializerXMLCache *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDeserializerXMLCache::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDeserializerXMLCache_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializerXMLCache *op = static_cast<vtkSMDeserializerXMLCache *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDeserializerXMLCache *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDeserializerXMLCache::NewInstance());

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
PyvtkSMDeserializerXMLCache_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMDeserializerXMLCache *tempr = vtkSMDeserializerXMLCache::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDeserializerXMLCache_CacheXMLProxyState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheXMLProxyState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializerXMLCache *op = static_cast<vtkSMDeserializerXMLCache *>(vp);

  unsigned int temp0;
  vtkPVXMLElement *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVXMLElement"))
    {
    if (ap.IsBound())
      {
      op->CacheXMLProxyState(temp0, temp1);
      }
    else
      {
      op->vtkSMDeserializerXMLCache::CacheXMLProxyState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMDeserializerXMLCache_Methods[] = {
  {(char*)"GetClassName", PyvtkSMDeserializerXMLCache_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMDeserializerXMLCache_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMDeserializerXMLCache_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMDeserializerXMLCache\nC++: vtkSMDeserializerXMLCache *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMDeserializerXMLCache_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMDeserializerXMLCache\nC++: vtkSMDeserializerXMLCache *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CacheXMLProxyState", PyvtkSMDeserializerXMLCache_CacheXMLProxyState, METH_VARARGS,
   (char*)"V.CacheXMLProxyState(int, vtkPVXMLElement)\nC++: virtual void CacheXMLProxyState(vtkTypeUInt32 id,\n    vtkPVXMLElement *xml)\n\nAllow to register a given XML state for a given proxy GlobalId\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMDeserializerXMLCache_StaticNew()
{
  return vtkSMDeserializerXMLCache::New();
}

PyObject *PyVTKClass_vtkSMDeserializerXMLCacheNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMDeserializerXMLCache_StaticNew,
    PyvtkSMDeserializerXMLCache_Methods,
    "vtkSMDeserializerXMLCache", modulename,
    NULL, NULL,
    PyvtkSMDeserializerXMLCache_Doc(),
    PyVTKClass_vtkSMDeserializerXMLNew(modulename));
  return cls;
}

const char **PyvtkSMDeserializerXMLCache_Doc()
{
  static const char *docstring[] = {
    "vtkSMDeserializerXMLCache - deserializes proxies from their XML\nstates.\n\n",
    "Superclass: vtkSMDeserializerXML\n\n",
    "vtkSMDeserializerXMLCache is used to deserialize proxies from\npreviously stored XML states.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMDeserializerXMLCache(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMDeserializerXMLCacheNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMDeserializerXMLCache", o) != 0)
    {
    Py_DECREF(o);
    }

}

