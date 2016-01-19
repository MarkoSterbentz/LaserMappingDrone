// python wrapper for vtkMapArrayValues
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVariant.h"
#include "vtkMapArrayValues.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMapArrayValues(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMapArrayValuesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkMapArrayValues_Doc();

#ifndef DECLARED_PyvtkMapArrayValues_FieldType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkMapArrayValues_FieldType_Type;
#define DECLARED_PyvtkMapArrayValues_FieldType_Type
#endif

PyTypeObject PyvtkMapArrayValues_FieldType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"FieldType", // tp_name
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

PyObject *PyvtkMapArrayValues_FieldType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkMapArrayValues_FieldType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkMapArrayValues_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMapArrayValues::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMapArrayValues::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMapArrayValues *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMapArrayValues::NewInstance());

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
PyvtkMapArrayValues_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMapArrayValues *tempr = vtkMapArrayValues::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldType(temp0);
      }
    else
      {
      op->vtkMapArrayValues::SetFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkMapArrayValues::GetFieldType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetPassArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassArray(temp0);
      }
    else
      {
      op->vtkMapArrayValues::SetPassArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetPassArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassArray() :
      op->vtkMapArrayValues::GetPassArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_PassArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassArrayOn();
      }
    else
      {
      op->vtkMapArrayValues::PassArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_PassArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassArrayOff();
      }
    else
      {
      op->vtkMapArrayValues::PassArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillValue(temp0);
      }
    else
      {
      op->vtkMapArrayValues::SetFillValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFillValue() :
      op->vtkMapArrayValues::GetFillValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetInputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayName(temp0);
      }
    else
      {
      op->vtkMapArrayValues::SetInputArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetInputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetInputArrayName() :
      op->vtkMapArrayValues::GetInputArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputArrayName(temp0);
      }
    else
      {
      op->vtkMapArrayValues::SetOutputArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetOutputArrayName() :
      op->vtkMapArrayValues::GetOutputArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetOutputArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputArrayType() :
      op->vtkMapArrayValues::GetOutputArrayType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetOutputArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputArrayType(temp0);
      }
    else
      {
      op->vtkMapArrayValues::SetOutputArrayType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_AddToMap_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->AddToMap(*temp0, *temp1);
      }
    else
      {
      op->vtkMapArrayValues::AddToMap(*temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkMapArrayValues_AddToMap_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddToMap(temp0, temp1);
      }
    else
      {
      op->vtkMapArrayValues::AddToMap(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMapArrayValues_AddToMap_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddToMap(temp0, temp1);
      }
    else
      {
      op->vtkMapArrayValues::AddToMap(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMapArrayValues_AddToMap_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddToMap(temp0, temp1);
      }
    else
      {
      op->vtkMapArrayValues::AddToMap(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMapArrayValues_AddToMap_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddToMap(temp0, temp1);
      }
    else
      {
      op->vtkMapArrayValues::AddToMap(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMapArrayValues_AddToMap_Methods[] = {
  {NULL, PyvtkMapArrayValues_AddToMap_s1, METH_VARARGS,
   (char*)"@OO vtkVariant vtkVariant"},
  {NULL, PyvtkMapArrayValues_AddToMap_s2, METH_VARARGS,
   (char*)"@ii"},
  {NULL, PyvtkMapArrayValues_AddToMap_s3, METH_VARARGS,
   (char*)"@iz"},
  {NULL, PyvtkMapArrayValues_AddToMap_s4, METH_VARARGS,
   (char*)"@zi"},
  {NULL, PyvtkMapArrayValues_AddToMap_s5, METH_VARARGS,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMapArrayValues_AddToMap(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMapArrayValues_AddToMap_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddToMap");
  return NULL;
}



static PyObject *
PyvtkMapArrayValues_ClearMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearMap();
      }
    else
      {
      op->vtkMapArrayValues::ClearMap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetMapSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMapSize() :
      op->vtkMapArrayValues::GetMapSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMapArrayValues_Methods[] = {
  {(char*)"GetClassName", PyvtkMapArrayValues_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMapArrayValues_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMapArrayValues_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMapArrayValues\nC++: vtkMapArrayValues *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMapArrayValues_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMapArrayValues\nC++: vtkMapArrayValues *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFieldType", PyvtkMapArrayValues_SetFieldType, METH_VARARGS,
   (char*)"V.SetFieldType(int)\nC++: void SetFieldType(int a)\n\nSet/Get where the data is located that is being mapped. See\nFieldType enumeration for possible values. Default is POINT_DATA.\n"},
  {(char*)"GetFieldType", PyvtkMapArrayValues_GetFieldType, METH_VARARGS,
   (char*)"V.GetFieldType() -> int\nC++: int GetFieldType()\n\nSet/Get where the data is located that is being mapped. See\nFieldType enumeration for possible values. Default is POINT_DATA.\n"},
  {(char*)"SetPassArray", PyvtkMapArrayValues_SetPassArray, METH_VARARGS,
   (char*)"V.SetPassArray(int)\nC++: void SetPassArray(int a)\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is off.\n"},
  {(char*)"GetPassArray", PyvtkMapArrayValues_GetPassArray, METH_VARARGS,
   (char*)"V.GetPassArray() -> int\nC++: int GetPassArray()\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is off.\n"},
  {(char*)"PassArrayOn", PyvtkMapArrayValues_PassArrayOn, METH_VARARGS,
   (char*)"V.PassArrayOn()\nC++: void PassArrayOn()\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is off.\n"},
  {(char*)"PassArrayOff", PyvtkMapArrayValues_PassArrayOff, METH_VARARGS,
   (char*)"V.PassArrayOff()\nC++: void PassArrayOff()\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is off.\n"},
  {(char*)"SetFillValue", PyvtkMapArrayValues_SetFillValue, METH_VARARGS,
   (char*)"V.SetFillValue(float)\nC++: void SetFillValue(double a)\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is -1.\n"},
  {(char*)"GetFillValue", PyvtkMapArrayValues_GetFillValue, METH_VARARGS,
   (char*)"V.GetFillValue() -> float\nC++: double GetFillValue()\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is -1.\n"},
  {(char*)"SetInputArrayName", PyvtkMapArrayValues_SetInputArrayName, METH_VARARGS,
   (char*)"V.SetInputArrayName(string)\nC++: void SetInputArrayName(char *)\n\nSet/Get the name of the input array. This must be set prior to\nexecution.\n"},
  {(char*)"GetInputArrayName", PyvtkMapArrayValues_GetInputArrayName, METH_VARARGS,
   (char*)"V.GetInputArrayName() -> string\nC++: char *GetInputArrayName()\n\nSet/Get the name of the input array. This must be set prior to\nexecution.\n"},
  {(char*)"SetOutputArrayName", PyvtkMapArrayValues_SetOutputArrayName, METH_VARARGS,
   (char*)"V.SetOutputArrayName(string)\nC++: void SetOutputArrayName(char *)\n\nSet/Get the name of the output array. Default is \"ArrayMap\".\n"},
  {(char*)"GetOutputArrayName", PyvtkMapArrayValues_GetOutputArrayName, METH_VARARGS,
   (char*)"V.GetOutputArrayName() -> string\nC++: char *GetOutputArrayName()\n\nSet/Get the name of the output array. Default is \"ArrayMap\".\n"},
  {(char*)"GetOutputArrayType", PyvtkMapArrayValues_GetOutputArrayType, METH_VARARGS,
   (char*)"V.GetOutputArrayType() -> int\nC++: int GetOutputArrayType()\n\nSet/Get the type of the output array. See vtkSetGet.h for\npossible values. Default is VTK_INT.\n"},
  {(char*)"SetOutputArrayType", PyvtkMapArrayValues_SetOutputArrayType, METH_VARARGS,
   (char*)"V.SetOutputArrayType(int)\nC++: void SetOutputArrayType(int a)\n\nSet/Get the type of the output array. See vtkSetGet.h for\npossible values. Default is VTK_INT.\n"},
  {(char*)"AddToMap", PyvtkMapArrayValues_AddToMap, METH_VARARGS,
   (char*)"V.AddToMap(vtkVariant, vtkVariant)\nC++: void AddToMap(vtkVariant from, vtkVariant to)\nV.AddToMap(int, int)\nC++: void AddToMap(int from, int to)\nV.AddToMap(int, string)\nC++: void AddToMap(int from, char *to)\nV.AddToMap(string, int)\nC++: void AddToMap(char *from, int to)\nV.AddToMap(string, string)\nC++: void AddToMap(char *from, char *to)\n\nAdd to the internal STL map. \"from\" should be a value in the\ninput array and \"to\" should be the new value it gets assigned in\nthe output array.\n"},
  {(char*)"ClearMap", PyvtkMapArrayValues_ClearMap, METH_VARARGS,
   (char*)"V.ClearMap()\nC++: void ClearMap()\n\nClear the internal map.\n"},
  {(char*)"GetMapSize", PyvtkMapArrayValues_GetMapSize, METH_VARARGS,
   (char*)"V.GetMapSize() -> int\nC++: int GetMapSize()\n\nGet the size of the internal map.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMapArrayValues_StaticNew()
{
  return vtkMapArrayValues::New();
}

PyObject *PyVTKClass_vtkMapArrayValuesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMapArrayValues_StaticNew,
    PyvtkMapArrayValues_Methods,
    "vtkMapArrayValues", modulename,
    NULL, NULL,
    PyvtkMapArrayValues_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkMapArrayValues_FieldType_Type);
    PyvtkMapArrayValues_FieldType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkMapArrayValues_FieldType_Type;
    if (o && PyDict_SetItemString(d, (char *)"FieldType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 6; c++)
      {
      static const struct { const char *name; int value; }
        constants[6] = {
          { "POINT_DATA", vtkMapArrayValues::POINT_DATA },
          { "CELL_DATA", vtkMapArrayValues::CELL_DATA },
          { "VERTEX_DATA", vtkMapArrayValues::VERTEX_DATA },
          { "EDGE_DATA", vtkMapArrayValues::EDGE_DATA },
          { "ROW_DATA", vtkMapArrayValues::ROW_DATA },
          { "NUM_ATTRIBUTE_LOCS", vtkMapArrayValues::NUM_ATTRIBUTE_LOCS },
        };

      o = PyvtkMapArrayValues_FieldType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkMapArrayValues_Doc()
{
  static const char *docstring[] = {
    "vtkMapArrayValues - Map values in an input array to different values\nin\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "vtkMapArrayValues allows you to associate certain values of an\nattribute array (on either a vertex, edge, point, or cell) with\ndifferent values in a newly created attribute array.\n\nvtkMapArrayValues manages an internal STL map of vtkVariants that can\nbe added to or cleared. When this filter executes, each \"key\" is\nsearched for in the input array and the indices of the output array\nat which there w",
    "ere matches the set to the mapped \"value\".\n\nYou can control whether the input array values are passed to the\noutput before the mapping occurs (using PassArray) or, if not, what\nvalue to set the unmapped indices to (using FillValue).\n\nOne application of this filter is to help address the dirty data\nproblem. For example, using vtkMapArrayValues you could associate the\nvertex values \"Foo, John\", \"Foo",
    ", John.\", and \"John Foo\" with a single\nentity.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMapArrayValues(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMapArrayValuesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMapArrayValues", o) != 0)
    {
    Py_DECREF(o);
    }

}

