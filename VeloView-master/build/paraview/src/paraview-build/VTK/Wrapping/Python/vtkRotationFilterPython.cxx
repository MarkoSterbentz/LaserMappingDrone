// python wrapper for vtkRotationFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRotationFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRotationFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRotationFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkRotationFilter_Doc();

#ifndef DECLARED_PyvtkRotationFilter_RotationAxis_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkRotationFilter_RotationAxis_Type;
#define DECLARED_PyvtkRotationFilter_RotationAxis_Type
#endif

PyTypeObject PyvtkRotationFilter_RotationAxis_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"RotationAxis", // tp_name
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

PyObject *PyvtkRotationFilter_RotationAxis_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkRotationFilter_RotationAxis_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkRotationFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRotationFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRotationFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRotationFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRotationFilter::NewInstance());

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
PyvtkRotationFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRotationFilter *tempr = vtkRotationFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxis(temp0);
      }
    else
      {
      op->vtkRotationFilter::SetAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisMinValue() :
      op->vtkRotationFilter::GetAxisMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisMaxValue() :
      op->vtkRotationFilter::GetAxisMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkRotationFilter::GetAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAxisToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisToX();
      }
    else
      {
      op->vtkRotationFilter::SetAxisToX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAxisToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisToY();
      }
    else
      {
      op->vtkRotationFilter::SetAxisToY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAxisToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisToZ();
      }
    else
      {
      op->vtkRotationFilter::SetAxisToZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAngle(temp0);
      }
    else
      {
      op->vtkRotationFilter::SetAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkRotationFilter::GetAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRotationFilter::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRotationFilter_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkRotationFilter::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRotationFilter_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkRotationFilter_SetCenter_s1(self, args);
    case 1:
      return PyvtkRotationFilter_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkRotationFilter_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkRotationFilter::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetNumberOfCopies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCopies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfCopies(temp0);
      }
    else
      {
      op->vtkRotationFilter::SetNumberOfCopies(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetNumberOfCopies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCopies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCopies() :
      op->vtkRotationFilter::GetNumberOfCopies());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

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
      op->vtkRotationFilter::SetCopyInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCopyInput() :
      op->vtkRotationFilter::GetCopyInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_CopyInputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyInputOn();
      }
    else
      {
      op->vtkRotationFilter::CopyInputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_CopyInputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyInputOff();
      }
    else
      {
      op->vtkRotationFilter::CopyInputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRotationFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkRotationFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRotationFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRotationFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRotationFilter\nC++: vtkRotationFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRotationFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRotationFilter\nC++: vtkRotationFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAxis", PyvtkRotationFilter_SetAxis, METH_VARARGS,
   (char*)"V.SetAxis(int)\nC++: void SetAxis(int)\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"GetAxisMinValue", PyvtkRotationFilter_GetAxisMinValue, METH_VARARGS,
   (char*)"V.GetAxisMinValue() -> int\nC++: int GetAxisMinValue()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"GetAxisMaxValue", PyvtkRotationFilter_GetAxisMaxValue, METH_VARARGS,
   (char*)"V.GetAxisMaxValue() -> int\nC++: int GetAxisMaxValue()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"GetAxis", PyvtkRotationFilter_GetAxis, METH_VARARGS,
   (char*)"V.GetAxis() -> int\nC++: int GetAxis()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"SetAxisToX", PyvtkRotationFilter_SetAxisToX, METH_VARARGS,
   (char*)"V.SetAxisToX()\nC++: void SetAxisToX()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"SetAxisToY", PyvtkRotationFilter_SetAxisToY, METH_VARARGS,
   (char*)"V.SetAxisToY()\nC++: void SetAxisToY()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"SetAxisToZ", PyvtkRotationFilter_SetAxisToZ, METH_VARARGS,
   (char*)"V.SetAxisToZ()\nC++: void SetAxisToZ()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"SetAngle", PyvtkRotationFilter_SetAngle, METH_VARARGS,
   (char*)"V.SetAngle(float)\nC++: void SetAngle(double a)\n\nSet the rotation angle to use.\n"},
  {(char*)"GetAngle", PyvtkRotationFilter_GetAngle, METH_VARARGS,
   (char*)"V.GetAngle() -> float\nC++: double GetAngle()\n\nSet the rotation angle to use.\n"},
  {(char*)"SetCenter", PyvtkRotationFilter_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkRotationFilter_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {(char*)"SetNumberOfCopies", PyvtkRotationFilter_SetNumberOfCopies, METH_VARARGS,
   (char*)"V.SetNumberOfCopies(int)\nC++: void SetNumberOfCopies(int a)\n\nSet the number of copies to create. The source will be rotated N\ntimes and a new polydata copy of the original created at each\nangular position All copies will be appended to form a single\noutput\n"},
  {(char*)"GetNumberOfCopies", PyvtkRotationFilter_GetNumberOfCopies, METH_VARARGS,
   (char*)"V.GetNumberOfCopies() -> int\nC++: int GetNumberOfCopies()\n\nSet the number of copies to create. The source will be rotated N\ntimes and a new polydata copy of the original created at each\nangular position All copies will be appended to form a single\noutput\n"},
  {(char*)"SetCopyInput", PyvtkRotationFilter_SetCopyInput, METH_VARARGS,
   (char*)"V.SetCopyInput(int)\nC++: void SetCopyInput(int a)\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the rotation.\n"},
  {(char*)"GetCopyInput", PyvtkRotationFilter_GetCopyInput, METH_VARARGS,
   (char*)"V.GetCopyInput() -> int\nC++: int GetCopyInput()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the rotation.\n"},
  {(char*)"CopyInputOn", PyvtkRotationFilter_CopyInputOn, METH_VARARGS,
   (char*)"V.CopyInputOn()\nC++: void CopyInputOn()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the rotation.\n"},
  {(char*)"CopyInputOff", PyvtkRotationFilter_CopyInputOff, METH_VARARGS,
   (char*)"V.CopyInputOff()\nC++: void CopyInputOff()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the rotation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRotationFilter_StaticNew()
{
  return vtkRotationFilter::New();
}

PyObject *PyVTKClass_vtkRotationFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRotationFilter_StaticNew,
    PyvtkRotationFilter_Methods,
    "vtkRotationFilter", modulename,
    NULL, NULL,
    PyvtkRotationFilter_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkRotationFilter_RotationAxis_Type);
    PyvtkRotationFilter_RotationAxis_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkRotationFilter_RotationAxis_Type;
    if (o && PyDict_SetItemString(d, (char *)"RotationAxis", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkRotationFilter::RotationAxis cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "USE_X", vtkRotationFilter::USE_X },
          { "USE_Y", vtkRotationFilter::USE_Y },
          { "USE_Z", vtkRotationFilter::USE_Z },
        };

      o = PyvtkRotationFilter_RotationAxis_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkRotationFilter_Doc()
{
  static const char *docstring[] = {
    "vtkRotationFilter - Duplicates a data set by rotation about an axis\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "The vtkRotationFilter duplicates a data set by rotation about one of\nthe 3 axis of the dataset's reference. Since it converts data sets\ninto unstructured grids, it is not efficient for structured data\nsets.\n\nThanks:\n\nTheophane Foggia of The Swiss National Supercomputing Centre (CSCS)\nfor creating and contributing this filter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRotationFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRotationFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRotationFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

