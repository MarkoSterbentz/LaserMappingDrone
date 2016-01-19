// python wrapper for vtkPVRayCastPickingHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVRayCastPickingHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVRayCastPickingHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVRayCastPickingHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVRayCastPickingHelper_Doc();


static PyObject *
PyvtkPVRayCastPickingHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVRayCastPickingHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVRayCastPickingHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVRayCastPickingHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVRayCastPickingHelper::NewInstance());

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
PyvtkPVRayCastPickingHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVRayCastPickingHelper *tempr = vtkPVRayCastPickingHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  vtkAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkPVRayCastPickingHelper::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  vtkAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetSelection(temp0);
      }
    else
      {
      op->vtkPVRayCastPickingHelper::SetSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_SetPointA_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

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
      op->SetPointA(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVRayCastPickingHelper::SetPointA(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVRayCastPickingHelper_SetPointA_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPointA(temp0);
      }
    else
      {
      op->vtkPVRayCastPickingHelper::SetPointA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVRayCastPickingHelper_SetPointA(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPVRayCastPickingHelper_SetPointA_s1(self, args);
    case 1:
      return PyvtkPVRayCastPickingHelper_SetPointA_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPointA");
  return NULL;
}



static PyObject *
PyvtkPVRayCastPickingHelper_GetPointA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPointA() :
      op->vtkPVRayCastPickingHelper::GetPointA());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_SetPointB_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

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
      op->SetPointB(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVRayCastPickingHelper::SetPointB(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVRayCastPickingHelper_SetPointB_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPointB(temp0);
      }
    else
      {
      op->vtkPVRayCastPickingHelper::SetPointB(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVRayCastPickingHelper_SetPointB(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPVRayCastPickingHelper_SetPointB_s1(self, args);
    case 1:
      return PyvtkPVRayCastPickingHelper_SetPointB_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPointB");
  return NULL;
}



static PyObject *
PyvtkPVRayCastPickingHelper_GetPointB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPointB() :
      op->vtkPVRayCastPickingHelper::GetPointB());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_ComputeIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeIntersection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeIntersection();
      }
    else
      {
      op->vtkPVRayCastPickingHelper::ComputeIntersection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRayCastPickingHelper_GetIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRayCastPickingHelper *op = static_cast<vtkPVRayCastPickingHelper *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetIntersection() :
      op->vtkPVRayCastPickingHelper::GetIntersection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVRayCastPickingHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkPVRayCastPickingHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVRayCastPickingHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVRayCastPickingHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVRayCastPickingHelper\nC++: vtkPVRayCastPickingHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVRayCastPickingHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVRayCastPickingHelper\nC++: vtkPVRayCastPickingHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInput", PyvtkPVRayCastPickingHelper_SetInput, METH_VARARGS,
   (char*)"V.SetInput(vtkAlgorithm)\nC++: void SetInput(vtkAlgorithm *)\n\nSet input on which the selection apply\n"},
  {(char*)"SetSelection", PyvtkPVRayCastPickingHelper_SetSelection, METH_VARARGS,
   (char*)"V.SetSelection(vtkAlgorithm)\nC++: void SetSelection(vtkAlgorithm *)\n\nSet the selection that extract the cell that intersect the ray\n"},
  {(char*)"SetPointA", PyvtkPVRayCastPickingHelper_SetPointA, METH_VARARGS,
   (char*)"V.SetPointA(float, float, float)\nC++: void SetPointA(double, double, double)\nV.SetPointA((float, float, float))\nC++: void SetPointA(double a[3])\n\n"},
  {(char*)"GetPointA", PyvtkPVRayCastPickingHelper_GetPointA, METH_VARARGS,
   (char*)"V.GetPointA() -> (float, float, float)\nC++: double *GetPointA()\n\n"},
  {(char*)"SetPointB", PyvtkPVRayCastPickingHelper_SetPointB, METH_VARARGS,
   (char*)"V.SetPointB(float, float, float)\nC++: void SetPointB(double, double, double)\nV.SetPointB((float, float, float))\nC++: void SetPointB(double a[3])\n\n"},
  {(char*)"GetPointB", PyvtkPVRayCastPickingHelper_GetPointB, METH_VARARGS,
   (char*)"V.GetPointB() -> (float, float, float)\nC++: double *GetPointB()\n\n"},
  {(char*)"ComputeIntersection", PyvtkPVRayCastPickingHelper_ComputeIntersection, METH_VARARGS,
   (char*)"V.ComputeIntersection()\nC++: void ComputeIntersection()\n\nCompute the intersection\n"},
  {(char*)"GetIntersection", PyvtkPVRayCastPickingHelper_GetIntersection, METH_VARARGS,
   (char*)"V.GetIntersection() -> (float, float, float)\nC++: double *GetIntersection()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVRayCastPickingHelper_StaticNew()
{
  return vtkPVRayCastPickingHelper::New();
}

PyObject *PyVTKClass_vtkPVRayCastPickingHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVRayCastPickingHelper_StaticNew,
    PyvtkPVRayCastPickingHelper_Methods,
    "vtkPVRayCastPickingHelper", modulename,
    NULL, NULL,
    PyvtkPVRayCastPickingHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVRayCastPickingHelper_Doc()
{
  static const char *docstring[] = {
    "vtkPVRayCastPickingHelper - helper class that used selection and ray\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVRayCastPickingHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVRayCastPickingHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVRayCastPickingHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

