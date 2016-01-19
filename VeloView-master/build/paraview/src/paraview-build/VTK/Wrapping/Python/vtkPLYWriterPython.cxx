// python wrapper for vtkPLYWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPLYWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPLYWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPLYWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkPLYWriter_Doc();


static PyObject *
PyvtkPLYWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPLYWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPLYWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPLYWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPLYWriter::NewInstance());

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
PyvtkPLYWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPLYWriter *tempr = vtkPLYWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrder(temp0);
      }
    else
      {
      op->vtkPLYWriter::SetDataByteOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetDataByteOrderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataByteOrderMinValue() :
      op->vtkPLYWriter::GetDataByteOrderMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetDataByteOrderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataByteOrderMaxValue() :
      op->vtkPLYWriter::GetDataByteOrderMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataByteOrder() :
      op->vtkPLYWriter::GetDataByteOrder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetDataByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrderToBigEndian();
      }
    else
      {
      op->vtkPLYWriter::SetDataByteOrderToBigEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetDataByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrderToLittleEndian();
      }
    else
      {
      op->vtkPLYWriter::SetDataByteOrderToLittleEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorMode(temp0);
      }
    else
      {
      op->vtkPLYWriter::SetColorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkPLYWriter::GetColorMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToDefault();
      }
    else
      {
      op->vtkPLYWriter::SetColorModeToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToUniformCellColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToUniformCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToUniformCellColor();
      }
    else
      {
      op->vtkPLYWriter::SetColorModeToUniformCellColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToUniformPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToUniformPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToUniformPointColor();
      }
    else
      {
      op->vtkPLYWriter::SetColorModeToUniformPointColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToUniformColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToUniformColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToUniformColor();
      }
    else
      {
      op->vtkPLYWriter::SetColorModeToUniformColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToOff();
      }
    else
      {
      op->vtkPLYWriter::SetColorModeToOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayName(temp0);
      }
    else
      {
      op->vtkPLYWriter::SetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkPLYWriter::GetArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComponent(temp0);
      }
    else
      {
      op->vtkPLYWriter::SetComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponentMinValue() :
      op->vtkPLYWriter::GetComponentMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponentMaxValue() :
      op->vtkPLYWriter::GetComponentMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponent() :
      op->vtkPLYWriter::GetComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

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
      op->vtkPLYWriter::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkPLYWriter::GetLookupTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPLYWriter::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPLYWriter_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  unsigned char temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0);
      }
    else
      {
      op->vtkPLYWriter::SetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPLYWriter_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPLYWriter_SetColor_s1(self, args);
    case 1:
      return PyvtkPLYWriter_SetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkPLYWriter_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkPLYWriter::GetColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkPLYWriter::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPLYWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkPLYWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPLYWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPLYWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkPLYWriter_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkPLYWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkPLYWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkPLYWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileType(temp0);
      }
    else
      {
      op->vtkPLYWriter::SetFileType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetFileTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMinValue() :
      op->vtkPLYWriter::GetFileTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetFileTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMaxValue() :
      op->vtkPLYWriter::GetFileTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFileType() :
      op->vtkPLYWriter::GetFileType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetFileTypeToASCII(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToASCII");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileTypeToASCII();
      }
    else
      {
      op->vtkPLYWriter::SetFileTypeToASCII();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetFileTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileTypeToBinary();
      }
    else
      {
      op->vtkPLYWriter::SetFileTypeToBinary();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPLYWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkPLYWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPLYWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPLYWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPLYWriter\nC++: vtkPLYWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPLYWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPLYWriter\nC++: vtkPLYWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDataByteOrder", PyvtkPLYWriter_SetDataByteOrder, METH_VARARGS,
   (char*)"V.SetDataByteOrder(int)\nC++: void SetDataByteOrder(int)\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {(char*)"GetDataByteOrderMinValue", PyvtkPLYWriter_GetDataByteOrderMinValue, METH_VARARGS,
   (char*)"V.GetDataByteOrderMinValue() -> int\nC++: int GetDataByteOrderMinValue()\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {(char*)"GetDataByteOrderMaxValue", PyvtkPLYWriter_GetDataByteOrderMaxValue, METH_VARARGS,
   (char*)"V.GetDataByteOrderMaxValue() -> int\nC++: int GetDataByteOrderMaxValue()\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {(char*)"GetDataByteOrder", PyvtkPLYWriter_GetDataByteOrder, METH_VARARGS,
   (char*)"V.GetDataByteOrder() -> int\nC++: int GetDataByteOrder()\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {(char*)"SetDataByteOrderToBigEndian", PyvtkPLYWriter_SetDataByteOrderToBigEndian, METH_VARARGS,
   (char*)"V.SetDataByteOrderToBigEndian()\nC++: void SetDataByteOrderToBigEndian()\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {(char*)"SetDataByteOrderToLittleEndian", PyvtkPLYWriter_SetDataByteOrderToLittleEndian, METH_VARARGS,
   (char*)"V.SetDataByteOrderToLittleEndian()\nC++: void SetDataByteOrderToLittleEndian()\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {(char*)"SetColorMode", PyvtkPLYWriter_SetColorMode, METH_VARARGS,
   (char*)"V.SetColorMode(int)\nC++: void SetColorMode(int a)\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type is not unsigned char, and a lookup table is provided,\nthen the array/component are mapped through the table to generate\nthree separate \"red\", \"green\" and \"blue\" properties in the PLY\nfile. The user can also set the ColorMode to specify a uniform\ncolor for the whole part (on a vertex colors, face colors, or\nboth. (Note: vertex colors or cell colors may be written,\ndepending on where the named array is found. If points and cells\nhave the arrays with the same name, then both colors will be\nwritten.)\n"},
  {(char*)"GetColorMode", PyvtkPLYWriter_GetColorMode, METH_VARARGS,
   (char*)"V.GetColorMode() -> int\nC++: int GetColorMode()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type is not unsigned char, and a lookup table is provided,\nthen the array/component are mapped through the table to generate\nthree separate \"red\", \"green\" and \"blue\" properties in the PLY\nfile. The user can also set the ColorMode to specify a uniform\ncolor for the whole part (on a vertex colors, face colors, or\nboth. (Note: vertex colors or cell colors may be written,\ndepending on where the named array is found. If points and cells\nhave the arrays with the same name, then both colors will be\nwritten.)\n"},
  {(char*)"SetColorModeToDefault", PyvtkPLYWriter_SetColorModeToDefault, METH_VARARGS,
   (char*)"V.SetColorModeToDefault()\nC++: void SetColorModeToDefault()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type is not unsigned char, and a lookup table is provided,\nthen the array/component are mapped through the table to generate\nthree separate \"red\", \"green\" and \"blue\" properties in the PLY\nfile. The user can also set the ColorMode to specify a uniform\ncolor for the whole part (on a vertex colors, face colors, or\nboth. (Note: vertex colors or cell colors may be written,\ndepending on where the named array is found. If points and cells\nhave the arrays with the same name, then both colors will be\nwritten.)\n"},
  {(char*)"SetColorModeToUniformCellColor", PyvtkPLYWriter_SetColorModeToUniformCellColor, METH_VARARGS,
   (char*)"V.SetColorModeToUniformCellColor()\nC++: void SetColorModeToUniformCellColor()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type is not unsigned char, and a lookup table is provided,\nthen the array/component are mapped through the table to generate\nthree separate \"red\", \"green\" and \"blue\" properties in the PLY\nfile. The user can also set the ColorMode to specify a uniform\ncolor for the whole part (on a vertex colors, face colors, or\nboth. (Note: vertex colors or cell colors may be written,\ndepending on where the named array is found. If points and cells\nhave the arrays with the same name, then both colors will be\nwritten.)\n"},
  {(char*)"SetColorModeToUniformPointColor", PyvtkPLYWriter_SetColorModeToUniformPointColor, METH_VARARGS,
   (char*)"V.SetColorModeToUniformPointColor()\nC++: void SetColorModeToUniformPointColor()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type is not unsigned char, and a lookup table is provided,\nthen the array/component are mapped through the table to generate\nthree separate \"red\", \"green\" and \"blue\" properties in the PLY\nfile. The user can also set the ColorMode to specify a uniform\ncolor for the whole part (on a vertex colors, face colors, or\nboth. (Note: vertex colors or cell colors may be written,\ndepending on where the named array is found. If points and cells\nhave the arrays with the same name, then both colors will be\nwritten.)\n"},
  {(char*)"SetColorModeToUniformColor", PyvtkPLYWriter_SetColorModeToUniformColor, METH_VARARGS,
   (char*)"V.SetColorModeToUniformColor()\nC++: void SetColorModeToUniformColor()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type is not unsigned char, and a lookup table is provided,\nthen the array/component are mapped through the table to generate\nthree separate \"red\", \"green\" and \"blue\" properties in the PLY\nfile. The user can also set the ColorMode to specify a uniform\ncolor for the whole part (on a vertex colors, face colors, or\nboth. (Note: vertex colors or cell colors may be written,\ndepending on where the named array is found. If points and cells\nhave the arrays with the same name, then both colors will be\nwritten.)\n"},
  {(char*)"SetColorModeToOff", PyvtkPLYWriter_SetColorModeToOff, METH_VARARGS,
   (char*)"V.SetColorModeToOff()\nC++: void SetColorModeToOff()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type is not unsigned char, and a lookup table is provided,\nthen the array/component are mapped through the table to generate\nthree separate \"red\", \"green\" and \"blue\" properties in the PLY\nfile. The user can also set the ColorMode to specify a uniform\ncolor for the whole part (on a vertex colors, face colors, or\nboth. (Note: vertex colors or cell colors may be written,\ndepending on where the named array is found. If points and cells\nhave the arrays with the same name, then both colors will be\nwritten.)\n"},
  {(char*)"SetArrayName", PyvtkPLYWriter_SetArrayName, METH_VARARGS,
   (char*)"V.SetArrayName(string)\nC++: void SetArrayName(char *)\n\nSpecify the array name to use to color the data.\n"},
  {(char*)"GetArrayName", PyvtkPLYWriter_GetArrayName, METH_VARARGS,
   (char*)"V.GetArrayName() -> string\nC++: char *GetArrayName()\n\nSpecify the array name to use to color the data.\n"},
  {(char*)"SetComponent", PyvtkPLYWriter_SetComponent, METH_VARARGS,
   (char*)"V.SetComponent(int)\nC++: void SetComponent(int)\n\nSpecify the array component to use to color the data.\n"},
  {(char*)"GetComponentMinValue", PyvtkPLYWriter_GetComponentMinValue, METH_VARARGS,
   (char*)"V.GetComponentMinValue() -> int\nC++: int GetComponentMinValue()\n\nSpecify the array component to use to color the data.\n"},
  {(char*)"GetComponentMaxValue", PyvtkPLYWriter_GetComponentMaxValue, METH_VARARGS,
   (char*)"V.GetComponentMaxValue() -> int\nC++: int GetComponentMaxValue()\n\nSpecify the array component to use to color the data.\n"},
  {(char*)"GetComponent", PyvtkPLYWriter_GetComponent, METH_VARARGS,
   (char*)"V.GetComponent() -> int\nC++: int GetComponent()\n\nSpecify the array component to use to color the data.\n"},
  {(char*)"SetLookupTable", PyvtkPLYWriter_SetLookupTable, METH_VARARGS,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *)\n\nA lookup table can be specified in order to convert data arrays\nto RGBA colors.\n"},
  {(char*)"GetLookupTable", PyvtkPLYWriter_GetLookupTable, METH_VARARGS,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nA lookup table can be specified in order to convert data arrays\nto RGBA colors.\n"},
  {(char*)"SetColor", PyvtkPLYWriter_SetColor, METH_VARARGS,
   (char*)"V.SetColor(int, int, int)\nC++: void SetColor(unsigned char, unsigned char, unsigned char)\nV.SetColor((int, int, int))\nC++: void SetColor(unsigned char a[3])\n\n"},
  {(char*)"GetColor", PyvtkPLYWriter_GetColor, METH_VARARGS,
   (char*)"V.GetColor() -> (int, int, int)\nC++: unsigned char *GetColor()\n\n"},
  {(char*)"GetInput", PyvtkPLYWriter_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkPolyData\nC++: vtkPolyData *GetInput()\nV.GetInput(int) -> vtkPolyData\nC++: vtkPolyData *GetInput(int port)\n\nGet the input to this writer.\n"},
  {(char*)"SetFileName", PyvtkPLYWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of vtk polygon data file to write.\n"},
  {(char*)"GetFileName", PyvtkPLYWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of vtk polygon data file to write.\n"},
  {(char*)"SetFileType", PyvtkPLYWriter_SetFileType, METH_VARARGS,
   (char*)"V.SetFileType(int)\nC++: void SetFileType(int)\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"GetFileTypeMinValue", PyvtkPLYWriter_GetFileTypeMinValue, METH_VARARGS,
   (char*)"V.GetFileTypeMinValue() -> int\nC++: int GetFileTypeMinValue()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"GetFileTypeMaxValue", PyvtkPLYWriter_GetFileTypeMaxValue, METH_VARARGS,
   (char*)"V.GetFileTypeMaxValue() -> int\nC++: int GetFileTypeMaxValue()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"GetFileType", PyvtkPLYWriter_GetFileType, METH_VARARGS,
   (char*)"V.GetFileType() -> int\nC++: int GetFileType()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"SetFileTypeToASCII", PyvtkPLYWriter_SetFileTypeToASCII, METH_VARARGS,
   (char*)"V.SetFileTypeToASCII()\nC++: void SetFileTypeToASCII()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"SetFileTypeToBinary", PyvtkPLYWriter_SetFileTypeToBinary, METH_VARARGS,
   (char*)"V.SetFileTypeToBinary()\nC++: void SetFileTypeToBinary()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPLYWriter_StaticNew()
{
  return vtkPLYWriter::New();
}

PyObject *PyVTKClass_vtkPLYWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPLYWriter_StaticNew,
    PyvtkPLYWriter_Methods,
    "vtkPLYWriter", modulename,
    NULL, NULL,
    PyvtkPLYWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkPLYWriter_Doc()
{
  static const char *docstring[] = {
    "vtkPLYWriter - write Stanford PLY file format\n\n",
    "Superclass: vtkWriter\n\n",
    "vtkPLYWriter writes polygonal data in Stanford University PLY format\n(see http://graphics.stanford.edu/data/3Dscanrep/). The data can be\nwritten in either binary (little or big endian) or ASCII\nrepresentation. As for PointData and CellData, vtkPLYWriter cannot\nhandle normals or vectors. It only handles RGB PointData and\nCellData. You need to set the name of the array (using SetName for\nthe array a",
    "nd SetArrayName for the writer). If the array is not a\nvtkUnsignedCharArray with 3 components, you need to specify a\nvtkLookupTable to map the scalars to RGB.\n\nCaveats:\n\nPLY does not handle big endian versus little endian correctly.\n\nSee Also:\n\nvtkPLYReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPLYWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPLYWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPLYWriter", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 7; c++)
    {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "VTK_LITTLE_ENDIAN", 0 },
        { "VTK_BIG_ENDIAN", 1 },
        { "VTK_COLOR_MODE_DEFAULT", 0 },
        { "VTK_COLOR_MODE_UNIFORM_CELL_COLOR", 1 },
        { "VTK_COLOR_MODE_UNIFORM_POINT_COLOR", 2 },
        { "VTK_COLOR_MODE_UNIFORM_COLOR", 3 },
        { "VTK_COLOR_MODE_OFF", 4 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

