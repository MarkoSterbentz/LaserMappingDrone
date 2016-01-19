// python wrapper for vtkUnstructuredGridPreIntegration
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUnstructuredGridPreIntegration.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUnstructuredGridPreIntegration(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUnstructuredGridPreIntegrationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew
#endif

static const char **PyvtkUnstructuredGridPreIntegration_Doc();


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUnstructuredGridPreIntegration::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridPreIntegration::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGridPreIntegration *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridPreIntegration::NewInstance());

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
PyvtkUnstructuredGridPreIntegration_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUnstructuredGridPreIntegration *tempr = vtkUnstructuredGridPreIntegration::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  vtkVolume *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGridPreIntegration::Initialize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_Integrate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Integrate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  vtkDoubleArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  float temp3[4];
  float save3[4];
  const int size3 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->Integrate(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkUnstructuredGridPreIntegration::Integrate(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGridVolumeRayIntegrator *tempr = (ap.IsBound() ?
      op->GetIntegrator() :
      op->vtkUnstructuredGridPreIntegration::GetIntegrator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  vtkUnstructuredGridVolumeRayIntegrator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGridVolumeRayIntegrator"))
    {
    if (ap.IsBound())
      {
      op->SetIntegrator(temp0);
      }
    else
      {
      op->vtkUnstructuredGridPreIntegration::SetIntegrator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SetIntegrationTableScalarResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationTableScalarResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationTableScalarResolution(temp0);
      }
    else
      {
      op->vtkUnstructuredGridPreIntegration::SetIntegrationTableScalarResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableScalarResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationTableScalarResolution() :
      op->vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SetIntegrationTableLengthResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationTableLengthResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationTableLengthResolution(temp0);
      }
    else
      {
      op->vtkUnstructuredGridPreIntegration::SetIntegrationTableLengthResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableLengthResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableLengthResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationTableLengthResolution() :
      op->vtkUnstructuredGridPreIntegration::GetIntegrationTableLengthResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableScalarShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    double tempr = (ap.IsBound() ?
      op->GetIntegrationTableScalarShift(temp0) :
      op->vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarShift(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableScalarScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    double tempr = (ap.IsBound() ?
      op->GetIntegrationTableScalarScale(temp0) :
      op->vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarScale(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableLengthScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableLengthScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetIntegrationTableLengthScale() :
      op->vtkUnstructuredGridPreIntegration::GetIntegrationTableLengthScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIncrementalPreIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrementalPreIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIncrementalPreIntegration() :
      op->vtkUnstructuredGridPreIntegration::GetIncrementalPreIntegration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SetIncrementalPreIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncrementalPreIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIncrementalPreIntegration(temp0);
      }
    else
      {
      op->vtkUnstructuredGridPreIntegration::SetIncrementalPreIntegration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_IncrementalPreIntegrationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncrementalPreIntegrationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncrementalPreIntegrationOn();
      }
    else
      {
      op->vtkUnstructuredGridPreIntegration::IncrementalPreIntegrationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_IncrementalPreIntegrationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncrementalPreIntegrationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncrementalPreIntegrationOff();
      }
    else
      {
      op->vtkUnstructuredGridPreIntegration::IncrementalPreIntegrationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetPreIntegrationTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreIntegrationTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    float *tempr = (ap.IsBound() ?
      op->GetPreIntegrationTable(temp0) :
      op->vtkUnstructuredGridPreIntegration::GetPreIntegrationTable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetTableEntry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int temp3 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    float *tempr = (ap.IsBound() ?
      op->GetTableEntry(temp0, temp1, temp2, temp3) :
      op->vtkUnstructuredGridPreIntegration::GetTableEntry(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIndexedTableEntry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedTableEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    float *tempr = (ap.IsBound() ?
      op->GetIndexedTableEntry(temp0, temp1, temp2, temp3) :
      op->vtkUnstructuredGridPreIntegration::GetIndexedTableEntry(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridPreIntegration_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridPreIntegration_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridPreIntegration_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridPreIntegration_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUnstructuredGridPreIntegration\nC++: vtkUnstructuredGridPreIntegration *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGridPreIntegration_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUnstructuredGridPreIntegration\nC++: vtkUnstructuredGridPreIntegration *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkUnstructuredGridPreIntegration_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkVolume, vtkDataArray)\nC++: virtual void Initialize(vtkVolume *volume,\n    vtkDataArray *scalars)\n\n"},
  {(char*)"Integrate", PyvtkUnstructuredGridPreIntegration_Integrate, METH_VARARGS,
   (char*)"V.Integrate(vtkDoubleArray, vtkDataArray, vtkDataArray, [float,\n    float, float, float])\nC++: virtual void Integrate(vtkDoubleArray *intersectionLengths,\n    vtkDataArray *nearIntersections,\n    vtkDataArray *farIntersections, float color[4])\n\n"},
  {(char*)"GetIntegrator", PyvtkUnstructuredGridPreIntegration_GetIntegrator, METH_VARARGS,
   (char*)"V.GetIntegrator() -> vtkUnstructuredGridVolumeRayIntegrator\nC++: vtkUnstructuredGridVolumeRayIntegrator *GetIntegrator()\n\nThe class used to fill the pre integration table.  By default, a\nvtkUnstructuredGridPartialPreIntegration is built.\n"},
  {(char*)"SetIntegrator", PyvtkUnstructuredGridPreIntegration_SetIntegrator, METH_VARARGS,
   (char*)"V.SetIntegrator(vtkUnstructuredGridVolumeRayIntegrator)\nC++: virtual void SetIntegrator(\n    vtkUnstructuredGridVolumeRayIntegrator *)\n\nThe class used to fill the pre integration table.  By default, a\nvtkUnstructuredGridPartialPreIntegration is built.\n"},
  {(char*)"SetIntegrationTableScalarResolution", PyvtkUnstructuredGridPreIntegration_SetIntegrationTableScalarResolution, METH_VARARGS,
   (char*)"V.SetIntegrationTableScalarResolution(int)\nC++: void SetIntegrationTableScalarResolution(int a)\n\nSet/Get the size of the integration table built.\n"},
  {(char*)"GetIntegrationTableScalarResolution", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarResolution, METH_VARARGS,
   (char*)"V.GetIntegrationTableScalarResolution() -> int\nC++: int GetIntegrationTableScalarResolution()\n\nSet/Get the size of the integration table built.\n"},
  {(char*)"SetIntegrationTableLengthResolution", PyvtkUnstructuredGridPreIntegration_SetIntegrationTableLengthResolution, METH_VARARGS,
   (char*)"V.SetIntegrationTableLengthResolution(int)\nC++: void SetIntegrationTableLengthResolution(int a)\n\nSet/Get the size of the integration table built.\n"},
  {(char*)"GetIntegrationTableLengthResolution", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableLengthResolution, METH_VARARGS,
   (char*)"V.GetIntegrationTableLengthResolution() -> int\nC++: int GetIntegrationTableLengthResolution()\n\nSet/Get the size of the integration table built.\n"},
  {(char*)"GetIntegrationTableScalarShift", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarShift, METH_VARARGS,
   (char*)"V.GetIntegrationTableScalarShift(int) -> float\nC++: virtual double GetIntegrationTableScalarShift(\n    int component=0)\n\nGet how an integration table is indexed.\n"},
  {(char*)"GetIntegrationTableScalarScale", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarScale, METH_VARARGS,
   (char*)"V.GetIntegrationTableScalarScale(int) -> float\nC++: virtual double GetIntegrationTableScalarScale(\n    int component=0)\n\nGet how an integration table is indexed.\n"},
  {(char*)"GetIntegrationTableLengthScale", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableLengthScale, METH_VARARGS,
   (char*)"V.GetIntegrationTableLengthScale() -> float\nC++: virtual double GetIntegrationTableLengthScale()\n\nGet how an integration table is indexed.\n"},
  {(char*)"GetIncrementalPreIntegration", PyvtkUnstructuredGridPreIntegration_GetIncrementalPreIntegration, METH_VARARGS,
   (char*)"V.GetIncrementalPreIntegration() -> int\nC++: int GetIncrementalPreIntegration()\n\nGet/set whether to use incremental pre-integration (by default\nit's on).  Incremental pre-integration is much faster but can\nintroduce error due to numerical imprecision.  Under most\ncircumstances, the error is not noticeable.\n"},
  {(char*)"SetIncrementalPreIntegration", PyvtkUnstructuredGridPreIntegration_SetIncrementalPreIntegration, METH_VARARGS,
   (char*)"V.SetIncrementalPreIntegration(int)\nC++: void SetIncrementalPreIntegration(int a)\n\nGet/set whether to use incremental pre-integration (by default\nit's on).  Incremental pre-integration is much faster but can\nintroduce error due to numerical imprecision.  Under most\ncircumstances, the error is not noticeable.\n"},
  {(char*)"IncrementalPreIntegrationOn", PyvtkUnstructuredGridPreIntegration_IncrementalPreIntegrationOn, METH_VARARGS,
   (char*)"V.IncrementalPreIntegrationOn()\nC++: void IncrementalPreIntegrationOn()\n\nGet/set whether to use incremental pre-integration (by default\nit's on).  Incremental pre-integration is much faster but can\nintroduce error due to numerical imprecision.  Under most\ncircumstances, the error is not noticeable.\n"},
  {(char*)"IncrementalPreIntegrationOff", PyvtkUnstructuredGridPreIntegration_IncrementalPreIntegrationOff, METH_VARARGS,
   (char*)"V.IncrementalPreIntegrationOff()\nC++: void IncrementalPreIntegrationOff()\n\nGet/set whether to use incremental pre-integration (by default\nit's on).  Incremental pre-integration is much faster but can\nintroduce error due to numerical imprecision.  Under most\ncircumstances, the error is not noticeable.\n"},
  {(char*)"GetPreIntegrationTable", PyvtkUnstructuredGridPreIntegration_GetPreIntegrationTable, METH_VARARGS,
   (char*)"V.GetPreIntegrationTable(int) -> (float, ...)\nC++: virtual float *GetPreIntegrationTable(int component=0)\n\nGet the partial pre-integration table for the given scalar\ncomponent. The tables are built when Initialize is called.  A\nsegment of length d with a front scalar of sf and a back scalar\nof sb is referenced in the resulting table as 4 * ((l *\nIntegrationTableLengthScale) * \\c\nIntegrationTableScalarResolution *\nIntegrationTableScalarResolution + (sb *\nIntegrationTableScalarScale + \\c IntegrationTableScalarShift) *\nIntegrationTableScalarResolution + (sf *\nIntegrationTableScalarScale + \\c IntegrationTableScalarShift)).\n"},
  {(char*)"GetTableEntry", PyvtkUnstructuredGridPreIntegration_GetTableEntry, METH_VARARGS,
   (char*)"V.GetTableEntry(float, float, float, int) -> (float, ...)\nC++: float *GetTableEntry(double scalar_front, double scalar_back,\n     double lenth, int component=0)\n\nGet an entry (RGBA) in one of the pre-integration tables.  The\ntables are built when Intialize is called.\n"},
  {(char*)"GetIndexedTableEntry", PyvtkUnstructuredGridPreIntegration_GetIndexedTableEntry, METH_VARARGS,
   (char*)"V.GetIndexedTableEntry(int, int, int, int) -> (float, ...)\nC++: float *GetIndexedTableEntry(int scalar_front_index,\n    int scalar_back_index, int length_index, int component=0)\n\nLike GetTableEntry, except the inputs are scaled indices into the\ntable rather than than the actual scalar and length values.  Use\nGetTableEntry unless you are really sure you know what you are\ndoing.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGridPreIntegration_StaticNew()
{
  return vtkUnstructuredGridPreIntegration::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridPreIntegrationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGridPreIntegration_StaticNew,
    PyvtkUnstructuredGridPreIntegration_Methods,
    "vtkUnstructuredGridPreIntegration", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridPreIntegration_Doc(),
    PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridPreIntegration_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridPreIntegration - performs ray integration with\npre-integration tables.\n\n",
    "Superclass: vtkUnstructuredGridVolumeRayIntegrator\n\n",
    "vtkUnstructuredGridPreIntegration performs ray integration by looking\ninto a precomputed table.  The result should be equivalent to that\ncomputed by vtkUnstructuredGridLinearRayIntegrator and\nvtkUnstructuredGridPartialPreIntegration, but faster than either one.\nThe pre-integration algorithm was first introduced by Roettger,\nKraus, and Ertl in \"Hardware-Accelerated Volume And Isosurface\nRendering B",
    "ased On Cell-Projection.\"\n\nDue to table size limitations, a table can only be indexed by\nindependent scalars.  Thus, dependent scalars are not supported.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridPreIntegration(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridPreIntegrationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridPreIntegration", o) != 0)
    {
    Py_DECREF(o);
    }

}

