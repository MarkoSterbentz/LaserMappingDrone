// python wrapper for vtkScenePicker
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkScenePicker.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkScenePicker(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkScenePickerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkScenePicker_Doc();


static PyObject *
PyvtkScenePicker_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkScenePicker::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScenePicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScenePicker::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScenePicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScenePicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScenePicker::NewInstance());

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
PyvtkScenePicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkScenePicker *tempr = vtkScenePicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScenePicker_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkScenePicker::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScenePicker_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkScenePicker::GetRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScenePicker_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellId(temp0) :
      op->vtkScenePicker::GetCellId(temp0));

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
PyvtkScenePicker_GetVertexId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->GetVertexId(temp0) :
      op->vtkScenePicker::GetVertexId(temp0));

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
PyvtkScenePicker_GetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkProp *tempr = (ap.IsBound() ?
      op->GetViewProp(temp0) :
      op->vtkScenePicker::GetViewProp(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScenePicker_SetEnableVertexPicking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableVertexPicking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableVertexPicking(temp0);
      }
    else
      {
      op->vtkScenePicker::SetEnableVertexPicking(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScenePicker_GetEnableVertexPicking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableVertexPicking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableVertexPicking() :
      op->vtkScenePicker::GetEnableVertexPicking());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScenePicker_EnableVertexPickingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableVertexPickingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableVertexPickingOn();
      }
    else
      {
      op->vtkScenePicker::EnableVertexPickingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScenePicker_EnableVertexPickingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableVertexPickingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableVertexPickingOff();
      }
    else
      {
      op->vtkScenePicker::EnableVertexPickingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkScenePicker_Methods[] = {
  {(char*)"GetClassName", PyvtkScenePicker_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkScenePicker_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkScenePicker_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkScenePicker\nC++: vtkScenePicker *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkScenePicker_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkScenePicker\nC++: vtkScenePicker *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRenderer", PyvtkScenePicker_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *)\n\nSet the renderer. Scene picks are restricted to the viewport.\n"},
  {(char*)"GetRenderer", PyvtkScenePicker_GetRenderer, METH_VARARGS,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nSet the renderer. Scene picks are restricted to the viewport.\n"},
  {(char*)"GetCellId", PyvtkScenePicker_GetCellId, METH_VARARGS,
   (char*)"V.GetCellId([int, int]) -> int\nC++: vtkIdType GetCellId(int displayPos[2])\n\nGet cell id at the pick position. Returns -1 if no cell was\npicked. Makes sense only after Pick has been called.\n"},
  {(char*)"GetVertexId", PyvtkScenePicker_GetVertexId, METH_VARARGS,
   (char*)"V.GetVertexId([int, int]) -> int\nC++: vtkIdType GetVertexId(int displayPos[2])\n\nGet cell id at the pick position. Returns -1 if no cell was\npicked. Makes sense only after Pick has been called.\n"},
  {(char*)"GetViewProp", PyvtkScenePicker_GetViewProp, METH_VARARGS,
   (char*)"V.GetViewProp([int, int]) -> vtkProp\nC++: vtkProp *GetViewProp(int displayPos[2])\n\nGet actor at the pick position. Returns NULL if none. Makes sense\nonly after Pick has been called.\n"},
  {(char*)"SetEnableVertexPicking", PyvtkScenePicker_SetEnableVertexPicking, METH_VARARGS,
   (char*)"V.SetEnableVertexPicking(int)\nC++: void SetEnableVertexPicking(int a)\n\nVertex picking (using the method GetVertexId()), required\nadditional resources and can slow down still render time by\n5-10%. Enabled by default.\n"},
  {(char*)"GetEnableVertexPicking", PyvtkScenePicker_GetEnableVertexPicking, METH_VARARGS,
   (char*)"V.GetEnableVertexPicking() -> int\nC++: int GetEnableVertexPicking()\n\nVertex picking (using the method GetVertexId()), required\nadditional resources and can slow down still render time by\n5-10%. Enabled by default.\n"},
  {(char*)"EnableVertexPickingOn", PyvtkScenePicker_EnableVertexPickingOn, METH_VARARGS,
   (char*)"V.EnableVertexPickingOn()\nC++: void EnableVertexPickingOn()\n\nVertex picking (using the method GetVertexId()), required\nadditional resources and can slow down still render time by\n5-10%. Enabled by default.\n"},
  {(char*)"EnableVertexPickingOff", PyvtkScenePicker_EnableVertexPickingOff, METH_VARARGS,
   (char*)"V.EnableVertexPickingOff()\nC++: void EnableVertexPickingOff()\n\nVertex picking (using the method GetVertexId()), required\nadditional resources and can slow down still render time by\n5-10%. Enabled by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkScenePicker_StaticNew()
{
  return vtkScenePicker::New();
}

PyObject *PyVTKClass_vtkScenePickerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkScenePicker_StaticNew,
    PyvtkScenePicker_Methods,
    "vtkScenePicker", modulename,
    NULL, NULL,
    PyvtkScenePicker_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkScenePicker_Doc()
{
  static const char *docstring[] = {
    "vtkScenePicker - Picks an entire viewport at one shot.\n\n",
    "Superclass: vtkObject\n\n",
    "The Scene picker, unlike conventional pickers picks an entire\nviewport at one shot and caches the result, which can be retrieved\nlater.\n   The utility of the class arises during Actor Selection. Let's say\nyou have a couple of polygonal objects in your scene and you wish to\nhave a status bar that indicates the object your mouse is over.\nPicking repeatedly every time your mouse moves would be very s",
    "low.\nThe scene picker automatically picks your viewport every time the\ncamera is changed and caches the information. Additionally, it\nobserves the vtkRenderWindowInteractor to avoid picking during\ninteraction, so that you still maintain your interactivity. In\neffect, the picker does an additional pick-render of your scene every\ntime you stop interacting with your scene. As an example, see\nRenderin",
    "g/TestScenePicker.\n\nCaveats:\n\n- Unlike a vtkHoverWidget, this class is not timer based. The hover\n  widget picks a scene when the mouse is over an actor for a\n  specified duration.\n- This class uses a vtkHardwareSelector under the hood. Hence, it\n  will work only for actors that have opaque geomerty and are\n  rendered by a vtkPolyDataMapper.\n\nSee Also:\n\nvtkHoverWidget vtkHardwareSelector\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkScenePicker(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkScenePickerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkScenePicker", o) != 0)
    {
    Py_DECREF(o);
    }

}

