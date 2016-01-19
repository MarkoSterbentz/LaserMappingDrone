// python wrapper for vtkHybridProbeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHybridProbeFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHybridProbeFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHybridProbeFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkHybridProbeFilter_Doc();

#ifndef DECLARED_PyvtkHybridProbeFilter_ModeType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkHybridProbeFilter_ModeType_Type;
#define DECLARED_PyvtkHybridProbeFilter_ModeType_Type
#endif

PyTypeObject PyvtkHybridProbeFilter_ModeType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ModeType", // tp_name
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

PyObject *PyvtkHybridProbeFilter_ModeType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkHybridProbeFilter_ModeType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkHybridProbeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHybridProbeFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHybridProbeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHybridProbeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHybridProbeFilter::NewInstance());

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
PyvtkHybridProbeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHybridProbeFilter *tempr = vtkHybridProbeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMode(temp0);
      }
    else
      {
      op->vtkHybridProbeFilter::SetMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_GetModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetModeMinValue() :
      op->vtkHybridProbeFilter::GetModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_GetModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetModeMaxValue() :
      op->vtkHybridProbeFilter::GetModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkHybridProbeFilter::GetMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_SetModeToInterpolateAtLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToInterpolateAtLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetModeToInterpolateAtLocation();
      }
    else
      {
      op->vtkHybridProbeFilter::SetModeToInterpolateAtLocation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_SetModeToExtractCellContainingLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToExtractCellContainingLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetModeToExtractCellContainingLocation();
      }
    else
      {
      op->vtkHybridProbeFilter::SetModeToExtractCellContainingLocation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_SetLocation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

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
      op->SetLocation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHybridProbeFilter::SetLocation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHybridProbeFilter_SetLocation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetLocation(temp0);
      }
    else
      {
      op->vtkHybridProbeFilter::SetLocation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHybridProbeFilter_SetLocation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkHybridProbeFilter_SetLocation_s1(self, args);
    case 1:
      return PyvtkHybridProbeFilter_SetLocation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLocation");
  return NULL;
}



static PyObject *
PyvtkHybridProbeFilter_GetLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetLocation() :
      op->vtkHybridProbeFilter::GetLocation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkHybridProbeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkHybridProbeFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHybridProbeFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHybridProbeFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHybridProbeFilter\nC++: vtkHybridProbeFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHybridProbeFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHybridProbeFilter\nC++: vtkHybridProbeFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMode", PyvtkHybridProbeFilter_SetMode, METH_VARARGS,
   (char*)"V.SetMode(int)\nC++: void SetMode(int)\n\n"},
  {(char*)"GetModeMinValue", PyvtkHybridProbeFilter_GetModeMinValue, METH_VARARGS,
   (char*)"V.GetModeMinValue() -> int\nC++: int GetModeMinValue()\n\n"},
  {(char*)"GetModeMaxValue", PyvtkHybridProbeFilter_GetModeMaxValue, METH_VARARGS,
   (char*)"V.GetModeMaxValue() -> int\nC++: int GetModeMaxValue()\n\n"},
  {(char*)"GetMode", PyvtkHybridProbeFilter_GetMode, METH_VARARGS,
   (char*)"V.GetMode() -> int\nC++: int GetMode()\n\n"},
  {(char*)"SetModeToInterpolateAtLocation", PyvtkHybridProbeFilter_SetModeToInterpolateAtLocation, METH_VARARGS,
   (char*)"V.SetModeToInterpolateAtLocation()\nC++: void SetModeToInterpolateAtLocation()\n\n"},
  {(char*)"SetModeToExtractCellContainingLocation", PyvtkHybridProbeFilter_SetModeToExtractCellContainingLocation, METH_VARARGS,
   (char*)"V.SetModeToExtractCellContainingLocation()\nC++: void SetModeToExtractCellContainingLocation()\n\n"},
  {(char*)"SetLocation", PyvtkHybridProbeFilter_SetLocation, METH_VARARGS,
   (char*)"V.SetLocation(float, float, float)\nC++: void SetLocation(double, double, double)\nV.SetLocation((float, float, float))\nC++: void SetLocation(double a[3])\n\n"},
  {(char*)"GetLocation", PyvtkHybridProbeFilter_GetLocation, METH_VARARGS,
   (char*)"V.GetLocation() -> (float, float, float)\nC++: double *GetLocation()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHybridProbeFilter_StaticNew()
{
  return vtkHybridProbeFilter::New();
}

PyObject *PyVTKClass_vtkHybridProbeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHybridProbeFilter_StaticNew,
    PyvtkHybridProbeFilter_Methods,
    "vtkHybridProbeFilter", modulename,
    NULL, NULL,
    PyvtkHybridProbeFilter_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkHybridProbeFilter_ModeType_Type);
    PyvtkHybridProbeFilter_ModeType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkHybridProbeFilter_ModeType_Type;
    if (o && PyDict_SetItemString(d, (char *)"ModeType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkHybridProbeFilter::ModeType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "INTERPOLATE_AT_LOCATION", vtkHybridProbeFilter::INTERPOLATE_AT_LOCATION },
          { "EXTRACT_CELL_CONTAINING_LOCATION", vtkHybridProbeFilter::EXTRACT_CELL_CONTAINING_LOCATION },
        };

      o = PyvtkHybridProbeFilter_ModeType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkHybridProbeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkHybridProbeFilter\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkHybridProbeFilter is a combination of vtkExtractSelection at a\nspecific location and vtkProbeFilter. Since the 'Selection Inspector'\nin ParaView was removed, we were missing ability to extract cells\nbased on location. This filter fills that gap until we get the change\nto extend \"Find Data\" mechanism to support location based selections.\n\nThis filter also \"probes\" just as a convenience since the",
    " user may\nnot know exactly what he/she is looking for -- interpolate at point\nlocation (probe) or extract cell containing the point (extract\nselection).\n\nInternally this filter uses vtkPProbeFilter and vtkExtractSelection.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHybridProbeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHybridProbeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHybridProbeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

