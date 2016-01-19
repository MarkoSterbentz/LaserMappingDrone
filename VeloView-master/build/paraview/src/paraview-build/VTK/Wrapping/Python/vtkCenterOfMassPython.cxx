// python wrapper for vtkCenterOfMass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCenterOfMass.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCenterOfMass(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCenterOfMassNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
#endif

static const char **PyvtkCenterOfMass_Doc();


static PyObject *
PyvtkCenterOfMass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenterOfMass *op = static_cast<vtkCenterOfMass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCenterOfMass::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCenterOfMass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenterOfMass *op = static_cast<vtkCenterOfMass *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCenterOfMass::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCenterOfMass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenterOfMass *op = static_cast<vtkCenterOfMass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCenterOfMass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCenterOfMass::NewInstance());

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
PyvtkCenterOfMass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCenterOfMass *tempr = vtkCenterOfMass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCenterOfMass_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenterOfMass *op = static_cast<vtkCenterOfMass *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCenterOfMass::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCenterOfMass_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenterOfMass *op = static_cast<vtkCenterOfMass *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkCenterOfMass::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCenterOfMass_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCenterOfMass_SetCenter_s1(self, args);
    case 1:
      return PyvtkCenterOfMass_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkCenterOfMass_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenterOfMass *op = static_cast<vtkCenterOfMass *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkCenterOfMass::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCenterOfMass_SetUseScalarsAsWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseScalarsAsWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenterOfMass *op = static_cast<vtkCenterOfMass *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseScalarsAsWeights(temp0);
      }
    else
      {
      op->vtkCenterOfMass::SetUseScalarsAsWeights(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCenterOfMass_GetUseScalarsAsWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseScalarsAsWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenterOfMass *op = static_cast<vtkCenterOfMass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseScalarsAsWeights() :
      op->vtkCenterOfMass::GetUseScalarsAsWeights());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCenterOfMass_ComputeCenterOfMass(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCenterOfMass");

  vtkPoints *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkCenterOfMass::ComputeCenterOfMass(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCenterOfMass_Methods[] = {
  {(char*)"GetClassName", PyvtkCenterOfMass_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCenterOfMass_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCenterOfMass_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCenterOfMass\nC++: vtkCenterOfMass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCenterOfMass_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCenterOfMass\nC++: vtkCenterOfMass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCenter", PyvtkCenterOfMass_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkCenterOfMass_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {(char*)"SetUseScalarsAsWeights", PyvtkCenterOfMass_SetUseScalarsAsWeights, METH_VARARGS,
   (char*)"V.SetUseScalarsAsWeights(bool)\nC++: void SetUseScalarsAsWeights(bool a)\n\nSet a flag to determine if the points are weighted.\n"},
  {(char*)"GetUseScalarsAsWeights", PyvtkCenterOfMass_GetUseScalarsAsWeights, METH_VARARGS,
   (char*)"V.GetUseScalarsAsWeights() -> bool\nC++: bool GetUseScalarsAsWeights()\n\nSet a flag to determine if the points are weighted.\n"},
  {(char*)"ComputeCenterOfMass", PyvtkCenterOfMass_ComputeCenterOfMass, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputeCenterOfMass(vtkPoints, vtkDataArray, [float, float,\n    float])\nC++: static void ComputeCenterOfMass(vtkPoints *input,\n    vtkDataArray *scalars, double center[3])\n\nThis function is called by RequestData. It exists so that other\nclasses may use this computation without constructing a\nvtkCenterOfMass object.  The scalars can be set to NULL if all\npoints are to be weighted equally.  If scalars are used, it is\nthe caller's responsibility to ensure that the number of scalars\nmatches the number of points, and that the sum of the scalars is\na positive value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCenterOfMass_StaticNew()
{
  return vtkCenterOfMass::New();
}

PyObject *PyVTKClass_vtkCenterOfMassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCenterOfMass_StaticNew,
    PyvtkCenterOfMass_Methods,
    "vtkCenterOfMass", modulename,
    NULL, NULL,
    PyvtkCenterOfMass_Doc(),
    PyVTKClass_vtkPointSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCenterOfMass_Doc()
{
  static const char *docstring[] = {
    "vtkCenterOfMass - Find the center of mass of a set of points.\n\n",
    "Superclass: vtkPointSetAlgorithm\n\n",
    "vtkCenterOfMass finds the \"center of mass\" of a vtkPointSet\n(vtkPolyData or vtkUnstructuredGrid). Optionally, the user can\nspecify to use the scalars as weights in the computation. If this\noption, UseScalarsAsWeights, is off, each point contributes equally\nin the calculation.\n\nYou must ensure Update() has been called before GetCenter will\nproduce a valid value.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCenterOfMass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCenterOfMassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCenterOfMass", o) != 0)
    {
    Py_DECREF(o);
    }

}

