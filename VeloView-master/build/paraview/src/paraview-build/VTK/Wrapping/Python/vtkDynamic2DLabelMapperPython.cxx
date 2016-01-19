// python wrapper for vtkDynamic2DLabelMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDynamic2DLabelMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDynamic2DLabelMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDynamic2DLabelMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLabeledDataMapperNew
extern "C" { PyObject *PyVTKClass_vtkLabeledDataMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkLabeledDataMapperNew
#endif

static const char **PyvtkDynamic2DLabelMapper_Doc();


static PyObject *
PyvtkDynamic2DLabelMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDynamic2DLabelMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDynamic2DLabelMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDynamic2DLabelMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDynamic2DLabelMapper::NewInstance());

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
PyvtkDynamic2DLabelMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDynamic2DLabelMapper *tempr = vtkDynamic2DLabelMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_SetPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPriorityArrayName(temp0);
      }
    else
      {
      op->vtkDynamic2DLabelMapper::SetPriorityArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_SetReversePriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReversePriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReversePriority(temp0);
      }
    else
      {
      op->vtkDynamic2DLabelMapper::SetReversePriority(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_GetReversePriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReversePriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetReversePriority() :
      op->vtkDynamic2DLabelMapper::GetReversePriority());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_ReversePriorityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReversePriorityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReversePriorityOn();
      }
    else
      {
      op->vtkDynamic2DLabelMapper::ReversePriorityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_ReversePriorityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReversePriorityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReversePriorityOff();
      }
    else
      {
      op->vtkDynamic2DLabelMapper::ReversePriorityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_SetLabelHeightPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelHeightPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelHeightPadding(temp0);
      }
    else
      {
      op->vtkDynamic2DLabelMapper::SetLabelHeightPadding(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_GetLabelHeightPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelHeightPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetLabelHeightPadding() :
      op->vtkDynamic2DLabelMapper::GetLabelHeightPadding());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_SetLabelWidthPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelWidthPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelWidthPadding(temp0);
      }
    else
      {
      op->vtkDynamic2DLabelMapper::SetLabelWidthPadding(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_GetLabelWidthPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelWidthPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetLabelWidthPadding() :
      op->vtkDynamic2DLabelMapper::GetLabelWidthPadding());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  vtkViewport *temp0 = NULL;
  vtkActor2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->RenderOpaqueGeometry(temp0, temp1);
      }
    else
      {
      op->vtkDynamic2DLabelMapper::RenderOpaqueGeometry(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  vtkViewport *temp0 = NULL;
  vtkActor2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->RenderOverlay(temp0, temp1);
      }
    else
      {
      op->vtkDynamic2DLabelMapper::RenderOverlay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDynamic2DLabelMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkDynamic2DLabelMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nInstantiate object with %%-#6.3g label format. By default, point\nids are labeled.\n"},
  {(char*)"IsA", PyvtkDynamic2DLabelMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nInstantiate object with %%-#6.3g label format. By default, point\nids are labeled.\n"},
  {(char*)"NewInstance", PyvtkDynamic2DLabelMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDynamic2DLabelMapper\nC++: vtkDynamic2DLabelMapper *NewInstance()\n\nInstantiate object with %%-#6.3g label format. By default, point\nids are labeled.\n"},
  {(char*)"SafeDownCast", PyvtkDynamic2DLabelMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDynamic2DLabelMapper\nC++: vtkDynamic2DLabelMapper *SafeDownCast(vtkObject* o)\n\nInstantiate object with %%-#6.3g label format. By default, point\nids are labeled.\n"},
  {(char*)"SetPriorityArrayName", PyvtkDynamic2DLabelMapper_SetPriorityArrayName, METH_VARARGS,
   (char*)"V.SetPriorityArrayName(string)\nC++: void SetPriorityArrayName(const char *name)\n\nSet the points array name to use to give priority to labels.\nDefaults to \"priority\".\n"},
  {(char*)"SetReversePriority", PyvtkDynamic2DLabelMapper_SetReversePriority, METH_VARARGS,
   (char*)"V.SetReversePriority(bool)\nC++: void SetReversePriority(bool a)\n\nWhether to reverse the priority order (i.e. low values have high\npriority). Default is off.\n"},
  {(char*)"GetReversePriority", PyvtkDynamic2DLabelMapper_GetReversePriority, METH_VARARGS,
   (char*)"V.GetReversePriority() -> bool\nC++: bool GetReversePriority()\n\nWhether to reverse the priority order (i.e. low values have high\npriority). Default is off.\n"},
  {(char*)"ReversePriorityOn", PyvtkDynamic2DLabelMapper_ReversePriorityOn, METH_VARARGS,
   (char*)"V.ReversePriorityOn()\nC++: void ReversePriorityOn()\n\nWhether to reverse the priority order (i.e. low values have high\npriority). Default is off.\n"},
  {(char*)"ReversePriorityOff", PyvtkDynamic2DLabelMapper_ReversePriorityOff, METH_VARARGS,
   (char*)"V.ReversePriorityOff()\nC++: void ReversePriorityOff()\n\nWhether to reverse the priority order (i.e. low values have high\npriority). Default is off.\n"},
  {(char*)"SetLabelHeightPadding", PyvtkDynamic2DLabelMapper_SetLabelHeightPadding, METH_VARARGS,
   (char*)"V.SetLabelHeightPadding(float)\nC++: void SetLabelHeightPadding(float a)\n\nSet the label height padding as a percentage. The percentage is a\npercentage of your label height. Default is 50%.\n"},
  {(char*)"GetLabelHeightPadding", PyvtkDynamic2DLabelMapper_GetLabelHeightPadding, METH_VARARGS,
   (char*)"V.GetLabelHeightPadding() -> float\nC++: float GetLabelHeightPadding()\n\nSet the label height padding as a percentage. The percentage is a\npercentage of your label height. Default is 50%.\n"},
  {(char*)"SetLabelWidthPadding", PyvtkDynamic2DLabelMapper_SetLabelWidthPadding, METH_VARARGS,
   (char*)"V.SetLabelWidthPadding(float)\nC++: void SetLabelWidthPadding(float a)\n\nSet the label width padding as a percentage. The percentage is a\npercentage of your label ^height^ (yes, not a typo). Default is\n50%.\n"},
  {(char*)"GetLabelWidthPadding", PyvtkDynamic2DLabelMapper_GetLabelWidthPadding, METH_VARARGS,
   (char*)"V.GetLabelWidthPadding() -> float\nC++: float GetLabelWidthPadding()\n\nSet the label width padding as a percentage. The percentage is a\npercentage of your label ^height^ (yes, not a typo). Default is\n50%.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkDynamic2DLabelMapper_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport, vtkActor2D)\nC++: void RenderOpaqueGeometry(vtkViewport *viewport,\n    vtkActor2D *actor)\n\nDraw non-overlapping labels to the screen.\n"},
  {(char*)"RenderOverlay", PyvtkDynamic2DLabelMapper_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport, vtkActor2D)\nC++: void RenderOverlay(vtkViewport *viewport, vtkActor2D *actor)\n\nDraw non-overlapping labels to the screen.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDynamic2DLabelMapper_StaticNew()
{
  return vtkDynamic2DLabelMapper::New();
}

PyObject *PyVTKClass_vtkDynamic2DLabelMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDynamic2DLabelMapper_StaticNew,
    PyvtkDynamic2DLabelMapper_Methods,
    "vtkDynamic2DLabelMapper", modulename,
    NULL, NULL,
    PyvtkDynamic2DLabelMapper_Doc(),
    PyVTKClass_vtkLabeledDataMapperNew(modulename));
  return cls;
}

const char **PyvtkDynamic2DLabelMapper_Doc()
{
  static const char *docstring[] = {
    "vtkDynamic2DLabelMapper - draw text labels at 2D dataset points\n\n",
    "Superclass: vtkLabeledDataMapper\n\n",
    "vtkDynamic2DLabelMapper is a mapper that renders text at dataset\npoints such that the labels do not overlap. Various items can be\nlabeled including point ids, scalars, vectors, normals, texture\ncoordinates, tensors, and field data components. This mapper assumes\nthat the points are located on the x-y plane and that the camera\nremains perpendicular to that plane with a y-up axis (this can be\nconstr",
    "ained using vtkImageInteractor). On the first render, the\nmapper computes the visiblility of all labels at all scales, and\nqueries this information on successive renders. This causes the first\nrender to be much slower. The visibility algorithm is a greedy\napproach based on the point id, so the label for a point will be\ndrawn unless the label for a point with lower id overlaps it.\n\nCaveats:\n\nUse th",
    "is filter in combination with vtkSelectVisiblePoints if you\nwant to label only points that are visible. If you want to label\ncells rather than points, use the filter vtkCellCenters to generate\npoints at the center of the cells. Also, you can use the class\nvtkIdFilter to generate ids as scalars or field data, which can then\nbe labeled.\n\nSee Also:\n\nvtkLabeledDataMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDynamic2DLabelMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDynamic2DLabelMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDynamic2DLabelMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

