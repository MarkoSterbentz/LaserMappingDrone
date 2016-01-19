// python wrapper for vtkUnstructuredGridLinearRayIntegrator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUnstructuredGridLinearRayIntegrator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUnstructuredGridLinearRayIntegrator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUnstructuredGridLinearRayIntegratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew
#endif

static const char **PyvtkUnstructuredGridLinearRayIntegrator_Doc();


static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridLinearRayIntegrator *op = static_cast<vtkUnstructuredGridLinearRayIntegrator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUnstructuredGridLinearRayIntegrator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridLinearRayIntegrator *op = static_cast<vtkUnstructuredGridLinearRayIntegrator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridLinearRayIntegrator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridLinearRayIntegrator *op = static_cast<vtkUnstructuredGridLinearRayIntegrator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGridLinearRayIntegrator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridLinearRayIntegrator::NewInstance());

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
PyvtkUnstructuredGridLinearRayIntegrator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUnstructuredGridLinearRayIntegrator *tempr = vtkUnstructuredGridLinearRayIntegrator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridLinearRayIntegrator *op = static_cast<vtkUnstructuredGridLinearRayIntegrator *>(vp);

  vtkVolume *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGridLinearRayIntegrator::Initialize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_Integrate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Integrate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridLinearRayIntegrator *op = static_cast<vtkUnstructuredGridLinearRayIntegrator *>(vp);

  vtkDoubleArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  float temp3[4];
  float save3[4];
  const int size3 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->Integrate(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkUnstructuredGridLinearRayIntegrator::Integrate(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_IntegrateRay_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IntegrateRay");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  float temp5[4];
  float save5[4];
  const int size5 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp5, save5, size5);

    vtkUnstructuredGridLinearRayIntegrator::IntegrateRay(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_IntegrateRay_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IntegrateRay");

  double temp0;
  double temp1[3];
  const int size1 = 3;
  double temp2;
  double temp3[3];
  const int size3 = 3;
  double temp4;
  float temp5[4];
  float save5[4];
  const int size5 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp5, save5, size5);

    vtkUnstructuredGridLinearRayIntegrator::IntegrateRay(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridLinearRayIntegrator_IntegrateRay_Methods[] = {
  {NULL, PyvtkUnstructuredGridLinearRayIntegrator_IntegrateRay_s1, METH_VARARGS | METH_STATIC,
   (char*)"dddddO *f"},
  {NULL, PyvtkUnstructuredGridLinearRayIntegrator_IntegrateRay_s2, METH_VARARGS | METH_STATIC,
   (char*)"dOdOdO *d *d *f"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_IntegrateRay(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGridLinearRayIntegrator_IntegrateRay_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IntegrateRay");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGridLinearRayIntegrator_Psi(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Psi");

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    float tempr = vtkUnstructuredGridLinearRayIntegrator::Psi(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridLinearRayIntegrator_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridLinearRayIntegrator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridLinearRayIntegrator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridLinearRayIntegrator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUnstructuredGridLinearRayIntegrator\nC++: vtkUnstructuredGridLinearRayIntegrator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGridLinearRayIntegrator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkUnstructuredGridLinearRayIntegrator\nC++: vtkUnstructuredGridLinearRayIntegrator *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkUnstructuredGridLinearRayIntegrator_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkVolume, vtkDataArray)\nC++: virtual void Initialize(vtkVolume *volume,\n    vtkDataArray *scalars)\n\n"},
  {(char*)"Integrate", PyvtkUnstructuredGridLinearRayIntegrator_Integrate, METH_VARARGS,
   (char*)"V.Integrate(vtkDoubleArray, vtkDataArray, vtkDataArray, [float,\n    float, float, float])\nC++: virtual void Integrate(vtkDoubleArray *intersectionLengths,\n    vtkDataArray *nearIntersections,\n    vtkDataArray *farIntersections, float color[4])\n\n"},
  {(char*)"IntegrateRay", PyvtkUnstructuredGridLinearRayIntegrator_IntegrateRay, METH_VARARGS | METH_STATIC,
   (char*)"V.IntegrateRay(float, float, float, float, float, [float, float,\n    float, float])\nC++: static void IntegrateRay(double length,\n    double intensity_front, double attenuation_front,\n    double intensity_back, double attenuation_back,\n    float color[4])\nV.IntegrateRay(float, (float, float, float), float, (float, float,\n     float), float, [float, float, float, float])\nC++: static void IntegrateRay(double length,\n    const double color_front[3], double attenuation_front,\n    const double color_back[3], double attenuation_back,\n    float color[4])\n\nIntegrates a single ray segment.  color is blended with the\nresult (with color in front).  The result is written back into\ncolor.\n"},
  {(char*)"Psi", PyvtkUnstructuredGridLinearRayIntegrator_Psi, METH_VARARGS | METH_STATIC,
   (char*)"V.Psi(float, float, float) -> float\nC++: static float Psi(float length, float attenuation_front,\n    float attenuation_back)\n\nComputes Psi (as defined by Moreland and Angel, \"A Fast High\nAccuracy Volume Renderer for Unstructured Data\").\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGridLinearRayIntegrator_StaticNew()
{
  return vtkUnstructuredGridLinearRayIntegrator::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridLinearRayIntegratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGridLinearRayIntegrator_StaticNew,
    PyvtkUnstructuredGridLinearRayIntegrator_Methods,
    "vtkUnstructuredGridLinearRayIntegrator", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridLinearRayIntegrator_Doc(),
    PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridLinearRayIntegrator_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridLinearRayIntegrator - performs piecewise linear\nray integration.\n\n",
    "Superclass: vtkUnstructuredGridVolumeRayIntegrator\n\n",
    "vtkUnstructuredGridLinearRayIntegrator performs piecewise linear ray\nintegration.  Considering that transfer functions in VTK are\npiecewise linear, this class should give the \"correct\" integration\nunder most circumstances.  However, the computations performed are\nfairly hefty and should, for the most part, only be used as a\nbenchmark for other, faster methods.\n\nSee Also:\n\nvtkUnstructuredGridPartia",
    "lPreIntegration\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridLinearRayIntegrator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridLinearRayIntegratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridLinearRayIntegrator", o) != 0)
    {
    Py_DECREF(o);
    }

}

