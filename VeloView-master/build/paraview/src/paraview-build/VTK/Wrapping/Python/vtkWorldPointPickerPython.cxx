// python wrapper for vtkWorldPointPicker
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkWorldPointPicker.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWorldPointPicker(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWorldPointPickerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractPickerNew
extern "C" { PyObject *PyVTKClass_vtkAbstractPickerNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractPickerNew
#endif

static const char **PyvtkWorldPointPicker_Doc();


static PyObject *
PyvtkWorldPointPicker_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWorldPointPicker *op = static_cast<vtkWorldPointPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWorldPointPicker::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWorldPointPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWorldPointPicker *op = static_cast<vtkWorldPointPicker *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWorldPointPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWorldPointPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWorldPointPicker *op = static_cast<vtkWorldPointPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWorldPointPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWorldPointPicker::NewInstance());

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
PyvtkWorldPointPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWorldPointPicker *tempr = vtkWorldPointPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWorldPointPicker_Pick_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWorldPointPicker *op = static_cast<vtkWorldPointPicker *>(vp);

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
      op->vtkWorldPointPicker::Pick(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkWorldPointPicker_Pick_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWorldPointPicker *op = static_cast<vtkWorldPointPicker *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  vtkRenderer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Pick(temp0, temp1) :
      op->vtkWorldPointPicker::Pick(temp0, temp1));

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
PyvtkWorldPointPicker_Pick(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkWorldPointPicker_Pick_s1(self, args);
    case 2:
      return PyvtkWorldPointPicker_Pick_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Pick");
  return NULL;
}


static PyMethodDef PyvtkWorldPointPicker_Methods[] = {
  {(char*)"GetClassName", PyvtkWorldPointPicker_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWorldPointPicker_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWorldPointPicker_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWorldPointPicker\nC++: vtkWorldPointPicker *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWorldPointPicker_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWorldPointPicker\nC++: vtkWorldPointPicker *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Pick", PyvtkWorldPointPicker_Pick, METH_VARARGS,
   (char*)"V.Pick(float, float, float, vtkRenderer) -> int\nC++: int Pick(double selectionX, double selectionY,\n    double selectionZ, vtkRenderer *renderer)\nV.Pick([float, float, float], vtkRenderer) -> int\nC++: int Pick(double selectionPt[3], vtkRenderer *renderer)\n\nPerform the pick. (This method overload's the superclass.)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWorldPointPicker_StaticNew()
{
  return vtkWorldPointPicker::New();
}

PyObject *PyVTKClass_vtkWorldPointPickerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWorldPointPicker_StaticNew,
    PyvtkWorldPointPicker_Methods,
    "vtkWorldPointPicker", modulename,
    NULL, NULL,
    PyvtkWorldPointPicker_Doc(),
    PyVTKClass_vtkAbstractPickerNew(modulename));
  return cls;
}

const char **PyvtkWorldPointPicker_Doc()
{
  static const char *docstring[] = {
    "vtkWorldPointPicker - find world x,y,z corresponding to display x,y,z\n\n",
    "Superclass: vtkAbstractPicker\n\n",
    "vtkWorldPointPicker is used to find the x,y,z world coordinate of a\nscreen x,y,z. This picker cannot pick actors and/or mappers, it\nsimply determines an x-y-z coordinate in world space. (It will always\nreturn a x-y-z, even if the selection point is not over a\nprop/actor.)\n\nCaveats:\n\nThe PickMethod() is not invoked, but StartPickMethod() and\nEndPickMethod() are.\n\nSee Also:\n\nvtkPropPicker vtkPicker ",
    "vtkCellPicker vtkPointPicker\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWorldPointPicker(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWorldPointPickerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWorldPointPicker", o) != 0)
    {
    Py_DECREF(o);
    }

}

