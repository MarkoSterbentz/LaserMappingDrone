// python wrapper for vtkChartBox
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkContextMouseEvent.h"
#include "vtkVector.h"
#include "vtkChartBox.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkChartBox(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkChartBoxNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkChartNew
extern "C" { PyObject *PyVTKClass_vtkChartNew(const char *); }
#define DECLARED_PyVTKClass_vtkChartNew
#endif

static const char **PyvtkChartBox_Doc();


static PyObject *
PyvtkChartBox_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkChartBox::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartBox::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartBox *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartBox::NewInstance());

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
PyvtkChartBox_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkChartBox *tempr = vtkChartBox::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkChartBox::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartBox::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_SetColumnVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkStdString temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetColumnVisibility(temp0, temp1);
      }
    else
      {
      op->vtkChartBox::SetColumnVisibility(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkChartBox_SetColumnVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkIdType temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetColumnVisibility(temp0, temp1);
      }
    else
      {
      op->vtkChartBox::SetColumnVisibility(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkChartBox_SetColumnVisibility_Methods[] = {
  {NULL, PyvtkChartBox_SetColumnVisibility_s1, METH_VARARGS,
   (char*)"@sO bool"},
  {NULL, PyvtkChartBox_SetColumnVisibility_s2, METH_VARARGS,
   (char*)"@LO bool"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkChartBox_SetColumnVisibility(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartBox_SetColumnVisibility_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColumnVisibility");
  return NULL;
}



static PyObject *
PyvtkChartBox_SetColumnVisibilityAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibilityAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColumnVisibilityAll(temp0);
      }
    else
      {
      op->vtkChartBox::SetColumnVisibilityAll(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_GetColumnVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetColumnVisibility(temp0) :
      op->vtkChartBox::GetColumnVisibility(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkChartBox_GetColumnVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetColumnVisibility(temp0) :
      op->vtkChartBox::GetColumnVisibility(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkChartBox_GetColumnVisibility_Methods[] = {
  {NULL, PyvtkChartBox_GetColumnVisibility_s1, METH_VARARGS,
   (char*)"@s"},
  {NULL, PyvtkChartBox_GetColumnVisibility_s2, METH_VARARGS,
   (char*)"@L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkChartBox_GetColumnVisibility(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartBox_GetColumnVisibility_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetColumnVisibility");
  return NULL;
}



static PyObject *
PyvtkChartBox_GetColumnId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetColumnId(temp0) :
      op->vtkChartBox::GetColumnId(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_GetVisibleColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetVisibleColumns() :
      op->vtkChartBox::GetVisibleColumns());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_GetSelectedColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSelectedColumn() :
      op->vtkChartBox::GetSelectedColumn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_SetSelectedColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectedColumn(temp0);
      }
    else
      {
      op->vtkChartBox::SetSelectedColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_GetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPlot *tempr = (ap.IsBound() ?
      op->GetPlot(temp0) :
      op->vtkChartBox::GetPlot(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_GetNumberOfPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPlots() :
      op->vtkChartBox::GetNumberOfPlots());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_GetYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetYAxis() :
      op->vtkChartBox::GetYAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_GetXPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    float tempr = (ap.IsBound() ?
      op->GetXPosition(temp0) :
      op->vtkChartBox::GetXPosition(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_GetNumberOfVisibleColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVisibleColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfVisibleColumns() :
      op->vtkChartBox::GetNumberOfVisibleColumns());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_SetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkPlotBox *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlotBox"))
    {
    if (ap.IsBound())
      {
      op->SetPlot(temp0);
      }
    else
      {
      op->vtkChartBox::SetPlot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_SetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkTooltipItem *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTooltipItem"))
    {
    if (ap.IsBound())
      {
      op->SetTooltip(temp0);
      }
    else
      {
      op->vtkChartBox::SetTooltip(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartBox_GetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTooltipItem *tempr = (ap.IsBound() ?
      op->GetTooltip() :
      op->vtkChartBox::GetTooltip());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkChartBox_Methods[] = {
  {(char*)"GetClassName", PyvtkChartBox_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChartBox_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChartBox_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkChartBox\nC++: vtkChartBox *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChartBox_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChartBox\nC++: vtkChartBox *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkChartBox_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkChartBox_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn\n"},
  {(char*)"SetColumnVisibility", PyvtkChartBox_SetColumnVisibility, METH_VARARGS,
   (char*)"V.SetColumnVisibility(string, bool)\nC++: void SetColumnVisibility(const vtkStdString &name,\n    bool visible)\nV.SetColumnVisibility(int, bool)\nC++: void SetColumnVisibility(vtkIdType column, bool visible)\n\nSet the visibility of the specified column.\n"},
  {(char*)"SetColumnVisibilityAll", PyvtkChartBox_SetColumnVisibilityAll, METH_VARARGS,
   (char*)"V.SetColumnVisibilityAll(bool)\nC++: void SetColumnVisibilityAll(bool visible)\n\nSet the visibility of all columns (true will make them all\nvisible, false will remove all visible columns).\n"},
  {(char*)"GetColumnVisibility", PyvtkChartBox_GetColumnVisibility, METH_VARARGS,
   (char*)"V.GetColumnVisibility(string) -> bool\nC++: bool GetColumnVisibility(const vtkStdString &name)\nV.GetColumnVisibility(int) -> bool\nC++: bool GetColumnVisibility(vtkIdType column)\n\nGet the visibility of the specified column.\n"},
  {(char*)"GetColumnId", PyvtkChartBox_GetColumnId, METH_VARARGS,
   (char*)"V.GetColumnId(string) -> int\nC++: vtkIdType GetColumnId(const vtkStdString &name)\n\nGet the input table column id of a column by its name.\n"},
  {(char*)"GetVisibleColumns", PyvtkChartBox_GetVisibleColumns, METH_VARARGS,
   (char*)"V.GetVisibleColumns() -> vtkStringArray\nC++: vtkStringArray *GetVisibleColumns()\n\nGet a list of the columns, and the order in which they are\ndisplayed.\n"},
  {(char*)"GetSelectedColumn", PyvtkChartBox_GetSelectedColumn, METH_VARARGS,
   (char*)"V.GetSelectedColumn() -> int\nC++: int GetSelectedColumn()\n\n"},
  {(char*)"SetSelectedColumn", PyvtkChartBox_SetSelectedColumn, METH_VARARGS,
   (char*)"V.SetSelectedColumn(int)\nC++: void SetSelectedColumn(int a)\n\n"},
  {(char*)"GetPlot", PyvtkChartBox_GetPlot, METH_VARARGS,
   (char*)"V.GetPlot(int) -> vtkPlot\nC++: virtual vtkPlot *GetPlot(vtkIdType index)\n\nGet the plot at the specified index, returns null if the index is\ninvalid.\n"},
  {(char*)"GetNumberOfPlots", PyvtkChartBox_GetNumberOfPlots, METH_VARARGS,
   (char*)"V.GetNumberOfPlots() -> int\nC++: virtual vtkIdType GetNumberOfPlots()\n\nGet the number of plots the chart contains.\n"},
  {(char*)"GetYAxis", PyvtkChartBox_GetYAxis, METH_VARARGS,
   (char*)"V.GetYAxis() -> vtkAxis\nC++: virtual vtkAxis *GetYAxis()\n\nGet the chart Y axis\n"},
  {(char*)"GetXPosition", PyvtkChartBox_GetXPosition, METH_VARARGS,
   (char*)"V.GetXPosition(int) -> float\nC++: virtual float GetXPosition(int index)\n\nGet the column X position by index in the visible set.\n"},
  {(char*)"GetNumberOfVisibleColumns", PyvtkChartBox_GetNumberOfVisibleColumns, METH_VARARGS,
   (char*)"V.GetNumberOfVisibleColumns() -> int\nC++: virtual vtkIdType GetNumberOfVisibleColumns()\n\nGet the number of visible box plots in the current chart.\n"},
  {(char*)"SetPlot", PyvtkChartBox_SetPlot, METH_VARARGS,
   (char*)"V.SetPlot(vtkPlotBox)\nC++: virtual void SetPlot(vtkPlotBox *plot)\n\n"},
  {(char*)"SetTooltip", PyvtkChartBox_SetTooltip, METH_VARARGS,
   (char*)"V.SetTooltip(vtkTooltipItem)\nC++: virtual void SetTooltip(vtkTooltipItem *tooltip)\n\nSet the vtkTooltipItem object that will be displayed by the\nchart.\n"},
  {(char*)"GetTooltip", PyvtkChartBox_GetTooltip, METH_VARARGS,
   (char*)"V.GetTooltip() -> vtkTooltipItem\nC++: virtual vtkTooltipItem *GetTooltip()\n\nGet the vtkTooltipItem object that will be displayed by the\nchart.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkChartBox_StaticNew()
{
  return vtkChartBox::New();
}

PyObject *PyVTKClass_vtkChartBoxNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkChartBox_StaticNew,
    PyvtkChartBox_Methods,
    "vtkChartBox", modulename,
    NULL, NULL,
    PyvtkChartBox_Doc(),
    PyVTKClass_vtkChartNew(modulename));
  return cls;
}

const char **PyvtkChartBox_Doc()
{
  static const char *docstring[] = {
    "vtkChartBox - Factory class for drawing box plot charts\n\n",
    "Superclass: vtkChart\n\n",
    "This defines the interface for a box plot chart.\n\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkChartBoxData_Doc();

static PyMethodDef PyvtkChartBoxData_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkChartBoxData_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkChartBoxData_Type;
#define DECLARED_PyvtkChartBoxData_Type
#endif


static PyObject *
PyvtkChartBoxData_vtkChartBoxData(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkChartBoxData");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkChartBoxData *op = new vtkChartBoxData();

    result = PyVTKSpecialObject_New("vtkChartBoxData", op);
    }

  return result;
}

static PyMethodDef PyvtkChartBoxData_vtkChartBoxData_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkChartBoxData_NewMethod = \
{ (char*)"vtkChartBoxData", PyvtkChartBoxData_vtkChartBoxData, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkChartBoxData_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkChartBoxData_vtkChartBoxData(NULL, args);
}
#endif

static void PyvtkChartBoxData_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkChartBoxData *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkChartBoxData_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkChartBoxData_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkChartBoxData", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkChartBoxData_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkChartBoxData_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkChartBoxData_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkChartBoxData_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkChartBoxData_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkChartBoxData(*static_cast<const vtkChartBoxData*>(obj));
    }
  return 0;
}

static PyObject *PyvtkChartBoxData_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkChartBoxData_Type,
    PyvtkChartBoxData_Methods,
    PyvtkChartBoxData_vtkChartBoxData_Methods,
    &PyvtkChartBoxData_NewMethod,
    PyvtkChartBoxData_Doc(), &PyvtkChartBoxData_CCopy);

  return cls;
}

const char **PyvtkChartBoxData_Doc()
{
  static const char *docstring[] = {
    "vtkChartBox - Factory class for drawing box plot charts\n\n",
    "This defines the interface for a box plot chart.\n\n",
    "V.vtkChartBoxData()\nC++: vtkChartBoxData()\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChartBox(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChartBoxNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChartBox", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkChartBoxData_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChartBoxData", o) != 0)
    {
    Py_DECREF(o);
    }

}

