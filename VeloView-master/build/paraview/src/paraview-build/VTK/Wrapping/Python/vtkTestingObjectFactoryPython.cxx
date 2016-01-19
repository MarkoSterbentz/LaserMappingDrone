// python wrapper for vtkTestingObjectFactory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTestingObjectFactory.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTestingObjectFactory(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTestingObjectFactoryNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectFactoryNew
extern "C" { PyObject *PyVTKClass_vtkObjectFactoryNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectFactoryNew
#endif

static const char **PyvtkTestingObjectFactory_Doc();


static PyObject *
PyvtkTestingObjectFactory_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingObjectFactory *op = static_cast<vtkTestingObjectFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTestingObjectFactory::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTestingObjectFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingObjectFactory *op = static_cast<vtkTestingObjectFactory *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTestingObjectFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTestingObjectFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingObjectFactory *op = static_cast<vtkTestingObjectFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTestingObjectFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTestingObjectFactory::NewInstance());

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
PyvtkTestingObjectFactory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTestingObjectFactory *tempr = vtkTestingObjectFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTestingObjectFactory_GetVTKSourceVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKSourceVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingObjectFactory *op = static_cast<vtkTestingObjectFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetVTKSourceVersion() :
      op->vtkTestingObjectFactory::GetVTKSourceVersion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTestingObjectFactory_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingObjectFactory *op = static_cast<vtkTestingObjectFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDescription() :
      op->vtkTestingObjectFactory::GetDescription());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTestingObjectFactory_Methods[] = {
  {(char*)"GetClassName", PyvtkTestingObjectFactory_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTestingObjectFactory_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTestingObjectFactory_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTestingObjectFactory\nC++: vtkTestingObjectFactory *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTestingObjectFactory_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTestingObjectFactory\nC++: vtkTestingObjectFactory *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetVTKSourceVersion", PyvtkTestingObjectFactory_GetVTKSourceVersion, METH_VARARGS,
   (char*)"V.GetVTKSourceVersion() -> string\nC++: virtual const char *GetVTKSourceVersion()\n\n"},
  {(char*)"GetDescription", PyvtkTestingObjectFactory_GetDescription, METH_VARARGS,
   (char*)"V.GetDescription() -> string\nC++: const char *GetDescription()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTestingObjectFactory_StaticNew()
{
  return vtkTestingObjectFactory::New();
}

PyObject *PyVTKClass_vtkTestingObjectFactoryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTestingObjectFactory_StaticNew,
    PyvtkTestingObjectFactory_Methods,
    "vtkTestingObjectFactory", modulename,
    NULL, NULL,
    PyvtkTestingObjectFactory_Doc(),
    PyVTKClass_vtkObjectFactoryNew(modulename));
  return cls;
}

const char **PyvtkTestingObjectFactory_Doc()
{
  static const char *docstring[] = {
    "vtkTestingObjectFactory - Object overrides used during testing\n\n",
    "Superclass: vtkObjectFactory\n\n",
    "Some vtk examples and tests need to perform differently when they are\nrun as tests versus when they are run as individual programs. Many\ntests/examples are interactive and eventually call\nvtkRenderWindowInteration::Start() to initialie the interaction. But,\nwhen run as tests, these programs should exit. This factory overrides\nvtkRenderWindowInteractor so that the Start() method just returns. To\nus",
    "e this factory:#include \"vtkTestingObjectFactory.h\"\n  vtkTestingObjectFactory* factory = vtkTestingObjectFactory::New();\n  vtkObjectFactory::RegisterFactory(factory);\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTestingObjectFactory(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTestingObjectFactoryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTestingObjectFactory", o) != 0)
    {
    Py_DECREF(o);
    }

}

