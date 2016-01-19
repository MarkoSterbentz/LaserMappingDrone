// python wrapper for vtkPVJoystickFlyIn
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVJoystickFlyIn.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVJoystickFlyIn(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVJoystickFlyInNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVJoystickFlyNew
extern "C" { PyObject *PyVTKClass_vtkPVJoystickFlyNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVJoystickFlyNew
#endif

static const char **PyvtkPVJoystickFlyIn_Doc();


static PyObject *
PyvtkPVJoystickFlyIn_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFlyIn *op = static_cast<vtkPVJoystickFlyIn *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVJoystickFlyIn::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVJoystickFlyIn_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFlyIn *op = static_cast<vtkPVJoystickFlyIn *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVJoystickFlyIn::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVJoystickFlyIn_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFlyIn *op = static_cast<vtkPVJoystickFlyIn *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVJoystickFlyIn *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVJoystickFlyIn::NewInstance());

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
PyvtkPVJoystickFlyIn_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVJoystickFlyIn *tempr = vtkPVJoystickFlyIn::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVJoystickFlyIn_Methods[] = {
  {(char*)"GetClassName", PyvtkPVJoystickFlyIn_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVJoystickFlyIn_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVJoystickFlyIn_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVJoystickFlyIn\nC++: vtkPVJoystickFlyIn *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVJoystickFlyIn_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVJoystickFlyIn\nC++: vtkPVJoystickFlyIn *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVJoystickFlyIn_StaticNew()
{
  return vtkPVJoystickFlyIn::New();
}

PyObject *PyVTKClass_vtkPVJoystickFlyInNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVJoystickFlyIn_StaticNew,
    PyvtkPVJoystickFlyIn_Methods,
    "vtkPVJoystickFlyIn", modulename,
    NULL, NULL,
    PyvtkPVJoystickFlyIn_Doc(),
    PyVTKClass_vtkPVJoystickFlyNew(modulename));
  return cls;
}

const char **PyvtkPVJoystickFlyIn_Doc()
{
  static const char *docstring[] = {
    "vtkPVJoystickFlyIn - Rotates camera with xy mouse movement.\n\n",
    "Superclass: vtkPVJoystickFly\n\n",
    "vtkPVJoystickFlyIn allows the user to interactively manipulate the\ncamera, the viewpoint of the scene.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVJoystickFlyIn(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVJoystickFlyInNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVJoystickFlyIn", o) != 0)
    {
    Py_DECREF(o);
    }

}

