// python wrapper for vtkTextRenderer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkUnicodeString.h"
#include "vtkTextRenderer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTextRenderer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTextRendererNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTextRenderer_Doc();

#ifndef DECLARED_PyvtkTextRenderer_Backend_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTextRenderer_Backend_Type;
#define DECLARED_PyvtkTextRenderer_Backend_Type
#endif

PyTypeObject PyvtkTextRenderer_Backend_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Backend", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkTextRenderer_Backend_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkTextRenderer_Backend_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkTextRenderer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTextRenderer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRenderer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextRenderer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRenderer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextRenderer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextRenderer::NewInstance());

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
PyvtkTextRenderer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTextRenderer *tempr = vtkTextRenderer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRenderer_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTextRenderer *tempr = vtkTextRenderer::GetInstance();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRenderer_SetDefaultBackend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultBackend(temp0);
      }
    else
      {
      op->vtkTextRenderer::SetDefaultBackend(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextRenderer_GetDefaultBackend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDefaultBackend() :
      op->vtkTextRenderer::GetDefaultBackend());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRenderer_DetectBackend_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetectBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->DetectBackend(temp0) :
      op->vtkTextRenderer::DetectBackend(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextRenderer_DetectBackend_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetectBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->DetectBackend(temp0) :
      op->vtkTextRenderer::DetectBackend(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTextRenderer_DetectBackend_Methods[] = {
  {NULL, PyvtkTextRenderer_DetectBackend_s1, METH_VARARGS,
   (char*)"@s"},
  {NULL, PyvtkTextRenderer_DetectBackend_s2, METH_VARARGS,
   (char*)"@O unicode"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTextRenderer_DetectBackend(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextRenderer_DetectBackend_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DetectBackend");
  return NULL;
}



static PyObject *
PyvtkTextRenderer_FreeTypeIsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeTypeIsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->FreeTypeIsSupported() :
      op->vtkTextRenderer::FreeTypeIsSupported());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRenderer_MathTextIsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MathTextIsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->MathTextIsSupported() :
      op->vtkTextRenderer::MathTextIsSupported());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRenderer_GetBoundingBox_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkStdString temp1;
  int temp2[4];
  int save2[4];
  const int size2 = 4;
  int temp3 = 120;
  int temp4 = vtkTextRenderer::Default;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 5) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    ap.SaveArray(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->GetBoundingBox(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextRenderer::GetBoundingBox(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextRenderer_GetBoundingBox_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkUnicodeString temp1;
  int temp2[4];
  int save2[4];
  const int size2 = 4;
  int temp3 = 120;
  int temp4 = vtkTextRenderer::Default;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 5) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    ap.SaveArray(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->GetBoundingBox(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextRenderer::GetBoundingBox(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTextRenderer_GetBoundingBox_Methods[] = {
  {NULL, PyvtkTextRenderer_GetBoundingBox_s1, METH_VARARGS,
   (char*)"@OsO|ii *vtkTextProperty *i"},
  {NULL, PyvtkTextRenderer_GetBoundingBox_s2, METH_VARARGS,
   (char*)"@OOO|ii *vtkTextProperty unicode *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTextRenderer_GetBoundingBox(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextRenderer_GetBoundingBox_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
    case 4:
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBoundingBox");
  return NULL;
}



static PyObject *
PyvtkTextRenderer_RenderString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkStdString temp1;
  vtkImageData *temp2 = NULL;
  int temp3[2];
  int save3[2];
  const int size3 = 2;
  int temp4 = 120;
  int temp5 = vtkTextRenderer::Default;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4, 6) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
    {
    ap.SaveArray(temp3, save3, size3);

    bool tempr = (ap.IsBound() ?
      op->RenderString(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkTextRenderer::RenderString(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkTextRenderer_RenderString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkUnicodeString temp1;
  vtkImageData *temp2 = NULL;
  int temp3[2];
  int save3[2];
  const int size3 = 2;
  int temp4 = 120;
  int temp5 = vtkTextRenderer::Default;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4, 6) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
    {
    ap.SaveArray(temp3, save3, size3);

    bool tempr = (ap.IsBound() ?
      op->RenderString(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkTextRenderer::RenderString(temp0, temp1, temp2, temp3, temp4, temp5));

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

static PyMethodDef PyvtkTextRenderer_RenderString_Methods[] = {
  {NULL, PyvtkTextRenderer_RenderString_s1, METH_VARARGS,
   (char*)"@OsOO|ii *vtkTextProperty *vtkImageData *i"},
  {NULL, PyvtkTextRenderer_RenderString_s2, METH_VARARGS,
   (char*)"@OOOO|ii *vtkTextProperty unicode *vtkImageData *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTextRenderer_RenderString(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextRenderer_RenderString_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
    case 5:
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RenderString");
  return NULL;
}



static PyObject *
PyvtkTextRenderer_GetConstrainedFontSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkStdString temp0;
  vtkTextProperty *temp1 = NULL;
  int temp2;
  int temp3;
  int temp4 = 120;
  int temp5 = vtkTextRenderer::Default;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4, 6) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
    {
    int tempr = (ap.IsBound() ?
      op->GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkTextRenderer::GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextRenderer_GetConstrainedFontSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkUnicodeString temp0;
  vtkTextProperty *temp1 = NULL;
  int temp2;
  int temp3;
  int temp4 = 120;
  int temp5 = vtkTextRenderer::Default;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4, 6) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
    {
    int tempr = (ap.IsBound() ?
      op->GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkTextRenderer::GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTextRenderer_GetConstrainedFontSize_Methods[] = {
  {NULL, PyvtkTextRenderer_GetConstrainedFontSize_s1, METH_VARARGS,
   (char*)"@sOii|ii *vtkTextProperty"},
  {NULL, PyvtkTextRenderer_GetConstrainedFontSize_s2, METH_VARARGS,
   (char*)"@OOii|ii unicode *vtkTextProperty"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTextRenderer_GetConstrainedFontSize(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextRenderer_GetConstrainedFontSize_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
    case 5:
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetConstrainedFontSize");
  return NULL;
}



static PyObject *
PyvtkTextRenderer_StringToPath_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StringToPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkStdString temp1;
  vtkPath *temp2 = NULL;
  int temp3 = vtkTextRenderer::Default;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPath") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    bool tempr = (ap.IsBound() ?
      op->StringToPath(temp0, temp1, temp2, temp3) :
      op->vtkTextRenderer::StringToPath(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextRenderer_StringToPath_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StringToPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkUnicodeString temp1;
  vtkPath *temp2 = NULL;
  int temp3 = vtkTextRenderer::Default;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPath") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    bool tempr = (ap.IsBound() ?
      op->StringToPath(temp0, temp1, temp2, temp3) :
      op->vtkTextRenderer::StringToPath(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTextRenderer_StringToPath_Methods[] = {
  {NULL, PyvtkTextRenderer_StringToPath_s1, METH_VARARGS,
   (char*)"@OsO|i *vtkTextProperty *vtkPath"},
  {NULL, PyvtkTextRenderer_StringToPath_s2, METH_VARARGS,
   (char*)"@OOO|i *vtkTextProperty unicode *vtkPath"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTextRenderer_StringToPath(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextRenderer_StringToPath_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "StringToPath");
  return NULL;
}



static PyObject *
PyvtkTextRenderer_SetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

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
      op->vtkTextRenderer::SetScaleToPowerOfTwo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTextRenderer_Methods[] = {
  {(char*)"GetClassName", PyvtkTextRenderer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTextRenderer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTextRenderer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTextRenderer\nC++: vtkTextRenderer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTextRenderer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTextRenderer\nC++: vtkTextRenderer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInstance", PyvtkTextRenderer_GetInstance, METH_VARARGS | METH_STATIC,
   (char*)"V.GetInstance() -> vtkTextRenderer\nC++: static vtkTextRenderer *GetInstance()\n\nReturn the singleton instance with no reference counting. May\nreturn NULL if the object factory cannot find an override.\n"},
  {(char*)"SetDefaultBackend", PyvtkTextRenderer_SetDefaultBackend, METH_VARARGS,
   (char*)"V.SetDefaultBackend(int)\nC++: void SetDefaultBackend(int a)\n\nThe backend to use when none is specified. Default: Detect\n"},
  {(char*)"GetDefaultBackend", PyvtkTextRenderer_GetDefaultBackend, METH_VARARGS,
   (char*)"V.GetDefaultBackend() -> int\nC++: int GetDefaultBackend()\n\nThe backend to use when none is specified. Default: Detect\n"},
  {(char*)"DetectBackend", PyvtkTextRenderer_DetectBackend, METH_VARARGS,
   (char*)"V.DetectBackend(string) -> int\nC++: virtual int DetectBackend(const vtkStdString &str)\nV.DetectBackend(unicode) -> int\nC++: virtual int DetectBackend(const vtkUnicodeString &str)\n\nDetermine the appropriate back end needed to render the given\nstring.\n"},
  {(char*)"FreeTypeIsSupported", PyvtkTextRenderer_FreeTypeIsSupported, METH_VARARGS,
   (char*)"V.FreeTypeIsSupported() -> bool\nC++: bool FreeTypeIsSupported()\n\nTest for availability of various backends\n"},
  {(char*)"MathTextIsSupported", PyvtkTextRenderer_MathTextIsSupported, METH_VARARGS,
   (char*)"V.MathTextIsSupported() -> bool\nC++: bool MathTextIsSupported()\n\nTest for availability of various backends\n"},
  {(char*)"GetBoundingBox", PyvtkTextRenderer_GetBoundingBox, METH_VARARGS,
   (char*)"V.GetBoundingBox(vtkTextProperty, string, [int, int, int, int],\n    int, int) -> bool\nC++: bool GetBoundingBox(vtkTextProperty *tprop,\n    const vtkStdString &str, int bbox[4], int dpi=120,\n    int backend=vtkTextRenderer::Default)\nV.GetBoundingBox(vtkTextProperty, unicode, [int, int, int, int],\n    int, int) -> bool\nC++: bool GetBoundingBox(vtkTextProperty *tprop,\n    const vtkUnicodeString &str, int bbox[4], int dpi=120,\n    int backend=vtkTextRenderer::Default)\n\nGiven a text property and a string, get the bounding box {xmin,\nxmax, ymin, ymax} of the rendered string in pixels. The origin of\nthe bounding box is the anchor point described by the horizontal\nand vertical justification text property variables. Some\nrendering backends need the DPI of the target. If it is not\nprovided, a DPI of 120 is assumed. Return true on success, false\notherwise.\n"},
  {(char*)"RenderString", PyvtkTextRenderer_RenderString, METH_VARARGS,
   (char*)"V.RenderString(vtkTextProperty, string, vtkImageData, [int, int],\n    int, int) -> bool\nC++: bool RenderString(vtkTextProperty *tprop,\n    const vtkStdString &str, vtkImageData *data,\n    int textDims[2]=NULL, int dpi=120,\n    int backend=vtkTextRenderer::Default)\nV.RenderString(vtkTextProperty, unicode, vtkImageData, [int, int],\n     int, int) -> bool\nC++: bool RenderString(vtkTextProperty *tprop,\n    const vtkUnicodeString &str, vtkImageData *data,\n    int textDims[2]=NULL, int dpi=120,\n    int backend=vtkTextRenderer::Default)\n\nGiven a text property and a string, this function initializes the\nvtkImageData *data and renders it in a vtkImageData. Return true\non success, false otherwise. If using the overload that specifies\n\"textDims\", the array will be overwritten with the pixel width\nand height defining a tight bounding box around the text in the\nimage, starting from the upper-right corner. This is used when\nrendering for a texture on graphics hardware that requires\ntexture image dimensions to be a power of two; textDims can be\nused to determine the texture coordinates needed to cleanly fit\nthe text on the target. The origin of the image's extents is\naligned with the anchor point described by the text property's\nvertical and horizontal justification options. Some rendering\nbackends need the DPI of the target. If it is not provided, a DPI\nof 120 is assumed.\n"},
  {(char*)"GetConstrainedFontSize", PyvtkTextRenderer_GetConstrainedFontSize, METH_VARARGS,
   (char*)"V.GetConstrainedFontSize(string, vtkTextProperty, int, int, int,\n    int) -> int\nC++: int GetConstrainedFontSize(const vtkStdString &str,\n    vtkTextProperty *tprop, int targetWidth, int targetHeight,\n    int dpi=120, int backend=vtkTextRenderer::Default)\nV.GetConstrainedFontSize(unicode, vtkTextProperty, int, int, int,\n    int) -> int\nC++: int GetConstrainedFontSize(const vtkUnicodeString &str,\n    vtkTextProperty *tprop, int targetWidth, int targetHeight,\n    int dpi=120, int backend=vtkTextRenderer::Default)\n\nThis function returns the font size (in points) and sets the size\nin @a tprop that is required to fit the string in the target\nrectangle. The computed font size will be set in tprop as well.\nIf an error occurs, this function will return -1. Some rendering\nbackends need the DPI of the target. If it is not provided, a DPI\nof 120 is assumed.\n"},
  {(char*)"StringToPath", PyvtkTextRenderer_StringToPath, METH_VARARGS,
   (char*)"V.StringToPath(vtkTextProperty, string, vtkPath, int) -> bool\nC++: bool StringToPath(vtkTextProperty *tprop,\n    const vtkStdString &str, vtkPath *path,\n    int backend=vtkTextRenderer::Default)\nV.StringToPath(vtkTextProperty, unicode, vtkPath, int) -> bool\nC++: bool StringToPath(vtkTextProperty *tprop,\n    const vtkUnicodeString &str, vtkPath *path,\n    int backend=vtkTextRenderer::Default)\n\nGiven a text property and a string, this function populates the\nvtkPath path with the outline of the rendered string. The origin\nof the path coordinates is aligned with the anchor point\ndescribed by the text property's horizontal and vertical\njustification options. Return true on success, false otherwise.\n"},
  {(char*)"SetScaleToPowerOfTwo", PyvtkTextRenderer_SetScaleToPowerOfTwo, METH_VARARGS,
   (char*)"V.SetScaleToPowerOfTwo(bool)\nC++: void SetScaleToPowerOfTwo(bool scale)\n\nSet to true if the graphics implmentation requires texture image\ndimensions to be a power of two. Default is true, but this member\nwill be set appropriately by\nvtkOpenGLRenderWindow::OpenGLInitContext when GL is inited.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextRenderer_StaticNew()
{
  return vtkTextRenderer::New();
}

PyObject *PyVTKClass_vtkTextRendererNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextRenderer_StaticNew,
    PyvtkTextRenderer_Methods,
    "vtkTextRenderer", modulename,
    NULL, NULL,
    PyvtkTextRenderer_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkTextRenderer_Backend_Type);
    PyvtkTextRenderer_Backend_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkTextRenderer_Backend_Type;
    if (o && PyDict_SetItemString(d, (char *)"Backend", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkTextRenderer::Backend cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "Default", vtkTextRenderer::Default },
          { "Detect", vtkTextRenderer::Detect },
          { "FreeType", vtkTextRenderer::FreeType },
          { "MathText", vtkTextRenderer::MathText },
          { "UserBackend", vtkTextRenderer::UserBackend },
        };

      o = PyvtkTextRenderer_Backend_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkTextRenderer_Doc()
{
  static const char *docstring[] = {
    "vtkTextRenderer - Interface for generating images and path data from\n\n",
    "Superclass: vtkObject\n\n",
    "vtkTextRenderer produces images, bounding boxes, and vtkPath objects\nthat represent text. The advantage of using this class is to easily\nintegrate mathematical expressions into renderings by automatically\nswitching between FreeType and MathText backends. If the input string\ncontains at least two \"$\" symbols separated by text, the MathText\nbackend will be used. If the string does not meet this crit",
    "eria, or\nif no MathText implementation is available, the faster FreeType\nrendering facilities are used. Literal $ symbols can be used by\nescaping them with backslashes, \"\\$\" (or \"\\\\$\" if the string is set\nprogramatically).\n\nFor example, \"Acceleration ($\\\\frac{m}{s^2}$)\" will use MathText, but \"\\\\$500,\n\\\\$100\" will use FreeType.\n\nBy default, the backend is set to Detect, which determines the\nbacken",
    "d based on the contents of the string. This can be changed by\nsetting the DefaultBackend ivar.\n\nNote that this class is abstract -- link to the vtkRenderingFreetype\nmodule to get the default implementation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextRenderer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextRendererNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextRenderer", o) != 0)
    {
    Py_DECREF(o);
    }

}

