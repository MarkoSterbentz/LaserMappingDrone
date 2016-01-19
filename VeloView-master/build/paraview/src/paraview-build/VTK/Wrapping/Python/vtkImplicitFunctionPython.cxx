// python wrapper for vtkImplicitFunction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImplicitFunction(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImplicitFunctionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkImplicitFunction_Doc();


static PyObject *
PyvtkImplicitFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImplicitFunction::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitFunction::NewInstance());

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
PyvtkImplicitFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImplicitFunction *tempr = vtkImplicitFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunction_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImplicitFunction::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunction_FunctionValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double tempr = (ap.IsBound() ?
      op->FunctionValue(temp0) :
      op->vtkImplicitFunction::FunctionValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitFunction_FunctionValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double tempr = (ap.IsBound() ?
      op->FunctionValue(temp0, temp1, temp2) :
      op->vtkImplicitFunction::FunctionValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitFunction_FunctionValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImplicitFunction_FunctionValue_s1(self, args);
    case 3:
      return PyvtkImplicitFunction_FunctionValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FunctionValue");
  return NULL;
}



static PyObject *
PyvtkImplicitFunction_FunctionGradient_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->FunctionGradient(temp0, temp1);
      }
    else
      {
      op->vtkImplicitFunction::FunctionGradient(temp0, temp1);
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
PyvtkImplicitFunction_FunctionGradient_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  double temp0[3];
  const int size0 = 3;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double *tempr = (ap.IsBound() ?
      op->FunctionGradient(temp0) :
      op->vtkImplicitFunction::FunctionGradient(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitFunction_FunctionGradient_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double *tempr = (ap.IsBound() ?
      op->FunctionGradient(temp0, temp1, temp2) :
      op->vtkImplicitFunction::FunctionGradient(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitFunction_FunctionGradient(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImplicitFunction_FunctionGradient_s1(self, args);
    case 1:
      return PyvtkImplicitFunction_FunctionGradient_s2(self, args);
    case 3:
      return PyvtkImplicitFunction_FunctionGradient_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FunctionGradient");
  return NULL;
}



static PyObject *
PyvtkImplicitFunction_SetTransform_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0);
      }
    else
      {
      op->vtkImplicitFunction::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitFunction_SetTransform_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  double temp0[16];
  const int size0 = 16;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0);
      }
    else
      {
      op->vtkImplicitFunction::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitFunction_SetTransform_Methods[] = {
  {NULL, PyvtkImplicitFunction_SetTransform_s1, METH_VARARGS,
   (char*)"@O *vtkAbstractTransform"},
  {NULL, PyvtkImplicitFunction_SetTransform_s2, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkImplicitFunction_SetTransform(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImplicitFunction_SetTransform_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTransform");
  return NULL;
}



static PyObject *
PyvtkImplicitFunction_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkImplicitFunction::GetTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunction_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    double tempr = op->EvaluateFunction(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitFunction_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0, temp1, temp2) :
      op->vtkImplicitFunction::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitFunction_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImplicitFunction_EvaluateFunction_s1(self, args);
    case 3:
      return PyvtkImplicitFunction_EvaluateFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return NULL;
}



static PyObject *
PyvtkImplicitFunction_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    op->EvaluateGradient(temp0, temp1);

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

static PyMethodDef PyvtkImplicitFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitFunction_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImplicitFunction_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImplicitFunction_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImplicitFunction\nC++: vtkImplicitFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImplicitFunction_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitFunction\nC++: vtkImplicitFunction *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkImplicitFunction_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverload standard modified time function. If Transform is\nmodified, then this object is modified as well.\n"},
  {(char*)"FunctionValue", PyvtkImplicitFunction_FunctionValue, METH_VARARGS,
   (char*)"V.FunctionValue((float, float, float)) -> float\nC++: double FunctionValue(const double x[3])\nV.FunctionValue(float, float, float) -> float\nC++: double FunctionValue(double x, double y, double z)\n\nEvaluate function at position x-y-z and return value. Point x[3]\nis transformed through transform (if provided).\n"},
  {(char*)"FunctionGradient", PyvtkImplicitFunction_FunctionGradient, METH_VARARGS,
   (char*)"V.FunctionGradient((float, float, float), [float, float, float])\nC++: void FunctionGradient(const double x[3], double g[3])\nV.FunctionGradient((float, float, float)) -> (float, float, float)\nC++: double *FunctionGradient(const double x[3])\nV.FunctionGradient(float, float, float) -> (float, float, float)\nC++: double *FunctionGradient(double x, double y, double z)\n\nEvaluate function gradient at position x-y-z and pass back\nvector. Point x[3] is transformed through transform (if\nprovided).\n"},
  {(char*)"SetTransform", PyvtkImplicitFunction_SetTransform, METH_VARARGS,
   (char*)"V.SetTransform(vtkAbstractTransform)\nC++: virtual void SetTransform(vtkAbstractTransform *)\nV.SetTransform((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    )\nC++: virtual void SetTransform(const double elements[16])\n\nSet/Get a transformation to apply to input points before\nexecuting the implicit function.\n"},
  {(char*)"GetTransform", PyvtkImplicitFunction_GetTransform, METH_VARARGS,
   (char*)"V.GetTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetTransform()\n\nSet/Get a transformation to apply to input points before\nexecuting the implicit function.\n"},
  {(char*)"EvaluateFunction", PyvtkImplicitFunction_EvaluateFunction, METH_VARARGS,
   (char*)"V.EvaluateFunction([float, float, float]) -> float\nC++: virtual double EvaluateFunction(double x[3])\nV.EvaluateFunction(float, float, float) -> float\nC++: double EvaluateFunction(double x, double y, double z)\n\nEvaluate function at position x-y-z and return value.  You should\ngenerally not call this method directly, you should use\nFunctionValue() instead.  This method must be implemented by any\nderived class.\n"},
  {(char*)"EvaluateGradient", PyvtkImplicitFunction_EvaluateGradient, METH_VARARGS,
   (char*)"V.EvaluateGradient([float, float, float], [float, float, float])\nC++: virtual void EvaluateGradient(double x[3], double g[3])\n\nEvaluate function gradient at position x-y-z and pass back\nvector. You should generally not call this method directly, you\nshould use FunctionGradient() instead.  This method must be\nimplemented by any derived class.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImplicitFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImplicitFunction_Methods,
    "vtkImplicitFunction", modulename,
    NULL, NULL,
    PyvtkImplicitFunction_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkImplicitFunction_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitFunction - abstract interface for implicit functions\n\n",
    "Superclass: vtkObject\n\n",
    "vtkImplicitFunction specifies an abstract interface for implicit\nfunctions. Implicit functions are real valued functions defined in 3D\nspace, w = F(x,y,z). Two primitive operations are required: the\nability to evaluate the function, and the function gradient at a\ngiven point. The implicit function divides space into three regions:\non the surface (F(x,y,z)=w), outside of the surface (F(x,y,z)>c), a",
    "nd\ninside the surface (F(x,y,z)<c). (When c is zero, positive values are\noutside, negative values are inside, and zero is on the surface. Note\nalso that the function gradient points from inside to outside.)\n\nImplicit functions are very powerful. It is possible to represent\nalmost any type of geometry with the level sets w = const, especially\nif you use boolean combinations of implicit functions (s",
    "ee\nvtkImplicitBoolean).\n\nvtkImplicitFunction provides a mechanism to transform the implicit\nfunction(s) via a vtkAbstractTransform.  This capability can be used\nto translate, orient, scale, or warp implicit functions.  For\nexample, a sphere implicit function can be transformed into an\noriented ellipse.\n\nCaveats:\n\nThe transformation transforms a point into the space of the implicit\nfunction (i.e., ",
    "the model space). Typically we want to transform the\nimplicit model into world coordinates. In this case the inverse of\nthe transformation is required.\n\nSee Also:\n\nvtkAbstractTransform vtkSphere vtkCylinder vtkImplicitBoolean\nvtkPlane vtkPlanes vtkQuadric vtkImplicitVolume vtkSampleFunction\nvtkCutter vtkClipPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitFunction", o) != 0)
    {
    Py_DECREF(o);
    }

}

