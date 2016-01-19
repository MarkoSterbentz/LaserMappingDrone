// python wrapper for vtkReflectionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkReflectionFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkReflectionFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkReflectionFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkReflectionFilter_Doc();

#ifndef DECLARED_PyvtkReflectionFilter_ReflectionPlane_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkReflectionFilter_ReflectionPlane_Type;
#define DECLARED_PyvtkReflectionFilter_ReflectionPlane_Type
#endif

PyTypeObject PyvtkReflectionFilter_ReflectionPlane_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ReflectionPlane", // tp_name
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

PyObject *PyvtkReflectionFilter_ReflectionPlane_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkReflectionFilter_ReflectionPlane_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkReflectionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkReflectionFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkReflectionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkReflectionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkReflectionFilter::NewInstance());

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
PyvtkReflectionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkReflectionFilter *tempr = vtkReflectionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlane(temp0);
      }
    else
      {
      op->vtkReflectionFilter::SetPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetPlaneMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPlaneMinValue() :
      op->vtkReflectionFilter::GetPlaneMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetPlaneMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPlaneMaxValue() :
      op->vtkReflectionFilter::GetPlaneMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPlane() :
      op->vtkReflectionFilter::GetPlane());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToX();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToY();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToZ();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToXMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToXMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToXMin();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToXMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToYMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToYMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToYMin();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToYMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToZMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToZMin();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToZMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToXMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToXMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToXMax();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToXMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToYMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToYMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToYMax();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToYMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToZMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToZMax();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToZMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkReflectionFilter::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkReflectionFilter::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCopyInput(temp0);
      }
    else
      {
      op->vtkReflectionFilter::SetCopyInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCopyInput() :
      op->vtkReflectionFilter::GetCopyInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_CopyInputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyInputOn();
      }
    else
      {
      op->vtkReflectionFilter::CopyInputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_CopyInputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyInputOff();
      }
    else
      {
      op->vtkReflectionFilter::CopyInputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkReflectionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkReflectionFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkReflectionFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkReflectionFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkReflectionFilter\nC++: vtkReflectionFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkReflectionFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkReflectionFilter\nC++: vtkReflectionFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPlane", PyvtkReflectionFilter_SetPlane, METH_VARARGS,
   (char*)"V.SetPlane(int)\nC++: void SetPlane(int)\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"GetPlaneMinValue", PyvtkReflectionFilter_GetPlaneMinValue, METH_VARARGS,
   (char*)"V.GetPlaneMinValue() -> int\nC++: int GetPlaneMinValue()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"GetPlaneMaxValue", PyvtkReflectionFilter_GetPlaneMaxValue, METH_VARARGS,
   (char*)"V.GetPlaneMaxValue() -> int\nC++: int GetPlaneMaxValue()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"GetPlane", PyvtkReflectionFilter_GetPlane, METH_VARARGS,
   (char*)"V.GetPlane() -> int\nC++: int GetPlane()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToX", PyvtkReflectionFilter_SetPlaneToX, METH_VARARGS,
   (char*)"V.SetPlaneToX()\nC++: void SetPlaneToX()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToY", PyvtkReflectionFilter_SetPlaneToY, METH_VARARGS,
   (char*)"V.SetPlaneToY()\nC++: void SetPlaneToY()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToZ", PyvtkReflectionFilter_SetPlaneToZ, METH_VARARGS,
   (char*)"V.SetPlaneToZ()\nC++: void SetPlaneToZ()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToXMin", PyvtkReflectionFilter_SetPlaneToXMin, METH_VARARGS,
   (char*)"V.SetPlaneToXMin()\nC++: void SetPlaneToXMin()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToYMin", PyvtkReflectionFilter_SetPlaneToYMin, METH_VARARGS,
   (char*)"V.SetPlaneToYMin()\nC++: void SetPlaneToYMin()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToZMin", PyvtkReflectionFilter_SetPlaneToZMin, METH_VARARGS,
   (char*)"V.SetPlaneToZMin()\nC++: void SetPlaneToZMin()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToXMax", PyvtkReflectionFilter_SetPlaneToXMax, METH_VARARGS,
   (char*)"V.SetPlaneToXMax()\nC++: void SetPlaneToXMax()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToYMax", PyvtkReflectionFilter_SetPlaneToYMax, METH_VARARGS,
   (char*)"V.SetPlaneToYMax()\nC++: void SetPlaneToYMax()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToZMax", PyvtkReflectionFilter_SetPlaneToZMax, METH_VARARGS,
   (char*)"V.SetPlaneToZMax()\nC++: void SetPlaneToZMax()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetCenter", PyvtkReflectionFilter_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float)\nC++: void SetCenter(double a)\n\nIf the reflection plane is set to X, Y or Z, this variable is use\nto set the position of the plane.\n"},
  {(char*)"GetCenter", PyvtkReflectionFilter_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> float\nC++: double GetCenter()\n\nIf the reflection plane is set to X, Y or Z, this variable is use\nto set the position of the plane.\n"},
  {(char*)"SetCopyInput", PyvtkReflectionFilter_SetCopyInput, METH_VARARGS,
   (char*)"V.SetCopyInput(int)\nC++: void SetCopyInput(int a)\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the reflection.\n"},
  {(char*)"GetCopyInput", PyvtkReflectionFilter_GetCopyInput, METH_VARARGS,
   (char*)"V.GetCopyInput() -> int\nC++: int GetCopyInput()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the reflection.\n"},
  {(char*)"CopyInputOn", PyvtkReflectionFilter_CopyInputOn, METH_VARARGS,
   (char*)"V.CopyInputOn()\nC++: void CopyInputOn()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the reflection.\n"},
  {(char*)"CopyInputOff", PyvtkReflectionFilter_CopyInputOff, METH_VARARGS,
   (char*)"V.CopyInputOff()\nC++: void CopyInputOff()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the reflection.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkReflectionFilter_StaticNew()
{
  return vtkReflectionFilter::New();
}

PyObject *PyVTKClass_vtkReflectionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkReflectionFilter_StaticNew,
    PyvtkReflectionFilter_Methods,
    "vtkReflectionFilter", modulename,
    NULL, NULL,
    PyvtkReflectionFilter_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkReflectionFilter_ReflectionPlane_Type);
    PyvtkReflectionFilter_ReflectionPlane_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkReflectionFilter_ReflectionPlane_Type;
    if (o && PyDict_SetItemString(d, (char *)"ReflectionPlane", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 9; c++)
      {
      typedef vtkReflectionFilter::ReflectionPlane cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[9] = {
          { "USE_X_MIN", vtkReflectionFilter::USE_X_MIN },
          { "USE_Y_MIN", vtkReflectionFilter::USE_Y_MIN },
          { "USE_Z_MIN", vtkReflectionFilter::USE_Z_MIN },
          { "USE_X_MAX", vtkReflectionFilter::USE_X_MAX },
          { "USE_Y_MAX", vtkReflectionFilter::USE_Y_MAX },
          { "USE_Z_MAX", vtkReflectionFilter::USE_Z_MAX },
          { "USE_X", vtkReflectionFilter::USE_X },
          { "USE_Y", vtkReflectionFilter::USE_Y },
          { "USE_Z", vtkReflectionFilter::USE_Z },
        };

      o = PyvtkReflectionFilter_ReflectionPlane_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkReflectionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkReflectionFilter - reflects a data set across a plane\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "The vtkReflectionFilter reflects a data set across one of the planes\nformed by the data set's bounding box. Since it converts data sets\ninto unstructured grids, it is not effeicient for structured data\nsets.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkReflectionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkReflectionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkReflectionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

