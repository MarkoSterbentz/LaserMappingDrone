// python wrapper for vtkCutter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCutter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCutter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCutterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkCutter_Doc();


static PyObject *
PyvtkCutter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCutter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCutter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCutter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCutter::NewInstance());

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
PyvtkCutter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCutter *tempr = vtkCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkCutter::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkCutter::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkCutter::GetValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCutter_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetValues(temp0);
      }
    else
      {
      op->vtkCutter::GetValues(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkCutter_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkCutter_GetValues_s1(self, args);
    case 1:
      return PyvtkCutter_GetValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return NULL;
}



static PyObject *
PyvtkCutter_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfContours(temp0);
      }
    else
      {
      op->vtkCutter::SetNumberOfContours(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkCutter::GetNumberOfContours());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GenerateValues(temp0, temp1);
      }
    else
      {
      op->vtkCutter::GenerateValues(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCutter_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
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
      op->GenerateValues(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCutter::GenerateValues(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCutter_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCutter_GenerateValues_s1(self, args);
    case 3:
      return PyvtkCutter_GenerateValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return NULL;
}



static PyObject *
PyvtkCutter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkCutter::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_SetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetCutFunction(temp0);
      }
    else
      {
      op->vtkCutter::SetCutFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetCutFunction() :
      op->vtkCutter::GetCutFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_SetGenerateCutScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCutScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateCutScalars(temp0);
      }
    else
      {
      op->vtkCutter::SetGenerateCutScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetGenerateCutScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCutScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCutScalars() :
      op->vtkCutter::GetGenerateCutScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GenerateCutScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCutScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCutScalarsOn();
      }
    else
      {
      op->vtkCutter::GenerateCutScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GenerateCutScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCutScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCutScalarsOff();
      }
    else
      {
      op->vtkCutter::GenerateCutScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_SetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTriangles(temp0);
      }
    else
      {
      op->vtkCutter::SetGenerateTriangles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTriangles() :
      op->vtkCutter::GetGenerateTriangles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GenerateTrianglesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrianglesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateTrianglesOn();
      }
    else
      {
      op->vtkCutter::GenerateTrianglesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GenerateTrianglesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrianglesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateTrianglesOff();
      }
    else
      {
      op->vtkCutter::GenerateTrianglesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkCutter::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkCutter::GetLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_SetSortBy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortBy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSortBy(temp0);
      }
    else
      {
      op->vtkCutter::SetSortBy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetSortByMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSortByMinValue() :
      op->vtkCutter::GetSortByMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetSortByMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSortByMaxValue() :
      op->vtkCutter::GetSortByMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetSortBy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortBy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSortBy() :
      op->vtkCutter::GetSortBy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_SetSortByToSortByValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortByToSortByValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSortByToSortByValue();
      }
    else
      {
      op->vtkCutter::SetSortByToSortByValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_SetSortByToSortByCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortByToSortByCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSortByToSortByCell();
      }
    else
      {
      op->vtkCutter::SetSortByToSortByCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetSortByAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetSortByAsString() :
      op->vtkCutter::GetSortByAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkCutter::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetCellTypeDimensions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellTypeDimensions");

  unsigned char *temp0 = NULL;
  unsigned char *save0 = NULL;
  unsigned char small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new unsigned char[2*size0];
    }
  save0 = &temp0[size0];

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkCutter::GetCellTypeDimensions(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkCutter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

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
      op->vtkCutter::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkCutter::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkCutter::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkCutter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCutter_Methods[] = {
  {(char*)"GetClassName", PyvtkCutter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCutter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCutter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCutter\nC++: vtkCutter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCutter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCutter\nC++: vtkCutter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetValue", PyvtkCutter_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(int i, double value)\n\nSet a particular contour value at contour number i. The index i\nranges between 0<=i<NumberOfContours.\n"},
  {(char*)"GetValue", PyvtkCutter_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> float\nC++: double GetValue(int i)\n\nGet the ith contour value.\n"},
  {(char*)"GetValues", PyvtkCutter_GetValues, METH_VARARGS,
   (char*)"V.GetValues() -> (float, ...)\nC++: double *GetValues()\nV.GetValues([float, ...])\nC++: void GetValues(double *contourValues)\n\nGet a pointer to an array of contour values. There will be\nGetNumberOfContours() values in the list.\n"},
  {(char*)"SetNumberOfContours", PyvtkCutter_SetNumberOfContours, METH_VARARGS,
   (char*)"V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int number)\n\nSet the number of contours to place into the list. You only\nreally need to use this method to reduce list size. The method\nSetValue() will automatically increase list size as needed.\n"},
  {(char*)"GetNumberOfContours", PyvtkCutter_GetNumberOfContours, METH_VARARGS,
   (char*)"V.GetNumberOfContours() -> int\nC++: int GetNumberOfContours()\n\nGet the number of contours in the list of contour values.\n"},
  {(char*)"GenerateValues", PyvtkCutter_GenerateValues, METH_VARARGS,
   (char*)"V.GenerateValues(int, [float, float])\nC++: void GenerateValues(int numContours, double range[2])\nV.GenerateValues(int, float, float)\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nGenerate numContours equally spaced contour values between\nspecified range. Contour values will include min/max range\nvalues.\n"},
  {(char*)"GetMTime", PyvtkCutter_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride GetMTime because we delegate to vtkContourValues and\nrefer to vtkImplicitFunction.\n"},
  {(char*)"SetCutFunction", PyvtkCutter_SetCutFunction, METH_VARARGS,
   (char*)"V.SetCutFunction(vtkImplicitFunction)\nC++: virtual void SetCutFunction(vtkImplicitFunction *)\n\n"},
  {(char*)"GetCutFunction", PyvtkCutter_GetCutFunction, METH_VARARGS,
   (char*)"V.GetCutFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetCutFunction()\n\n"},
  {(char*)"SetGenerateCutScalars", PyvtkCutter_SetGenerateCutScalars, METH_VARARGS,
   (char*)"V.SetGenerateCutScalars(int)\nC++: void SetGenerateCutScalars(int a)\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {(char*)"GetGenerateCutScalars", PyvtkCutter_GetGenerateCutScalars, METH_VARARGS,
   (char*)"V.GetGenerateCutScalars() -> int\nC++: int GetGenerateCutScalars()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {(char*)"GenerateCutScalarsOn", PyvtkCutter_GenerateCutScalarsOn, METH_VARARGS,
   (char*)"V.GenerateCutScalarsOn()\nC++: void GenerateCutScalarsOn()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {(char*)"GenerateCutScalarsOff", PyvtkCutter_GenerateCutScalarsOff, METH_VARARGS,
   (char*)"V.GenerateCutScalarsOff()\nC++: void GenerateCutScalarsOff()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {(char*)"SetGenerateTriangles", PyvtkCutter_SetGenerateTriangles, METH_VARARGS,
   (char*)"V.SetGenerateTriangles(int)\nC++: void SetGenerateTriangles(int a)\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygons WARNING:\nif the cutting function is not a plane, the output will be 3D\npoygons, which might be nice to look at but hard to compute with\ndownstream.\n"},
  {(char*)"GetGenerateTriangles", PyvtkCutter_GetGenerateTriangles, METH_VARARGS,
   (char*)"V.GetGenerateTriangles() -> int\nC++: int GetGenerateTriangles()\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygons WARNING:\nif the cutting function is not a plane, the output will be 3D\npoygons, which might be nice to look at but hard to compute with\ndownstream.\n"},
  {(char*)"GenerateTrianglesOn", PyvtkCutter_GenerateTrianglesOn, METH_VARARGS,
   (char*)"V.GenerateTrianglesOn()\nC++: void GenerateTrianglesOn()\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygons WARNING:\nif the cutting function is not a plane, the output will be 3D\npoygons, which might be nice to look at but hard to compute with\ndownstream.\n"},
  {(char*)"GenerateTrianglesOff", PyvtkCutter_GenerateTrianglesOff, METH_VARARGS,
   (char*)"V.GenerateTrianglesOff()\nC++: void GenerateTrianglesOff()\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygons WARNING:\nif the cutting function is not a plane, the output will be 3D\npoygons, which might be nice to look at but hard to compute with\ndownstream.\n"},
  {(char*)"SetLocator", PyvtkCutter_SetLocator, METH_VARARGS,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkCutter_GetLocator, METH_VARARGS,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"SetSortBy", PyvtkCutter_SetSortBy, METH_VARARGS,
   (char*)"V.SetSortBy(int)\nC++: void SetSortBy(int)\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"GetSortByMinValue", PyvtkCutter_GetSortByMinValue, METH_VARARGS,
   (char*)"V.GetSortByMinValue() -> int\nC++: int GetSortByMinValue()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"GetSortByMaxValue", PyvtkCutter_GetSortByMaxValue, METH_VARARGS,
   (char*)"V.GetSortByMaxValue() -> int\nC++: int GetSortByMaxValue()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"GetSortBy", PyvtkCutter_GetSortBy, METH_VARARGS,
   (char*)"V.GetSortBy() -> int\nC++: int GetSortBy()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"SetSortByToSortByValue", PyvtkCutter_SetSortByToSortByValue, METH_VARARGS,
   (char*)"V.SetSortByToSortByValue()\nC++: void SetSortByToSortByValue()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"SetSortByToSortByCell", PyvtkCutter_SetSortByToSortByCell, METH_VARARGS,
   (char*)"V.SetSortByToSortByCell()\nC++: void SetSortByToSortByCell()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"GetSortByAsString", PyvtkCutter_GetSortByAsString, METH_VARARGS,
   (char*)"V.GetSortByAsString() -> string\nC++: const char *GetSortByAsString()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"CreateDefaultLocator", PyvtkCutter_CreateDefaultLocator, METH_VARARGS,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {(char*)"GetCellTypeDimensions", PyvtkCutter_GetCellTypeDimensions, METH_VARARGS | METH_STATIC,
   (char*)"V.GetCellTypeDimensions([int, ...])\nC++: static void GetCellTypeDimensions(\n    unsigned char *cellTypeDimensions)\n\nNormally I would put this in a different class, but since This is\na temporary fix until we convert this class and contour filter to\ngenerate unstructured grid output instead of poly data, I am\nleaving it here.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkCutter_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecisionMinValue", PyvtkCutter_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecisionMinValue() -> int\nC++: int GetOutputPointsPrecisionMinValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecisionMaxValue", PyvtkCutter_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecisionMaxValue() -> int\nC++: int GetOutputPointsPrecisionMaxValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkCutter_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCutter_StaticNew()
{
  return vtkCutter::New();
}

PyObject *PyVTKClass_vtkCutterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCutter_StaticNew,
    PyvtkCutter_Methods,
    "vtkCutter", modulename,
    NULL, NULL,
    PyvtkCutter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCutter_Doc()
{
  static const char *docstring[] = {
    "vtkCutter - Cut vtkDataSet with user-specified implicit function\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkCutter is a filter to cut through data using any subclass of\nvtkImplicitFunction. That is, a polygonal surface is created\ncorresponding to the implicit function F(x,y,z) = value(s), where you\ncan specify one or more values used to cut with.\n\nIn VTK, cutting means reducing a cell of dimension N to a cut surface\nof dimension N-1. For example, a tetrahedron when cut by a plane\n(i.e., vtkPlane impl",
    "icit function) will generate triangles. (In\ncomparison, clipping takes a N dimensional cell and creates N\ndimension primitives.)\n\nvtkCutter is generally used to \"slice-through\" a dataset, generating\na surface that can be visualized. It is also possible to use\nvtkCutter to do a form of volume rendering. vtkCutter does this by\ngenerating multiple cut surfaces (usually planes) which are ordered\n(and ",
    "rendered) from back-to-front. The surfaces are set translucent\nto give a volumetric rendering effect.\n\nNote that data can be cut using either 1) the scalar values\nassociated with the dataset or 2) an implicit function associated\nwith this class. By default, if an implicit function is set it is\nused to clip the data set, otherwise the dataset scalars are used to\nperform the clipping.\n\nSee Also:\n\nvt",
    "kImplicitFunction vtkClipPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCutter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCutterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCutter", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_SORT_BY_VALUE", 0 },
        { "VTK_SORT_BY_CELL", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

