// python wrapper for vtkPVCueManipulator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVCueManipulator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVCueManipulator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVCueManipulatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVCueManipulator_Doc();


static PyObject *
PyvtkPVCueManipulator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCueManipulator *op = static_cast<vtkPVCueManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVCueManipulator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCueManipulator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCueManipulator *op = static_cast<vtkPVCueManipulator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCueManipulator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCueManipulator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCueManipulator *op = static_cast<vtkPVCueManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVCueManipulator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCueManipulator::NewInstance());

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
PyvtkPVCueManipulator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVCueManipulator *tempr = vtkPVCueManipulator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVCueManipulator_Methods[] = {
  {(char*)"GetClassName", PyvtkPVCueManipulator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVCueManipulator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVCueManipulator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVCueManipulator\nC++: vtkPVCueManipulator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVCueManipulator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVCueManipulator\nC++: vtkPVCueManipulator *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPVCueManipulatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPVCueManipulator_Methods,
    "vtkPVCueManipulator", modulename,
    NULL, NULL,
    PyvtkPVCueManipulator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(vtkPVCueManipulator::StateModifiedEvent);
    if (o)
      {
      PyDict_SetItemString(d, (char *)"StateModifiedEvent", o);
      Py_DECREF(o);
      }
    }

  return cls;
}

const char **PyvtkPVCueManipulator_Doc()
{
  static const char *docstring[] = {
    "vtkPVCueManipulator - abstract proxy for manipulators\n\n",
    "Superclass: vtkObject\n\n",
    "An animation cue proxy delegates the operation of modifying the\nproperty on the proxy being animated to a Manipulator. An example of\na manipulator is a vtkPVKeyFrameCueManipulator. Subclasses must\noverrideUpdateValue to perform the actual property manipulation. Just\nlike all proxies involved in Animation, this is a client side proxy,\nwith no VTK objects created on the server. A manipulator fires t",
    "wo\nkinds of events:\n\\li vtkPVCueManipulator::StateModifiedEvent is fired when\nthe manipulator modifies the animated proxy.\n\\li vtkCommand::Modified is fired when properties of the manipulator\nare changed which affects the way the animation is generated e.g in\ncase of vtkPVKeyFrameCueManipulator, this event is fired when the key\nframes are changed i.e. added/removed/modified.\n\nSee Also:\n\nvtkPVAnima",
    "tionCue vtkAnimationCue\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVCueManipulator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVCueManipulatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVCueManipulator", o) != 0)
    {
    Py_DECREF(o);
    }

}

