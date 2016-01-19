// python wrapper for vtkSMStateLoader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMStateLoader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMStateLoader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMStateLoaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDeserializerXMLNew
extern "C" { PyObject *PyVTKClass_vtkSMDeserializerXMLNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDeserializerXMLNew
#endif

static const char **PyvtkSMStateLoader_Doc();


static PyObject *
PyvtkSMStateLoader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMStateLoader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLoader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMStateLoader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLoader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMStateLoader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMStateLoader::NewInstance());

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
PyvtkSMStateLoader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMStateLoader *tempr = vtkSMStateLoader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLoader_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    int tempr = (ap.IsBound() ?
      op->LoadState(temp0, temp1) :
      op->vtkSMStateLoader::LoadState(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLoader_SetProxyLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxyLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  vtkSMProxyLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxyLocator"))
    {
    if (ap.IsBound())
      {
      op->SetProxyLocator(temp0);
      }
    else
      {
      op->vtkSMStateLoader::SetProxyLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLoader_GetProxyLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxyLocator *tempr = (ap.IsBound() ?
      op->GetProxyLocator() :
      op->vtkSMStateLoader::GetProxyLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLoader_SetKeepIdMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeepIdMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeepIdMapping(temp0);
      }
    else
      {
      op->vtkSMStateLoader::SetKeepIdMapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLoader_GetKeepIdMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeepIdMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetKeepIdMapping() :
      op->vtkSMStateLoader::GetKeepIdMapping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLoader_KeepIdMappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepIdMappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->KeepIdMappingOn();
      }
    else
      {
      op->vtkSMStateLoader::KeepIdMappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLoader_KeepIdMappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepIdMappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->KeepIdMappingOff();
      }
    else
      {
      op->vtkSMStateLoader::KeepIdMappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLoader_GetMappingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMappingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetMappingArray(temp0) :
      op->vtkSMStateLoader::GetMappingArray(temp0));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMStateLoader_Methods[] = {
  {(char*)"GetClassName", PyvtkSMStateLoader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMStateLoader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMStateLoader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMStateLoader\nC++: vtkSMStateLoader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMStateLoader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMStateLoader\nC++: vtkSMStateLoader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"LoadState", PyvtkSMStateLoader_LoadState, METH_VARARGS,
   (char*)"V.LoadState(vtkPVXMLElement, bool) -> int\nC++: int LoadState(vtkPVXMLElement *rootElement,\n    bool keepOriginalId=false)\n\nLoad the state from the given root element.\n"},
  {(char*)"SetProxyLocator", PyvtkSMStateLoader_SetProxyLocator, METH_VARARGS,
   (char*)"V.SetProxyLocator(vtkSMProxyLocator)\nC++: void SetProxyLocator(vtkSMProxyLocator *loc)\n\nGet/Set the proxy locator to use. Default is vtkSMProxyLocator\nwill be used.\n"},
  {(char*)"GetProxyLocator", PyvtkSMStateLoader_GetProxyLocator, METH_VARARGS,
   (char*)"V.GetProxyLocator() -> vtkSMProxyLocator\nC++: vtkSMProxyLocator *GetProxyLocator()\n\nGet/Set the proxy locator to use. Default is vtkSMProxyLocator\nwill be used.\n"},
  {(char*)"SetKeepIdMapping", PyvtkSMStateLoader_SetKeepIdMapping, METH_VARARGS,
   (char*)"V.SetKeepIdMapping(int)\nC++: void SetKeepIdMapping(int a)\n\nAllow the loader to keep the mapping between the id from the\nloaded state to the current proxy attributed id.\n"},
  {(char*)"GetKeepIdMapping", PyvtkSMStateLoader_GetKeepIdMapping, METH_VARARGS,
   (char*)"V.GetKeepIdMapping() -> int\nC++: int GetKeepIdMapping()\n\nAllow the loader to keep the mapping between the id from the\nloaded state to the current proxy attributed id.\n"},
  {(char*)"KeepIdMappingOn", PyvtkSMStateLoader_KeepIdMappingOn, METH_VARARGS,
   (char*)"V.KeepIdMappingOn()\nC++: void KeepIdMappingOn()\n\nAllow the loader to keep the mapping between the id from the\nloaded state to the current proxy attributed id.\n"},
  {(char*)"KeepIdMappingOff", PyvtkSMStateLoader_KeepIdMappingOff, METH_VARARGS,
   (char*)"V.KeepIdMappingOff()\nC++: void KeepIdMappingOff()\n\nAllow the loader to keep the mapping between the id from the\nloaded state to the current proxy attributed id.\n"},
  {(char*)"GetMappingArray", PyvtkSMStateLoader_GetMappingArray, METH_VARARGS,
   (char*)"V.GetMappingArray(int) -> (int, ...)\nC++: vtkTypeUInt32 *GetMappingArray(int &size)\n\nReturn an array of ids. The ids are stored in the following order\nand the size of the array is provided as argument. [key, value,\nkey, value, ...] The array is kept internaly using a std::vector\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMStateLoader_StaticNew()
{
  return vtkSMStateLoader::New();
}

PyObject *PyVTKClass_vtkSMStateLoaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMStateLoader_StaticNew,
    PyvtkSMStateLoader_Methods,
    "vtkSMStateLoader", modulename,
    NULL, NULL,
    PyvtkSMStateLoader_Doc(),
    PyVTKClass_vtkSMDeserializerXMLNew(modulename));
  return cls;
}

const char **PyvtkSMStateLoader_Doc()
{
  static const char *docstring[] = {
    "vtkSMStateLoader - Utility class to load state from XML\n\n",
    "Superclass: vtkSMDeserializerXML\n\n",
    "vtkSMStateLoader can load server manager state from a given\nvtkPVXMLElement. This element is usually populated by a\nvtkPVXMLParser.\n\nSee Also:\n\nvtkPVXMLParser vtkPVXMLElement\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMStateLoader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMStateLoaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMStateLoader", o) != 0)
    {
    Py_DECREF(o);
    }

}

