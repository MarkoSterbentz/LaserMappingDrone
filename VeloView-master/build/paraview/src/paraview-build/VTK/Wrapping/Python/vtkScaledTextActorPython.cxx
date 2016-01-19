// python wrapper for vtkScaledTextActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkScaledTextActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkScaledTextActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkScaledTextActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTextActorNew
extern "C" { PyObject *PyVTKClass_vtkTextActorNew(const char *); }
#define DECLARED_PyVTKClass_vtkTextActorNew
#endif

static const char **PyvtkScaledTextActor_Doc();


static PyObject *
PyvtkScaledTextActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScaledTextActor *op = static_cast<vtkScaledTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkScaledTextActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScaledTextActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScaledTextActor *op = static_cast<vtkScaledTextActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScaledTextActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScaledTextActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScaledTextActor *op = static_cast<vtkScaledTextActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScaledTextActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScaledTextActor::NewInstance());

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
PyvtkScaledTextActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkScaledTextActor *tempr = vtkScaledTextActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkScaledTextActor_Methods[] = {
  {(char*)"GetClassName", PyvtkScaledTextActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkScaledTextActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkScaledTextActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkScaledTextActor\nC++: vtkScaledTextActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkScaledTextActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkScaledTextActor\nC++: vtkScaledTextActor *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkScaledTextActor_StaticNew()
{
  return vtkScaledTextActor::New();
}

PyObject *PyVTKClass_vtkScaledTextActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkScaledTextActor_StaticNew,
    PyvtkScaledTextActor_Methods,
    "vtkScaledTextActor", modulename,
    NULL, NULL,
    PyvtkScaledTextActor_Doc(),
    PyVTKClass_vtkTextActorNew(modulename));
  return cls;
}

const char **PyvtkScaledTextActor_Doc()
{
  static const char *docstring[] = {
    "vtkScaledTextActor - create text that will scale as needed\n\n",
    "Superclass: vtkTextActor\n\n",
    "vtkScaledTextActor is deprecated. New code should use vtkTextActor\nwith the Scaled = true option.\n\nSee Also:\n\nvtkTextActor vtkActor2D vtkTextMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkScaledTextActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkScaledTextActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkScaledTextActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

