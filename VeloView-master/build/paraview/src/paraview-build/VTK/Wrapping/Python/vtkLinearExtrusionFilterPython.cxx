// python wrapper for vtkLinearExtrusionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLinearExtrusionFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLinearExtrusionFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLinearExtrusionFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkLinearExtrusionFilter_Doc();


static PyObject *
PyvtkLinearExtrusionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLinearExtrusionFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLinearExtrusionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLinearExtrusionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLinearExtrusionFilter::NewInstance());

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
PyvtkLinearExtrusionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLinearExtrusionFilter *tempr = vtkLinearExtrusionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SetExtrusionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtrusionType(temp0);
      }
    else
      {
      op->vtkLinearExtrusionFilter::SetExtrusionType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_GetExtrusionTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtrusionTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetExtrusionTypeMinValue() :
      op->vtkLinearExtrusionFilter::GetExtrusionTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_GetExtrusionTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtrusionTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetExtrusionTypeMaxValue() :
      op->vtkLinearExtrusionFilter::GetExtrusionTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_GetExtrusionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtrusionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetExtrusionType() :
      op->vtkLinearExtrusionFilter::GetExtrusionType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SetExtrusionTypeToVectorExtrusion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionTypeToVectorExtrusion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtrusionTypeToVectorExtrusion();
      }
    else
      {
      op->vtkLinearExtrusionFilter::SetExtrusionTypeToVectorExtrusion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SetExtrusionTypeToNormalExtrusion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionTypeToNormalExtrusion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtrusionTypeToNormalExtrusion();
      }
    else
      {
      op->vtkLinearExtrusionFilter::SetExtrusionTypeToNormalExtrusion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SetExtrusionTypeToPointExtrusion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionTypeToPointExtrusion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtrusionTypeToPointExtrusion();
      }
    else
      {
      op->vtkLinearExtrusionFilter::SetExtrusionTypeToPointExtrusion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCapping(temp0);
      }
    else
      {
      op->vtkLinearExtrusionFilter::SetCapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkLinearExtrusionFilter::GetCapping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOn();
      }
    else
      {
      op->vtkLinearExtrusionFilter::CappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOff();
      }
    else
      {
      op->vtkLinearExtrusionFilter::CappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleFactor(temp0);
      }
    else
      {
      op->vtkLinearExtrusionFilter::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkLinearExtrusionFilter::GetScaleFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SetVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

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
      op->SetVector(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLinearExtrusionFilter::SetVector(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLinearExtrusionFilter_SetVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetVector(temp0);
      }
    else
      {
      op->vtkLinearExtrusionFilter::SetVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLinearExtrusionFilter_SetVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLinearExtrusionFilter_SetVector_s1(self, args);
    case 1:
      return PyvtkLinearExtrusionFilter_SetVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVector");
  return NULL;
}



static PyObject *
PyvtkLinearExtrusionFilter_GetVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetVector() :
      op->vtkLinearExtrusionFilter::GetVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SetExtrusionPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

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
      op->SetExtrusionPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLinearExtrusionFilter::SetExtrusionPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLinearExtrusionFilter_SetExtrusionPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetExtrusionPoint(temp0);
      }
    else
      {
      op->vtkLinearExtrusionFilter::SetExtrusionPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLinearExtrusionFilter_SetExtrusionPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLinearExtrusionFilter_SetExtrusionPoint_s1(self, args);
    case 1:
      return PyvtkLinearExtrusionFilter_SetExtrusionPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetExtrusionPoint");
  return NULL;
}



static PyObject *
PyvtkLinearExtrusionFilter_GetExtrusionPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtrusionPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetExtrusionPoint() :
      op->vtkLinearExtrusionFilter::GetExtrusionPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkLinearExtrusionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkLinearExtrusionFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLinearExtrusionFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLinearExtrusionFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLinearExtrusionFilter\nC++: vtkLinearExtrusionFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLinearExtrusionFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLinearExtrusionFilter\nC++: vtkLinearExtrusionFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetExtrusionType", PyvtkLinearExtrusionFilter_SetExtrusionType, METH_VARARGS,
   (char*)"V.SetExtrusionType(int)\nC++: void SetExtrusionType(int)\n\nSet/Get the type of extrusion.\n"},
  {(char*)"GetExtrusionTypeMinValue", PyvtkLinearExtrusionFilter_GetExtrusionTypeMinValue, METH_VARARGS,
   (char*)"V.GetExtrusionTypeMinValue() -> int\nC++: int GetExtrusionTypeMinValue()\n\nSet/Get the type of extrusion.\n"},
  {(char*)"GetExtrusionTypeMaxValue", PyvtkLinearExtrusionFilter_GetExtrusionTypeMaxValue, METH_VARARGS,
   (char*)"V.GetExtrusionTypeMaxValue() -> int\nC++: int GetExtrusionTypeMaxValue()\n\nSet/Get the type of extrusion.\n"},
  {(char*)"GetExtrusionType", PyvtkLinearExtrusionFilter_GetExtrusionType, METH_VARARGS,
   (char*)"V.GetExtrusionType() -> int\nC++: int GetExtrusionType()\n\nSet/Get the type of extrusion.\n"},
  {(char*)"SetExtrusionTypeToVectorExtrusion", PyvtkLinearExtrusionFilter_SetExtrusionTypeToVectorExtrusion, METH_VARARGS,
   (char*)"V.SetExtrusionTypeToVectorExtrusion()\nC++: void SetExtrusionTypeToVectorExtrusion()\n\nSet/Get the type of extrusion.\n"},
  {(char*)"SetExtrusionTypeToNormalExtrusion", PyvtkLinearExtrusionFilter_SetExtrusionTypeToNormalExtrusion, METH_VARARGS,
   (char*)"V.SetExtrusionTypeToNormalExtrusion()\nC++: void SetExtrusionTypeToNormalExtrusion()\n\nSet/Get the type of extrusion.\n"},
  {(char*)"SetExtrusionTypeToPointExtrusion", PyvtkLinearExtrusionFilter_SetExtrusionTypeToPointExtrusion, METH_VARARGS,
   (char*)"V.SetExtrusionTypeToPointExtrusion()\nC++: void SetExtrusionTypeToPointExtrusion()\n\nSet/Get the type of extrusion.\n"},
  {(char*)"SetCapping", PyvtkLinearExtrusionFilter_SetCapping, METH_VARARGS,
   (char*)"V.SetCapping(int)\nC++: void SetCapping(int a)\n\nTurn on/off the capping of the skirt.\n"},
  {(char*)"GetCapping", PyvtkLinearExtrusionFilter_GetCapping, METH_VARARGS,
   (char*)"V.GetCapping() -> int\nC++: int GetCapping()\n\nTurn on/off the capping of the skirt.\n"},
  {(char*)"CappingOn", PyvtkLinearExtrusionFilter_CappingOn, METH_VARARGS,
   (char*)"V.CappingOn()\nC++: void CappingOn()\n\nTurn on/off the capping of the skirt.\n"},
  {(char*)"CappingOff", PyvtkLinearExtrusionFilter_CappingOff, METH_VARARGS,
   (char*)"V.CappingOff()\nC++: void CappingOff()\n\nTurn on/off the capping of the skirt.\n"},
  {(char*)"SetScaleFactor", PyvtkLinearExtrusionFilter_SetScaleFactor, METH_VARARGS,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double a)\n\nSet/Get extrusion scale factor,\n"},
  {(char*)"GetScaleFactor", PyvtkLinearExtrusionFilter_GetScaleFactor, METH_VARARGS,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nSet/Get extrusion scale factor,\n"},
  {(char*)"SetVector", PyvtkLinearExtrusionFilter_SetVector, METH_VARARGS,
   (char*)"V.SetVector(float, float, float)\nC++: void SetVector(double, double, double)\nV.SetVector((float, float, float))\nC++: void SetVector(double a[3])\n\n"},
  {(char*)"GetVector", PyvtkLinearExtrusionFilter_GetVector, METH_VARARGS,
   (char*)"V.GetVector() -> (float, float, float)\nC++: double *GetVector()\n\nSet/Get extrusion vector. Only needs to be set if VectorExtrusion\nis turned on.\n"},
  {(char*)"SetExtrusionPoint", PyvtkLinearExtrusionFilter_SetExtrusionPoint, METH_VARARGS,
   (char*)"V.SetExtrusionPoint(float, float, float)\nC++: void SetExtrusionPoint(double, double, double)\nV.SetExtrusionPoint((float, float, float))\nC++: void SetExtrusionPoint(double a[3])\n\n"},
  {(char*)"GetExtrusionPoint", PyvtkLinearExtrusionFilter_GetExtrusionPoint, METH_VARARGS,
   (char*)"V.GetExtrusionPoint() -> (float, float, float)\nC++: double *GetExtrusionPoint()\n\nSet/Get extrusion point. Only needs to be set if PointExtrusion\nis turned on. This is the point towards which extrusion occurs.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLinearExtrusionFilter_StaticNew()
{
  return vtkLinearExtrusionFilter::New();
}

PyObject *PyVTKClass_vtkLinearExtrusionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLinearExtrusionFilter_StaticNew,
    PyvtkLinearExtrusionFilter_Methods,
    "vtkLinearExtrusionFilter", modulename,
    NULL, NULL,
    PyvtkLinearExtrusionFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkLinearExtrusionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkLinearExtrusionFilter - sweep polygonal data creating a \"skirt\"\nfrom free edges and lines, and lines from vertices\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkLinearExtrusionFilter is a modeling filter. It takes polygonal\ndata as input and generates polygonal data on output. The input\ndataset is swept according to some extrusion function and creates new\npolygonal primitives. These primitives form a \"skirt\" or swept\nsurface. For example, sweeping a line results in a quadrilateral, and\nsweeping a triangle creates a \"wedge\".\n\nThere are a number of contr",
    "ol parameters for this filter. You can\ncontrol whether the sweep of a 2D object (i.e., polygon or triangle\nstrip) is capped with the generating geometry via the \"Capping\" ivar.\nAlso, you can extrude in the direction of a user specified vector,\ntowards a point, or in the direction of vertex normals (normals must\nbe provided - use vtkPolyDataNormals if necessary). The amount of\nextrusion is controll",
    "ed by the \"ScaleFactor\" instance variable.\n\nThe skirt is generated by locating certain topological features. Free\nedges (edges of polygons or triangle strips only used by one polygon\nor triangle strips) generate surfaces. This is true also of lines or\npolylines. Vertices generate lines.\n\nThis filter can be used to create 3D fonts, 3D irregular bar charts,\nor to model 2 1/2D objects like punched pl",
    "ates. It also can be used\nto create solid objects from 2D polygonal meshes.\n\nCaveats:\n\nSome polygonal objects have no free edges (e.g., sphere). When swept,\nthis will result in two separate surfaces if capping is on, or no\nsurface if capping is off.\n\nSee Also:\n\nvtkRotationalExtrusionFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLinearExtrusionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLinearExtrusionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLinearExtrusionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_VECTOR_EXTRUSION", 1 },
        { "VTK_NORMAL_EXTRUSION", 2 },
        { "VTK_POINT_EXTRUSION", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

