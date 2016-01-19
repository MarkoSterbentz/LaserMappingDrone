// python wrapper for vtkGeometricErrorMetric
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGeometricErrorMetric.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGeometricErrorMetric(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGeometricErrorMetricNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGenericSubdivisionErrorMetricNew
extern "C" { PyObject *PyVTKClass_vtkGenericSubdivisionErrorMetricNew(const char *); }
#define DECLARED_PyVTKClass_vtkGenericSubdivisionErrorMetricNew
#endif

static const char **PyvtkGeometricErrorMetric_Doc();


static PyObject *
PyvtkGeometricErrorMetric_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGeometricErrorMetric::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGeometricErrorMetric::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGeometricErrorMetric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGeometricErrorMetric::NewInstance());

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
PyvtkGeometricErrorMetric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGeometricErrorMetric *tempr = vtkGeometricErrorMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_GetAbsoluteGeometricTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteGeometricTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteGeometricTolerance() :
      op->vtkGeometricErrorMetric::GetAbsoluteGeometricTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_SetAbsoluteGeometricTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteGeometricTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAbsoluteGeometricTolerance(temp0);
      }
    else
      {
      op->vtkGeometricErrorMetric::SetAbsoluteGeometricTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_SetRelativeGeometricTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeGeometricTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  double temp0;
  vtkGenericDataSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetRelativeGeometricTolerance(temp0, temp1);
      }
    else
      {
      op->vtkGeometricErrorMetric::SetRelativeGeometricTolerance(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_RequiresEdgeSubdivision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresEdgeSubdivision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

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
      op->vtkGeometricErrorMetric::RequiresEdgeSubdivision(temp0, temp1, temp2, temp3));

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
PyvtkGeometricErrorMetric_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

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
      op->vtkGeometricErrorMetric::GetError(temp0, temp1, temp2, temp3));

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
PyvtkGeometricErrorMetric_GetRelative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRelative() :
      op->vtkGeometricErrorMetric::GetRelative());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeometricErrorMetric_Methods[] = {
  {(char*)"GetClassName", PyvtkGeometricErrorMetric_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK type and error macros.\n"},
  {(char*)"IsA", PyvtkGeometricErrorMetric_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK type and error macros.\n"},
  {(char*)"NewInstance", PyvtkGeometricErrorMetric_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGeometricErrorMetric\nC++: vtkGeometricErrorMetric *NewInstance()\n\nStandard VTK type and error macros.\n"},
  {(char*)"SafeDownCast", PyvtkGeometricErrorMetric_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeometricErrorMetric\nC++: vtkGeometricErrorMetric *SafeDownCast(vtkObject* o)\n\nStandard VTK type and error macros.\n"},
  {(char*)"GetAbsoluteGeometricTolerance", PyvtkGeometricErrorMetric_GetAbsoluteGeometricTolerance, METH_VARARGS,
   (char*)"V.GetAbsoluteGeometricTolerance() -> float\nC++: double GetAbsoluteGeometricTolerance()\n\nReturn the squared absolute geometric accuracy. See\nSetAbsoluteGeometricTolerance() for details.\n\\post positive_result: result>0\n"},
  {(char*)"SetAbsoluteGeometricTolerance", PyvtkGeometricErrorMetric_SetAbsoluteGeometricTolerance, METH_VARARGS,
   (char*)"V.SetAbsoluteGeometricTolerance(float)\nC++: void SetAbsoluteGeometricTolerance(double value)\n\nSet the geometric accuracy with a squared absolute value. This is\nthe geometric object-based accuracy. Subdivision will be required\nif the square distance between the real point and the straight\nline passing through the vertices of the edge is greater than\n`value'. For instance 0.01 will give better result than 0.1.\n\\pre positive_value: value>0\n"},
  {(char*)"SetRelativeGeometricTolerance", PyvtkGeometricErrorMetric_SetRelativeGeometricTolerance, METH_VARARGS,
   (char*)"V.SetRelativeGeometricTolerance(float, vtkGenericDataSet)\nC++: void SetRelativeGeometricTolerance(double value,\n    vtkGenericDataSet *ds)\n\nSet the geometric accuracy with a value relative to the length of\nthe bounding box of the dataset. Internally compute the absolute\ntolerance. For instance 0.01 will give better result than 0.1.\n\\pre valid_range_value: value>0 && value<1\n\\pre ds_exists: ds!=0\n"},
  {(char*)"RequiresEdgeSubdivision", PyvtkGeometricErrorMetric_RequiresEdgeSubdivision, METH_VARARGS,
   (char*)"V.RequiresEdgeSubdivision([float, ...], [float, ...], [float,\n    ...], float) -> int\nC++: int RequiresEdgeSubdivision(double *leftPoint,\n    double *midPoint, double *rightPoint, double alpha)\n\nDoes the edge need to be subdivided according to the distance\nbetween the line passing through its endpoints and the mid point?\nThe edge is defined by its `leftPoint' and its `rightPoint'.\n`leftPoint', `midPoint' and `rightPoint' have to be initialized\nbefore calling RequiresEdgeSubdivision(). Their format is global\ncoordinates, parametric coordinates and point centered\nattributes: xyx rst abc de... `alpha' is the normalized abscissa\nof the midpoint along the edge. (close to 0 means close to the\nleft point, close to 1 means close to the right point)\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n        \n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n"},
  {(char*)"GetError", PyvtkGeometricErrorMetric_GetError, METH_VARARGS,
   (char*)"V.GetError([float, ...], [float, ...], [float, ...], float)\n    -> float\nC++: double GetError(double *leftPoint, double *midPoint,\n    double *rightPoint, double alpha)\n\nReturn the error at the mid-point. It will return an error\nrelative to the bounding box size if GetRelative() is true, a\nsquare absolute error otherwise. See RequiresEdgeSubdivision()\nfor a description of the arguments.\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n        \n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n\\post positive_result: result>=0\n"},
  {(char*)"GetRelative", PyvtkGeometricErrorMetric_GetRelative, METH_VARARGS,
   (char*)"V.GetRelative() -> int\nC++: int GetRelative()\n\nReturn the type of output of GetError()\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeometricErrorMetric_StaticNew()
{
  return vtkGeometricErrorMetric::New();
}

PyObject *PyVTKClass_vtkGeometricErrorMetricNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeometricErrorMetric_StaticNew,
    PyvtkGeometricErrorMetric_Methods,
    "vtkGeometricErrorMetric", modulename,
    NULL, NULL,
    PyvtkGeometricErrorMetric_Doc(),
    PyVTKClass_vtkGenericSubdivisionErrorMetricNew(modulename));
  return cls;
}

const char **PyvtkGeometricErrorMetric_Doc()
{
  static const char *docstring[] = {
    "vtkGeometricErrorMetric - Objects that compute\n\n",
    "Superclass: vtkGenericSubdivisionErrorMetric\n\n",
    "It is a concrete error metric, based on a geometric criterium: the\nvariation of the edge from a straight line.\n\nSee Also:\n\nvtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeometricErrorMetric(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeometricErrorMetricNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeometricErrorMetric", o) != 0)
    {
    Py_DECREF(o);
    }

}

