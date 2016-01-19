// python wrapper for vtkImageCroppingRegionsWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageCroppingRegionsWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageCroppingRegionsWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageCroppingRegionsWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtk3DWidgetNew
extern "C" { PyObject *PyVTKClass_vtk3DWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtk3DWidgetNew
#endif

static const char **PyvtkImageCroppingRegionsWidget_Doc();

#ifndef DECLARED_PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type;
#define DECLARED_PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type
#endif

PyTypeObject PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"WidgetEventIds", // tp_name
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

PyObject *PyvtkImageCroppingRegionsWidget_WidgetEventIds_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageCroppingRegionsWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageCroppingRegionsWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageCroppingRegionsWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageCroppingRegionsWidget::NewInstance());

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
PyvtkImageCroppingRegionsWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageCroppingRegionsWidget *tempr = vtkImageCroppingRegionsWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->PlaceWidget(temp0);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::PlaceWidget(temp0);
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
PyvtkImageCroppingRegionsWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetPlanePositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPlanePositions() :
      op->vtkImageCroppingRegionsWidget::GetPlanePositions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetPlanePositions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetPlanePositions(temp0);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetPlanePositions(temp0);
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
PyvtkImageCroppingRegionsWidget_SetPlanePositions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetPlanePositions(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetPlanePositions(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_SetPlanePositions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageCroppingRegionsWidget_SetPlanePositions_s1(self, args);
    case 6:
      return PyvtkImageCroppingRegionsWidget_SetPlanePositions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPlanePositions");
  return NULL;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_SetCroppingRegionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCroppingRegionFlags(temp0);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetCroppingRegionFlags(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetCroppingRegionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCroppingRegionFlags() :
      op->vtkImageCroppingRegionsWidget::GetCroppingRegionFlags());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetSliceOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceOrientation() :
      op->vtkImageCroppingRegionsWidget::GetSliceOrientation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetSliceOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceOrientation(temp0);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetSliceOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetSliceOrientationToXY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToXY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSliceOrientationToXY();
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetSliceOrientationToXY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetSliceOrientationToYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSliceOrientationToYZ();
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetSliceOrientationToYZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetSliceOrientationToXZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToXZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSliceOrientationToXZ();
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetSliceOrientationToXZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSlice(temp0);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetSlice(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSlice() :
      op->vtkImageCroppingRegionsWidget::GetSlice());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine1Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine1Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetLine1Color(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetLine1Color(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine1Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine1Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetLine1Color(temp0);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetLine1Color(temp0);
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
PyvtkImageCroppingRegionsWidget_SetLine1Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageCroppingRegionsWidget_SetLine1Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_SetLine1Color_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLine1Color");
  return NULL;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine1Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine1Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetLine1Color() :
      op->vtkImageCroppingRegionsWidget::GetLine1Color());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine1Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine1Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetLine1Color(temp0);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::GetLine1Color(temp0);
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
PyvtkImageCroppingRegionsWidget_GetLine1Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageCroppingRegionsWidget_GetLine1Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_GetLine1Color_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetLine1Color");
  return NULL;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine2Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine2Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetLine2Color(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetLine2Color(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine2Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine2Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetLine2Color(temp0);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetLine2Color(temp0);
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
PyvtkImageCroppingRegionsWidget_SetLine2Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageCroppingRegionsWidget_SetLine2Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_SetLine2Color_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLine2Color");
  return NULL;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine2Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine2Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetLine2Color() :
      op->vtkImageCroppingRegionsWidget::GetLine2Color());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine2Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine2Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetLine2Color(temp0);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::GetLine2Color(temp0);
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
PyvtkImageCroppingRegionsWidget_GetLine2Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageCroppingRegionsWidget_GetLine2Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_GetLine2Color_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetLine2Color");
  return NULL;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine3Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine3Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetLine3Color(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetLine3Color(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine3Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine3Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetLine3Color(temp0);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetLine3Color(temp0);
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
PyvtkImageCroppingRegionsWidget_SetLine3Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageCroppingRegionsWidget_SetLine3Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_SetLine3Color_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLine3Color");
  return NULL;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine3Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine3Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetLine3Color() :
      op->vtkImageCroppingRegionsWidget::GetLine3Color());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine3Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine3Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetLine3Color(temp0);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::GetLine3Color(temp0);
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
PyvtkImageCroppingRegionsWidget_GetLine3Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageCroppingRegionsWidget_GetLine3Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_GetLine3Color_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetLine3Color");
  return NULL;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine4Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine4Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetLine4Color(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetLine4Color(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine4Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine4Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetLine4Color(temp0);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetLine4Color(temp0);
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
PyvtkImageCroppingRegionsWidget_SetLine4Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageCroppingRegionsWidget_SetLine4Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_SetLine4Color_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLine4Color");
  return NULL;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine4Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine4Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetLine4Color() :
      op->vtkImageCroppingRegionsWidget::GetLine4Color());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine4Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine4Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetLine4Color(temp0);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::GetLine4Color(temp0);
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
PyvtkImageCroppingRegionsWidget_GetLine4Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageCroppingRegionsWidget_GetLine4Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_GetLine4Color_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetLine4Color");
  return NULL;
}



static PyObject *
PyvtkImageCroppingRegionsWidget_SetVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  vtkVolumeMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeMapper"))
    {
    if (ap.IsBound())
      {
      op->SetVolumeMapper(temp0);
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::SetVolumeMapper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeMapper *tempr = (ap.IsBound() ?
      op->GetVolumeMapper() :
      op->vtkImageCroppingRegionsWidget::GetVolumeMapper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_UpdateAccordingToInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAccordingToInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateAccordingToInput();
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::UpdateAccordingToInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_MoveHorizontalLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveHorizontalLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MoveHorizontalLine();
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::MoveHorizontalLine();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_MoveVerticalLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveVerticalLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MoveVerticalLine();
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::MoveVerticalLine();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_MoveIntersectingLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveIntersectingLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MoveIntersectingLines();
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::MoveIntersectingLines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_UpdateCursorIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCursorIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateCursorIcon();
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::UpdateCursorIcon();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_OnButtonPress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonPress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnButtonPress();
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::OnButtonPress();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_OnButtonRelease(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonRelease");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnButtonRelease();
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::OnButtonRelease();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkImageCroppingRegionsWidget::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageCroppingRegionsWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkImageCroppingRegionsWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkImageCroppingRegionsWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkImageCroppingRegionsWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageCroppingRegionsWidget\nC++: vtkImageCroppingRegionsWidget *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkImageCroppingRegionsWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageCroppingRegionsWidget\nC++: vtkImageCroppingRegionsWidget *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"PlaceWidget", PyvtkImageCroppingRegionsWidget_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\n\nPlace/Adjust widget within bounds\n"},
  {(char*)"SetEnabled", PyvtkImageCroppingRegionsWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int enabling)\n\nEnable/disable the widget\n"},
  {(char*)"GetPlanePositions", PyvtkImageCroppingRegionsWidget_GetPlanePositions, METH_VARARGS,
   (char*)"V.GetPlanePositions() -> (float, float, float, float, float,\n    float)\nC++: double *GetPlanePositions()\n\n"},
  {(char*)"SetPlanePositions", PyvtkImageCroppingRegionsWidget_SetPlanePositions, METH_VARARGS,
   (char*)"V.SetPlanePositions([float, float, float, float, float, float])\nC++: virtual void SetPlanePositions(double pos[6])\nV.SetPlanePositions(float, float, float, float, float, float)\nC++: virtual void SetPlanePositions(double xMin, double xMax,\n    double yMin, double yMax, double zMin, double zMax)\n\nSet/Get the plane positions that represent the cropped region.\n"},
  {(char*)"SetCroppingRegionFlags", PyvtkImageCroppingRegionsWidget_SetCroppingRegionFlags, METH_VARARGS,
   (char*)"V.SetCroppingRegionFlags(int)\nC++: virtual void SetCroppingRegionFlags(int flags)\n\nSet/Get the cropping region flags\n"},
  {(char*)"GetCroppingRegionFlags", PyvtkImageCroppingRegionsWidget_GetCroppingRegionFlags, METH_VARARGS,
   (char*)"V.GetCroppingRegionFlags() -> int\nC++: int GetCroppingRegionFlags()\n\nSet/Get the cropping region flags\n"},
  {(char*)"GetSliceOrientation", PyvtkImageCroppingRegionsWidget_GetSliceOrientation, METH_VARARGS,
   (char*)"V.GetSliceOrientation() -> int\nC++: int GetSliceOrientation()\n\nSet/get the slice orientation\n"},
  {(char*)"SetSliceOrientation", PyvtkImageCroppingRegionsWidget_SetSliceOrientation, METH_VARARGS,
   (char*)"V.SetSliceOrientation(int)\nC++: virtual void SetSliceOrientation(int orientation)\n\nSet/get the slice orientation\n"},
  {(char*)"SetSliceOrientationToXY", PyvtkImageCroppingRegionsWidget_SetSliceOrientationToXY, METH_VARARGS,
   (char*)"V.SetSliceOrientationToXY()\nC++: virtual void SetSliceOrientationToXY()\n\nSet/get the slice orientation\n"},
  {(char*)"SetSliceOrientationToYZ", PyvtkImageCroppingRegionsWidget_SetSliceOrientationToYZ, METH_VARARGS,
   (char*)"V.SetSliceOrientationToYZ()\nC++: virtual void SetSliceOrientationToYZ()\n\nSet/get the slice orientation\n"},
  {(char*)"SetSliceOrientationToXZ", PyvtkImageCroppingRegionsWidget_SetSliceOrientationToXZ, METH_VARARGS,
   (char*)"V.SetSliceOrientationToXZ()\nC++: virtual void SetSliceOrientationToXZ()\n\nSet/get the slice orientation\n"},
  {(char*)"SetSlice", PyvtkImageCroppingRegionsWidget_SetSlice, METH_VARARGS,
   (char*)"V.SetSlice(int)\nC++: virtual void SetSlice(int num)\n\nSet/Get the slice number\n"},
  {(char*)"GetSlice", PyvtkImageCroppingRegionsWidget_GetSlice, METH_VARARGS,
   (char*)"V.GetSlice() -> int\nC++: int GetSlice()\n\nSet/Get the slice number\n"},
  {(char*)"SetLine1Color", PyvtkImageCroppingRegionsWidget_SetLine1Color, METH_VARARGS,
   (char*)"V.SetLine1Color(float, float, float)\nC++: virtual void SetLine1Color(double r, double g, double b)\nV.SetLine1Color([float, float, float])\nC++: virtual void SetLine1Color(double rgb[3])\n\nSet/Get line 1 color\n"},
  {(char*)"GetLine1Color", PyvtkImageCroppingRegionsWidget_GetLine1Color, METH_VARARGS,
   (char*)"V.GetLine1Color() -> (float, ...)\nC++: virtual double *GetLine1Color()\nV.GetLine1Color([float, float, float])\nC++: virtual void GetLine1Color(double rgb[3])\n\nSet/Get line 1 color\n"},
  {(char*)"SetLine2Color", PyvtkImageCroppingRegionsWidget_SetLine2Color, METH_VARARGS,
   (char*)"V.SetLine2Color(float, float, float)\nC++: virtual void SetLine2Color(double r, double g, double b)\nV.SetLine2Color([float, float, float])\nC++: virtual void SetLine2Color(double rgb[3])\n\nSet/Get line 2 color\n"},
  {(char*)"GetLine2Color", PyvtkImageCroppingRegionsWidget_GetLine2Color, METH_VARARGS,
   (char*)"V.GetLine2Color() -> (float, ...)\nC++: virtual double *GetLine2Color()\nV.GetLine2Color([float, float, float])\nC++: virtual void GetLine2Color(double rgb[3])\n\nSet/Get line 2 color\n"},
  {(char*)"SetLine3Color", PyvtkImageCroppingRegionsWidget_SetLine3Color, METH_VARARGS,
   (char*)"V.SetLine3Color(float, float, float)\nC++: virtual void SetLine3Color(double r, double g, double b)\nV.SetLine3Color([float, float, float])\nC++: virtual void SetLine3Color(double rgb[3])\n\nSet/Get line 3 color\n"},
  {(char*)"GetLine3Color", PyvtkImageCroppingRegionsWidget_GetLine3Color, METH_VARARGS,
   (char*)"V.GetLine3Color() -> (float, ...)\nC++: virtual double *GetLine3Color()\nV.GetLine3Color([float, float, float])\nC++: virtual void GetLine3Color(double rgb[3])\n\nSet/Get line 3 color\n"},
  {(char*)"SetLine4Color", PyvtkImageCroppingRegionsWidget_SetLine4Color, METH_VARARGS,
   (char*)"V.SetLine4Color(float, float, float)\nC++: virtual void SetLine4Color(double r, double g, double b)\nV.SetLine4Color([float, float, float])\nC++: virtual void SetLine4Color(double rgb[3])\n\nSet/Get line 4 color\n"},
  {(char*)"GetLine4Color", PyvtkImageCroppingRegionsWidget_GetLine4Color, METH_VARARGS,
   (char*)"V.GetLine4Color() -> (float, ...)\nC++: virtual double *GetLine4Color()\nV.GetLine4Color([float, float, float])\nC++: virtual void GetLine4Color(double rgb[3])\n\nSet/Get line 4 color\n"},
  {(char*)"SetVolumeMapper", PyvtkImageCroppingRegionsWidget_SetVolumeMapper, METH_VARARGS,
   (char*)"V.SetVolumeMapper(vtkVolumeMapper)\nC++: virtual void SetVolumeMapper(vtkVolumeMapper *mapper)\n\nSet/Get the input volume mapper Update the widget according to\nits mapper\n"},
  {(char*)"GetVolumeMapper", PyvtkImageCroppingRegionsWidget_GetVolumeMapper, METH_VARARGS,
   (char*)"V.GetVolumeMapper() -> vtkVolumeMapper\nC++: vtkVolumeMapper *GetVolumeMapper()\n\nSet/Get the input volume mapper Update the widget according to\nits mapper\n"},
  {(char*)"UpdateAccordingToInput", PyvtkImageCroppingRegionsWidget_UpdateAccordingToInput, METH_VARARGS,
   (char*)"V.UpdateAccordingToInput()\nC++: virtual void UpdateAccordingToInput()\n\nSet/Get the input volume mapper Update the widget according to\nits mapper\n"},
  {(char*)"MoveHorizontalLine", PyvtkImageCroppingRegionsWidget_MoveHorizontalLine, METH_VARARGS,
   (char*)"V.MoveHorizontalLine()\nC++: void MoveHorizontalLine()\n\nCallbacks for user interaction.\n"},
  {(char*)"MoveVerticalLine", PyvtkImageCroppingRegionsWidget_MoveVerticalLine, METH_VARARGS,
   (char*)"V.MoveVerticalLine()\nC++: void MoveVerticalLine()\n\nCallbacks for user interaction.\n"},
  {(char*)"MoveIntersectingLines", PyvtkImageCroppingRegionsWidget_MoveIntersectingLines, METH_VARARGS,
   (char*)"V.MoveIntersectingLines()\nC++: void MoveIntersectingLines()\n\nCallbacks for user interaction.\n"},
  {(char*)"UpdateCursorIcon", PyvtkImageCroppingRegionsWidget_UpdateCursorIcon, METH_VARARGS,
   (char*)"V.UpdateCursorIcon()\nC++: void UpdateCursorIcon()\n\nCallbacks for user interaction.\n"},
  {(char*)"OnButtonPress", PyvtkImageCroppingRegionsWidget_OnButtonPress, METH_VARARGS,
   (char*)"V.OnButtonPress()\nC++: void OnButtonPress()\n\nCallbacks for user interaction.\n"},
  {(char*)"OnButtonRelease", PyvtkImageCroppingRegionsWidget_OnButtonRelease, METH_VARARGS,
   (char*)"V.OnButtonRelease()\nC++: void OnButtonRelease()\n\nCallbacks for user interaction.\n"},
  {(char*)"OnMouseMove", PyvtkImageCroppingRegionsWidget_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove()\nC++: void OnMouseMove()\n\nCallbacks for user interaction.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageCroppingRegionsWidget_StaticNew()
{
  return vtkImageCroppingRegionsWidget::New();
}

PyObject *PyVTKClass_vtkImageCroppingRegionsWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageCroppingRegionsWidget_StaticNew,
    PyvtkImageCroppingRegionsWidget_Methods,
    "vtkImageCroppingRegionsWidget", modulename,
    NULL, NULL,
    PyvtkImageCroppingRegionsWidget_Doc(),
    PyVTKClass_vtk3DWidgetNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type);
    PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type;
    if (o && PyDict_SetItemString(d, (char *)"WidgetEventIds", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "SLICE_ORIENTATION_YZ", vtkImageCroppingRegionsWidget::SLICE_ORIENTATION_YZ },
          { "SLICE_ORIENTATION_XZ", vtkImageCroppingRegionsWidget::SLICE_ORIENTATION_XZ },
          { "SLICE_ORIENTATION_XY", vtkImageCroppingRegionsWidget::SLICE_ORIENTATION_XY },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 1; c++)
      {
      typedef vtkImageCroppingRegionsWidget::WidgetEventIds cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[1] = {
          { "CroppingPlanesPositionChangedEvent", vtkImageCroppingRegionsWidget::CroppingPlanesPositionChangedEvent },
        };

      o = PyvtkImageCroppingRegionsWidget_WidgetEventIds_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkImageCroppingRegionsWidget_Doc()
{
  static const char *docstring[] = {
    "vtkImageCroppingRegionsWidget - widget for cropping an image\n\n",
    "Superclass: vtk3DWidget\n\n",
    "This widget displays a set of axis aligned lines that can be\ninteractively manipulated to crop a volume. The region to be cropped\naway is displayed in a different highlight. Much like the\nvtkVolumeMapper, this widget supports 27 possible configurations of\ncropping planes. (See CroppingRegionFlags). If a volume mapper is\nset, the cropping planes are directly propagated to the volume\nmapper. The wid",
    "get invokes a CroppingPlanesPositionChangedEvent when\nthe position of any of the cropping planes is changed. The widget\nalso invokes an InteractionEvent in response to user interaction.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageCroppingRegionsWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageCroppingRegionsWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageCroppingRegionsWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

