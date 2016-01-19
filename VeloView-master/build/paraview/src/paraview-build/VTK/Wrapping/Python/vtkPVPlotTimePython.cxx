// python wrapper for vtkPVPlotTime
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVPlotTime.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVPlotTime(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVPlotTimeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPlotNew
extern "C" { PyObject *PyVTKClass_vtkPlotNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlotNew
#endif

static const char **PyvtkPVPlotTime_Doc();


static PyObject *
PyvtkPVPlotTime_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVPlotTime::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotTime_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPlotTime::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotTime_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVPlotTime *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPlotTime::NewInstance());

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
PyvtkPVPlotTime_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVPlotTime *tempr = vtkPVPlotTime::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotTime_SetTimeAxisMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeAxisMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeAxisMode(temp0);
      }
    else
      {
      op->vtkPVPlotTime::SetTimeAxisMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotTime_GetTimeAxisModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeAxisModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeAxisModeMinValue() :
      op->vtkPVPlotTime::GetTimeAxisModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotTime_GetTimeAxisModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeAxisModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeAxisModeMaxValue() :
      op->vtkPVPlotTime::GetTimeAxisModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotTime_GetTimeAxisMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeAxisMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeAxisMode() :
      op->vtkPVPlotTime::GetTimeAxisMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotTime_SetTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTime(temp0);
      }
    else
      {
      op->vtkPVPlotTime::SetTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotTime_GetTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTime() :
      op->vtkPVPlotTime::GetTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotTime_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPVPlotTime::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotTime_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotTime *op = static_cast<vtkPVPlotTime *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkPVPlotTime::GetBounds(temp0);
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

static PyMethodDef PyvtkPVPlotTime_Methods[] = {
  {(char*)"GetClassName", PyvtkPVPlotTime_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVPlotTime_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVPlotTime_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVPlotTime\nC++: vtkPVPlotTime *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVPlotTime_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVPlotTime\nC++: vtkPVPlotTime *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTimeAxisMode", PyvtkPVPlotTime_SetTimeAxisMode, METH_VARARGS,
   (char*)"V.SetTimeAxisMode(int)\nC++: void SetTimeAxisMode(int)\n\nSet the Time axis mode.\n"},
  {(char*)"GetTimeAxisModeMinValue", PyvtkPVPlotTime_GetTimeAxisModeMinValue, METH_VARARGS,
   (char*)"V.GetTimeAxisModeMinValue() -> int\nC++: int GetTimeAxisModeMinValue()\n\nSet the Time axis mode.\n"},
  {(char*)"GetTimeAxisModeMaxValue", PyvtkPVPlotTime_GetTimeAxisModeMaxValue, METH_VARARGS,
   (char*)"V.GetTimeAxisModeMaxValue() -> int\nC++: int GetTimeAxisModeMaxValue()\n\nSet the Time axis mode.\n"},
  {(char*)"GetTimeAxisMode", PyvtkPVPlotTime_GetTimeAxisMode, METH_VARARGS,
   (char*)"V.GetTimeAxisMode() -> int\nC++: int GetTimeAxisMode()\n\nSet the Time axis mode.\n"},
  {(char*)"SetTime", PyvtkPVPlotTime_SetTime, METH_VARARGS,
   (char*)"V.SetTime(float)\nC++: void SetTime(double a)\n\nSet time value.\n"},
  {(char*)"GetTime", PyvtkPVPlotTime_GetTime, METH_VARARGS,
   (char*)"V.GetTime() -> float\nC++: double GetTime()\n\nSet time value.\n"},
  {(char*)"Paint", PyvtkPVPlotTime_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the axis, called whenever the axis needs to be\ndrawn\n"},
  {(char*)"GetBounds", PyvtkPVPlotTime_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nGet the bounds for this plot as (Xmin, Xmax, Ymin, Ymax).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVPlotTime_StaticNew()
{
  return vtkPVPlotTime::New();
}

PyObject *PyVTKClass_vtkPVPlotTimeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVPlotTime_StaticNew,
    PyvtkPVPlotTime_Methods,
    "vtkPVPlotTime", modulename,
    NULL, NULL,
    PyvtkPVPlotTime_Doc(),
    PyVTKClass_vtkPlotNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "NONE", vtkPVPlotTime::NONE },
          { "X_AXIS", vtkPVPlotTime::X_AXIS },
          { "Y_AXIS", vtkPVPlotTime::Y_AXIS },
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

const char **PyvtkPVPlotTime_Doc()
{
  static const char *docstring[] = {
    "vtkPVPlotTime - takes care of drawing a \"time\" marker in the plot.\n\n",
    "Superclass: vtkPlot\n\n",
    "vtkPVPlotTime is used to add a \"current-time\" marker to the plot when\non of the axes in the plots is time. Currently only X-axis as time is\nsupported.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVPlotTime(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVPlotTimeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVPlotTime", o) != 0)
    {
    Py_DECREF(o);
    }

}

