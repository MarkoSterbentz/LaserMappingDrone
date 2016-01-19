// python wrapper for vtkViewDependentErrorMetric
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkViewDependentErrorMetric.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkViewDependentErrorMetric(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkViewDependentErrorMetricNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGenericSubdivisionErrorMetricNew
extern "C" { PyObject *PyVTKClass_vtkGenericSubdivisionErrorMetricNew(const char *); }
#define DECLARED_PyVTKClass_vtkGenericSubdivisionErrorMetricNew
#endif

static const char **PyvtkViewDependentErrorMetric_Doc();


static PyObject *
PyvtkViewDependentErrorMetric_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkViewDependentErrorMetric::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkViewDependentErrorMetric::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkViewDependentErrorMetric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkViewDependentErrorMetric::NewInstance());

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
PyvtkViewDependentErrorMetric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkViewDependentErrorMetric *tempr = vtkViewDependentErrorMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_GetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPixelTolerance() :
      op->vtkViewDependentErrorMetric::GetPixelTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_SetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPixelTolerance(temp0);
      }
    else
      {
      op->vtkViewDependentErrorMetric::SetPixelTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkViewport *tempr = (ap.IsBound() ?
      op->GetViewport() :
      op->vtkViewDependentErrorMetric::GetViewport());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_SetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->SetViewport(temp0);
      }
    else
      {
      op->vtkViewDependentErrorMetric::SetViewport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_RequiresEdgeSubdivision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresEdgeSubdivision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  double temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->RequiresEdgeSubdivision(temp0, temp1, temp2, temp3) :
      op->vtkViewDependentErrorMetric::RequiresEdgeSubdivision(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkViewDependentErrorMetric_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewDependentErrorMetric *op = static_cast<vtkViewDependentErrorMetric *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  double temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    double tempr = (ap.IsBound() ?
      op->GetError(temp0, temp1, temp2, temp3) :
      op->vtkViewDependentErrorMetric::GetError(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyMethodDef PyvtkViewDependentErrorMetric_Methods[] = {
  {(char*)"GetClassName", PyvtkViewDependentErrorMetric_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK type and error macros.\n"},
  {(char*)"IsA", PyvtkViewDependentErrorMetric_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK type and error macros.\n"},
  {(char*)"NewInstance", PyvtkViewDependentErrorMetric_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkViewDependentErrorMetric\nC++: vtkViewDependentErrorMetric *NewInstance()\n\nStandard VTK type and error macros.\n"},
  {(char*)"SafeDownCast", PyvtkViewDependentErrorMetric_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkViewDependentErrorMetric\nC++: vtkViewDependentErrorMetric *SafeDownCast(vtkObject* o)\n\nStandard VTK type and error macros.\n"},
  {(char*)"GetPixelTolerance", PyvtkViewDependentErrorMetric_GetPixelTolerance, METH_VARARGS,
   (char*)"V.GetPixelTolerance() -> float\nC++: double GetPixelTolerance()\n\nReturn the squared screen-based geometric accurary measured in\npixels. An accuracy less or equal to 0.25 (0.5^2) ensures that\nthe screen-space interpolation of a mid-point matchs exactly with\nthe projection of the mid-point (a value less than 1 but greater\nthan 0.25 is not enough, because of 8-neighbors). Maybe it is\nuseful for lower accuracy in case of anti-aliasing?\n\\post positive_result: result>0\n"},
  {(char*)"SetPixelTolerance", PyvtkViewDependentErrorMetric_SetPixelTolerance, METH_VARARGS,
   (char*)"V.SetPixelTolerance(float)\nC++: void SetPixelTolerance(double value)\n\nSet the squared screen-based geometric accuracy measured in\npixels. Subdivision will be required if the square distance\nbetween the projection of the real point and the straight line\npassing through the projection of the vertices of the edge is\ngreater than `value'. For instance, 0.25 will give better result\nthan 1.\n\\pre positive_value: value>0\n"},
  {(char*)"GetViewport", PyvtkViewDependentErrorMetric_GetViewport, METH_VARARGS,
   (char*)"V.GetViewport() -> vtkViewport\nC++: vtkViewport *GetViewport()\n\nSet/Get the renderer with `renderer' on which the error metric is\nbased. The error metric use the active camera of the renderer.\n"},
  {(char*)"SetViewport", PyvtkViewDependentErrorMetric_SetViewport, METH_VARARGS,
   (char*)"V.SetViewport(vtkViewport)\nC++: void SetViewport(vtkViewport *viewport)\n\nSet/Get the renderer with `renderer' on which the error metric is\nbased. The error metric use the active camera of the renderer.\n"},
  {(char*)"RequiresEdgeSubdivision", PyvtkViewDependentErrorMetric_RequiresEdgeSubdivision, METH_VARARGS,
   (char*)"V.RequiresEdgeSubdivision([float, ...], [float, ...], [float,\n    ...], float) -> int\nC++: int RequiresEdgeSubdivision(double *leftPoint,\n    double *midPoint, double *rightPoint, double alpha)\n\nDoes the edge need to be subdivided according to the distance\nbetween the line passing through its endpoints in screen space\nand the projection of its mid point? The edge is defined by its\n`leftPoint' and its `rightPoint'. `leftPoint', `midPoint' and\n`rightPoint' have to be initialized before calling\nRequiresEdgeSubdivision(). Their format is global coordinates,\nparametric coordinates and point centered attributes: xyx rst abc\nde... `alpha' is the normalized abscissa of the midpoint along\nthe edge. (close to 0 means close to the left point, close to 1\nmeans close to the right point)\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n        \n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n"},
  {(char*)"GetError", PyvtkViewDependentErrorMetric_GetError, METH_VARARGS,
   (char*)"V.GetError([float, ...], [float, ...], [float, ...], float)\n    -> float\nC++: double GetError(double *leftPoint, double *midPoint,\n    double *rightPoint, double alpha)\n\nReturn the error at the mid-point. The type of error depends on\nthe state of the concrete error metric. For instance, it can\nreturn an absolute or relative error metric. See\nRequiresEdgeSubdivision() for a description of the arguments.\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n        \n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n\\post positive_result: result>=0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkViewDependentErrorMetric_StaticNew()
{
  return vtkViewDependentErrorMetric::New();
}

PyObject *PyVTKClass_vtkViewDependentErrorMetricNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkViewDependentErrorMetric_StaticNew,
    PyvtkViewDependentErrorMetric_Methods,
    "vtkViewDependentErrorMetric", modulename,
    NULL, NULL,
    PyvtkViewDependentErrorMetric_Doc(),
    PyVTKClass_vtkGenericSubdivisionErrorMetricNew(modulename));
  return cls;
}

const char **PyvtkViewDependentErrorMetric_Doc()
{
  static const char *docstring[] = {
    "vtkViewDependentErrorMetric - Objects that compute a\n\n",
    "Superclass: vtkGenericSubdivisionErrorMetric\n\n",
    "It is a concrete error metric, based on a geometric criterium in the\nscreen space: the variation of the projected edge from a projected\nstraight line\n\nSee Also:\n\nvtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkViewDependentErrorMetric(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkViewDependentErrorMetricNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkViewDependentErrorMetric", o) != 0)
    {
    Py_DECREF(o);
    }

}

