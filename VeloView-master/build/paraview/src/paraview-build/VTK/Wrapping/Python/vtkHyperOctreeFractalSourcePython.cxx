// python wrapper for vtkHyperOctreeFractalSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHyperOctreeFractalSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHyperOctreeFractalSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHyperOctreeFractalSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkHyperOctreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkHyperOctreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkHyperOctreeAlgorithmNew
#endif

static const char **PyvtkHyperOctreeFractalSource_Doc();


static PyObject *
PyvtkHyperOctreeFractalSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHyperOctreeFractalSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperOctreeFractalSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperOctreeFractalSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperOctreeFractalSource::NewInstance());

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
PyvtkHyperOctreeFractalSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHyperOctreeFractalSource *tempr = vtkHyperOctreeFractalSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLevel() :
      op->vtkHyperOctreeFractalSource::GetMaximumLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_SetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLevel(temp0);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetMaximumLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_SetMinimumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumLevel(temp0);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetMinimumLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetMinimumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMinimumLevel() :
      op->vtkHyperOctreeFractalSource::GetMinimumLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_SetProjectionAxes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetProjectionAxes(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetProjectionAxes(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeFractalSource_SetProjectionAxes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetProjectionAxes(temp0);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetProjectionAxes(temp0);
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

  return result;
}

static PyObject *
PyvtkHyperOctreeFractalSource_SetProjectionAxes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkHyperOctreeFractalSource_SetProjectionAxes_s1(self, args);
    case 1:
      return PyvtkHyperOctreeFractalSource_SetProjectionAxes_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetProjectionAxes");
  return NULL;
}



static PyObject *
PyvtkHyperOctreeFractalSource_GetProjectionAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetProjectionAxes() :
      op->vtkHyperOctreeFractalSource::GetProjectionAxes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_SetOriginCX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetOriginCX(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetOriginCX(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeFractalSource_SetOriginCX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOriginCX(temp0);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetOriginCX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeFractalSource_SetOriginCX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkHyperOctreeFractalSource_SetOriginCX_s1(self, args);
    case 1:
      return PyvtkHyperOctreeFractalSource_SetOriginCX_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOriginCX");
  return NULL;
}



static PyObject *
PyvtkHyperOctreeFractalSource_GetOriginCX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOriginCX() :
      op->vtkHyperOctreeFractalSource::GetOriginCX());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_SetSizeCX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetSizeCX(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetSizeCX(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeFractalSource_SetSizeCX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSizeCX(temp0);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetSizeCX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeFractalSource_SetSizeCX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkHyperOctreeFractalSource_SetSizeCX_s1(self, args);
    case 1:
      return PyvtkHyperOctreeFractalSource_SetSizeCX_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSizeCX");
  return NULL;
}



static PyObject *
PyvtkHyperOctreeFractalSource_GetSizeCX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSizeCX() :
      op->vtkHyperOctreeFractalSource::GetSizeCX());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_SetMaximumNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  unsigned short temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfIterations(temp0);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetMaximumNumberOfIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetMaximumNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned short tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfIterationsMinValue() :
      op->vtkHyperOctreeFractalSource::GetMaximumNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetMaximumNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned short tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfIterationsMaxValue() :
      op->vtkHyperOctreeFractalSource::GetMaximumNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetMaximumNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfIterations() :
      op->vtkHyperOctreeFractalSource::GetMaximumNumberOfIterations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimension(temp0);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetDimensionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimensionMinValue() :
      op->vtkHyperOctreeFractalSource::GetDimensionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetDimensionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimensionMaxValue() :
      op->vtkHyperOctreeFractalSource::GetDimensionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkHyperOctreeFractalSource::GetDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_SetSpanThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpanThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpanThreshold(temp0);
      }
    else
      {
      op->vtkHyperOctreeFractalSource::SetSpanThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeFractalSource_GetSpanThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpanThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeFractalSource *op = static_cast<vtkHyperOctreeFractalSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSpanThreshold() :
      op->vtkHyperOctreeFractalSource::GetSpanThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperOctreeFractalSource_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperOctreeFractalSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperOctreeFractalSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperOctreeFractalSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHyperOctreeFractalSource\nC++: vtkHyperOctreeFractalSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperOctreeFractalSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperOctreeFractalSource\nC++: vtkHyperOctreeFractalSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMaximumLevel", PyvtkHyperOctreeFractalSource_GetMaximumLevel, METH_VARARGS,
   (char*)"V.GetMaximumLevel() -> int\nC++: int GetMaximumLevel()\n\nReturn the maximum number of levels of the hyperoctree.\n\\post positive_result: result>=1\n"},
  {(char*)"SetMaximumLevel", PyvtkHyperOctreeFractalSource_SetMaximumLevel, METH_VARARGS,
   (char*)"V.SetMaximumLevel(int)\nC++: void SetMaximumLevel(int levels)\n\nSet the maximum number of levels of the hyperoctree. If\nGetMinLevels()>=levels, GetMinLevels() is changed to levels-1.\n\\pre positive_levels: levels>=1\n\\post is_set: this->GetLevels()==levels\n\\post min_is_valid: this->GetMinLevels()<this->GetLevels()\n"},
  {(char*)"SetMinimumLevel", PyvtkHyperOctreeFractalSource_SetMinimumLevel, METH_VARARGS,
   (char*)"V.SetMinimumLevel(int)\nC++: void SetMinimumLevel(int level)\n\nReturn the minimal number of levels of systematic subdivision.\n\\post positive_result: result>=0\n"},
  {(char*)"GetMinimumLevel", PyvtkHyperOctreeFractalSource_GetMinimumLevel, METH_VARARGS,
   (char*)"V.GetMinimumLevel() -> int\nC++: int GetMinimumLevel()\n\nReturn the minimal number of levels of systematic subdivision.\n\\post positive_result: result>=0\n"},
  {(char*)"SetProjectionAxes", PyvtkHyperOctreeFractalSource_SetProjectionAxes, METH_VARARGS,
   (char*)"V.SetProjectionAxes(int, int, int)\nC++: void SetProjectionAxes(int x, int y, int z)\nV.SetProjectionAxes([int, int, int])\nC++: void SetProjectionAxes(int a[3])\n\nSet the projection from  the 4D space (4 parameters / 2 imaginary\nnumbers) to the axes of the 3D Volume. 0=C_Real, 1=C_Imaginary,\n2=X_Real, 4=X_Imaginary\n"},
  {(char*)"GetProjectionAxes", PyvtkHyperOctreeFractalSource_GetProjectionAxes, METH_VARARGS,
   (char*)"V.GetProjectionAxes() -> (int, int, int)\nC++: int *GetProjectionAxes()\n\n"},
  {(char*)"SetOriginCX", PyvtkHyperOctreeFractalSource_SetOriginCX, METH_VARARGS,
   (char*)"V.SetOriginCX(float, float, float, float)\nC++: void SetOriginCX(double, double, double, double)\nV.SetOriginCX((float, float, float, float))\nC++: void SetOriginCX(double a[4])\n\n"},
  {(char*)"GetOriginCX", PyvtkHyperOctreeFractalSource_GetOriginCX, METH_VARARGS,
   (char*)"V.GetOriginCX() -> (float, float, float, float)\nC++: double *GetOriginCX()\n\n"},
  {(char*)"SetSizeCX", PyvtkHyperOctreeFractalSource_SetSizeCX, METH_VARARGS,
   (char*)"V.SetSizeCX(float, float, float, float)\nC++: void SetSizeCX(double, double, double, double)\nV.SetSizeCX((float, float, float, float))\nC++: void SetSizeCX(double a[4])\n\n"},
  {(char*)"GetSizeCX", PyvtkHyperOctreeFractalSource_GetSizeCX, METH_VARARGS,
   (char*)"V.GetSizeCX() -> (float, float, float, float)\nC++: double *GetSizeCX()\n\n"},
  {(char*)"SetMaximumNumberOfIterations", PyvtkHyperOctreeFractalSource_SetMaximumNumberOfIterations, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfIterations(int)\nC++: void SetMaximumNumberOfIterations(unsigned short)\n\nThe maximum number of cycles run to see if the value goes over 2\n"},
  {(char*)"GetMaximumNumberOfIterationsMinValue", PyvtkHyperOctreeFractalSource_GetMaximumNumberOfIterationsMinValue, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfIterationsMinValue() -> int\nC++: unsigned short GetMaximumNumberOfIterationsMinValue()\n\nThe maximum number of cycles run to see if the value goes over 2\n"},
  {(char*)"GetMaximumNumberOfIterationsMaxValue", PyvtkHyperOctreeFractalSource_GetMaximumNumberOfIterationsMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfIterationsMaxValue() -> int\nC++: unsigned short GetMaximumNumberOfIterationsMaxValue()\n\nThe maximum number of cycles run to see if the value goes over 2\n"},
  {(char*)"GetMaximumNumberOfIterations", PyvtkHyperOctreeFractalSource_GetMaximumNumberOfIterations, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfIterations() -> int\nC++: unsigned char GetMaximumNumberOfIterations()\n\nThe maximum number of cycles run to see if the value goes over 2\n"},
  {(char*)"SetDimension", PyvtkHyperOctreeFractalSource_SetDimension, METH_VARARGS,
   (char*)"V.SetDimension(int)\nC++: void SetDimension(int)\n\nCreate a 2D or 3D fractal.\n"},
  {(char*)"GetDimensionMinValue", PyvtkHyperOctreeFractalSource_GetDimensionMinValue, METH_VARARGS,
   (char*)"V.GetDimensionMinValue() -> int\nC++: int GetDimensionMinValue()\n\nCreate a 2D or 3D fractal.\n"},
  {(char*)"GetDimensionMaxValue", PyvtkHyperOctreeFractalSource_GetDimensionMaxValue, METH_VARARGS,
   (char*)"V.GetDimensionMaxValue() -> int\nC++: int GetDimensionMaxValue()\n\nCreate a 2D or 3D fractal.\n"},
  {(char*)"GetDimension", PyvtkHyperOctreeFractalSource_GetDimension, METH_VARARGS,
   (char*)"V.GetDimension() -> int\nC++: int GetDimension()\n\nCreate a 2D or 3D fractal.\n"},
  {(char*)"SetSpanThreshold", PyvtkHyperOctreeFractalSource_SetSpanThreshold, METH_VARARGS,
   (char*)"V.SetSpanThreshold(float)\nC++: void SetSpanThreshold(double a)\n\nControls when a leaf gets subdivided.  If the corner values span\na larger range than this value, the leaf is subdivided.  This\ndefaults to 2.\n"},
  {(char*)"GetSpanThreshold", PyvtkHyperOctreeFractalSource_GetSpanThreshold, METH_VARARGS,
   (char*)"V.GetSpanThreshold() -> float\nC++: double GetSpanThreshold()\n\nControls when a leaf gets subdivided.  If the corner values span\na larger range than this value, the leaf is subdivided.  This\ndefaults to 2.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperOctreeFractalSource_StaticNew()
{
  return vtkHyperOctreeFractalSource::New();
}

PyObject *PyVTKClass_vtkHyperOctreeFractalSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperOctreeFractalSource_StaticNew,
    PyvtkHyperOctreeFractalSource_Methods,
    "vtkHyperOctreeFractalSource", modulename,
    NULL, NULL,
    PyvtkHyperOctreeFractalSource_Doc(),
    PyVTKClass_vtkHyperOctreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHyperOctreeFractalSource_Doc()
{
  static const char *docstring[] = {
    "vtkHyperOctreeFractalSource - Create an octree from a fractal.\n\n",
    "Superclass: vtkHyperOctreeAlgorithm\n\n",
    "See Also:\n\nvtkHyperOctreeSampleFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperOctreeFractalSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperOctreeFractalSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperOctreeFractalSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

