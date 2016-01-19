// python wrapper for vtkInteractorStyleSwitchBase
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInteractorStyleSwitchBase.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInteractorStyleSwitchBase(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInteractorStyleSwitchBaseNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleNew
#endif

static const char **PyvtkInteractorStyleSwitchBase_Doc();


static PyObject *
PyvtkInteractorStyleSwitchBase_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitchBase *op = static_cast<vtkInteractorStyleSwitchBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInteractorStyleSwitchBase::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitchBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitchBase *op = static_cast<vtkInteractorStyleSwitchBase *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleSwitchBase::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitchBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitchBase *op = static_cast<vtkInteractorStyleSwitchBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInteractorStyleSwitchBase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleSwitchBase::NewInstance());

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
PyvtkInteractorStyleSwitchBase_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInteractorStyleSwitchBase *tempr = vtkInteractorStyleSwitchBase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitchBase_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitchBase *op = static_cast<vtkInteractorStyleSwitchBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkInteractorStyleSwitchBase::GetInteractor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleSwitchBase_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleSwitchBase_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleSwitchBase_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleSwitchBase_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInteractorStyleSwitchBase\nC++: vtkInteractorStyleSwitchBase *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleSwitchBase_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleSwitchBase\nC++: vtkInteractorStyleSwitchBase *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInteractor", PyvtkInteractorStyleSwitchBase_GetInteractor, METH_VARARGS,
   (char*)"V.GetInteractor() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleSwitchBase_StaticNew()
{
  return vtkInteractorStyleSwitchBase::New();
}

PyObject *PyVTKClass_vtkInteractorStyleSwitchBaseNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleSwitchBase_StaticNew,
    PyvtkInteractorStyleSwitchBase_Methods,
    "vtkInteractorStyleSwitchBase", modulename,
    NULL, NULL,
    PyvtkInteractorStyleSwitchBase_Doc(),
    PyVTKClass_vtkInteractorStyleNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleSwitchBase_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleSwitchBase - dummy interface class.\n\n",
    "Superclass: vtkInteractorStyle\n\n",
    "The class vtkInteractorStyleSwitchBase is here to allow the\nvtkRenderWindowInteractor to instantiate a default interactor style\nand preserve backward compatible behavior when the object factory is\noverridden and vtkInteractorStyleSwitch is returned.\n\nSee Also:\n\nvtkInteractorStyleSwitchBase vtkRenderWindowInteractor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleSwitchBase(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleSwitchBaseNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleSwitchBase", o) != 0)
    {
    Py_DECREF(o);
    }

}

