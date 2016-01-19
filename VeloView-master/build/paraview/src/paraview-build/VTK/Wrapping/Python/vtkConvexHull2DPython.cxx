// python wrapper for vtkConvexHull2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkConvexHull2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkConvexHull2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkConvexHull2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkConvexHull2D_Doc();

#ifndef DECLARED_PyvtkConvexHull2D_HullShapes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkConvexHull2D_HullShapes_Type;
#define DECLARED_PyvtkConvexHull2D_HullShapes_Type
#endif

PyTypeObject PyvtkConvexHull2D_HullShapes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"HullShapes", // tp_name
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

PyObject *PyvtkConvexHull2D_HullShapes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkConvexHull2D_HullShapes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkConvexHull2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkConvexHull2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConvexHull2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkConvexHull2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConvexHull2D::NewInstance());

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
PyvtkConvexHull2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkConvexHull2D *tempr = vtkConvexHull2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkConvexHull2D::GetScaleFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleFactor(temp0);
      }
    else
      {
      op->vtkConvexHull2D::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetOutline() :
      op->vtkConvexHull2D::GetOutline());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutline(temp0);
      }
    else
      {
      op->vtkConvexHull2D::SetOutline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_OutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineOn();
      }
    else
      {
      op->vtkConvexHull2D::OutlineOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_OutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineOff();
      }
    else
      {
      op->vtkConvexHull2D::OutlineOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetHullShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHullShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHullShape() :
      op->vtkConvexHull2D::GetHullShape());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetHullShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHullShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHullShape(temp0);
      }
    else
      {
      op->vtkConvexHull2D::SetHullShape(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetHullShapeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHullShapeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHullShapeMinValue() :
      op->vtkConvexHull2D::GetHullShapeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetHullShapeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHullShapeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHullShapeMaxValue() :
      op->vtkConvexHull2D::GetHullShapeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetMinHullSizeInWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinHullSizeInWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinHullSizeInWorld(temp0);
      }
    else
      {
      op->vtkConvexHull2D::SetMinHullSizeInWorld(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInWorldMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInWorldMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinHullSizeInWorldMinValue() :
      op->vtkConvexHull2D::GetMinHullSizeInWorldMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInWorldMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInWorldMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinHullSizeInWorldMaxValue() :
      op->vtkConvexHull2D::GetMinHullSizeInWorldMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinHullSizeInWorld() :
      op->vtkConvexHull2D::GetMinHullSizeInWorld());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetMinHullSizeInDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinHullSizeInDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinHullSizeInDisplay(temp0);
      }
    else
      {
      op->vtkConvexHull2D::SetMinHullSizeInDisplay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInDisplayMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInDisplayMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMinHullSizeInDisplayMinValue() :
      op->vtkConvexHull2D::GetMinHullSizeInDisplayMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInDisplayMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInDisplayMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMinHullSizeInDisplayMaxValue() :
      op->vtkConvexHull2D::GetMinHullSizeInDisplayMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMinHullSizeInDisplay() :
      op->vtkConvexHull2D::GetMinHullSizeInDisplay());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkConvexHull2D::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkConvexHull2D::GetRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkConvexHull2D::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_CalculateBoundingRectangle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CalculateBoundingRectangle");

  vtkPoints *temp0 = NULL;
  vtkPoints *temp1 = NULL;
  double temp2 = 1.0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    vtkConvexHull2D::CalculateBoundingRectangle(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConvexHull2D_CalculateConvexHull(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CalculateConvexHull");

  vtkPoints *temp0 = NULL;
  vtkPoints *temp1 = NULL;
  double temp2 = 1.0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    vtkConvexHull2D::CalculateConvexHull(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkConvexHull2D_Methods[] = {
  {(char*)"GetClassName", PyvtkConvexHull2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkConvexHull2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkConvexHull2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkConvexHull2D\nC++: vtkConvexHull2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkConvexHull2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkConvexHull2D\nC++: vtkConvexHull2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetScaleFactor", PyvtkConvexHull2D_GetScaleFactor, METH_VARARGS,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nScale the hull by the amount specified. Defaults to 1.0.\n"},
  {(char*)"SetScaleFactor", PyvtkConvexHull2D_SetScaleFactor, METH_VARARGS,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double a)\n\nScale the hull by the amount specified. Defaults to 1.0.\n"},
  {(char*)"GetOutline", PyvtkConvexHull2D_GetOutline, METH_VARARGS,
   (char*)"V.GetOutline() -> bool\nC++: bool GetOutline()\n\nProduce an outline (polyline) of the hull on output port 1.\n"},
  {(char*)"SetOutline", PyvtkConvexHull2D_SetOutline, METH_VARARGS,
   (char*)"V.SetOutline(bool)\nC++: void SetOutline(bool a)\n\nProduce an outline (polyline) of the hull on output port 1.\n"},
  {(char*)"OutlineOn", PyvtkConvexHull2D_OutlineOn, METH_VARARGS,
   (char*)"V.OutlineOn()\nC++: void OutlineOn()\n\nProduce an outline (polyline) of the hull on output port 1.\n"},
  {(char*)"OutlineOff", PyvtkConvexHull2D_OutlineOff, METH_VARARGS,
   (char*)"V.OutlineOff()\nC++: void OutlineOff()\n\nProduce an outline (polyline) of the hull on output port 1.\n"},
  {(char*)"GetHullShape", PyvtkConvexHull2D_GetHullShape, METH_VARARGS,
   (char*)"V.GetHullShape() -> int\nC++: int GetHullShape()\n\nSet the shape of the hull to BoundingRectangle or ConvexHull.\n"},
  {(char*)"SetHullShape", PyvtkConvexHull2D_SetHullShape, METH_VARARGS,
   (char*)"V.SetHullShape(int)\nC++: void SetHullShape(int)\n\nSet the shape of the hull to BoundingRectangle or ConvexHull.\n"},
  {(char*)"GetHullShapeMinValue", PyvtkConvexHull2D_GetHullShapeMinValue, METH_VARARGS,
   (char*)"V.GetHullShapeMinValue() -> int\nC++: int GetHullShapeMinValue()\n\nSet the shape of the hull to BoundingRectangle or ConvexHull.\n"},
  {(char*)"GetHullShapeMaxValue", PyvtkConvexHull2D_GetHullShapeMaxValue, METH_VARARGS,
   (char*)"V.GetHullShapeMaxValue() -> int\nC++: int GetHullShapeMaxValue()\n\nSet the shape of the hull to BoundingRectangle or ConvexHull.\n"},
  {(char*)"SetMinHullSizeInWorld", PyvtkConvexHull2D_SetMinHullSizeInWorld, METH_VARARGS,
   (char*)"V.SetMinHullSizeInWorld(float)\nC++: void SetMinHullSizeInWorld(double)\n\nSet the minimum x,y-dimensions of each hull in world coordinates.\nDefaults to 1.0. Set to 0.0 to disable.\n"},
  {(char*)"GetMinHullSizeInWorldMinValue", PyvtkConvexHull2D_GetMinHullSizeInWorldMinValue, METH_VARARGS,
   (char*)"V.GetMinHullSizeInWorldMinValue() -> float\nC++: double GetMinHullSizeInWorldMinValue()\n\nSet the minimum x,y-dimensions of each hull in world coordinates.\nDefaults to 1.0. Set to 0.0 to disable.\n"},
  {(char*)"GetMinHullSizeInWorldMaxValue", PyvtkConvexHull2D_GetMinHullSizeInWorldMaxValue, METH_VARARGS,
   (char*)"V.GetMinHullSizeInWorldMaxValue() -> float\nC++: double GetMinHullSizeInWorldMaxValue()\n\nSet the minimum x,y-dimensions of each hull in world coordinates.\nDefaults to 1.0. Set to 0.0 to disable.\n"},
  {(char*)"GetMinHullSizeInWorld", PyvtkConvexHull2D_GetMinHullSizeInWorld, METH_VARARGS,
   (char*)"V.GetMinHullSizeInWorld() -> float\nC++: double GetMinHullSizeInWorld()\n\nSet the minimum x,y-dimensions of each hull in world coordinates.\nDefaults to 1.0. Set to 0.0 to disable.\n"},
  {(char*)"SetMinHullSizeInDisplay", PyvtkConvexHull2D_SetMinHullSizeInDisplay, METH_VARARGS,
   (char*)"V.SetMinHullSizeInDisplay(int)\nC++: void SetMinHullSizeInDisplay(int)\n\nSet the minimum x,y-dimensions of each hull in pixels. You must\nalso set a vtkRenderer. Defaults to 1. Set to 0 to disable.\n"},
  {(char*)"GetMinHullSizeInDisplayMinValue", PyvtkConvexHull2D_GetMinHullSizeInDisplayMinValue, METH_VARARGS,
   (char*)"V.GetMinHullSizeInDisplayMinValue() -> int\nC++: int GetMinHullSizeInDisplayMinValue()\n\nSet the minimum x,y-dimensions of each hull in pixels. You must\nalso set a vtkRenderer. Defaults to 1. Set to 0 to disable.\n"},
  {(char*)"GetMinHullSizeInDisplayMaxValue", PyvtkConvexHull2D_GetMinHullSizeInDisplayMaxValue, METH_VARARGS,
   (char*)"V.GetMinHullSizeInDisplayMaxValue() -> int\nC++: int GetMinHullSizeInDisplayMaxValue()\n\nSet the minimum x,y-dimensions of each hull in pixels. You must\nalso set a vtkRenderer. Defaults to 1. Set to 0 to disable.\n"},
  {(char*)"GetMinHullSizeInDisplay", PyvtkConvexHull2D_GetMinHullSizeInDisplay, METH_VARARGS,
   (char*)"V.GetMinHullSizeInDisplay() -> int\nC++: int GetMinHullSizeInDisplay()\n\nSet the minimum x,y-dimensions of each hull in pixels. You must\nalso set a vtkRenderer. Defaults to 1. Set to 0 to disable.\n"},
  {(char*)"SetRenderer", PyvtkConvexHull2D_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *renderer)\n\nRenderer needed for MinHullSizeInDisplay calculation. Not\nreference counted.\n"},
  {(char*)"GetRenderer", PyvtkConvexHull2D_GetRenderer, METH_VARARGS,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nRenderer needed for MinHullSizeInDisplay calculation. Not\nreference counted.\n"},
  {(char*)"GetMTime", PyvtkConvexHull2D_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nThe modified time of this filter.\n"},
  {(char*)"CalculateBoundingRectangle", PyvtkConvexHull2D_CalculateBoundingRectangle, METH_VARARGS | METH_STATIC,
   (char*)"V.CalculateBoundingRectangle(vtkPoints, vtkPoints, float)\nC++: static void CalculateBoundingRectangle(vtkPoints *inPoints,\n    vtkPoints *outPoints, double minimumHullSize=1.0)\n\nConvenience methods to calculate a convex hull from a set of\nvtkPointS.\n"},
  {(char*)"CalculateConvexHull", PyvtkConvexHull2D_CalculateConvexHull, METH_VARARGS | METH_STATIC,
   (char*)"V.CalculateConvexHull(vtkPoints, vtkPoints, float)\nC++: static void CalculateConvexHull(vtkPoints *inPoints,\n    vtkPoints *outPoints, double minimumHullSize=1.0)\n\nConvenience methods to calculate a convex hull from a set of\nvtkPointS.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkConvexHull2D_StaticNew()
{
  return vtkConvexHull2D::New();
}

PyObject *PyVTKClass_vtkConvexHull2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkConvexHull2D_StaticNew,
    PyvtkConvexHull2D_Methods,
    "vtkConvexHull2D", modulename,
    NULL, NULL,
    PyvtkConvexHull2D_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkConvexHull2D_HullShapes_Type);
    PyvtkConvexHull2D_HullShapes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkConvexHull2D_HullShapes_Type;
    if (o && PyDict_SetItemString(d, (char *)"HullShapes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkConvexHull2D::HullShapes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "BoundingRectangle", vtkConvexHull2D::BoundingRectangle },
          { "ConvexHull", vtkConvexHull2D::ConvexHull },
        };

      o = PyvtkConvexHull2D_HullShapes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkConvexHull2D_Doc()
{
  static const char *docstring[] = {
    "vtkConvexHull2D - Produce filled convex hulls around a set of points.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "Produces a vtkPolyData comprised of a filled polygon of the convex\nhull of the input points. You may alternatively choose to output a\nbounding rectangle. Static methods are provided that calculate a\n(counter-clockwise) hull based on a set of input points.\n\nTo help maintain the property of guaranteed visibilityhulls may be\nartificially scaled by setting MinHullSizeInWorld. This is\nparticularly help",
    "ful in the case that there are only one or two\npoints as it avoids producing a degenerate polygon. This setting is\nalso available as an argument to the static methods.\n\nSetting a vtkRenderer on the filter enables the possibility to set\nMinHullSizeInDisplay to the desired number of display pixels to cover\nin each of the x- and y-dimensions.\n\nSetting OutlineOn() additionally produces an outline of t",
    "he hull on\noutput port 1.\n\nNote:\n\nThis filter operates in the x,y-plane and as such works best with an\ninteractor style that does not permit camera rotation such as\nvtkInteractorStyleRubberBand2D.\n\nThanks:\n\nThanks to Colin Myers, University of Leeds for providing this\nimplementation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkConvexHull2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkConvexHull2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkConvexHull2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

