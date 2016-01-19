// python wrapper for vtkRenderedAreaPicker
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRenderedAreaPicker.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRenderedAreaPicker(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRenderedAreaPickerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAreaPickerNew
extern "C" { PyObject *PyVTKClass_vtkAreaPickerNew(const char *); }
#define DECLARED_PyVTKClass_vtkAreaPickerNew
#endif

static const char **PyvtkRenderedAreaPicker_Doc();


static PyObject *
PyvtkRenderedAreaPicker_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedAreaPicker *op = static_cast<vtkRenderedAreaPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRenderedAreaPicker::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedAreaPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedAreaPicker *op = static_cast<vtkRenderedAreaPicker *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderedAreaPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedAreaPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedAreaPicker *op = static_cast<vtkRenderedAreaPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderedAreaPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderedAreaPicker::NewInstance());

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
PyvtkRenderedAreaPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRenderedAreaPicker *tempr = vtkRenderedAreaPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedAreaPicker_AreaPick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AreaPick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedAreaPicker *op = static_cast<vtkRenderedAreaPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  vtkRenderer *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkRenderer"))
    {
    int tempr = (ap.IsBound() ?
      op->AreaPick(temp0, temp1, temp2, temp3, temp4) :
      op->vtkRenderedAreaPicker::AreaPick(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderedAreaPicker_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderedAreaPicker_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderedAreaPicker_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderedAreaPicker_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRenderedAreaPicker\nC++: vtkRenderedAreaPicker *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderedAreaPicker_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderedAreaPicker\nC++: vtkRenderedAreaPicker *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AreaPick", PyvtkRenderedAreaPicker_AreaPick, METH_VARARGS,
   (char*)"V.AreaPick(float, float, float, float, vtkRenderer) -> int\nC++: virtual int AreaPick(double x0, double y0, double x1,\n    double y1, vtkRenderer *)\n\nPerform pick operation in volume behind the given screen\ncoordinates. Props intersecting the selection frustum will be\naccessible via GetProp3D. GetPlanes returns a vtkImplicitFunciton\nsuitable for vtkExtractGeometry.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderedAreaPicker_StaticNew()
{
  return vtkRenderedAreaPicker::New();
}

PyObject *PyVTKClass_vtkRenderedAreaPickerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderedAreaPicker_StaticNew,
    PyvtkRenderedAreaPicker_Methods,
    "vtkRenderedAreaPicker", modulename,
    NULL, NULL,
    PyvtkRenderedAreaPicker_Doc(),
    PyVTKClass_vtkAreaPickerNew(modulename));
  return cls;
}

const char **PyvtkRenderedAreaPicker_Doc()
{
  static const char *docstring[] = {
    "vtkRenderedAreaPicker - Uses graphics hardware to picks props behind\n\n",
    "Superclass: vtkAreaPicker\n\n",
    "Like vtkAreaPicker, this class picks all props within a selection\narea on the screen. The difference is in implementation. This class\nuses graphics hardware to perform the test where the other uses\nsoftware bounding box/frustum intersection testing.\n\nThis picker is more conservative than vtkAreaPicker. It will reject\nsome objects that pass the bounding box test of vtkAreaPicker. This\nwill happen, ",
    "for instance, when picking through a corner of the\nbounding box when the data set does not have any visible geometry in\nthat corner.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderedAreaPicker(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderedAreaPickerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderedAreaPicker", o) != 0)
    {
    Py_DECREF(o);
    }

}

