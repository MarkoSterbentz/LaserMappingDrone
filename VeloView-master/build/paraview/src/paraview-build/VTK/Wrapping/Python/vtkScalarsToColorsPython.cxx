// python wrapper for vtkScalarsToColors
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVariant.h"
#include "vtkStdString.h"
#include "vtkScalarsToColors.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkScalarsToColors(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkScalarsToColorsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkScalarsToColors_Doc();

#ifndef DECLARED_PyvtkScalarsToColors_VectorModes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkScalarsToColors_VectorModes_Type;
#define DECLARED_PyvtkScalarsToColors_VectorModes_Type
#endif

PyTypeObject PyvtkScalarsToColors_VectorModes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"VectorModes", // tp_name
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

PyObject *PyvtkScalarsToColors_VectorModes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkScalarsToColors_VectorModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkScalarsToColors_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkScalarsToColors::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScalarsToColors::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScalarsToColors::NewInstance());

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
PyvtkScalarsToColors_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkScalarsToColors *tempr = vtkScalarsToColors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_IsOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsOpaque() :
      op->vtkScalarsToColors::IsOpaque());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_Build(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Build();
      }
    else
      {
      op->vtkScalarsToColors::Build();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkScalarsToColors::GetRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRange(temp0, temp1);
      }
    else
      {
      op->vtkScalarsToColors::SetRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkScalarsToColors_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetRange(temp0);
      }
    else
      {
      op->vtkScalarsToColors::SetRange(temp0);
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
PyvtkScalarsToColors_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkScalarsToColors_SetRange_s1(self, args);
    case 1:
      return PyvtkScalarsToColors_SetRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return NULL;
}



static PyObject *
PyvtkScalarsToColors_MapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->MapValue(temp0) :
      op->vtkScalarsToColors::MapValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetColor(temp0, temp1);
      }
    else
      {
      op->vtkScalarsToColors::GetColor(temp0, temp1);
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
PyvtkScalarsToColors_GetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetColor(temp0) :
      op->vtkScalarsToColors::GetColor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkScalarsToColors_GetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkScalarsToColors_GetColor_s1(self, args);
    case 1:
      return PyvtkScalarsToColors_GetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetColor");
  return NULL;
}



static PyObject *
PyvtkScalarsToColors_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOpacity(temp0) :
      op->vtkScalarsToColors::GetOpacity(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLuminance(temp0) :
      op->vtkScalarsToColors::GetLuminance(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAlpha(temp0);
      }
    else
      {
      op->vtkScalarsToColors::SetAlpha(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAlpha() :
      op->vtkScalarsToColors::GetAlpha());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_MapScalars_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkDataArray *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->MapScalars(temp0, temp1, temp2) :
      op->vtkScalarsToColors::MapScalars(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkScalarsToColors_MapScalars_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkAbstractArray *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->MapScalars(temp0, temp1, temp2) :
      op->vtkScalarsToColors::MapScalars(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkScalarsToColors_MapScalars_Methods[] = {
  {NULL, PyvtkScalarsToColors_MapScalars_s1, METH_VARARGS,
   (char*)"@Oii *vtkDataArray"},
  {NULL, PyvtkScalarsToColors_MapScalars_s2, METH_VARARGS,
   (char*)"@Oii *vtkAbstractArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkScalarsToColors_MapScalars(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkScalarsToColors_MapScalars_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "MapScalars");
  return NULL;
}



static PyObject *
PyvtkScalarsToColors_SetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorMode(temp0);
      }
    else
      {
      op->vtkScalarsToColors::SetVectorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVectorMode() :
      op->vtkScalarsToColors::GetVectorMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetVectorModeToMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToMagnitude();
      }
    else
      {
      op->vtkScalarsToColors::SetVectorModeToMagnitude();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetVectorModeToComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToComponent();
      }
    else
      {
      op->vtkScalarsToColors::SetVectorModeToComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetVectorModeToRGBColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToRGBColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToRGBColors();
      }
    else
      {
      op->vtkScalarsToColors::SetVectorModeToRGBColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetVectorComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorComponent(temp0);
      }
    else
      {
      op->vtkScalarsToColors::SetVectorComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetVectorComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponent() :
      op->vtkScalarsToColors::GetVectorComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetVectorSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorSize(temp0);
      }
    else
      {
      op->vtkScalarsToColors::SetVectorSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetVectorSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVectorSize() :
      op->vtkScalarsToColors::GetVectorSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_MapVectorsThroughTable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapVectorsThroughTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  void  *temp0 = NULL;
  unsigned char *temp1 = NULL;
  unsigned char *save1 = NULL;
  unsigned char small1[8];
  int size1 = 0;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned char[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->MapVectorsThroughTable(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkScalarsToColors::MapVectorsThroughTable(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkScalarsToColors_MapVectorsThroughTable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapVectorsThroughTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  void  *temp0 = NULL;
  unsigned char *temp1 = NULL;
  unsigned char *save1 = NULL;
  unsigned char small1[8];
  int size1 = 0;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned char[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->MapVectorsThroughTable(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkScalarsToColors::MapVectorsThroughTable(temp0, temp1, temp2, temp3, temp4, temp5);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkScalarsToColors_MapVectorsThroughTable(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 8:
      return PyvtkScalarsToColors_MapVectorsThroughTable_s1(self, args);
    case 6:
      return PyvtkScalarsToColors_MapVectorsThroughTable_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "MapVectorsThroughTable");
  return NULL;
}



static PyObject *
PyvtkScalarsToColors_MapScalarsThroughTable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsThroughTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkDataArray *temp0 = NULL;
  unsigned char *temp1 = NULL;
  unsigned char *save1 = NULL;
  unsigned char small1[8];
  int size1 = 0;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned char[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->MapScalarsThroughTable(temp0, temp1, temp2);
      }
    else
      {
      op->vtkScalarsToColors::MapScalarsThroughTable(temp0, temp1, temp2);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkScalarsToColors_MapScalarsThroughTable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsThroughTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkDataArray *temp0 = NULL;
  unsigned char *temp1 = NULL;
  unsigned char *save1 = NULL;
  unsigned char small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned char[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->MapScalarsThroughTable(temp0, temp1);
      }
    else
      {
      op->vtkScalarsToColors::MapScalarsThroughTable(temp0, temp1);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkScalarsToColors_MapScalarsThroughTable_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsThroughTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  void  *temp0 = NULL;
  unsigned char *temp1 = NULL;
  unsigned char *save1 = NULL;
  unsigned char small1[8];
  int size1 = 0;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned char[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->MapScalarsThroughTable(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkScalarsToColors::MapScalarsThroughTable(temp0, temp1, temp2, temp3, temp4, temp5);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkScalarsToColors_MapScalarsThroughTable(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkScalarsToColors_MapScalarsThroughTable_s1(self, args);
    case 2:
      return PyvtkScalarsToColors_MapScalarsThroughTable_s2(self, args);
    case 6:
      return PyvtkScalarsToColors_MapScalarsThroughTable_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "MapScalarsThroughTable");
  return NULL;
}



static PyObject *
PyvtkScalarsToColors_MapScalarsThroughTable2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsThroughTable2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  void  *temp0 = NULL;
  unsigned char *temp1 = NULL;
  unsigned char *save1 = NULL;
  unsigned char small1[8];
  int size1 = 0;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned char[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkScalarsToColors::MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkScalarsToColors::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_UsingLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsingLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->UsingLogScale() :
      op->vtkScalarsToColors::UsingLogScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetNumberOfAvailableColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAvailableColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfAvailableColors() :
      op->vtkScalarsToColors::GetNumberOfAvailableColors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkAbstractArray *temp0 = NULL;
  vtkStringArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetAnnotations(temp0, temp1);
      }
    else
      {
      op->vtkScalarsToColors::SetAnnotations(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAnnotatedValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotatedValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetAnnotatedValues() :
      op->vtkScalarsToColors::GetAnnotatedValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAnnotations() :
      op->vtkScalarsToColors::GetAnnotations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetAnnotation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->SetAnnotation(*temp0, temp1) :
      op->vtkScalarsToColors::SetAnnotation(*temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkScalarsToColors_SetAnnotation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkStdString temp0;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->SetAnnotation(temp0, temp1) :
      op->vtkScalarsToColors::SetAnnotation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkScalarsToColors_SetAnnotation_Methods[] = {
  {NULL, PyvtkScalarsToColors_SetAnnotation_s1, METH_VARARGS,
   (char*)"@Os vtkVariant"},
  {NULL, PyvtkScalarsToColors_SetAnnotation_s2, METH_VARARGS,
   (char*)"@ss"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkScalarsToColors_SetAnnotation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkScalarsToColors_SetAnnotation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAnnotation");
  return NULL;
}



static PyObject *
PyvtkScalarsToColors_GetNumberOfAnnotatedValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnnotatedValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfAnnotatedValues() :
      op->vtkScalarsToColors::GetNumberOfAnnotatedValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAnnotatedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotatedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetAnnotatedValue(temp0) :
      op->vtkScalarsToColors::GetAnnotatedValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetAnnotation(temp0) :
      op->vtkScalarsToColors::GetAnnotation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAnnotationColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetAnnotationColor(*temp0, temp1);
      }
    else
      {
      op->vtkScalarsToColors::GetAnnotationColor(*temp0, temp1);
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

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAnnotatedValueIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotatedValueIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetAnnotatedValueIndex(*temp0) :
      op->vtkScalarsToColors::GetAnnotatedValueIndex(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAnnotatedValueIndexInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotatedValueIndexInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkVariant"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetAnnotatedValueIndexInternal(*temp0) :
      op->vtkScalarsToColors::GetAnnotatedValueIndexInternal(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetIndexedColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkIdType temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetIndexedColor(temp0, temp1);
      }
    else
      {
      op->vtkScalarsToColors::GetIndexedColor(temp0, temp1);
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
PyvtkScalarsToColors_RemoveAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    bool tempr = (ap.IsBound() ?
      op->RemoveAnnotation(*temp0) :
      op->vtkScalarsToColors::RemoveAnnotation(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScalarsToColors_ResetAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetAnnotations();
      }
    else
      {
      op->vtkScalarsToColors::ResetAnnotations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetIndexedLookup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexedLookup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIndexedLookup(temp0);
      }
    else
      {
      op->vtkScalarsToColors::SetIndexedLookup(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetIndexedLookup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedLookup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIndexedLookup() :
      op->vtkScalarsToColors::GetIndexedLookup());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_IndexedLookupOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IndexedLookupOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IndexedLookupOn();
      }
    else
      {
      op->vtkScalarsToColors::IndexedLookupOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_IndexedLookupOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IndexedLookupOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IndexedLookupOff();
      }
    else
      {
      op->vtkScalarsToColors::IndexedLookupOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkScalarsToColors_Methods[] = {
  {(char*)"GetClassName", PyvtkScalarsToColors_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkScalarsToColors_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkScalarsToColors_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkScalarsToColors\nC++: vtkScalarsToColors *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkScalarsToColors_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkScalarsToColors\nC++: vtkScalarsToColors *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsOpaque", PyvtkScalarsToColors_IsOpaque, METH_VARARGS,
   (char*)"V.IsOpaque() -> int\nC++: virtual int IsOpaque()\n\nReturn true if all of the values defining the mapping have an\nopacity equal to 1. Default implementation return true.\n"},
  {(char*)"Build", PyvtkScalarsToColors_Build, METH_VARARGS,
   (char*)"V.Build()\nC++: virtual void Build()\n\nPerform any processing required (if any) before processing\nscalars. Default implementation does nothing.\n"},
  {(char*)"GetRange", PyvtkScalarsToColors_GetRange, METH_VARARGS,
   (char*)"V.GetRange() -> (float, float)\nC++: virtual double *GetRange()\n\nSets/Gets the range of scalars that will be mapped.\n"},
  {(char*)"SetRange", PyvtkScalarsToColors_SetRange, METH_VARARGS,
   (char*)"V.SetRange(float, float)\nC++: virtual void SetRange(double min, double max)\nV.SetRange([float, float])\nC++: void SetRange(double rng[2])\n\nSets/Gets the range of scalars that will be mapped.\n"},
  {(char*)"MapValue", PyvtkScalarsToColors_MapValue, METH_VARARGS,
   (char*)"V.MapValue(float) -> (int, ...)\nC++: virtual unsigned char *MapValue(double v)\n\nMap one value through the lookup table and return a color defined\nas a RGBA unsigned char tuple (4 bytes).\n"},
  {(char*)"GetColor", PyvtkScalarsToColors_GetColor, METH_VARARGS,
   (char*)"V.GetColor(float, [float, float, float])\nC++: virtual void GetColor(double v, double rgb[3])\nV.GetColor(float) -> (float, float, float)\nC++: double *GetColor(double v)\n\nMap one value through the lookup table and store the color as an\nRGB array of doubles between 0 and 1 in the rgb argument.\n"},
  {(char*)"GetOpacity", PyvtkScalarsToColors_GetOpacity, METH_VARARGS,
   (char*)"V.GetOpacity(float) -> float\nC++: virtual double GetOpacity(double v)\n\nMap one value through the lookup table and return the alpha value\n(the opacity) as a double between 0 and 1. This implementation\nalways returns 1.\n"},
  {(char*)"GetLuminance", PyvtkScalarsToColors_GetLuminance, METH_VARARGS,
   (char*)"V.GetLuminance(float) -> float\nC++: double GetLuminance(double x)\n\nMap one value through the lookup table and return the luminance\n0.3*red + 0.59*green + 0.11*blue as a double between 0 and 1.\nReturns the luminance value for the specified scalar value.\n"},
  {(char*)"SetAlpha", PyvtkScalarsToColors_SetAlpha, METH_VARARGS,
   (char*)"V.SetAlpha(float)\nC++: virtual void SetAlpha(double alpha)\n\nSpecify an additional opacity (alpha) value to blend with. Values\n!= 1 modify the resulting color consistent with the requested\nform of the output. This is typically used by an actor in order\nto blend its opacity. Value is clamped between 0 and 1.\n"},
  {(char*)"GetAlpha", PyvtkScalarsToColors_GetAlpha, METH_VARARGS,
   (char*)"V.GetAlpha() -> float\nC++: double GetAlpha()\n\nSpecify an additional opacity (alpha) value to blend with. Values\n!= 1 modify the resulting color consistent with the requested\nform of the output. This is typically used by an actor in order\nto blend its opacity. Value is clamped between 0 and 1.\n"},
  {(char*)"MapScalars", PyvtkScalarsToColors_MapScalars, METH_VARARGS,
   (char*)"V.MapScalars(vtkDataArray, int, int) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *MapScalars(\n    vtkDataArray *scalars, int colorMode, int component)\nV.MapScalars(vtkAbstractArray, int, int) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *MapScalars(\n    vtkAbstractArray *scalars, int colorMode, int component)\n\nInternal methods that map a data array into a 4-component,\nunsigned char RGBA array. The color mode determines the behavior\nof mapping. If VTK_COLOR_MODE_DEFAULT is set, then unsigned char\ndata arrays are treated as colors (and converted to RGBA if\nnecessary); If VTK_COLOR_MODE_DIRECT_SCALARS is set, then all\narrays are treated as colors (integer types are clamped in the\nrange 0-255, floating point arrays are clamped in the range\n0.0-1.0. Note 'char' does not have enough values to represent a\ncolor so mapping this type is considered an error); otherwise,\nthe data is mapped through this instance of ScalarsToColors. The\ncomponent argument is used for data arrays with more than one\ncomponent; it indicates which component to use to do the\nblending.  When the component argument is -1, then the this\nobject uses its own selected technique to change a vector into a\nscalar to map.\n"},
  {(char*)"SetVectorMode", PyvtkScalarsToColors_SetVectorMode, METH_VARARGS,
   (char*)"V.SetVectorMode(int)\nC++: void SetVectorMode(int a)\n\nChange mode that maps vectors by magnitude vs. component. If the\nmode is \"RGBColors\", then the vectors components are scaled to\nthe range and passed directly as the colors.\n"},
  {(char*)"GetVectorMode", PyvtkScalarsToColors_GetVectorMode, METH_VARARGS,
   (char*)"V.GetVectorMode() -> int\nC++: int GetVectorMode()\n\nChange mode that maps vectors by magnitude vs. component. If the\nmode is \"RGBColors\", then the vectors components are scaled to\nthe range and passed directly as the colors.\n"},
  {(char*)"SetVectorModeToMagnitude", PyvtkScalarsToColors_SetVectorModeToMagnitude, METH_VARARGS,
   (char*)"V.SetVectorModeToMagnitude()\nC++: void SetVectorModeToMagnitude()\n\nChange mode that maps vectors by magnitude vs. component. If the\nmode is \"RGBColors\", then the vectors components are scaled to\nthe range and passed directly as the colors.\n"},
  {(char*)"SetVectorModeToComponent", PyvtkScalarsToColors_SetVectorModeToComponent, METH_VARARGS,
   (char*)"V.SetVectorModeToComponent()\nC++: void SetVectorModeToComponent()\n\nChange mode that maps vectors by magnitude vs. component. If the\nmode is \"RGBColors\", then the vectors components are scaled to\nthe range and passed directly as the colors.\n"},
  {(char*)"SetVectorModeToRGBColors", PyvtkScalarsToColors_SetVectorModeToRGBColors, METH_VARARGS,
   (char*)"V.SetVectorModeToRGBColors()\nC++: void SetVectorModeToRGBColors()\n\nChange mode that maps vectors by magnitude vs. component. If the\nmode is \"RGBColors\", then the vectors components are scaled to\nthe range and passed directly as the colors.\n"},
  {(char*)"SetVectorComponent", PyvtkScalarsToColors_SetVectorComponent, METH_VARARGS,
   (char*)"V.SetVectorComponent(int)\nC++: void SetVectorComponent(int a)\n\nIf the mapper does not select which component of a vector to map\nto colors, you can specify it here.\n"},
  {(char*)"GetVectorComponent", PyvtkScalarsToColors_GetVectorComponent, METH_VARARGS,
   (char*)"V.GetVectorComponent() -> int\nC++: int GetVectorComponent()\n\nIf the mapper does not select which component of a vector to map\nto colors, you can specify it here.\n"},
  {(char*)"SetVectorSize", PyvtkScalarsToColors_SetVectorSize, METH_VARARGS,
   (char*)"V.SetVectorSize(int)\nC++: void SetVectorSize(int a)\n\nWhen mapping vectors, consider only the number of components\nselected by VectorSize to be part of the vector, and ignore any\nother components.  Set to -1 to map all components.  If this is\nnot set to -1, then you can use SetVectorComponent to set which\nscalar component will be the first component in the vector to be\nmapped.\n"},
  {(char*)"GetVectorSize", PyvtkScalarsToColors_GetVectorSize, METH_VARARGS,
   (char*)"V.GetVectorSize() -> int\nC++: int GetVectorSize()\n\nWhen mapping vectors, consider only the number of components\nselected by VectorSize to be part of the vector, and ignore any\nother components.  Set to -1 to map all components.  If this is\nnot set to -1, then you can use SetVectorComponent to set which\nscalar component will be the first component in the vector to be\nmapped.\n"},
  {(char*)"MapVectorsThroughTable", PyvtkScalarsToColors_MapVectorsThroughTable, METH_VARARGS,
   (char*)"V.MapVectorsThroughTable(, [int, ...], int, int, int, int, int,\n    int)\nC++: void MapVectorsThroughTable(void *input,\n    unsigned char *output, int inputDataType, int numberOfValues,\n    int inputIncrement, int outputFormat, int vectorComponent,\n    int vectorSize)\nV.MapVectorsThroughTable(, [int, ...], int, int, int, int)\nC++: void MapVectorsThroughTable(void *input,\n    unsigned char *output, int inputDataType, int numberOfValues,\n    int inputIncrement, int outputFormat)\n\nMap vectors through the lookup table.  Unlike\nMapScalarsThroughTable, this method will use the VectorMode to\ndecide how to map vectors. The output format can be set to\nVTK_RGBA (4 components), VTK_RGB (3 components), VTK_LUMINANCE (1\ncomponent, greyscale), or VTK_LUMINANCE_ALPHA (2 components)\n"},
  {(char*)"MapScalarsThroughTable", PyvtkScalarsToColors_MapScalarsThroughTable, METH_VARARGS,
   (char*)"V.MapScalarsThroughTable(vtkDataArray, [int, ...], int)\nC++: void MapScalarsThroughTable(vtkDataArray *scalars,\n    unsigned char *output, int outputFormat)\nV.MapScalarsThroughTable(vtkDataArray, [int, ...])\nC++: void MapScalarsThroughTable(vtkDataArray *scalars,\n    unsigned char *output)\nV.MapScalarsThroughTable(, [int, ...], int, int, int, int)\nC++: void MapScalarsThroughTable(void *input,\n    unsigned char *output, int inputDataType, int numberOfValues,\n    int inputIncrement, int outputFormat)\n\nMap a set of scalars through the lookup table in a single\noperation. This method ignores the VectorMode and the\nVectorComponent. The output format can be set to VTK_RGBA (4\ncomponents), VTK_RGB (3 components), VTK_LUMINANCE (1 component,\ngreyscale), or VTK_LUMINANCE_ALPHA (2 components) If not\nsupplied, the output format defaults to RGBA.\n"},
  {(char*)"MapScalarsThroughTable2", PyvtkScalarsToColors_MapScalarsThroughTable2, METH_VARARGS,
   (char*)"V.MapScalarsThroughTable2(, [int, ...], int, int, int, int)\nC++: virtual void MapScalarsThroughTable2(void *input,\n    unsigned char *output, int inputDataType, int numberOfValues,\n    int inputIncrement, int outputFormat)\n\nAn internal method typically not used in applications.  This\nshould be a protected function, but it must be kept public for\nbackwards compatibility.  Never call this method directly.\n"},
  {(char*)"DeepCopy", PyvtkScalarsToColors_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkScalarsToColors)\nC++: virtual void DeepCopy(vtkScalarsToColors *o)\n\nCopy the contents from another object.\n"},
  {(char*)"UsingLogScale", PyvtkScalarsToColors_UsingLogScale, METH_VARARGS,
   (char*)"V.UsingLogScale() -> int\nC++: virtual int UsingLogScale()\n\nThis should return 1 is the subclass is using log scale for\nmapping scalars to colors. Default implementation always returns\n0.\n"},
  {(char*)"GetNumberOfAvailableColors", PyvtkScalarsToColors_GetNumberOfAvailableColors, METH_VARARGS,
   (char*)"V.GetNumberOfAvailableColors() -> int\nC++: virtual vtkIdType GetNumberOfAvailableColors()\n\nGet the number of available colors for mapping to.\n"},
  {(char*)"SetAnnotations", PyvtkScalarsToColors_SetAnnotations, METH_VARARGS,
   (char*)"V.SetAnnotations(vtkAbstractArray, vtkStringArray)\nC++: virtual void SetAnnotations(vtkAbstractArray *values,\n    vtkStringArray *annotations)\n\nSet a list of discrete values, either as a categorical set of\nvalues (when IndexedLookup is true) or as a set of annotations to\nadd to a scalar array (when IndexedLookup is false). The two\narrays must both either be NULL or of the same length or the call\nwill be ignored.\n\nNote that these arrays are deep copied rather than being used\ndirectly in order to support the use case where edits are made.\nIf thevalues and annotations arrays were held by this class then\neach call to map scalar values to colors would require us to\ncheck the MTime of the arrays.\n"},
  {(char*)"GetAnnotatedValues", PyvtkScalarsToColors_GetAnnotatedValues, METH_VARARGS,
   (char*)"V.GetAnnotatedValues() -> vtkAbstractArray\nC++: vtkAbstractArray *GetAnnotatedValues()\n\nSet a list of discrete values, either as a categorical set of\nvalues (when IndexedLookup is true) or as a set of annotations to\nadd to a scalar array (when IndexedLookup is false). The two\narrays must both either be NULL or of the same length or the call\nwill be ignored.\n\nNote that these arrays are deep copied rather than being used\ndirectly in order to support the use case where edits are made.\nIf thevalues and annotations arrays were held by this class then\neach call to map scalar values to colors would require us to\ncheck the MTime of the arrays.\n"},
  {(char*)"GetAnnotations", PyvtkScalarsToColors_GetAnnotations, METH_VARARGS,
   (char*)"V.GetAnnotations() -> vtkStringArray\nC++: vtkStringArray *GetAnnotations()\n\nSet a list of discrete values, either as a categorical set of\nvalues (when IndexedLookup is true) or as a set of annotations to\nadd to a scalar array (when IndexedLookup is false). The two\narrays must both either be NULL or of the same length or the call\nwill be ignored.\n\nNote that these arrays are deep copied rather than being used\ndirectly in order to support the use case where edits are made.\nIf thevalues and annotations arrays were held by this class then\neach call to map scalar values to colors would require us to\ncheck the MTime of the arrays.\n"},
  {(char*)"SetAnnotation", PyvtkScalarsToColors_SetAnnotation, METH_VARARGS,
   (char*)"V.SetAnnotation(vtkVariant, string) -> int\nC++: virtual vtkIdType SetAnnotation(vtkVariant value,\n    vtkStdString annotation)\nV.SetAnnotation(string, string) -> int\nC++: virtual vtkIdType SetAnnotation(vtkStdString value,\n    vtkStdString annotation)\n\nAdd a new entry (or change an existing entry) to the list of\nannotated values. Returns the index of value in the list of\nannotations.\n"},
  {(char*)"GetNumberOfAnnotatedValues", PyvtkScalarsToColors_GetNumberOfAnnotatedValues, METH_VARARGS,
   (char*)"V.GetNumberOfAnnotatedValues() -> int\nC++: vtkIdType GetNumberOfAnnotatedValues()\n\nReturn the annotated value at a particular index in the list of\nannotations.\n"},
  {(char*)"GetAnnotatedValue", PyvtkScalarsToColors_GetAnnotatedValue, METH_VARARGS,
   (char*)"V.GetAnnotatedValue(int) -> vtkVariant\nC++: vtkVariant GetAnnotatedValue(vtkIdType idx)\n\nReturn the annotated value at a particular index in the list of\nannotations.\n"},
  {(char*)"GetAnnotation", PyvtkScalarsToColors_GetAnnotation, METH_VARARGS,
   (char*)"V.GetAnnotation(int) -> string\nC++: vtkStdString GetAnnotation(vtkIdType idx)\n\nReturn the annotation at a particular index in the list of\nannotations.\n"},
  {(char*)"GetAnnotationColor", PyvtkScalarsToColors_GetAnnotationColor, METH_VARARGS,
   (char*)"V.GetAnnotationColor(vtkVariant, [float, float, float, float])\nC++: virtual void GetAnnotationColor(const vtkVariant &val,\n    double rgba[4])\n\nObtain the color associated with a particular annotated value (or\nNanColor if unmatched).\n"},
  {(char*)"GetAnnotatedValueIndex", PyvtkScalarsToColors_GetAnnotatedValueIndex, METH_VARARGS,
   (char*)"V.GetAnnotatedValueIndex(vtkVariant) -> int\nC++: vtkIdType GetAnnotatedValueIndex(vtkVariant val)\n\nReturn the index of the given value in the list of annotated\nvalues (or -1 if not present).\n"},
  {(char*)"GetAnnotatedValueIndexInternal", PyvtkScalarsToColors_GetAnnotatedValueIndexInternal, METH_VARARGS,
   (char*)"V.GetAnnotatedValueIndexInternal(vtkVariant) -> int\nC++: vtkIdType GetAnnotatedValueIndexInternal(vtkVariant &val)\n\nLook up an index into the array of annotations given a value.\nDoes no pointer checks. Returns -1 when val not present.\n"},
  {(char*)"GetIndexedColor", PyvtkScalarsToColors_GetIndexedColor, METH_VARARGS,
   (char*)"V.GetIndexedColor(int, [float, float, float, float])\nC++: virtual void GetIndexedColor(vtkIdType i, double rgba[4])\n\nGet the \"indexed color\" assigned to an index.\n\nThe index is used in IndexedLookup mode to assign colors to\nannotations (in the order the annotations were set). Subclasses\nmust implement this and interpret how to treat the index.\nvtkLookupTable simply returns GetTableValue( index %\nthis->GetNumberOfTableValues()). vtkColorTransferFunction returns\nthe color assocated with node index % this->GetSize().\n\nNote that implementations *must* set the opacity (alpha)\ncomponent of the color, even if they do not provide opacity\nvalues in their colormaps. In that case, alpha = 1 should be\nused.\n"},
  {(char*)"RemoveAnnotation", PyvtkScalarsToColors_RemoveAnnotation, METH_VARARGS,
   (char*)"V.RemoveAnnotation(vtkVariant) -> bool\nC++: virtual bool RemoveAnnotation(vtkVariant value)\n\nRemove an existing entry from the list of annotated values.\n\nReturns true when the entry was actually removed (i.e., it\nexisted before the call). Otherwise, returns false.\n"},
  {(char*)"ResetAnnotations", PyvtkScalarsToColors_ResetAnnotations, METH_VARARGS,
   (char*)"V.ResetAnnotations()\nC++: virtual void ResetAnnotations()\n\nRemove all existing values and their annotations.\n"},
  {(char*)"SetIndexedLookup", PyvtkScalarsToColors_SetIndexedLookup, METH_VARARGS,
   (char*)"V.SetIndexedLookup(int)\nC++: void SetIndexedLookup(int a)\n\nSet/get whether the lookup table is for categorical or ordinal\ndata. The default is ordinal data; values not present in the\nlookup table will be assigned an interpolated color.\n\nWhen categorical data is present, only values in the lookup table\nwill be considered valid; all other values will be assigned\nNanColor.\n"},
  {(char*)"GetIndexedLookup", PyvtkScalarsToColors_GetIndexedLookup, METH_VARARGS,
   (char*)"V.GetIndexedLookup() -> int\nC++: int GetIndexedLookup()\n\nSet/get whether the lookup table is for categorical or ordinal\ndata. The default is ordinal data; values not present in the\nlookup table will be assigned an interpolated color.\n\nWhen categorical data is present, only values in the lookup table\nwill be considered valid; all other values will be assigned\nNanColor.\n"},
  {(char*)"IndexedLookupOn", PyvtkScalarsToColors_IndexedLookupOn, METH_VARARGS,
   (char*)"V.IndexedLookupOn()\nC++: void IndexedLookupOn()\n\nSet/get whether the lookup table is for categorical or ordinal\ndata. The default is ordinal data; values not present in the\nlookup table will be assigned an interpolated color.\n\nWhen categorical data is present, only values in the lookup table\nwill be considered valid; all other values will be assigned\nNanColor.\n"},
  {(char*)"IndexedLookupOff", PyvtkScalarsToColors_IndexedLookupOff, METH_VARARGS,
   (char*)"V.IndexedLookupOff()\nC++: void IndexedLookupOff()\n\nSet/get whether the lookup table is for categorical or ordinal\ndata. The default is ordinal data; values not present in the\nlookup table will be assigned an interpolated color.\n\nWhen categorical data is present, only values in the lookup table\nwill be considered valid; all other values will be assigned\nNanColor.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkScalarsToColors_StaticNew()
{
  return vtkScalarsToColors::New();
}

PyObject *PyVTKClass_vtkScalarsToColorsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkScalarsToColors_StaticNew,
    PyvtkScalarsToColors_Methods,
    "vtkScalarsToColors", modulename,
    NULL, NULL,
    PyvtkScalarsToColors_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkScalarsToColors_VectorModes_Type);
    PyvtkScalarsToColors_VectorModes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkScalarsToColors_VectorModes_Type;
    if (o && PyDict_SetItemString(d, (char *)"VectorModes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkScalarsToColors::VectorModes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "MAGNITUDE", vtkScalarsToColors::MAGNITUDE },
          { "COMPONENT", vtkScalarsToColors::COMPONENT },
          { "RGBCOLORS", vtkScalarsToColors::RGBCOLORS },
        };

      o = PyvtkScalarsToColors_VectorModes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkScalarsToColors_Doc()
{
  static const char *docstring[] = {
    "vtkScalarsToColors - Superclass for mapping scalar values to colors\n\n",
    "Superclass: vtkObject\n\n",
    "vtkScalarsToColors is a general-purpose base class for objects that\nconvert scalars to colors. This include vtkLookupTable classes and\ncolor transfer functions.  By itself, this class will simply rescale\nthe scalars.\n\nThe scalar-to-color mapping can be augmented with an additional\nuniform alpha blend. This is used, for example, to blend a vtkActor's\nopacity with the lookup table values.\n\nSpecific ",
    "scalar values may be annotated with text strings that will\nbe included in color legends using SetAnnotations,\nSetAnnotation,GetNumberOfAnnotatedValues, GetAnnotatedValue,\nGetAnnotation,RemoveAnnotation, and ResetAnnotations.\n\nThis class also has a method for indicating that the set of annotated\nvalues form a categorical color map; by setting \\a IndexedLookup to\ntrue, you indicate that the annotate",
    "d values are the only valid\nvalues for which entries in the color table should be returned. In\nthis mode, subclasses should then assign colors to annotated values\nby taking the modulus of an annotated value's index in the list of\nannotations with the number of colors in the table.\n\nSee Also:\n\nvtkLookupTable vtkColorTransferFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkScalarsToColors(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkScalarsToColorsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkScalarsToColors", o) != 0)
    {
    Py_DECREF(o);
    }

}

