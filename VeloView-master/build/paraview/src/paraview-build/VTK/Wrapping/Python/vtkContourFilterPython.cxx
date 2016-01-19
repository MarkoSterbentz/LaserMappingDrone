// python wrapper for vtkContourFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkContourFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkContourFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkContourFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkContourFilter_Doc();


static PyObject *
PyvtkContourFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkContourFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContourFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContourFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContourFilter::NewInstance());

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
PyvtkContourFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkContourFilter *tempr = vtkContourFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

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
      op->vtkContourFilter::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkContourFilter::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkContourFilter::GetValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContourFilter_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

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
      op->vtkContourFilter::GetValues(temp0);
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
PyvtkContourFilter_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkContourFilter_GetValues_s1(self, args);
    case 1:
      return PyvtkContourFilter_GetValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return NULL;
}



static PyObject *
PyvtkContourFilter_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

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
      op->vtkContourFilter::SetNumberOfContours(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkContourFilter::GetNumberOfContours());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

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
      op->vtkContourFilter::GenerateValues(temp0, temp1);
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
PyvtkContourFilter_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

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
      op->vtkContourFilter::GenerateValues(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContourFilter_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkContourFilter_GenerateValues_s1(self, args);
    case 3:
      return PyvtkContourFilter_GenerateValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return NULL;
}



static PyObject *
PyvtkContourFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkContourFilter::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeNormals(temp0);
      }
    else
      {
      op->vtkContourFilter::SetComputeNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeNormals() :
      op->vtkContourFilter::GetComputeNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNormalsOn();
      }
    else
      {
      op->vtkContourFilter::ComputeNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNormalsOff();
      }
    else
      {
      op->vtkContourFilter::ComputeNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_SetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeGradients(temp0);
      }
    else
      {
      op->vtkContourFilter::SetComputeGradients(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_GetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeGradients() :
      op->vtkContourFilter::GetComputeGradients());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_ComputeGradientsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeGradientsOn();
      }
    else
      {
      op->vtkContourFilter::ComputeGradientsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_ComputeGradientsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeGradientsOff();
      }
    else
      {
      op->vtkContourFilter::ComputeGradientsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_SetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeScalars(temp0);
      }
    else
      {
      op->vtkContourFilter::SetComputeScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_GetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeScalars() :
      op->vtkContourFilter::GetComputeScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_ComputeScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeScalarsOn();
      }
    else
      {
      op->vtkContourFilter::ComputeScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_ComputeScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeScalarsOff();
      }
    else
      {
      op->vtkContourFilter::ComputeScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_SetUseScalarTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseScalarTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseScalarTree(temp0);
      }
    else
      {
      op->vtkContourFilter::SetUseScalarTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_GetUseScalarTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseScalarTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseScalarTree() :
      op->vtkContourFilter::GetUseScalarTree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_UseScalarTreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseScalarTreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseScalarTreeOn();
      }
    else
      {
      op->vtkContourFilter::UseScalarTreeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_UseScalarTreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseScalarTreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseScalarTreeOff();
      }
    else
      {
      op->vtkContourFilter::UseScalarTreeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_SetScalarTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  vtkScalarTree *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarTree"))
    {
    if (ap.IsBound())
      {
      op->SetScalarTree(temp0);
      }
    else
      {
      op->vtkContourFilter::SetScalarTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_GetScalarTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarTree *tempr = (ap.IsBound() ?
      op->GetScalarTree() :
      op->vtkContourFilter::GetScalarTree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

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
      op->vtkContourFilter::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkContourFilter::GetLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkContourFilter::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_SetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayComponent(temp0);
      }
    else
      {
      op->vtkContourFilter::SetArrayComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent() :
      op->vtkContourFilter::GetArrayComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_SetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

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
      op->vtkContourFilter::SetGenerateTriangles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_GetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTriangles() :
      op->vtkContourFilter::GetGenerateTriangles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_GenerateTrianglesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrianglesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateTrianglesOn();
      }
    else
      {
      op->vtkContourFilter::GenerateTrianglesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_GenerateTrianglesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrianglesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateTrianglesOff();
      }
    else
      {
      op->vtkContourFilter::GenerateTrianglesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

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
      op->vtkContourFilter::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourFilter *op = static_cast<vtkContourFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkContourFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkContourFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkContourFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkContourFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkContourFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkContourFilter\nC++: vtkContourFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkContourFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkContourFilter\nC++: vtkContourFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetValue", PyvtkContourFilter_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(int i, double value)\n\nMethods to set / get contour values.\n"},
  {(char*)"GetValue", PyvtkContourFilter_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> float\nC++: double GetValue(int i)\n\nMethods to set / get contour values.\n"},
  {(char*)"GetValues", PyvtkContourFilter_GetValues, METH_VARARGS,
   (char*)"V.GetValues() -> (float, ...)\nC++: double *GetValues()\nV.GetValues([float, ...])\nC++: void GetValues(double *contourValues)\n\nMethods to set / get contour values.\n"},
  {(char*)"SetNumberOfContours", PyvtkContourFilter_SetNumberOfContours, METH_VARARGS,
   (char*)"V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int number)\n\nMethods to set / get contour values.\n"},
  {(char*)"GetNumberOfContours", PyvtkContourFilter_GetNumberOfContours, METH_VARARGS,
   (char*)"V.GetNumberOfContours() -> int\nC++: int GetNumberOfContours()\n\nMethods to set / get contour values.\n"},
  {(char*)"GenerateValues", PyvtkContourFilter_GenerateValues, METH_VARARGS,
   (char*)"V.GenerateValues(int, [float, float])\nC++: void GenerateValues(int numContours, double range[2])\nV.GenerateValues(int, float, float)\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nMethods to set / get contour values.\n"},
  {(char*)"GetMTime", PyvtkContourFilter_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nModified GetMTime Because we delegate to vtkContourValues\n"},
  {(char*)"SetComputeNormals", PyvtkContourFilter_SetComputeNormals, METH_VARARGS,
   (char*)"V.SetComputeNormals(int)\nC++: void SetComputeNormals(int a)\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off. This setting defaults to\nOn for vtkImageData, vtkRectilinearGrid, vtkStructuredGrid, and\nvtkUnstructuredGrid inputs, and Off for all others. This default\nbehavior is to preserve the behavior of an older version of this\nfilter, which would ignore this setting for certain inputs.\n"},
  {(char*)"GetComputeNormals", PyvtkContourFilter_GetComputeNormals, METH_VARARGS,
   (char*)"V.GetComputeNormals() -> int\nC++: int GetComputeNormals()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off. This setting defaults to\nOn for vtkImageData, vtkRectilinearGrid, vtkStructuredGrid, and\nvtkUnstructuredGrid inputs, and Off for all others. This default\nbehavior is to preserve the behavior of an older version of this\nfilter, which would ignore this setting for certain inputs.\n"},
  {(char*)"ComputeNormalsOn", PyvtkContourFilter_ComputeNormalsOn, METH_VARARGS,
   (char*)"V.ComputeNormalsOn()\nC++: void ComputeNormalsOn()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off. This setting defaults to\nOn for vtkImageData, vtkRectilinearGrid, vtkStructuredGrid, and\nvtkUnstructuredGrid inputs, and Off for all others. This default\nbehavior is to preserve the behavior of an older version of this\nfilter, which would ignore this setting for certain inputs.\n"},
  {(char*)"ComputeNormalsOff", PyvtkContourFilter_ComputeNormalsOff, METH_VARARGS,
   (char*)"V.ComputeNormalsOff()\nC++: void ComputeNormalsOff()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off. This setting defaults to\nOn for vtkImageData, vtkRectilinearGrid, vtkStructuredGrid, and\nvtkUnstructuredGrid inputs, and Off for all others. This default\nbehavior is to preserve the behavior of an older version of this\nfilter, which would ignore this setting for certain inputs.\n"},
  {(char*)"SetComputeGradients", PyvtkContourFilter_SetComputeGradients, METH_VARARGS,
   (char*)"V.SetComputeGradients(int)\nC++: void SetComputeGradients(int a)\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {(char*)"GetComputeGradients", PyvtkContourFilter_GetComputeGradients, METH_VARARGS,
   (char*)"V.GetComputeGradients() -> int\nC++: int GetComputeGradients()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {(char*)"ComputeGradientsOn", PyvtkContourFilter_ComputeGradientsOn, METH_VARARGS,
   (char*)"V.ComputeGradientsOn()\nC++: void ComputeGradientsOn()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {(char*)"ComputeGradientsOff", PyvtkContourFilter_ComputeGradientsOff, METH_VARARGS,
   (char*)"V.ComputeGradientsOff()\nC++: void ComputeGradientsOff()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {(char*)"SetComputeScalars", PyvtkContourFilter_SetComputeScalars, METH_VARARGS,
   (char*)"V.SetComputeScalars(int)\nC++: void SetComputeScalars(int a)\n\nSet/Get the computation of scalars.\n"},
  {(char*)"GetComputeScalars", PyvtkContourFilter_GetComputeScalars, METH_VARARGS,
   (char*)"V.GetComputeScalars() -> int\nC++: int GetComputeScalars()\n\nSet/Get the computation of scalars.\n"},
  {(char*)"ComputeScalarsOn", PyvtkContourFilter_ComputeScalarsOn, METH_VARARGS,
   (char*)"V.ComputeScalarsOn()\nC++: void ComputeScalarsOn()\n\nSet/Get the computation of scalars.\n"},
  {(char*)"ComputeScalarsOff", PyvtkContourFilter_ComputeScalarsOff, METH_VARARGS,
   (char*)"V.ComputeScalarsOff()\nC++: void ComputeScalarsOff()\n\nSet/Get the computation of scalars.\n"},
  {(char*)"SetUseScalarTree", PyvtkContourFilter_SetUseScalarTree, METH_VARARGS,
   (char*)"V.SetUseScalarTree(int)\nC++: void SetUseScalarTree(int a)\n\nEnable the use of a scalar tree to accelerate contour extraction.\n"},
  {(char*)"GetUseScalarTree", PyvtkContourFilter_GetUseScalarTree, METH_VARARGS,
   (char*)"V.GetUseScalarTree() -> int\nC++: int GetUseScalarTree()\n\nEnable the use of a scalar tree to accelerate contour extraction.\n"},
  {(char*)"UseScalarTreeOn", PyvtkContourFilter_UseScalarTreeOn, METH_VARARGS,
   (char*)"V.UseScalarTreeOn()\nC++: void UseScalarTreeOn()\n\nEnable the use of a scalar tree to accelerate contour extraction.\n"},
  {(char*)"UseScalarTreeOff", PyvtkContourFilter_UseScalarTreeOff, METH_VARARGS,
   (char*)"V.UseScalarTreeOff()\nC++: void UseScalarTreeOff()\n\nEnable the use of a scalar tree to accelerate contour extraction.\n"},
  {(char*)"SetScalarTree", PyvtkContourFilter_SetScalarTree, METH_VARARGS,
   (char*)"V.SetScalarTree(vtkScalarTree)\nC++: virtual void SetScalarTree(vtkScalarTree *)\n\nEnable the use of a scalar tree to accelerate contour extraction.\n"},
  {(char*)"GetScalarTree", PyvtkContourFilter_GetScalarTree, METH_VARARGS,
   (char*)"V.GetScalarTree() -> vtkScalarTree\nC++: vtkScalarTree *GetScalarTree()\n\nEnable the use of a scalar tree to accelerate contour extraction.\n"},
  {(char*)"SetLocator", PyvtkContourFilter_SetLocator, METH_VARARGS,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkContourFilter_GetLocator, METH_VARARGS,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkContourFilter_CreateDefaultLocator, METH_VARARGS,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {(char*)"SetArrayComponent", PyvtkContourFilter_SetArrayComponent, METH_VARARGS,
   (char*)"V.SetArrayComponent(int)\nC++: void SetArrayComponent(int)\n\nSet/get which component of the scalar array to contour on;\ndefaults to 0. Currently this feature only works if the input is\na vtkImageData.\n"},
  {(char*)"GetArrayComponent", PyvtkContourFilter_GetArrayComponent, METH_VARARGS,
   (char*)"V.GetArrayComponent() -> int\nC++: int GetArrayComponent()\n\nSet/get which component of the scalar array to contour on;\ndefaults to 0. Currently this feature only works if the input is\na vtkImageData.\n"},
  {(char*)"SetGenerateTriangles", PyvtkContourFilter_SetGenerateTriangles, METH_VARARGS,
   (char*)"V.SetGenerateTriangles(int)\nC++: void SetGenerateTriangles(int a)\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygon WARNING:\nif the contour surface is not planar, the output polygon will not\nbe planar, which might be nice to look at but hard to compute\nwith downstream.\n"},
  {(char*)"GetGenerateTriangles", PyvtkContourFilter_GetGenerateTriangles, METH_VARARGS,
   (char*)"V.GetGenerateTriangles() -> int\nC++: int GetGenerateTriangles()\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygon WARNING:\nif the contour surface is not planar, the output polygon will not\nbe planar, which might be nice to look at but hard to compute\nwith downstream.\n"},
  {(char*)"GenerateTrianglesOn", PyvtkContourFilter_GenerateTrianglesOn, METH_VARARGS,
   (char*)"V.GenerateTrianglesOn()\nC++: void GenerateTrianglesOn()\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygon WARNING:\nif the contour surface is not planar, the output polygon will not\nbe planar, which might be nice to look at but hard to compute\nwith downstream.\n"},
  {(char*)"GenerateTrianglesOff", PyvtkContourFilter_GenerateTrianglesOff, METH_VARARGS,
   (char*)"V.GenerateTrianglesOff()\nC++: void GenerateTrianglesOff()\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygon WARNING:\nif the contour surface is not planar, the output polygon will not\nbe planar, which might be nice to look at but hard to compute\nwith downstream.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkContourFilter_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int precision)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkContourFilter_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkContourFilter_StaticNew()
{
  return vtkContourFilter::New();
}

PyObject *PyVTKClass_vtkContourFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkContourFilter_StaticNew,
    PyvtkContourFilter_Methods,
    "vtkContourFilter", modulename,
    NULL, NULL,
    PyvtkContourFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkContourFilter_Doc()
{
  static const char *docstring[] = {
    "vtkContourFilter - generate isosurfaces/isolines from scalar values\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkContourFilter is a filter that takes as input any dataset and\ngenerates on output isosurfaces and/or isolines. The exact form of\nthe output depends upon the dimensionality of the input data. Data\nconsisting of 3D cells will generate isosurfaces, data consisting of\n2D cells will generate isolines, and data with 1D or 0D cells will\ngenerate isopoints. Combinations of output type are possible if t",
    "he\ninput dimension is mixed.\n\nTo use this filter you must specify one or more contour values. You\ncan either use the method SetValue() to specify each contour value,\nor use GenerateValues() to generate a series of evenly spaced\ncontours. It is also possible to accelerate the operation of this\nfilter (at the cost of extra memory) by using a vtkScalarTree. A\nscalar tree is used to quickly locate cel",
    "ls that contain a contour\nsurface. This is especially effective if multiple contours are being\nextracted. If you want to use a scalar tree, invoke the method\nUseScalarTreeOn().\n\nCaveats:\n\nFor unstructured data or structured grids, normals and gradients are\nnot computed. Use vtkPolyDataNormals to compute the surface normals.\n\nSee Also:\n\nvtkMarchingContourFilter vtkMarchingCubes vtkSliceCubes\nvtkMar",
    "chingSquares vtkImageMarchingCubes\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContourFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContourFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContourFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

