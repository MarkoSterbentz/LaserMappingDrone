// python wrapper for vtkIntersectionPolyDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkIntersectionPolyDataFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkIntersectionPolyDataFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkIntersectionPolyDataFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkIntersectionPolyDataFilter_Doc();


static PyObject *
PyvtkIntersectionPolyDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkIntersectionPolyDataFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIntersectionPolyDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIntersectionPolyDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIntersectionPolyDataFilter::NewInstance());

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
PyvtkIntersectionPolyDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkIntersectionPolyDataFilter *tempr = vtkIntersectionPolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_GetSplitFirstOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitFirstOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSplitFirstOutput() :
      op->vtkIntersectionPolyDataFilter::GetSplitFirstOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SetSplitFirstOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitFirstOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSplitFirstOutput(temp0);
      }
    else
      {
      op->vtkIntersectionPolyDataFilter::SetSplitFirstOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SplitFirstOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitFirstOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SplitFirstOutputOn();
      }
    else
      {
      op->vtkIntersectionPolyDataFilter::SplitFirstOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SplitFirstOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitFirstOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SplitFirstOutputOff();
      }
    else
      {
      op->vtkIntersectionPolyDataFilter::SplitFirstOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_GetSplitSecondOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitSecondOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSplitSecondOutput() :
      op->vtkIntersectionPolyDataFilter::GetSplitSecondOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SetSplitSecondOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitSecondOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSplitSecondOutput(temp0);
      }
    else
      {
      op->vtkIntersectionPolyDataFilter::SetSplitSecondOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SplitSecondOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitSecondOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SplitSecondOutputOn();
      }
    else
      {
      op->vtkIntersectionPolyDataFilter::SplitSecondOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SplitSecondOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitSecondOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SplitSecondOutputOff();
      }
    else
      {
      op->vtkIntersectionPolyDataFilter::SplitSecondOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_TriangleTriangleIntersection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleTriangleIntersection");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  double temp5[3];
  double save5[3];
  const int size5 = 3;
  int temp6;
  double temp7[3];
  double save7[3];
  const int size7 = 3;
  double temp8[3];
  double save8[3];
  const int size8 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(9) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetArray(temp7, size7) &&
      ap.GetArray(temp8, size8))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);
    ap.SaveArray(temp7, save7, size7);
    ap.SaveArray(temp8, save8, size8);

    int tempr = vtkIntersectionPolyDataFilter::TriangleTriangleIntersection(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);

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

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (ap.ArrayHasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(7, temp7, size7);
      }

    if (ap.ArrayHasChanged(temp8, save8, size8) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(8, temp8, size8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkIntersectionPolyDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkIntersectionPolyDataFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIntersectionPolyDataFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIntersectionPolyDataFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkIntersectionPolyDataFilter\nC++: vtkIntersectionPolyDataFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIntersectionPolyDataFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIntersectionPolyDataFilter\nC++: vtkIntersectionPolyDataFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSplitFirstOutput", PyvtkIntersectionPolyDataFilter_GetSplitFirstOutput, METH_VARARGS,
   (char*)"V.GetSplitFirstOutput() -> int\nC++: int GetSplitFirstOutput()\n\nIf on, the second output will be the first input mesh split by\nthe intersection with the second input mesh. Defaults to on.\n"},
  {(char*)"SetSplitFirstOutput", PyvtkIntersectionPolyDataFilter_SetSplitFirstOutput, METH_VARARGS,
   (char*)"V.SetSplitFirstOutput(int)\nC++: void SetSplitFirstOutput(int a)\n\nIf on, the second output will be the first input mesh split by\nthe intersection with the second input mesh. Defaults to on.\n"},
  {(char*)"SplitFirstOutputOn", PyvtkIntersectionPolyDataFilter_SplitFirstOutputOn, METH_VARARGS,
   (char*)"V.SplitFirstOutputOn()\nC++: void SplitFirstOutputOn()\n\nIf on, the second output will be the first input mesh split by\nthe intersection with the second input mesh. Defaults to on.\n"},
  {(char*)"SplitFirstOutputOff", PyvtkIntersectionPolyDataFilter_SplitFirstOutputOff, METH_VARARGS,
   (char*)"V.SplitFirstOutputOff()\nC++: void SplitFirstOutputOff()\n\nIf on, the second output will be the first input mesh split by\nthe intersection with the second input mesh. Defaults to on.\n"},
  {(char*)"GetSplitSecondOutput", PyvtkIntersectionPolyDataFilter_GetSplitSecondOutput, METH_VARARGS,
   (char*)"V.GetSplitSecondOutput() -> int\nC++: int GetSplitSecondOutput()\n\nIf on, the third output will be the second input mesh split by\nthe intersection with the first input mesh. Defaults to on.\n"},
  {(char*)"SetSplitSecondOutput", PyvtkIntersectionPolyDataFilter_SetSplitSecondOutput, METH_VARARGS,
   (char*)"V.SetSplitSecondOutput(int)\nC++: void SetSplitSecondOutput(int a)\n\nIf on, the third output will be the second input mesh split by\nthe intersection with the first input mesh. Defaults to on.\n"},
  {(char*)"SplitSecondOutputOn", PyvtkIntersectionPolyDataFilter_SplitSecondOutputOn, METH_VARARGS,
   (char*)"V.SplitSecondOutputOn()\nC++: void SplitSecondOutputOn()\n\nIf on, the third output will be the second input mesh split by\nthe intersection with the first input mesh. Defaults to on.\n"},
  {(char*)"SplitSecondOutputOff", PyvtkIntersectionPolyDataFilter_SplitSecondOutputOff, METH_VARARGS,
   (char*)"V.SplitSecondOutputOff()\nC++: void SplitSecondOutputOff()\n\nIf on, the third output will be the second input mesh split by\nthe intersection with the first input mesh. Defaults to on.\n"},
  {(char*)"TriangleTriangleIntersection", PyvtkIntersectionPolyDataFilter_TriangleTriangleIntersection, METH_VARARGS | METH_STATIC,
   (char*)"V.TriangleTriangleIntersection([float, float, float], [float,\n    float, float], [float, float, float], [float, float, float],\n    [float, float, float], [float, float, float], int, [float,\n    float, float], [float, float, float]) -> int\nC++: static int TriangleTriangleIntersection(double p1[3],\n    double q1[3], double r1[3], double p2[3], double q2[3],\n    double r2[3], int &coplanar, double pt1[3], double pt2[3])\n\nGiven two triangles defined by points (p1, q1, r1) and (p2, q2,\nr2), returns whether the two triangles intersect. If they do, the\nendpoints of the line forming the intersection are returned in\npt1 and pt2. The parameter coplanar is set to 1 if the triangles\nare coplanar and 0 otherwise.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIntersectionPolyDataFilter_StaticNew()
{
  return vtkIntersectionPolyDataFilter::New();
}

PyObject *PyVTKClass_vtkIntersectionPolyDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIntersectionPolyDataFilter_StaticNew,
    PyvtkIntersectionPolyDataFilter_Methods,
    "vtkIntersectionPolyDataFilter", modulename,
    NULL, NULL,
    PyvtkIntersectionPolyDataFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkIntersectionPolyDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkIntersectionPolyDataFilter\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkIntersectionPolyDataFilter computes the intersection between two\nvtkPolyData objects. The first output is a set of lines that marks\nthe intersection of the input vtkPolyData objects. The second and\nthird outputs are the first and second input vtkPolyData,\nrespectively. Optionally, the two output vtkPolyData can be split\nalong the intersection lines.\n\nThis code was contributed in the Insight Jou",
    "rnal paper: \"Boolean Operations on Surfaces in VTK Without External\nLibraries\" by Cory Quammen, Chris Weigle C., Russ Taylor\nhttp://hdl.handle.net/10380/3262\nhttp://www.insight-journal.org/browse/publication/797\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIntersectionPolyDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIntersectionPolyDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIntersectionPolyDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

