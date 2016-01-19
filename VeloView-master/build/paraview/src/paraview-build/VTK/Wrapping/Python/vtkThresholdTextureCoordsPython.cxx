// python wrapper for vtkThresholdTextureCoords
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkThresholdTextureCoords.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkThresholdTextureCoords(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkThresholdTextureCoordsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkThresholdTextureCoords_Doc();


static PyObject *
PyvtkThresholdTextureCoords_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkThresholdTextureCoords::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThresholdTextureCoords::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkThresholdTextureCoords *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThresholdTextureCoords::NewInstance());

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
PyvtkThresholdTextureCoords_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkThresholdTextureCoords *tempr = vtkThresholdTextureCoords::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_ThresholdByLower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByLower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ThresholdByLower(temp0);
      }
    else
      {
      op->vtkThresholdTextureCoords::ThresholdByLower(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_ThresholdByUpper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByUpper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ThresholdByUpper(temp0);
      }
    else
      {
      op->vtkThresholdTextureCoords::ThresholdByUpper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_ThresholdBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ThresholdBetween(temp0, temp1);
      }
    else
      {
      op->vtkThresholdTextureCoords::ThresholdBetween(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUpperThreshold() :
      op->vtkThresholdTextureCoords::GetUpperThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLowerThreshold() :
      op->vtkThresholdTextureCoords::GetLowerThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_SetTextureDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureDimension(temp0);
      }
    else
      {
      op->vtkThresholdTextureCoords::SetTextureDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_GetTextureDimensionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureDimensionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextureDimensionMinValue() :
      op->vtkThresholdTextureCoords::GetTextureDimensionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_GetTextureDimensionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureDimensionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextureDimensionMaxValue() :
      op->vtkThresholdTextureCoords::GetTextureDimensionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_GetTextureDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextureDimension() :
      op->vtkThresholdTextureCoords::GetTextureDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_SetInTextureCoord_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInTextureCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

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
      op->SetInTextureCoord(temp0, temp1, temp2);
      }
    else
      {
      op->vtkThresholdTextureCoords::SetInTextureCoord(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkThresholdTextureCoords_SetInTextureCoord_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInTextureCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetInTextureCoord(temp0);
      }
    else
      {
      op->vtkThresholdTextureCoords::SetInTextureCoord(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkThresholdTextureCoords_SetInTextureCoord(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkThresholdTextureCoords_SetInTextureCoord_s1(self, args);
    case 1:
      return PyvtkThresholdTextureCoords_SetInTextureCoord_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInTextureCoord");
  return NULL;
}



static PyObject *
PyvtkThresholdTextureCoords_GetInTextureCoord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInTextureCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetInTextureCoord() :
      op->vtkThresholdTextureCoords::GetInTextureCoord());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_SetOutTextureCoord_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutTextureCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

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
      op->SetOutTextureCoord(temp0, temp1, temp2);
      }
    else
      {
      op->vtkThresholdTextureCoords::SetOutTextureCoord(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkThresholdTextureCoords_SetOutTextureCoord_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutTextureCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutTextureCoord(temp0);
      }
    else
      {
      op->vtkThresholdTextureCoords::SetOutTextureCoord(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkThresholdTextureCoords_SetOutTextureCoord(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkThresholdTextureCoords_SetOutTextureCoord_s1(self, args);
    case 1:
      return PyvtkThresholdTextureCoords_SetOutTextureCoord_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutTextureCoord");
  return NULL;
}



static PyObject *
PyvtkThresholdTextureCoords_GetOutTextureCoord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutTextureCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOutTextureCoord() :
      op->vtkThresholdTextureCoords::GetOutTextureCoord());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkThresholdTextureCoords_Methods[] = {
  {(char*)"GetClassName", PyvtkThresholdTextureCoords_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkThresholdTextureCoords_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkThresholdTextureCoords_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkThresholdTextureCoords\nC++: vtkThresholdTextureCoords *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkThresholdTextureCoords_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkThresholdTextureCoords\nC++: vtkThresholdTextureCoords *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ThresholdByLower", PyvtkThresholdTextureCoords_ThresholdByLower, METH_VARARGS,
   (char*)"V.ThresholdByLower(float)\nC++: void ThresholdByLower(double lower)\n\nCriterion is cells whose scalars are less than lower threshold.\n"},
  {(char*)"ThresholdByUpper", PyvtkThresholdTextureCoords_ThresholdByUpper, METH_VARARGS,
   (char*)"V.ThresholdByUpper(float)\nC++: void ThresholdByUpper(double upper)\n\nCriterion is cells whose scalars are less than upper threshold.\n"},
  {(char*)"ThresholdBetween", PyvtkThresholdTextureCoords_ThresholdBetween, METH_VARARGS,
   (char*)"V.ThresholdBetween(float, float)\nC++: void ThresholdBetween(double lower, double upper)\n\nCriterion is cells whose scalars are between lower and upper\nthresholds.\n"},
  {(char*)"GetUpperThreshold", PyvtkThresholdTextureCoords_GetUpperThreshold, METH_VARARGS,
   (char*)"V.GetUpperThreshold() -> float\nC++: double GetUpperThreshold()\n\nReturn the upper and lower thresholds.\n"},
  {(char*)"GetLowerThreshold", PyvtkThresholdTextureCoords_GetLowerThreshold, METH_VARARGS,
   (char*)"V.GetLowerThreshold() -> float\nC++: double GetLowerThreshold()\n\nReturn the upper and lower thresholds.\n"},
  {(char*)"SetTextureDimension", PyvtkThresholdTextureCoords_SetTextureDimension, METH_VARARGS,
   (char*)"V.SetTextureDimension(int)\nC++: void SetTextureDimension(int)\n\nSet the desired dimension of the texture map.\n"},
  {(char*)"GetTextureDimensionMinValue", PyvtkThresholdTextureCoords_GetTextureDimensionMinValue, METH_VARARGS,
   (char*)"V.GetTextureDimensionMinValue() -> int\nC++: int GetTextureDimensionMinValue()\n\nSet the desired dimension of the texture map.\n"},
  {(char*)"GetTextureDimensionMaxValue", PyvtkThresholdTextureCoords_GetTextureDimensionMaxValue, METH_VARARGS,
   (char*)"V.GetTextureDimensionMaxValue() -> int\nC++: int GetTextureDimensionMaxValue()\n\nSet the desired dimension of the texture map.\n"},
  {(char*)"GetTextureDimension", PyvtkThresholdTextureCoords_GetTextureDimension, METH_VARARGS,
   (char*)"V.GetTextureDimension() -> int\nC++: int GetTextureDimension()\n\nSet the desired dimension of the texture map.\n"},
  {(char*)"SetInTextureCoord", PyvtkThresholdTextureCoords_SetInTextureCoord, METH_VARARGS,
   (char*)"V.SetInTextureCoord(float, float, float)\nC++: void SetInTextureCoord(double, double, double)\nV.SetInTextureCoord((float, float, float))\nC++: void SetInTextureCoord(double a[3])\n\n"},
  {(char*)"GetInTextureCoord", PyvtkThresholdTextureCoords_GetInTextureCoord, METH_VARARGS,
   (char*)"V.GetInTextureCoord() -> (float, float, float)\nC++: double *GetInTextureCoord()\n\nSet the texture coordinate value for point satisfying threshold\ncriterion.\n"},
  {(char*)"SetOutTextureCoord", PyvtkThresholdTextureCoords_SetOutTextureCoord, METH_VARARGS,
   (char*)"V.SetOutTextureCoord(float, float, float)\nC++: void SetOutTextureCoord(double, double, double)\nV.SetOutTextureCoord((float, float, float))\nC++: void SetOutTextureCoord(double a[3])\n\n"},
  {(char*)"GetOutTextureCoord", PyvtkThresholdTextureCoords_GetOutTextureCoord, METH_VARARGS,
   (char*)"V.GetOutTextureCoord() -> (float, float, float)\nC++: double *GetOutTextureCoord()\n\nSet the texture coordinate value for point NOT satisfying\nthreshold\n criterion.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkThresholdTextureCoords_StaticNew()
{
  return vtkThresholdTextureCoords::New();
}

PyObject *PyVTKClass_vtkThresholdTextureCoordsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkThresholdTextureCoords_StaticNew,
    PyvtkThresholdTextureCoords_Methods,
    "vtkThresholdTextureCoords", modulename,
    NULL, NULL,
    PyvtkThresholdTextureCoords_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkThresholdTextureCoords_Doc()
{
  static const char *docstring[] = {
    "vtkThresholdTextureCoords - compute 1D, 2D, or 3D texture coordinates\nbased on scalar threshold\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkThresholdTextureCoords is a filter that generates texture\ncoordinates for any input dataset type given a threshold criterion.\nThe criterion can take three forms: 1) greater than a particular\nvalue (ThresholdByUpper());\n2) less than a particular value (ThresholdByLower(); or 3) between\n   two values (ThresholdBetween(). If the threshold criterion is\n   satisfied, the \"in\" texture coordinate will",
    " be set (this can be\n   specified by the user). If the threshold criterion is not\n   satisfied the \"out\" is set.\n\nCaveats:\n\nThere is a texture map - texThres.vtk - that can be used in\nconjunction with this filter. This map defines a \"transparent\" region\nfor texture coordinates 0<=r<0.5, and an opaque full intensity map\nfor texture coordinates 0.5<r<=1.0. There is a small transition\nregion for r=0.",
    "5.\n\nSee Also:\n\nvtkThreshold vtkThresholdPoints vtkTextureMapToPlane\nvtkTextureMapToSphere vtkTextureMapToCylinder\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkThresholdTextureCoords(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkThresholdTextureCoordsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkThresholdTextureCoords", o) != 0)
    {
    Py_DECREF(o);
    }

}

