// python wrapper for vtkImageSinusoidSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageSinusoidSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageSinusoidSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageSinusoidSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageSinusoidSource_Doc();


static PyObject *
PyvtkImageSinusoidSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageSinusoidSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSinusoidSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageSinusoidSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSinusoidSource::NewInstance());

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
PyvtkImageSinusoidSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageSinusoidSource *tempr = vtkImageSinusoidSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_SetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageSinusoidSource::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_SetDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

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
      op->SetDirection(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageSinusoidSource::SetDirection(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageSinusoidSource_SetDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetDirection(temp0);
      }
    else
      {
      op->vtkImageSinusoidSource::SetDirection(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageSinusoidSource_SetDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageSinusoidSource_SetDirection_s1(self, args);
    case 1:
      return PyvtkImageSinusoidSource_SetDirection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDirection");
  return NULL;
}



static PyObject *
PyvtkImageSinusoidSource_GetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDirection() :
      op->vtkImageSinusoidSource::GetDirection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_SetPeriod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPeriod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPeriod(temp0);
      }
    else
      {
      op->vtkImageSinusoidSource::SetPeriod(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_GetPeriod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPeriod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPeriod() :
      op->vtkImageSinusoidSource::GetPeriod());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_SetPhase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPhase(temp0);
      }
    else
      {
      op->vtkImageSinusoidSource::SetPhase(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_GetPhase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPhase() :
      op->vtkImageSinusoidSource::GetPhase());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_SetAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

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
      op->vtkImageSinusoidSource::SetAmplitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_GetAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAmplitude() :
      op->vtkImageSinusoidSource::GetAmplitude());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageSinusoidSource_Methods[] = {
  {(char*)"GetClassName", PyvtkImageSinusoidSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageSinusoidSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageSinusoidSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageSinusoidSource\nC++: vtkImageSinusoidSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageSinusoidSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageSinusoidSource\nC++: vtkImageSinusoidSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWholeExtent", PyvtkImageSinusoidSource_SetWholeExtent, METH_VARARGS,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int xMinx, int xMax, int yMin, int yMax,\n    int zMin, int zMax)\n\nSet/Get the extent of the whole output image.\n"},
  {(char*)"SetDirection", PyvtkImageSinusoidSource_SetDirection, METH_VARARGS,
   (char*)"V.SetDirection(float, float, float)\nC++: void SetDirection(double, double, double)\nV.SetDirection([float, float, float])\nC++: void SetDirection(double dir[3])\n\nSet/Get the direction vector which determines the sinusoidal\norientation. The magnitude is ignored.\n"},
  {(char*)"GetDirection", PyvtkImageSinusoidSource_GetDirection, METH_VARARGS,
   (char*)"V.GetDirection() -> (float, float, float)\nC++: double *GetDirection()\n\n"},
  {(char*)"SetPeriod", PyvtkImageSinusoidSource_SetPeriod, METH_VARARGS,
   (char*)"V.SetPeriod(float)\nC++: void SetPeriod(double a)\n\nSet/Get the period of the sinusoid in pixels.\n"},
  {(char*)"GetPeriod", PyvtkImageSinusoidSource_GetPeriod, METH_VARARGS,
   (char*)"V.GetPeriod() -> float\nC++: double GetPeriod()\n\nSet/Get the period of the sinusoid in pixels.\n"},
  {(char*)"SetPhase", PyvtkImageSinusoidSource_SetPhase, METH_VARARGS,
   (char*)"V.SetPhase(float)\nC++: void SetPhase(double a)\n\nSet/Get the phase: 0->2Pi.  0 => Cosine, pi/2 => Sine.\n"},
  {(char*)"GetPhase", PyvtkImageSinusoidSource_GetPhase, METH_VARARGS,
   (char*)"V.GetPhase() -> float\nC++: double GetPhase()\n\nSet/Get the phase: 0->2Pi.  0 => Cosine, pi/2 => Sine.\n"},
  {(char*)"SetAmplitude", PyvtkImageSinusoidSource_SetAmplitude, METH_VARARGS,
   (char*)"V.SetAmplitude(float)\nC++: void SetAmplitude(double a)\n\nSet/Get the magnitude of the sinusoid.\n"},
  {(char*)"GetAmplitude", PyvtkImageSinusoidSource_GetAmplitude, METH_VARARGS,
   (char*)"V.GetAmplitude() -> float\nC++: double GetAmplitude()\n\nSet/Get the magnitude of the sinusoid.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageSinusoidSource_StaticNew()
{
  return vtkImageSinusoidSource::New();
}

PyObject *PyVTKClass_vtkImageSinusoidSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageSinusoidSource_StaticNew,
    PyvtkImageSinusoidSource_Methods,
    "vtkImageSinusoidSource", modulename,
    NULL, NULL,
    PyvtkImageSinusoidSource_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageSinusoidSource_Doc()
{
  static const char *docstring[] = {
    "vtkImageSinusoidSource - Create an image with sinusoidal pixel values.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageSinusoidSource just produces images with pixel values\ndetermined by a sinusoid.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageSinusoidSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageSinusoidSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageSinusoidSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

