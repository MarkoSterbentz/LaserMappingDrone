// python wrapper for vtkChartXYZ
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRect.h"
#include "vtkColor.h"
#include "vtkContextMouseEvent.h"
#include "vtkContextKeyEvent.h"
#include "vtkChartXYZ.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkChartXYZ(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkChartXYZNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkChartXYZ_Doc();


static PyObject *
PyvtkChartXYZ_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkChartXYZ::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXYZ_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartXYZ::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXYZ_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartXYZ *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartXYZ::NewInstance());

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
PyvtkChartXYZ_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkChartXYZ *tempr = vtkChartXYZ::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXYZ_SetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  vtkRectf *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf"))
    {
    if (ap.IsBound())
      {
      op->SetGeometry(*temp0);
      }
    else
      {
      op->vtkChartXYZ::SetGeometry(*temp0);
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
PyvtkChartXYZ_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAngle(temp0);
      }
    else
      {
      op->vtkChartXYZ::SetAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXYZ_SetAroundX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAroundX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAroundX(temp0);
      }
    else
      {
      op->vtkChartXYZ::SetAroundX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXYZ_SetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  vtkAnnotationLink *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLink"))
    {
    if (ap.IsBound())
      {
      op->SetAnnotationLink(temp0);
      }
    else
      {
      op->vtkChartXYZ::SetAnnotationLink(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXYZ_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetAxis(temp0) :
      op->vtkChartXYZ::GetAxis(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXYZ_SetAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  vtkColor4ub *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4ub"))
    {
    if (ap.IsBound())
      {
      op->SetAxisColor(*temp0);
      }
    else
      {
      op->vtkChartXYZ::SetAxisColor(*temp0);
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
PyvtkChartXYZ_GetAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->GetAxisColor() :
      op->vtkChartXYZ::GetAxisColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
      }
    }

  return result;
}


static PyObject *
PyvtkChartXYZ_SetAutoRotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoRotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoRotate(temp0);
      }
    else
      {
      op->vtkChartXYZ::SetAutoRotate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXYZ_SetDecorateAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDecorateAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDecorateAxes(temp0);
      }
    else
      {
      op->vtkChartXYZ::SetDecorateAxes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXYZ_SetFitToScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFitToScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFitToScene(temp0);
      }
    else
      {
      op->vtkChartXYZ::SetFitToScene(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXYZ_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkChartXYZ::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXYZ_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartXYZ::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXYZ_AddPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  vtkPlot3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot3D"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddPlot(temp0) :
      op->vtkChartXYZ::AddPlot(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXYZ_ClearPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearPlots();
      }
    else
      {
      op->vtkChartXYZ::ClearPlots();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXYZ_RecalculateBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecalculateBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RecalculateBounds();
      }
    else
      {
      op->vtkChartXYZ::RecalculateBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXYZ_RecalculateTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecalculateTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXYZ *op = static_cast<vtkChartXYZ *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RecalculateTransform();
      }
    else
      {
      op->vtkChartXYZ::RecalculateTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkChartXYZ_Methods[] = {
  {(char*)"GetClassName", PyvtkChartXYZ_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChartXYZ_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChartXYZ_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkChartXYZ\nC++: vtkChartXYZ *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChartXYZ_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChartXYZ\nC++: vtkChartXYZ *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGeometry", PyvtkChartXYZ_SetGeometry, METH_VARARGS,
   (char*)"V.SetGeometry(vtkRectf)\nC++: void SetGeometry(const vtkRectf &bounds)\n\nSet the geometry in pixel coordinates (origin and width/height).\nThis method also sets up the end points of the axes of the chart.\nFor this reason, if you call SetAroundX(), you should call\nSetGeometry() afterwards.\n"},
  {(char*)"SetAngle", PyvtkChartXYZ_SetAngle, METH_VARARGS,
   (char*)"V.SetAngle(float)\nC++: void SetAngle(double angle)\n\nSet the rotation angle for the chart (AutoRotate mode only).\n"},
  {(char*)"SetAroundX", PyvtkChartXYZ_SetAroundX, METH_VARARGS,
   (char*)"V.SetAroundX(bool)\nC++: void SetAroundX(bool isX)\n\nSet whether or not we're rotating about the X axis.\n"},
  {(char*)"SetAnnotationLink", PyvtkChartXYZ_SetAnnotationLink, METH_VARARGS,
   (char*)"V.SetAnnotationLink(vtkAnnotationLink)\nC++: virtual void SetAnnotationLink(vtkAnnotationLink *link)\n\nSet the vtkAnnotationLink for the chart.\n"},
  {(char*)"GetAxis", PyvtkChartXYZ_GetAxis, METH_VARARGS,
   (char*)"V.GetAxis(int) -> vtkAxis\nC++: vtkAxis *GetAxis(int axis)\n\nGet the x (0), y (1) or z (2) axis.\n"},
  {(char*)"SetAxisColor", PyvtkChartXYZ_SetAxisColor, METH_VARARGS,
   (char*)"V.SetAxisColor(vtkColor4ub)\nC++: void SetAxisColor(const vtkColor4ub &color)\n\nSet the color for the axes.\n"},
  {(char*)"GetAxisColor", PyvtkChartXYZ_GetAxisColor, METH_VARARGS,
   (char*)"V.GetAxisColor() -> vtkColor4ub\nC++: vtkColor4ub GetAxisColor()\n\nSet the color for the axes.\n"},
  {(char*)"SetAutoRotate", PyvtkChartXYZ_SetAutoRotate, METH_VARARGS,
   (char*)"V.SetAutoRotate(bool)\nC++: void SetAutoRotate(bool b)\n\nSet whether or not we're using this chart to rotate on a timer.\nDefault value is false.\n"},
  {(char*)"SetDecorateAxes", PyvtkChartXYZ_SetDecorateAxes, METH_VARARGS,
   (char*)"V.SetDecorateAxes(bool)\nC++: void SetDecorateAxes(bool b)\n\nSet whether or not axes labels & tick marks should be drawn.\nDefault value is true.\n"},
  {(char*)"SetFitToScene", PyvtkChartXYZ_SetFitToScene, METH_VARARGS,
   (char*)"V.SetFitToScene(bool)\nC++: void SetFitToScene(bool b)\n\nSet whether or not the chart should automatically resize itself\nto fill the scene.  Default value is true.\n"},
  {(char*)"Update", PyvtkChartXYZ_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering.\n"},
  {(char*)"Paint", PyvtkChartXYZ_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn.\n"},
  {(char*)"AddPlot", PyvtkChartXYZ_AddPlot, METH_VARARGS,
   (char*)"V.AddPlot(vtkPlot3D) -> int\nC++: virtual vtkIdType AddPlot(vtkPlot3D *plot)\n\nAdds a plot to the chart.\n"},
  {(char*)"ClearPlots", PyvtkChartXYZ_ClearPlots, METH_VARARGS,
   (char*)"V.ClearPlots()\nC++: void ClearPlots()\n\nRemove all the plots from this chart.\n"},
  {(char*)"RecalculateBounds", PyvtkChartXYZ_RecalculateBounds, METH_VARARGS,
   (char*)"V.RecalculateBounds()\nC++: void RecalculateBounds()\n\nDetermine the XYZ bounds of the plots within this chart. This\ninformation is then used to set the range of the axes.\n"},
  {(char*)"RecalculateTransform", PyvtkChartXYZ_RecalculateTransform, METH_VARARGS,
   (char*)"V.RecalculateTransform()\nC++: void RecalculateTransform()\n\nUse this chart's Geometry to set the endpoints of its axes. This\nmethod also sets up a transformation that is used to properly\nrender the data within the chart.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkChartXYZ_StaticNew()
{
  return vtkChartXYZ::New();
}

PyObject *PyVTKClass_vtkChartXYZNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkChartXYZ_StaticNew,
    PyvtkChartXYZ_Methods,
    "vtkChartXYZ", modulename,
    NULL, NULL,
    PyvtkChartXYZ_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));
  return cls;
}

const char **PyvtkChartXYZ_Doc()
{
  static const char *docstring[] = {
    "vtkChartXYZ - Factory class for drawing 3D XYZ charts.\n\n",
    "Superclass: vtkContextItem\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChartXYZ(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChartXYZNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChartXYZ", o) != 0)
    {
    Py_DECREF(o);
    }

}

