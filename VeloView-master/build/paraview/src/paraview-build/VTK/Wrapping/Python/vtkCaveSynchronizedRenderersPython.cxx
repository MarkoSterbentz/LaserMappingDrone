// python wrapper for vtkCaveSynchronizedRenderers
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCaveSynchronizedRenderers.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCaveSynchronizedRenderers(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCaveSynchronizedRenderersNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSynchronizedRenderersNew
extern "C" { PyObject *PyVTKClass_vtkSynchronizedRenderersNew(const char *); }
#define DECLARED_PyVTKClass_vtkSynchronizedRenderersNew
#endif

static const char **PyvtkCaveSynchronizedRenderers_Doc();


static PyObject *
PyvtkCaveSynchronizedRenderers_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaveSynchronizedRenderers *op = static_cast<vtkCaveSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCaveSynchronizedRenderers::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaveSynchronizedRenderers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaveSynchronizedRenderers *op = static_cast<vtkCaveSynchronizedRenderers *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCaveSynchronizedRenderers::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaveSynchronizedRenderers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaveSynchronizedRenderers *op = static_cast<vtkCaveSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCaveSynchronizedRenderers *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCaveSynchronizedRenderers::NewInstance());

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
PyvtkCaveSynchronizedRenderers_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCaveSynchronizedRenderers *tempr = vtkCaveSynchronizedRenderers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCaveSynchronizedRenderers_Methods[] = {
  {(char*)"GetClassName", PyvtkCaveSynchronizedRenderers_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCaveSynchronizedRenderers_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCaveSynchronizedRenderers_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCaveSynchronizedRenderers\nC++: vtkCaveSynchronizedRenderers *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCaveSynchronizedRenderers_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCaveSynchronizedRenderers\nC++: vtkCaveSynchronizedRenderers *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCaveSynchronizedRenderers_StaticNew()
{
  return vtkCaveSynchronizedRenderers::New();
}

PyObject *PyVTKClass_vtkCaveSynchronizedRenderersNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCaveSynchronizedRenderers_StaticNew,
    PyvtkCaveSynchronizedRenderers_Methods,
    "vtkCaveSynchronizedRenderers", modulename,
    NULL, NULL,
    PyvtkCaveSynchronizedRenderers_Doc(),
    PyVTKClass_vtkSynchronizedRenderersNew(modulename));
  return cls;
}

const char **PyvtkCaveSynchronizedRenderers_Doc()
{
  static const char *docstring[] = {
    "vtkCaveSynchronizedRenderers - vtkSynchronizedRenderers subclass that\n\n",
    "Superclass: vtkSynchronizedRenderers\n\n",
    "vtkCaveSynchronizedRenderers is vtkSynchronizedRenderers used for in\nCAVE configuration. It is used on the render-server side. It ensures\nthat the camera is transformed based on the orientations specified in\n the pvx configuration file. This code was previously in class\nvtkCaveRenderManager.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCaveSynchronizedRenderers(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCaveSynchronizedRenderersNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCaveSynchronizedRenderers", o) != 0)
    {
    Py_DECREF(o);
    }

}

