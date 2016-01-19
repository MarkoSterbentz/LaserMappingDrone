// python wrapper for vtkMathTextUtilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMathTextUtilities.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMathTextUtilities(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMathTextUtilitiesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMathTextUtilities_Doc();


static PyObject *
PyvtkMathTextUtilities_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMathTextUtilities::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMathTextUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMathTextUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMathTextUtilities::NewInstance());

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
PyvtkMathTextUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMathTextUtilities *tempr = vtkMathTextUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkMathTextUtilities *tempr = vtkMathTextUtilities::GetInstance();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_SetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetInstance");

  vtkMathTextUtilities *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMathTextUtilities"))
    {
    vtkMathTextUtilities::SetInstance(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_GetBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  vtkTextProperty *temp0 = NULL;
  char *temp1 = NULL;
  unsigned int temp2;
  int temp3[4];
  int save3[4];
  const int size3 = 4;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    bool tempr = op->GetBoundingBox(temp0, temp1, temp2, temp3);

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
PyvtkMathTextUtilities_RenderString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  char *temp0 = NULL;
  vtkImageData *temp1 = NULL;
  vtkTextProperty *temp2 = NULL;
  unsigned int temp3;
  int temp4[2];
  int save4[2];
  const int size4 = 2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetVTKObject(temp2, "vtkTextProperty") &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp4, save4, size4);

    bool tempr = op->RenderString(temp0, temp1, temp2, temp3, temp4);

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
PyvtkMathTextUtilities_StringToPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StringToPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  char *temp0 = NULL;
  vtkPath *temp1 = NULL;
  vtkTextProperty *temp2 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPath") &&
      ap.GetVTKObject(temp2, "vtkTextProperty"))
    {
    bool tempr = op->StringToPath(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_GetConstrainedFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  char *temp0 = NULL;
  vtkTextProperty *temp1 = NULL;
  int temp2;
  int temp3;
  unsigned int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    int tempr = (ap.IsBound() ?
      op->GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMathTextUtilities::GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_GetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    bool tempr = op->GetScaleToPowerOfTwo();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMathTextUtilities_SetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextUtilities *op = static_cast<vtkMathTextUtilities *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetScaleToPowerOfTwo(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMathTextUtilities_Methods[] = {
  {(char*)"GetClassName", PyvtkMathTextUtilities_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMathTextUtilities_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMathTextUtilities_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMathTextUtilities\nC++: vtkMathTextUtilities *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMathTextUtilities_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMathTextUtilities\nC++: vtkMathTextUtilities *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInstance", PyvtkMathTextUtilities_GetInstance, METH_VARARGS | METH_STATIC,
   (char*)"V.GetInstance() -> vtkMathTextUtilities\nC++: static vtkMathTextUtilities *GetInstance()\n\nReturn the singleton instance with no reference counting.\n"},
  {(char*)"SetInstance", PyvtkMathTextUtilities_SetInstance, METH_VARARGS | METH_STATIC,
   (char*)"V.SetInstance(vtkMathTextUtilities)\nC++: static void SetInstance(vtkMathTextUtilities *instance)\n\nSupply a user defined instance. Call Delete() on the supplied\ninstance after setting it to fix the reference count.\n"},
  {(char*)"GetBoundingBox", PyvtkMathTextUtilities_GetBoundingBox, METH_VARARGS,
   (char*)"V.GetBoundingBox(vtkTextProperty, string, int, [int, int, int,\n    int]) -> bool\nC++: virtual bool GetBoundingBox(vtkTextProperty *tprop,\n    const char *str, unsigned int dpi, int bbox[4])\n\nDetermine the dimensions of the image that RenderString will\nproduce for a given str, tprop, and dpi\n"},
  {(char*)"RenderString", PyvtkMathTextUtilities_RenderString, METH_VARARGS,
   (char*)"V.RenderString(string, vtkImageData, vtkTextProperty, int, [int,\n    int]) -> bool\nC++: virtual bool RenderString(const char *str,\n    vtkImageData *data, vtkTextProperty *tprop, unsigned int dpi,\n    int textDims[2]=NULL)\n\nRender the given string str into the vtkImageData data with a\nresolution of dpi. textDims, will be overwritten by the pixel\nwidth and height of the rendered string. This is useful when\nScaleToPowerOfTwo is set to true, and the image dimensions may\nnot match the dimensions of the rendered text.\n"},
  {(char*)"StringToPath", PyvtkMathTextUtilities_StringToPath, METH_VARARGS,
   (char*)"V.StringToPath(string, vtkPath, vtkTextProperty) -> bool\nC++: virtual bool StringToPath(const char *str, vtkPath *path,\n    vtkTextProperty *tprop)\n\nParse the MathText expression in str and fill path with a contour\nof the glyphs.\n"},
  {(char*)"GetConstrainedFontSize", PyvtkMathTextUtilities_GetConstrainedFontSize, METH_VARARGS,
   (char*)"V.GetConstrainedFontSize(string, vtkTextProperty, int, int, int)\n    -> int\nC++: virtual int GetConstrainedFontSize(const char *str,\n    vtkTextProperty *tprop, int targetWidth, int targetHeight,\n    unsigned int dpi)\n\nThis function returns the font size (in points) required to fit\nthe string in the target rectangle. The font size of tprop is\nupdated to the computed value as well. If an error occurs (e.g.\nan improperly formatted MathText string), -1 is returned.\n"},
  {(char*)"GetScaleToPowerOfTwo", PyvtkMathTextUtilities_GetScaleToPowerOfTwo, METH_VARARGS,
   (char*)"V.GetScaleToPowerOfTwo() -> bool\nC++: virtual bool GetScaleToPowerOfTwo()\n\nSet to true if the graphics implmentation requires texture image\ndimensions to be a power of two. Default is true, but this member\nwill be set appropriately when GL is inited.\n"},
  {(char*)"SetScaleToPowerOfTwo", PyvtkMathTextUtilities_SetScaleToPowerOfTwo, METH_VARARGS,
   (char*)"V.SetScaleToPowerOfTwo(bool)\nC++: virtual void SetScaleToPowerOfTwo(bool scale)\n\nSet to true if the graphics implmentation requires texture image\ndimensions to be a power of two. Default is true, but this member\nwill be set appropriately when GL is inited.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMathTextUtilities_StaticNew()
{
  return vtkMathTextUtilities::New();
}

PyObject *PyVTKClass_vtkMathTextUtilitiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMathTextUtilities_StaticNew,
    PyvtkMathTextUtilities_Methods,
    "vtkMathTextUtilities", modulename,
    NULL, NULL,
    PyvtkMathTextUtilities_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMathTextUtilities_Doc()
{
  static const char *docstring[] = {
    "vtkMathTextUtilities - Abstract interface to equation rendering.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkMathTextUtilities defines an interface for equation rendering.\nIntended for use with the python matplotlib.mathtext module\n(implemented in the vtkMatplotlib module).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMathTextUtilities(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMathTextUtilitiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMathTextUtilities", o) != 0)
    {
    Py_DECREF(o);
    }

}

