// python wrapper for vtkGraphAnnotationLayersFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGraphAnnotationLayersFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGraphAnnotationLayersFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGraphAnnotationLayersFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGraphAnnotationLayersFilter_Doc();


static PyObject *
PyvtkGraphAnnotationLayersFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGraphAnnotationLayersFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphAnnotationLayersFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraphAnnotationLayersFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphAnnotationLayersFilter::NewInstance());

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
PyvtkGraphAnnotationLayersFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGraphAnnotationLayersFilter *tempr = vtkGraphAnnotationLayersFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_OutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineOn();
      }
    else
      {
      op->vtkGraphAnnotationLayersFilter::OutlineOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_OutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineOff();
      }
    else
      {
      op->vtkGraphAnnotationLayersFilter::OutlineOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutline(temp0);
      }
    else
      {
      op->vtkGraphAnnotationLayersFilter::SetOutline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleFactor(temp0);
      }
    else
      {
      op->vtkGraphAnnotationLayersFilter::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetHullShapeToBoundingRectangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHullShapeToBoundingRectangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHullShapeToBoundingRectangle();
      }
    else
      {
      op->vtkGraphAnnotationLayersFilter::SetHullShapeToBoundingRectangle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetHullShapeToConvexHull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHullShapeToConvexHull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHullShapeToConvexHull();
      }
    else
      {
      op->vtkGraphAnnotationLayersFilter::SetHullShapeToConvexHull();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetMinHullSizeInWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinHullSizeInWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinHullSizeInWorld(temp0);
      }
    else
      {
      op->vtkGraphAnnotationLayersFilter::SetMinHullSizeInWorld(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetMinHullSizeInDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinHullSizeInDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinHullSizeInDisplay(temp0);
      }
    else
      {
      op->vtkGraphAnnotationLayersFilter::SetMinHullSizeInDisplay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkGraphAnnotationLayersFilter::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphAnnotationLayersFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAnnotationLayersFilter *op = static_cast<vtkGraphAnnotationLayersFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGraphAnnotationLayersFilter::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphAnnotationLayersFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphAnnotationLayersFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphAnnotationLayersFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphAnnotationLayersFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGraphAnnotationLayersFilter\nC++: vtkGraphAnnotationLayersFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphAnnotationLayersFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphAnnotationLayersFilter\nC++: vtkGraphAnnotationLayersFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OutlineOn", PyvtkGraphAnnotationLayersFilter_OutlineOn, METH_VARARGS,
   (char*)"V.OutlineOn()\nC++: void OutlineOn()\n\nProduce outlines of the hulls on output port 1.\n"},
  {(char*)"OutlineOff", PyvtkGraphAnnotationLayersFilter_OutlineOff, METH_VARARGS,
   (char*)"V.OutlineOff()\nC++: void OutlineOff()\n\nProduce outlines of the hulls on output port 1.\n"},
  {(char*)"SetOutline", PyvtkGraphAnnotationLayersFilter_SetOutline, METH_VARARGS,
   (char*)"V.SetOutline(bool)\nC++: void SetOutline(bool b)\n\nProduce outlines of the hulls on output port 1.\n"},
  {(char*)"SetScaleFactor", PyvtkGraphAnnotationLayersFilter_SetScaleFactor, METH_VARARGS,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double scale)\n\nScale each hull by the amount specified. Defaults to 1.0.\n"},
  {(char*)"SetHullShapeToBoundingRectangle", PyvtkGraphAnnotationLayersFilter_SetHullShapeToBoundingRectangle, METH_VARARGS,
   (char*)"V.SetHullShapeToBoundingRectangle()\nC++: void SetHullShapeToBoundingRectangle()\n\nSet the shape of the hulls to bounding rectangle.\n"},
  {(char*)"SetHullShapeToConvexHull", PyvtkGraphAnnotationLayersFilter_SetHullShapeToConvexHull, METH_VARARGS,
   (char*)"V.SetHullShapeToConvexHull()\nC++: void SetHullShapeToConvexHull()\n\nSet the shape of the hulls to convex hull. Default.\n"},
  {(char*)"SetMinHullSizeInWorld", PyvtkGraphAnnotationLayersFilter_SetMinHullSizeInWorld, METH_VARARGS,
   (char*)"V.SetMinHullSizeInWorld(float)\nC++: void SetMinHullSizeInWorld(double size)\n\nSet the minimum x,y-dimensions of each hull in world coordinates.\nDefaults to 1.0. Set to 0.0 to disable.\n"},
  {(char*)"SetMinHullSizeInDisplay", PyvtkGraphAnnotationLayersFilter_SetMinHullSizeInDisplay, METH_VARARGS,
   (char*)"V.SetMinHullSizeInDisplay(int)\nC++: void SetMinHullSizeInDisplay(int size)\n\nSet the minimum x,y-dimensions of each hull in pixels. You must\nalso set a vtkRenderer. Defaults to 1. Set to 0 to disable.\n"},
  {(char*)"SetRenderer", PyvtkGraphAnnotationLayersFilter_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *renderer)\n\nRenderer needed for MinHullSizeInDisplay calculation. Not\nreference counted.\n"},
  {(char*)"GetMTime", PyvtkGraphAnnotationLayersFilter_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nThe modified time of this filter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphAnnotationLayersFilter_StaticNew()
{
  return vtkGraphAnnotationLayersFilter::New();
}

PyObject *PyVTKClass_vtkGraphAnnotationLayersFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphAnnotationLayersFilter_StaticNew,
    PyvtkGraphAnnotationLayersFilter_Methods,
    "vtkGraphAnnotationLayersFilter", modulename,
    NULL, NULL,
    PyvtkGraphAnnotationLayersFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGraphAnnotationLayersFilter_Doc()
{
  static const char *docstring[] = {
    "vtkGraphAnnotationLayersFilter - Produce filled convex hulls around\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "Produces a vtkPolyData comprised of filled polygons of the convex\nhull of a cluster. Alternatively, you may choose to output bounding\nrectangles. Clusters with fewer than three vertices are artificially\nexpanded to ensure visibility (see vtkConvexHull2D).\n\nThe first input is a vtkGraph with points, possibly set by passing\nthe graph through vtkGraphLayout (z-values are ignored). The second\ninput is",
    " a vtkAnnotationsLayer containing vtkSelectionNodeS of vertex\nids (the 'clusters' output of vtkTulipReader for example).\n\nSetting OutlineOn() additionally produces outlines of the clusters on\noutput port 1.\n\nThree arrays are added to the cells of the output: \"Hull id\"; \"Hull\nname\"; and \"Hull color\".\n\nNote: This filter operates in the x,y-plane and as such works best\nwith an interactor style that d",
    "oes not allow camera rotation, such as\nvtkInteractorStyleRubberBand2D.\n\nSee also:\n\nvtkContext2D\n\nThanks:\n\nThanks to Colin Myers, University of Leeds for providing this\nimplementation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphAnnotationLayersFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphAnnotationLayersFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphAnnotationLayersFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

