// python wrapper for vtkCubeSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCubeSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCubeSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCubeSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkCubeSource_Doc();


static PyObject *
PyvtkCubeSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCubeSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCubeSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCubeSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCubeSource::NewInstance());

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
PyvtkCubeSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCubeSource *tempr = vtkCubeSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_SetXLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXLength(temp0);
      }
    else
      {
      op->vtkCubeSource::SetXLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_GetXLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetXLengthMinValue() :
      op->vtkCubeSource::GetXLengthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_GetXLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetXLengthMaxValue() :
      op->vtkCubeSource::GetXLengthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_GetXLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetXLength() :
      op->vtkCubeSource::GetXLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_SetYLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYLength(temp0);
      }
    else
      {
      op->vtkCubeSource::SetYLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_GetYLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetYLengthMinValue() :
      op->vtkCubeSource::GetYLengthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_GetYLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetYLengthMaxValue() :
      op->vtkCubeSource::GetYLengthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_GetYLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetYLength() :
      op->vtkCubeSource::GetYLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_SetZLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZLength(temp0);
      }
    else
      {
      op->vtkCubeSource::SetZLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_GetZLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetZLengthMinValue() :
      op->vtkCubeSource::GetZLengthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_GetZLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetZLengthMaxValue() :
      op->vtkCubeSource::GetZLengthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_GetZLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetZLength() :
      op->vtkCubeSource::GetZLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

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
      op->vtkCubeSource::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

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
      op->vtkCubeSource::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCubeSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkCubeSource_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkCubeSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkCubeSource::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkCubeSource::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeSource_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0);
      }
    else
      {
      op->vtkCubeSource::SetBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeSource_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkCubeSource_SetBounds_s1(self, args);
    case 1:
      return PyvtkCubeSource_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkCubeSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

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
      op->vtkCubeSource::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkCubeSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCubeSource_Methods[] = {
  {(char*)"GetClassName", PyvtkCubeSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCubeSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCubeSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCubeSource\nC++: vtkCubeSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCubeSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCubeSource\nC++: vtkCubeSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetXLength", PyvtkCubeSource_SetXLength, METH_VARARGS,
   (char*)"V.SetXLength(float)\nC++: void SetXLength(double)\n\nSet the length of the cube in the x-direction.\n"},
  {(char*)"GetXLengthMinValue", PyvtkCubeSource_GetXLengthMinValue, METH_VARARGS,
   (char*)"V.GetXLengthMinValue() -> float\nC++: double GetXLengthMinValue()\n\nSet the length of the cube in the x-direction.\n"},
  {(char*)"GetXLengthMaxValue", PyvtkCubeSource_GetXLengthMaxValue, METH_VARARGS,
   (char*)"V.GetXLengthMaxValue() -> float\nC++: double GetXLengthMaxValue()\n\nSet the length of the cube in the x-direction.\n"},
  {(char*)"GetXLength", PyvtkCubeSource_GetXLength, METH_VARARGS,
   (char*)"V.GetXLength() -> float\nC++: double GetXLength()\n\nSet the length of the cube in the x-direction.\n"},
  {(char*)"SetYLength", PyvtkCubeSource_SetYLength, METH_VARARGS,
   (char*)"V.SetYLength(float)\nC++: void SetYLength(double)\n\nSet the length of the cube in the y-direction.\n"},
  {(char*)"GetYLengthMinValue", PyvtkCubeSource_GetYLengthMinValue, METH_VARARGS,
   (char*)"V.GetYLengthMinValue() -> float\nC++: double GetYLengthMinValue()\n\nSet the length of the cube in the y-direction.\n"},
  {(char*)"GetYLengthMaxValue", PyvtkCubeSource_GetYLengthMaxValue, METH_VARARGS,
   (char*)"V.GetYLengthMaxValue() -> float\nC++: double GetYLengthMaxValue()\n\nSet the length of the cube in the y-direction.\n"},
  {(char*)"GetYLength", PyvtkCubeSource_GetYLength, METH_VARARGS,
   (char*)"V.GetYLength() -> float\nC++: double GetYLength()\n\nSet the length of the cube in the y-direction.\n"},
  {(char*)"SetZLength", PyvtkCubeSource_SetZLength, METH_VARARGS,
   (char*)"V.SetZLength(float)\nC++: void SetZLength(double)\n\nSet the length of the cube in the z-direction.\n"},
  {(char*)"GetZLengthMinValue", PyvtkCubeSource_GetZLengthMinValue, METH_VARARGS,
   (char*)"V.GetZLengthMinValue() -> float\nC++: double GetZLengthMinValue()\n\nSet the length of the cube in the z-direction.\n"},
  {(char*)"GetZLengthMaxValue", PyvtkCubeSource_GetZLengthMaxValue, METH_VARARGS,
   (char*)"V.GetZLengthMaxValue() -> float\nC++: double GetZLengthMaxValue()\n\nSet the length of the cube in the z-direction.\n"},
  {(char*)"GetZLength", PyvtkCubeSource_GetZLength, METH_VARARGS,
   (char*)"V.GetZLength() -> float\nC++: double GetZLength()\n\nSet the length of the cube in the z-direction.\n"},
  {(char*)"SetCenter", PyvtkCubeSource_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkCubeSource_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet the center of the cube.\n"},
  {(char*)"SetBounds", PyvtkCubeSource_SetBounds, METH_VARARGS,
   (char*)"V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(const double bounds[6])\n\nConvenience method allows creation of cube by specifying bounding\nbox.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkCubeSource_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkCubeSource_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCubeSource_StaticNew()
{
  return vtkCubeSource::New();
}

PyObject *PyVTKClass_vtkCubeSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCubeSource_StaticNew,
    PyvtkCubeSource_Methods,
    "vtkCubeSource", modulename,
    NULL, NULL,
    PyvtkCubeSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCubeSource_Doc()
{
  static const char *docstring[] = {
    "vtkCubeSource - create a polygonal representation of a cube\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkCubeSource creates a cube centered at origin. The cube is\nrepresented with four-sided polygons. It is possible to specify the\nlength, width, and height of the cube independently.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCubeSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCubeSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCubeSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

