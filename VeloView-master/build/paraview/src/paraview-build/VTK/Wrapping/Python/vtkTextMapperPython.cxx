// python wrapper for vtkTextMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTextMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTextMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTextMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMapper2DNew
extern "C" { PyObject *PyVTKClass_vtkMapper2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkMapper2DNew
#endif

static const char **PyvtkTextMapper_Doc();


static PyObject *
PyvtkTextMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTextMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextMapper::NewInstance());

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
PyvtkTextMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTextMapper *tempr = vtkTextMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = NULL;
  int temp1[2];
  int save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetSize(temp0, temp1);
      }
    else
      {
      op->vtkTextMapper::GetSize(temp0, temp1);
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
PyvtkTextMapper_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->GetWidth(temp0) :
      op->vtkTextMapper::GetWidth(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->GetHeight(temp0) :
      op->vtkTextMapper::GetHeight(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkTextMapper::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkTextMapper::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTextProperty(temp0);
      }
    else
      {
      op->vtkTextMapper::SetTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkTextMapper::GetTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkTextMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextMapper"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkTextMapper::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkTextMapper_GetNumberOfLines_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLines(temp0) :
      op->vtkTextMapper::GetNumberOfLines(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif

#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkTextMapper_GetNumberOfLines_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLines() :
      op->vtkTextMapper::GetNumberOfLines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif

#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkTextMapper_GetNumberOfLines(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkTextMapper_GetNumberOfLines_s1(self, args);
    case 0:
      return PyvtkTextMapper_GetNumberOfLines_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfLines");
  return NULL;
}

#endif


static PyObject *
PyvtkTextMapper_SetConstrainedFontSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->SetConstrainedFontSize(temp0, temp1, temp2) :
      op->vtkTextMapper::SetConstrainedFontSize(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextMapper_SetConstrainedFontSize_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetConstrainedFontSize");

  vtkTextMapper *temp0 = NULL;
  vtkViewport *temp1 = NULL;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextMapper") &&
      ap.GetVTKObject(temp1, "vtkViewport") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = vtkTextMapper::SetConstrainedFontSize(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextMapper_SetConstrainedFontSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 3:
      return PyvtkTextMapper_SetConstrainedFontSize_s1(self, args);
    case 4:
      return PyvtkTextMapper_SetConstrainedFontSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetConstrainedFontSize");
  return NULL;
}



static PyObject *
PyvtkTextMapper_SetRelativeFontSize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRelativeFontSize");

  vtkTextMapper *temp0 = NULL;
  vtkViewport *temp1 = NULL;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  int *temp3 = NULL;
  int *save3 = NULL;
  int small3[8];
  int size3 = 0;
  float temp4 = 0.0;
  PyObject *result = NULL;

  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new int[2*size2];
    }
  save2 = &temp2[size2];
  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new int[2*size3];
    }
  save3 = &temp3[size3];

  if (ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkTextMapper") &&
      ap.GetVTKObject(temp1, "vtkViewport") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = vtkTextMapper::SetRelativeFontSize(temp0, temp1, temp2, temp3, temp4);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

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

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkTextMapper_GetSystemFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSystemFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSystemFontSize(temp0) :
      op->vtkTextMapper::GetSystemFontSize(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif


static PyObject *
PyvtkTextMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = NULL;
  vtkActor2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->RenderOverlay(temp0, temp1);
      }
    else
      {
      op->vtkTextMapper::RenderOverlay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkTextMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTextMapper::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTextMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkTextMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTextMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTextMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTextMapper\nC++: vtkTextMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTextMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTextMapper\nC++: vtkTextMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSize", PyvtkTextMapper_GetSize, METH_VARARGS,
   (char*)"V.GetSize(vtkViewport, [int, int])\nC++: virtual void GetSize(vtkViewport *, int size[2])\n\nReturn the size[2]/width/height of the rectangle required to draw\nthis mapper (in pixels).\n"},
  {(char*)"GetWidth", PyvtkTextMapper_GetWidth, METH_VARARGS,
   (char*)"V.GetWidth(vtkViewport) -> int\nC++: virtual int GetWidth(vtkViewport *v)\n\nReturn the size[2]/width/height of the rectangle required to draw\nthis mapper (in pixels).\n"},
  {(char*)"GetHeight", PyvtkTextMapper_GetHeight, METH_VARARGS,
   (char*)"V.GetHeight(vtkViewport) -> int\nC++: virtual int GetHeight(vtkViewport *v)\n\nReturn the size[2]/width/height of the rectangle required to draw\nthis mapper (in pixels).\n"},
  {(char*)"SetInput", PyvtkTextMapper_SetInput, METH_VARARGS,
   (char*)"V.SetInput(string)\nC++: void SetInput(char *)\n\nThe input text string to the mapper.\n"},
  {(char*)"GetInput", PyvtkTextMapper_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> string\nC++: char *GetInput()\n\nThe input text string to the mapper.\n"},
  {(char*)"SetTextProperty", PyvtkTextMapper_SetTextProperty, METH_VARARGS,
   (char*)"V.SetTextProperty(vtkTextProperty)\nC++: virtual void SetTextProperty(vtkTextProperty *p)\n\nSet/Get the text property.\n"},
  {(char*)"GetTextProperty", PyvtkTextMapper_GetTextProperty, METH_VARARGS,
   (char*)"V.GetTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\nSet/Get the text property.\n"},
  {(char*)"ShallowCopy", PyvtkTextMapper_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkTextMapper)\nC++: void ShallowCopy(vtkTextMapper *tm)\n\nShallow copy of an actor.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetNumberOfLines", PyvtkTextMapper_GetNumberOfLines, METH_VARARGS,
   (char*)"V.GetNumberOfLines(string) -> int\nC++: int GetNumberOfLines(const char *input)\nV.GetNumberOfLines() -> int\nC++: int GetNumberOfLines()\n\nDetermine the number of lines in the input string.@deprecated\nThis is a legacy method that was used in an older implementation,\nand may be removed in the future.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
#endif
  {(char*)"SetConstrainedFontSize", PyvtkTextMapper_SetConstrainedFontSize, METH_VARARGS,
   (char*)"V.SetConstrainedFontSize(vtkViewport, int, int) -> int\nC++: virtual int SetConstrainedFontSize(vtkViewport *,\n    int targetWidth, int targetHeight)\nV.SetConstrainedFontSize(vtkTextMapper, vtkViewport, int, int)\n    -> int\nC++: static int SetConstrainedFontSize(vtkTextMapper *,\n    vtkViewport *, int targetWidth, int targetHeight)\n\nSet and return the font size (in points) required to make this\nmapper fit in a given target rectangle (width x height, in\npixels). A static version of the method is also available for\nconvenience to other classes (e.g., widgets).\n"},
  {(char*)"SetRelativeFontSize", PyvtkTextMapper_SetRelativeFontSize, METH_VARARGS | METH_STATIC,
   (char*)"V.SetRelativeFontSize(vtkTextMapper, vtkViewport, [int, ...],\n    [int, ...], float) -> int\nC++: static int SetRelativeFontSize(vtkTextMapper *,\n    vtkViewport *, int *winSize, int *stringSize,\n    float sizeFactor=0.0)\n\nUse these methods when setting font size relative to the\nrenderer's size. These methods are static so that external\nclasses (e.g., widgets) can easily use them.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetSystemFontSize", PyvtkTextMapper_GetSystemFontSize, METH_VARARGS,
   (char*)"V.GetSystemFontSize(int) -> int\nC++: virtual int GetSystemFontSize(int size)\n\nGet the available system font size matching a font\nsize.@deprecated This is a legacy method that was used in an\nolder implementation, and may be removed in the future.\n"},
#endif
  {(char*)"RenderOverlay", PyvtkTextMapper_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport, vtkActor2D)\nC++: void RenderOverlay(vtkViewport *, vtkActor2D *)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkTextMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\n"},
  {(char*)"GetMTime", PyvtkTextMapper_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextMapper_StaticNew()
{
  return vtkTextMapper::New();
}

PyObject *PyVTKClass_vtkTextMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextMapper_StaticNew,
    PyvtkTextMapper_Methods,
    "vtkTextMapper", modulename,
    NULL, NULL,
    PyvtkTextMapper_Doc(),
    PyVTKClass_vtkMapper2DNew(modulename));
  return cls;
}

const char **PyvtkTextMapper_Doc()
{
  static const char *docstring[] = {
    "vtkTextMapper - 2D text annotation\n\n",
    "Superclass: vtkMapper2D\n\n",
    "vtkTextMapper provides 2D text annotation support for VTK.  It is a\nvtkMapper2D that can be associated with a vtkActor2D and placed into\na vtkRenderer.\n\nTo use vtkTextMapper, specify an input text string.\n\nSee Also:\n\nvtkActor2D vtkTextActor vtkTextActor3D vtkTextProperty\nvtkTextRenderer\n\nNote:\n\nThis class will be overridden by the older\nvtkOpenGLFreeTypeTextMapper when the vtkRenderingFreeTypeOpen",
    "GL\nlibrary is linked into the executable. That class provides legacy\nsupport for regression testing, but lacks many of the newer features\nprovided by this implementation (such as unicode and MathText\nstrings). Do not link with that library if such features are needed.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

