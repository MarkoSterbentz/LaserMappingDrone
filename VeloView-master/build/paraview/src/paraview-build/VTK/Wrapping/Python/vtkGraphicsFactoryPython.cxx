// python wrapper for vtkGraphicsFactory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGraphicsFactory.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGraphicsFactory(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGraphicsFactoryNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGraphicsFactory_Doc();


static PyObject *
PyvtkGraphicsFactory_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphicsFactory *op = static_cast<vtkGraphicsFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGraphicsFactory::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphicsFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphicsFactory *op = static_cast<vtkGraphicsFactory *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphicsFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphicsFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphicsFactory *op = static_cast<vtkGraphicsFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraphicsFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphicsFactory::NewInstance());

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
PyvtkGraphicsFactory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGraphicsFactory *tempr = vtkGraphicsFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphicsFactory_CreateInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateInstance");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkObject *tempr = vtkGraphicsFactory::CreateInstance(temp0);

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
PyvtkGraphicsFactory_GetRenderLibrary(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRenderLibrary");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const char *tempr = vtkGraphicsFactory::GetRenderLibrary();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphicsFactory_SetUseMesaClasses(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUseMesaClasses");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkGraphicsFactory::SetUseMesaClasses(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphicsFactory_GetUseMesaClasses(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUseMesaClasses");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkGraphicsFactory::GetUseMesaClasses();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphicsFactory_SetOffScreenOnlyMode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetOffScreenOnlyMode");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkGraphicsFactory::SetOffScreenOnlyMode(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphicsFactory_GetOffScreenOnlyMode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetOffScreenOnlyMode");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkGraphicsFactory::GetOffScreenOnlyMode();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphicsFactory_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphicsFactory_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphicsFactory_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphicsFactory_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGraphicsFactory\nC++: vtkGraphicsFactory *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphicsFactory_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphicsFactory\nC++: vtkGraphicsFactory *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CreateInstance", PyvtkGraphicsFactory_CreateInstance, METH_VARARGS | METH_STATIC,
   (char*)"V.CreateInstance(string) -> vtkObject\nC++: static vtkObject *CreateInstance(const char *vtkclassname)\n\nCreate and return an instance of the named vtk object. This\nmethod first checks the vtkObjectFactory to support dynamic\nloading.\n"},
  {(char*)"GetRenderLibrary", PyvtkGraphicsFactory_GetRenderLibrary, METH_VARARGS | METH_STATIC,
   (char*)"V.GetRenderLibrary() -> string\nC++: static const char *GetRenderLibrary()\n\nWhat rendering library has the user requested\n"},
  {(char*)"SetUseMesaClasses", PyvtkGraphicsFactory_SetUseMesaClasses, METH_VARARGS | METH_STATIC,
   (char*)"V.SetUseMesaClasses(int)\nC++: static void SetUseMesaClasses(int use)\n\nThis option enables the creation of Mesa classes instead of the\nOpenGL classes when using mangled Mesa.\n"},
  {(char*)"GetUseMesaClasses", PyvtkGraphicsFactory_GetUseMesaClasses, METH_VARARGS | METH_STATIC,
   (char*)"V.GetUseMesaClasses() -> int\nC++: static int GetUseMesaClasses()\n\nThis option enables the creation of Mesa classes instead of the\nOpenGL classes when using mangled Mesa.\n"},
  {(char*)"SetOffScreenOnlyMode", PyvtkGraphicsFactory_SetOffScreenOnlyMode, METH_VARARGS | METH_STATIC,
   (char*)"V.SetOffScreenOnlyMode(int)\nC++: static void SetOffScreenOnlyMode(int use)\n\nThis option enables the off-screen only mode. In this mode no X\ncalls will be made even when interactor is used.\n"},
  {(char*)"GetOffScreenOnlyMode", PyvtkGraphicsFactory_GetOffScreenOnlyMode, METH_VARARGS | METH_STATIC,
   (char*)"V.GetOffScreenOnlyMode() -> int\nC++: static int GetOffScreenOnlyMode()\n\nThis option enables the off-screen only mode. In this mode no X\ncalls will be made even when interactor is used.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphicsFactory_StaticNew()
{
  return vtkGraphicsFactory::New();
}

PyObject *PyVTKClass_vtkGraphicsFactoryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphicsFactory_StaticNew,
    PyvtkGraphicsFactory_Methods,
    "vtkGraphicsFactory", modulename,
    NULL, NULL,
    PyvtkGraphicsFactory_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGraphicsFactory_Doc()
{
  static const char *docstring[] = {
    "vtkGraphicsFactory -\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphicsFactory(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphicsFactoryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphicsFactory", o) != 0)
    {
    Py_DECREF(o);
    }

}

