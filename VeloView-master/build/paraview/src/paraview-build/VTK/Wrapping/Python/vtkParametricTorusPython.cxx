// python wrapper for vtkParametricTorus
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkParametricTorus.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkParametricTorus(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkParametricTorusNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkParametricFunctionNew
extern "C" { PyObject *PyVTKClass_vtkParametricFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkParametricFunctionNew
#endif

static const char **PyvtkParametricTorus_Doc();


static PyObject *
PyvtkParametricTorus_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricTorus *op = static_cast<vtkParametricTorus *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkParametricTorus::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricTorus_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricTorus *op = static_cast<vtkParametricTorus *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricTorus::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricTorus_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricTorus *op = static_cast<vtkParametricTorus *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParametricTorus *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricTorus::NewInstance());

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
PyvtkParametricTorus_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkParametricTorus *tempr = vtkParametricTorus::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricTorus_SetRingRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRingRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricTorus *op = static_cast<vtkParametricTorus *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRingRadius(temp0);
      }
    else
      {
      op->vtkParametricTorus::SetRingRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricTorus_GetRingRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRingRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricTorus *op = static_cast<vtkParametricTorus *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRingRadius() :
      op->vtkParametricTorus::GetRingRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricTorus_SetCrossSectionRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCrossSectionRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricTorus *op = static_cast<vtkParametricTorus *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCrossSectionRadius(temp0);
      }
    else
      {
      op->vtkParametricTorus::SetCrossSectionRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricTorus_GetCrossSectionRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCrossSectionRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricTorus *op = static_cast<vtkParametricTorus *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCrossSectionRadius() :
      op->vtkParametricTorus::GetCrossSectionRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricTorus_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricTorus *op = static_cast<vtkParametricTorus *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkParametricTorus::GetDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricTorus_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricTorus *op = static_cast<vtkParametricTorus *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[9];
  double save2[9];
  const int size2 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->Evaluate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkParametricTorus::Evaluate(temp0, temp1, temp2);
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


static PyObject *
PyvtkParametricTorus_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricTorus *op = static_cast<vtkParametricTorus *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[9];
  double save2[9];
  const int size2 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    double tempr = (ap.IsBound() ?
      op->EvaluateScalar(temp0, temp1, temp2) :
      op->vtkParametricTorus::EvaluateScalar(temp0, temp1, temp2));

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

  return result;
}

static PyMethodDef PyvtkParametricTorus_Methods[] = {
  {(char*)"GetClassName", PyvtkParametricTorus_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParametricTorus_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParametricTorus_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkParametricTorus\nC++: vtkParametricTorus *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParametricTorus_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParametricTorus\nC++: vtkParametricTorus *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRingRadius", PyvtkParametricTorus_SetRingRadius, METH_VARARGS,
   (char*)"V.SetRingRadius(float)\nC++: void SetRingRadius(double a)\n\nSet/Get the radius from the center to the middle of the ring of\nthe torus. Default is 1.0.\n"},
  {(char*)"GetRingRadius", PyvtkParametricTorus_GetRingRadius, METH_VARARGS,
   (char*)"V.GetRingRadius() -> float\nC++: double GetRingRadius()\n\nSet/Get the radius from the center to the middle of the ring of\nthe torus. Default is 1.0.\n"},
  {(char*)"SetCrossSectionRadius", PyvtkParametricTorus_SetCrossSectionRadius, METH_VARARGS,
   (char*)"V.SetCrossSectionRadius(float)\nC++: void SetCrossSectionRadius(double a)\n\nSet/Get the radius of the cross section of ring of the torus.\nDefault is 0.5.\n"},
  {(char*)"GetCrossSectionRadius", PyvtkParametricTorus_GetCrossSectionRadius, METH_VARARGS,
   (char*)"V.GetCrossSectionRadius() -> float\nC++: double GetCrossSectionRadius()\n\nSet/Get the radius of the cross section of ring of the torus.\nDefault is 0.5.\n"},
  {(char*)"GetDimension", PyvtkParametricTorus_GetDimension, METH_VARARGS,
   (char*)"V.GetDimension() -> int\nC++: virtual int GetDimension()\n\n"},
  {(char*)"Evaluate", PyvtkParametricTorus_Evaluate, METH_VARARGS,
   (char*)"V.Evaluate([float, float, float], [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\nC++: virtual void Evaluate(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nA torus.\n\nThis function performs the mapping $f(u,v) \\rightarrow (x,y,x) $,\nreturning it as Pt. It also returns the partial derivatives Du\nand Dv.$Pt = (x, y, z), Du = (dx/du, dy/du, dz/du), Dv = (dx/dv,\ndy/dv, dz/dv) $. Then the normal is $N = Du X Dv $.\n"},
  {(char*)"EvaluateScalar", PyvtkParametricTorus_EvaluateScalar, METH_VARARGS,
   (char*)"V.EvaluateScalar([float, float, float], [float, float, float],\n    [float, float, float, float, float, float, float, float,\n    float]) -> float\nC++: virtual double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw.\n\nuvw are the parameters with Pt being the the Cartesian point,\nDuvw are the derivatives of this point with respect to u, v and\nw. Pt, Duvw are obtained from Evaluate().\n\nThis function is only called if the ScalarMode has the value\nvtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED\n\nIf the user does not need to calculate a scalar, then the\ninstantiated function should return zero.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParametricTorus_StaticNew()
{
  return vtkParametricTorus::New();
}

PyObject *PyVTKClass_vtkParametricTorusNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParametricTorus_StaticNew,
    PyvtkParametricTorus_Methods,
    "vtkParametricTorus", modulename,
    NULL, NULL,
    PyvtkParametricTorus_Doc(),
    PyVTKClass_vtkParametricFunctionNew(modulename));
  return cls;
}

const char **PyvtkParametricTorus_Doc()
{
  static const char *docstring[] = {
    "vtkParametricTorus - Generate a torus.\n\n",
    "Superclass: vtkParametricFunction\n\n",
    "vtkParametricTorus generates a torus.\n\nFor further information about this surface, please consult the\ntechnical description \"Parametric surfaces\" in\nhttp://www.vtk.org/documents.php in the \"VTK Technical Documents\"\nsection in the VTk.org web pages.\n\nThanks:\n\nAndrew Maclean andrew.amaclean@gmail.com for creating and\ncontributing the class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParametricTorus(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParametricTorusNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParametricTorus", o) != 0)
    {
    Py_DECREF(o);
    }

}

