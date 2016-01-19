// python wrapper for vtkPerlinNoise
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPerlinNoise.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPerlinNoise(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPerlinNoiseNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImplicitFunctionNew
extern "C" { PyObject *PyVTKClass_vtkImplicitFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkImplicitFunctionNew
#endif

static const char **PyvtkPerlinNoise_Doc();


static PyObject *
PyvtkPerlinNoise_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPerlinNoise::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPerlinNoise_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPerlinNoise::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPerlinNoise_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPerlinNoise *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPerlinNoise::NewInstance());

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
PyvtkPerlinNoise_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPerlinNoise *tempr = vtkPerlinNoise::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPerlinNoise_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0) :
      op->vtkPerlinNoise::EvaluateFunction(temp0));

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
PyvtkPerlinNoise_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

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
      op->vtkPerlinNoise::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPerlinNoise_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPerlinNoise_EvaluateFunction_s1(self, args);
    case 3:
      return PyvtkPerlinNoise_EvaluateFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return NULL;
}



static PyObject *
PyvtkPerlinNoise_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

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
      op->EvaluateGradient(temp0, temp1);
      }
    else
      {
      op->vtkPerlinNoise::EvaluateGradient(temp0, temp1);
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
PyvtkPerlinNoise_SetFrequency_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

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
      op->SetFrequency(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPerlinNoise::SetFrequency(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPerlinNoise_SetFrequency_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetFrequency(temp0);
      }
    else
      {
      op->vtkPerlinNoise::SetFrequency(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPerlinNoise_SetFrequency(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPerlinNoise_SetFrequency_s1(self, args);
    case 1:
      return PyvtkPerlinNoise_SetFrequency_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetFrequency");
  return NULL;
}



static PyObject *
PyvtkPerlinNoise_GetFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetFrequency() :
      op->vtkPerlinNoise::GetFrequency());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPerlinNoise_SetPhase_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

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
      op->SetPhase(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPerlinNoise::SetPhase(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPerlinNoise_SetPhase_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPhase(temp0);
      }
    else
      {
      op->vtkPerlinNoise::SetPhase(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPerlinNoise_SetPhase(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPerlinNoise_SetPhase_s1(self, args);
    case 1:
      return PyvtkPerlinNoise_SetPhase_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPhase");
  return NULL;
}



static PyObject *
PyvtkPerlinNoise_GetPhase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPhase() :
      op->vtkPerlinNoise::GetPhase());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPerlinNoise_SetAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAmplitude(temp0);
      }
    else
      {
      op->vtkPerlinNoise::SetAmplitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPerlinNoise_GetAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAmplitude() :
      op->vtkPerlinNoise::GetAmplitude());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPerlinNoise_Methods[] = {
  {(char*)"GetClassName", PyvtkPerlinNoise_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPerlinNoise_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPerlinNoise_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPerlinNoise\nC++: vtkPerlinNoise *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPerlinNoise_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPerlinNoise\nC++: vtkPerlinNoise *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EvaluateFunction", PyvtkPerlinNoise_EvaluateFunction, METH_VARARGS,
   (char*)"V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3])\nV.EvaluateFunction(float, float, float) -> float\nC++: double EvaluateFunction(double x, double y, double z)\n\nEvaluate PerlinNoise function.\n"},
  {(char*)"EvaluateGradient", PyvtkPerlinNoise_EvaluateGradient, METH_VARARGS,
   (char*)"V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double n[3])\n\nEvaluate PerlinNoise gradient.  Currently, the method returns a 0\ngradient.\n"},
  {(char*)"SetFrequency", PyvtkPerlinNoise_SetFrequency, METH_VARARGS,
   (char*)"V.SetFrequency(float, float, float)\nC++: void SetFrequency(double, double, double)\nV.SetFrequency((float, float, float))\nC++: void SetFrequency(double a[3])\n\n"},
  {(char*)"GetFrequency", PyvtkPerlinNoise_GetFrequency, METH_VARARGS,
   (char*)"V.GetFrequency() -> (float, float, float)\nC++: double *GetFrequency()\n\nSet/get the frequency, or physical scale,  of the noise function\n(higher is finer scale).  The frequency can be adjusted per axis,\nor the same for all axes.\n"},
  {(char*)"SetPhase", PyvtkPerlinNoise_SetPhase, METH_VARARGS,
   (char*)"V.SetPhase(float, float, float)\nC++: void SetPhase(double, double, double)\nV.SetPhase((float, float, float))\nC++: void SetPhase(double a[3])\n\n"},
  {(char*)"GetPhase", PyvtkPerlinNoise_GetPhase, METH_VARARGS,
   (char*)"V.GetPhase() -> (float, float, float)\nC++: double *GetPhase()\n\nSet/get the phase of the noise function.  This parameter can be\nused to shift the noise function within space (perhaps to avoid a\nbeat with a noise pattern at another scale).  Phase tends to\nrepeat about every unit, so a phase of 0.5 is a half-cycle shift.\n"},
  {(char*)"SetAmplitude", PyvtkPerlinNoise_SetAmplitude, METH_VARARGS,
   (char*)"V.SetAmplitude(float)\nC++: void SetAmplitude(double a)\n\nSet/get the amplitude of the noise function. Amplitude can be\nnegative. The noise function varies randomly between -|Amplitude|\nand |Amplitude|. Therefore the range of values is 2*|Amplitude|\nlarge. The initial amplitude is 1.\n"},
  {(char*)"GetAmplitude", PyvtkPerlinNoise_GetAmplitude, METH_VARARGS,
   (char*)"V.GetAmplitude() -> float\nC++: double GetAmplitude()\n\nSet/get the amplitude of the noise function. Amplitude can be\nnegative. The noise function varies randomly between -|Amplitude|\nand |Amplitude|. Therefore the range of values is 2*|Amplitude|\nlarge. The initial amplitude is 1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPerlinNoise_StaticNew()
{
  return vtkPerlinNoise::New();
}

PyObject *PyVTKClass_vtkPerlinNoiseNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPerlinNoise_StaticNew,
    PyvtkPerlinNoise_Methods,
    "vtkPerlinNoise", modulename,
    NULL, NULL,
    PyvtkPerlinNoise_Doc(),
    PyVTKClass_vtkImplicitFunctionNew(modulename));
  return cls;
}

const char **PyvtkPerlinNoise_Doc()
{
  static const char *docstring[] = {
    "vtkPerlinNoise - an implicit function that implements Perlin noise\n\n",
    "Superclass: vtkImplicitFunction\n\n",
    "vtkPerlinNoise computes a Perlin noise field as an implicit function.\nvtkPerlinNoise is a concrete implementation of vtkImplicitFunction.\nPerlin noise, originally described by Ken Perlin, is a non-periodic\nand continuous noise function useful for modeling real-world objects.\n\nThe amplitude and frequency of the noise pattern are adjustable. \nThis implementation of Perlin noise is derived closely fr",
    "om Greg\nWard's version in Graphics Gems II.\n\nSee Also:\n\nvtkImplicitFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPerlinNoise(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPerlinNoiseNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPerlinNoise", o) != 0)
    {
    Py_DECREF(o);
    }

}

