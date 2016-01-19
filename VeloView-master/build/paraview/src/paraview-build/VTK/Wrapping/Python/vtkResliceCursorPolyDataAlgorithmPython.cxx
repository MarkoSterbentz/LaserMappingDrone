// python wrapper for vtkResliceCursorPolyDataAlgorithm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkResliceCursorPolyDataAlgorithm.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkResliceCursorPolyDataAlgorithm(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkResliceCursorPolyDataAlgorithmNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkResliceCursorPolyDataAlgorithm_Doc();


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkResliceCursorPolyDataAlgorithm::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursorPolyDataAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceCursorPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursorPolyDataAlgorithm::NewInstance());

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
PyvtkResliceCursorPolyDataAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkResliceCursorPolyDataAlgorithm *tempr = vtkResliceCursorPolyDataAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReslicePlaneNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReslicePlaneNormal(temp0);
      }
    else
      {
      op->vtkResliceCursorPolyDataAlgorithm::SetReslicePlaneNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetReslicePlaneNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReslicePlaneNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReslicePlaneNormal() :
      op->vtkResliceCursorPolyDataAlgorithm::GetReslicePlaneNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReslicePlaneNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetReslicePlaneNormalToXAxis();
      }
    else
      {
      op->vtkResliceCursorPolyDataAlgorithm::SetReslicePlaneNormalToXAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReslicePlaneNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetReslicePlaneNormalToYAxis();
      }
    else
      {
      op->vtkResliceCursorPolyDataAlgorithm::SetReslicePlaneNormalToYAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReslicePlaneNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetReslicePlaneNormalToZAxis();
      }
    else
      {
      op->vtkResliceCursorPolyDataAlgorithm::SetReslicePlaneNormalToZAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetResliceCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  vtkResliceCursor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkResliceCursor"))
    {
    if (ap.IsBound())
      {
      op->SetResliceCursor(temp0);
      }
    else
      {
      op->vtkResliceCursorPolyDataAlgorithm::SetResliceCursor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetResliceCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceCursor *tempr = (ap.IsBound() ?
      op->GetResliceCursor() :
      op->vtkResliceCursorPolyDataAlgorithm::GetResliceCursor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

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
      op->SetSliceBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkResliceCursorPolyDataAlgorithm::SetSliceBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSliceBounds(temp0);
      }
    else
      {
      op->vtkResliceCursorPolyDataAlgorithm::SetSliceBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds_s1(self, args);
    case 1:
      return PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceBounds");
  return NULL;
}



static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetSliceBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSliceBounds() :
      op->vtkResliceCursorPolyDataAlgorithm::GetSliceBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetCenterlineAxis1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterlineAxis1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCenterlineAxis1() :
      op->vtkResliceCursorPolyDataAlgorithm::GetCenterlineAxis1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetCenterlineAxis2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterlineAxis2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCenterlineAxis2() :
      op->vtkResliceCursorPolyDataAlgorithm::GetCenterlineAxis2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetThickSlabAxis1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickSlabAxis1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetThickSlabAxis1() :
      op->vtkResliceCursorPolyDataAlgorithm::GetThickSlabAxis1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetThickSlabAxis2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickSlabAxis2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetThickSlabAxis2() :
      op->vtkResliceCursorPolyDataAlgorithm::GetThickSlabAxis2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetAxis1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxis1() :
      op->vtkResliceCursorPolyDataAlgorithm::GetAxis1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetAxis2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxis2() :
      op->vtkResliceCursorPolyDataAlgorithm::GetAxis2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetPlaneAxis1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneAxis1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPlaneAxis1() :
      op->vtkResliceCursorPolyDataAlgorithm::GetPlaneAxis1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetPlaneAxis2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneAxis2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPlaneAxis2() :
      op->vtkResliceCursorPolyDataAlgorithm::GetPlaneAxis2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetOtherPlaneForAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOtherPlaneForAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOtherPlaneForAxis(temp0) :
      op->vtkResliceCursorPolyDataAlgorithm::GetOtherPlaneForAxis(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkResliceCursorPolyDataAlgorithm::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkResliceCursorPolyDataAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkResliceCursorPolyDataAlgorithm_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkResliceCursorPolyDataAlgorithm_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkResliceCursorPolyDataAlgorithm_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkResliceCursorPolyDataAlgorithm\nC++: vtkResliceCursorPolyDataAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkResliceCursorPolyDataAlgorithm_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkResliceCursorPolyDataAlgorithm\nC++: vtkResliceCursorPolyDataAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetReslicePlaneNormal", PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormal, METH_VARARGS,
   (char*)"V.SetReslicePlaneNormal(int)\nC++: void SetReslicePlaneNormal(int a)\n\nWhich of the 3 axes defines the reslice plane normal ?\n"},
  {(char*)"GetReslicePlaneNormal", PyvtkResliceCursorPolyDataAlgorithm_GetReslicePlaneNormal, METH_VARARGS,
   (char*)"V.GetReslicePlaneNormal() -> int\nC++: int GetReslicePlaneNormal()\n\nWhich of the 3 axes defines the reslice plane normal ?\n"},
  {(char*)"SetReslicePlaneNormalToXAxis", PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToXAxis, METH_VARARGS,
   (char*)"V.SetReslicePlaneNormalToXAxis()\nC++: void SetReslicePlaneNormalToXAxis()\n\nSet the planes that correspond to the reslice axes.\n"},
  {(char*)"SetReslicePlaneNormalToYAxis", PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToYAxis, METH_VARARGS,
   (char*)"V.SetReslicePlaneNormalToYAxis()\nC++: void SetReslicePlaneNormalToYAxis()\n\nSet the planes that correspond to the reslice axes.\n"},
  {(char*)"SetReslicePlaneNormalToZAxis", PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToZAxis, METH_VARARGS,
   (char*)"V.SetReslicePlaneNormalToZAxis()\nC++: void SetReslicePlaneNormalToZAxis()\n\nSet the planes that correspond to the reslice axes.\n"},
  {(char*)"SetResliceCursor", PyvtkResliceCursorPolyDataAlgorithm_SetResliceCursor, METH_VARARGS,
   (char*)"V.SetResliceCursor(vtkResliceCursor)\nC++: virtual void SetResliceCursor(vtkResliceCursor *)\n\nSet the Reslice cursor from which to generate the polydata\nrepresentation\n"},
  {(char*)"GetResliceCursor", PyvtkResliceCursorPolyDataAlgorithm_GetResliceCursor, METH_VARARGS,
   (char*)"V.GetResliceCursor() -> vtkResliceCursor\nC++: vtkResliceCursor *GetResliceCursor()\n\nSet the Reslice cursor from which to generate the polydata\nrepresentation\n"},
  {(char*)"SetSliceBounds", PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds, METH_VARARGS,
   (char*)"V.SetSliceBounds(float, float, float, float, float, float)\nC++: void SetSliceBounds(double, double, double, double, double,\n    double)\nV.SetSliceBounds((float, float, float, float, float, float))\nC++: void SetSliceBounds(double a[6])\n\n"},
  {(char*)"GetSliceBounds", PyvtkResliceCursorPolyDataAlgorithm_GetSliceBounds, METH_VARARGS,
   (char*)"V.GetSliceBounds() -> (float, float, float, float, float, float)\nC++: double *GetSliceBounds()\n\n"},
  {(char*)"GetCenterlineAxis1", PyvtkResliceCursorPolyDataAlgorithm_GetCenterlineAxis1, METH_VARARGS,
   (char*)"V.GetCenterlineAxis1() -> vtkPolyData\nC++: virtual vtkPolyData *GetCenterlineAxis1()\n\nGet either one of the axes that this object produces. Depending\non the mode, one renders either the centerline axes or both the\ncenterline axes and the slab\n"},
  {(char*)"GetCenterlineAxis2", PyvtkResliceCursorPolyDataAlgorithm_GetCenterlineAxis2, METH_VARARGS,
   (char*)"V.GetCenterlineAxis2() -> vtkPolyData\nC++: virtual vtkPolyData *GetCenterlineAxis2()\n\nGet either one of the axes that this object produces. Depending\non the mode, one renders either the centerline axes or both the\ncenterline axes and the slab\n"},
  {(char*)"GetThickSlabAxis1", PyvtkResliceCursorPolyDataAlgorithm_GetThickSlabAxis1, METH_VARARGS,
   (char*)"V.GetThickSlabAxis1() -> vtkPolyData\nC++: virtual vtkPolyData *GetThickSlabAxis1()\n\nGet either one of the axes that this object produces. Depending\non the mode, one renders either the centerline axes or both the\ncenterline axes and the slab\n"},
  {(char*)"GetThickSlabAxis2", PyvtkResliceCursorPolyDataAlgorithm_GetThickSlabAxis2, METH_VARARGS,
   (char*)"V.GetThickSlabAxis2() -> vtkPolyData\nC++: virtual vtkPolyData *GetThickSlabAxis2()\n\nGet either one of the axes that this object produces. Depending\non the mode, one renders either the centerline axes or both the\ncenterline axes and the slab\n"},
  {(char*)"GetAxis1", PyvtkResliceCursorPolyDataAlgorithm_GetAxis1, METH_VARARGS,
   (char*)"V.GetAxis1() -> int\nC++: virtual int GetAxis1()\n\nGet the index of the axes and the planes that they represent\n"},
  {(char*)"GetAxis2", PyvtkResliceCursorPolyDataAlgorithm_GetAxis2, METH_VARARGS,
   (char*)"V.GetAxis2() -> int\nC++: virtual int GetAxis2()\n\nGet the index of the axes and the planes that they represent\n"},
  {(char*)"GetPlaneAxis1", PyvtkResliceCursorPolyDataAlgorithm_GetPlaneAxis1, METH_VARARGS,
   (char*)"V.GetPlaneAxis1() -> int\nC++: virtual int GetPlaneAxis1()\n\nGet the index of the axes and the planes that they represent\n"},
  {(char*)"GetPlaneAxis2", PyvtkResliceCursorPolyDataAlgorithm_GetPlaneAxis2, METH_VARARGS,
   (char*)"V.GetPlaneAxis2() -> int\nC++: virtual int GetPlaneAxis2()\n\nGet the index of the axes and the planes that they represent\n"},
  {(char*)"GetOtherPlaneForAxis", PyvtkResliceCursorPolyDataAlgorithm_GetOtherPlaneForAxis, METH_VARARGS,
   (char*)"V.GetOtherPlaneForAxis(int) -> int\nC++: int GetOtherPlaneForAxis(int p)\n\nConvenience method that, given one plane, returns the other plane\nthat this class represents.\n"},
  {(char*)"GetMTime", PyvtkResliceCursorPolyDataAlgorithm_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long int GetMTime()\n\nGet the MTime. Check the MTime of the internal ResliceCursor as\nwell, if one has been set\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkResliceCursorPolyDataAlgorithm_StaticNew()
{
  return vtkResliceCursorPolyDataAlgorithm::New();
}

PyObject *PyVTKClass_vtkResliceCursorPolyDataAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkResliceCursorPolyDataAlgorithm_StaticNew,
    PyvtkResliceCursorPolyDataAlgorithm_Methods,
    "vtkResliceCursorPolyDataAlgorithm", modulename,
    NULL, NULL,
    PyvtkResliceCursorPolyDataAlgorithm_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "XAxis", vtkResliceCursorPolyDataAlgorithm::XAxis },
          { "YAxis", vtkResliceCursorPolyDataAlgorithm::YAxis },
          { "ZAxis", vtkResliceCursorPolyDataAlgorithm::ZAxis },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkResliceCursorPolyDataAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkResliceCursorPolyDataAlgorithm - generates a 2D reslice cursor\npolydata\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkResliceCursorPolyDataAlgorithm is a class that generates a 2D\nreslice cursor vtkPolyData, suitable for rendering within a\nvtkResliceCursorActor. The class takes as input the reslice plane\nnormal index (an index into the normal plane maintained by the\nreslice cursor object) and generates the polydata represeting the\nother two reslice axes suitable for rendering on a slice through this\nplane. The",
    " cursor consists of two intersection axes lines that meet\nat the cursor focus. These lines may have a user defined thickness.\nThey need not be orthogonal to each other.\n\nSee Also:\n\nvtkResliceCursorActor vtkResliceCursor vtkResliceCursorWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkResliceCursorPolyDataAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkResliceCursorPolyDataAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkResliceCursorPolyDataAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

