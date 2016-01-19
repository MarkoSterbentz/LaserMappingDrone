// python wrapper for vtkPVClipClosedSurface
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVClipClosedSurface.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVClipClosedSurface(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVClipClosedSurfaceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkClipClosedSurfaceNew
extern "C" { PyObject *PyVTKClass_vtkClipClosedSurfaceNew(const char *); }
#define DECLARED_PyVTKClass_vtkClipClosedSurfaceNew
#endif

static const char **PyvtkPVClipClosedSurface_Doc();


static PyObject *
PyvtkPVClipClosedSurface_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipClosedSurface *op = static_cast<vtkPVClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVClipClosedSurface::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVClipClosedSurface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipClosedSurface *op = static_cast<vtkPVClipClosedSurface *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVClipClosedSurface::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVClipClosedSurface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipClosedSurface *op = static_cast<vtkPVClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVClipClosedSurface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVClipClosedSurface::NewInstance());

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
PyvtkPVClipClosedSurface_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVClipClosedSurface *tempr = vtkPVClipClosedSurface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVClipClosedSurface_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipClosedSurface *op = static_cast<vtkPVClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInsideOut(temp0);
      }
    else
      {
      op->vtkPVClipClosedSurface::SetInsideOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVClipClosedSurface_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipClosedSurface *op = static_cast<vtkPVClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkPVClipClosedSurface::GetInsideOut());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVClipClosedSurface_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipClosedSurface *op = static_cast<vtkPVClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOn();
      }
    else
      {
      op->vtkPVClipClosedSurface::InsideOutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVClipClosedSurface_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipClosedSurface *op = static_cast<vtkPVClipClosedSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOff();
      }
    else
      {
      op->vtkPVClipClosedSurface::InsideOutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVClipClosedSurface_SetClippingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipClosedSurface *op = static_cast<vtkPVClipClosedSurface *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->SetClippingPlane(temp0);
      }
    else
      {
      op->vtkPVClipClosedSurface::SetClippingPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVClipClosedSurface_Methods[] = {
  {(char*)"GetClassName", PyvtkPVClipClosedSurface_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVClipClosedSurface_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVClipClosedSurface_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVClipClosedSurface\nC++: vtkPVClipClosedSurface *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVClipClosedSurface_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVClipClosedSurface\nC++: vtkPVClipClosedSurface *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInsideOut", PyvtkPVClipClosedSurface_SetInsideOut, METH_VARARGS,
   (char*)"V.SetInsideOut(int)\nC++: void SetInsideOut(int a)\n\nSet/Get the InsideOut flag (off by default)\n"},
  {(char*)"GetInsideOut", PyvtkPVClipClosedSurface_GetInsideOut, METH_VARARGS,
   (char*)"V.GetInsideOut() -> int\nC++: int GetInsideOut()\n\nSet/Get the InsideOut flag (off by default)\n"},
  {(char*)"InsideOutOn", PyvtkPVClipClosedSurface_InsideOutOn, METH_VARARGS,
   (char*)"V.InsideOutOn()\nC++: void InsideOutOn()\n\nSet/Get the InsideOut flag (off by default)\n"},
  {(char*)"InsideOutOff", PyvtkPVClipClosedSurface_InsideOutOff, METH_VARARGS,
   (char*)"V.InsideOutOff()\nC++: void InsideOutOff()\n\nSet/Get the InsideOut flag (off by default)\n"},
  {(char*)"SetClippingPlane", PyvtkPVClipClosedSurface_SetClippingPlane, METH_VARARGS,
   (char*)"V.SetClippingPlane(vtkPlane)\nC++: void SetClippingPlane(vtkPlane *plane)\n\nSet the clipping plane.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVClipClosedSurface_StaticNew()
{
  return vtkPVClipClosedSurface::New();
}

PyObject *PyVTKClass_vtkPVClipClosedSurfaceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVClipClosedSurface_StaticNew,
    PyvtkPVClipClosedSurface_Methods,
    "vtkPVClipClosedSurface", modulename,
    NULL, NULL,
    PyvtkPVClipClosedSurface_Doc(),
    PyVTKClass_vtkClipClosedSurfaceNew(modulename));
  return cls;
}

const char **PyvtkPVClipClosedSurface_Doc()
{
  static const char *docstring[] = {
    "vtkPVClipClosedSurface - Clipper for generating closed surfaces\n\n",
    "Superclass: vtkClipClosedSurface\n\n",
    "This is a subclass of vtkClipClosedSurface\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVClipClosedSurface(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVClipClosedSurfaceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVClipClosedSurface", o) != 0)
    {
    Py_DECREF(o);
    }

}

