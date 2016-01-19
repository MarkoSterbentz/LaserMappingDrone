// python wrapper for vtkHyperOctreeCutter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHyperOctreeCutter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHyperOctreeCutter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHyperOctreeCutterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkHyperOctreeCutter_Doc();


static PyObject *
PyvtkHyperOctreeCutter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHyperOctreeCutter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperOctreeCutter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperOctreeCutter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperOctreeCutter::NewInstance());

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
PyvtkHyperOctreeCutter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHyperOctreeCutter *tempr = vtkHyperOctreeCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

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
      op->vtkHyperOctreeCutter::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkHyperOctreeCutter::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkHyperOctreeCutter::GetValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeCutter_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

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
      op->vtkHyperOctreeCutter::GetValues(temp0);
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
PyvtkHyperOctreeCutter_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkHyperOctreeCutter_GetValues_s1(self, args);
    case 1:
      return PyvtkHyperOctreeCutter_GetValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return NULL;
}



static PyObject *
PyvtkHyperOctreeCutter_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

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
      op->vtkHyperOctreeCutter::SetNumberOfContours(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkHyperOctreeCutter::GetNumberOfContours());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

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
      op->vtkHyperOctreeCutter::GenerateValues(temp0, temp1);
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
PyvtkHyperOctreeCutter_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

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
      op->vtkHyperOctreeCutter::GenerateValues(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeCutter_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkHyperOctreeCutter_GenerateValues_s1(self, args);
    case 3:
      return PyvtkHyperOctreeCutter_GenerateValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return NULL;
}



static PyObject *
PyvtkHyperOctreeCutter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkHyperOctreeCutter::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_SetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

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
      op->vtkHyperOctreeCutter::SetCutFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_GetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetCutFunction() :
      op->vtkHyperOctreeCutter::GetCutFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_SetGenerateCutScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCutScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

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
      op->vtkHyperOctreeCutter::SetGenerateCutScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_GetGenerateCutScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCutScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCutScalars() :
      op->vtkHyperOctreeCutter::GetGenerateCutScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_GenerateCutScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCutScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCutScalarsOn();
      }
    else
      {
      op->vtkHyperOctreeCutter::GenerateCutScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_GenerateCutScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCutScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCutScalarsOff();
      }
    else
      {
      op->vtkHyperOctreeCutter::GenerateCutScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

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
      op->vtkHyperOctreeCutter::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkHyperOctreeCutter::GetLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_SetSortBy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortBy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

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
      op->vtkHyperOctreeCutter::SetSortBy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_GetSortByMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSortByMinValue() :
      op->vtkHyperOctreeCutter::GetSortByMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_GetSortByMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSortByMaxValue() :
      op->vtkHyperOctreeCutter::GetSortByMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_GetSortBy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortBy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSortBy() :
      op->vtkHyperOctreeCutter::GetSortBy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_SetSortByToSortByValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortByToSortByValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSortByToSortByValue();
      }
    else
      {
      op->vtkHyperOctreeCutter::SetSortByToSortByValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_SetSortByToSortByCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortByToSortByCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSortByToSortByCell();
      }
    else
      {
      op->vtkHyperOctreeCutter::SetSortByToSortByCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_GetSortByAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetSortByAsString() :
      op->vtkHyperOctreeCutter::GetSortByAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCutter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCutter *op = static_cast<vtkHyperOctreeCutter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkHyperOctreeCutter::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperOctreeCutter_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperOctreeCutter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperOctreeCutter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperOctreeCutter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHyperOctreeCutter\nC++: vtkHyperOctreeCutter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperOctreeCutter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperOctreeCutter\nC++: vtkHyperOctreeCutter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetValue", PyvtkHyperOctreeCutter_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(int i, double value)\n\nSet a particular contour value at contour number i. The index i\nranges between 0<=i<NumberOfContours.\n"},
  {(char*)"GetValue", PyvtkHyperOctreeCutter_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> float\nC++: double GetValue(int i)\n\nGet the ith contour value.\n"},
  {(char*)"GetValues", PyvtkHyperOctreeCutter_GetValues, METH_VARARGS,
   (char*)"V.GetValues() -> (float, ...)\nC++: double *GetValues()\nV.GetValues([float, ...])\nC++: void GetValues(double *contourValues)\n\nGet a pointer to an array of contour values. There will be\nGetNumberOfContours() values in the list.\n"},
  {(char*)"SetNumberOfContours", PyvtkHyperOctreeCutter_SetNumberOfContours, METH_VARARGS,
   (char*)"V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int number)\n\nSet the number of contours to place into the list. You only\nreally need to use this method to reduce list size. The method\nSetValue() will automatically increase list size as needed.\n"},
  {(char*)"GetNumberOfContours", PyvtkHyperOctreeCutter_GetNumberOfContours, METH_VARARGS,
   (char*)"V.GetNumberOfContours() -> int\nC++: int GetNumberOfContours()\n\nGet the number of contours in the list of contour values.\n"},
  {(char*)"GenerateValues", PyvtkHyperOctreeCutter_GenerateValues, METH_VARARGS,
   (char*)"V.GenerateValues(int, [float, float])\nC++: void GenerateValues(int numContours, double range[2])\nV.GenerateValues(int, float, float)\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nGenerate numContours equally spaced contour values between\nspecified range. Contour values will include min/max range\nvalues.\n"},
  {(char*)"GetMTime", PyvtkHyperOctreeCutter_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride GetMTime because we delegate to vtkContourValues and\nrefer to vtkImplicitFunction.\n"},
  {(char*)"SetCutFunction", PyvtkHyperOctreeCutter_SetCutFunction, METH_VARARGS,
   (char*)"V.SetCutFunction(vtkImplicitFunction)\nC++: virtual void SetCutFunction(vtkImplicitFunction *)\n\n"},
  {(char*)"GetCutFunction", PyvtkHyperOctreeCutter_GetCutFunction, METH_VARARGS,
   (char*)"V.GetCutFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetCutFunction()\n\n"},
  {(char*)"SetGenerateCutScalars", PyvtkHyperOctreeCutter_SetGenerateCutScalars, METH_VARARGS,
   (char*)"V.SetGenerateCutScalars(int)\nC++: void SetGenerateCutScalars(int a)\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {(char*)"GetGenerateCutScalars", PyvtkHyperOctreeCutter_GetGenerateCutScalars, METH_VARARGS,
   (char*)"V.GetGenerateCutScalars() -> int\nC++: int GetGenerateCutScalars()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {(char*)"GenerateCutScalarsOn", PyvtkHyperOctreeCutter_GenerateCutScalarsOn, METH_VARARGS,
   (char*)"V.GenerateCutScalarsOn()\nC++: void GenerateCutScalarsOn()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {(char*)"GenerateCutScalarsOff", PyvtkHyperOctreeCutter_GenerateCutScalarsOff, METH_VARARGS,
   (char*)"V.GenerateCutScalarsOff()\nC++: void GenerateCutScalarsOff()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {(char*)"SetLocator", PyvtkHyperOctreeCutter_SetLocator, METH_VARARGS,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkHyperOctreeCutter_GetLocator, METH_VARARGS,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"SetSortBy", PyvtkHyperOctreeCutter_SetSortBy, METH_VARARGS,
   (char*)"V.SetSortBy(int)\nC++: void SetSortBy(int)\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"GetSortByMinValue", PyvtkHyperOctreeCutter_GetSortByMinValue, METH_VARARGS,
   (char*)"V.GetSortByMinValue() -> int\nC++: int GetSortByMinValue()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"GetSortByMaxValue", PyvtkHyperOctreeCutter_GetSortByMaxValue, METH_VARARGS,
   (char*)"V.GetSortByMaxValue() -> int\nC++: int GetSortByMaxValue()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"GetSortBy", PyvtkHyperOctreeCutter_GetSortBy, METH_VARARGS,
   (char*)"V.GetSortBy() -> int\nC++: int GetSortBy()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"SetSortByToSortByValue", PyvtkHyperOctreeCutter_SetSortByToSortByValue, METH_VARARGS,
   (char*)"V.SetSortByToSortByValue()\nC++: void SetSortByToSortByValue()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"SetSortByToSortByCell", PyvtkHyperOctreeCutter_SetSortByToSortByCell, METH_VARARGS,
   (char*)"V.SetSortByToSortByCell()\nC++: void SetSortByToSortByCell()\n\nSet the sorting order for the generated polydata. There are two\npossibilities:\n  Sort by value = 0 - This is the most efficient sort. For each\ncell,\n     all contour values are processed. This is the default.\n  Sort by cell = 1 - For each contour value, all cells are\nprocessed.\n     This order should be used if the extracted polygons must be\nrendered\n     in a back-to-front or front-to-back order. This is very\nproblem\n     dependent. For most applications, the default order is fine\n(and faster).\n\nSort by cell is going to have a problem if the input has 2D and\n3D cells. Cell data will be scrambled becauses with vtkPolyData\noutput, verts and lines have lower cell ids than triangles.\n"},
  {(char*)"GetSortByAsString", PyvtkHyperOctreeCutter_GetSortByAsString, METH_VARARGS,
   (char*)"V.GetSortByAsString() -> string\nC++: const char *GetSortByAsString()\n\nReturn the sorting procedure as a descriptive character string.\n"},
  {(char*)"CreateDefaultLocator", PyvtkHyperOctreeCutter_CreateDefaultLocator, METH_VARARGS,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperOctreeCutter_StaticNew()
{
  return vtkHyperOctreeCutter::New();
}

PyObject *PyVTKClass_vtkHyperOctreeCutterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperOctreeCutter_StaticNew,
    PyvtkHyperOctreeCutter_Methods,
    "vtkHyperOctreeCutter", modulename,
    NULL, NULL,
    PyvtkHyperOctreeCutter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHyperOctreeCutter_Doc()
{
  static const char *docstring[] = {
    "vtkHyperOctreeCutter - Cut vtkHyperOctree with user-specified\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkHyperOctreeCutter is a filter to cut through data using any\nsubclass of vtkImplicitFunction. That is, a polygonal surface is\ncreated corresponding to the implicit function F(x,y,z) = value(s),\nwhere you can specify one or more values used to cut with.\n\nIn VTK, cutting means reducing a cell of dimension N to a cut surface\nof dimension N-1. For example, a tetrahedron when cut by a plane\n(i.e., vt",
    "kPlane implicit function) will generate triangles. (In\ncomparison, clipping takes a N dimensional cell and creates N\ndimension primitives.)\n\nvtkHyperOctreeCutter is generally used to \"slice-through\" a dataset,\ngenerating a surface that can be visualized. It is also possible to\nuse vtkHyperOctreeCutter to do a form of volume rendering.\nvtkHyperOctreeCutter does this by generating multiple cut surfa",
    "ces\n(usually planes) which are ordered (and rendered) from back-to-front.\nThe surfaces are set translucent to give a volumetric rendering\neffect.\n\nNote that data can be cut using either 1) the scalar values\nassociated with the dataset or 2) an implicit function associated\nwith this class. By default, if an implicit function is set it is\nused to cut the data set, otherwise the dataset scalars are u",
    "sed to\nperform the cut.\n\nSee Also:\n\nvtkImplicitFunction vtkHyperOctree\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperOctreeCutter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperOctreeCutterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperOctreeCutter", o) != 0)
    {
    Py_DECREF(o);
    }

}

