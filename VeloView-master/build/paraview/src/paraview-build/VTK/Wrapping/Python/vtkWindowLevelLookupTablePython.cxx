// python wrapper for vtkWindowLevelLookupTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkWindowLevelLookupTable.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWindowLevelLookupTable(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWindowLevelLookupTableNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLookupTableNew
extern "C" { PyObject *PyVTKClass_vtkLookupTableNew(const char *); }
#define DECLARED_PyVTKClass_vtkLookupTableNew
#endif

static const char **PyvtkWindowLevelLookupTable_Doc();


static PyObject *
PyvtkWindowLevelLookupTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWindowLevelLookupTable::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWindowLevelLookupTable::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWindowLevelLookupTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWindowLevelLookupTable::NewInstance());

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
PyvtkWindowLevelLookupTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWindowLevelLookupTable *tempr = vtkWindowLevelLookupTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_Build(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Build();
      }
    else
      {
      op->vtkWindowLevelLookupTable::Build();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWindow(temp0);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetWindow() :
      op->vtkWindowLevelLookupTable::GetWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevel(temp0);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkWindowLevelLookupTable::GetLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetInverseVideo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverseVideo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInverseVideo(temp0);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetInverseVideo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_GetInverseVideo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseVideo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInverseVideo() :
      op->vtkWindowLevelLookupTable::GetInverseVideo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_InverseVideoOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseVideoOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InverseVideoOn();
      }
    else
      {
      op->vtkWindowLevelLookupTable::InverseVideoOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_InverseVideoOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseVideoOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InverseVideoOff();
      }
    else
      {
      op->vtkWindowLevelLookupTable::InverseVideoOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetMinimumTableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetMinimumTableValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetMinimumTableValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindowLevelLookupTable_SetMinimumTableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumTableValue(temp0);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetMinimumTableValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindowLevelLookupTable_SetMinimumTableValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkWindowLevelLookupTable_SetMinimumTableValue_s1(self, args);
    case 1:
      return PyvtkWindowLevelLookupTable_SetMinimumTableValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMinimumTableValue");
  return NULL;
}



static PyObject *
PyvtkWindowLevelLookupTable_GetMinimumTableValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetMinimumTableValue() :
      op->vtkWindowLevelLookupTable::GetMinimumTableValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetMaximumTableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetMaximumTableValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetMaximumTableValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindowLevelLookupTable_SetMaximumTableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumTableValue(temp0);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetMaximumTableValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindowLevelLookupTable_SetMaximumTableValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkWindowLevelLookupTable_SetMaximumTableValue_s1(self, args);
    case 1:
      return PyvtkWindowLevelLookupTable_SetMaximumTableValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaximumTableValue");
  return NULL;
}



static PyObject *
PyvtkWindowLevelLookupTable_GetMaximumTableValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetMaximumTableValue() :
      op->vtkWindowLevelLookupTable::GetMaximumTableValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkWindowLevelLookupTable_Methods[] = {
  {(char*)"GetClassName", PyvtkWindowLevelLookupTable_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWindowLevelLookupTable_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWindowLevelLookupTable_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWindowLevelLookupTable\nC++: vtkWindowLevelLookupTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWindowLevelLookupTable_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWindowLevelLookupTable\nC++: vtkWindowLevelLookupTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Build", PyvtkWindowLevelLookupTable_Build, METH_VARARGS,
   (char*)"V.Build()\nC++: void Build()\n\nGenerate lookup table as a linear ramp between MinimumTableValue\nand MaximumTableValue.\n"},
  {(char*)"SetWindow", PyvtkWindowLevelLookupTable_SetWindow, METH_VARARGS,
   (char*)"V.SetWindow(float)\nC++: void SetWindow(double window)\n\nSet the window for the lookup table.  The window is the\ndifference between TableRange[0] and TableRange[1].\n"},
  {(char*)"GetWindow", PyvtkWindowLevelLookupTable_GetWindow, METH_VARARGS,
   (char*)"V.GetWindow() -> float\nC++: double GetWindow()\n\nSet the window for the lookup table.  The window is the\ndifference between TableRange[0] and TableRange[1].\n"},
  {(char*)"SetLevel", PyvtkWindowLevelLookupTable_SetLevel, METH_VARARGS,
   (char*)"V.SetLevel(float)\nC++: void SetLevel(double level)\n\nSet the Level for the lookup table.  The level is the average of\nTableRange[0] and TableRange[1].\n"},
  {(char*)"GetLevel", PyvtkWindowLevelLookupTable_GetLevel, METH_VARARGS,
   (char*)"V.GetLevel() -> float\nC++: double GetLevel()\n\nSet the Level for the lookup table.  The level is the average of\nTableRange[0] and TableRange[1].\n"},
  {(char*)"SetInverseVideo", PyvtkWindowLevelLookupTable_SetInverseVideo, METH_VARARGS,
   (char*)"V.SetInverseVideo(int)\nC++: void SetInverseVideo(int iv)\n\nSet inverse video on or off.  You can achieve the same effect by\nswitching the MinimumTableValue and the MaximumTableValue.\n"},
  {(char*)"GetInverseVideo", PyvtkWindowLevelLookupTable_GetInverseVideo, METH_VARARGS,
   (char*)"V.GetInverseVideo() -> int\nC++: int GetInverseVideo()\n\nSet inverse video on or off.  You can achieve the same effect by\nswitching the MinimumTableValue and the MaximumTableValue.\n"},
  {(char*)"InverseVideoOn", PyvtkWindowLevelLookupTable_InverseVideoOn, METH_VARARGS,
   (char*)"V.InverseVideoOn()\nC++: void InverseVideoOn()\n\nSet inverse video on or off.  You can achieve the same effect by\nswitching the MinimumTableValue and the MaximumTableValue.\n"},
  {(char*)"InverseVideoOff", PyvtkWindowLevelLookupTable_InverseVideoOff, METH_VARARGS,
   (char*)"V.InverseVideoOff()\nC++: void InverseVideoOff()\n\nSet inverse video on or off.  You can achieve the same effect by\nswitching the MinimumTableValue and the MaximumTableValue.\n"},
  {(char*)"SetMinimumTableValue", PyvtkWindowLevelLookupTable_SetMinimumTableValue, METH_VARARGS,
   (char*)"V.SetMinimumTableValue(float, float, float, float)\nC++: void SetMinimumTableValue(double, double, double, double)\nV.SetMinimumTableValue((float, float, float, float))\nC++: void SetMinimumTableValue(double a[4])\n\n"},
  {(char*)"GetMinimumTableValue", PyvtkWindowLevelLookupTable_GetMinimumTableValue, METH_VARARGS,
   (char*)"V.GetMinimumTableValue() -> (float, float, float, float)\nC++: double *GetMinimumTableValue()\n\n"},
  {(char*)"SetMaximumTableValue", PyvtkWindowLevelLookupTable_SetMaximumTableValue, METH_VARARGS,
   (char*)"V.SetMaximumTableValue(float, float, float, float)\nC++: void SetMaximumTableValue(double, double, double, double)\nV.SetMaximumTableValue((float, float, float, float))\nC++: void SetMaximumTableValue(double a[4])\n\n"},
  {(char*)"GetMaximumTableValue", PyvtkWindowLevelLookupTable_GetMaximumTableValue, METH_VARARGS,
   (char*)"V.GetMaximumTableValue() -> (float, float, float, float)\nC++: double *GetMaximumTableValue()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWindowLevelLookupTable_StaticNew()
{
  return vtkWindowLevelLookupTable::New();
}

PyObject *PyVTKClass_vtkWindowLevelLookupTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWindowLevelLookupTable_StaticNew,
    PyvtkWindowLevelLookupTable_Methods,
    "vtkWindowLevelLookupTable", modulename,
    NULL, NULL,
    PyvtkWindowLevelLookupTable_Doc(),
    PyVTKClass_vtkLookupTableNew(modulename));
  return cls;
}

const char **PyvtkWindowLevelLookupTable_Doc()
{
  static const char *docstring[] = {
    "vtkWindowLevelLookupTable - map scalar values into colors or colors\nto scalars; generate color table\n\n",
    "Superclass: vtkLookupTable\n\n",
    "vtkWindowLevelLookupTable is an object that is used by mapper objects\nto map scalar values into rgba (red-green-blue-alpha transparency)\ncolor specification, or rgba into scalar values. The color table can\nbe created by direct insertion of color values, or by specifying a\nwindow and level. Window / Level is used in medical imaging to\nspecify a linear greyscale ramp. The Level is the center of the ",
    "ramp.\n The Window is the width of the ramp.\n\nCaveats:\n\nvtkWindowLevelLookupTable is a reference counted object. Therefore,\nyou should always use operator \"new\" to construct new objects. This\nprocedure will avoid memory problems (see text).\n\nSee Also:\n\nvtkLogLookupTable\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWindowLevelLookupTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWindowLevelLookupTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWindowLevelLookupTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

