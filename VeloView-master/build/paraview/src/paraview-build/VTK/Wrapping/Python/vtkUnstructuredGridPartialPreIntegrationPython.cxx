// python wrapper for vtkUnstructuredGridPartialPreIntegration
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUnstructuredGridPartialPreIntegration.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUnstructuredGridPartialPreIntegration(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUnstructuredGridPartialPreIntegrationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew
#endif

static const char **PyvtkUnstructuredGridPartialPreIntegration_Doc();


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPartialPreIntegration *op = static_cast<vtkUnstructuredGridPartialPreIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUnstructuredGridPartialPreIntegration::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPartialPreIntegration *op = static_cast<vtkUnstructuredGridPartialPreIntegration *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridPartialPreIntegration::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPartialPreIntegration *op = static_cast<vtkUnstructuredGridPartialPreIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGridPartialPreIntegration *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridPartialPreIntegration::NewInstance());

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
PyvtkUnstructuredGridPartialPreIntegration_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUnstructuredGridPartialPreIntegration *tempr = vtkUnstructuredGridPartialPreIntegration::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPartialPreIntegration *op = static_cast<vtkUnstructuredGridPartialPreIntegration *>(vp);

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
      op->vtkUnstructuredGridPartialPreIntegration::Initialize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_Integrate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Integrate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPartialPreIntegration *op = static_cast<vtkUnstructuredGridPartialPreIntegration *>(vp);

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
      op->vtkUnstructuredGridPartialPreIntegration::Integrate(temp0, temp1, temp2, temp3);
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
PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_s1(PyObject *, PyObject *args)
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

    vtkUnstructuredGridPartialPreIntegration::IntegrateRay(temp0, temp1, temp2, temp3, temp4, temp5);

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
PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_s2(PyObject *, PyObject *args)
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

    vtkUnstructuredGridPartialPreIntegration::IntegrateRay(temp0, temp1, temp2, temp3, temp4, temp5);

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

static PyMethodDef PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_Methods[] = {
  {NULL, PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_s1, METH_VARARGS | METH_STATIC,
   (char*)"dddddO *f"},
  {NULL, PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_s2, METH_VARARGS | METH_STATIC,
   (char*)"dOdOdO *d *d *f"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay_Methods;
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
PyvtkUnstructuredGridPartialPreIntegration_Psi(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Psi");

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    float tempr = vtkUnstructuredGridPartialPreIntegration::Psi(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_GetPsiTable(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPsiTable");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    float *tempr = vtkUnstructuredGridPartialPreIntegration::GetPsiTable(temp0);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPartialPreIntegration_BuildPsiTable(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BuildPsiTable");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkUnstructuredGridPartialPreIntegration::BuildPsiTable();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridPartialPreIntegration_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridPartialPreIntegration_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridPartialPreIntegration_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridPartialPreIntegration_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUnstructuredGridPartialPreIntegration\nC++: vtkUnstructuredGridPartialPreIntegration *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGridPartialPreIntegration_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkUnstructuredGridPartialPreIntegration\nC++: vtkUnstructuredGridPartialPreIntegration *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkUnstructuredGridPartialPreIntegration_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkVolume, vtkDataArray)\nC++: virtual void Initialize(vtkVolume *volume,\n    vtkDataArray *scalars)\n\n"},
  {(char*)"Integrate", PyvtkUnstructuredGridPartialPreIntegration_Integrate, METH_VARARGS,
   (char*)"V.Integrate(vtkDoubleArray, vtkDataArray, vtkDataArray, [float,\n    float, float, float])\nC++: virtual void Integrate(vtkDoubleArray *intersectionLengths,\n    vtkDataArray *nearIntersections,\n    vtkDataArray *farIntersections, float color[4])\n\n"},
  {(char*)"IntegrateRay", PyvtkUnstructuredGridPartialPreIntegration_IntegrateRay, METH_VARARGS | METH_STATIC,
   (char*)"V.IntegrateRay(float, float, float, float, float, [float, float,\n    float, float])\nC++: static void IntegrateRay(double length,\n    double intensity_front, double attenuation_front,\n    double intensity_back, double attenuation_back,\n    float color[4])\nV.IntegrateRay(float, (float, float, float), float, (float, float,\n     float), float, [float, float, float, float])\nC++: static void IntegrateRay(double length,\n    const double color_front[3], double attenuation_front,\n    const double color_back[3], double attenuation_back,\n    float color[4])\n\nIntegrates a single ray segment.  color is blended with the\nresult (with color in front).  The result is written back into\ncolor.\n"},
  {(char*)"Psi", PyvtkUnstructuredGridPartialPreIntegration_Psi, METH_VARARGS | METH_STATIC,
   (char*)"V.Psi(float, float) -> float\nC++: static float Psi(float taufD, float taubD)\n\nLooks up Psi (as defined by Moreland and Angel, \"A Fast High\nAccuracy Volume Renderer for Unstructured Data\") in a table.  The\ntable must be created first, which happens on the first\ninstantiation of this class or when BuildPsiTable is first\ncalled.\n"},
  {(char*)"GetPsiTable", PyvtkUnstructuredGridPartialPreIntegration_GetPsiTable, METH_VARARGS | METH_STATIC,
   (char*)"V.GetPsiTable(int) -> (float, ...)\nC++: static float *GetPsiTable(int &size)\n\nLooks up Psi (as defined by Moreland and Angel, \"A Fast High\nAccuracy Volume Renderer for Unstructured Data\") in a table.  The\ntable must be created first, which happens on the first\ninstantiation of this class or when BuildPsiTable is first\ncalled.\n"},
  {(char*)"BuildPsiTable", PyvtkUnstructuredGridPartialPreIntegration_BuildPsiTable, METH_VARARGS | METH_STATIC,
   (char*)"V.BuildPsiTable()\nC++: static void BuildPsiTable()\n\nLooks up Psi (as defined by Moreland and Angel, \"A Fast High\nAccuracy Volume Renderer for Unstructured Data\") in a table.  The\ntable must be created first, which happens on the first\ninstantiation of this class or when BuildPsiTable is first\ncalled.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGridPartialPreIntegration_StaticNew()
{
  return vtkUnstructuredGridPartialPreIntegration::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridPartialPreIntegrationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGridPartialPreIntegration_StaticNew,
    PyvtkUnstructuredGridPartialPreIntegration_Methods,
    "vtkUnstructuredGridPartialPreIntegration", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridPartialPreIntegration_Doc(),
    PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridPartialPreIntegration_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridPartialPreIntegration - performs piecewise linear\nray integration.\n\n",
    "Superclass: vtkUnstructuredGridVolumeRayIntegrator\n\n",
    "vtkUnstructuredGridPartialPreIntegration performs piecewise linear\nray integration.  This will give the same results as\nvtkUnstructuredGridLinearRayIntegration (with potentially a error due\nto table lookup quantization), but should be notably faster.  The\nalgorithm used is given by Moreland and Angel, \"A Fast High Accuracy\nVolume Renderer for Unstructured Data.\"\n\nThis class is thread safe only aft",
    "er the first instance is created.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridPartialPreIntegration(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridPartialPreIntegrationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridPartialPreIntegration", o) != 0)
    {
    Py_DECREF(o);
    }

}

