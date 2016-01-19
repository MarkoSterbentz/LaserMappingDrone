// python wrapper for vtkSelectEnclosedPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSelectEnclosedPoints.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSelectEnclosedPoints(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSelectEnclosedPointsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkSelectEnclosedPoints_Doc();


static PyObject *
PyvtkSelectEnclosedPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSelectEnclosedPoints::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectEnclosedPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelectEnclosedPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectEnclosedPoints::NewInstance());

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
PyvtkSelectEnclosedPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSelectEnclosedPoints *tempr = vtkSelectEnclosedPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_SetSurfaceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetSurfaceData(temp0);
      }
    else
      {
      op->vtkSelectEnclosedPoints::SetSurfaceData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_SetSurfaceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSurfaceConnection(temp0);
      }
    else
      {
      op->vtkSelectEnclosedPoints::SetSurfaceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetSurface_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSurface() :
      op->vtkSelectEnclosedPoints::GetSurface());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSelectEnclosedPoints_GetSurface_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkInformationVector *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVector"))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSurface(temp0) :
      op->vtkSelectEnclosedPoints::GetSurface(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSelectEnclosedPoints_GetSurface(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSelectEnclosedPoints_GetSurface_s1(self, args);
    case 1:
      return PyvtkSelectEnclosedPoints_GetSurface_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSurface");
  return NULL;
}



static PyObject *
PyvtkSelectEnclosedPoints_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInsideOut(temp0);
      }
    else
      {
      op->vtkSelectEnclosedPoints::SetInsideOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOn();
      }
    else
      {
      op->vtkSelectEnclosedPoints::InsideOutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOff();
      }
    else
      {
      op->vtkSelectEnclosedPoints::InsideOutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkSelectEnclosedPoints::GetInsideOut());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_SetCheckSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCheckSurface(temp0);
      }
    else
      {
      op->vtkSelectEnclosedPoints::SetCheckSurface(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_CheckSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CheckSurfaceOn();
      }
    else
      {
      op->vtkSelectEnclosedPoints::CheckSurfaceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_CheckSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CheckSurfaceOff();
      }
    else
      {
      op->vtkSelectEnclosedPoints::CheckSurfaceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetCheckSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCheckSurface() :
      op->vtkSelectEnclosedPoints::GetCheckSurface());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_IsInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsInside(temp0) :
      op->vtkSelectEnclosedPoints::IsInside(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkSelectEnclosedPoints::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkSelectEnclosedPoints::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkSelectEnclosedPoints::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkSelectEnclosedPoints::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkSelectEnclosedPoints::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_IsInsideSurface_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsideSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->IsInsideSurface(temp0, temp1, temp2) :
      op->vtkSelectEnclosedPoints::IsInsideSurface(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSelectEnclosedPoints_IsInsideSurface_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsideSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->IsInsideSurface(temp0) :
      op->vtkSelectEnclosedPoints::IsInsideSurface(temp0));

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
PyvtkSelectEnclosedPoints_IsInsideSurface(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSelectEnclosedPoints_IsInsideSurface_s1(self, args);
    case 1:
      return PyvtkSelectEnclosedPoints_IsInsideSurface_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsInsideSurface");
  return NULL;
}



static PyObject *
PyvtkSelectEnclosedPoints_Complete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Complete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Complete();
      }
    else
      {
      op->vtkSelectEnclosedPoints::Complete();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSelectEnclosedPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkSelectEnclosedPoints_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSelectEnclosedPoints_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSelectEnclosedPoints_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSelectEnclosedPoints\nC++: vtkSelectEnclosedPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSelectEnclosedPoints_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSelectEnclosedPoints\nC++: vtkSelectEnclosedPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSurfaceData", PyvtkSelectEnclosedPoints_SetSurfaceData, METH_VARARGS,
   (char*)"V.SetSurfaceData(vtkPolyData)\nC++: void SetSurfaceData(vtkPolyData *pd)\n\nSet the surface to be used to test for containment. Two methods\nare provided: one directly for vtkPolyData, and one for the\noutput of a filter.\n"},
  {(char*)"SetSurfaceConnection", PyvtkSelectEnclosedPoints_SetSurfaceConnection, METH_VARARGS,
   (char*)"V.SetSurfaceConnection(vtkAlgorithmOutput)\nC++: void SetSurfaceConnection(vtkAlgorithmOutput *algOutput)\n\nSet the surface to be used to test for containment. Two methods\nare provided: one directly for vtkPolyData, and one for the\noutput of a filter.\n"},
  {(char*)"GetSurface", PyvtkSelectEnclosedPoints_GetSurface, METH_VARARGS,
   (char*)"V.GetSurface() -> vtkPolyData\nC++: vtkPolyData *GetSurface()\nV.GetSurface(vtkInformationVector) -> vtkPolyData\nC++: vtkPolyData *GetSurface(vtkInformationVector *sourceInfo)\n\nReturn a pointer to the enclosing surface.\n"},
  {(char*)"SetInsideOut", PyvtkSelectEnclosedPoints_SetInsideOut, METH_VARARGS,
   (char*)"V.SetInsideOut(int)\nC++: void SetInsideOut(int a)\n\nBy default, points inside the surface are marked inside or sent\nto the output. If InsideOut is on, then the points outside the\nsurface are marked inside.\n"},
  {(char*)"InsideOutOn", PyvtkSelectEnclosedPoints_InsideOutOn, METH_VARARGS,
   (char*)"V.InsideOutOn()\nC++: void InsideOutOn()\n\nBy default, points inside the surface are marked inside or sent\nto the output. If InsideOut is on, then the points outside the\nsurface are marked inside.\n"},
  {(char*)"InsideOutOff", PyvtkSelectEnclosedPoints_InsideOutOff, METH_VARARGS,
   (char*)"V.InsideOutOff()\nC++: void InsideOutOff()\n\nBy default, points inside the surface are marked inside or sent\nto the output. If InsideOut is on, then the points outside the\nsurface are marked inside.\n"},
  {(char*)"GetInsideOut", PyvtkSelectEnclosedPoints_GetInsideOut, METH_VARARGS,
   (char*)"V.GetInsideOut() -> int\nC++: int GetInsideOut()\n\nBy default, points inside the surface are marked inside or sent\nto the output. If InsideOut is on, then the points outside the\nsurface are marked inside.\n"},
  {(char*)"SetCheckSurface", PyvtkSelectEnclosedPoints_SetCheckSurface, METH_VARARGS,
   (char*)"V.SetCheckSurface(int)\nC++: void SetCheckSurface(int a)\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {(char*)"CheckSurfaceOn", PyvtkSelectEnclosedPoints_CheckSurfaceOn, METH_VARARGS,
   (char*)"V.CheckSurfaceOn()\nC++: void CheckSurfaceOn()\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {(char*)"CheckSurfaceOff", PyvtkSelectEnclosedPoints_CheckSurfaceOff, METH_VARARGS,
   (char*)"V.CheckSurfaceOff()\nC++: void CheckSurfaceOff()\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {(char*)"GetCheckSurface", PyvtkSelectEnclosedPoints_GetCheckSurface, METH_VARARGS,
   (char*)"V.GetCheckSurface() -> int\nC++: int GetCheckSurface()\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {(char*)"IsInside", PyvtkSelectEnclosedPoints_IsInside, METH_VARARGS,
   (char*)"V.IsInside(int) -> int\nC++: int IsInside(vtkIdType inputPtId)\n\nQuery an input point id as to whether it is inside or outside.\nNote that the result requires that the filter execute first.\n"},
  {(char*)"SetTolerance", PyvtkSelectEnclosedPoints_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double)\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the bounding box of the enclosing\nsurface.\n"},
  {(char*)"GetToleranceMinValue", PyvtkSelectEnclosedPoints_GetToleranceMinValue, METH_VARARGS,
   (char*)"V.GetToleranceMinValue() -> float\nC++: double GetToleranceMinValue()\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the bounding box of the enclosing\nsurface.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkSelectEnclosedPoints_GetToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetToleranceMaxValue() -> float\nC++: double GetToleranceMaxValue()\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the bounding box of the enclosing\nsurface.\n"},
  {(char*)"GetTolerance", PyvtkSelectEnclosedPoints_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the bounding box of the enclosing\nsurface.\n"},
  {(char*)"Initialize", PyvtkSelectEnclosedPoints_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkPolyData)\nC++: void Initialize(vtkPolyData *surface)\n\nThis is a backdoor that can be used to test many points for\ncontainment. First initialize the instance, then repeated calls\nto IsInsideSurface() can be used without rebuilding the search\nstructures. The complete method releases memory.\n"},
  {(char*)"IsInsideSurface", PyvtkSelectEnclosedPoints_IsInsideSurface, METH_VARARGS,
   (char*)"V.IsInsideSurface(float, float, float) -> int\nC++: int IsInsideSurface(double x, double y, double z)\nV.IsInsideSurface([float, float, float]) -> int\nC++: int IsInsideSurface(double x[3])\n\nThis is a backdoor that can be used to test many points for\ncontainment. First initialize the instance, then repeated calls\nto IsInsideSurface() can be used without rebuilding the search\nstructures. The complete method releases memory.\n"},
  {(char*)"Complete", PyvtkSelectEnclosedPoints_Complete, METH_VARARGS,
   (char*)"V.Complete()\nC++: void Complete()\n\nThis is a backdoor that can be used to test many points for\ncontainment. First initialize the instance, then repeated calls\nto IsInsideSurface() can be used without rebuilding the search\nstructures. The complete method releases memory.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSelectEnclosedPoints_StaticNew()
{
  return vtkSelectEnclosedPoints::New();
}

PyObject *PyVTKClass_vtkSelectEnclosedPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSelectEnclosedPoints_StaticNew,
    PyvtkSelectEnclosedPoints_Methods,
    "vtkSelectEnclosedPoints", modulename,
    NULL, NULL,
    PyvtkSelectEnclosedPoints_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSelectEnclosedPoints_Doc()
{
  static const char *docstring[] = {
    "vtkSelectEnclosedPoints - mark points as to whether they are inside a\nclosed surface\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkSelectEnclosedPoints is a filter that evaluates all the input\npoints to determine whether they are in an enclosed surface. The\nfilter produces a (0,1) mask (in the form of a vtkDataArray) that\nindicates whether points are outside (mask value=0) or inside (mask\nvalue=1) a provided surface. (The name of the output vtkDataArray is\n\"SelectedPointsArray\".)\n\nAfter running the filter, it is possible t",
    "o query it as to whether a\npoint is inside/outside by invoking the IsInside(ptId) method.\n\nCaveats:\n\nThe filter assumes that the surface is closed and manifold. A boolean\nflag can be set to force the filter to first check whether this is\ntrue. If false, all points will be marked outside. Note that if this\ncheck is not performed and the surface is not closed, the results are\nundefined.\n\nThis filter",
    " produces and output data array, but does not modify the\ninput dataset. If you wish to extract cells or poinrs, various\nthreshold filters are available (i.e., threshold the output array).\n\nSee Also:\n\nvtkMaskPoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSelectEnclosedPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSelectEnclosedPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSelectEnclosedPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

