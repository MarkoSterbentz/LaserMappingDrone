// python wrapper for vtkAbstractPicker
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAbstractPicker.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAbstractPicker(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAbstractPickerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAbstractPicker_Doc();


static PyObject *
PyvtkAbstractPicker_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAbstractPicker::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractPicker::NewInstance());

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
PyvtkAbstractPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAbstractPicker *tempr = vtkAbstractPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPicker_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkAbstractPicker::GetRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPicker_GetSelectionPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSelectionPoint() :
      op->vtkAbstractPicker::GetSelectionPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPicker_GetPickPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPickPosition() :
      op->vtkAbstractPicker::GetPickPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPicker_Pick_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkRenderer *temp3 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkRenderer"))
    {
    int tempr = op->Pick(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractPicker_Pick_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

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
      op->vtkAbstractPicker::Pick(temp0, temp1));

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
PyvtkAbstractPicker_Pick(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkAbstractPicker_Pick_s1(self, args);
    case 2:
      return PyvtkAbstractPicker_Pick_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Pick");
  return NULL;
}



static PyObject *
PyvtkAbstractPicker_SetPickFromList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickFromList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPickFromList(temp0);
      }
    else
      {
      op->vtkAbstractPicker::SetPickFromList(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPicker_GetPickFromList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickFromList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPickFromList() :
      op->vtkAbstractPicker::GetPickFromList());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPicker_PickFromListOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickFromListOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PickFromListOn();
      }
    else
      {
      op->vtkAbstractPicker::PickFromListOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPicker_PickFromListOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickFromListOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PickFromListOff();
      }
    else
      {
      op->vtkAbstractPicker::PickFromListOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPicker_InitializePickList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializePickList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializePickList();
      }
    else
      {
      op->vtkAbstractPicker::InitializePickList();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPicker_AddPickList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPickList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->AddPickList(temp0);
      }
    else
      {
      op->vtkAbstractPicker::AddPickList(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPicker_DeletePickList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeletePickList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->DeletePickList(temp0);
      }
    else
      {
      op->vtkAbstractPicker::DeletePickList(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPicker_GetPickList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPropCollection *tempr = (ap.IsBound() ?
      op->GetPickList() :
      op->vtkAbstractPicker::GetPickList());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractPicker_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractPicker_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractPicker_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractPicker_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAbstractPicker\nC++: vtkAbstractPicker *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAbstractPicker_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAbstractPicker\nC++: vtkAbstractPicker *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetRenderer", PyvtkAbstractPicker_GetRenderer, METH_VARARGS,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nGet the renderer in which pick event occurred.\n"},
  {(char*)"GetSelectionPoint", PyvtkAbstractPicker_GetSelectionPoint, METH_VARARGS,
   (char*)"V.GetSelectionPoint() -> (float, float, float)\nC++: double *GetSelectionPoint()\n\nGet the selection point in screen (pixel) coordinates. The third\nvalue is related to z-buffer depth. (Normally should be =0.)\n"},
  {(char*)"GetPickPosition", PyvtkAbstractPicker_GetPickPosition, METH_VARARGS,
   (char*)"V.GetPickPosition() -> (float, float, float)\nC++: double *GetPickPosition()\n\nReturn position in global coordinates of pick point.\n"},
  {(char*)"Pick", PyvtkAbstractPicker_Pick, METH_VARARGS,
   (char*)"V.Pick(float, float, float, vtkRenderer) -> int\nC++: virtual int Pick(double selectionX, double selectionY,\n    double selectionZ, vtkRenderer *renderer)\nV.Pick([float, float, float], vtkRenderer) -> int\nC++: int Pick(double selectionPt[3], vtkRenderer *ren)\n\nPerform pick operation with selection point provided. Normally\nthe first two values for the selection point are x-y pixel\ncoordinate, and the third value is =0. Return non-zero if\nsomething was successfully picked.\n"},
  {(char*)"SetPickFromList", PyvtkAbstractPicker_SetPickFromList, METH_VARARGS,
   (char*)"V.SetPickFromList(int)\nC++: void SetPickFromList(int a)\n\nUse these methods to control whether to limit the picking to this\nlist (rather than renderer's actors). Make sure that the pick\nlist contains actors that referred to by the picker's renderer.\n"},
  {(char*)"GetPickFromList", PyvtkAbstractPicker_GetPickFromList, METH_VARARGS,
   (char*)"V.GetPickFromList() -> int\nC++: int GetPickFromList()\n\nUse these methods to control whether to limit the picking to this\nlist (rather than renderer's actors). Make sure that the pick\nlist contains actors that referred to by the picker's renderer.\n"},
  {(char*)"PickFromListOn", PyvtkAbstractPicker_PickFromListOn, METH_VARARGS,
   (char*)"V.PickFromListOn()\nC++: void PickFromListOn()\n\nUse these methods to control whether to limit the picking to this\nlist (rather than renderer's actors). Make sure that the pick\nlist contains actors that referred to by the picker's renderer.\n"},
  {(char*)"PickFromListOff", PyvtkAbstractPicker_PickFromListOff, METH_VARARGS,
   (char*)"V.PickFromListOff()\nC++: void PickFromListOff()\n\nUse these methods to control whether to limit the picking to this\nlist (rather than renderer's actors). Make sure that the pick\nlist contains actors that referred to by the picker's renderer.\n"},
  {(char*)"InitializePickList", PyvtkAbstractPicker_InitializePickList, METH_VARARGS,
   (char*)"V.InitializePickList()\nC++: void InitializePickList()\n\nInitialize list of actors in pick list.\n"},
  {(char*)"AddPickList", PyvtkAbstractPicker_AddPickList, METH_VARARGS,
   (char*)"V.AddPickList(vtkProp)\nC++: void AddPickList(vtkProp *)\n\nAdd an actor to the pick list.\n"},
  {(char*)"DeletePickList", PyvtkAbstractPicker_DeletePickList, METH_VARARGS,
   (char*)"V.DeletePickList(vtkProp)\nC++: void DeletePickList(vtkProp *)\n\nDelete an actor from the pick list.\n"},
  {(char*)"GetPickList", PyvtkAbstractPicker_GetPickList, METH_VARARGS,
   (char*)"V.GetPickList() -> vtkPropCollection\nC++: vtkPropCollection *GetPickList()\n\nReturn the list of actors in the PickList.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractPickerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractPicker_Methods,
    "vtkAbstractPicker", modulename,
    NULL, NULL,
    PyvtkAbstractPicker_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAbstractPicker_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractPicker - define API for picking subclasses\n\n",
    "Superclass: vtkObject\n\n",
    "vtkAbstractPicker is an abstract superclass that defines a minimal\nAPI for its concrete subclasses. The minimum functionality of a\npicker is to return the x-y-z global coordinate position of a pick\n(the pick itself is defined in display coordinates).\n\nThe API to this class is to invoke the Pick() method with a selection\npoint (in display coordinates - pixels) and a renderer. Then get the\nresulting",
    " pick position in global coordinates with the\nGetPickPosition() method.\n\nvtkPicker fires events during the picking process.  These events are\nStartPickEvent, PickEvent, and EndPickEvent which are invoked prior\nto picking, when something is picked, and after all picking\ncandidates have been tested. Note that during the pick process the\nPickEvent of vtkProp (and its subclasses such as vtkActor) is f",
    "ired\nprior to the PickEvent of vtkPicker.\n\nCaveats:\n\nvtkAbstractPicker and its subclasses will not pick props that are\n\"unpickable\" (see vtkProp) or are fully transparent (if transparency\nis a property of the vtkProp).\n\nThere are two classes of pickers: those that pick using geometric\nmethods (typically a ray cast); and those that use rendering\nhardware. Geometric methods return more information b",
    "ut are slower.\nHardware methods are much faster and return minimal information.\nExamples of geometric pickers include vtkPicker, vtkCellPicker, and\nvtkPointPicker. Examples of hardware pickers include\nvtkWorldPointPicker and vtkPropPicker.\n\nSee Also:\n\nvtkPropPicker uses hardware acceleration to pick an instance of\nvtkProp. (This means that 2D and 3D props can be picked, and it's\nrelatively fast.) ",
    "If you need to pick cells or points, you might wish\nto use vtkCellPicker or vtkPointPicker. vtkWorldPointPicker is the\nfastest picker, returning an x-y-z coordinate value using the\nhardware z-buffer. vtkPicker can be used to pick the bounding box of\n3D props.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractPicker(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractPickerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractPicker", o) != 0)
    {
    Py_DECREF(o);
    }

}

