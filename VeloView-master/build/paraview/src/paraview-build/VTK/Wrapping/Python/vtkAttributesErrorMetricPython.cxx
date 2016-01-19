// python wrapper for vtkAttributesErrorMetric
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAttributesErrorMetric.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAttributesErrorMetric(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAttributesErrorMetricNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGenericSubdivisionErrorMetricNew
extern "C" { PyObject *PyVTKClass_vtkGenericSubdivisionErrorMetricNew(const char *); }
#define DECLARED_PyVTKClass_vtkGenericSubdivisionErrorMetricNew
#endif

static const char **PyvtkAttributesErrorMetric_Doc();


static PyObject *
PyvtkAttributesErrorMetric_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAttributesErrorMetric::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAttributesErrorMetric::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAttributesErrorMetric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAttributesErrorMetric::NewInstance());

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
PyvtkAttributesErrorMetric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAttributesErrorMetric *tempr = vtkAttributesErrorMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_GetAbsoluteAttributeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteAttributeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteAttributeTolerance() :
      op->vtkAttributesErrorMetric::GetAbsoluteAttributeTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_SetAbsoluteAttributeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteAttributeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAbsoluteAttributeTolerance(temp0);
      }
    else
      {
      op->vtkAttributesErrorMetric::SetAbsoluteAttributeTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_GetAttributeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAttributeTolerance() :
      op->vtkAttributesErrorMetric::GetAttributeTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_SetAttributeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeTolerance(temp0);
      }
    else
      {
      op->vtkAttributesErrorMetric::SetAttributeTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributesErrorMetric_RequiresEdgeSubdivision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresEdgeSubdivision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

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
      op->vtkAttributesErrorMetric::RequiresEdgeSubdivision(temp0, temp1, temp2, temp3));

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
PyvtkAttributesErrorMetric_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributesErrorMetric *op = static_cast<vtkAttributesErrorMetric *>(vp);

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
      op->vtkAttributesErrorMetric::GetError(temp0, temp1, temp2, temp3));

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

static PyMethodDef PyvtkAttributesErrorMetric_Methods[] = {
  {(char*)"GetClassName", PyvtkAttributesErrorMetric_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK type and error macros.\n"},
  {(char*)"IsA", PyvtkAttributesErrorMetric_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK type and error macros.\n"},
  {(char*)"NewInstance", PyvtkAttributesErrorMetric_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAttributesErrorMetric\nC++: vtkAttributesErrorMetric *NewInstance()\n\nStandard VTK type and error macros.\n"},
  {(char*)"SafeDownCast", PyvtkAttributesErrorMetric_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAttributesErrorMetric\nC++: vtkAttributesErrorMetric *SafeDownCast(vtkObject* o)\n\nStandard VTK type and error macros.\n"},
  {(char*)"GetAbsoluteAttributeTolerance", PyvtkAttributesErrorMetric_GetAbsoluteAttributeTolerance, METH_VARARGS,
   (char*)"V.GetAbsoluteAttributeTolerance() -> float\nC++: double GetAbsoluteAttributeTolerance()\n\nAbsolute tolerance of the active scalar (attribute+component).\nSubdivision is required if the square distance between the real\nattribute at the mid point on the edge and the interpolated\nattribute is greater than AbsoluteAttributeTolerance. This is the\nattribute accuracy. 0.01 will give better result than 0.1.\n"},
  {(char*)"SetAbsoluteAttributeTolerance", PyvtkAttributesErrorMetric_SetAbsoluteAttributeTolerance, METH_VARARGS,
   (char*)"V.SetAbsoluteAttributeTolerance(float)\nC++: void SetAbsoluteAttributeTolerance(double value)\n\nSet the absolute attribute accuracy to `value'. See\nGetAbsoluteAttributeTolerance() for details. It is particularly\nuseful when some concrete implementation of vtkGenericAttribute\ndoes not support GetRange() request, called internally in\nSetAttributeTolerance(). It may happen when the implementation\nsupport higher order attributes but cannot compute the range.\n\\pre valid_range_value: value>0\n"},
  {(char*)"GetAttributeTolerance", PyvtkAttributesErrorMetric_GetAttributeTolerance, METH_VARARGS,
   (char*)"V.GetAttributeTolerance() -> float\nC++: double GetAttributeTolerance()\n\nRelative tolerance of the active scalar (attribute+component).\nSubdivision is required if the square distance between the real\nattribute at the mid point on the edge and the interpolated\nattribute is greater than AttributeTolerance. This is the\nattribute accuracy. 0.01 will give better result than 0.1.\n"},
  {(char*)"SetAttributeTolerance", PyvtkAttributesErrorMetric_SetAttributeTolerance, METH_VARARGS,
   (char*)"V.SetAttributeTolerance(float)\nC++: void SetAttributeTolerance(double value)\n\nSet the relative attribute accuracy to `value'. See\nGetAttributeTolerance() for details.\n\\pre valid_range_value: value>0 && value<1\n"},
  {(char*)"RequiresEdgeSubdivision", PyvtkAttributesErrorMetric_RequiresEdgeSubdivision, METH_VARARGS,
   (char*)"V.RequiresEdgeSubdivision([float, ...], [float, ...], [float,\n    ...], float) -> int\nC++: int RequiresEdgeSubdivision(double *leftPoint,\n    double *midPoint, double *rightPoint, double alpha)\n\nDoes the edge need to be subdivided according to the distance\nbetween the value of the active attribute/component at the\nmidpoint and the mean value between the endpoints? The edge is\ndefined by its `leftPoint' and its `rightPoint'. `leftPoint',\n`midPoint' and `rightPoint' have to be initialized before calling\nRequiresEdgeSubdivision(). Their format is global coordinates,\nparametric coordinates and point centered attributes: xyx rst abc\nde... `alpha' is the normalized abscissa of the midpoint along\nthe edge. (close to 0 means close to the left point, close to 1\nmeans close to the right point)\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n        \n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n"},
  {(char*)"GetError", PyvtkAttributesErrorMetric_GetError, METH_VARARGS,
   (char*)"V.GetError([float, ...], [float, ...], [float, ...], float)\n    -> float\nC++: double GetError(double *leftPoint, double *midPoint,\n    double *rightPoint, double alpha)\n\nReturn the error at the mid-point. The type of error depends on\nthe state of the concrete error metric. For instance, it can\nreturn an absolute or relative error metric. See\nRequiresEdgeSubdivision() for a description of the arguments.\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n        \n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n\\post positive_result: result>=0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAttributesErrorMetric_StaticNew()
{
  return vtkAttributesErrorMetric::New();
}

PyObject *PyVTKClass_vtkAttributesErrorMetricNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAttributesErrorMetric_StaticNew,
    PyvtkAttributesErrorMetric_Methods,
    "vtkAttributesErrorMetric", modulename,
    NULL, NULL,
    PyvtkAttributesErrorMetric_Doc(),
    PyVTKClass_vtkGenericSubdivisionErrorMetricNew(modulename));
  return cls;
}

const char **PyvtkAttributesErrorMetric_Doc()
{
  static const char *docstring[] = {
    "vtkAttributesErrorMetric -  Objects that compute\n\n",
    "Superclass: vtkGenericSubdivisionErrorMetric\n\n",
    "It is a concrete error metric, based on an attribute criterium: the\nvariation of the active attribute/component value from a linear ramp\n\nSee Also:\n\nvtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAttributesErrorMetric(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAttributesErrorMetricNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAttributesErrorMetric", o) != 0)
    {
    Py_DECREF(o);
    }

}

