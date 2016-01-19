// python wrapper for vtkParametricSuperEllipsoid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkParametricSuperEllipsoid.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkParametricSuperEllipsoid(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkParametricSuperEllipsoidNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkParametricFunctionNew
extern "C" { PyObject *PyVTKClass_vtkParametricFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkParametricFunctionNew
#endif

static const char **PyvtkParametricSuperEllipsoid_Doc();


static PyObject *
PyvtkParametricSuperEllipsoid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkParametricSuperEllipsoid::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricSuperEllipsoid::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParametricSuperEllipsoid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricSuperEllipsoid::NewInstance());

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
PyvtkParametricSuperEllipsoid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkParametricSuperEllipsoid *tempr = vtkParametricSuperEllipsoid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkParametricSuperEllipsoid::GetDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_SetXRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

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
      op->vtkParametricSuperEllipsoid::SetXRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_GetXRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetXRadius() :
      op->vtkParametricSuperEllipsoid::GetXRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_SetYRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

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
      op->vtkParametricSuperEllipsoid::SetYRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_GetYRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetYRadius() :
      op->vtkParametricSuperEllipsoid::GetYRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_SetZRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

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
      op->vtkParametricSuperEllipsoid::SetZRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_GetZRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetZRadius() :
      op->vtkParametricSuperEllipsoid::GetZRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_SetN1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetN1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

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
      op->vtkParametricSuperEllipsoid::SetN1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_GetN1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetN1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetN1() :
      op->vtkParametricSuperEllipsoid::GetN1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_SetN2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetN2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

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
      op->vtkParametricSuperEllipsoid::SetN2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_GetN2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetN2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetN2() :
      op->vtkParametricSuperEllipsoid::GetN2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

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
      op->vtkParametricSuperEllipsoid::Evaluate(temp0, temp1, temp2);
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
PyvtkParametricSuperEllipsoid_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

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
      op->vtkParametricSuperEllipsoid::EvaluateScalar(temp0, temp1, temp2));

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

static PyMethodDef PyvtkParametricSuperEllipsoid_Methods[] = {
  {(char*)"GetClassName", PyvtkParametricSuperEllipsoid_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParametricSuperEllipsoid_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParametricSuperEllipsoid_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkParametricSuperEllipsoid\nC++: vtkParametricSuperEllipsoid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParametricSuperEllipsoid_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParametricSuperEllipsoid\nC++: vtkParametricSuperEllipsoid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDimension", PyvtkParametricSuperEllipsoid_GetDimension, METH_VARARGS,
   (char*)"V.GetDimension() -> int\nC++: virtual int GetDimension()\n\n"},
  {(char*)"SetXRadius", PyvtkParametricSuperEllipsoid_SetXRadius, METH_VARARGS,
   (char*)"V.SetXRadius(float)\nC++: void SetXRadius(double a)\n\nSet/Get the scaling factor for the x-axis. Default is 1.\n"},
  {(char*)"GetXRadius", PyvtkParametricSuperEllipsoid_GetXRadius, METH_VARARGS,
   (char*)"V.GetXRadius() -> float\nC++: double GetXRadius()\n\nSet/Get the scaling factor for the x-axis. Default is 1.\n"},
  {(char*)"SetYRadius", PyvtkParametricSuperEllipsoid_SetYRadius, METH_VARARGS,
   (char*)"V.SetYRadius(float)\nC++: void SetYRadius(double a)\n\nSet/Get the scaling factor for the y-axis. Default is 1.\n"},
  {(char*)"GetYRadius", PyvtkParametricSuperEllipsoid_GetYRadius, METH_VARARGS,
   (char*)"V.GetYRadius() -> float\nC++: double GetYRadius()\n\nSet/Get the scaling factor for the y-axis. Default is 1.\n"},
  {(char*)"SetZRadius", PyvtkParametricSuperEllipsoid_SetZRadius, METH_VARARGS,
   (char*)"V.SetZRadius(float)\nC++: void SetZRadius(double a)\n\nSet/Get the scaling factor for the z-axis. Default is 1.\n"},
  {(char*)"GetZRadius", PyvtkParametricSuperEllipsoid_GetZRadius, METH_VARARGS,
   (char*)"V.GetZRadius() -> float\nC++: double GetZRadius()\n\nSet/Get the scaling factor for the z-axis. Default is 1.\n"},
  {(char*)"SetN1", PyvtkParametricSuperEllipsoid_SetN1, METH_VARARGS,
   (char*)"V.SetN1(float)\nC++: void SetN1(double a)\n\nSet/Get the \"squareness\" parameter in the z axis.  Default is 1.\n"},
  {(char*)"GetN1", PyvtkParametricSuperEllipsoid_GetN1, METH_VARARGS,
   (char*)"V.GetN1() -> float\nC++: double GetN1()\n\nSet/Get the \"squareness\" parameter in the z axis.  Default is 1.\n"},
  {(char*)"SetN2", PyvtkParametricSuperEllipsoid_SetN2, METH_VARARGS,
   (char*)"V.SetN2(float)\nC++: void SetN2(double a)\n\nSet/Get the \"squareness\" parameter in the x-y plane. Default is\n1.\n"},
  {(char*)"GetN2", PyvtkParametricSuperEllipsoid_GetN2, METH_VARARGS,
   (char*)"V.GetN2() -> float\nC++: double GetN2()\n\nSet/Get the \"squareness\" parameter in the x-y plane. Default is\n1.\n"},
  {(char*)"Evaluate", PyvtkParametricSuperEllipsoid_Evaluate, METH_VARARGS,
   (char*)"V.Evaluate([float, float, float], [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\nC++: virtual void Evaluate(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nA superellipsoid.\n\nThis function performs the mapping $f(u,v) \\rightarrow (x,y,x) $,\nreturning it as Pt. It also returns the partial derivatives Du\nand Dv.$Pt = (x, y, z), Du = (dx/du, dy/du, dz/du), Dv = (dx/dv,\ndy/dv, dz/dv) $ . Then the normal is $N = Du X Dv $ .\n"},
  {(char*)"EvaluateScalar", PyvtkParametricSuperEllipsoid_EvaluateScalar, METH_VARARGS,
   (char*)"V.EvaluateScalar([float, float, float], [float, float, float],\n    [float, float, float, float, float, float, float, float,\n    float]) -> float\nC++: virtual double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw.\n\nuvw are the parameters with Pt being the the cartesian point,\nDuvw are the derivatives of this point with respect to u, v and\nw. Pt, Duvw are obtained from Evaluate().\n\nThis function is only called if the ScalarMode has the value\nvtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED\n\nIf the user does not need to calculate a scalar, then the\ninstantiated function should return zero.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParametricSuperEllipsoid_StaticNew()
{
  return vtkParametricSuperEllipsoid::New();
}

PyObject *PyVTKClass_vtkParametricSuperEllipsoidNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParametricSuperEllipsoid_StaticNew,
    PyvtkParametricSuperEllipsoid_Methods,
    "vtkParametricSuperEllipsoid", modulename,
    NULL, NULL,
    PyvtkParametricSuperEllipsoid_Doc(),
    PyVTKClass_vtkParametricFunctionNew(modulename));
  return cls;
}

const char **PyvtkParametricSuperEllipsoid_Doc()
{
  static const char *docstring[] = {
    "vtkParametricSuperEllipsoid - Generate a superellipsoid.\n\n",
    "Superclass: vtkParametricFunction\n\n",
    "vtkParametricSuperEllipsoid generates a superellipsoid.  A\nsuperellipsoid is a versatile primitive that is controlled by two\nparameters n1 and n2. As special cases it can represent a sphere,\nsquare box, and closed cylindrical can.\n\nFor further information about this surface, please consult the\ntechnical description \"Parametric surfaces\" in\nhttp://www.vtk.org/documents.php in the \"VTK Technical Doc",
    "uments\"\nsection in the VTk.org web pages.\n\nAlso see: http://paulbourke.net/geometry/superellipse/\n\nCaveats:\n\nCare needs to be taken specifying the bounds correctly. You may need\nto carefully adjust MinimumU, MinimumV, MaximumU, MaximumV.\n\nThanks:\n\nAndrew Maclean andrew.amaclean@gmail.com for creating and\ncontributing the class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParametricSuperEllipsoid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParametricSuperEllipsoidNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParametricSuperEllipsoid", o) != 0)
    {
    Py_DECREF(o);
    }

}

