// python wrapper for vtkDepthSortPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDepthSortPolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDepthSortPolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDepthSortPolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkDepthSortPolyData_Doc();


static PyObject *
PyvtkDepthSortPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDepthSortPolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDepthSortPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDepthSortPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDepthSortPolyData::NewInstance());

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
PyvtkDepthSortPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDepthSortPolyData *tempr = vtkDepthSortPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDirection(temp0);
      }
    else
      {
      op->vtkDepthSortPolyData::SetDirection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_GetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDirection() :
      op->vtkDepthSortPolyData::GetDirection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetDirectionToFrontToBack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToFrontToBack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDirectionToFrontToBack();
      }
    else
      {
      op->vtkDepthSortPolyData::SetDirectionToFrontToBack();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetDirectionToBackToFront(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToBackToFront");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDirectionToBackToFront();
      }
    else
      {
      op->vtkDepthSortPolyData::SetDirectionToBackToFront();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetDirectionToSpecifiedVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToSpecifiedVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDirectionToSpecifiedVector();
      }
    else
      {
      op->vtkDepthSortPolyData::SetDirectionToSpecifiedVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetDepthSortMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthSortMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepthSortMode(temp0);
      }
    else
      {
      op->vtkDepthSortPolyData::SetDepthSortMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_GetDepthSortMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthSortMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDepthSortMode() :
      op->vtkDepthSortPolyData::GetDepthSortMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetDepthSortModeToFirstPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthSortModeToFirstPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDepthSortModeToFirstPoint();
      }
    else
      {
      op->vtkDepthSortPolyData::SetDepthSortModeToFirstPoint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetDepthSortModeToBoundsCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthSortModeToBoundsCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDepthSortModeToBoundsCenter();
      }
    else
      {
      op->vtkDepthSortPolyData::SetDepthSortModeToBoundsCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetDepthSortModeToParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthSortModeToParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDepthSortModeToParametricCenter();
      }
    else
      {
      op->vtkDepthSortPolyData::SetDepthSortModeToParametricCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  vtkCamera *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->SetCamera(temp0);
      }
    else
      {
      op->vtkDepthSortPolyData::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkDepthSortPolyData::GetCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  vtkProp3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
    {
    if (ap.IsBound())
      {
      op->SetProp3D(temp0);
      }
    else
      {
      op->vtkDepthSortPolyData::SetProp3D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_GetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProp3D *tempr = (ap.IsBound() ?
      op->GetProp3D() :
      op->vtkDepthSortPolyData::GetProp3D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

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
      op->vtkDepthSortPolyData::SetVector(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDepthSortPolyData_SetVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

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
      op->vtkDepthSortPolyData::SetVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDepthSortPolyData_SetVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDepthSortPolyData_SetVector_s1(self, args);
    case 1:
      return PyvtkDepthSortPolyData_SetVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVector");
  return NULL;
}



static PyObject *
PyvtkDepthSortPolyData_GetVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetVector() :
      op->vtkDepthSortPolyData::GetVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDepthSortPolyData::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDepthSortPolyData_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkDepthSortPolyData::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDepthSortPolyData_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDepthSortPolyData_SetOrigin_s1(self, args);
    case 1:
      return PyvtkDepthSortPolyData_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkDepthSortPolyData_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkDepthSortPolyData::GetOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetSortScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSortScalars(temp0);
      }
    else
      {
      op->vtkDepthSortPolyData::SetSortScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_GetSortScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSortScalars() :
      op->vtkDepthSortPolyData::GetSortScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SortScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SortScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SortScalarsOn();
      }
    else
      {
      op->vtkDepthSortPolyData::SortScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SortScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SortScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SortScalarsOff();
      }
    else
      {
      op->vtkDepthSortPolyData::SortScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDepthSortPolyData::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDepthSortPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkDepthSortPolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDepthSortPolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDepthSortPolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDepthSortPolyData\nC++: vtkDepthSortPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDepthSortPolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDepthSortPolyData\nC++: vtkDepthSortPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDirection", PyvtkDepthSortPolyData_SetDirection, METH_VARARGS,
   (char*)"V.SetDirection(int)\nC++: void SetDirection(int a)\n\nSpecify the sort method for the polygonal primitives. By default,\nthe poly data is sorted from back to front.\n"},
  {(char*)"GetDirection", PyvtkDepthSortPolyData_GetDirection, METH_VARARGS,
   (char*)"V.GetDirection() -> int\nC++: int GetDirection()\n\nSpecify the sort method for the polygonal primitives. By default,\nthe poly data is sorted from back to front.\n"},
  {(char*)"SetDirectionToFrontToBack", PyvtkDepthSortPolyData_SetDirectionToFrontToBack, METH_VARARGS,
   (char*)"V.SetDirectionToFrontToBack()\nC++: void SetDirectionToFrontToBack()\n\nSpecify the sort method for the polygonal primitives. By default,\nthe poly data is sorted from back to front.\n"},
  {(char*)"SetDirectionToBackToFront", PyvtkDepthSortPolyData_SetDirectionToBackToFront, METH_VARARGS,
   (char*)"V.SetDirectionToBackToFront()\nC++: void SetDirectionToBackToFront()\n\nSpecify the sort method for the polygonal primitives. By default,\nthe poly data is sorted from back to front.\n"},
  {(char*)"SetDirectionToSpecifiedVector", PyvtkDepthSortPolyData_SetDirectionToSpecifiedVector, METH_VARARGS,
   (char*)"V.SetDirectionToSpecifiedVector()\nC++: void SetDirectionToSpecifiedVector()\n\nSpecify the sort method for the polygonal primitives. By default,\nthe poly data is sorted from back to front.\n"},
  {(char*)"SetDepthSortMode", PyvtkDepthSortPolyData_SetDepthSortMode, METH_VARARGS,
   (char*)"V.SetDepthSortMode(int)\nC++: void SetDepthSortMode(int a)\n\nSpecify the point to use when sorting. The fastest is to just\ntake the first cell point. Other options are to take the bounding\nbox center or the parametric center of the cell. By default, the\nfirst cell point is used.\n"},
  {(char*)"GetDepthSortMode", PyvtkDepthSortPolyData_GetDepthSortMode, METH_VARARGS,
   (char*)"V.GetDepthSortMode() -> int\nC++: int GetDepthSortMode()\n\nSpecify the point to use when sorting. The fastest is to just\ntake the first cell point. Other options are to take the bounding\nbox center or the parametric center of the cell. By default, the\nfirst cell point is used.\n"},
  {(char*)"SetDepthSortModeToFirstPoint", PyvtkDepthSortPolyData_SetDepthSortModeToFirstPoint, METH_VARARGS,
   (char*)"V.SetDepthSortModeToFirstPoint()\nC++: void SetDepthSortModeToFirstPoint()\n\nSpecify the point to use when sorting. The fastest is to just\ntake the first cell point. Other options are to take the bounding\nbox center or the parametric center of the cell. By default, the\nfirst cell point is used.\n"},
  {(char*)"SetDepthSortModeToBoundsCenter", PyvtkDepthSortPolyData_SetDepthSortModeToBoundsCenter, METH_VARARGS,
   (char*)"V.SetDepthSortModeToBoundsCenter()\nC++: void SetDepthSortModeToBoundsCenter()\n\nSpecify the point to use when sorting. The fastest is to just\ntake the first cell point. Other options are to take the bounding\nbox center or the parametric center of the cell. By default, the\nfirst cell point is used.\n"},
  {(char*)"SetDepthSortModeToParametricCenter", PyvtkDepthSortPolyData_SetDepthSortModeToParametricCenter, METH_VARARGS,
   (char*)"V.SetDepthSortModeToParametricCenter()\nC++: void SetDepthSortModeToParametricCenter()\n\nSpecify the point to use when sorting. The fastest is to just\ntake the first cell point. Other options are to take the bounding\nbox center or the parametric center of the cell. By default, the\nfirst cell point is used.\n"},
  {(char*)"SetCamera", PyvtkDepthSortPolyData_SetCamera, METH_VARARGS,
   (char*)"V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSpecify a camera that is used to define a view direction along\nwhich the cells are sorted. This ivar only has effect if the\ndirection is set to front-to-back or back-to-front, and a camera\nis specified.\n"},
  {(char*)"GetCamera", PyvtkDepthSortPolyData_GetCamera, METH_VARARGS,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nSpecify a camera that is used to define a view direction along\nwhich the cells are sorted. This ivar only has effect if the\ndirection is set to front-to-back or back-to-front, and a camera\nis specified.\n"},
  {(char*)"SetProp3D", PyvtkDepthSortPolyData_SetProp3D, METH_VARARGS,
   (char*)"V.SetProp3D(vtkProp3D)\nC++: void SetProp3D(vtkProp3D *)\n\nSpecify a transformation matrix (via the vtkProp3D::GetMatrix()\nmethod) that is used to include the effects of transformation.\nThis ivar only has effect if the direction is set to\nfront-to-back or back-to-front, and a camera is specified.\nSpecifying the vtkProp3D is optional.\n"},
  {(char*)"GetProp3D", PyvtkDepthSortPolyData_GetProp3D, METH_VARARGS,
   (char*)"V.GetProp3D() -> vtkProp3D\nC++: vtkProp3D *GetProp3D()\n\nSpecify a transformation matrix (via the vtkProp3D::GetMatrix()\nmethod) that is used to include the effects of transformation.\nThis ivar only has effect if the direction is set to\nfront-to-back or back-to-front, and a camera is specified.\nSpecifying the vtkProp3D is optional.\n"},
  {(char*)"SetVector", PyvtkDepthSortPolyData_SetVector, METH_VARARGS,
   (char*)"V.SetVector(float, float, float)\nC++: void SetVector(double, double, double)\nV.SetVector((float, float, float))\nC++: void SetVector(double a[3])\n\n"},
  {(char*)"GetVector", PyvtkDepthSortPolyData_GetVector, METH_VARARGS,
   (char*)"V.GetVector() -> (float, float, float)\nC++: double *GetVector()\n\nSet/Get the sort direction. This ivar only has effect if the sort\ndirection is set to SetDirectionToSpecifiedVector(). The sort\noccurs in the direction of the vector.\n"},
  {(char*)"SetOrigin", PyvtkDepthSortPolyData_SetOrigin, METH_VARARGS,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {(char*)"GetOrigin", PyvtkDepthSortPolyData_GetOrigin, METH_VARARGS,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\nSet/Get the sort origin. This ivar only has effect if the sort\ndirection is set to SetDirectionToSpecifiedVector(). The sort\noccurs in the direction of the vector, with this point specifying\nthe origin.\n"},
  {(char*)"SetSortScalars", PyvtkDepthSortPolyData_SetSortScalars, METH_VARARGS,
   (char*)"V.SetSortScalars(int)\nC++: void SetSortScalars(int a)\n\nSet/Get a flag that controls the generation of scalar values\ncorresponding to the sort order. If enabled, the output of this\nfilter will include scalar values that range from 0 to\n(ncells-1), where 0 is closest to the sort direction.\n"},
  {(char*)"GetSortScalars", PyvtkDepthSortPolyData_GetSortScalars, METH_VARARGS,
   (char*)"V.GetSortScalars() -> int\nC++: int GetSortScalars()\n\nSet/Get a flag that controls the generation of scalar values\ncorresponding to the sort order. If enabled, the output of this\nfilter will include scalar values that range from 0 to\n(ncells-1), where 0 is closest to the sort direction.\n"},
  {(char*)"SortScalarsOn", PyvtkDepthSortPolyData_SortScalarsOn, METH_VARARGS,
   (char*)"V.SortScalarsOn()\nC++: void SortScalarsOn()\n\nSet/Get a flag that controls the generation of scalar values\ncorresponding to the sort order. If enabled, the output of this\nfilter will include scalar values that range from 0 to\n(ncells-1), where 0 is closest to the sort direction.\n"},
  {(char*)"SortScalarsOff", PyvtkDepthSortPolyData_SortScalarsOff, METH_VARARGS,
   (char*)"V.SortScalarsOff()\nC++: void SortScalarsOff()\n\nSet/Get a flag that controls the generation of scalar values\ncorresponding to the sort order. If enabled, the output of this\nfilter will include scalar values that range from 0 to\n(ncells-1), where 0 is closest to the sort direction.\n"},
  {(char*)"GetMTime", PyvtkDepthSortPolyData_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn MTime also considering the dependent objects: the camera\nand/or the prop3D.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDepthSortPolyData_StaticNew()
{
  return vtkDepthSortPolyData::New();
}

PyObject *PyVTKClass_vtkDepthSortPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDepthSortPolyData_StaticNew,
    PyvtkDepthSortPolyData_Methods,
    "vtkDepthSortPolyData", modulename,
    NULL, NULL,
    PyvtkDepthSortPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDepthSortPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkDepthSortPolyData - sort poly data along camera view direction\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkDepthSortPolyData rearranges the order of cells so that certain\nrendering operations (e.g., transparency or Painter's algorithms)\ngenerate correct results. To use this filter you must specify the\ndirection vector along which to sort the cells. You can do this by\nspecifying a camera and/or prop to define a view direction; or\nexplicitly set a view direction.\n\nCaveats:\n\nThe sort operation will not",
    " work well for long, thin primitives, or\ncells that intersect, overlap, or interpenetrate each other.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDepthSortPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDepthSortPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDepthSortPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 6; c++)
    {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_DIRECTION_BACK_TO_FRONT", 0 },
        { "VTK_DIRECTION_FRONT_TO_BACK", 1 },
        { "VTK_DIRECTION_SPECIFIED_VECTOR", 2 },
        { "VTK_SORT_FIRST_POINT", 0 },
        { "VTK_SORT_BOUNDS_CENTER", 1 },
        { "VTK_SORT_PARAMETRIC_CENTER", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

