// python wrapper for vtkPVTrackballPan
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVTrackballPan.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVTrackballPan(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVTrackballPanNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCameraManipulatorNew
extern "C" { PyObject *PyVTKClass_vtkCameraManipulatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkCameraManipulatorNew
#endif

static const char **PyvtkPVTrackballPan_Doc();


static PyObject *
PyvtkPVTrackballPan_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballPan *op = static_cast<vtkPVTrackballPan *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVTrackballPan::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTrackballPan_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballPan *op = static_cast<vtkPVTrackballPan *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVTrackballPan::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTrackballPan_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballPan *op = static_cast<vtkPVTrackballPan *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVTrackballPan *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVTrackballPan::NewInstance());

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
PyvtkPVTrackballPan_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVTrackballPan *tempr = vtkPVTrackballPan::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTrackballPan_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballPan *op = static_cast<vtkPVTrackballPan *>(vp);

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
      op->vtkPVTrackballPan::OnMouseMove(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTrackballPan_OnButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballPan *op = static_cast<vtkPVTrackballPan *>(vp);

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
      op->vtkPVTrackballPan::OnButtonDown(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTrackballPan_OnButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballPan *op = static_cast<vtkPVTrackballPan *>(vp);

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
      op->vtkPVTrackballPan::OnButtonUp(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVTrackballPan_Methods[] = {
  {(char*)"GetClassName", PyvtkPVTrackballPan_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVTrackballPan_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVTrackballPan_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVTrackballPan\nC++: vtkPVTrackballPan *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVTrackballPan_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVTrackballPan\nC++: vtkPVTrackballPan *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnMouseMove", PyvtkPVTrackballPan_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: virtual void OnMouseMove(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *iren)\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnButtonDown", PyvtkPVTrackballPan_OnButtonDown, METH_VARARGS,
   (char*)"V.OnButtonDown(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: virtual void OnButtonDown(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *iren)\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnButtonUp", PyvtkPVTrackballPan_OnButtonUp, METH_VARARGS,
   (char*)"V.OnButtonUp(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: virtual void OnButtonUp(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *iren)\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVTrackballPan_StaticNew()
{
  return vtkPVTrackballPan::New();
}

PyObject *PyVTKClass_vtkPVTrackballPanNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVTrackballPan_StaticNew,
    PyvtkPVTrackballPan_Methods,
    "vtkPVTrackballPan", modulename,
    NULL, NULL,
    PyvtkPVTrackballPan_Doc(),
    PyVTKClass_vtkCameraManipulatorNew(modulename));
  return cls;
}

const char **PyvtkPVTrackballPan_Doc()
{
  static const char *docstring[] = {
    "vtkPVTrackballPan - Pans camera with x y mouse movements.\n\n",
    "Superclass: vtkCameraManipulator\n\n",
    "vtkPVTrackballPan allows the user to interactively manipulate the\ncamera, the viewpoint of the scene. Moving the mouse down zooms in.\nUp zooms out. This manipulator has not been extended to parallel\nprojection yet. It works in perspective by rotating the camera.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVTrackballPan(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVTrackballPanNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVTrackballPan", o) != 0)
    {
    Py_DECREF(o);
    }

}

