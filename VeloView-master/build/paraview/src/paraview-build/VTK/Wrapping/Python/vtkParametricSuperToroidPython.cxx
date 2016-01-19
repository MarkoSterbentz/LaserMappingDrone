// python wrapper for vtkParametricSuperToroid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkParametricSuperToroid.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkParametricSuperToroid(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkParametricSuperToroidNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkParametricFunctionNew
extern "C" { PyObject *PyVTKClass_vtkParametricFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkParametricFunctionNew
#endif

static const char **PyvtkParametricSuperToroid_Doc();


static PyObject *
PyvtkParametricSuperToroid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkParametricSuperToroid::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricSuperToroid::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParametricSuperToroid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricSuperToroid::NewInstance());

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
PyvtkParametricSuperToroid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkParametricSuperToroid *tempr = vtkParametricSuperToroid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkParametricSuperToroid::GetDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_SetRingRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRingRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

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
      op->vtkParametricSuperToroid::SetRingRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_GetRingRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRingRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRingRadius() :
      op->vtkParametricSuperToroid::GetRingRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_SetCrossSectionRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCrossSectionRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

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
      op->vtkParametricSuperToroid::SetCrossSectionRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_GetCrossSectionRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCrossSectionRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCrossSectionRadius() :
      op->vtkParametricSuperToroid::GetCrossSectionRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_SetXRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXRadius(temp0);
      }
    else
      {
      op->vtkParametricSuperToroid::SetXRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_GetXRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetXRadius() :
      op->vtkParametricSuperToroid::GetXRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_SetYRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYRadius(temp0);
      }
    else
      {
      op->vtkParametricSuperToroid::SetYRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_GetYRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetYRadius() :
      op->vtkParametricSuperToroid::GetYRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_SetZRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZRadius(temp0);
      }
    else
      {
      op->vtkParametricSuperToroid::SetZRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_GetZRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetZRadius() :
      op->vtkParametricSuperToroid::GetZRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_SetN1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetN1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetN1(temp0);
      }
    else
      {
      op->vtkParametricSuperToroid::SetN1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_GetN1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetN1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetN1() :
      op->vtkParametricSuperToroid::GetN1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_SetN2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetN2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetN2(temp0);
      }
    else
      {
      op->vtkParametricSuperToroid::SetN2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_GetN2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetN2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetN2() :
      op->vtkParametricSuperToroid::GetN2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

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
      op->vtkParametricSuperToroid::Evaluate(temp0, temp1, temp2);
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
PyvtkParametricSuperToroid_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

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
      op->vtkParametricSuperToroid::EvaluateScalar(temp0, temp1, temp2));

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

static PyMethodDef PyvtkParametricSuperToroid_Methods[] = {
  {(char*)"GetClassName", PyvtkParametricSuperToroid_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParametricSuperToroid_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParametricSuperToroid_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkParametricSuperToroid\nC++: vtkParametricSuperToroid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParametricSuperToroid_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParametricSuperToroid\nC++: vtkParametricSuperToroid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDimension", PyvtkParametricSuperToroid_GetDimension, METH_VARARGS,
   (char*)"V.GetDimension() -> int\nC++: virtual int GetDimension()\n\n"},
  {(char*)"SetRingRadius", PyvtkParametricSuperToroid_SetRingRadius, METH_VARARGS,
   (char*)"V.SetRingRadius(float)\nC++: void SetRingRadius(double a)\n\nSet/Get the radius from the center to the middle of the ring of\nthe supertoroid. Default is 1.\n"},
  {(char*)"GetRingRadius", PyvtkParametricSuperToroid_GetRingRadius, METH_VARARGS,
   (char*)"V.GetRingRadius() -> float\nC++: double GetRingRadius()\n\nSet/Get the radius from the center to the middle of the ring of\nthe supertoroid. Default is 1.\n"},
  {(char*)"SetCrossSectionRadius", PyvtkParametricSuperToroid_SetCrossSectionRadius, METH_VARARGS,
   (char*)"V.SetCrossSectionRadius(float)\nC++: void SetCrossSectionRadius(double a)\n\nSet/Get the radius of the cross section of ring of the\nsupertoroid. Default = 0.5.\n"},
  {(char*)"GetCrossSectionRadius", PyvtkParametricSuperToroid_GetCrossSectionRadius, METH_VARARGS,
   (char*)"V.GetCrossSectionRadius() -> float\nC++: double GetCrossSectionRadius()\n\nSet/Get the radius of the cross section of ring of the\nsupertoroid. Default = 0.5.\n"},
  {(char*)"SetXRadius", PyvtkParametricSuperToroid_SetXRadius, METH_VARARGS,
   (char*)"V.SetXRadius(float)\nC++: void SetXRadius(double a)\n\nSet/Get the scaling factor for the x-axis. Default is 1.\n"},
  {(char*)"GetXRadius", PyvtkParametricSuperToroid_GetXRadius, METH_VARARGS,
   (char*)"V.GetXRadius() -> float\nC++: double GetXRadius()\n\nSet/Get the scaling factor for the x-axis. Default is 1.\n"},
  {(char*)"SetYRadius", PyvtkParametricSuperToroid_SetYRadius, METH_VARARGS,
   (char*)"V.SetYRadius(float)\nC++: void SetYRadius(double a)\n\nSet/Get the scaling factor for the y-axis. Default is 1.\n"},
  {(char*)"GetYRadius", PyvtkParametricSuperToroid_GetYRadius, METH_VARARGS,
   (char*)"V.GetYRadius() -> float\nC++: double GetYRadius()\n\nSet/Get the scaling factor for the y-axis. Default is 1.\n"},
  {(char*)"SetZRadius", PyvtkParametricSuperToroid_SetZRadius, METH_VARARGS,
   (char*)"V.SetZRadius(float)\nC++: void SetZRadius(double a)\n\nSet/Get the scaling factor for the z-axis. Default is 1.\n"},
  {(char*)"GetZRadius", PyvtkParametricSuperToroid_GetZRadius, METH_VARARGS,
   (char*)"V.GetZRadius() -> float\nC++: double GetZRadius()\n\nSet/Get the scaling factor for the z-axis. Default is 1.\n"},
  {(char*)"SetN1", PyvtkParametricSuperToroid_SetN1, METH_VARARGS,
   (char*)"V.SetN1(float)\nC++: void SetN1(double a)\n\nSet/Get the shape of the torus ring.  Default is 1.\n"},
  {(char*)"GetN1", PyvtkParametricSuperToroid_GetN1, METH_VARARGS,
   (char*)"V.GetN1() -> float\nC++: double GetN1()\n\nSet/Get the shape of the torus ring.  Default is 1.\n"},
  {(char*)"SetN2", PyvtkParametricSuperToroid_SetN2, METH_VARARGS,
   (char*)"V.SetN2(float)\nC++: void SetN2(double a)\n\nSet/Get the shape of the cross section of the ring. Default is 1.\n"},
  {(char*)"GetN2", PyvtkParametricSuperToroid_GetN2, METH_VARARGS,
   (char*)"V.GetN2() -> float\nC++: double GetN2()\n\nSet/Get the shape of the cross section of the ring. Default is 1.\n"},
  {(char*)"Evaluate", PyvtkParametricSuperToroid_Evaluate, METH_VARARGS,
   (char*)"V.Evaluate([float, float, float], [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\nC++: virtual void Evaluate(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nA supertoroid.\n\nThis function performs the mapping $f(u,v) \\rightarrow (x,y,x) $,\nreturning it as Pt. It also returns the partial derivatives Du\nand Dv.$Pt = (x, y, z), Du = (dx/du, dy/du, dz/du), Dv = (dx/dv,\ndy/dv, dz/dv) $ . Then the normal is $N = Du X Dv $ .\n"},
  {(char*)"EvaluateScalar", PyvtkParametricSuperToroid_EvaluateScalar, METH_VARARGS,
   (char*)"V.EvaluateScalar([float, float, float], [float, float, float],\n    [float, float, float, float, float, float, float, float,\n    float]) -> float\nC++: virtual double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw.\n\nuvw are the parameters with Pt being the the cartesian point,\nDuvw are the derivatives of this point with respect to u, v and\nw. Pt, Duvw are obtained from Evaluate().\n\nThis function is only called if the ScalarMode has the value\nvtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED\n\nIf the user does not need to calculate a scalar, then the\ninstantiated function should return zero.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParametricSuperToroid_StaticNew()
{
  return vtkParametricSuperToroid::New();
}

PyObject *PyVTKClass_vtkParametricSuperToroidNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParametricSuperToroid_StaticNew,
    PyvtkParametricSuperToroid_Methods,
    "vtkParametricSuperToroid", modulename,
    NULL, NULL,
    PyvtkParametricSuperToroid_Doc(),
    PyVTKClass_vtkParametricFunctionNew(modulename));
  return cls;
}

const char **PyvtkParametricSuperToroid_Doc()
{
  static const char *docstring[] = {
    "vtkParametricSuperToroid - Generate a supertoroid.\n\n",
    "Superclass: vtkParametricFunction\n\n",
    "vtkParametricSuperToroid generates a supertoroid.  Essentially a\nsupertoroid is a torus with the sine and cosine terms raised to a\npower. A supertoroid is a versatile primitive that is controlled by\nfour parameters r0, r1, n1 and n2. r0, r1 determine the type of torus\nwhilst the value of n1 determines the shape of the torus ring and n2\ndetermines the shape of the cross section of the ring. It is t",
    "he\ndifferent values of these powers which give rise to a family of 3D\nshapes that are all basically toroidal in shape.\n\nFor further information about this surface, please consult the\ntechnical description \"Parametric surfaces\" in\nhttp://www.vtk.org/documents.php in the \"VTK Technical Documents\"\nsection in the VTk.org web pages.\n\nAlso see: http://paulbourke.net/geometry/torus/#super.\n\nCaveats:\n\nCar",
    "e needs to be taken specifying the bounds correctly. You may need\nto carefully adjust MinimumU, MinimumV, MaximumU, MaximumV.\n\nThanks:\n\nAndrew Maclean andrew.amaclean@gmail.com for creating and\ncontributing the class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParametricSuperToroid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParametricSuperToroidNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParametricSuperToroid", o) != 0)
    {
    Py_DECREF(o);
    }

}

