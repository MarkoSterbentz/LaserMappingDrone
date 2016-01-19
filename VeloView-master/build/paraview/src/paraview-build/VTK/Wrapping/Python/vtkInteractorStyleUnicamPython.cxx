// python wrapper for vtkInteractorStyleUnicam
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInteractorStyleUnicam.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInteractorStyleUnicam(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInteractorStyleUnicamNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleNew
#endif

static const char **PyvtkInteractorStyleUnicam_Doc();


static PyObject *
PyvtkInteractorStyleUnicam_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInteractorStyleUnicam::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleUnicam::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInteractorStyleUnicam *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleUnicam::NewInstance());

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
PyvtkInteractorStyleUnicam_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInteractorStyleUnicam *tempr = vtkInteractorStyleUnicam::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_SetWorldUpVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetWorldUpVector(temp0);
      }
    else
      {
      op->vtkInteractorStyleUnicam::SetWorldUpVector(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInteractorStyleUnicam_SetWorldUpVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetWorldUpVector(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInteractorStyleUnicam::SetWorldUpVector(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInteractorStyleUnicam_SetWorldUpVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkInteractorStyleUnicam_SetWorldUpVector_s1(self, args);
    case 3:
      return PyvtkInteractorStyleUnicam_SetWorldUpVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWorldUpVector");
  return NULL;
}



static PyObject *
PyvtkInteractorStyleUnicam_GetWorldUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetWorldUpVector() :
      op->vtkInteractorStyleUnicam::GetWorldUpVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleUnicam::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleUnicam::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleUnicam::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_OnLeftButtonMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonMove();
      }
    else
      {
      op->vtkInteractorStyleUnicam::OnLeftButtonMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_OnTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnTimer();
      }
    else
      {
      op->vtkInteractorStyleUnicam::OnTimer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleUnicam_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleUnicam_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleUnicam_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleUnicam_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInteractorStyleUnicam\nC++: vtkInteractorStyleUnicam *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleUnicam_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleUnicam\nC++: vtkInteractorStyleUnicam *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWorldUpVector", PyvtkInteractorStyleUnicam_SetWorldUpVector, METH_VARARGS,
   (char*)"V.SetWorldUpVector([float, float, float])\nC++: void SetWorldUpVector(double a[3])\nV.SetWorldUpVector(float, float, float)\nC++: void SetWorldUpVector(double x, double y, double z)\n\n"},
  {(char*)"GetWorldUpVector", PyvtkInteractorStyleUnicam_GetWorldUpVector, METH_VARARGS,
   (char*)"V.GetWorldUpVector() -> (float, float, float)\nC++: double *GetWorldUpVector()\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleUnicam_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nConcrete implementation of event bindings\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleUnicam_OnLeftButtonDown, METH_VARARGS,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nConcrete implementation of event bindings\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleUnicam_OnLeftButtonUp, METH_VARARGS,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nConcrete implementation of event bindings\n"},
  {(char*)"OnLeftButtonMove", PyvtkInteractorStyleUnicam_OnLeftButtonMove, METH_VARARGS,
   (char*)"V.OnLeftButtonMove()\nC++: virtual void OnLeftButtonMove()\n\nConcrete implementation of event bindings\n"},
  {(char*)"OnTimer", PyvtkInteractorStyleUnicam_OnTimer, METH_VARARGS,
   (char*)"V.OnTimer()\nC++: virtual void OnTimer()\n\nOnTimer calls RotateCamera, RotateActor etc which should be\noverridden by style subclasses.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleUnicam_StaticNew()
{
  return vtkInteractorStyleUnicam::New();
}

PyObject *PyVTKClass_vtkInteractorStyleUnicamNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleUnicam_StaticNew,
    PyvtkInteractorStyleUnicam_Methods,
    "vtkInteractorStyleUnicam", modulename,
    NULL, NULL,
    PyvtkInteractorStyleUnicam_Doc(),
    PyVTKClass_vtkInteractorStyleNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleUnicam_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleUnicam - provides Unicam navigation style\n\n",
    "Superclass: vtkInteractorStyle\n\n",
    "UniCam is a camera interactor.  Here, just the primary features of\nthe UniCam technique are implemented.  UniCam requires just one mouse\nbutton and supports context sensitive dollying, panning, and\nrotation.  (In this implementation, it uses the right mouse button,\nleaving the middle and left available for other functions.) For more\ninformation, see the paper at:\n\n\n   ftp://ftp.cs.brown.edu/pub/pa",
    "pers/graphics/research/unicam.pdf\n\nThe following is a brief description of the UniCam Camera Controls. \nYou can perform 3 operations on the camera: rotate, pan, and dolly\nthe camera. All operations are reached through the right mouse button\n& mouse movements.\n\nIMPORTANT: UniCam assumes there is an axis that makes sense as a \"up\"\nvector for the world.  By default, this axis is defined to be the\nvec",
    "tor <0,0,1>.  You can set it explicitly for the data you are\nviewing with the 'SetWorldUpVector(..)' method in C++, or similarly\nin Tcl/Tk (or other interpreted languages).\n\n1. ROTATE:\n\nPosition the cursor over the point you wish to rotate around and\npress and release the left mouse button.  A 'focus dot' appears\nindicating the point that will be the center of rotation.  To rotate,\npress and hold ",
    "the left mouse button and drag the mouse.. release the\nbutton to complete the rotation.\n\nRotations can be done without placing a focus dot first by moving the\nmouse cursor to within 10% of the window border & pressing and\nholding the left button followed by dragging the mouse.  The last\nfocus dot position will be re-used.\n\n2. PAN:\n\nClick and hold the left mouse button, and initially move the mouse",
    "\nleft or right.  The point under the initial pick will pick correlate\nw/ the mouse tip-- (i.e., direct manipulation).\n\n3. DOLLY (+ PAN):\n\nClick and hold the left mouse button, and initially move the mouse up\nor down.  Moving the mouse down will dolly towards the picked point,\nand moving the mouse up will dolly away from it.  Dollying occurs\nrelative to the picked point which simplifies the task of",
    " dollying\ntowards a region of interest. Left and right mouse movements will pan\nthe camera left and right.\n\nCaveats:\n\n(NOTE: This implementation of Unicam assumes a perspective camera. \nIt could be modified relatively easily to also support an\northographic projection.)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleUnicam(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleUnicamNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleUnicam", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 8; c++)
    {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "VTK_UNICAM_NONE", 0 },
        { "VTK_UNICAM_BUTTON_LEFT", 1 },
        { "VTK_UNICAM_BUTTON_MIDDLE", 2 },
        { "VTK_UNICAM_BUTTON_RIGHT", 3 },
        { "VTK_UNICAM_CAM_INT_ROT", 0 },
        { "VTK_UNICAM_CAM_INT_CHOOSE", 1 },
        { "VTK_UNICAM_CAM_INT_PAN", 2 },
        { "VTK_UNICAM_CAM_INT_DOLLY", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

