// python wrapper for vtkResliceCursorPicker
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkResliceCursorPicker.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkResliceCursorPicker(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkResliceCursorPickerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPickerNew
extern "C" { PyObject *PyVTKClass_vtkPickerNew(const char *); }
#define DECLARED_PyVTKClass_vtkPickerNew
#endif

static const char **PyvtkResliceCursorPicker_Doc();


static PyObject *
PyvtkResliceCursorPicker_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkResliceCursorPicker::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursorPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceCursorPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursorPicker::NewInstance());

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
PyvtkResliceCursorPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkResliceCursorPicker *tempr = vtkResliceCursorPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_Pick_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkRenderer *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkRenderer"))
    {
    int tempr = (ap.IsBound() ?
      op->Pick(temp0, temp1, temp2, temp3) :
      op->vtkResliceCursorPicker::Pick(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkResliceCursorPicker_Pick_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  vtkRenderer *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkRenderer"))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->Pick(temp0, temp1, temp2);
      }
    else
      {
      op->vtkResliceCursorPicker::Pick(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkResliceCursorPicker_Pick(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkResliceCursorPicker_Pick_s1(self, args);
    case 3:
      return PyvtkResliceCursorPicker_Pick_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Pick");
  return NULL;
}



static PyObject *
PyvtkResliceCursorPicker_GetPickedAxis1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedAxis1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPickedAxis1() :
      op->vtkResliceCursorPicker::GetPickedAxis1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_GetPickedAxis2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedAxis2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPickedAxis2() :
      op->vtkResliceCursorPicker::GetPickedAxis2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_GetPickedCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPickedCenter() :
      op->vtkResliceCursorPicker::GetPickedCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_SetResliceCursorAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceCursorAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  vtkResliceCursorPolyDataAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkResliceCursorPolyDataAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetResliceCursorAlgorithm(temp0);
      }
    else
      {
      op->vtkResliceCursorPicker::SetResliceCursorAlgorithm(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_GetResliceCursorAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceCursorAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceCursorPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->GetResliceCursorAlgorithm() :
      op->vtkResliceCursorPicker::GetResliceCursorAlgorithm());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_SetTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetTransformMatrix(temp0);
      }
    else
      {
      op->vtkResliceCursorPicker::SetTransformMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkResliceCursorPicker_Methods[] = {
  {(char*)"GetClassName", PyvtkResliceCursorPicker_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkResliceCursorPicker_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkResliceCursorPicker_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkResliceCursorPicker\nC++: vtkResliceCursorPicker *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkResliceCursorPicker_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkResliceCursorPicker\nC++: vtkResliceCursorPicker *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Pick", PyvtkResliceCursorPicker_Pick, METH_VARARGS,
   (char*)"V.Pick(float, float, float, vtkRenderer) -> int\nC++: virtual int Pick(double selectionX, double selectionY,\n    double selectionZ, vtkRenderer *renderer)\nV.Pick([float, float], [float, float, float], vtkRenderer)\nC++: void Pick(double displayPos[2], double world[3],\n    vtkRenderer *ren)\n\nPerform pick operation with selection point provided. Normally\nthe first two values are the (x,y) pixel coordinates for the\npick, and the third value is z=0. The return value will be\nnon-zero if something was successfully picked.\n"},
  {(char*)"GetPickedAxis1", PyvtkResliceCursorPicker_GetPickedAxis1, METH_VARARGS,
   (char*)"V.GetPickedAxis1() -> int\nC++: int GetPickedAxis1()\n\nGet the picked axis\n"},
  {(char*)"GetPickedAxis2", PyvtkResliceCursorPicker_GetPickedAxis2, METH_VARARGS,
   (char*)"V.GetPickedAxis2() -> int\nC++: int GetPickedAxis2()\n\nGet the picked axis\n"},
  {(char*)"GetPickedCenter", PyvtkResliceCursorPicker_GetPickedCenter, METH_VARARGS,
   (char*)"V.GetPickedCenter() -> int\nC++: int GetPickedCenter()\n\nGet the picked axis\n"},
  {(char*)"SetResliceCursorAlgorithm", PyvtkResliceCursorPicker_SetResliceCursorAlgorithm, METH_VARARGS,
   (char*)"V.SetResliceCursorAlgorithm(vtkResliceCursorPolyDataAlgorithm)\nC++: virtual void SetResliceCursorAlgorithm(\n    vtkResliceCursorPolyDataAlgorithm *)\n\nSet the reslice cursor algorithm. One must be set\n"},
  {(char*)"GetResliceCursorAlgorithm", PyvtkResliceCursorPicker_GetResliceCursorAlgorithm, METH_VARARGS,
   (char*)"V.GetResliceCursorAlgorithm() -> vtkResliceCursorPolyDataAlgorithm\nC++: vtkResliceCursorPolyDataAlgorithm *GetResliceCursorAlgorithm(\n    )\n\nSet the reslice cursor algorithm. One must be set\n"},
  {(char*)"SetTransformMatrix", PyvtkResliceCursorPicker_SetTransformMatrix, METH_VARARGS,
   (char*)"V.SetTransformMatrix(vtkMatrix4x4)\nC++: virtual void SetTransformMatrix(vtkMatrix4x4 *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkResliceCursorPicker_StaticNew()
{
  return vtkResliceCursorPicker::New();
}

PyObject *PyVTKClass_vtkResliceCursorPickerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkResliceCursorPicker_StaticNew,
    PyvtkResliceCursorPicker_Methods,
    "vtkResliceCursorPicker", modulename,
    NULL, NULL,
    PyvtkResliceCursorPicker_Doc(),
    PyVTKClass_vtkPickerNew(modulename));
  return cls;
}

const char **PyvtkResliceCursorPicker_Doc()
{
  static const char *docstring[] = {
    "vtkResliceCursorPicker - ray-cast cell picker for the reslice cursor\n\n",
    "Superclass: vtkPicker\n\n",
    "This class is is used by the vtkResliceCursorWidget to pick reslice\naxes drawn by a vtkResliceCursorActor. The class returns the axes\npicked if any, whether one has picked the center. It takes as input\nan instance of vtkResliceCursorPolyDataAlgorithm. This is all done\ninternally by vtkResliceCursorWidget and as such users are not\nexpected to use this class directly, unless they are overriding the\n",
    "behaviour of vtkResliceCursorWidget.\n\nSee Also:\n\nvtkResliceCursor vtkResliceCursorWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkResliceCursorPicker(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkResliceCursorPickerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkResliceCursorPicker", o) != 0)
    {
    Py_DECREF(o);
    }

}

