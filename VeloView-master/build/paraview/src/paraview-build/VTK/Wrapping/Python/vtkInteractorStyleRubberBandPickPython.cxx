// python wrapper for vtkInteractorStyleRubberBandPick
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInteractorStyleRubberBandPick.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInteractorStyleRubberBandPick(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInteractorStyleRubberBandPickNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleTrackballCameraNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
#endif

static const char **PyvtkInteractorStyleRubberBandPick_Doc();


static PyObject *
PyvtkInteractorStyleRubberBandPick_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInteractorStyleRubberBandPick::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleRubberBandPick::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInteractorStyleRubberBandPick *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleRubberBandPick::NewInstance());

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
PyvtkInteractorStyleRubberBandPick_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInteractorStyleRubberBandPick *tempr = vtkInteractorStyleRubberBandPick::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_StartSelect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartSelect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartSelect();
      }
    else
      {
      op->vtkInteractorStyleRubberBandPick::StartSelect();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleRubberBandPick::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleRubberBandPick::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleRubberBandPick::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnChar();
      }
    else
      {
      op->vtkInteractorStyleRubberBandPick::OnChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleRubberBandPick_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleRubberBandPick_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleRubberBandPick_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleRubberBandPick_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInteractorStyleRubberBandPick\nC++: vtkInteractorStyleRubberBandPick *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleRubberBandPick_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleRubberBandPick\nC++: vtkInteractorStyleRubberBandPick *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"StartSelect", PyvtkInteractorStyleRubberBandPick_StartSelect, METH_VARARGS,
   (char*)"V.StartSelect()\nC++: void StartSelect()\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleRubberBandPick_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nEvent bindings\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleRubberBandPick_OnLeftButtonDown, METH_VARARGS,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nEvent bindings\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleRubberBandPick_OnLeftButtonUp, METH_VARARGS,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nEvent bindings\n"},
  {(char*)"OnChar", PyvtkInteractorStyleRubberBandPick_OnChar, METH_VARARGS,
   (char*)"V.OnChar()\nC++: virtual void OnChar()\n\nEvent bindings\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleRubberBandPick_StaticNew()
{
  return vtkInteractorStyleRubberBandPick::New();
}

PyObject *PyVTKClass_vtkInteractorStyleRubberBandPickNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleRubberBandPick_StaticNew,
    PyvtkInteractorStyleRubberBandPick_Methods,
    "vtkInteractorStyleRubberBandPick", modulename,
    NULL, NULL,
    PyvtkInteractorStyleRubberBandPick_Doc(),
    PyVTKClass_vtkInteractorStyleTrackballCameraNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleRubberBandPick_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleRubberBandPick - Like TrackBallCamera, but this can\npick props underneath a rubber band selection rectangle.\n\n",
    "Superclass: vtkInteractorStyleTrackballCamera\n\n",
    "This interactor style allows the user to draw a rectangle in the\nrender window by hitting 'r' and then using the left mouse button.\nWhen the mouse button is released, the attached picker operates on\nthe pixel in the center of the selection rectangle. If the picker\nhappens to be a vtkAreaPicker it will operate on the entire selection\nrectangle. When the 'p' key is hit the above pick operation occur",
    "s on\na 1x1 rectangle. In other respects it behaves the same as its parent\nclass.\n\nSee Also:\n\nvtkAreaPicker\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleRubberBandPick(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleRubberBandPickNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleRubberBandPick", o) != 0)
    {
    Py_DECREF(o);
    }

}

