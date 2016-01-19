// python wrapper for vtkPropPicker
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPropPicker.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPropPicker(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPropPickerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractPropPickerNew
extern "C" { PyObject *PyVTKClass_vtkAbstractPropPickerNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractPropPickerNew
#endif

static const char **PyvtkPropPicker_Doc();


static PyObject *
PyvtkPropPicker_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPropPicker::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPropPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPropPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPropPicker::NewInstance());

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
PyvtkPropPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPropPicker *tempr = vtkPropPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPropPicker_PickProp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

  double temp0;
  double temp1;
  vtkRenderer *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderer"))
    {
    int tempr = (ap.IsBound() ?
      op->PickProp(temp0, temp1, temp2) :
      op->vtkPropPicker::PickProp(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPropPicker_PickProp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

  double temp0;
  double temp1;
  vtkRenderer *temp2 = NULL;
  vtkPropCollection *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderer") &&
      ap.GetVTKObject(temp3, "vtkPropCollection"))
    {
    int tempr = (ap.IsBound() ?
      op->PickProp(temp0, temp1, temp2, temp3) :
      op->vtkPropPicker::PickProp(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPropPicker_PickProp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPropPicker_PickProp_s1(self, args);
    case 4:
      return PyvtkPropPicker_PickProp_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PickProp");
  return NULL;
}



static PyObject *
PyvtkPropPicker_Pick_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

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
      op->vtkPropPicker::Pick(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPropPicker_Pick_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

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
      op->vtkPropPicker::Pick(temp0, temp1));

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
PyvtkPropPicker_Pick(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPropPicker_Pick_s1(self, args);
    case 2:
      return PyvtkPropPicker_Pick_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Pick");
  return NULL;
}


static PyMethodDef PyvtkPropPicker_Methods[] = {
  {(char*)"GetClassName", PyvtkPropPicker_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPropPicker_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPropPicker_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPropPicker\nC++: vtkPropPicker *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPropPicker_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPropPicker\nC++: vtkPropPicker *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"PickProp", PyvtkPropPicker_PickProp, METH_VARARGS,
   (char*)"V.PickProp(float, float, vtkRenderer) -> int\nC++: int PickProp(double selectionX, double selectionY,\n    vtkRenderer *renderer)\nV.PickProp(float, float, vtkRenderer, vtkPropCollection) -> int\nC++: int PickProp(double selectionX, double selectionY,\n    vtkRenderer *renderer, vtkPropCollection *pickfrom)\n\nPerform the pick and set the PickedProp ivar. If something is\npicked, a 1 is returned, otherwise 0 is returned.  Use the\nGetViewProp() method to get the instance of vtkProp that was\npicked.  Props are picked from the renderers list of pickable\nProps.\n"},
  {(char*)"Pick", PyvtkPropPicker_Pick, METH_VARARGS,
   (char*)"V.Pick(float, float, float, vtkRenderer) -> int\nC++: int Pick(double selectionX, double selectionY,\n    double selectionZ, vtkRenderer *renderer)\nV.Pick([float, float, float], vtkRenderer) -> int\nC++: int Pick(double selectionPt[3], vtkRenderer *renderer)\n\nOveride superclasses' Pick() method.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPropPicker_StaticNew()
{
  return vtkPropPicker::New();
}

PyObject *PyVTKClass_vtkPropPickerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPropPicker_StaticNew,
    PyvtkPropPicker_Methods,
    "vtkPropPicker", modulename,
    NULL, NULL,
    PyvtkPropPicker_Doc(),
    PyVTKClass_vtkAbstractPropPickerNew(modulename));
  return cls;
}

const char **PyvtkPropPicker_Doc()
{
  static const char *docstring[] = {
    "vtkPropPicker - pick an actor/prop using graphics hardware\n\n",
    "Superclass: vtkAbstractPropPicker\n\n",
    "vtkPropPicker is used to pick an actor/prop given a selection point\n(in display coordinates) and a renderer. This class uses graphics\nhardware/rendering system to pick rapidly (as compared to using ray\ncasting as does vtkCellPicker and vtkPointPicker). This class\ndetermines the actor/prop and pick position in world coordinates;\npoint and cell ids are not determined.\n\nSee Also:\n\nvtkPicker vtkWorldP",
    "ointPicker vtkCellPicker vtkPointPicker\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPropPicker(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPropPickerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPropPicker", o) != 0)
    {
    Py_DECREF(o);
    }

}

