// python wrapper for vtkChartPie
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkContextMouseEvent.h"
#include "vtkChartPie.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkChartPie(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkChartPieNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkChartNew
extern "C" { PyObject *PyVTKClass_vtkChartNew(const char *); }
#define DECLARED_PyVTKClass_vtkChartNew
#endif

static const char **PyvtkChartPie_Doc();


static PyObject *
PyvtkChartPie_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkChartPie::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartPie_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartPie::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartPie_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartPie *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartPie::NewInstance());

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
PyvtkChartPie_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkChartPie *tempr = vtkChartPie::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartPie_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkChartPie::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartPie_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartPie::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartPie_AddPlot_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPlot *tempr = (ap.IsBound() ?
      op->AddPlot(temp0) :
      op->vtkChartPie::AddPlot(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkChartPie_AddPlot_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  vtkPlot *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddPlot(temp0) :
      op->vtkChartPie::AddPlot(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkChartPie_AddPlot_Methods[] = {
  {NULL, PyvtkChartPie_AddPlot_s1, METH_VARARGS,
   (char*)"@i"},
  {NULL, PyvtkChartPie_AddPlot_s2, METH_VARARGS,
   (char*)"@O *vtkPlot"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkChartPie_AddPlot(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartPie_AddPlot_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddPlot");
  return NULL;
}



static PyObject *
PyvtkChartPie_GetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPlot *tempr = (ap.IsBound() ?
      op->GetPlot(temp0) :
      op->vtkChartPie::GetPlot(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartPie_GetNumberOfPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPlots() :
      op->vtkChartPie::GetNumberOfPlots());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartPie_SetShowLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowLegend(temp0);
      }
    else
      {
      op->vtkChartPie::SetShowLegend(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartPie_GetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartLegend *tempr = (ap.IsBound() ?
      op->GetLegend() :
      op->vtkChartPie::GetLegend());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartPie_SetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartPie *op = static_cast<vtkChartPie *>(vp);

  vtkContextScene *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContextScene"))
    {
    if (ap.IsBound())
      {
      op->SetScene(temp0);
      }
    else
      {
      op->vtkChartPie::SetScene(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkChartPie_Methods[] = {
  {(char*)"GetClassName", PyvtkChartPie_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChartPie_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChartPie_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkChartPie\nC++: vtkChartPie *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChartPie_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChartPie\nC++: vtkChartPie *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkChartPie_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkChartPie_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn\n"},
  {(char*)"AddPlot", PyvtkChartPie_AddPlot, METH_VARARGS,
   (char*)"V.AddPlot(int) -> vtkPlot\nC++: virtual vtkPlot *AddPlot(int type)\nV.AddPlot(vtkPlot) -> int\nC++: virtual vtkIdType AddPlot(vtkPlot *plot)\n\nAdd a plot to the chart.\n"},
  {(char*)"GetPlot", PyvtkChartPie_GetPlot, METH_VARARGS,
   (char*)"V.GetPlot(int) -> vtkPlot\nC++: virtual vtkPlot *GetPlot(vtkIdType index)\n\nGet the plot at the specified index, returns null if the index is\ninvalid.\n"},
  {(char*)"GetNumberOfPlots", PyvtkChartPie_GetNumberOfPlots, METH_VARARGS,
   (char*)"V.GetNumberOfPlots() -> int\nC++: virtual vtkIdType GetNumberOfPlots()\n\nGet the number of plots the chart contains.\n"},
  {(char*)"SetShowLegend", PyvtkChartPie_SetShowLegend, METH_VARARGS,
   (char*)"V.SetShowLegend(bool)\nC++: virtual void SetShowLegend(bool visible)\n\nSet whether the chart should draw a legend.\n"},
  {(char*)"GetLegend", PyvtkChartPie_GetLegend, METH_VARARGS,
   (char*)"V.GetLegend() -> vtkChartLegend\nC++: virtual vtkChartLegend *GetLegend()\n\nGet the legend for the chart, if available. Can return NULL if\nthere is no legend.\n"},
  {(char*)"SetScene", PyvtkChartPie_SetScene, METH_VARARGS,
   (char*)"V.SetScene(vtkContextScene)\nC++: virtual void SetScene(vtkContextScene *scene)\n\nSet the vtkContextScene for the item, always set for an item in a\nscene.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkChartPie_StaticNew()
{
  return vtkChartPie::New();
}

PyObject *PyVTKClass_vtkChartPieNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkChartPie_StaticNew,
    PyvtkChartPie_Methods,
    "vtkChartPie", modulename,
    NULL, NULL,
    PyvtkChartPie_Doc(),
    PyVTKClass_vtkChartNew(modulename));
  return cls;
}

const char **PyvtkChartPie_Doc()
{
  static const char *docstring[] = {
    "vtkChartPie - Factory class for drawing pie charts\n\n",
    "Superclass: vtkChart\n\n",
    "This class implements an pie chart.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChartPie(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChartPieNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChartPie", o) != 0)
    {
    Py_DECREF(o);
    }

}

