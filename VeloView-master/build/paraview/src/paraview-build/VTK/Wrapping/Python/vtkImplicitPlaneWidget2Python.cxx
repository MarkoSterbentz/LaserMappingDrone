// python wrapper for vtkImplicitPlaneWidget2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImplicitPlaneWidget2.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImplicitPlaneWidget2(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImplicitPlaneWidget2New(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkImplicitPlaneWidget2_Doc();


static PyObject *
PyvtkImplicitPlaneWidget2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImplicitPlaneWidget2::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitPlaneWidget2::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitPlaneWidget2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitPlaneWidget2::NewInstance());

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
PyvtkImplicitPlaneWidget2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImplicitPlaneWidget2 *tempr = vtkImplicitPlaneWidget2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  vtkImplicitPlaneRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitPlaneRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget2::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget2::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_SetLockNormalToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockNormalToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLockNormalToCamera(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget2::SetLockNormalToCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_GetImplicitPlaneRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitPlaneRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitPlaneRepresentation *tempr = (ap.IsBound() ?
      op->GetImplicitPlaneRepresentation() :
      op->vtkImplicitPlaneWidget2::GetImplicitPlaneRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkImplicitPlaneWidget2::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitPlaneWidget2_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitPlaneWidget2_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard vtkObject methods\n"},
  {(char*)"IsA", PyvtkImplicitPlaneWidget2_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard vtkObject methods\n"},
  {(char*)"NewInstance", PyvtkImplicitPlaneWidget2_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImplicitPlaneWidget2\nC++: vtkImplicitPlaneWidget2 *NewInstance()\n\nStandard vtkObject methods\n"},
  {(char*)"SafeDownCast", PyvtkImplicitPlaneWidget2_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitPlaneWidget2\nC++: vtkImplicitPlaneWidget2 *SafeDownCast(vtkObject* o)\n\nStandard vtkObject methods\n"},
  {(char*)"SetRepresentation", PyvtkImplicitPlaneWidget2_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkImplicitPlaneRepresentation)\nC++: void SetRepresentation(vtkImplicitPlaneRepresentation *rep)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"SetEnabled", PyvtkImplicitPlaneWidget2_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: void SetEnabled(int enabling)\n\n"},
  {(char*)"SetLockNormalToCamera", PyvtkImplicitPlaneWidget2_SetLockNormalToCamera, METH_VARARGS,
   (char*)"V.SetLockNormalToCamera(int)\nC++: void SetLockNormalToCamera(int lock)\n\nObserve/Unobserve the camera if the widget is locked/unlocked to\nupdate the vtkImplicitePlaneRepresentation's normal.\n"},
  {(char*)"GetImplicitPlaneRepresentation", PyvtkImplicitPlaneWidget2_GetImplicitPlaneRepresentation, METH_VARARGS,
   (char*)"V.GetImplicitPlaneRepresentation()\n    -> vtkImplicitPlaneRepresentation\nC++: vtkImplicitPlaneRepresentation *GetImplicitPlaneRepresentation(\n    )\n\nReturn the representation as a vtkImplicitPlaneRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkImplicitPlaneWidget2_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitPlaneWidget2_StaticNew()
{
  return vtkImplicitPlaneWidget2::New();
}

PyObject *PyVTKClass_vtkImplicitPlaneWidget2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitPlaneWidget2_StaticNew,
    PyvtkImplicitPlaneWidget2_Methods,
    "vtkImplicitPlaneWidget2", modulename,
    NULL, NULL,
    PyvtkImplicitPlaneWidget2_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkImplicitPlaneWidget2_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitPlaneWidget2 - 3D widget for manipulating an infinite plane\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "This 3D widget defines an infinite plane that can be interactively\nplaced in a scene. The widget is assumed to consist of four parts: 1)\na plane contained in a 2) bounding box, with a 3) plane normal, which\nis rooted at a 4) point on the plane. (The representation paired with\nthis widget determines the actual geometry of the widget.)\n\nTo use this widget, you generally pair it with a\nvtkImplicitPla",
    "neRepresentation (or a subclass). Variuos options are\navailable for controlling how the representation appears, and how the\nwidget functions.\n\nSee Also:\n\nvtk3DWidget vtkBoxWidget vtkPlaneWidget vtkLineWidget vtkPointWidget\nvtkSphereWidget vtkImagePlaneWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitPlaneWidget2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitPlaneWidget2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitPlaneWidget2", o) != 0)
    {
    Py_DECREF(o);
    }

}

