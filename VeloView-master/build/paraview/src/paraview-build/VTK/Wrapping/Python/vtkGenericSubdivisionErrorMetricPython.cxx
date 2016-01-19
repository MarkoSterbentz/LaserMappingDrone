// python wrapper for vtkGenericSubdivisionErrorMetric
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericSubdivisionErrorMetric.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenericSubdivisionErrorMetric(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenericSubdivisionErrorMetricNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGenericSubdivisionErrorMetric_Doc();


static PyObject *
PyvtkGenericSubdivisionErrorMetric_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenericSubdivisionErrorMetric::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericSubdivisionErrorMetric::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericSubdivisionErrorMetric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericSubdivisionErrorMetric::NewInstance());

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
PyvtkGenericSubdivisionErrorMetric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenericSubdivisionErrorMetric *tempr = vtkGenericSubdivisionErrorMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_RequiresEdgeSubdivision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresEdgeSubdivision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    int tempr = op->RequiresEdgeSubdivision(temp0, temp1, temp2, temp3);

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
PyvtkGenericSubdivisionErrorMetric_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    double tempr = op->GetError(temp0, temp1, temp2, temp3);

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
PyvtkGenericSubdivisionErrorMetric_SetGenericCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenericCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  vtkGenericAdaptorCell *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell"))
    {
    if (ap.IsBound())
      {
      op->SetGenericCell(temp0);
      }
    else
      {
      op->vtkGenericSubdivisionErrorMetric::SetGenericCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_GetGenericCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericAdaptorCell *tempr = (ap.IsBound() ?
      op->GetGenericCell() :
      op->vtkGenericSubdivisionErrorMetric::GetGenericCell());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  vtkGenericDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetDataSet(temp0);
      }
    else
      {
      op->vtkGenericSubdivisionErrorMetric::SetDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet() :
      op->vtkGenericSubdivisionErrorMetric::GetDataSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericSubdivisionErrorMetric_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericSubdivisionErrorMetric_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK type and error macros.\n"},
  {(char*)"IsA", PyvtkGenericSubdivisionErrorMetric_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK type and error macros.\n"},
  {(char*)"NewInstance", PyvtkGenericSubdivisionErrorMetric_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenericSubdivisionErrorMetric\nC++: vtkGenericSubdivisionErrorMetric *NewInstance()\n\nStandard VTK type and error macros.\n"},
  {(char*)"SafeDownCast", PyvtkGenericSubdivisionErrorMetric_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericSubdivisionErrorMetric\nC++: vtkGenericSubdivisionErrorMetric *SafeDownCast(vtkObject* o)\n\nStandard VTK type and error macros.\n"},
  {(char*)"RequiresEdgeSubdivision", PyvtkGenericSubdivisionErrorMetric_RequiresEdgeSubdivision, METH_VARARGS,
   (char*)"V.RequiresEdgeSubdivision([float, ...], [float, ...], [float,\n    ...], float) -> int\nC++: virtual int RequiresEdgeSubdivision(double *leftPoint,\n    double *midPoint, double *rightPoint, double alpha)\n\nDoes the edge need to be subdivided according to the implemented\ncomputation? The edge is defined by its `leftPoint' and its\n`rightPoint'. `leftPoint', `midPoint' and `rightPoint' have to be\ninitialized before calling RequiresEdgeSubdivision(). Their\nformat is global coordinates, parametric coordinates and point\ncentered attributes: xyx rst abc de... `alpha' is the normalized\nabscissa of the midpoint along the edge. (close to 0 means close\nto the left point, close to 1 means close to the right point)\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n        \n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n"},
  {(char*)"GetError", PyvtkGenericSubdivisionErrorMetric_GetError, METH_VARARGS,
   (char*)"V.GetError([float, ...], [float, ...], [float, ...], float)\n    -> float\nC++: virtual double GetError(double *leftPoint, double *midPoint,\n    double *rightPoint, double alpha)\n\nReturn the error at the mid-point. The type of error depends on\nthe state of the concrete error metric. For instance, it can\nreturn an absolute or relative error metric. See\nRequiresEdgeSubdivision() for a description of the arguments.\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n        \n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n\\post positive_result: result>=0\n"},
  {(char*)"SetGenericCell", PyvtkGenericSubdivisionErrorMetric_SetGenericCell, METH_VARARGS,
   (char*)"V.SetGenericCell(vtkGenericAdaptorCell)\nC++: void SetGenericCell(vtkGenericAdaptorCell *cell)\n\nThe cell that the edge belongs to.\n"},
  {(char*)"GetGenericCell", PyvtkGenericSubdivisionErrorMetric_GetGenericCell, METH_VARARGS,
   (char*)"V.GetGenericCell() -> vtkGenericAdaptorCell\nC++: vtkGenericAdaptorCell *GetGenericCell()\n\nThe cell that the edge belongs to.\n"},
  {(char*)"SetDataSet", PyvtkGenericSubdivisionErrorMetric_SetDataSet, METH_VARARGS,
   (char*)"V.SetDataSet(vtkGenericDataSet)\nC++: void SetDataSet(vtkGenericDataSet *ds)\n\nSet/Get the dataset to be tessellated.\n"},
  {(char*)"GetDataSet", PyvtkGenericSubdivisionErrorMetric_GetDataSet, METH_VARARGS,
   (char*)"V.GetDataSet() -> vtkGenericDataSet\nC++: vtkGenericDataSet *GetDataSet()\n\nSet/Get the dataset to be tessellated.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGenericSubdivisionErrorMetricNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGenericSubdivisionErrorMetric_Methods,
    "vtkGenericSubdivisionErrorMetric", modulename,
    NULL, NULL,
    PyvtkGenericSubdivisionErrorMetric_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGenericSubdivisionErrorMetric_Doc()
{
  static const char *docstring[] = {
    "vtkGenericSubdivisionErrorMetric - Objects that compute\n\n",
    "Superclass: vtkObject\n\n",
    "Objects of that class answer the following question during the cell\nsubdivision: \"does the edge need to be subdivided?\" through\nRequiresEdgeSubdivision(). The answer depends on the criterium\nactually used in the subclass of this abstract class: a\ngeometric-based error metric (variation of edge from a straight\nline), an attribute-based error metric (variation of the active\nattribute/component value",
    " from a linear ramp) , a view-depend error\nmetric, ... Cell subdivision is performed in the context of the\nadaptor framework: higher-order, or complex cells, are automatically\ntessellated into simplices so that they can be processed with\nconventional visualization algorithms.\n\nSee Also:\n\nvtkGenericCellTessellator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericSubdivisionErrorMetric(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericSubdivisionErrorMetricNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericSubdivisionErrorMetric", o) != 0)
    {
    Py_DECREF(o);
    }

}

