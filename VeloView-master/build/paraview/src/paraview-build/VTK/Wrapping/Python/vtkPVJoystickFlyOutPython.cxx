// python wrapper for vtkPVJoystickFlyOut
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVJoystickFlyOut.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVJoystickFlyOut(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVJoystickFlyOutNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVJoystickFlyNew
extern "C" { PyObject *PyVTKClass_vtkPVJoystickFlyNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVJoystickFlyNew
#endif

static const char **PyvtkPVJoystickFlyOut_Doc();


static PyObject *
PyvtkPVJoystickFlyOut_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFlyOut *op = static_cast<vtkPVJoystickFlyOut *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVJoystickFlyOut::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVJoystickFlyOut_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFlyOut *op = static_cast<vtkPVJoystickFlyOut *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVJoystickFlyOut::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVJoystickFlyOut_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFlyOut *op = static_cast<vtkPVJoystickFlyOut *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVJoystickFlyOut *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVJoystickFlyOut::NewInstance());

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
PyvtkPVJoystickFlyOut_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVJoystickFlyOut *tempr = vtkPVJoystickFlyOut::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVJoystickFlyOut_Methods[] = {
  {(char*)"GetClassName", PyvtkPVJoystickFlyOut_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVJoystickFlyOut_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVJoystickFlyOut_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVJoystickFlyOut\nC++: vtkPVJoystickFlyOut *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVJoystickFlyOut_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVJoystickFlyOut\nC++: vtkPVJoystickFlyOut *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVJoystickFlyOut_StaticNew()
{
  return vtkPVJoystickFlyOut::New();
}

PyObject *PyVTKClass_vtkPVJoystickFlyOutNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVJoystickFlyOut_StaticNew,
    PyvtkPVJoystickFlyOut_Methods,
    "vtkPVJoystickFlyOut", modulename,
    NULL, NULL,
    PyvtkPVJoystickFlyOut_Doc(),
    PyVTKClass_vtkPVJoystickFlyNew(modulename));
  return cls;
}

const char **PyvtkPVJoystickFlyOut_Doc()
{
  static const char *docstring[] = {
    "vtkPVJoystickFlyOut - Rotates camera with xy mouse movement.\n\n",
    "Superclass: vtkPVJoystickFly\n\n",
    "vtkPVJoystickFlyOut allows the user to interactively manipulate the\ncamera, the viewpoint of the scene.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVJoystickFlyOut(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVJoystickFlyOutNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVJoystickFlyOut", o) != 0)
    {
    Py_DECREF(o);
    }

}

