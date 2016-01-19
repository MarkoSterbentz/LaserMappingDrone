// python wrapper for vtkImageRenderManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageRenderManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageRenderManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageRenderManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkParallelRenderManagerNew
extern "C" { PyObject *PyVTKClass_vtkParallelRenderManagerNew(const char *); }
#define DECLARED_PyVTKClass_vtkParallelRenderManagerNew
#endif

static const char **PyvtkImageRenderManager_Doc();


static PyObject *
PyvtkImageRenderManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRenderManager *op = static_cast<vtkImageRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageRenderManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRenderManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRenderManager *op = static_cast<vtkImageRenderManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageRenderManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRenderManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRenderManager *op = static_cast<vtkImageRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageRenderManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageRenderManager::NewInstance());

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
PyvtkImageRenderManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageRenderManager *tempr = vtkImageRenderManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageRenderManager_Methods[] = {
  {(char*)"GetClassName", PyvtkImageRenderManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageRenderManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageRenderManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageRenderManager\nC++: vtkImageRenderManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageRenderManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageRenderManager\nC++: vtkImageRenderManager *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageRenderManager_StaticNew()
{
  return vtkImageRenderManager::New();
}

PyObject *PyVTKClass_vtkImageRenderManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageRenderManager_StaticNew,
    PyvtkImageRenderManager_Methods,
    "vtkImageRenderManager", modulename,
    NULL, NULL,
    PyvtkImageRenderManager_Doc(),
    PyVTKClass_vtkParallelRenderManagerNew(modulename));
  return cls;
}

const char **PyvtkImageRenderManager_Doc()
{
  static const char *docstring[] = {
    "vtkImageRenderManager - An object to control sort-first parallel\nrendering.\n\n",
    "Superclass: vtkParallelRenderManager\n\n",
    "vtkImageRenderManager is a subclass of vtkParallelRenderManager that\nuses RGBA compositing (blending) to do parallel rendering. This is\nthe exact opposite of vtkCompositeRenderManager. It actually does\nnothing special. It relies on the rendering pipeline to be\ninitialized with a vtkCompositeRGBAPass. Compositing makes sense only\nfor renderers in layer 0.\n\nSee Also:\n\nvtkCompositeRGBAPass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageRenderManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageRenderManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageRenderManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

