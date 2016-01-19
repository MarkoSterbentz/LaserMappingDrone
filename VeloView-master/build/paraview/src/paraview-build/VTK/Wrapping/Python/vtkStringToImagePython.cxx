// python wrapper for vtkStringToImage
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkUnicodeString.h"
#include "vtkStdString.h"
#include "vtkStringToImage.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStringToImage(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStringToImageNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkStringToImage_Doc();


static PyObject *
PyvtkStringToImage_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStringToImage::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStringToImage::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringToImage *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStringToImage::NewInstance());

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
PyvtkStringToImage_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStringToImage *tempr = vtkStringToImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToImage_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkUnicodeString temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1))
    {
    vtkVector2i tempr = op->GetBounds(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
      }
    }

  return result;
}

static PyObject *
PyvtkStringToImage_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1))
    {
    vtkVector2i tempr = op->GetBounds(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
      }
    }

  return result;
}

static PyMethodDef PyvtkStringToImage_GetBounds_Methods[] = {
  {NULL, PyvtkStringToImage_GetBounds_s1, METH_VARARGS,
   (char*)"@OO *vtkTextProperty unicode"},
  {NULL, PyvtkStringToImage_GetBounds_s2, METH_VARARGS,
   (char*)"@Os *vtkTextProperty"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStringToImage_GetBounds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStringToImage_GetBounds_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkStringToImage_RenderString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkUnicodeString temp1;
  vtkImageData *temp2 = NULL;
  int temp3[2];
  int save3[2];
  const int size3 = 2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    int tempr = op->RenderString(temp0, temp1, temp2, temp3);

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
PyvtkStringToImage_RenderString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkStdString temp1;
  vtkImageData *temp2 = NULL;
  int temp3[2];
  int save3[2];
  const int size3 = 2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    int tempr = op->RenderString(temp0, temp1, temp2, temp3);

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

static PyMethodDef PyvtkStringToImage_RenderString_Methods[] = {
  {NULL, PyvtkStringToImage_RenderString_s1, METH_VARARGS,
   (char*)"@OOOO *vtkTextProperty unicode *vtkImageData *i"},
  {NULL, PyvtkStringToImage_RenderString_s2, METH_VARARGS,
   (char*)"@OsOO *vtkTextProperty *vtkImageData *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStringToImage_RenderString(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStringToImage_RenderString_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RenderString");
  return NULL;
}



static PyObject *
PyvtkStringToImage_SetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

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
      op->vtkStringToImage::SetScaleToPowerOfTwo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToImage_GetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetScaleToPowerOfTwo() :
      op->vtkStringToImage::GetScaleToPowerOfTwo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStringToImage_Methods[] = {
  {(char*)"GetClassName", PyvtkStringToImage_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStringToImage_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStringToImage_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStringToImage\nC++: vtkStringToImage *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStringToImage_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStringToImage\nC++: vtkStringToImage *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetBounds", PyvtkStringToImage_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds(vtkTextProperty, unicode) -> vtkVector2i\nC++: virtual vtkVector2i GetBounds(vtkTextProperty *property,\n    const vtkUnicodeString &string)\nV.GetBounds(vtkTextProperty, string) -> vtkVector2i\nC++: virtual vtkVector2i GetBounds(vtkTextProperty *property,\n    const vtkStdString &string)\n\nGiven a text property and a string, get the bounding box [xmin,\nxmax] x [ymin, ymax]. Note that this is the bounding box of the\narea where actual pixels will be written, given a\ntext/pen/baseline location of (0,0). For example, if the string\nstarts with a 'space', or depending on the orientation, you can\nend up with a [-20, -10] x [5, 10] bbox (the math to get the real\nbbox is straightforward). Return 1 on success, 0 otherwise. You\ncan use IsBoundingBoxValid() to test if the computed bbox is\nvalid (it may not if GetBoundingBox() failed or if the string was\nempty).\n"},
  {(char*)"RenderString", PyvtkStringToImage_RenderString, METH_VARARGS,
   (char*)"V.RenderString(vtkTextProperty, unicode, vtkImageData, [int, int])\n     -> int\nC++: virtual int RenderString(vtkTextProperty *property,\n    const vtkUnicodeString &string, vtkImageData *data,\n    int textDims[2]=NULL)\nV.RenderString(vtkTextProperty, string, vtkImageData, [int, int])\n    -> int\nC++: virtual int RenderString(vtkTextProperty *property,\n    const vtkStdString &string, vtkImageData *data,\n    int text_dims[2]=NULL)\n\nGiven a text property and a string, this function initializes the\nvtkImageData *data and renders it in a vtkImageData. textDims, if\nprovided, will be overwritten by the pixel width and height of\nthe rendered string. This is useful when ScaleToPowerOfTwo is\ntrue, and the image dimensions may not match the dimensions of\nthe rendered text.\n"},
  {(char*)"SetScaleToPowerOfTwo", PyvtkStringToImage_SetScaleToPowerOfTwo, METH_VARARGS,
   (char*)"V.SetScaleToPowerOfTwo(bool)\nC++: virtual void SetScaleToPowerOfTwo(bool scale)\n\nShould we produce images at powers of 2, makes rendering on old\nOpenGL hardware easier. Default is false.\n"},
  {(char*)"GetScaleToPowerOfTwo", PyvtkStringToImage_GetScaleToPowerOfTwo, METH_VARARGS,
   (char*)"V.GetScaleToPowerOfTwo() -> bool\nC++: bool GetScaleToPowerOfTwo()\n\nShould we produce images at powers of 2, makes rendering on old\nOpenGL hardware easier. Default is false.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkStringToImageNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkStringToImage_Methods,
    "vtkStringToImage", modulename,
    NULL, NULL,
    PyvtkStringToImage_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkStringToImage_Doc()
{
  static const char *docstring[] = {
    "vtkStringToImage - uses Qt to render the supplied text to an image.\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStringToImage(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStringToImageNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStringToImage", o) != 0)
    {
    Py_DECREF(o);
    }

}

