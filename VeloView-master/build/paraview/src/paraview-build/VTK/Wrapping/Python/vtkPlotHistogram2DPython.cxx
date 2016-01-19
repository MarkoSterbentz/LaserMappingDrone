// python wrapper for vtkPlotHistogram2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkRect.h"
#include "vtkVector.h"
#include "vtkVector.h"
#include "vtkPlotHistogram2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPlotHistogram2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPlotHistogram2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPlotNew
extern "C" { PyObject *PyVTKClass_vtkPlotNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlotNew
#endif

static const char **PyvtkPlotHistogram2D_Doc();


static PyObject *
PyvtkPlotHistogram2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPlotHistogram2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotHistogram2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlotHistogram2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotHistogram2D::NewInstance());

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
PyvtkPlotHistogram2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPlotHistogram2D *tempr = vtkPlotHistogram2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkPlotHistogram2D::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotHistogram2D::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkImageData *temp0 = NULL;
  vtkIdType temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0, temp1);
      }
    else
      {
      op->vtkPlotHistogram2D::SetInputData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotHistogram2D_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

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
      op->vtkPlotHistogram2D::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotHistogram2D_SetInputData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkTable *temp0 = NULL;
  vtkStdString temp1;
  vtkStdString temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPlotHistogram2D::SetInputData(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotHistogram2D_SetInputData_Methods[] = {
  {NULL, PyvtkPlotHistogram2D_SetInputData_s1, METH_VARARGS,
   (char*)"@O|L *vtkImageData"},
  {NULL, PyvtkPlotHistogram2D_SetInputData_s2, METH_VARARGS,
   (char*)"@O *vtkTable"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPlotHistogram2D_SetInputData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlotHistogram2D_SetInputData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPlotHistogram2D_SetInputData_s1(self, args);
    case 3:
      return PyvtkPlotHistogram2D_SetInputData_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return NULL;
}



static PyObject *
PyvtkPlotHistogram2D_GetInputImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInputImageData() :
      op->vtkPlotHistogram2D::GetInputImageData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_SetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetTransferFunction(temp0);
      }
    else
      {
      op->vtkPlotHistogram2D::SetTransferFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_GetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetTransferFunction() :
      op->vtkPlotHistogram2D::GetTransferFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

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
      op->vtkPlotHistogram2D::GetBounds(temp0);
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


static PyObject *
PyvtkPlotHistogram2D_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkRectf *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf"))
    {
    if (ap.IsBound())
      {
      op->SetPosition(*temp0);
      }
    else
      {
      op->vtkPlotHistogram2D::SetPosition(*temp0);
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
PyvtkPlotHistogram2D_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkPlotHistogram2D::GetPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_GetTooltipLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkVector2d *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2d") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTooltipLabel(*temp0, temp1, temp2) :
      op->vtkPlotHistogram2D::GetTooltipLabel(*temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPlotHistogram2D_Methods[] = {
  {(char*)"GetClassName", PyvtkPlotHistogram2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlotHistogram2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlotHistogram2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPlotHistogram2D\nC++: vtkPlotHistogram2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlotHistogram2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlotHistogram2D\nC++: vtkPlotHistogram2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkPlotHistogram2D_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkPlotHistogram2D_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the item, called whenever it needs to be drawn.\n"},
  {(char*)"SetInputData", PyvtkPlotHistogram2D_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkImageData, int)\nC++: virtual void SetInputData(vtkImageData *data, vtkIdType z=0)\nV.SetInputData(vtkTable)\nC++: virtual void SetInputData(vtkTable *)\nV.SetInputData(vtkTable, string, string)\nC++: virtual void SetInputData(vtkTable *, const vtkStdString &,\n    const vtkStdString &)\n\nSet the input, we are expecting a vtkImageData with just one\ncomponent, this would normally be a float or a double. It will be\npassed to the other functions as a double to generate a color.\n"},
  {(char*)"GetInputImageData", PyvtkPlotHistogram2D_GetInputImageData, METH_VARARGS,
   (char*)"V.GetInputImageData() -> vtkImageData\nC++: vtkImageData *GetInputImageData()\n\nGet the input table used by the plot.\n"},
  {(char*)"SetTransferFunction", PyvtkPlotHistogram2D_SetTransferFunction, METH_VARARGS,
   (char*)"V.SetTransferFunction(vtkScalarsToColors)\nC++: void SetTransferFunction(vtkScalarsToColors *transfer)\n\nSet the color transfer function that will be used to generate the\n2D histogram.\n"},
  {(char*)"GetTransferFunction", PyvtkPlotHistogram2D_GetTransferFunction, METH_VARARGS,
   (char*)"V.GetTransferFunction() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetTransferFunction()\n\nGet the color transfer function that is used to generate the\nhistogram.\n"},
  {(char*)"GetBounds", PyvtkPlotHistogram2D_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\n"},
  {(char*)"SetPosition", PyvtkPlotHistogram2D_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(vtkRectf)\nC++: virtual void SetPosition(const vtkRectf &pos)\n\n"},
  {(char*)"GetPosition", PyvtkPlotHistogram2D_GetPosition, METH_VARARGS,
   (char*)"V.GetPosition() -> vtkRectf\nC++: virtual vtkRectf GetPosition()\n\n"},
  {(char*)"GetTooltipLabel", PyvtkPlotHistogram2D_GetTooltipLabel, METH_VARARGS,
   (char*)"V.GetTooltipLabel(vtkVector2d, int, int) -> string\nC++: virtual vtkStdString GetTooltipLabel(\n    const vtkVector2d &plotPos, vtkIdType seriesIndex,\n    vtkIdType segmentIndex)\n\nGenerate and return the tooltip label string for this plot The\nsegmentIndex parameter is ignored. The member variable\nTooltipLabelFormat can be set as a printf-style string to build\ncustom tooltip labels from, and may contain: An empty string\ngenerates the default tooltip labels. The following\ncase-sensitive format tags (without quotes) are recognized:\n  '%x' The X position of the histogram cell\n  '%y' The Y position of the histogram cell\n  '%v' The scalar value of the histogram cell\n  Note: the %i and %j tags are valid only if there is a 1:1\ncorrespondence\n        between individual histogram cells and axis tick marks\n  '%i' The X axis tick label for the histogram cell\n  '%j' The Y axis tick label for the histogram cell Any other\ncharacters or unrecognized format tags are printed in the tooltip\nlabel verbatim.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlotHistogram2D_StaticNew()
{
  return vtkPlotHistogram2D::New();
}

PyObject *PyVTKClass_vtkPlotHistogram2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlotHistogram2D_StaticNew,
    PyvtkPlotHistogram2D_Methods,
    "vtkPlotHistogram2D", modulename,
    NULL, NULL,
    PyvtkPlotHistogram2D_Doc(),
    PyVTKClass_vtkPlotNew(modulename));
  return cls;
}

const char **PyvtkPlotHistogram2D_Doc()
{
  static const char *docstring[] = {
    "vtk2DHistogramItem - 2D histogram item.\n\n",
    "Superclass: vtkPlot\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlotHistogram2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlotHistogram2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlotHistogram2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

