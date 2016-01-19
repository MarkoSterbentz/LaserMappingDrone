// python wrapper for vtkLabeledContourMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLabeledContourMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLabeledContourMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLabeledContourMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMapperNew
extern "C" { PyObject *PyVTKClass_vtkMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkMapperNew
#endif

static const char **PyvtkLabeledContourMapper_Doc();


static PyObject *
PyvtkLabeledContourMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLabeledContourMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabeledContourMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLabeledContourMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabeledContourMapper::NewInstance());

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
PyvtkLabeledContourMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLabeledContourMapper *tempr = vtkLabeledContourMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkActor *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkLabeledContourMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkLabeledContourMapper::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkLabeledContourMapper::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkLabeledContourMapper::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLabeledContourMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
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
      op->vtkLabeledContourMapper::GetBounds(temp0);
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
PyvtkLabeledContourMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkLabeledContourMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkLabeledContourMapper_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkLabeledContourMapper_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTextProperty(temp0);
      }
    else
      {
      op->vtkLabeledContourMapper::SetTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_SetTextProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  vtkTextPropertyCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextPropertyCollection"))
    {
    if (ap.IsBound())
      {
      op->SetTextProperties(temp0);
      }
    else
      {
      op->vtkLabeledContourMapper::SetTextProperties(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_GetTextProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextPropertyCollection *tempr = (ap.IsBound() ?
      op->GetTextProperties() :
      op->vtkLabeledContourMapper::GetTextProperties());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelVisibility(temp0);
      }
    else
      {
      op->vtkLabeledContourMapper::SetLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLabelVisibility() :
      op->vtkLabeledContourMapper::GetLabelVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LabelVisibilityOn();
      }
    else
      {
      op->vtkLabeledContourMapper::LabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LabelVisibilityOff();
      }
    else
      {
      op->vtkLabeledContourMapper::LabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledContourMapper_GetPolyDataMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourMapper *op = static_cast<vtkLabeledContourMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyDataMapper *tempr = (ap.IsBound() ?
      op->GetPolyDataMapper() :
      op->vtkLabeledContourMapper::GetPolyDataMapper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLabeledContourMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkLabeledContourMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLabeledContourMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLabeledContourMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLabeledContourMapper\nC++: vtkLabeledContourMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLabeledContourMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLabeledContourMapper\nC++: vtkLabeledContourMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkLabeledContourMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkActor)\nC++: virtual void Render(vtkRenderer *ren, vtkActor *act)\n\n"},
  {(char*)"SetInputData", PyvtkLabeledContourMapper_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkPolyData)\nC++: void SetInputData(vtkPolyData *in)\n\nSpecify the input data to map.\n"},
  {(char*)"GetInput", PyvtkLabeledContourMapper_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkPolyData\nC++: vtkPolyData *GetInput()\n\nSpecify the input data to map.\n"},
  {(char*)"GetBounds", PyvtkLabeledContourMapper_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: virtual void GetBounds(double bounds[6])\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {(char*)"SetTextProperty", PyvtkLabeledContourMapper_SetTextProperty, METH_VARARGS,
   (char*)"V.SetTextProperty(vtkTextProperty)\nC++: virtual void SetTextProperty(vtkTextProperty *tprop)\n\nThe text property used to label the lines. Note that both\nvertical and horizontal justifications will be reset to\n\"Centered\" prior to rendering.\n\note This is a convenience method that clears TextProperties and\ninserts the argument as the only property in the collection.@sa\nSetTextProperties\n"},
  {(char*)"SetTextProperties", PyvtkLabeledContourMapper_SetTextProperties, METH_VARARGS,
   (char*)"V.SetTextProperties(vtkTextPropertyCollection)\nC++: virtual void SetTextProperties(\n    vtkTextPropertyCollection *coll)\n\nThe text properties used to label the lines. Note that both\nvertical and horizontal justifications will be reset to\n\"Centered\" prior to rendering. The collection is iterated through\nas the labels are generated, such that the first line (cell) in\nthe dataset is labeled using the first text property in the\ncollection, the second line is labeled with the second property,\nand so on. If the number of cells exceeds the number of\nproperties, the property collection is repeated.@sa\nSetTextProperty\n"},
  {(char*)"GetTextProperties", PyvtkLabeledContourMapper_GetTextProperties, METH_VARARGS,
   (char*)"V.GetTextProperties() -> vtkTextPropertyCollection\nC++: virtual vtkTextPropertyCollection *GetTextProperties()\n\nThe text properties used to label the lines. Note that both\nvertical and horizontal justifications will be reset to\n\"Centered\" prior to rendering. The collection is iterated through\nas the labels are generated, such that the first line (cell) in\nthe dataset is labeled using the first text property in the\ncollection, the second line is labeled with the second property,\nand so on. If the number of cells exceeds the number of\nproperties, the property collection is repeated.@sa\nSetTextProperty\n"},
  {(char*)"SetLabelVisibility", PyvtkLabeledContourMapper_SetLabelVisibility, METH_VARARGS,
   (char*)"V.SetLabelVisibility(bool)\nC++: void SetLabelVisibility(bool a)\n\nIf true, labels will be placed and drawn during rendering.\nOtherwise, only the mapper returned by GetPolyDataMapper() will\nbe rendered. The default is to draw labels.\n"},
  {(char*)"GetLabelVisibility", PyvtkLabeledContourMapper_GetLabelVisibility, METH_VARARGS,
   (char*)"V.GetLabelVisibility() -> bool\nC++: bool GetLabelVisibility()\n\nIf true, labels will be placed and drawn during rendering.\nOtherwise, only the mapper returned by GetPolyDataMapper() will\nbe rendered. The default is to draw labels.\n"},
  {(char*)"LabelVisibilityOn", PyvtkLabeledContourMapper_LabelVisibilityOn, METH_VARARGS,
   (char*)"V.LabelVisibilityOn()\nC++: void LabelVisibilityOn()\n\nIf true, labels will be placed and drawn during rendering.\nOtherwise, only the mapper returned by GetPolyDataMapper() will\nbe rendered. The default is to draw labels.\n"},
  {(char*)"LabelVisibilityOff", PyvtkLabeledContourMapper_LabelVisibilityOff, METH_VARARGS,
   (char*)"V.LabelVisibilityOff()\nC++: void LabelVisibilityOff()\n\nIf true, labels will be placed and drawn during rendering.\nOtherwise, only the mapper returned by GetPolyDataMapper() will\nbe rendered. The default is to draw labels.\n"},
  {(char*)"GetPolyDataMapper", PyvtkLabeledContourMapper_GetPolyDataMapper, METH_VARARGS,
   (char*)"V.GetPolyDataMapper() -> vtkPolyDataMapper\nC++: virtual vtkPolyDataMapper *GetPolyDataMapper()\n\nThe polydata mapper used to render the contours.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLabeledContourMapper_StaticNew()
{
  return vtkLabeledContourMapper::New();
}

PyObject *PyVTKClass_vtkLabeledContourMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLabeledContourMapper_StaticNew,
    PyvtkLabeledContourMapper_Methods,
    "vtkLabeledContourMapper", modulename,
    NULL, NULL,
    PyvtkLabeledContourMapper_Doc(),
    PyVTKClass_vtkMapperNew(modulename));
  return cls;
}

const char **PyvtkLabeledContourMapper_Doc()
{
  static const char *docstring[] = {
    "vtkLabeledContourMapper - Draw labeled isolines.\n\n",
    "Superclass: vtkMapper\n\n",
    "Draw isolines with 3D inline labels.\n\nThe lines in the input polydata will be drawn with labels displaying\nthe scalar value.\n\nFor this mapper to function properly, stenciling must be enabled in\nthe render window (it is disabled by default). Otherwise the lines\nwill be drawn through the labels.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLabeledContourMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLabeledContourMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLabeledContourMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

