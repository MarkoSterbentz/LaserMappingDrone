// python wrapper for vtkCategoryLegend
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkRect.h"
#include "vtkStdString.h"
#include "vtkCategoryLegend.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCategoryLegend(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCategoryLegendNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkChartLegendNew
extern "C" { PyObject *PyVTKClass_vtkChartLegendNew(const char *); }
#define DECLARED_PyVTKClass_vtkChartLegendNew
#endif

static const char **PyvtkCategoryLegend_Doc();


static PyObject *
PyvtkCategoryLegend_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCategoryLegend::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCategoryLegend_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCategoryLegend::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCategoryLegend_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCategoryLegend *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCategoryLegend::NewInstance());

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
PyvtkCategoryLegend_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCategoryLegend *tempr = vtkCategoryLegend::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCategoryLegend_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkCategoryLegend::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCategoryLegend_GetBoundingRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetBoundingRect(temp0) :
      op->vtkCategoryLegend::GetBoundingRect(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
      }
    }

  return result;
}


static PyObject *
PyvtkCategoryLegend_SetScalarsToColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsToColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetScalarsToColors(temp0);
      }
    else
      {
      op->vtkCategoryLegend::SetScalarsToColors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCategoryLegend_GetScalarsToColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsToColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetScalarsToColors() :
      op->vtkCategoryLegend::GetScalarsToColors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCategoryLegend_GetValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVariantArray *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkCategoryLegend::GetValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCategoryLegend_SetValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkVariantArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVariantArray"))
    {
    if (ap.IsBound())
      {
      op->SetValues(temp0);
      }
    else
      {
      op->vtkCategoryLegend::SetValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCategoryLegend_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

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
      op->vtkCategoryLegend::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCategoryLegend_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkCategoryLegend::GetTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCategoryLegend_GetOutlierLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlierLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetOutlierLabel() :
      op->vtkCategoryLegend::GetOutlierLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCategoryLegend_SetOutlierLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlierLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutlierLabel(temp0);
      }
    else
      {
      op->vtkCategoryLegend::SetOutlierLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCategoryLegend_Methods[] = {
  {(char*)"GetClassName", PyvtkCategoryLegend_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCategoryLegend_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCategoryLegend_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCategoryLegend\nC++: vtkCategoryLegend *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCategoryLegend_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCategoryLegend\nC++: vtkCategoryLegend *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Paint", PyvtkCategoryLegend_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint the legend into a rectangle defined by the bounds.\n"},
  {(char*)"GetBoundingRect", PyvtkCategoryLegend_GetBoundingRect, METH_VARARGS,
   (char*)"V.GetBoundingRect(vtkContext2D) -> vtkRectf\nC++: virtual vtkRectf GetBoundingRect(vtkContext2D *painter)\n\nCompute and return the lower left corner of this legend, along\nwith its width and height.\n"},
  {(char*)"SetScalarsToColors", PyvtkCategoryLegend_SetScalarsToColors, METH_VARARGS,
   (char*)"V.SetScalarsToColors(vtkScalarsToColors)\nC++: virtual void SetScalarsToColors(vtkScalarsToColors *stc)\n\nGet/Set the vtkScalarsToColors used to draw this legend. Since\nthis legend represents categorical data, this vtkScalarsToColors\nmust have been populated using SetAnnotation().\n"},
  {(char*)"GetScalarsToColors", PyvtkCategoryLegend_GetScalarsToColors, METH_VARARGS,
   (char*)"V.GetScalarsToColors() -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetScalarsToColors()\n\nGet/Set the vtkScalarsToColors used to draw this legend. Since\nthis legend represents categorical data, this vtkScalarsToColors\nmust have been populated using SetAnnotation().\n"},
  {(char*)"GetValues", PyvtkCategoryLegend_GetValues, METH_VARARGS,
   (char*)"V.GetValues() -> vtkVariantArray\nC++: vtkVariantArray *GetValues()\n\nGet/Set the array of values that will be represented by this\nlegend. This array must contain distinct annotated values from\nthe ScalarsToColors. Each value in this array will be drawn as a\nseparate entry within this legend.\n"},
  {(char*)"SetValues", PyvtkCategoryLegend_SetValues, METH_VARARGS,
   (char*)"V.SetValues(vtkVariantArray)\nC++: void SetValues(vtkVariantArray *a)\n\nGet/Set the array of values that will be represented by this\nlegend. This array must contain distinct annotated values from\nthe ScalarsToColors. Each value in this array will be drawn as a\nseparate entry within this legend.\n"},
  {(char*)"SetTitle", PyvtkCategoryLegend_SetTitle, METH_VARARGS,
   (char*)"V.SetTitle(string)\nC++: virtual void SetTitle(const vtkStdString &title)\n\nGet/set the title text of the legend.\n"},
  {(char*)"GetTitle", PyvtkCategoryLegend_GetTitle, METH_VARARGS,
   (char*)"V.GetTitle() -> string\nC++: virtual vtkStdString GetTitle()\n\nGet/set the title text of the legend.\n"},
  {(char*)"GetOutlierLabel", PyvtkCategoryLegend_GetOutlierLabel, METH_VARARGS,
   (char*)"V.GetOutlierLabel() -> string\nC++: vtkStdString GetOutlierLabel()\n\nGet/set the label to use for outlier data.\n"},
  {(char*)"SetOutlierLabel", PyvtkCategoryLegend_SetOutlierLabel, METH_VARARGS,
   (char*)"V.SetOutlierLabel(string)\nC++: void SetOutlierLabel(vtkStdString a)\n\nGet/set the label to use for outlier data.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCategoryLegend_StaticNew()
{
  return vtkCategoryLegend::New();
}

PyObject *PyVTKClass_vtkCategoryLegendNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCategoryLegend_StaticNew,
    PyvtkCategoryLegend_Methods,
    "vtkCategoryLegend", modulename,
    NULL, NULL,
    PyvtkCategoryLegend_Doc(),
    PyVTKClass_vtkChartLegendNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 2; c++)
      {
      static const struct { const char *name; int value; }
        constants[2] = {
          { "VERTICAL", vtkCategoryLegend::VERTICAL },
          { "HORIZONTAL", vtkCategoryLegend::HORIZONTAL },
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

const char **PyvtkCategoryLegend_Doc()
{
  static const char *docstring[] = {
    "vtkCategoryLegend - Legend item to display categorical data.\n\n",
    "Superclass: vtkChartLegend\n\n",
    "vtkCategoryLegend will display a label and color patch for each value\nin a categorical data set.  To use this class, you must first\npopulate a vtkScalarsToColors by using the SetAnnotation() method. \nThe other input to this class is a vtkVariantArray.  This should\ncontain the annotated values from the vtkScalarsToColors that you\nwish to include within the legend.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCategoryLegend(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCategoryLegendNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCategoryLegend", o) != 0)
    {
    Py_DECREF(o);
    }

}

