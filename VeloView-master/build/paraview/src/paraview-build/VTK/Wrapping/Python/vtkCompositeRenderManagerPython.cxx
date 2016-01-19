// python wrapper for vtkCompositeRenderManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCompositeRenderManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositeRenderManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositeRenderManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkParallelRenderManagerNew
extern "C" { PyObject *PyVTKClass_vtkParallelRenderManagerNew(const char *); }
#define DECLARED_PyVTKClass_vtkParallelRenderManagerNew
#endif

static const char **PyvtkCompositeRenderManager_Doc();


static PyObject *
PyvtkCompositeRenderManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRenderManager *op = static_cast<vtkCompositeRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositeRenderManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRenderManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRenderManager *op = static_cast<vtkCompositeRenderManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeRenderManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRenderManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRenderManager *op = static_cast<vtkCompositeRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeRenderManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeRenderManager::NewInstance());

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
PyvtkCompositeRenderManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositeRenderManager *tempr = vtkCompositeRenderManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRenderManager_SetCompositer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRenderManager *op = static_cast<vtkCompositeRenderManager *>(vp);

  vtkCompositer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositer"))
    {
    if (ap.IsBound())
      {
      op->SetCompositer(temp0);
      }
    else
      {
      op->vtkCompositeRenderManager::SetCompositer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRenderManager_GetCompositer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRenderManager *op = static_cast<vtkCompositeRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositer *tempr = (ap.IsBound() ?
      op->GetCompositer() :
      op->vtkCompositeRenderManager::GetCompositer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRenderManager_GetImageProcessingTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageProcessingTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRenderManager *op = static_cast<vtkCompositeRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetImageProcessingTime() :
      op->vtkCompositeRenderManager::GetImageProcessingTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeRenderManager_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeRenderManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeRenderManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeRenderManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositeRenderManager\nC++: vtkCompositeRenderManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeRenderManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeRenderManager\nC++: vtkCompositeRenderManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCompositer", PyvtkCompositeRenderManager_SetCompositer, METH_VARARGS,
   (char*)"V.SetCompositer(vtkCompositer)\nC++: void SetCompositer(vtkCompositer *c)\n\nSet/Get the composite algorithm.\n"},
  {(char*)"GetCompositer", PyvtkCompositeRenderManager_GetCompositer, METH_VARARGS,
   (char*)"V.GetCompositer() -> vtkCompositer\nC++: vtkCompositer *GetCompositer()\n\nSet/Get the composite algorithm.\n"},
  {(char*)"GetImageProcessingTime", PyvtkCompositeRenderManager_GetImageProcessingTime, METH_VARARGS,
   (char*)"V.GetImageProcessingTime() -> float\nC++: double GetImageProcessingTime()\n\nGet rendering metrics.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeRenderManager_StaticNew()
{
  return vtkCompositeRenderManager::New();
}

PyObject *PyVTKClass_vtkCompositeRenderManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeRenderManager_StaticNew,
    PyvtkCompositeRenderManager_Methods,
    "vtkCompositeRenderManager", modulename,
    NULL, NULL,
    PyvtkCompositeRenderManager_Doc(),
    PyVTKClass_vtkParallelRenderManagerNew(modulename));
  return cls;
}

const char **PyvtkCompositeRenderManager_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeRenderManager - An object to control sort-last parallel\nrendering.\n\n",
    "Superclass: vtkParallelRenderManager\n\n",
    "vtkCompositeRenderManager is a subclass of vtkParallelRenderManager\nthat uses compositing to do parallel rendering.  This class has\nreplaced vtkCompositeManager.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeRenderManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeRenderManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeRenderManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

