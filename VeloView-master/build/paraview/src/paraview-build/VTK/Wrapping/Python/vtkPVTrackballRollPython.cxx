// python wrapper for vtkPVTrackballRoll
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVTrackballRoll.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVTrackballRoll(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVTrackballRollNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCameraManipulatorNew
extern "C" { PyObject *PyVTKClass_vtkCameraManipulatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkCameraManipulatorNew
#endif

static const char **PyvtkPVTrackballRoll_Doc();


static PyObject *
PyvtkPVTrackballRoll_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballRoll *op = static_cast<vtkPVTrackballRoll *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVTrackballRoll::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTrackballRoll_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballRoll *op = static_cast<vtkPVTrackballRoll *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVTrackballRoll::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTrackballRoll_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballRoll *op = static_cast<vtkPVTrackballRoll *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVTrackballRoll *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVTrackballRoll::NewInstance());

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
PyvtkPVTrackballRoll_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVTrackballRoll *tempr = vtkPVTrackballRoll::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTrackballRoll_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballRoll *op = static_cast<vtkPVTrackballRoll *>(vp);

  int temp0;
  int temp1;
  vtkRenderer *temp2 = NULL;
  vtkRenderWindowInteractor *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderer") &&
      ap.GetVTKObject(temp3, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVTrackballRoll::OnMouseMove(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTrackballRoll_OnButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballRoll *op = static_cast<vtkPVTrackballRoll *>(vp);

  int temp0;
  int temp1;
  vtkRenderer *temp2 = NULL;
  vtkRenderWindowInteractor *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderer") &&
      ap.GetVTKObject(temp3, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->OnButtonDown(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVTrackballRoll::OnButtonDown(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTrackballRoll_OnButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballRoll *op = static_cast<vtkPVTrackballRoll *>(vp);

  int temp0;
  int temp1;
  vtkRenderer *temp2 = NULL;
  vtkRenderWindowInteractor *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderer") &&
      ap.GetVTKObject(temp3, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->OnButtonUp(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVTrackballRoll::OnButtonUp(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVTrackballRoll_Methods[] = {
  {(char*)"GetClassName", PyvtkPVTrackballRoll_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVTrackballRoll_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVTrackballRoll_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVTrackballRoll\nC++: vtkPVTrackballRoll *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVTrackballRoll_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVTrackballRoll\nC++: vtkPVTrackballRoll *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnMouseMove", PyvtkPVTrackballRoll_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: virtual void OnMouseMove(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *rwi)\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnButtonDown", PyvtkPVTrackballRoll_OnButtonDown, METH_VARARGS,
   (char*)"V.OnButtonDown(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: virtual void OnButtonDown(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *rwi)\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnButtonUp", PyvtkPVTrackballRoll_OnButtonUp, METH_VARARGS,
   (char*)"V.OnButtonUp(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: virtual void OnButtonUp(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *rwi)\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVTrackballRoll_StaticNew()
{
  return vtkPVTrackballRoll::New();
}

PyObject *PyVTKClass_vtkPVTrackballRollNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVTrackballRoll_StaticNew,
    PyvtkPVTrackballRoll_Methods,
    "vtkPVTrackballRoll", modulename,
    NULL, NULL,
    PyvtkPVTrackballRoll_Doc(),
    PyVTKClass_vtkCameraManipulatorNew(modulename));
  return cls;
}

const char **PyvtkPVTrackballRoll_Doc()
{
  static const char *docstring[] = {
    "vtkPVTrackballRoll - Rolls camera arround a point.\n\n",
    "Superclass: vtkCameraManipulator\n\n",
    "vtkPVTrackballRoll allows the user to interactively manipulate the\ncamera, the viewpoint of the scene. Roll tracks the mouse around the\ncenter of rotation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVTrackballRoll(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVTrackballRollNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVTrackballRoll", o) != 0)
    {
    Py_DECREF(o);
    }

}

