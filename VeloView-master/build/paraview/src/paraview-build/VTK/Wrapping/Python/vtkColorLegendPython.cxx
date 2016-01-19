// python wrapper for vtkColorLegend
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRect.h"
#include "vtkStdString.h"
#include "vtkContextMouseEvent.h"
#include "vtkColorLegend.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkColorLegend(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkColorLegendNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkChartLegendNew
extern "C" { PyObject *PyVTKClass_vtkChartLegendNew(const char *); }
#define DECLARED_PyVTKClass_vtkChartLegendNew
#endif

static const char **PyvtkColorLegend_Doc();


static PyObject *
PyvtkColorLegend_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkColorLegend::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkColorLegend::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkColorLegend *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkColorLegend::NewInstance());

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
PyvtkColorLegend_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkColorLegend *tempr = vtkColorLegend::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

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
      op->vtkColorLegend::GetBounds(temp0);
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
PyvtkColorLegend_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkColorLegend::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkColorLegend::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_SetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

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
      op->vtkColorLegend::SetTransferFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_GetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetTransferFunction() :
      op->vtkColorLegend::GetTransferFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_SetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPoint(temp0, temp1);
      }
    else
      {
      op->vtkColorLegend::SetPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_SetTextureSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTextureSize(temp0, temp1);
      }
    else
      {
      op->vtkColorLegend::SetTextureSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

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
      op->vtkColorLegend::SetPosition(*temp0);
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
PyvtkColorLegend_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkColorLegend::GetPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_GetBoundingRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetBoundingRect(temp0) :
      op->vtkColorLegend::GetBoundingRect(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientation(temp0);
      }
    else
      {
      op->vtkColorLegend::SetOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkColorLegend::GetOrientation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitle(temp0);
      }
    else
      {
      op->vtkColorLegend::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkColorLegend::GetTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_SetDrawBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawBorder(temp0);
      }
    else
      {
      op->vtkColorLegend::SetDrawBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_GetDrawBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDrawBorder() :
      op->vtkColorLegend::GetDrawBorder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_DrawBorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawBorderOn();
      }
    else
      {
      op->vtkColorLegend::DrawBorderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_DrawBorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawBorderOff();
      }
    else
      {
      op->vtkColorLegend::DrawBorderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkColorLegend_Methods[] = {
  {(char*)"GetClassName", PyvtkColorLegend_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkColorLegend_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkColorLegend_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkColorLegend\nC++: vtkColorLegend *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkColorLegend_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkColorLegend\nC++: vtkColorLegend *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetBounds", PyvtkColorLegend_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nBounds of the item, by default (0, 1, 0, 1) but it mainly depends\non the range of the vtkScalarsToColors function.\n"},
  {(char*)"Update", PyvtkColorLegend_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkColorLegend_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint the texture into a rectangle defined by the bounds. If\nMaskAboveCurve is true and a shape has been provided by a\nsubclass, it draws the texture into the shape\n"},
  {(char*)"SetTransferFunction", PyvtkColorLegend_SetTransferFunction, METH_VARARGS,
   (char*)"V.SetTransferFunction(vtkScalarsToColors)\nC++: virtual void SetTransferFunction(\n    vtkScalarsToColors *transfer)\n\nSet/Get the transfer function that is used to draw the scalar bar\nwithin this legend.\n"},
  {(char*)"GetTransferFunction", PyvtkColorLegend_GetTransferFunction, METH_VARARGS,
   (char*)"V.GetTransferFunction() -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetTransferFunction()\n\nSet/Get the transfer function that is used to draw the scalar bar\nwithin this legend.\n"},
  {(char*)"SetPoint", PyvtkColorLegend_SetPoint, METH_VARARGS,
   (char*)"V.SetPoint(float, float)\nC++: virtual void SetPoint(float x, float y)\n\nSet the point this legend is anchored to.\n"},
  {(char*)"SetTextureSize", PyvtkColorLegend_SetTextureSize, METH_VARARGS,
   (char*)"V.SetTextureSize(float, float)\nC++: virtual void SetTextureSize(float w, float h)\n\nSet the size of the scalar bar drawn by this legend.\n"},
  {(char*)"SetPosition", PyvtkColorLegend_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(vtkRectf)\nC++: virtual void SetPosition(const vtkRectf &pos)\n\nSet the origin, width, and height of the scalar bar drawn by this\nlegend. This method overrides the anchor point, as well as any\nhorizontal and vertical alignment that has been set for this\nlegend.  If this is a problem for you, use SetPoint() and\nSetTextureSize() instead.\n"},
  {(char*)"GetPosition", PyvtkColorLegend_GetPosition, METH_VARARGS,
   (char*)"V.GetPosition() -> vtkRectf\nC++: virtual vtkRectf GetPosition()\n\nReturns the origin, width, and height of the scalar bar drawn by\nthis legend.\n"},
  {(char*)"GetBoundingRect", PyvtkColorLegend_GetBoundingRect, METH_VARARGS,
   (char*)"V.GetBoundingRect(vtkContext2D) -> vtkRectf\nC++: vtkRectf GetBoundingRect(vtkContext2D *painter)\n\nRequest the space the legend requires to be drawn. This is\nreturned as a vtkRect4f, with the corner being the offset from\nPoint, and the width/ height being the total width/height\nrequired by the axis. In order to ensure the numbers are correct,\nUpdate() should be called first.\n"},
  {(char*)"SetOrientation", PyvtkColorLegend_SetOrientation, METH_VARARGS,
   (char*)"V.SetOrientation(int)\nC++: virtual void SetOrientation(int orientation)\n\nSet/get the orientation of the legend. Valid orientations are\nVERTICAL (default) and HORIZONTAL.\n"},
  {(char*)"GetOrientation", PyvtkColorLegend_GetOrientation, METH_VARARGS,
   (char*)"V.GetOrientation() -> int\nC++: int GetOrientation()\n\nSet/get the orientation of the legend. Valid orientations are\nVERTICAL (default) and HORIZONTAL.\n"},
  {(char*)"SetTitle", PyvtkColorLegend_SetTitle, METH_VARARGS,
   (char*)"V.SetTitle(string)\nC++: virtual void SetTitle(const vtkStdString &title)\n\nGet/set the title text of the legend.\n"},
  {(char*)"GetTitle", PyvtkColorLegend_GetTitle, METH_VARARGS,
   (char*)"V.GetTitle() -> string\nC++: virtual vtkStdString GetTitle()\n\nGet/set the title text of the legend.\n"},
  {(char*)"SetDrawBorder", PyvtkColorLegend_SetDrawBorder, METH_VARARGS,
   (char*)"V.SetDrawBorder(bool)\nC++: void SetDrawBorder(bool a)\n\nToggle whether or not a border should be drawn around this\nlegend. The default behavior is to not draw a border.\n"},
  {(char*)"GetDrawBorder", PyvtkColorLegend_GetDrawBorder, METH_VARARGS,
   (char*)"V.GetDrawBorder() -> bool\nC++: bool GetDrawBorder()\n\nToggle whether or not a border should be drawn around this\nlegend. The default behavior is to not draw a border.\n"},
  {(char*)"DrawBorderOn", PyvtkColorLegend_DrawBorderOn, METH_VARARGS,
   (char*)"V.DrawBorderOn()\nC++: void DrawBorderOn()\n\nToggle whether or not a border should be drawn around this\nlegend. The default behavior is to not draw a border.\n"},
  {(char*)"DrawBorderOff", PyvtkColorLegend_DrawBorderOff, METH_VARARGS,
   (char*)"V.DrawBorderOff()\nC++: void DrawBorderOff()\n\nToggle whether or not a border should be drawn around this\nlegend. The default behavior is to not draw a border.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkColorLegend_StaticNew()
{
  return vtkColorLegend::New();
}

PyObject *PyVTKClass_vtkColorLegendNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkColorLegend_StaticNew,
    PyvtkColorLegend_Methods,
    "vtkColorLegend", modulename,
    NULL, NULL,
    PyvtkColorLegend_Doc(),
    PyVTKClass_vtkChartLegendNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 2; c++)
      {
      static const struct { const char *name; int value; }
        constants[2] = {
          { "VERTICAL", vtkColorLegend::VERTICAL },
          { "HORIZONTAL", vtkColorLegend::HORIZONTAL },
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

const char **PyvtkColorLegend_Doc()
{
  static const char *docstring[] = {
    "vtkColorLegend - Legend item to display vtkScalarsToColors.\n\n",
    "Superclass: vtkChartLegend\n\n",
    "vtkColorLegend is an item that will display the vtkScalarsToColors\nusing a 1D texture, and a vtkAxis to show both the color and\nnumerical range.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkColorLegend(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkColorLegendNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColorLegend", o) != 0)
    {
    Py_DECREF(o);
    }

}

