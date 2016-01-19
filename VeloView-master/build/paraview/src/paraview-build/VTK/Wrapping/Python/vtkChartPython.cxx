// python wrapper for vtkChart
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkRect.h"
#include "vtkChart.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkChart(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkChartNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkChart_Doc();

#ifndef DECLARED_PyvtkChart_EventIds_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkChart_EventIds_Type;
#define DECLARED_PyvtkChart_EventIds_Type
#endif

PyTypeObject PyvtkChart_EventIds_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"EventIds", // tp_name
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

PyObject *PyvtkChart_EventIds_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkChart_EventIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkChart_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkChart::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChart::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChart *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChart::NewInstance());

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
PyvtkChart_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkChart *tempr = vtkChart::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = op->Paint(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_AddPlot_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPlot *tempr = (ap.IsBound() ?
      op->AddPlot(temp0) :
      op->vtkChart::AddPlot(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkChart_AddPlot_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkPlot *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddPlot(temp0) :
      op->vtkChart::AddPlot(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkChart_AddPlot_Methods[] = {
  {NULL, PyvtkChart_AddPlot_s1, METH_VARARGS,
   (char*)"@i"},
  {NULL, PyvtkChart_AddPlot_s2, METH_VARARGS,
   (char*)"@O *vtkPlot"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkChart_AddPlot(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChart_AddPlot_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddPlot");
  return NULL;
}



static PyObject *
PyvtkChart_RemovePlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->RemovePlot(temp0) :
      op->vtkChart::RemovePlot(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_RemovePlotInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePlotInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkPlot *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
    {
    bool tempr = (ap.IsBound() ?
      op->RemovePlotInstance(temp0) :
      op->vtkChart::RemovePlotInstance(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_ClearPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearPlots();
      }
    else
      {
      op->vtkChart::ClearPlots();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPlot *tempr = (ap.IsBound() ?
      op->GetPlot(temp0) :
      op->vtkChart::GetPlot(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetNumberOfPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPlots() :
      op->vtkChart::GetNumberOfPlots());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetAxis(temp0) :
      op->vtkChart::GetAxis(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfAxes() :
      op->vtkChart::GetNumberOfAxes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_RecalculateBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecalculateBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RecalculateBounds();
      }
    else
      {
      op->vtkChart::RecalculateBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetSelectionMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionMethod(temp0);
      }
    else
      {
      op->vtkChart::SetSelectionMethod(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetSelectionMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSelectionMethod() :
      op->vtkChart::GetSelectionMethod());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkAnnotationLink *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLink"))
    {
    if (ap.IsBound())
      {
      op->SetAnnotationLink(temp0);
      }
    else
      {
      op->vtkChart::SetAnnotationLink(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAnnotationLink *tempr = (ap.IsBound() ?
      op->GetAnnotationLink() :
      op->vtkChart::GetAnnotationLink());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetGeometry_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGeometry(temp0, temp1);
      }
    else
      {
      op->vtkChart::SetGeometry(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkChart_SetGeometry_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGeometry(temp0);
      }
    else
      {
      op->vtkChart::SetGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkChart_SetGeometry(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkChart_SetGeometry_s1(self, args);
    case 1:
      return PyvtkChart_SetGeometry_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGeometry");
  return NULL;
}



static PyObject *
PyvtkChart_GetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetGeometry() :
      op->vtkChart::GetGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPoint1(temp0, temp1);
      }
    else
      {
      op->vtkChart::SetPoint1(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkChart_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPoint1(temp0);
      }
    else
      {
      op->vtkChart::SetPoint1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkChart_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkChart_SetPoint1_s1(self, args);
    case 1:
      return PyvtkChart_SetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return NULL;
}



static PyObject *
PyvtkChart_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkChart::GetPoint1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPoint2(temp0, temp1);
      }
    else
      {
      op->vtkChart::SetPoint2(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkChart_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPoint2(temp0);
      }
    else
      {
      op->vtkChart::SetPoint2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkChart_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkChart_SetPoint2_s1(self, args);
    case 1:
      return PyvtkChart_SetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return NULL;
}



static PyObject *
PyvtkChart_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkChart::GetPoint2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetShowLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowLegend(temp0);
      }
    else
      {
      op->vtkChart::SetShowLegend(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetShowLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetShowLegend() :
      op->vtkChart::GetShowLegend());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartLegend *tempr = (ap.IsBound() ?
      op->GetLegend() :
      op->vtkChart::GetLegend());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitle(temp0);
      }
    else
      {
      op->vtkChart::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkChart::GetTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetTitleProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleProperties() :
      op->vtkChart::GetTitleProperties());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetBottomBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBottomBorder(temp0);
      }
    else
      {
      op->vtkChart::SetBottomBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetTopBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTopBorder(temp0);
      }
    else
      {
      op->vtkChart::SetTopBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetLeftBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLeftBorder(temp0);
      }
    else
      {
      op->vtkChart::SetLeftBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetRightBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRightBorder(temp0);
      }
    else
      {
      op->vtkChart::SetRightBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetBorders(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkChart::SetBorders(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkRectf *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf"))
    {
    if (ap.IsBound())
      {
      op->SetSize(*temp0);
      }
    else
      {
      op->vtkChart::SetSize(*temp0);
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
PyvtkChart_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkChart::GetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategy(temp0);
      }
    else
      {
      op->vtkChart::SetLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLayoutStrategy() :
      op->vtkChart::GetLayoutStrategy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetAutoSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoSize(temp0);
      }
    else
      {
      op->vtkChart::SetAutoSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetAutoSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAutoSize() :
      op->vtkChart::GetAutoSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetRenderEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderEmpty(temp0);
      }
    else
      {
      op->vtkChart::SetRenderEmpty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetRenderEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRenderEmpty() :
      op->vtkChart::GetRenderEmpty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetActionToButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActionToButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetActionToButton(temp0, temp1);
      }
    else
      {
      op->vtkChart::SetActionToButton(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetActionToButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActionToButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetActionToButton(temp0) :
      op->vtkChart::GetActionToButton(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetClickActionToButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClickActionToButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetClickActionToButton(temp0, temp1);
      }
    else
      {
      op->vtkChart::SetClickActionToButton(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetClickActionToButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClickActionToButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClickActionToButton(temp0) :
      op->vtkChart::GetClickActionToButton(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetBackgroundBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkBrush *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBrush"))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundBrush(temp0);
      }
    else
      {
      op->vtkChart::SetBackgroundBrush(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetBackgroundBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetBackgroundBrush() :
      op->vtkChart::GetBackgroundBrush());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionMode(temp0);
      }
    else
      {
      op->vtkChart::SetSelectionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSelectionMode() :
      op->vtkChart::GetSelectionMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkChart_Methods[] = {
  {(char*)"GetClassName", PyvtkChart_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChart_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChart_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkChart\nC++: vtkChart *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChart_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChart\nC++: vtkChart *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Paint", PyvtkChart_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn\n"},
  {(char*)"AddPlot", PyvtkChart_AddPlot, METH_VARARGS,
   (char*)"V.AddPlot(int) -> vtkPlot\nC++: virtual vtkPlot *AddPlot(int type)\nV.AddPlot(vtkPlot) -> int\nC++: virtual vtkIdType AddPlot(vtkPlot *plot)\n\nAdd a plot to the chart, defaults to using the name of the y\ncolumn\n"},
  {(char*)"RemovePlot", PyvtkChart_RemovePlot, METH_VARARGS,
   (char*)"V.RemovePlot(int) -> bool\nC++: virtual bool RemovePlot(vtkIdType index)\n\nRemove the plot at the specified index, returns true if\nsuccessful, false if the index was invalid.\n"},
  {(char*)"RemovePlotInstance", PyvtkChart_RemovePlotInstance, METH_VARARGS,
   (char*)"V.RemovePlotInstance(vtkPlot) -> bool\nC++: virtual bool RemovePlotInstance(vtkPlot *plot)\n\nRemove the given plot.  Returns true if successful, false if the\nplot was not contained in this chart.  Note, the base\nimplementation of this method performs a linear search to locate\nthe plot.\n"},
  {(char*)"ClearPlots", PyvtkChart_ClearPlots, METH_VARARGS,
   (char*)"V.ClearPlots()\nC++: virtual void ClearPlots()\n\nRemove all plots from the chart.\n"},
  {(char*)"GetPlot", PyvtkChart_GetPlot, METH_VARARGS,
   (char*)"V.GetPlot(int) -> vtkPlot\nC++: virtual vtkPlot *GetPlot(vtkIdType index)\n\nGet the plot at the specified index, returns null if the index is\ninvalid.\n"},
  {(char*)"GetNumberOfPlots", PyvtkChart_GetNumberOfPlots, METH_VARARGS,
   (char*)"V.GetNumberOfPlots() -> int\nC++: virtual vtkIdType GetNumberOfPlots()\n\nGet the number of plots the chart contains.\n"},
  {(char*)"GetAxis", PyvtkChart_GetAxis, METH_VARARGS,
   (char*)"V.GetAxis(int) -> vtkAxis\nC++: virtual vtkAxis *GetAxis(int axisIndex)\n\nGet the axis specified by axisIndex. 0 is x, 1 is y. This should\nprobably be improved either using a string or enum to select the\naxis.\n"},
  {(char*)"GetNumberOfAxes", PyvtkChart_GetNumberOfAxes, METH_VARARGS,
   (char*)"V.GetNumberOfAxes() -> int\nC++: virtual vtkIdType GetNumberOfAxes()\n\nGet the number of axes in the current chart.\n"},
  {(char*)"RecalculateBounds", PyvtkChart_RecalculateBounds, METH_VARARGS,
   (char*)"V.RecalculateBounds()\nC++: virtual void RecalculateBounds()\n\nRequest that the chart recalculates the range of its axes.\nEspecially useful in applications after the parameters of plots\nhave been modified.\n"},
  {(char*)"SetSelectionMethod", PyvtkChart_SetSelectionMethod, METH_VARARGS,
   (char*)"V.SetSelectionMethod(int)\nC++: virtual void SetSelectionMethod(int method)\n\nSet the selection method, which controls how selections are\nhandled by the chart. The default is SELECTION_ROWS which selects\nall points in all plots in a chart that have values in the rows\nselected. SELECTION_PLOTS allows for finer-grained selections\nspecific to each plot, and so to each XY column pair.\nSELECTION_COLUMNS selects all points of plots that correspond to\nselected columns.\n"},
  {(char*)"GetSelectionMethod", PyvtkChart_GetSelectionMethod, METH_VARARGS,
   (char*)"V.GetSelectionMethod() -> int\nC++: virtual int GetSelectionMethod()\n\nSet the selection method, which controls how selections are\nhandled by the chart. The default is SELECTION_ROWS which selects\nall points in all plots in a chart that have values in the rows\nselected. SELECTION_PLOTS allows for finer-grained selections\nspecific to each plot, and so to each XY column pair.\nSELECTION_COLUMNS selects all points of plots that correspond to\nselected columns.\n"},
  {(char*)"SetAnnotationLink", PyvtkChart_SetAnnotationLink, METH_VARARGS,
   (char*)"V.SetAnnotationLink(vtkAnnotationLink)\nC++: virtual void SetAnnotationLink(vtkAnnotationLink *link)\n\nSet the vtkAnnotationLink for the chart.\n"},
  {(char*)"GetAnnotationLink", PyvtkChart_GetAnnotationLink, METH_VARARGS,
   (char*)"V.GetAnnotationLink() -> vtkAnnotationLink\nC++: vtkAnnotationLink *GetAnnotationLink()\n\nGet the vtkAnnotationLink for the chart.\n"},
  {(char*)"SetGeometry", PyvtkChart_SetGeometry, METH_VARARGS,
   (char*)"V.SetGeometry(int, int)\nC++: void SetGeometry(int, int)\nV.SetGeometry((int, int))\nC++: void SetGeometry(int a[2])\n\n"},
  {(char*)"GetGeometry", PyvtkChart_GetGeometry, METH_VARARGS,
   (char*)"V.GetGeometry() -> (int, int)\nC++: int *GetGeometry()\n\n"},
  {(char*)"SetPoint1", PyvtkChart_SetPoint1, METH_VARARGS,
   (char*)"V.SetPoint1(int, int)\nC++: void SetPoint1(int, int)\nV.SetPoint1((int, int))\nC++: void SetPoint1(int a[2])\n\n"},
  {(char*)"GetPoint1", PyvtkChart_GetPoint1, METH_VARARGS,
   (char*)"V.GetPoint1() -> (int, int)\nC++: int *GetPoint1()\n\n"},
  {(char*)"SetPoint2", PyvtkChart_SetPoint2, METH_VARARGS,
   (char*)"V.SetPoint2(int, int)\nC++: void SetPoint2(int, int)\nV.SetPoint2((int, int))\nC++: void SetPoint2(int a[2])\n\n"},
  {(char*)"GetPoint2", PyvtkChart_GetPoint2, METH_VARARGS,
   (char*)"V.GetPoint2() -> (int, int)\nC++: int *GetPoint2()\n\n"},
  {(char*)"SetShowLegend", PyvtkChart_SetShowLegend, METH_VARARGS,
   (char*)"V.SetShowLegend(bool)\nC++: virtual void SetShowLegend(bool visible)\n\nSet/get whether the chart should draw a legend.\n"},
  {(char*)"GetShowLegend", PyvtkChart_GetShowLegend, METH_VARARGS,
   (char*)"V.GetShowLegend() -> bool\nC++: virtual bool GetShowLegend()\n\nSet/get whether the chart should draw a legend.\n"},
  {(char*)"GetLegend", PyvtkChart_GetLegend, METH_VARARGS,
   (char*)"V.GetLegend() -> vtkChartLegend\nC++: virtual vtkChartLegend *GetLegend()\n\nGet the legend for the chart, if available. Can return NULL if\nthere is no legend.\n"},
  {(char*)"SetTitle", PyvtkChart_SetTitle, METH_VARARGS,
   (char*)"V.SetTitle(string)\nC++: virtual void SetTitle(const vtkStdString &title)\n\nGet/set the title text of the chart.\n"},
  {(char*)"GetTitle", PyvtkChart_GetTitle, METH_VARARGS,
   (char*)"V.GetTitle() -> string\nC++: virtual vtkStdString GetTitle()\n\nGet/set the title text of the chart.\n"},
  {(char*)"GetTitleProperties", PyvtkChart_GetTitleProperties, METH_VARARGS,
   (char*)"V.GetTitleProperties() -> vtkTextProperty\nC++: vtkTextProperty *GetTitleProperties()\n\nGet the vtkTextProperty that governs how the chart title is\ndisplayed.\n"},
  {(char*)"SetBottomBorder", PyvtkChart_SetBottomBorder, METH_VARARGS,
   (char*)"V.SetBottomBorder(int)\nC++: void SetBottomBorder(int border)\n\nSet/get the borders of the chart (space in pixels around the\nchart).\n"},
  {(char*)"SetTopBorder", PyvtkChart_SetTopBorder, METH_VARARGS,
   (char*)"V.SetTopBorder(int)\nC++: void SetTopBorder(int border)\n\nSet/get the borders of the chart (space in pixels around the\nchart).\n"},
  {(char*)"SetLeftBorder", PyvtkChart_SetLeftBorder, METH_VARARGS,
   (char*)"V.SetLeftBorder(int)\nC++: void SetLeftBorder(int border)\n\nSet/get the borders of the chart (space in pixels around the\nchart).\n"},
  {(char*)"SetRightBorder", PyvtkChart_SetRightBorder, METH_VARARGS,
   (char*)"V.SetRightBorder(int)\nC++: void SetRightBorder(int border)\n\nSet/get the borders of the chart (space in pixels around the\nchart).\n"},
  {(char*)"SetBorders", PyvtkChart_SetBorders, METH_VARARGS,
   (char*)"V.SetBorders(int, int, int, int)\nC++: void SetBorders(int left, int bottom, int right, int top)\n\nSet/get the borders of the chart (space in pixels around the\nchart).\n"},
  {(char*)"SetSize", PyvtkChart_SetSize, METH_VARARGS,
   (char*)"V.SetSize(vtkRectf)\nC++: void SetSize(const vtkRectf &rect)\n\nSet the size of the chart. The rect argument specifies the bottom\ncorner, width and height of the chart. The borders will be laid\nout within the specified rectangle.\n"},
  {(char*)"GetSize", PyvtkChart_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> vtkRectf\nC++: vtkRectf GetSize()\n\nGet the current size of the chart.\n"},
  {(char*)"SetLayoutStrategy", PyvtkChart_SetLayoutStrategy, METH_VARARGS,
   (char*)"V.SetLayoutStrategy(int)\nC++: void SetLayoutStrategy(int a)\n\nSet/get the layout strategy that should be used by the chart. As\nwe don't support enums this can take any value in the integer\nrange, but the only valid enums are FILL_SCENE, FILL_RECT and\nAXES_TO_RECT.\n"},
  {(char*)"GetLayoutStrategy", PyvtkChart_GetLayoutStrategy, METH_VARARGS,
   (char*)"V.GetLayoutStrategy() -> int\nC++: int GetLayoutStrategy()\n\nSet/get the layout strategy that should be used by the chart. As\nwe don't support enums this can take any value in the integer\nrange, but the only valid enums are FILL_SCENE, FILL_RECT and\nAXES_TO_RECT.\n"},
  {(char*)"SetAutoSize", PyvtkChart_SetAutoSize, METH_VARARGS,
   (char*)"V.SetAutoSize(bool)\nC++: virtual void SetAutoSize(bool isAutoSized)\n\nSet/get whether the chart should automatically resize to fill the\ncurrent render window. Default is true.\n"},
  {(char*)"GetAutoSize", PyvtkChart_GetAutoSize, METH_VARARGS,
   (char*)"V.GetAutoSize() -> bool\nC++: virtual bool GetAutoSize()\n\nSet/get whether the chart should automatically resize to fill the\ncurrent render window. Default is true.\n"},
  {(char*)"SetRenderEmpty", PyvtkChart_SetRenderEmpty, METH_VARARGS,
   (char*)"V.SetRenderEmpty(bool)\nC++: void SetRenderEmpty(bool a)\n\nSet/get whether the chart should still render its axes and\ndecorations even if the chart has no visible plots. Default is\nfalse (do not render an empty plot).\n\nNote that if you wish to render axes for an empty plot you should\nalso set AutoSize to false, as that will hide all axes for an\nempty plot.\n"},
  {(char*)"GetRenderEmpty", PyvtkChart_GetRenderEmpty, METH_VARARGS,
   (char*)"V.GetRenderEmpty() -> bool\nC++: bool GetRenderEmpty()\n\nSet/get whether the chart should still render its axes and\ndecorations even if the chart has no visible plots. Default is\nfalse (do not render an empty plot).\n\nNote that if you wish to render axes for an empty plot you should\nalso set AutoSize to false, as that will hide all axes for an\nempty plot.\n"},
  {(char*)"SetActionToButton", PyvtkChart_SetActionToButton, METH_VARARGS,
   (char*)"V.SetActionToButton(int, int)\nC++: virtual void SetActionToButton(int action, int button)\n\nAssign action types to mouse buttons. Available action types are\nPAN, ZOOM and SELECT in the chart enum, the default assigns the\nLEFT_BUTTON to PAN, MIDDLE_BUTTON to ZOOM and RIGHT_BUTTON to\nSELECT. Valid mouse enums are in the vtkContextMouseEvent class.\n\nNote that only one mouse button can be assigned to each action,\nan action will have -1 (invalid button) assigned if it had the\nsame button as the one assigned to a different action.\n"},
  {(char*)"GetActionToButton", PyvtkChart_GetActionToButton, METH_VARARGS,
   (char*)"V.GetActionToButton(int) -> int\nC++: virtual int GetActionToButton(int action)\n\nGet the mouse button associated with the supplied action. The\nmouse button enum is from vtkContextMouseEvent, and the action\nenum is from vtkChart.\n"},
  {(char*)"SetClickActionToButton", PyvtkChart_SetClickActionToButton, METH_VARARGS,
   (char*)"V.SetClickActionToButton(int, int)\nC++: virtual void SetClickActionToButton(int action, int button)\n\nAssign action types to single mouse clicks. Available action\ntypes are SELECT and NOTIFY in the chart enum. The default\nassigns the LEFT_BUTTON to NOTIFY, and the RIGHT_BUTTON to\nSELECT.\n"},
  {(char*)"GetClickActionToButton", PyvtkChart_GetClickActionToButton, METH_VARARGS,
   (char*)"V.GetClickActionToButton(int) -> int\nC++: virtual int GetClickActionToButton(int action)\n\nGet the mouse button associated with the supplied click action.\nThe mouse button enum is from vtkContextMouseEvent, and the\naction enum is from vtkChart.\n"},
  {(char*)"SetBackgroundBrush", PyvtkChart_SetBackgroundBrush, METH_VARARGS,
   (char*)"V.SetBackgroundBrush(vtkBrush)\nC++: void SetBackgroundBrush(vtkBrush *brush)\n\nSet/Get the brush to use for the background color.\n"},
  {(char*)"GetBackgroundBrush", PyvtkChart_GetBackgroundBrush, METH_VARARGS,
   (char*)"V.GetBackgroundBrush() -> vtkBrush\nC++: vtkBrush *GetBackgroundBrush()\n\nSet/Get the brush to use for the background color.\n"},
  {(char*)"SetSelectionMode", PyvtkChart_SetSelectionMode, METH_VARARGS,
   (char*)"V.SetSelectionMode(int)\nC++: virtual void SetSelectionMode(int)\n\nSet/get the Selection Mode that will be used by the chart while\ndoing selection. The only valid enums are\nvtkContextScene::SELECTION_NONE, SELECTION_DEFAULT,\nSELECTION_ADDITION, SELECTION_SUBTRACTION, SELECTION_TOGGLE\n"},
  {(char*)"GetSelectionMode", PyvtkChart_GetSelectionMode, METH_VARARGS,
   (char*)"V.GetSelectionMode() -> int\nC++: int GetSelectionMode()\n\nSet/get the Selection Mode that will be used by the chart while\ndoing selection. The only valid enums are\nvtkContextScene::SELECTION_NONE, SELECTION_DEFAULT,\nSELECTION_ADDITION, SELECTION_SUBTRACTION, SELECTION_TOGGLE\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkChartNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkChart_Methods,
    "vtkChart", modulename,
    NULL, NULL,
    PyvtkChart_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkChart_EventIds_Type);
    PyvtkChart_EventIds_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkChart_EventIds_Type;
    if (o && PyDict_SetItemString(d, (char *)"EventIds", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 13; c++)
      {
      static const struct { const char *name; int value; }
        constants[13] = {
          { "LINE", vtkChart::LINE },
          { "POINTS", vtkChart::POINTS },
          { "BAR", vtkChart::BAR },
          { "STACKED", vtkChart::STACKED },
          { "BAG", vtkChart::BAG },
          { "FUNCTIONALBAG", vtkChart::FUNCTIONALBAG },
          { "PAN", vtkChart::PAN },
          { "ZOOM", vtkChart::ZOOM },
          { "ZOOM_AXIS", vtkChart::ZOOM_AXIS },
          { "SELECT", vtkChart::SELECT },
          { "SELECT_RECTANGLE", vtkChart::SELECT_RECTANGLE },
          { "SELECT_POLYGON", vtkChart::SELECT_POLYGON },
          { "NOTIFY", vtkChart::NOTIFY },
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
      typedef vtkChart::EventIds cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[1] = {
          { "UpdateRange", vtkChart::UpdateRange },
        };

      o = PyvtkChart_EventIds_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 6; c++)
      {
      static const struct { const char *name; int value; }
        constants[6] = {
          { "SELECTION_ROWS", vtkChart::SELECTION_ROWS },
          { "SELECTION_PLOTS", vtkChart::SELECTION_PLOTS },
          { "SELECTION_COLUMNS", vtkChart::SELECTION_COLUMNS },
          { "FILL_SCENE", vtkChart::FILL_SCENE },
          { "FILL_RECT", vtkChart::FILL_RECT },
          { "AXES_TO_RECT", vtkChart::AXES_TO_RECT },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkChart_Doc()
{
  static const char *docstring[] = {
    "vtkChart - Factory class for drawing 2D charts\n\n",
    "Superclass: vtkContextItem\n\n",
    "This defines the interface for a chart.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChart(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChartNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChart", o) != 0)
    {
    Py_DECREF(o);
    }

}

