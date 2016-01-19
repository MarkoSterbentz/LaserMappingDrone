// python wrapper for vtkScalarsToColorsItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkScalarsToColorsItem.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkScalarsToColorsItem(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkScalarsToColorsItemNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPlotNew
extern "C" { PyObject *PyVTKClass_vtkPlotNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlotNew
#endif

static const char **PyvtkScalarsToColorsItem_Doc();


static PyObject *
PyvtkScalarsToColorsItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkScalarsToColorsItem::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScalarsToColorsItem::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarsToColorsItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScalarsToColorsItem::NewInstance());

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
PyvtkScalarsToColorsItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkScalarsToColorsItem *tempr = vtkScalarsToColorsItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkScalarsToColorsItem::GetBounds(temp0);
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
PyvtkScalarsToColorsItem_SetUserBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetUserBounds(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkScalarsToColorsItem::SetUserBounds(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkScalarsToColorsItem_SetUserBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetUserBounds(temp0);
      }
    else
      {
      op->vtkScalarsToColorsItem::SetUserBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkScalarsToColorsItem_SetUserBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkScalarsToColorsItem_SetUserBounds_s1(self, args);
    case 1:
      return PyvtkScalarsToColorsItem_SetUserBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUserBounds");
  return NULL;
}



static PyObject *
PyvtkScalarsToColorsItem_GetUserBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetUserBounds() :
      op->vtkScalarsToColorsItem::GetUserBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkScalarsToColorsItem::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_GetPolyLinePen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyLinePen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPolyLinePen() :
      op->vtkScalarsToColorsItem::GetPolyLinePen());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_SetMaskAboveCurve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskAboveCurve");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskAboveCurve(temp0);
      }
    else
      {
      op->vtkScalarsToColorsItem::SetMaskAboveCurve(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_GetMaskAboveCurve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskAboveCurve");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetMaskAboveCurve() :
      op->vtkScalarsToColorsItem::GetMaskAboveCurve());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkScalarsToColorsItem_Methods[] = {
  {(char*)"GetClassName", PyvtkScalarsToColorsItem_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkScalarsToColorsItem_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkScalarsToColorsItem_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkScalarsToColorsItem\nC++: vtkScalarsToColorsItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkScalarsToColorsItem_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkScalarsToColorsItem\nC++: vtkScalarsToColorsItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetBounds", PyvtkScalarsToColorsItem_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, float, float, float])\nC++: void GetBounds(double bounds[4])\n\nBounds of the item, use the UserBounds if valid otherwise compute\nthe bounds of the item (based on the transfer function range).\n"},
  {(char*)"SetUserBounds", PyvtkScalarsToColorsItem_SetUserBounds, METH_VARARGS,
   (char*)"V.SetUserBounds(float, float, float, float)\nC++: void SetUserBounds(double, double, double, double)\nV.SetUserBounds((float, float, float, float))\nC++: void SetUserBounds(double a[4])\n\n"},
  {(char*)"GetUserBounds", PyvtkScalarsToColorsItem_GetUserBounds, METH_VARARGS,
   (char*)"V.GetUserBounds() -> (float, float, float, float)\nC++: double *GetUserBounds()\n\n"},
  {(char*)"Paint", PyvtkScalarsToColorsItem_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint the texture into a rectangle defined by the bounds. If\nMaskAboveCurve is true and a shape has been provided by a\nsubclass, it draws the texture into the shape\n"},
  {(char*)"GetPolyLinePen", PyvtkScalarsToColorsItem_GetPolyLinePen, METH_VARARGS,
   (char*)"V.GetPolyLinePen() -> vtkPen\nC++: vtkPen *GetPolyLinePen()\n\nGet a pointer to the vtkPen object that controls the drawing of\nthe edge of the shape if any. PolyLinePen type is vtkPen::NO_PEN\nby default.\n"},
  {(char*)"SetMaskAboveCurve", PyvtkScalarsToColorsItem_SetMaskAboveCurve, METH_VARARGS,
   (char*)"V.SetMaskAboveCurve(bool)\nC++: void SetMaskAboveCurve(bool a)\n\nDon't fill in the part above the transfer function. If true\ntexture is not visible above the shape provided by subclasses,\notherwise the whole rectangle defined by the bounds is filled\nwith the transfer function. Note: only 2D transfer functions (RGB\ntf + alpha tf ) support the feature.\n"},
  {(char*)"GetMaskAboveCurve", PyvtkScalarsToColorsItem_GetMaskAboveCurve, METH_VARARGS,
   (char*)"V.GetMaskAboveCurve() -> bool\nC++: bool GetMaskAboveCurve()\n\nDon't fill in the part above the transfer function. If true\ntexture is not visible above the shape provided by subclasses,\notherwise the whole rectangle defined by the bounds is filled\nwith the transfer function. Note: only 2D transfer functions (RGB\ntf + alpha tf ) support the feature.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkScalarsToColorsItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkScalarsToColorsItem_Methods,
    "vtkScalarsToColorsItem", modulename,
    NULL, NULL,
    PyvtkScalarsToColorsItem_Doc(),
    PyVTKClass_vtkPlotNew(modulename));
  return cls;
}

const char **PyvtkScalarsToColorsItem_Doc()
{
  static const char *docstring[] = {
    "vtkScalarsToColorsItem - Abstract class for ScalarsToColors items.\n\n",
    "Superclass: vtkPlot\n\n",
    "vtkScalarsToColorsItem implements item bounds and painting for\ninherited classes that provide a texture (ComputeTexture()) and\noptionally a shape\n\nSee Also:\n\nvtkControlPointsItem vtkLookupTableItem vtkColorTransferFunctionItem\nvtkCompositeTransferFunctionItem vtkPiecewiseItemFunctionItem\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkScalarsToColorsItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkScalarsToColorsItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkScalarsToColorsItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

