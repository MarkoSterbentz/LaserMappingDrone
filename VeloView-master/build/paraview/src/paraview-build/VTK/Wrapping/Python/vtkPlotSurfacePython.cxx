// python wrapper for vtkPlotSurface
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkPlotSurface.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPlotSurface(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPlotSurfaceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPlot3DNew
extern "C" { PyObject *PyVTKClass_vtkPlot3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlot3DNew
#endif

static const char **PyvtkPlotSurface_Doc();


static PyObject *
PyvtkPlotSurface_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPlotSurface::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotSurface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotSurface::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotSurface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlotSurface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotSurface::NewInstance());

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
PyvtkPlotSurface_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPlotSurface *tempr = vtkPlotSurface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotSurface_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotSurface::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotSurface_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  vtkTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkPlotSurface::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotSurface_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  vtkTable *temp0 = NULL;
  vtkStdString temp1;
  vtkStdString temp2;
  vtkStdString temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPlotSurface::SetInputData(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotSurface_SetInputData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  vtkTable *temp0 = NULL;
  vtkStdString temp1;
  vtkStdString temp2;
  vtkStdString temp3;
  vtkStdString temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkPlotSurface::SetInputData(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotSurface_SetInputData_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  vtkTable *temp0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPlotSurface::SetInputData(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotSurface_SetInputData_Methods[] = {
  {NULL, PyvtkPlotSurface_SetInputData_s2, METH_VARARGS,
   (char*)"@Osss *vtkTable"},
  {NULL, PyvtkPlotSurface_SetInputData_s4, METH_VARARGS,
   (char*)"@OLLL *vtkTable"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPlotSurface_SetInputData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlotSurface_SetInputData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPlotSurface_SetInputData_s1(self, args);
    case 5:
      return PyvtkPlotSurface_SetInputData_s3(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return NULL;
}



static PyObject *
PyvtkPlotSurface_SetXRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetXRange(temp0, temp1);
      }
    else
      {
      op->vtkPlotSurface::SetXRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotSurface_SetYRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetYRange(temp0, temp1);
      }
    else
      {
      op->vtkPlotSurface::SetYRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotSurface_Methods[] = {
  {(char*)"GetClassName", PyvtkPlotSurface_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlotSurface_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlotSurface_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPlotSurface\nC++: vtkPlotSurface *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlotSurface_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlotSurface\nC++: vtkPlotSurface *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Paint", PyvtkPlotSurface_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the XY plot, called whenever the chart needs to\nbe drawn\n"},
  {(char*)"SetInputData", PyvtkPlotSurface_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkTable)\nC++: virtual void SetInputData(vtkTable *input)\nV.SetInputData(vtkTable, string, string, string)\nC++: virtual void SetInputData(vtkTable *input,\n    const vtkStdString &xName, const vtkStdString &yName,\n    const vtkStdString &zName)\nV.SetInputData(vtkTable, string, string, string, string)\nC++: virtual void SetInputData(vtkTable *input,\n    const vtkStdString &xName, const vtkStdString &yName,\n    const vtkStdString &zName, const vtkStdString &colorName)\nV.SetInputData(vtkTable, int, int, int)\nC++: virtual void SetInputData(vtkTable *input, vtkIdType xColumn,\n     vtkIdType yColumn, vtkIdType zColumn)\n\nSet the input to the surface plot.\n"},
  {(char*)"SetXRange", PyvtkPlotSurface_SetXRange, METH_VARARGS,
   (char*)"V.SetXRange(float, float)\nC++: void SetXRange(float min, float max)\n\nSet the range of the input data for the X dimension.  By default\nit is (1, NumberOfColumns).  Calling this method after\nSetInputData() results in recomputation of the plot's data. \nTherefore, it is more efficient to call it before SetInputData()\nwhen possible.\n"},
  {(char*)"SetYRange", PyvtkPlotSurface_SetYRange, METH_VARARGS,
   (char*)"V.SetYRange(float, float)\nC++: void SetYRange(float min, float max)\n\nSet the range of the input data for the Y dimension.  By default\nit is (1, NumberOfRows).  Calling this method after\nSetInputData() results in recomputation of the plot's data. \nTherefore, it is more efficient to call it before SetInputData()\nwhen possible.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlotSurface_StaticNew()
{
  return vtkPlotSurface::New();
}

PyObject *PyVTKClass_vtkPlotSurfaceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlotSurface_StaticNew,
    PyvtkPlotSurface_Methods,
    "vtkPlotSurface", modulename,
    NULL, NULL,
    PyvtkPlotSurface_Doc(),
    PyVTKClass_vtkPlot3DNew(modulename));
  return cls;
}

const char **PyvtkPlotSurface_Doc()
{
  static const char *docstring[] = {
    "vtkPlotSurface - 3D surface plot.\n\n",
    "Superclass: vtkPlot3D\n\n",
    "3D surface plot.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlotSurface(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlotSurfaceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlotSurface", o) != 0)
    {
    Py_DECREF(o);
    }

}

