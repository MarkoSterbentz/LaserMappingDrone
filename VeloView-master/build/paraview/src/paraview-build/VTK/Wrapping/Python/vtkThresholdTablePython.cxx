// python wrapper for vtkThresholdTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVariant.h"
#include "vtkThresholdTable.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkThresholdTable(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkThresholdTableNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkThresholdTable_Doc();


static PyObject *
PyvtkThresholdTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkThresholdTable::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThresholdTable::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkThresholdTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThresholdTable::NewInstance());

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
PyvtkThresholdTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkThresholdTable *tempr = vtkThresholdTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

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
      op->vtkThresholdTable::SetMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_GetModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetModeMinValue() :
      op->vtkThresholdTable::GetModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_GetModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetModeMaxValue() :
      op->vtkThresholdTable::GetModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkThresholdTable::GetMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_SetMinValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetMinValue(*temp0);
      }
    else
      {
      op->vtkThresholdTable::SetMinValue(*temp0);
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
PyvtkThresholdTable_SetMinValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinValue(temp0);
      }
    else
      {
      op->vtkThresholdTable::SetMinValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkThresholdTable_SetMinValue_Methods[] = {
  {NULL, PyvtkThresholdTable_SetMinValue_s1, METH_VARARGS,
   (char*)"@O vtkVariant"},
  {NULL, PyvtkThresholdTable_SetMinValue_s2, METH_VARARGS,
   (char*)"@d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkThresholdTable_SetMinValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkThresholdTable_SetMinValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMinValue");
  return NULL;
}



static PyObject *
PyvtkThresholdTable_GetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetMinValue() :
      op->vtkThresholdTable::GetMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_SetMaxValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetMaxValue(*temp0);
      }
    else
      {
      op->vtkThresholdTable::SetMaxValue(*temp0);
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
PyvtkThresholdTable_SetMaxValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxValue(temp0);
      }
    else
      {
      op->vtkThresholdTable::SetMaxValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkThresholdTable_SetMaxValue_Methods[] = {
  {NULL, PyvtkThresholdTable_SetMaxValue_s1, METH_VARARGS,
   (char*)"@O vtkVariant"},
  {NULL, PyvtkThresholdTable_SetMaxValue_s2, METH_VARARGS,
   (char*)"@d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkThresholdTable_SetMaxValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkThresholdTable_SetMaxValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaxValue");
  return NULL;
}



static PyObject *
PyvtkThresholdTable_GetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetMaxValue() :
      op->vtkThresholdTable::GetMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_ThresholdBetween_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

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
      op->ThresholdBetween(*temp0, *temp1);
      }
    else
      {
      op->vtkThresholdTable::ThresholdBetween(*temp0, *temp1);
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
PyvtkThresholdTable_ThresholdBetween_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ThresholdBetween(temp0, temp1);
      }
    else
      {
      op->vtkThresholdTable::ThresholdBetween(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkThresholdTable_ThresholdBetween_Methods[] = {
  {NULL, PyvtkThresholdTable_ThresholdBetween_s1, METH_VARARGS,
   (char*)"@OO vtkVariant vtkVariant"},
  {NULL, PyvtkThresholdTable_ThresholdBetween_s2, METH_VARARGS,
   (char*)"@dd"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkThresholdTable_ThresholdBetween(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkThresholdTable_ThresholdBetween_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ThresholdBetween");
  return NULL;
}


static PyMethodDef PyvtkThresholdTable_Methods[] = {
  {(char*)"GetClassName", PyvtkThresholdTable_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkThresholdTable_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkThresholdTable_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkThresholdTable\nC++: vtkThresholdTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkThresholdTable_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkThresholdTable\nC++: vtkThresholdTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMode", PyvtkThresholdTable_SetMode, METH_VARARGS,
   (char*)"V.SetMode(int)\nC++: void SetMode(int)\n\nThe mode of the threshold filter.  Options are: ACCEPT_LESS_THAN\n(0) accepts rows with values < MaxValue; ACCEPT_GREATER_THAN (1)\naccepts rows with values > MinValue; ACCEPT_BETWEEN (2) accepts\nrows with values > MinValue and < MaxValue; ACCEPT_OUTSIDE (3)\naccepts rows with values < MinValue or > MaxValue.\n"},
  {(char*)"GetModeMinValue", PyvtkThresholdTable_GetModeMinValue, METH_VARARGS,
   (char*)"V.GetModeMinValue() -> int\nC++: int GetModeMinValue()\n\nThe mode of the threshold filter.  Options are: ACCEPT_LESS_THAN\n(0) accepts rows with values < MaxValue; ACCEPT_GREATER_THAN (1)\naccepts rows with values > MinValue; ACCEPT_BETWEEN (2) accepts\nrows with values > MinValue and < MaxValue; ACCEPT_OUTSIDE (3)\naccepts rows with values < MinValue or > MaxValue.\n"},
  {(char*)"GetModeMaxValue", PyvtkThresholdTable_GetModeMaxValue, METH_VARARGS,
   (char*)"V.GetModeMaxValue() -> int\nC++: int GetModeMaxValue()\n\nThe mode of the threshold filter.  Options are: ACCEPT_LESS_THAN\n(0) accepts rows with values < MaxValue; ACCEPT_GREATER_THAN (1)\naccepts rows with values > MinValue; ACCEPT_BETWEEN (2) accepts\nrows with values > MinValue and < MaxValue; ACCEPT_OUTSIDE (3)\naccepts rows with values < MinValue or > MaxValue.\n"},
  {(char*)"GetMode", PyvtkThresholdTable_GetMode, METH_VARARGS,
   (char*)"V.GetMode() -> int\nC++: int GetMode()\n\nThe mode of the threshold filter.  Options are: ACCEPT_LESS_THAN\n(0) accepts rows with values < MaxValue; ACCEPT_GREATER_THAN (1)\naccepts rows with values > MinValue; ACCEPT_BETWEEN (2) accepts\nrows with values > MinValue and < MaxValue; ACCEPT_OUTSIDE (3)\naccepts rows with values < MinValue or > MaxValue.\n"},
  {(char*)"SetMinValue", PyvtkThresholdTable_SetMinValue, METH_VARARGS,
   (char*)"V.SetMinValue(vtkVariant)\nC++: virtual void SetMinValue(vtkVariant v)\nV.SetMinValue(float)\nC++: void SetMinValue(double v)\n\nThe minimum value for the threshold. This may be any data type\nstored in a vtkVariant.\n"},
  {(char*)"GetMinValue", PyvtkThresholdTable_GetMinValue, METH_VARARGS,
   (char*)"V.GetMinValue() -> vtkVariant\nC++: virtual vtkVariant GetMinValue()\n\nThe minimum value for the threshold. This may be any data type\nstored in a vtkVariant.\n"},
  {(char*)"SetMaxValue", PyvtkThresholdTable_SetMaxValue, METH_VARARGS,
   (char*)"V.SetMaxValue(vtkVariant)\nC++: virtual void SetMaxValue(vtkVariant v)\nV.SetMaxValue(float)\nC++: void SetMaxValue(double v)\n\nThe maximum value for the threshold. This may be any data type\nstored in a vtkVariant.\n"},
  {(char*)"GetMaxValue", PyvtkThresholdTable_GetMaxValue, METH_VARARGS,
   (char*)"V.GetMaxValue() -> vtkVariant\nC++: virtual vtkVariant GetMaxValue()\n\nThe maximum value for the threshold. This may be any data type\nstored in a vtkVariant.\n"},
  {(char*)"ThresholdBetween", PyvtkThresholdTable_ThresholdBetween, METH_VARARGS,
   (char*)"V.ThresholdBetween(vtkVariant, vtkVariant)\nC++: void ThresholdBetween(vtkVariant lower, vtkVariant upper)\nV.ThresholdBetween(float, float)\nC++: void ThresholdBetween(double lower, double upper)\n\nCriterion is rows whose scalars are between lower and upper\nthresholds (inclusive of the end values).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkThresholdTable_StaticNew()
{
  return vtkThresholdTable::New();
}

PyObject *PyVTKClass_vtkThresholdTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkThresholdTable_StaticNew,
    PyvtkThresholdTable_Methods,
    "vtkThresholdTable", modulename,
    NULL, NULL,
    PyvtkThresholdTable_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 4; c++)
      {
      static const struct { const char *name; int value; }
        constants[4] = {
          { "ACCEPT_LESS_THAN", vtkThresholdTable::ACCEPT_LESS_THAN },
          { "ACCEPT_GREATER_THAN", vtkThresholdTable::ACCEPT_GREATER_THAN },
          { "ACCEPT_BETWEEN", vtkThresholdTable::ACCEPT_BETWEEN },
          { "ACCEPT_OUTSIDE", vtkThresholdTable::ACCEPT_OUTSIDE },
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

const char **PyvtkThresholdTable_Doc()
{
  static const char *docstring[] = {
    "vtkThresholdTable - Thresholds table rows.\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "vtkThresholdTable uses minimum and/or maximum values to threshold\ntable rows based on the values in a particular column. The column to\nthreshold is specified using SetInputArrayToProcess(0, ...).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkThresholdTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkThresholdTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkThresholdTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

