// python wrapper for vtkImageOrthoPlanes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageOrthoPlanes.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageOrthoPlanes(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageOrthoPlanesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkImageOrthoPlanes_Doc();


static PyObject *
PyvtkImageOrthoPlanes_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOrthoPlanes *op = static_cast<vtkImageOrthoPlanes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageOrthoPlanes::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOrthoPlanes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOrthoPlanes *op = static_cast<vtkImageOrthoPlanes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageOrthoPlanes::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOrthoPlanes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOrthoPlanes *op = static_cast<vtkImageOrthoPlanes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageOrthoPlanes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageOrthoPlanes::NewInstance());

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
PyvtkImageOrthoPlanes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageOrthoPlanes *tempr = vtkImageOrthoPlanes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOrthoPlanes_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOrthoPlanes *op = static_cast<vtkImageOrthoPlanes *>(vp);

  int temp0;
  vtkImagePlaneWidget *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImagePlaneWidget"))
    {
    if (ap.IsBound())
      {
      op->SetPlane(temp0, temp1);
      }
    else
      {
      op->vtkImageOrthoPlanes::SetPlane(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageOrthoPlanes_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOrthoPlanes *op = static_cast<vtkImageOrthoPlanes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkImagePlaneWidget *tempr = (ap.IsBound() ?
      op->GetPlane(temp0) :
      op->vtkImageOrthoPlanes::GetPlane(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOrthoPlanes_ResetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOrthoPlanes *op = static_cast<vtkImageOrthoPlanes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetPlanes();
      }
    else
      {
      op->vtkImageOrthoPlanes::ResetPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageOrthoPlanes_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOrthoPlanes *op = static_cast<vtkImageOrthoPlanes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkImageOrthoPlanes::GetTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOrthoPlanes_HandlePlaneEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlePlaneEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOrthoPlanes *op = static_cast<vtkImageOrthoPlanes *>(vp);

  vtkImagePlaneWidget *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImagePlaneWidget"))
    {
    if (ap.IsBound())
      {
      op->HandlePlaneEvent(temp0);
      }
    else
      {
      op->vtkImageOrthoPlanes::HandlePlaneEvent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageOrthoPlanes_Methods[] = {
  {(char*)"GetClassName", PyvtkImageOrthoPlanes_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageOrthoPlanes_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageOrthoPlanes_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageOrthoPlanes\nC++: vtkImageOrthoPlanes *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageOrthoPlanes_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageOrthoPlanes\nC++: vtkImageOrthoPlanes *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPlane", PyvtkImageOrthoPlanes_SetPlane, METH_VARARGS,
   (char*)"V.SetPlane(int, vtkImagePlaneWidget)\nC++: void SetPlane(int i, vtkImagePlaneWidget *imagePlaneWidget)\n\nYou must set three planes for the widget.\n"},
  {(char*)"GetPlane", PyvtkImageOrthoPlanes_GetPlane, METH_VARARGS,
   (char*)"V.GetPlane(int) -> vtkImagePlaneWidget\nC++: vtkImagePlaneWidget *GetPlane(int i)\n\nYou must set three planes for the widget.\n"},
  {(char*)"ResetPlanes", PyvtkImageOrthoPlanes_ResetPlanes, METH_VARARGS,
   (char*)"V.ResetPlanes()\nC++: void ResetPlanes()\n\nReset the planes to original scale, rotation, and location.\n"},
  {(char*)"GetTransform", PyvtkImageOrthoPlanes_GetTransform, METH_VARARGS,
   (char*)"V.GetTransform() -> vtkTransform\nC++: vtkTransform *GetTransform()\n\nGet the transform for the planes.\n"},
  {(char*)"HandlePlaneEvent", PyvtkImageOrthoPlanes_HandlePlaneEvent, METH_VARARGS,
   (char*)"V.HandlePlaneEvent(vtkImagePlaneWidget)\nC++: void HandlePlaneEvent(vtkImagePlaneWidget *imagePlaneWidget)\n\nA public method to be used only by the event callback.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageOrthoPlanes_StaticNew()
{
  return vtkImageOrthoPlanes::New();
}

PyObject *PyVTKClass_vtkImageOrthoPlanesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageOrthoPlanes_StaticNew,
    PyvtkImageOrthoPlanes_Methods,
    "vtkImageOrthoPlanes", modulename,
    NULL, NULL,
    PyvtkImageOrthoPlanes_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkImageOrthoPlanes_Doc()
{
  static const char *docstring[] = {
    "vtkImageOrthoPlanes - Connect three vtkImagePlaneWidgets together\n\n",
    "Superclass: vtkObject\n\n",
    "vtkImageOrthoPlanes is an event observer class that listens to the\nevents from three vtkImagePlaneWidgets and keeps their orientations\nand scales synchronized.\n\nSee Also:\n\nvtkImagePlaneWidget\n\nThanks:\n\nThanks to Atamai Inc. for developing and contributing this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageOrthoPlanes(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageOrthoPlanesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageOrthoPlanes", o) != 0)
    {
    Py_DECREF(o);
    }

}

