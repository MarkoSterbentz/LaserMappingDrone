// python wrapper for vtkCameraManipulatorGUIHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCameraManipulatorGUIHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCameraManipulatorGUIHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCameraManipulatorGUIHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCameraManipulatorGUIHelper_Doc();


static PyObject *
PyvtkCameraManipulatorGUIHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulatorGUIHelper *op = static_cast<vtkCameraManipulatorGUIHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCameraManipulatorGUIHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulatorGUIHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulatorGUIHelper *op = static_cast<vtkCameraManipulatorGUIHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraManipulatorGUIHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulatorGUIHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulatorGUIHelper *op = static_cast<vtkCameraManipulatorGUIHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCameraManipulatorGUIHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraManipulatorGUIHelper::NewInstance());

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
PyvtkCameraManipulatorGUIHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCameraManipulatorGUIHelper *tempr = vtkCameraManipulatorGUIHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulatorGUIHelper_UpdateGUI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateGUI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulatorGUIHelper *op = static_cast<vtkCameraManipulatorGUIHelper *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->UpdateGUI();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulatorGUIHelper_GetActiveSourceBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveSourceBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulatorGUIHelper *op = static_cast<vtkCameraManipulatorGUIHelper *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = op->GetActiveSourceBounds(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulatorGUIHelper_GetActiveActorTranslate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveActorTranslate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulatorGUIHelper *op = static_cast<vtkCameraManipulatorGUIHelper *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = op->GetActiveActorTranslate(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulatorGUIHelper_SetActiveActorTranslate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveActorTranslate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulatorGUIHelper *op = static_cast<vtkCameraManipulatorGUIHelper *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = op->SetActiveActorTranslate(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraManipulatorGUIHelper_GetCenterOfRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulatorGUIHelper *op = static_cast<vtkCameraManipulatorGUIHelper *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = op->GetCenterOfRotation(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCameraManipulatorGUIHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkCameraManipulatorGUIHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCameraManipulatorGUIHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCameraManipulatorGUIHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCameraManipulatorGUIHelper\nC++: vtkCameraManipulatorGUIHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCameraManipulatorGUIHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCameraManipulatorGUIHelper\nC++: vtkCameraManipulatorGUIHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"UpdateGUI", PyvtkCameraManipulatorGUIHelper_UpdateGUI, METH_VARARGS,
   (char*)"V.UpdateGUI()\nC++: virtual void UpdateGUI()\n\nCalled by the manipulator to update the GUI. This typically\ninvolves calling processing pending events on the GUI.\n"},
  {(char*)"GetActiveSourceBounds", PyvtkCameraManipulatorGUIHelper_GetActiveSourceBounds, METH_VARARGS,
   (char*)"V.GetActiveSourceBounds([float, float, float, float, float,\n    float]) -> int\nC++: virtual int GetActiveSourceBounds(double bounds[6])\n\nSome interactors use the bounds of the active source. The method\nreturns 0 is no active source is present or not supported by GUI,\notherwise returns 1 and the bounds are filled into the passed\nargument array.\n"},
  {(char*)"GetActiveActorTranslate", PyvtkCameraManipulatorGUIHelper_GetActiveActorTranslate, METH_VARARGS,
   (char*)"V.GetActiveActorTranslate([float, float, float]) -> int\nC++: virtual int GetActiveActorTranslate(double translate[3])\n\nCalled to get/set the translation for the actor for the active\nsource in the active view. If applicable returns 1, otherwise\nreturns 0.\n"},
  {(char*)"SetActiveActorTranslate", PyvtkCameraManipulatorGUIHelper_SetActiveActorTranslate, METH_VARARGS,
   (char*)"V.SetActiveActorTranslate([float, float, float]) -> int\nC++: virtual int SetActiveActorTranslate(double translate[3])\n\nCalled to get/set the translation for the actor for the active\nsource in the active view. If applicable returns 1, otherwise\nreturns 0.\n"},
  {(char*)"GetCenterOfRotation", PyvtkCameraManipulatorGUIHelper_GetCenterOfRotation, METH_VARARGS,
   (char*)"V.GetCenterOfRotation([float, float, float]) -> int\nC++: virtual int GetCenterOfRotation(double center[3])\n\nGet the center of rotation. Returns 0 if not applicable.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkCameraManipulatorGUIHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkCameraManipulatorGUIHelper_Methods,
    "vtkCameraManipulatorGUIHelper", modulename,
    NULL, NULL,
    PyvtkCameraManipulatorGUIHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCameraManipulatorGUIHelper_Doc()
{
  static const char *docstring[] = {
    "vtkCameraManipulatorGUIHelper - Helper class for Camera \n\n",
    "Superclass: vtkObject\n\n",
    "This class is the interaface that defines API for a helper class used\nby some specialized camera manipulators that needed access to GUI.\nGUI implementations subclass this. vtkPVInteractorStyle sets the\nhelper on every manipulator, if available so that the manipulator can\nuse it.\n\nSee Also:\n\nvtkPVInteractorStyle\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCameraManipulatorGUIHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCameraManipulatorGUIHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCameraManipulatorGUIHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

