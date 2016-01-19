// python wrapper for vtkImplicitBoolean
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImplicitBoolean.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImplicitBoolean(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImplicitBooleanNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImplicitFunctionNew
extern "C" { PyObject *PyVTKClass_vtkImplicitFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkImplicitFunctionNew
#endif

static const char **PyvtkImplicitBoolean_Doc();

#ifndef DECLARED_PyvtkImplicitBoolean_OperationType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkImplicitBoolean_OperationType_Type;
#define DECLARED_PyvtkImplicitBoolean_OperationType_Type
#endif

PyTypeObject PyvtkImplicitBoolean_OperationType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"OperationType", // tp_name
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

PyObject *PyvtkImplicitBoolean_OperationType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkImplicitBoolean_OperationType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkImplicitBoolean_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImplicitBoolean::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitBoolean::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitBoolean *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitBoolean::NewInstance());

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
PyvtkImplicitBoolean_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImplicitBoolean *tempr = vtkImplicitBoolean::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0) :
      op->vtkImplicitBoolean::EvaluateFunction(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitBoolean_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0, temp1, temp2) :
      op->vtkImplicitBoolean::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitBoolean_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImplicitBoolean_EvaluateFunction_s1(self, args);
    case 3:
      return PyvtkImplicitBoolean_EvaluateFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return NULL;
}



static PyObject *
PyvtkImplicitBoolean_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->EvaluateGradient(temp0, temp1);
      }
    else
      {
      op->vtkImplicitBoolean::EvaluateGradient(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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
PyvtkImplicitBoolean_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImplicitBoolean::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_AddFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->AddFunction(temp0);
      }
    else
      {
      op->vtkImplicitBoolean::AddFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_RemoveFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->RemoveFunction(temp0);
      }
    else
      {
      op->vtkImplicitBoolean::RemoveFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_GetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitFunctionCollection *tempr = (ap.IsBound() ?
      op->GetFunction() :
      op->vtkImplicitBoolean::GetFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_SetOperationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOperationType(temp0);
      }
    else
      {
      op->vtkImplicitBoolean::SetOperationType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_GetOperationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOperationTypeMinValue() :
      op->vtkImplicitBoolean::GetOperationTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_GetOperationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOperationTypeMaxValue() :
      op->vtkImplicitBoolean::GetOperationTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_GetOperationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOperationType() :
      op->vtkImplicitBoolean::GetOperationType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_SetOperationTypeToUnion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationTypeToUnion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationTypeToUnion();
      }
    else
      {
      op->vtkImplicitBoolean::SetOperationTypeToUnion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_SetOperationTypeToIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationTypeToIntersection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationTypeToIntersection();
      }
    else
      {
      op->vtkImplicitBoolean::SetOperationTypeToIntersection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_SetOperationTypeToDifference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationTypeToDifference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationTypeToDifference();
      }
    else
      {
      op->vtkImplicitBoolean::SetOperationTypeToDifference();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_SetOperationTypeToUnionOfMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationTypeToUnionOfMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationTypeToUnionOfMagnitudes();
      }
    else
      {
      op->vtkImplicitBoolean::SetOperationTypeToUnionOfMagnitudes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_GetOperationTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetOperationTypeAsString() :
      op->vtkImplicitBoolean::GetOperationTypeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitBoolean_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitBoolean_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImplicitBoolean_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImplicitBoolean_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImplicitBoolean\nC++: vtkImplicitBoolean *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImplicitBoolean_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitBoolean\nC++: vtkImplicitBoolean *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EvaluateFunction", PyvtkImplicitBoolean_EvaluateFunction, METH_VARARGS,
   (char*)"V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3])\nV.EvaluateFunction(float, float, float) -> float\nC++: double EvaluateFunction(double x, double y, double z)\n\nEvaluate boolean combinations of implicit function using current\noperator.\n"},
  {(char*)"EvaluateGradient", PyvtkImplicitBoolean_EvaluateGradient, METH_VARARGS,
   (char*)"V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double g[3])\n\nEvaluate gradient of boolean combination.\n"},
  {(char*)"GetMTime", PyvtkImplicitBoolean_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride modified time retrieval because of object dependencies.\n"},
  {(char*)"AddFunction", PyvtkImplicitBoolean_AddFunction, METH_VARARGS,
   (char*)"V.AddFunction(vtkImplicitFunction)\nC++: void AddFunction(vtkImplicitFunction *in)\n\nAdd another implicit function to the list of functions.\n"},
  {(char*)"RemoveFunction", PyvtkImplicitBoolean_RemoveFunction, METH_VARARGS,
   (char*)"V.RemoveFunction(vtkImplicitFunction)\nC++: void RemoveFunction(vtkImplicitFunction *in)\n\nRemove a function from the list of implicit functions to boolean.\n"},
  {(char*)"GetFunction", PyvtkImplicitBoolean_GetFunction, METH_VARARGS,
   (char*)"V.GetFunction() -> vtkImplicitFunctionCollection\nC++: vtkImplicitFunctionCollection *GetFunction()\n\nReturn the collection of implicit functions.\n"},
  {(char*)"SetOperationType", PyvtkImplicitBoolean_SetOperationType, METH_VARARGS,
   (char*)"V.SetOperationType(int)\nC++: void SetOperationType(int)\n\nSpecify the type of boolean operation.\n"},
  {(char*)"GetOperationTypeMinValue", PyvtkImplicitBoolean_GetOperationTypeMinValue, METH_VARARGS,
   (char*)"V.GetOperationTypeMinValue() -> int\nC++: int GetOperationTypeMinValue()\n\nSpecify the type of boolean operation.\n"},
  {(char*)"GetOperationTypeMaxValue", PyvtkImplicitBoolean_GetOperationTypeMaxValue, METH_VARARGS,
   (char*)"V.GetOperationTypeMaxValue() -> int\nC++: int GetOperationTypeMaxValue()\n\nSpecify the type of boolean operation.\n"},
  {(char*)"GetOperationType", PyvtkImplicitBoolean_GetOperationType, METH_VARARGS,
   (char*)"V.GetOperationType() -> int\nC++: int GetOperationType()\n\nSpecify the type of boolean operation.\n"},
  {(char*)"SetOperationTypeToUnion", PyvtkImplicitBoolean_SetOperationTypeToUnion, METH_VARARGS,
   (char*)"V.SetOperationTypeToUnion()\nC++: void SetOperationTypeToUnion()\n\nSpecify the type of boolean operation.\n"},
  {(char*)"SetOperationTypeToIntersection", PyvtkImplicitBoolean_SetOperationTypeToIntersection, METH_VARARGS,
   (char*)"V.SetOperationTypeToIntersection()\nC++: void SetOperationTypeToIntersection()\n\nSpecify the type of boolean operation.\n"},
  {(char*)"SetOperationTypeToDifference", PyvtkImplicitBoolean_SetOperationTypeToDifference, METH_VARARGS,
   (char*)"V.SetOperationTypeToDifference()\nC++: void SetOperationTypeToDifference()\n\nSpecify the type of boolean operation.\n"},
  {(char*)"SetOperationTypeToUnionOfMagnitudes", PyvtkImplicitBoolean_SetOperationTypeToUnionOfMagnitudes, METH_VARARGS,
   (char*)"V.SetOperationTypeToUnionOfMagnitudes()\nC++: void SetOperationTypeToUnionOfMagnitudes()\n\nSpecify the type of boolean operation.\n"},
  {(char*)"GetOperationTypeAsString", PyvtkImplicitBoolean_GetOperationTypeAsString, METH_VARARGS,
   (char*)"V.GetOperationTypeAsString() -> string\nC++: const char *GetOperationTypeAsString()\n\nSpecify the type of boolean operation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitBoolean_StaticNew()
{
  return vtkImplicitBoolean::New();
}

PyObject *PyVTKClass_vtkImplicitBooleanNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitBoolean_StaticNew,
    PyvtkImplicitBoolean_Methods,
    "vtkImplicitBoolean", modulename,
    NULL, NULL,
    PyvtkImplicitBoolean_Doc(),
    PyVTKClass_vtkImplicitFunctionNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkImplicitBoolean_OperationType_Type);
    PyvtkImplicitBoolean_OperationType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkImplicitBoolean_OperationType_Type;
    if (o && PyDict_SetItemString(d, (char *)"OperationType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 4; c++)
      {
      static const struct { const char *name; int value; }
        constants[4] = {
          { "VTK_UNION", vtkImplicitBoolean::VTK_UNION },
          { "VTK_INTERSECTION", vtkImplicitBoolean::VTK_INTERSECTION },
          { "VTK_DIFFERENCE", vtkImplicitBoolean::VTK_DIFFERENCE },
          { "VTK_UNION_OF_MAGNITUDES", vtkImplicitBoolean::VTK_UNION_OF_MAGNITUDES },
        };

      o = PyvtkImplicitBoolean_OperationType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkImplicitBoolean_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitBoolean - implicit function consisting of boolean\ncombinations of implicit functions\n\n",
    "Superclass: vtkImplicitFunction\n\n",
    "vtkImplicitBoolean is an implicit function consisting of boolean\ncombinations of implicit functions. The class has a list of functions\n(FunctionList) that are combined according to a specified operator\n(VTK_UNION or VTK_INTERSECTION or VTK_DIFFERENCE). You can use nested\ncombinations of vtkImplicitFunction's (and/or vtkImplicitBoolean) to\ncreate elaborate implicit functions.  vtkImplicitBoolean is",
    " a\nconcrete implementation of vtkImplicitFunction.\n\nThe operators work as follows. The VTK_UNION operator takes the\nminimum value of all implicit functions. The VTK_INTERSECTION\noperator takes the maximum value of all implicit functions. The\nVTK_DIFFERENCE operator subtracts the 2nd through last implicit\nfunctions from the first. The VTK_UNION_OF_MAGNITUDES takes the\nminimum absolute value of the ",
    "implicit functions.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitBoolean(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitBooleanNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitBoolean", o) != 0)
    {
    Py_DECREF(o);
    }

}

