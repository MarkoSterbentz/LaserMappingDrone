// python wrapper for vtkPointSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPointSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPointSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPointSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkPointSource_Doc();


static PyObject *
PyvtkPointSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPointSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPointSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointSource::NewInstance());

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
PyvtkPointSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPointSource *tempr = vtkPointSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPoints(temp0);
      }
    else
      {
      op->vtkPointSource::SetNumberOfPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_GetNumberOfPointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPointsMinValue() :
      op->vtkPointSource::GetNumberOfPointsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_GetNumberOfPointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPointsMaxValue() :
      op->vtkPointSource::GetNumberOfPointsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkPointSource::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

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
      op->vtkPointSource::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

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
      op->vtkPointSource::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPointSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkPointSource_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkPointSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkPointSource::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkPointSource::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkPointSource::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkPointSource::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkPointSource::GetRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_SetDistribution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistribution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistribution(temp0);
      }
    else
      {
      op->vtkPointSource::SetDistribution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_SetDistributionToUniform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistributionToUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDistributionToUniform();
      }
    else
      {
      op->vtkPointSource::SetDistributionToUniform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_SetDistributionToShell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistributionToShell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDistributionToShell();
      }
    else
      {
      op->vtkPointSource::SetDistributionToShell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_GetDistribution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistribution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDistribution() :
      op->vtkPointSource::GetDistribution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPointsPrecision(temp0);
      }
    else
      {
      op->vtkPointSource::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkPointSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPointSource_Methods[] = {
  {(char*)"GetClassName", PyvtkPointSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPointSource\nC++: vtkPointSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPointSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointSource\nC++: vtkPointSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfPoints", PyvtkPointSource_SetNumberOfPoints, METH_VARARGS,
   (char*)"V.SetNumberOfPoints(int)\nC++: void SetNumberOfPoints(vtkIdType)\n\nSet the number of points to generate.\n"},
  {(char*)"GetNumberOfPointsMinValue", PyvtkPointSource_GetNumberOfPointsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfPointsMinValue() -> int\nC++: vtkIdType GetNumberOfPointsMinValue()\n\nSet the number of points to generate.\n"},
  {(char*)"GetNumberOfPointsMaxValue", PyvtkPointSource_GetNumberOfPointsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfPointsMaxValue() -> int\nC++: vtkIdType GetNumberOfPointsMaxValue()\n\nSet the number of points to generate.\n"},
  {(char*)"GetNumberOfPoints", PyvtkPointSource_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nSet the number of points to generate.\n"},
  {(char*)"SetCenter", PyvtkPointSource_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkPointSource_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet the center of the point cloud.\n"},
  {(char*)"SetRadius", PyvtkPointSource_SetRadius, METH_VARARGS,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double)\n\nSet the radius of the point cloud.  If you are generating a\nGaussian distribution, then this is the standard deviation for\neach of x, y, and z.\n"},
  {(char*)"GetRadiusMinValue", PyvtkPointSource_GetRadiusMinValue, METH_VARARGS,
   (char*)"V.GetRadiusMinValue() -> float\nC++: double GetRadiusMinValue()\n\nSet the radius of the point cloud.  If you are generating a\nGaussian distribution, then this is the standard deviation for\neach of x, y, and z.\n"},
  {(char*)"GetRadiusMaxValue", PyvtkPointSource_GetRadiusMaxValue, METH_VARARGS,
   (char*)"V.GetRadiusMaxValue() -> float\nC++: double GetRadiusMaxValue()\n\nSet the radius of the point cloud.  If you are generating a\nGaussian distribution, then this is the standard deviation for\neach of x, y, and z.\n"},
  {(char*)"GetRadius", PyvtkPointSource_GetRadius, METH_VARARGS,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet the radius of the point cloud.  If you are generating a\nGaussian distribution, then this is the standard deviation for\neach of x, y, and z.\n"},
  {(char*)"SetDistribution", PyvtkPointSource_SetDistribution, METH_VARARGS,
   (char*)"V.SetDistribution(int)\nC++: void SetDistribution(int a)\n\nSpecify the distribution to use.  The default is a uniform\ndistribution.  The shell distribution produces random points on\nthe surface of the sphere, none in the interior.\n"},
  {(char*)"SetDistributionToUniform", PyvtkPointSource_SetDistributionToUniform, METH_VARARGS,
   (char*)"V.SetDistributionToUniform()\nC++: void SetDistributionToUniform()\n\nSpecify the distribution to use.  The default is a uniform\ndistribution.  The shell distribution produces random points on\nthe surface of the sphere, none in the interior.\n"},
  {(char*)"SetDistributionToShell", PyvtkPointSource_SetDistributionToShell, METH_VARARGS,
   (char*)"V.SetDistributionToShell()\nC++: void SetDistributionToShell()\n\nSpecify the distribution to use.  The default is a uniform\ndistribution.  The shell distribution produces random points on\nthe surface of the sphere, none in the interior.\n"},
  {(char*)"GetDistribution", PyvtkPointSource_GetDistribution, METH_VARARGS,
   (char*)"V.GetDistribution() -> int\nC++: int GetDistribution()\n\nSpecify the distribution to use.  The default is a uniform\ndistribution.  The shell distribution produces random points on\nthe surface of the sphere, none in the interior.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkPointSource_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkPointSource_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointSource_StaticNew()
{
  return vtkPointSource::New();
}

PyObject *PyVTKClass_vtkPointSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointSource_StaticNew,
    PyvtkPointSource_Methods,
    "vtkPointSource", modulename,
    NULL, NULL,
    PyvtkPointSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPointSource_Doc()
{
  static const char *docstring[] = {
    "vtkPointSource - create a random cloud of points\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkPointSource is a source object that creates a user-specified\nnumber of points within a specified radius about a specified center\npoint. By default location of the points is random within the sphere.\nIt is also possible to generate random points only on the surface of\nthe sphere. The output PolyData has the specified number of points\nand 1 cell - a vtkPolyVertex containing all of the points.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointSource", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_POINT_UNIFORM", 1 },
        { "VTK_POINT_SHELL", 0 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

