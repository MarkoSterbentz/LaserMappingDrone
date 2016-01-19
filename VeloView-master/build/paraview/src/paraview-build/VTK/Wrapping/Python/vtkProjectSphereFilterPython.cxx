// python wrapper for vtkProjectSphereFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProjectSphereFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProjectSphereFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProjectSphereFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
#endif

static const char **PyvtkProjectSphereFilter_Doc();


static PyObject *
PyvtkProjectSphereFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProjectSphereFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProjectSphereFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProjectSphereFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProjectSphereFilter::NewInstance());

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
PyvtkProjectSphereFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProjectSphereFilter *tempr = vtkProjectSphereFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

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
      op->vtkProjectSphereFilter::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProjectSphereFilter_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

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
      op->vtkProjectSphereFilter::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProjectSphereFilter_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkProjectSphereFilter_SetCenter_s1(self, args);
    case 1:
      return PyvtkProjectSphereFilter_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkProjectSphereFilter_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkProjectSphereFilter::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_GetKeepPolePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeepPolePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetKeepPolePoints() :
      op->vtkProjectSphereFilter::GetKeepPolePoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_SetKeepPolePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeepPolePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeepPolePoints(temp0);
      }
    else
      {
      op->vtkProjectSphereFilter::SetKeepPolePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_KeepPolePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepPolePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->KeepPolePointsOn();
      }
    else
      {
      op->vtkProjectSphereFilter::KeepPolePointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_KeepPolePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepPolePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->KeepPolePointsOff();
      }
    else
      {
      op->vtkProjectSphereFilter::KeepPolePointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_GetTranslateZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslateZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetTranslateZ() :
      op->vtkProjectSphereFilter::GetTranslateZ());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_SetTranslateZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslateZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTranslateZ(temp0);
      }
    else
      {
      op->vtkProjectSphereFilter::SetTranslateZ(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_TranslateZOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslateZOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TranslateZOn();
      }
    else
      {
      op->vtkProjectSphereFilter::TranslateZOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_TranslateZOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslateZOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TranslateZOff();
      }
    else
      {
      op->vtkProjectSphereFilter::TranslateZOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProjectSphereFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkProjectSphereFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProjectSphereFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProjectSphereFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProjectSphereFilter\nC++: vtkProjectSphereFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProjectSphereFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProjectSphereFilter\nC++: vtkProjectSphereFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCenter", PyvtkProjectSphereFilter_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkProjectSphereFilter_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet the center of the sphere to be split. Default is 0,0,0.\n"},
  {(char*)"GetKeepPolePoints", PyvtkProjectSphereFilter_GetKeepPolePoints, METH_VARARGS,
   (char*)"V.GetKeepPolePoints() -> bool\nC++: bool GetKeepPolePoints()\n\nSpecify whether or not to keep the cells using a point at a pole.\nThe default is false.\n"},
  {(char*)"SetKeepPolePoints", PyvtkProjectSphereFilter_SetKeepPolePoints, METH_VARARGS,
   (char*)"V.SetKeepPolePoints(bool)\nC++: void SetKeepPolePoints(bool a)\n\nSpecify whether or not to keep the cells using a point at a pole.\nThe default is false.\n"},
  {(char*)"KeepPolePointsOn", PyvtkProjectSphereFilter_KeepPolePointsOn, METH_VARARGS,
   (char*)"V.KeepPolePointsOn()\nC++: void KeepPolePointsOn()\n\nSpecify whether or not to keep the cells using a point at a pole.\nThe default is false.\n"},
  {(char*)"KeepPolePointsOff", PyvtkProjectSphereFilter_KeepPolePointsOff, METH_VARARGS,
   (char*)"V.KeepPolePointsOff()\nC++: void KeepPolePointsOff()\n\nSpecify whether or not to keep the cells using a point at a pole.\nThe default is false.\n"},
  {(char*)"GetTranslateZ", PyvtkProjectSphereFilter_GetTranslateZ, METH_VARARGS,
   (char*)"V.GetTranslateZ() -> bool\nC++: bool GetTranslateZ()\n\nSpecify whether (true) or not to translate the points in the\nprojected transformation such that the input point with the\nsmallest radius is at 0. The default is false.\n"},
  {(char*)"SetTranslateZ", PyvtkProjectSphereFilter_SetTranslateZ, METH_VARARGS,
   (char*)"V.SetTranslateZ(bool)\nC++: void SetTranslateZ(bool a)\n\nSpecify whether (true) or not to translate the points in the\nprojected transformation such that the input point with the\nsmallest radius is at 0. The default is false.\n"},
  {(char*)"TranslateZOn", PyvtkProjectSphereFilter_TranslateZOn, METH_VARARGS,
   (char*)"V.TranslateZOn()\nC++: void TranslateZOn()\n\nSpecify whether (true) or not to translate the points in the\nprojected transformation such that the input point with the\nsmallest radius is at 0. The default is false.\n"},
  {(char*)"TranslateZOff", PyvtkProjectSphereFilter_TranslateZOff, METH_VARARGS,
   (char*)"V.TranslateZOff()\nC++: void TranslateZOff()\n\nSpecify whether (true) or not to translate the points in the\nprojected transformation such that the input point with the\nsmallest radius is at 0. The default is false.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProjectSphereFilter_StaticNew()
{
  return vtkProjectSphereFilter::New();
}

PyObject *PyVTKClass_vtkProjectSphereFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProjectSphereFilter_StaticNew,
    PyvtkProjectSphereFilter_Methods,
    "vtkProjectSphereFilter", modulename,
    NULL, NULL,
    PyvtkProjectSphereFilter_Doc(),
    PyVTKClass_vtkPointSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkProjectSphereFilter_Doc()
{
  static const char *docstring[] = {
    "vtkProjectSphereFilter - A filter to 'unroll' a sphere.  The\n\n",
    "Superclass: vtkPointSetAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProjectSphereFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProjectSphereFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProjectSphereFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

