// python wrapper for vtkTextRendererStringToImage
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
#include "vtkTextRendererStringToImage.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTextRendererStringToImage(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTextRendererStringToImageNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStringToImageNew
extern "C" { PyObject *PyVTKClass_vtkStringToImageNew(const char *); }
#define DECLARED_PyVTKClass_vtkStringToImageNew
#endif

static const char **PyvtkTextRendererStringToImage_Doc();


static PyObject *
PyvtkTextRendererStringToImage_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRendererStringToImage *op = static_cast<vtkTextRendererStringToImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTextRendererStringToImage::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRendererStringToImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRendererStringToImage *op = static_cast<vtkTextRendererStringToImage *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextRendererStringToImage::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRendererStringToImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRendererStringToImage *op = static_cast<vtkTextRendererStringToImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextRendererStringToImage *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextRendererStringToImage::NewInstance());

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
PyvtkTextRendererStringToImage_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTextRendererStringToImage *tempr = vtkTextRendererStringToImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRendererStringToImage_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRendererStringToImage *op = static_cast<vtkTextRendererStringToImage *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkUnicodeString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1))
    {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetBounds(temp0, temp1) :
      op->vtkTextRendererStringToImage::GetBounds(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
      }
    }

  return result;
}

static PyObject *
PyvtkTextRendererStringToImage_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRendererStringToImage *op = static_cast<vtkTextRendererStringToImage *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1))
    {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetBounds(temp0, temp1) :
      op->vtkTextRendererStringToImage::GetBounds(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
      }
    }

  return result;
}

static PyMethodDef PyvtkTextRendererStringToImage_GetBounds_Methods[] = {
  {NULL, PyvtkTextRendererStringToImage_GetBounds_s1, METH_VARARGS,
   (char*)"@OO *vtkTextProperty unicode"},
  {NULL, PyvtkTextRendererStringToImage_GetBounds_s2, METH_VARARGS,
   (char*)"@Os *vtkTextProperty"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTextRendererStringToImage_GetBounds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextRendererStringToImage_GetBounds_Methods;
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
PyvtkTextRendererStringToImage_RenderString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRendererStringToImage *op = static_cast<vtkTextRendererStringToImage *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkUnicodeString temp1;
  vtkImageData *temp2 = NULL;
  int temp3[2];
  int save3[2];
  const int size3 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->RenderString(temp0, temp1, temp2, temp3) :
      op->vtkTextRendererStringToImage::RenderString(temp0, temp1, temp2, temp3));

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
PyvtkTextRendererStringToImage_RenderString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRendererStringToImage *op = static_cast<vtkTextRendererStringToImage *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkStdString temp1;
  vtkImageData *temp2 = NULL;
  int temp3[2];
  int save3[2];
  const int size3 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->RenderString(temp0, temp1, temp2, temp3) :
      op->vtkTextRendererStringToImage::RenderString(temp0, temp1, temp2, temp3));

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

static PyMethodDef PyvtkTextRendererStringToImage_RenderString_Methods[] = {
  {NULL, PyvtkTextRendererStringToImage_RenderString_s1, METH_VARARGS,
   (char*)"@OOOO *vtkTextProperty unicode *vtkImageData *i"},
  {NULL, PyvtkTextRendererStringToImage_RenderString_s2, METH_VARARGS,
   (char*)"@OsOO *vtkTextProperty *vtkImageData *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTextRendererStringToImage_RenderString(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextRendererStringToImage_RenderString_Methods;
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
PyvtkTextRendererStringToImage_SetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRendererStringToImage *op = static_cast<vtkTextRendererStringToImage *>(vp);

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
      op->vtkTextRendererStringToImage::SetScaleToPowerOfTwo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextRendererStringToImage_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRendererStringToImage *op = static_cast<vtkTextRendererStringToImage *>(vp);

  vtkTextRendererStringToImage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextRendererStringToImage"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkTextRendererStringToImage::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTextRendererStringToImage_Methods[] = {
  {(char*)"GetClassName", PyvtkTextRendererStringToImage_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTextRendererStringToImage_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTextRendererStringToImage_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTextRendererStringToImage\nC++: vtkTextRendererStringToImage *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTextRendererStringToImage_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTextRendererStringToImage\nC++: vtkTextRendererStringToImage *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetBounds", PyvtkTextRendererStringToImage_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds(vtkTextProperty, unicode) -> vtkVector2i\nC++: virtual vtkVector2i GetBounds(vtkTextProperty *property,\n    const vtkUnicodeString &string)\nV.GetBounds(vtkTextProperty, string) -> vtkVector2i\nC++: virtual vtkVector2i GetBounds(vtkTextProperty *property,\n    const vtkStdString &string)\n\nGiven a text property and a string, get the bounding box [xmin,\nxmax] x [ymin, ymax]. Note that this is the bounding box of the\narea where actual pixels will be written, given a\ntext/pen/baseline location of (0,0). For example, if the string\nstarts with a 'space', or depending on the orientation, you can\nend up with a [-20, -10] x [5, 10] bbox (the math to get the real\nbbox is straightforward). Return 1 on success, 0 otherwise. You\ncan use IsBoundingBoxValid() to test if the computed bbox is\nvalid (it may not if GetBoundingBox() failed or if the string was\nempty).\n"},
  {(char*)"RenderString", PyvtkTextRendererStringToImage_RenderString, METH_VARARGS,
   (char*)"V.RenderString(vtkTextProperty, unicode, vtkImageData, [int, int])\n     -> int\nC++: virtual int RenderString(vtkTextProperty *property,\n    const vtkUnicodeString &string, vtkImageData *data,\n    int textDims[2]=NULL)\nV.RenderString(vtkTextProperty, string, vtkImageData, [int, int])\n    -> int\nC++: virtual int RenderString(vtkTextProperty *property,\n    const vtkStdString &string, vtkImageData *data,\n    int textDims[2]=NULL)\n\nGiven a text property and a string, this function initializes the\nvtkImageData *data and renders it in a vtkImageData. textDims, if\nprovided, will be overwritten by the pixel width and height of\nthe rendered string. This is useful when ScaleToPowerOfTwo is\ntrue, and the image dimensions may not match the dimensions of\nthe rendered text.\n"},
  {(char*)"SetScaleToPowerOfTwo", PyvtkTextRendererStringToImage_SetScaleToPowerOfTwo, METH_VARARGS,
   (char*)"V.SetScaleToPowerOfTwo(bool)\nC++: virtual void SetScaleToPowerOfTwo(bool scale)\n\nShould we produce images at powers of 2, makes rendering on old\nOpenGL hardware easier. Default is false.\n"},
  {(char*)"DeepCopy", PyvtkTextRendererStringToImage_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkTextRendererStringToImage)\nC++: void DeepCopy(vtkTextRendererStringToImage *utility)\n\nMake a deep copy of the supplied utility class.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextRendererStringToImage_StaticNew()
{
  return vtkTextRendererStringToImage::New();
}

PyObject *PyVTKClass_vtkTextRendererStringToImageNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextRendererStringToImage_StaticNew,
    PyvtkTextRendererStringToImage_Methods,
    "vtkTextRendererStringToImage", modulename,
    NULL, NULL,
    PyvtkTextRendererStringToImage_Doc(),
    PyVTKClass_vtkStringToImageNew(modulename));
  return cls;
}

const char **PyvtkTextRendererStringToImage_Doc()
{
  static const char *docstring[] = {
    "vtkTextRendererStringToImage - uses vtkTextRenderer to render the\n\n",
    "Superclass: vtkStringToImage\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextRendererStringToImage(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextRendererStringToImageNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextRendererStringToImage", o) != 0)
    {
    Py_DECREF(o);
    }

}

