// python wrapper for vtkPlotGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPlotGrid.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPlotGrid(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPlotGridNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkPlotGrid_Doc();


static PyObject *
PyvtkPlotGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotGrid *op = static_cast<vtkPlotGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPlotGrid::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotGrid *op = static_cast<vtkPlotGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotGrid *op = static_cast<vtkPlotGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlotGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotGrid::NewInstance());

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
PyvtkPlotGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPlotGrid *tempr = vtkPlotGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotGrid_SetXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotGrid *op = static_cast<vtkPlotGrid *>(vp);

  vtkAxis *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAxis"))
    {
    if (ap.IsBound())
      {
      op->SetXAxis(temp0);
      }
    else
      {
      op->vtkPlotGrid::SetXAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotGrid_SetYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotGrid *op = static_cast<vtkPlotGrid *>(vp);

  vtkAxis *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAxis"))
    {
    if (ap.IsBound())
      {
      op->SetYAxis(temp0);
      }
    else
      {
      op->vtkPlotGrid::SetYAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotGrid_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotGrid *op = static_cast<vtkPlotGrid *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotGrid::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkPlotGrid_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlotGrid_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlotGrid_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPlotGrid\nC++: vtkPlotGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlotGrid_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlotGrid\nC++: vtkPlotGrid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetXAxis", PyvtkPlotGrid_SetXAxis, METH_VARARGS,
   (char*)"V.SetXAxis(vtkAxis)\nC++: virtual void SetXAxis(vtkAxis *axis)\n\nSet the X axis of the grid.\n"},
  {(char*)"SetYAxis", PyvtkPlotGrid_SetYAxis, METH_VARARGS,
   (char*)"V.SetYAxis(vtkAxis)\nC++: virtual void SetYAxis(vtkAxis *axis)\n\nSet the X axis of the grid.\n"},
  {(char*)"Paint", PyvtkPlotGrid_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the axis, called whenever the axis needs to be\ndrawn\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlotGrid_StaticNew()
{
  return vtkPlotGrid::New();
}

PyObject *PyVTKClass_vtkPlotGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlotGrid_StaticNew,
    PyvtkPlotGrid_Methods,
    "vtkPlotGrid", modulename,
    NULL, NULL,
    PyvtkPlotGrid_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));
  return cls;
}

const char **PyvtkPlotGrid_Doc()
{
  static const char *docstring[] = {
    "vtkPlotGrid - takes care of drawing the plot grid\n\n",
    "Superclass: vtkContextItem\n\n",
    "The vtkPlotGrid is drawn in screen coordinates. It is usually one of\nthe first elements of a chart to be drawn, and will generally be\nobscured by all other elements of the chart. It builds up its own\nplot locations from the parameters of the x and y axis of the plot.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlotGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlotGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlotGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

