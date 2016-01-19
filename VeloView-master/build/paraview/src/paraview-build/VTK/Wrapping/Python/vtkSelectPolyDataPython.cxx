// python wrapper for vtkSelectPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSelectPolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSelectPolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSelectPolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSelectPolyData_Doc();


static PyObject *
PyvtkSelectPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSelectPolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelectPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectPolyData::NewInstance());

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
PyvtkSelectPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSelectPolyData *tempr = vtkSelectPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetGenerateSelectionScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateSelectionScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateSelectionScalars(temp0);
      }
    else
      {
      op->vtkSelectPolyData::SetGenerateSelectionScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetGenerateSelectionScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateSelectionScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateSelectionScalars() :
      op->vtkSelectPolyData::GetGenerateSelectionScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GenerateSelectionScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSelectionScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateSelectionScalarsOn();
      }
    else
      {
      op->vtkSelectPolyData::GenerateSelectionScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GenerateSelectionScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSelectionScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateSelectionScalarsOff();
      }
    else
      {
      op->vtkSelectPolyData::GenerateSelectionScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

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
      op->vtkSelectPolyData::SetInsideOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkSelectPolyData::GetInsideOut());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOn();
      }
    else
      {
      op->vtkSelectPolyData::InsideOutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOff();
      }
    else
      {
      op->vtkSelectPolyData::InsideOutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetLoop(temp0);
      }
    else
      {
      op->vtkSelectPolyData::SetLoop(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetLoop() :
      op->vtkSelectPolyData::GetLoop());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

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
      op->SetClosestPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSelectPolyData::SetClosestPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSelectPolyData_SetClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetClosestPoint(temp0);
      }
    else
      {
      op->vtkSelectPolyData::SetClosestPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSelectPolyData_SetClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSelectPolyData_SetClosestPoint_s1(self, args);
    case 1:
      return PyvtkSelectPolyData_SetClosestPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetClosestPoint");
  return NULL;
}



static PyObject *
PyvtkSelectPolyData_GetClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetClosestPoint() :
      op->vtkSelectPolyData::GetClosestPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionMode(temp0);
      }
    else
      {
      op->vtkSelectPolyData::SetSelectionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetSelectionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSelectionModeMinValue() :
      op->vtkSelectPolyData::GetSelectionModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetSelectionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSelectionModeMaxValue() :
      op->vtkSelectPolyData::GetSelectionModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSelectionMode() :
      op->vtkSelectPolyData::GetSelectionMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetSelectionModeToSmallestRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToSmallestRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionModeToSmallestRegion();
      }
    else
      {
      op->vtkSelectPolyData::SetSelectionModeToSmallestRegion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetSelectionModeToLargestRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToLargestRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionModeToLargestRegion();
      }
    else
      {
      op->vtkSelectPolyData::SetSelectionModeToLargestRegion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetSelectionModeToClosestPointRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToClosestPointRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionModeToClosestPointRegion();
      }
    else
      {
      op->vtkSelectPolyData::SetSelectionModeToClosestPointRegion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetSelectionModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetSelectionModeAsString() :
      op->vtkSelectPolyData::GetSelectionModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetGenerateUnselectedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateUnselectedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateUnselectedOutput(temp0);
      }
    else
      {
      op->vtkSelectPolyData::SetGenerateUnselectedOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetGenerateUnselectedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateUnselectedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateUnselectedOutput() :
      op->vtkSelectPolyData::GetGenerateUnselectedOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GenerateUnselectedOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateUnselectedOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateUnselectedOutputOn();
      }
    else
      {
      op->vtkSelectPolyData::GenerateUnselectedOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GenerateUnselectedOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateUnselectedOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateUnselectedOutputOff();
      }
    else
      {
      op->vtkSelectPolyData::GenerateUnselectedOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetUnselectedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnselectedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetUnselectedOutput() :
      op->vtkSelectPolyData::GetUnselectedOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetSelectionEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSelectionEdges() :
      op->vtkSelectPolyData::GetSelectionEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSelectPolyData::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSelectPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkSelectPolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSelectPolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSelectPolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSelectPolyData\nC++: vtkSelectPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSelectPolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSelectPolyData\nC++: vtkSelectPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGenerateSelectionScalars", PyvtkSelectPolyData_SetGenerateSelectionScalars, METH_VARARGS,
   (char*)"V.SetGenerateSelectionScalars(int)\nC++: void SetGenerateSelectionScalars(int a)\n\nSet/Get the flag to control behavior of the filter. If\nGenerateSelectionScalars is on, then the output of the filter is\nthe same as the input, except that scalars are generated. If off,\nthe filter outputs the cells laying inside the loop, and does not\ngenerate scalars.\n"},
  {(char*)"GetGenerateSelectionScalars", PyvtkSelectPolyData_GetGenerateSelectionScalars, METH_VARARGS,
   (char*)"V.GetGenerateSelectionScalars() -> int\nC++: int GetGenerateSelectionScalars()\n\nSet/Get the flag to control behavior of the filter. If\nGenerateSelectionScalars is on, then the output of the filter is\nthe same as the input, except that scalars are generated. If off,\nthe filter outputs the cells laying inside the loop, and does not\ngenerate scalars.\n"},
  {(char*)"GenerateSelectionScalarsOn", PyvtkSelectPolyData_GenerateSelectionScalarsOn, METH_VARARGS,
   (char*)"V.GenerateSelectionScalarsOn()\nC++: void GenerateSelectionScalarsOn()\n\nSet/Get the flag to control behavior of the filter. If\nGenerateSelectionScalars is on, then the output of the filter is\nthe same as the input, except that scalars are generated. If off,\nthe filter outputs the cells laying inside the loop, and does not\ngenerate scalars.\n"},
  {(char*)"GenerateSelectionScalarsOff", PyvtkSelectPolyData_GenerateSelectionScalarsOff, METH_VARARGS,
   (char*)"V.GenerateSelectionScalarsOff()\nC++: void GenerateSelectionScalarsOff()\n\nSet/Get the flag to control behavior of the filter. If\nGenerateSelectionScalars is on, then the output of the filter is\nthe same as the input, except that scalars are generated. If off,\nthe filter outputs the cells laying inside the loop, and does not\ngenerate scalars.\n"},
  {(char*)"SetInsideOut", PyvtkSelectPolyData_SetInsideOut, METH_VARARGS,
   (char*)"V.SetInsideOut(int)\nC++: void SetInsideOut(int a)\n\nSet/Get the InsideOut flag. When off, the mesh within the loop is\nextracted. When on, the mesh outside the loop is extracted.\n"},
  {(char*)"GetInsideOut", PyvtkSelectPolyData_GetInsideOut, METH_VARARGS,
   (char*)"V.GetInsideOut() -> int\nC++: int GetInsideOut()\n\nSet/Get the InsideOut flag. When off, the mesh within the loop is\nextracted. When on, the mesh outside the loop is extracted.\n"},
  {(char*)"InsideOutOn", PyvtkSelectPolyData_InsideOutOn, METH_VARARGS,
   (char*)"V.InsideOutOn()\nC++: void InsideOutOn()\n\nSet/Get the InsideOut flag. When off, the mesh within the loop is\nextracted. When on, the mesh outside the loop is extracted.\n"},
  {(char*)"InsideOutOff", PyvtkSelectPolyData_InsideOutOff, METH_VARARGS,
   (char*)"V.InsideOutOff()\nC++: void InsideOutOff()\n\nSet/Get the InsideOut flag. When off, the mesh within the loop is\nextracted. When on, the mesh outside the loop is extracted.\n"},
  {(char*)"SetLoop", PyvtkSelectPolyData_SetLoop, METH_VARARGS,
   (char*)"V.SetLoop(vtkPoints)\nC++: virtual void SetLoop(vtkPoints *)\n\nSet/Get the array of point coordinates defining the loop. There\nmust be at least three points used to define a loop.\n"},
  {(char*)"GetLoop", PyvtkSelectPolyData_GetLoop, METH_VARARGS,
   (char*)"V.GetLoop() -> vtkPoints\nC++: vtkPoints *GetLoop()\n\nSet/Get the array of point coordinates defining the loop. There\nmust be at least three points used to define a loop.\n"},
  {(char*)"SetClosestPoint", PyvtkSelectPolyData_SetClosestPoint, METH_VARARGS,
   (char*)"V.SetClosestPoint(float, float, float)\nC++: void SetClosestPoint(double, double, double)\nV.SetClosestPoint((float, float, float))\nC++: void SetClosestPoint(double a[3])\n\n"},
  {(char*)"GetClosestPoint", PyvtkSelectPolyData_GetClosestPoint, METH_VARARGS,
   (char*)"V.GetClosestPoint() -> (float, float, float)\nC++: double *GetClosestPoint()\n\n"},
  {(char*)"SetSelectionMode", PyvtkSelectPolyData_SetSelectionMode, METH_VARARGS,
   (char*)"V.SetSelectionMode(int)\nC++: void SetSelectionMode(int)\n\nControl how inside/outside of loop is defined.\n"},
  {(char*)"GetSelectionModeMinValue", PyvtkSelectPolyData_GetSelectionModeMinValue, METH_VARARGS,
   (char*)"V.GetSelectionModeMinValue() -> int\nC++: int GetSelectionModeMinValue()\n\nControl how inside/outside of loop is defined.\n"},
  {(char*)"GetSelectionModeMaxValue", PyvtkSelectPolyData_GetSelectionModeMaxValue, METH_VARARGS,
   (char*)"V.GetSelectionModeMaxValue() -> int\nC++: int GetSelectionModeMaxValue()\n\nControl how inside/outside of loop is defined.\n"},
  {(char*)"GetSelectionMode", PyvtkSelectPolyData_GetSelectionMode, METH_VARARGS,
   (char*)"V.GetSelectionMode() -> int\nC++: int GetSelectionMode()\n\nControl how inside/outside of loop is defined.\n"},
  {(char*)"SetSelectionModeToSmallestRegion", PyvtkSelectPolyData_SetSelectionModeToSmallestRegion, METH_VARARGS,
   (char*)"V.SetSelectionModeToSmallestRegion()\nC++: void SetSelectionModeToSmallestRegion()\n\nControl how inside/outside of loop is defined.\n"},
  {(char*)"SetSelectionModeToLargestRegion", PyvtkSelectPolyData_SetSelectionModeToLargestRegion, METH_VARARGS,
   (char*)"V.SetSelectionModeToLargestRegion()\nC++: void SetSelectionModeToLargestRegion()\n\nControl how inside/outside of loop is defined.\n"},
  {(char*)"SetSelectionModeToClosestPointRegion", PyvtkSelectPolyData_SetSelectionModeToClosestPointRegion, METH_VARARGS,
   (char*)"V.SetSelectionModeToClosestPointRegion()\nC++: void SetSelectionModeToClosestPointRegion()\n\nControl how inside/outside of loop is defined.\n"},
  {(char*)"GetSelectionModeAsString", PyvtkSelectPolyData_GetSelectionModeAsString, METH_VARARGS,
   (char*)"V.GetSelectionModeAsString() -> string\nC++: const char *GetSelectionModeAsString()\n\nControl how inside/outside of loop is defined.\n"},
  {(char*)"SetGenerateUnselectedOutput", PyvtkSelectPolyData_SetGenerateUnselectedOutput, METH_VARARGS,
   (char*)"V.SetGenerateUnselectedOutput(int)\nC++: void SetGenerateUnselectedOutput(int a)\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's not been selected.\n"},
  {(char*)"GetGenerateUnselectedOutput", PyvtkSelectPolyData_GetGenerateUnselectedOutput, METH_VARARGS,
   (char*)"V.GetGenerateUnselectedOutput() -> int\nC++: int GetGenerateUnselectedOutput()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's not been selected.\n"},
  {(char*)"GenerateUnselectedOutputOn", PyvtkSelectPolyData_GenerateUnselectedOutputOn, METH_VARARGS,
   (char*)"V.GenerateUnselectedOutputOn()\nC++: void GenerateUnselectedOutputOn()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's not been selected.\n"},
  {(char*)"GenerateUnselectedOutputOff", PyvtkSelectPolyData_GenerateUnselectedOutputOff, METH_VARARGS,
   (char*)"V.GenerateUnselectedOutputOff()\nC++: void GenerateUnselectedOutputOff()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's not been selected.\n"},
  {(char*)"GetUnselectedOutput", PyvtkSelectPolyData_GetUnselectedOutput, METH_VARARGS,
   (char*)"V.GetUnselectedOutput() -> vtkPolyData\nC++: vtkPolyData *GetUnselectedOutput()\n\nReturn output that hasn't been selected (if\nGenreateUnselectedOutput is enabled).\n"},
  {(char*)"GetSelectionEdges", PyvtkSelectPolyData_GetSelectionEdges, METH_VARARGS,
   (char*)"V.GetSelectionEdges() -> vtkPolyData\nC++: vtkPolyData *GetSelectionEdges()\n\nReturn the (mesh) edges of the selection region.\n"},
  {(char*)"GetMTime", PyvtkSelectPolyData_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSelectPolyData_StaticNew()
{
  return vtkSelectPolyData::New();
}

PyObject *PyVTKClass_vtkSelectPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSelectPolyData_StaticNew,
    PyvtkSelectPolyData_Methods,
    "vtkSelectPolyData", modulename,
    NULL, NULL,
    PyvtkSelectPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSelectPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkSelectPolyData - select portion of polygonal mesh; generate\nselection scalars\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSelectPolyData is a filter that selects polygonal data based on\ndefining a \"loop\" and indicating the region inside of the loop. The\nmesh within the loop consists of complete cells (the cells are not\ncut). Alternatively, this filter can be used to generate scalars.\nThese scalar values, which are a distance measure to the loop, can be\nused to clip, contour. or extract data (i.e., anything that an",
    "\nimplicit function can do).\n\nThe loop is defined by an array of x-y-z point coordinates.\n(Coordinates should be in the same coordinate space as the input\npolygonal data.) The loop can be concave and non-planar, but not\nself-intersecting. The input to the filter is a polygonal mesh (only\nsurface primitives such as triangle strips and polygons); the output\nis either a) a portion of the original mesh",
    " laying within the\nselection loop (GenerateSelectionScalarsOff); or b) the same\npolygonal mesh with the addition of scalar values\n(GenerateSelectionScalarsOn).\n\nThe algorithm works as follows. For each point coordinate in the\nloop, the closest point in the mesh is found. The result is a loop of\nclosest point ids from the mesh. Then, the edges in the mesh\nconnecting the closest points (and laying a",
    "long the lines forming the\nloop) are found. A greedy edge tracking procedure is used as follows.\nAt the current point, the mesh edge oriented in the direction of and\nwhose end point is closest to the line is chosen. The edge is\nfollowed to the new end point, and the procedure is repeated. This\nprocess continues until the entire loop has been created.\n\nTo determine what portion of the mesh is insid",
    "e and outside of the\nloop, three options are possible. 1) the smallest connected region,\n2) the largest connected region, and 3) the connected region closest\n   to a user specified point. (Set the ivar SelectionMode.)\n\nOnce the loop is computed as above, the GenerateSelectionScalars\ncontrols the output of the filter. If on, then scalar values are\ngenerated based on distance to the loop lines. Othe",
    "rwise, the cells\nlaying inside the selection loop are output. By default, the mesh\nlaying within the loop is output; however, if InsideOut is on, then\nthe portion of the mesh laying outside of the loop is output.\n\nThe filter can be configured to generate the unselected portions of\nthe mesh as output by setting GenerateUnselectedOutput. Use the\nmethod GetUnselectedOutput to access this output. (Not",
    "e: this flag is\npertinent only when GenerateSelectionScalars is off.)\n\nCaveats:\n\nMake sure that the points you pick are on a connected surface. If\nnot, then the filter will generate an empty or partial result. Also,\nself-intersecting loops will generate unpredictable results.\n\nDuring processing of the data, non-triangular cells are converted to\ntriangles if GenerateSelectionScalars is off.\n\nSee Al",
    "so:\n\nvtkImplicitSelectionLoop\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSelectPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSelectPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSelectPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_INSIDE_SMALLEST_REGION", 0 },
        { "VTK_INSIDE_LARGEST_REGION", 1 },
        { "VTK_INSIDE_CLOSEST_POINT_REGION", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

