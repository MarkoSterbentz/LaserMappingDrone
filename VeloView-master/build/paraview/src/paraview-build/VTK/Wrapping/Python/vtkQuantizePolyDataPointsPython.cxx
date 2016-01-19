// python wrapper for vtkQuantizePolyDataPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkQuantizePolyDataPoints.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkQuantizePolyDataPoints(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkQuantizePolyDataPointsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCleanPolyDataNew
extern "C" { PyObject *PyVTKClass_vtkCleanPolyDataNew(const char *); }
#define DECLARED_PyVTKClass_vtkCleanPolyDataNew
#endif

static const char **PyvtkQuantizePolyDataPoints_Doc();


static PyObject *
PyvtkQuantizePolyDataPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkQuantizePolyDataPoints::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuantizePolyDataPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkQuantizePolyDataPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuantizePolyDataPoints::NewInstance());

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
PyvtkQuantizePolyDataPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkQuantizePolyDataPoints *tempr = vtkQuantizePolyDataPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_SetQFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQFactor(temp0);
      }
    else
      {
      op->vtkQuantizePolyDataPoints::SetQFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_GetQFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetQFactorMinValue() :
      op->vtkQuantizePolyDataPoints::GetQFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_GetQFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetQFactorMaxValue() :
      op->vtkQuantizePolyDataPoints::GetQFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_GetQFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetQFactor() :
      op->vtkQuantizePolyDataPoints::GetQFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_OperateOnPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OperateOnPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->OperateOnPoint(temp0, temp1);
      }
    else
      {
      op->vtkQuantizePolyDataPoints::OperateOnPoint(temp0, temp1);
      }

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

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_OperateOnBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OperateOnBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->OperateOnBounds(temp0, temp1);
      }
    else
      {
      op->vtkQuantizePolyDataPoints::OperateOnBounds(temp0, temp1);
      }

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

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkQuantizePolyDataPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkQuantizePolyDataPoints_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkQuantizePolyDataPoints_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkQuantizePolyDataPoints_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkQuantizePolyDataPoints\nC++: vtkQuantizePolyDataPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkQuantizePolyDataPoints_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkQuantizePolyDataPoints\nC++: vtkQuantizePolyDataPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetQFactor", PyvtkQuantizePolyDataPoints_SetQFactor, METH_VARARGS,
   (char*)"V.SetQFactor(float)\nC++: void SetQFactor(double)\n\nSpecify quantization grain size. Default is 0.25\n"},
  {(char*)"GetQFactorMinValue", PyvtkQuantizePolyDataPoints_GetQFactorMinValue, METH_VARARGS,
   (char*)"V.GetQFactorMinValue() -> float\nC++: double GetQFactorMinValue()\n\nSpecify quantization grain size. Default is 0.25\n"},
  {(char*)"GetQFactorMaxValue", PyvtkQuantizePolyDataPoints_GetQFactorMaxValue, METH_VARARGS,
   (char*)"V.GetQFactorMaxValue() -> float\nC++: double GetQFactorMaxValue()\n\nSpecify quantization grain size. Default is 0.25\n"},
  {(char*)"GetQFactor", PyvtkQuantizePolyDataPoints_GetQFactor, METH_VARARGS,
   (char*)"V.GetQFactor() -> float\nC++: double GetQFactor()\n\nSpecify quantization grain size. Default is 0.25\n"},
  {(char*)"OperateOnPoint", PyvtkQuantizePolyDataPoints_OperateOnPoint, METH_VARARGS,
   (char*)"V.OperateOnPoint([float, float, float], [float, float, float])\nC++: virtual void OperateOnPoint(double in[3], double out[3])\n\nPerform quantization on a point\n"},
  {(char*)"OperateOnBounds", PyvtkQuantizePolyDataPoints_OperateOnBounds, METH_VARARGS,
   (char*)"V.OperateOnBounds([float, float, float, float, float, float],\n    [float, float, float, float, float, float])\nC++: virtual void OperateOnBounds(double in[6], double out[6])\n\nPerform quantization on bounds\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkQuantizePolyDataPoints_StaticNew()
{
  return vtkQuantizePolyDataPoints::New();
}

PyObject *PyVTKClass_vtkQuantizePolyDataPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkQuantizePolyDataPoints_StaticNew,
    PyvtkQuantizePolyDataPoints_Methods,
    "vtkQuantizePolyDataPoints", modulename,
    NULL, NULL,
    PyvtkQuantizePolyDataPoints_Doc(),
    PyVTKClass_vtkCleanPolyDataNew(modulename));
  return cls;
}

const char **PyvtkQuantizePolyDataPoints_Doc()
{
  static const char *docstring[] = {
    "vtkQuantizePolyDataPoints - quantizes x,y,z coordinates of points\n\n",
    "Superclass: vtkCleanPolyData\n\n",
    "vtkQuantizePolyDataPoints is a subclass of vtkCleanPolyData and\ninherits the functionality of vtkCleanPolyData with the addition that\nit quantizes the point coordinates before inserting into the point\nlist. The user should set QFactor to a positive value (0.25 by\ndefault) and all {x,y,z} coordinates will be quantized to that grain\nsize.\n\nA tolerance of zero is expected, though positive values may ",
    "be used,\nthe quantization will take place before the tolerance is applied.\n\nCaveats:\n\nMerging points can alter topology, including introducing non-manifold\nforms. Handling of degenerate cells is controlled by switches in\nvtkCleanPolyData.\n\nIf you wish to operate on a set of coordinates that has no cells, you\nmust add a vtkPolyVertex cell with all of the points to the PolyData\n(or use a vtkVertexGl",
    "yphFilter) before using the vtkCleanPolyData\nfilter.\n\nSee Also:\n\nvtkCleanPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuantizePolyDataPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkQuantizePolyDataPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuantizePolyDataPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

