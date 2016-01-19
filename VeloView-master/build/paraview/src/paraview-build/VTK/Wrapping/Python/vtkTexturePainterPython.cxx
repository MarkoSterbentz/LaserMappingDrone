// python wrapper for vtkTexturePainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTexturePainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTexturePainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTexturePainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPainterNew
extern "C" { PyObject *PyVTKClass_vtkPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPainterNew
#endif

static const char **PyvtkTexturePainter_Doc();


static PyObject *
PyvtkTexturePainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTexturePainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTexturePainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTexturePainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTexturePainter::NewInstance());

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
PyvtkTexturePainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTexturePainter *tempr = vtkTexturePainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_SLICE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SLICE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkTexturePainter::SLICE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_SLICE_MODE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SLICE_MODE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkTexturePainter::SLICE_MODE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_MAP_SCALARS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MAP_SCALARS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkTexturePainter::MAP_SCALARS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_LOOKUP_TABLE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LOOKUP_TABLE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationObjectBaseKey *tempr = vtkTexturePainter::LOOKUP_TABLE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_SCALAR_MODE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SCALAR_MODE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkTexturePainter::SCALAR_MODE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarMode(temp0);
      }
    else
      {
      op->vtkTexturePainter::SetScalarMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkTexturePainter::GetScalarMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_SCALAR_ARRAY_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SCALAR_ARRAY_NAME");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationStringKey *tempr = vtkTexturePainter::SCALAR_ARRAY_NAME();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_SetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarArrayName(temp0);
      }
    else
      {
      op->vtkTexturePainter::SetScalarArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_GetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetScalarArrayName() :
      op->vtkTexturePainter::GetScalarArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_SCALAR_ARRAY_INDEX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SCALAR_ARRAY_INDEX");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkTexturePainter::SCALAR_ARRAY_INDEX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_SetScalarArrayIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarArrayIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarArrayIndex(temp0);
      }
    else
      {
      op->vtkTexturePainter::SetScalarArrayIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_GetScalarArrayIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarArrayIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarArrayIndex() :
      op->vtkTexturePainter::GetScalarArrayIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_SetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSlice(temp0);
      }
    else
      {
      op->vtkTexturePainter::SetSlice(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_GetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSlice() :
      op->vtkTexturePainter::GetSlice());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_SetSliceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceMode(temp0);
      }
    else
      {
      op->vtkTexturePainter::SetSliceMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_GetSliceModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceModeMinValue() :
      op->vtkTexturePainter::GetSliceModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_GetSliceModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceModeMaxValue() :
      op->vtkTexturePainter::GetSliceModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_GetSliceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceMode() :
      op->vtkTexturePainter::GetSliceMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkTexturePainter::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_SetMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMapScalars(temp0);
      }
    else
      {
      op->vtkTexturePainter::SetMapScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_GetMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMapScalars() :
      op->vtkTexturePainter::GetMapScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_USE_XY_PLANE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "USE_XY_PLANE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkTexturePainter::USE_XY_PLANE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_SetUseXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseXYPlane(temp0);
      }
    else
      {
      op->vtkTexturePainter::SetUseXYPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_GetUseXYPlaneMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseXYPlaneMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseXYPlaneMinValue() :
      op->vtkTexturePainter::GetUseXYPlaneMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_GetUseXYPlaneMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseXYPlaneMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseXYPlaneMaxValue() :
      op->vtkTexturePainter::GetUseXYPlaneMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_UseXYPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseXYPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseXYPlaneOn();
      }
    else
      {
      op->vtkTexturePainter::UseXYPlaneOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_UseXYPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseXYPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseXYPlaneOff();
      }
    else
      {
      op->vtkTexturePainter::UseXYPlaneOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_GetUseXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseXYPlane() :
      op->vtkTexturePainter::GetUseXYPlane());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkTexturePainter::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturePainter_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkTexturePainter::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTexturePainter_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturePainter *op = static_cast<vtkTexturePainter *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0);
      }
    else
      {
      op->vtkTexturePainter::SetWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTexturePainter_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkTexturePainter_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkTexturePainter_SetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return NULL;
}


static PyMethodDef PyvtkTexturePainter_Methods[] = {
  {(char*)"GetClassName", PyvtkTexturePainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTexturePainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTexturePainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTexturePainter\nC++: vtkTexturePainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTexturePainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTexturePainter\nC++: vtkTexturePainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SLICE", PyvtkTexturePainter_SLICE, METH_VARARGS | METH_STATIC,
   (char*)"V.SLICE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *SLICE()\n\nSpecify the X, Y or Z slice to use. The slice mode dictates how\nthe data is slicde.\n"},
  {(char*)"SLICE_MODE", PyvtkTexturePainter_SLICE_MODE, METH_VARARGS | METH_STATIC,
   (char*)"V.SLICE_MODE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *SLICE_MODE()\n\nSpecify how the slices are obtained.\n"},
  {(char*)"MAP_SCALARS", PyvtkTexturePainter_MAP_SCALARS, METH_VARARGS | METH_STATIC,
   (char*)"V.MAP_SCALARS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *MAP_SCALARS()\n\nTurn on/off the mapping of color scalars through the lookup\ntable. The default is Off. If Off, unsigned char scalars will be\nused directly as texture. If On, scalars will be mapped through\nthe lookup table to generate 4-component unsigned char scalars.\nThis ivar does not affect other scalars like unsigned short,\nfloat, etc. These scalars are always mapped through lookup\ntables. Look at vtkTexture::MapColorScalarsThroughLookupTable for\nmore details.\n"},
  {(char*)"LOOKUP_TABLE", PyvtkTexturePainter_LOOKUP_TABLE, METH_VARARGS | METH_STATIC,
   (char*)"V.LOOKUP_TABLE() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *LOOKUP_TABLE()\n\nSet the lookuptable to use for scalar mapping. If none is\nspecified and the scalars are not unsigned char scalars, then a\ndefault lookup table will be created and used.\n"},
  {(char*)"SCALAR_MODE", PyvtkTexturePainter_SCALAR_MODE, METH_VARARGS | METH_STATIC,
   (char*)"V.SCALAR_MODE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *SCALAR_MODE()\n\nDetermines the whether the scalars are to be obtained from point\ndata or cell data. Look at the documentation for ScalarMode in\nvtkMapper for the different possible values and their effect.\n"},
  {(char*)"SetScalarMode", PyvtkTexturePainter_SetScalarMode, METH_VARARGS,
   (char*)"V.SetScalarMode(int)\nC++: void SetScalarMode(int a)\n\nDetermines the whether the scalars are to be obtained from point\ndata or cell data. Look at the documentation for ScalarMode in\nvtkMapper for the different possible values and their effect.\n"},
  {(char*)"GetScalarMode", PyvtkTexturePainter_GetScalarMode, METH_VARARGS,
   (char*)"V.GetScalarMode() -> int\nC++: int GetScalarMode()\n\nDetermines the whether the scalars are to be obtained from point\ndata or cell data. Look at the documentation for ScalarMode in\nvtkMapper for the different possible values and their effect.\n"},
  {(char*)"SCALAR_ARRAY_NAME", PyvtkTexturePainter_SCALAR_ARRAY_NAME, METH_VARARGS | METH_STATIC,
   (char*)"V.SCALAR_ARRAY_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *SCALAR_ARRAY_NAME()\n\nThese three keys help identify the scalar array. If\nSCALAR_ARRAY_NAME is absent or NULL, SCALAR_ARRAY_INDEX is used.\nNOTE: We are deliberately not adding support to select a\ncomponent to color with. That is now a property of the lookup\ntable and ideally must be set on the lookup table.\n"},
  {(char*)"SetScalarArrayName", PyvtkTexturePainter_SetScalarArrayName, METH_VARARGS,
   (char*)"V.SetScalarArrayName(string)\nC++: void SetScalarArrayName(char *)\n\nThese three keys help identify the scalar array. If\nSCALAR_ARRAY_NAME is absent or NULL, SCALAR_ARRAY_INDEX is used.\nNOTE: We are deliberately not adding support to select a\ncomponent to color with. That is now a property of the lookup\ntable and ideally must be set on the lookup table.\n"},
  {(char*)"GetScalarArrayName", PyvtkTexturePainter_GetScalarArrayName, METH_VARARGS,
   (char*)"V.GetScalarArrayName() -> string\nC++: char *GetScalarArrayName()\n\nThese three keys help identify the scalar array. If\nSCALAR_ARRAY_NAME is absent or NULL, SCALAR_ARRAY_INDEX is used.\nNOTE: We are deliberately not adding support to select a\ncomponent to color with. That is now a property of the lookup\ntable and ideally must be set on the lookup table.\n"},
  {(char*)"SCALAR_ARRAY_INDEX", PyvtkTexturePainter_SCALAR_ARRAY_INDEX, METH_VARARGS | METH_STATIC,
   (char*)"V.SCALAR_ARRAY_INDEX() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *SCALAR_ARRAY_INDEX()\n\nSepecify the index of the array to color with when scalar array\nname is absent or null.\n"},
  {(char*)"SetScalarArrayIndex", PyvtkTexturePainter_SetScalarArrayIndex, METH_VARARGS,
   (char*)"V.SetScalarArrayIndex(int)\nC++: void SetScalarArrayIndex(int a)\n\nSepecify the index of the array to color with when scalar array\nname is absent or null.\n"},
  {(char*)"GetScalarArrayIndex", PyvtkTexturePainter_GetScalarArrayIndex, METH_VARARGS,
   (char*)"V.GetScalarArrayIndex() -> int\nC++: int GetScalarArrayIndex()\n\nSepecify the index of the array to color with when scalar array\nname is absent or null.\n"},
  {(char*)"SetSlice", PyvtkTexturePainter_SetSlice, METH_VARARGS,
   (char*)"V.SetSlice(int)\nC++: void SetSlice(int a)\n\nGet/Set the Slice that needs to be rendering. This is applicable\nfor 3D images. If the Slice number is not valid, then the 0th\nslice is rendered.\n"},
  {(char*)"GetSlice", PyvtkTexturePainter_GetSlice, METH_VARARGS,
   (char*)"V.GetSlice() -> int\nC++: int GetSlice()\n\nGet/Set the Slice that needs to be rendering. This is applicable\nfor 3D images. If the Slice number is not valid, then the 0th\nslice is rendered.\n"},
  {(char*)"SetSliceMode", PyvtkTexturePainter_SetSliceMode, METH_VARARGS,
   (char*)"V.SetSliceMode(int)\nC++: void SetSliceMode(int)\n\nIndicates the direction in which the slices are made into 3D\ndata. If the input image is 2D, the the entire data is shown.\n"},
  {(char*)"GetSliceModeMinValue", PyvtkTexturePainter_GetSliceModeMinValue, METH_VARARGS,
   (char*)"V.GetSliceModeMinValue() -> int\nC++: int GetSliceModeMinValue()\n\nIndicates the direction in which the slices are made into 3D\ndata. If the input image is 2D, the the entire data is shown.\n"},
  {(char*)"GetSliceModeMaxValue", PyvtkTexturePainter_GetSliceModeMaxValue, METH_VARARGS,
   (char*)"V.GetSliceModeMaxValue() -> int\nC++: int GetSliceModeMaxValue()\n\nIndicates the direction in which the slices are made into 3D\ndata. If the input image is 2D, the the entire data is shown.\n"},
  {(char*)"GetSliceMode", PyvtkTexturePainter_GetSliceMode, METH_VARARGS,
   (char*)"V.GetSliceMode() -> int\nC++: int GetSliceMode()\n\nIndicates the direction in which the slices are made into 3D\ndata. If the input image is 2D, the the entire data is shown.\n"},
  {(char*)"SetLookupTable", PyvtkTexturePainter_SetLookupTable, METH_VARARGS,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *)\n\nSet the lookuptable to use.\n"},
  {(char*)"SetMapScalars", PyvtkTexturePainter_SetMapScalars, METH_VARARGS,
   (char*)"V.SetMapScalars(int)\nC++: void SetMapScalars(int a)\n\nSet if LUT must be used when scalars in the image can be directly\nused as colors. Look at\nvtkTexture::MapColorScalarsThroughLookupTable for more details.\n"},
  {(char*)"GetMapScalars", PyvtkTexturePainter_GetMapScalars, METH_VARARGS,
   (char*)"V.GetMapScalars() -> int\nC++: int GetMapScalars()\n\nSet if LUT must be used when scalars in the image can be directly\nused as colors. Look at\nvtkTexture::MapColorScalarsThroughLookupTable for more details.\n"},
  {(char*)"USE_XY_PLANE", PyvtkTexturePainter_USE_XY_PLANE, METH_VARARGS | METH_STATIC,
   (char*)"V.USE_XY_PLANE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *USE_XY_PLANE()\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default if Off.\n"},
  {(char*)"SetUseXYPlane", PyvtkTexturePainter_SetUseXYPlane, METH_VARARGS,
   (char*)"V.SetUseXYPlane(int)\nC++: void SetUseXYPlane(int)\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default if Off.\n"},
  {(char*)"GetUseXYPlaneMinValue", PyvtkTexturePainter_GetUseXYPlaneMinValue, METH_VARARGS,
   (char*)"V.GetUseXYPlaneMinValue() -> int\nC++: int GetUseXYPlaneMinValue()\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default if Off.\n"},
  {(char*)"GetUseXYPlaneMaxValue", PyvtkTexturePainter_GetUseXYPlaneMaxValue, METH_VARARGS,
   (char*)"V.GetUseXYPlaneMaxValue() -> int\nC++: int GetUseXYPlaneMaxValue()\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default if Off.\n"},
  {(char*)"UseXYPlaneOn", PyvtkTexturePainter_UseXYPlaneOn, METH_VARARGS,
   (char*)"V.UseXYPlaneOn()\nC++: void UseXYPlaneOn()\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default if Off.\n"},
  {(char*)"UseXYPlaneOff", PyvtkTexturePainter_UseXYPlaneOff, METH_VARARGS,
   (char*)"V.UseXYPlaneOff()\nC++: void UseXYPlaneOff()\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default if Off.\n"},
  {(char*)"GetUseXYPlane", PyvtkTexturePainter_GetUseXYPlane, METH_VARARGS,
   (char*)"V.GetUseXYPlane() -> int\nC++: int GetUseXYPlane()\n\nWhen set, the image slice is always rendered in the XY plane\n(Z==0) irrespective of the image bounds. Default if Off.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkTexturePainter_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\n"},
  {(char*)"SetWholeExtent", PyvtkTexturePainter_SetWholeExtent, METH_VARARGS,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTexturePainter_StaticNew()
{
  return vtkTexturePainter::New();
}

PyObject *PyVTKClass_vtkTexturePainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTexturePainter_StaticNew,
    PyvtkTexturePainter_Methods,
    "vtkTexturePainter", modulename,
    NULL, NULL,
    PyvtkTexturePainter_Doc(),
    PyVTKClass_vtkPainterNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "YZ_PLANE", vtkTexturePainter::YZ_PLANE },
          { "XZ_PLANE", vtkTexturePainter::XZ_PLANE },
          { "XY_PLANE", vtkTexturePainter::XY_PLANE },
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

const char **PyvtkTexturePainter_Doc()
{
  static const char *docstring[] = {
    "vtkTexturePainter - renders a slice of vtkImageData by loading the\n\n",
    "Superclass: vtkPainter\n\n",
    "vtkTexturePainter is a painter for vtkImageData. It can render a\nslice of image data by loading it as an texture and then displaying\nit on a quad. It uses the bounds of the slice to position the quad.\nUnlike other image data algorithms, this painter provides API to\nchoose the scalars to upload. If cell data is used, then cell centers\nare used to position the slice.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTexturePainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTexturePainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTexturePainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

