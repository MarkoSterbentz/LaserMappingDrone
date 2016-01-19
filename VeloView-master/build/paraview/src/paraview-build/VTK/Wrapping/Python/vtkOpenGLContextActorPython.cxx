// python wrapper for vtkOpenGLContextActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLContextActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLContextActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLContextActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContextActorNew
extern "C" { PyObject *PyVTKClass_vtkContextActorNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextActorNew
#endif

static const char **PyvtkOpenGLContextActor_Doc();


static PyObject *
PyvtkOpenGLContextActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextActor *op = static_cast<vtkOpenGLContextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLContextActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLContextActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextActor *op = static_cast<vtkOpenGLContextActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLContextActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLContextActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextActor *op = static_cast<vtkOpenGLContextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLContextActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLContextActor::NewInstance());

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
PyvtkOpenGLContextActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLContextActor *tempr = vtkOpenGLContextActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLContextActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLContextActor *op = static_cast<vtkOpenGLContextActor *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkOpenGLContextActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLContextActor_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLContextActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLContextActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLContextActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLContextActor\nC++: vtkOpenGLContextActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLContextActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLContextActor\nC++: vtkOpenGLContextActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLContextActor_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *window)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLContextActor_StaticNew()
{
  return vtkOpenGLContextActor::New();
}

PyObject *PyVTKClass_vtkOpenGLContextActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLContextActor_StaticNew,
    PyvtkOpenGLContextActor_Methods,
    "vtkOpenGLContextActor", modulename,
    NULL, NULL,
    PyvtkOpenGLContextActor_Doc(),
    PyVTKClass_vtkContextActorNew(modulename));
  return cls;
}

const char **PyvtkOpenGLContextActor_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLContextActor - provides a vtkProp derived object.\n\n",
    "Superclass: vtkContextActor\n\n",
    "This object provides the entry point for the vtkContextScene to be\nrendered in a vtkRenderer. Uses the RenderOverlay pass to render the\n2D vtkContextScene.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLContextActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLContextActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLContextActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

