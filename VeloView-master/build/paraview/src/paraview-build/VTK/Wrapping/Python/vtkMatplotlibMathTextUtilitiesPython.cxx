// python wrapper for vtkMatplotlibMathTextUtilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMatplotlibMathTextUtilities.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMatplotlibMathTextUtilities(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMatplotlibMathTextUtilitiesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMathTextUtilitiesNew
extern "C" { PyObject *PyVTKClass_vtkMathTextUtilitiesNew(const char *); }
#define DECLARED_PyVTKClass_vtkMathTextUtilitiesNew
#endif

static const char **PyvtkMatplotlibMathTextUtilities_Doc();


static PyObject *
PyvtkMatplotlibMathTextUtilities_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatplotlibMathTextUtilities *op = static_cast<vtkMatplotlibMathTextUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMatplotlibMathTextUtilities::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatplotlibMathTextUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatplotlibMathTextUtilities *op = static_cast<vtkMatplotlibMathTextUtilities *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMatplotlibMathTextUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatplotlibMathTextUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatplotlibMathTextUtilities *op = static_cast<vtkMatplotlibMathTextUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatplotlibMathTextUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMatplotlibMathTextUtilities::NewInstance());

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
PyvtkMatplotlibMathTextUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMatplotlibMathTextUtilities *tempr = vtkMatplotlibMathTextUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatplotlibMathTextUtilities_GetBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatplotlibMathTextUtilities *op = static_cast<vtkMatplotlibMathTextUtilities *>(vp);

  vtkTextProperty *temp0 = NULL;
  char *temp1 = NULL;
  unsigned int temp2;
  int temp3[4];
  int save3[4];
  const int size3 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    bool tempr = (ap.IsBound() ?
      op->GetBoundingBox(temp0, temp1, temp2, temp3) :
      op->vtkMatplotlibMathTextUtilities::GetBoundingBox(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatplotlibMathTextUtilities_RenderString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatplotlibMathTextUtilities *op = static_cast<vtkMatplotlibMathTextUtilities *>(vp);

  char *temp0 = NULL;
  vtkImageData *temp1 = NULL;
  vtkTextProperty *temp2 = NULL;
  unsigned int temp3;
  int temp4[2];
  int save4[2];
  const int size4 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetVTKObject(temp2, "vtkTextProperty") &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp4, save4, size4);

    bool tempr = (ap.IsBound() ?
      op->RenderString(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMatplotlibMathTextUtilities::RenderString(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatplotlibMathTextUtilities_StringToPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StringToPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatplotlibMathTextUtilities *op = static_cast<vtkMatplotlibMathTextUtilities *>(vp);

  char *temp0 = NULL;
  vtkPath *temp1 = NULL;
  vtkTextProperty *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPath") &&
      ap.GetVTKObject(temp2, "vtkTextProperty"))
    {
    bool tempr = (ap.IsBound() ?
      op->StringToPath(temp0, temp1, temp2) :
      op->vtkMatplotlibMathTextUtilities::StringToPath(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatplotlibMathTextUtilities_SetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatplotlibMathTextUtilities *op = static_cast<vtkMatplotlibMathTextUtilities *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleToPowerOfTwo(temp0);
      }
    else
      {
      op->vtkMatplotlibMathTextUtilities::SetScaleToPowerOfTwo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMatplotlibMathTextUtilities_GetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatplotlibMathTextUtilities *op = static_cast<vtkMatplotlibMathTextUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetScaleToPowerOfTwo() :
      op->vtkMatplotlibMathTextUtilities::GetScaleToPowerOfTwo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMatplotlibMathTextUtilities_Methods[] = {
  {(char*)"GetClassName", PyvtkMatplotlibMathTextUtilities_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMatplotlibMathTextUtilities_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMatplotlibMathTextUtilities_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMatplotlibMathTextUtilities\nC++: vtkMatplotlibMathTextUtilities *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMatplotlibMathTextUtilities_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMatplotlibMathTextUtilities\nC++: vtkMatplotlibMathTextUtilities *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetBoundingBox", PyvtkMatplotlibMathTextUtilities_GetBoundingBox, METH_VARARGS,
   (char*)"V.GetBoundingBox(vtkTextProperty, string, int, [int, int, int,\n    int]) -> bool\nC++: bool GetBoundingBox(vtkTextProperty *tprop, const char *str,\n    unsigned int dpi, int bbox[4])\n\nGiven a text property and a string, get the bounding box {xmin,\nxmax, ymin, ymax} of the rendered string in pixels. The origin of\nthe bounding box is the anchor point described by the horizontal\nand vertical justification text property variables. Returns true\non success, false otherwise.\n"},
  {(char*)"RenderString", PyvtkMatplotlibMathTextUtilities_RenderString, METH_VARARGS,
   (char*)"V.RenderString(string, vtkImageData, vtkTextProperty, int, [int,\n    int]) -> bool\nC++: bool RenderString(const char *str, vtkImageData *data,\n    vtkTextProperty *tprop, unsigned int dpi,\n    int textDims[2]=NULL)\n\nRender the given string str into the vtkImageData data with a\nresolution of dpi. The image is resized automatically. textDims\nwill be overwritten by the pixel width and height of the rendered\nstring. This is useful when ScaleToPowerOfTwo is true, and the\nimage dimensions may not match the dimensions of the rendered\ntext. The origin of the image's extents is aligned with the\nanchor point described by the text property's vertical and\nhorizontal justification options.\n"},
  {(char*)"StringToPath", PyvtkMatplotlibMathTextUtilities_StringToPath, METH_VARARGS,
   (char*)"V.StringToPath(string, vtkPath, vtkTextProperty) -> bool\nC++: bool StringToPath(const char *str, vtkPath *path,\n    vtkTextProperty *tprop)\n\nParse the MathText expression in str and fill path with a contour\nof the glyphs. The origin of the path coordinates is aligned with\nthe anchor point described by the text property's horizontal and\nvertical justification options.\n"},
  {(char*)"SetScaleToPowerOfTwo", PyvtkMatplotlibMathTextUtilities_SetScaleToPowerOfTwo, METH_VARARGS,
   (char*)"V.SetScaleToPowerOfTwo(bool)\nC++: void SetScaleToPowerOfTwo(bool a)\n\nSet to true if the graphics implmentation requires texture image\ndimensions to be a power of two. Default is true, but this member\nwill be set appropriately when GL is inited.\n"},
  {(char*)"GetScaleToPowerOfTwo", PyvtkMatplotlibMathTextUtilities_GetScaleToPowerOfTwo, METH_VARARGS,
   (char*)"V.GetScaleToPowerOfTwo() -> bool\nC++: bool GetScaleToPowerOfTwo()\n\nSet to true if the graphics implmentation requires texture image\ndimensions to be a power of two. Default is true, but this member\nwill be set appropriately when GL is inited.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMatplotlibMathTextUtilities_StaticNew()
{
  return vtkMatplotlibMathTextUtilities::New();
}

PyObject *PyVTKClass_vtkMatplotlibMathTextUtilitiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMatplotlibMathTextUtilities_StaticNew,
    PyvtkMatplotlibMathTextUtilities_Methods,
    "vtkMatplotlibMathTextUtilities", modulename,
    NULL, NULL,
    PyvtkMatplotlibMathTextUtilities_Doc(),
    PyVTKClass_vtkMathTextUtilitiesNew(modulename));
  return cls;
}

const char **PyvtkMatplotlibMathTextUtilities_Doc()
{
  static const char *docstring[] = {
    "vtkMatplotlibMathTextUtilities - Access to MatPlotLib MathText\nrendering\n\n",
    "Superclass: vtkMathTextUtilities\n\n",
    "vtkMatplotlibMathTextUtilities provides access to the MatPlotLib\nMathText implementation.\n\nThis class is aware of a number of environment variables that can be\nused to configure and debug python initialization (all are optional):\n- VTK_MATPLOTLIB_DEBUG: Enable verbose debugging output during\n  initialization of the python environment.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMatplotlibMathTextUtilities(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMatplotlibMathTextUtilitiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMatplotlibMathTextUtilities", o) != 0)
    {
    Py_DECREF(o);
    }

}

