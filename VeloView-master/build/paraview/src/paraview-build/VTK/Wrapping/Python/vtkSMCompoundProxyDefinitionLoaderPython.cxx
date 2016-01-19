// python wrapper for vtkSMCompoundProxyDefinitionLoader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMCompoundProxyDefinitionLoader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMCompoundProxyDefinitionLoader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMCompoundProxyDefinitionLoaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDeserializerXMLNew
extern "C" { PyObject *PyVTKClass_vtkSMDeserializerXMLNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDeserializerXMLNew
#endif

static const char **PyvtkSMCompoundProxyDefinitionLoader_Doc();


static PyObject *
PyvtkSMCompoundProxyDefinitionLoader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundProxyDefinitionLoader *op = static_cast<vtkSMCompoundProxyDefinitionLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMCompoundProxyDefinitionLoader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundProxyDefinitionLoader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundProxyDefinitionLoader *op = static_cast<vtkSMCompoundProxyDefinitionLoader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCompoundProxyDefinitionLoader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundProxyDefinitionLoader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundProxyDefinitionLoader *op = static_cast<vtkSMCompoundProxyDefinitionLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMCompoundProxyDefinitionLoader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCompoundProxyDefinitionLoader::NewInstance());

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
PyvtkSMCompoundProxyDefinitionLoader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMCompoundProxyDefinitionLoader *tempr = vtkSMCompoundProxyDefinitionLoader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundProxyDefinitionLoader_SetRootElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundProxyDefinitionLoader *op = static_cast<vtkSMCompoundProxyDefinitionLoader *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    if (ap.IsBound())
      {
      op->SetRootElement(temp0);
      }
    else
      {
      op->vtkSMCompoundProxyDefinitionLoader::SetRootElement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMCompoundProxyDefinitionLoader_Methods[] = {
  {(char*)"GetClassName", PyvtkSMCompoundProxyDefinitionLoader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMCompoundProxyDefinitionLoader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMCompoundProxyDefinitionLoader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMCompoundProxyDefinitionLoader\nC++: vtkSMCompoundProxyDefinitionLoader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMCompoundProxyDefinitionLoader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMCompoundProxyDefinitionLoader\nC++: vtkSMCompoundProxyDefinitionLoader *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetRootElement", PyvtkSMCompoundProxyDefinitionLoader_SetRootElement, METH_VARARGS,
   (char*)"V.SetRootElement(vtkPVXMLElement)\nC++: virtual void SetRootElement(vtkPVXMLElement *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMCompoundProxyDefinitionLoader_StaticNew()
{
  return vtkSMCompoundProxyDefinitionLoader::New();
}

PyObject *PyVTKClass_vtkSMCompoundProxyDefinitionLoaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMCompoundProxyDefinitionLoader_StaticNew,
    PyvtkSMCompoundProxyDefinitionLoader_Methods,
    "vtkSMCompoundProxyDefinitionLoader", modulename,
    NULL, NULL,
    PyvtkSMCompoundProxyDefinitionLoader_Doc(),
    PyVTKClass_vtkSMDeserializerXMLNew(modulename));
  return cls;
}

const char **PyvtkSMCompoundProxyDefinitionLoader_Doc()
{
  static const char *docstring[] = {
    "vtkSMCompoundProxyDefinitionLoader - Creates a compound proxy from an\n\n",
    "Superclass: vtkSMDeserializerXML\n\n",
    "vtkSMCompoundProxyDefinitionLoader can load a compound proxy\ndefinition from a given vtkPVXMLElement. This element can be\npopulated by a vtkPVXMLElement or obtained from the proxy manager.\n\nSee Also:\n\nvtkPVXMLElement vtkPVXMLParser vtkSMProxyManager\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMCompoundProxyDefinitionLoader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMCompoundProxyDefinitionLoaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMCompoundProxyDefinitionLoader", o) != 0)
    {
    Py_DECREF(o);
    }

}

