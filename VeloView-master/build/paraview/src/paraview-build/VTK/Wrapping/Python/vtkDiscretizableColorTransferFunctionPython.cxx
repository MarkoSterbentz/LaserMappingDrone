// python wrapper for vtkDiscretizableColorTransferFunction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDiscretizableColorTransferFunction.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDiscretizableColorTransferFunction(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDiscretizableColorTransferFunctionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkColorTransferFunctionNew
extern "C" { PyObject *PyVTKClass_vtkColorTransferFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkColorTransferFunctionNew
#endif

static const char **PyvtkDiscretizableColorTransferFunction_Doc();


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDiscretizableColorTransferFunction::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDiscretizableColorTransferFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDiscretizableColorTransferFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDiscretizableColorTransferFunction::NewInstance());

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
PyvtkDiscretizableColorTransferFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDiscretizableColorTransferFunction *tempr = vtkDiscretizableColorTransferFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_IsOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsOpaque() :
      op->vtkDiscretizableColorTransferFunction::IsOpaque());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetIndexedColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  unsigned int temp0;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetIndexedColor(temp0, temp1);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::SetIndexedColor(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDiscretizableColorTransferFunction_SetIndexedColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  unsigned int temp0;
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
      op->SetIndexedColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::SetIndexedColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDiscretizableColorTransferFunction_SetIndexedColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDiscretizableColorTransferFunction_SetIndexedColor_s1(self, args);
    case 4:
      return PyvtkDiscretizableColorTransferFunction_SetIndexedColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetIndexedColor");
  return NULL;
}



static PyObject *
PyvtkDiscretizableColorTransferFunction_GetIndexedColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  vtkIdType temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetIndexedColor(temp0, temp1);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::GetIndexedColor(temp0, temp1);
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
PyvtkDiscretizableColorTransferFunction_SetNumberOfIndexedColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIndexedColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfIndexedColors(temp0);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::SetNumberOfIndexedColors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetNumberOfIndexedColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIndexedColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfIndexedColors() :
      op->vtkDiscretizableColorTransferFunction::GetNumberOfIndexedColors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_Build(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Build();
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::Build();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetDiscretize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiscretize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiscretize(temp0);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::SetDiscretize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetDiscretize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiscretize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDiscretize() :
      op->vtkDiscretizableColorTransferFunction::GetDiscretize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_DiscretizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DiscretizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DiscretizeOn();
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::DiscretizeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_DiscretizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DiscretizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DiscretizeOff();
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::DiscretizeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetUseLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseLogScale(temp0);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::SetUseLogScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetUseLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseLogScale() :
      op->vtkDiscretizableColorTransferFunction::GetUseLogScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfValues(temp0);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::SetNumberOfValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkDiscretizableColorTransferFunction::GetNumberOfValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_MapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->MapValue(temp0) :
      op->vtkDiscretizableColorTransferFunction::MapValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  double temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetColor(temp0, temp1);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::GetColor(temp0, temp1);
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
PyvtkDiscretizableColorTransferFunction_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOpacity(temp0) :
      op->vtkDiscretizableColorTransferFunction::GetOpacity(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_MapScalars_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  vtkDataArray *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->MapScalars(temp0, temp1, temp2) :
      op->vtkDiscretizableColorTransferFunction::MapScalars(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDiscretizableColorTransferFunction_MapScalars_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  vtkAbstractArray *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->MapScalars(temp0, temp1, temp2) :
      op->vtkDiscretizableColorTransferFunction::MapScalars(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDiscretizableColorTransferFunction_MapScalars_Methods[] = {
  {NULL, PyvtkDiscretizableColorTransferFunction_MapScalars_s1, METH_VARARGS,
   (char*)"@Oii *vtkDataArray"},
  {NULL, PyvtkDiscretizableColorTransferFunction_MapScalars_s2, METH_VARARGS,
   (char*)"@Oii *vtkAbstractArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDiscretizableColorTransferFunction_MapScalars(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDiscretizableColorTransferFunction_MapScalars_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "MapScalars");
  return NULL;
}



#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkDiscretizableColorTransferFunction_GetRGBPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetRGBPoints() :
      op->vtkDiscretizableColorTransferFunction::GetRGBPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAlpha(temp0);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::SetAlpha(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetNanColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

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
      op->SetNanColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::SetNanColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDiscretizableColorTransferFunction_SetNanColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetNanColor(temp0);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::SetNanColor(temp0);
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
PyvtkDiscretizableColorTransferFunction_SetNanColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDiscretizableColorTransferFunction_SetNanColor_s1(self, args);
    case 1:
      return PyvtkDiscretizableColorTransferFunction_SetNanColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNanColor");
  return NULL;
}



static PyObject *
PyvtkDiscretizableColorTransferFunction_UsingLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsingLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->UsingLogScale() :
      op->vtkDiscretizableColorTransferFunction::UsingLogScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetNumberOfAvailableColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAvailableColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfAvailableColors() :
      op->vtkDiscretizableColorTransferFunction::GetNumberOfAvailableColors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetScalarOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  vtkPiecewiseFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
    {
    if (ap.IsBound())
      {
      op->SetScalarOpacityFunction(temp0);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::SetScalarOpacityFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetScalarOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetScalarOpacityFunction() :
      op->vtkDiscretizableColorTransferFunction::GetScalarOpacityFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetEnableOpacityMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableOpacityMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableOpacityMapping(temp0);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::SetEnableOpacityMapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetEnableOpacityMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableOpacityMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEnableOpacityMapping() :
      op->vtkDiscretizableColorTransferFunction::GetEnableOpacityMapping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_EnableOpacityMappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableOpacityMappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableOpacityMappingOn();
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::EnableOpacityMappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_EnableOpacityMappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableOpacityMappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableOpacityMappingOff();
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::EnableOpacityMappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDiscretizableColorTransferFunction::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDiscretizableColorTransferFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkDiscretizableColorTransferFunction_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDiscretizableColorTransferFunction_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDiscretizableColorTransferFunction_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDiscretizableColorTransferFunction\nC++: vtkDiscretizableColorTransferFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDiscretizableColorTransferFunction_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDiscretizableColorTransferFunction\nC++: vtkDiscretizableColorTransferFunction *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"IsOpaque", PyvtkDiscretizableColorTransferFunction_IsOpaque, METH_VARARGS,
   (char*)"V.IsOpaque() -> int\nC++: int IsOpaque()\n\nReturns the negation of EnableOpacityMapping.\n"},
  {(char*)"SetIndexedColor", PyvtkDiscretizableColorTransferFunction_SetIndexedColor, METH_VARARGS,
   (char*)"V.SetIndexedColor(int, (float, float, float))\nC++: void SetIndexedColor(unsigned int index, const double rgb[3])\nV.SetIndexedColor(int, float, float, float)\nC++: void SetIndexedColor(unsigned int index, double r, double g,\n    double b)\n\nAdd colors to use when IndexedLookup is true.SetIndexedColor()\nwill automatically call SetNumberOfIndexedColors(index+1) if the\ncurrent number of indexed colors is not sufficient for the\nspecified index and all will be initialized to the RGB values\npassed to this call.\n"},
  {(char*)"GetIndexedColor", PyvtkDiscretizableColorTransferFunction_GetIndexedColor, METH_VARARGS,
   (char*)"V.GetIndexedColor(int, [float, float, float, float])\nC++: virtual void GetIndexedColor(vtkIdType i, double rgba[4])\n\nGet the \"indexed color\" assigned to an index.\n\nThe index is used in IndexedLookup mode to assign colors to\nannotations (in the order the annotations were set). Subclasses\nmust implement this and interpret how to treat the index.\nvtkLookupTable simply returns GetTableValue( index %\nthis->GetNumberOfTableValues()). vtkColorTransferFunction returns\nthe color assocated with node index % this->GetSize().\n\nNote that implementations *must* set the opacity (alpha)\ncomponent of the color, even if they do not provide opacity\nvalues in their colormaps. In that case, alpha = 1 should be\nused.\n"},
  {(char*)"SetNumberOfIndexedColors", PyvtkDiscretizableColorTransferFunction_SetNumberOfIndexedColors, METH_VARARGS,
   (char*)"V.SetNumberOfIndexedColors(int)\nC++: void SetNumberOfIndexedColors(unsigned int count)\n\nSet the number of indexed colors. These are used when\nIndexedLookup is true. If no indexed colors are specified, for\nbackwards compatibility, this class reverts to using the\nRGBPoints for colors.\n"},
  {(char*)"GetNumberOfIndexedColors", PyvtkDiscretizableColorTransferFunction_GetNumberOfIndexedColors, METH_VARARGS,
   (char*)"V.GetNumberOfIndexedColors() -> int\nC++: unsigned int GetNumberOfIndexedColors()\n\nSet the number of indexed colors. These are used when\nIndexedLookup is true. If no indexed colors are specified, for\nbackwards compatibility, this class reverts to using the\nRGBPoints for colors.\n"},
  {(char*)"Build", PyvtkDiscretizableColorTransferFunction_Build, METH_VARARGS,
   (char*)"V.Build()\nC++: virtual void Build()\n\nGenerate discretized lookup table, if applicable. This method\nmust be called after changes to the ColorTransferFunction\notherwise the discretized version will be inconsistent with the\nnon-discretized one.\n"},
  {(char*)"SetDiscretize", PyvtkDiscretizableColorTransferFunction_SetDiscretize, METH_VARARGS,
   (char*)"V.SetDiscretize(int)\nC++: void SetDiscretize(int a)\n\nSet if the values are to be mapped after discretization. The\nnumber of discrete values is set by using SetNumberOfValues().\nNot set by default, i.e. color value is determined by\ninterpolating at the scalar value.\n"},
  {(char*)"GetDiscretize", PyvtkDiscretizableColorTransferFunction_GetDiscretize, METH_VARARGS,
   (char*)"V.GetDiscretize() -> int\nC++: int GetDiscretize()\n\nSet if the values are to be mapped after discretization. The\nnumber of discrete values is set by using SetNumberOfValues().\nNot set by default, i.e. color value is determined by\ninterpolating at the scalar value.\n"},
  {(char*)"DiscretizeOn", PyvtkDiscretizableColorTransferFunction_DiscretizeOn, METH_VARARGS,
   (char*)"V.DiscretizeOn()\nC++: void DiscretizeOn()\n\nSet if the values are to be mapped after discretization. The\nnumber of discrete values is set by using SetNumberOfValues().\nNot set by default, i.e. color value is determined by\ninterpolating at the scalar value.\n"},
  {(char*)"DiscretizeOff", PyvtkDiscretizableColorTransferFunction_DiscretizeOff, METH_VARARGS,
   (char*)"V.DiscretizeOff()\nC++: void DiscretizeOff()\n\nSet if the values are to be mapped after discretization. The\nnumber of discrete values is set by using SetNumberOfValues().\nNot set by default, i.e. color value is determined by\ninterpolating at the scalar value.\n"},
  {(char*)"SetUseLogScale", PyvtkDiscretizableColorTransferFunction_SetUseLogScale, METH_VARARGS,
   (char*)"V.SetUseLogScale(int)\nC++: virtual void SetUseLogScale(int useLogScale)\n\nGet/Set if log scale must be used while mapping scalars to\ncolors. The default is 0.\n"},
  {(char*)"GetUseLogScale", PyvtkDiscretizableColorTransferFunction_GetUseLogScale, METH_VARARGS,
   (char*)"V.GetUseLogScale() -> int\nC++: int GetUseLogScale()\n\nGet/Set if log scale must be used while mapping scalars to\ncolors. The default is 0.\n"},
  {(char*)"SetNumberOfValues", PyvtkDiscretizableColorTransferFunction_SetNumberOfValues, METH_VARARGS,
   (char*)"V.SetNumberOfValues(int)\nC++: void SetNumberOfValues(vtkIdType a)\n\nSet the number of values i.e. colors to be generated in the\ndiscrete lookup table. This has no effect if Discretize is off.\nThe default is 256.\n"},
  {(char*)"GetNumberOfValues", PyvtkDiscretizableColorTransferFunction_GetNumberOfValues, METH_VARARGS,
   (char*)"V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nSet the number of values i.e. colors to be generated in the\ndiscrete lookup table. This has no effect if Discretize is off.\nThe default is 256.\n"},
  {(char*)"MapValue", PyvtkDiscretizableColorTransferFunction_MapValue, METH_VARARGS,
   (char*)"V.MapValue(float) -> (int, ...)\nC++: virtual unsigned char *MapValue(double v)\n\nMap one value through the lookup table and return a color defined\nas a RGBA unsigned char tuple (4 bytes).\n"},
  {(char*)"GetColor", PyvtkDiscretizableColorTransferFunction_GetColor, METH_VARARGS,
   (char*)"V.GetColor(float, [float, float, float])\nC++: virtual void GetColor(double v, double rgb[3])\n\nMap one value through the lookup table and return the color as an\nRGB array of doubles between 0 and 1.\n"},
  {(char*)"GetOpacity", PyvtkDiscretizableColorTransferFunction_GetOpacity, METH_VARARGS,
   (char*)"V.GetOpacity(float) -> float\nC++: virtual double GetOpacity(double v)\n\nReturn the opacity of a given scalar.\n"},
  {(char*)"MapScalars", PyvtkDiscretizableColorTransferFunction_MapScalars, METH_VARARGS,
   (char*)"V.MapScalars(vtkDataArray, int, int) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *MapScalars(\n    vtkDataArray *scalars, int colorMode, int component)\nV.MapScalars(vtkAbstractArray, int, int) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *MapScalars(\n    vtkAbstractArray *scalars, int colorMode, int component)\n\nInternal methods that map a data array into a 4-component,\nunsigned char RGBA array. The color mode determines the behavior\nof mapping. If VTK_COLOR_MODE_DEFAULT is set, then unsigned char\ndata arrays are treated as colors (and converted to RGBA if\nnecessary); otherwise, the data is mapped through this instance\nof ScalarsToColors. The offset is used for data arrays with more\nthan one component; it indicates which component to use to do the\nblending. When the component argument is -1, then the this object\nuses its own selected technique to change a vector into a scalar\nto map.\n\nWhen IndexedLookup (inherited from vtkScalarsToColors) is true,\nthe scalar opacity function is not used regardless\nofEnableOpacityMapping.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetRGBPoints", PyvtkDiscretizableColorTransferFunction_GetRGBPoints, METH_VARARGS,
   (char*)"V.GetRGBPoints() -> (float, ...)\nC++: double *GetRGBPoints()\n\nReturns the (x, r, g, b) values as an array.\nvtkColorTransferFunction::GetDataPointer(). Retained for\nbackwards compatibility.\\deprecated Use GetDataPointer() instead.\n"},
#endif
  {(char*)"SetAlpha", PyvtkDiscretizableColorTransferFunction_SetAlpha, METH_VARARGS,
   (char*)"V.SetAlpha(float)\nC++: virtual void SetAlpha(double alpha)\n\nSpecify an additional opacity (alpha) value to blend with. Values\n!= 1 modify the resulting color consistent with the requested\nform of the output. This is typically used by an actor in order\nto blend its opacity. Overridden to pass the alpha to the\ninternal vtkLookupTable.\n"},
  {(char*)"SetNanColor", PyvtkDiscretizableColorTransferFunction_SetNanColor, METH_VARARGS,
   (char*)"V.SetNanColor(float, float, float)\nC++: virtual void SetNanColor(double r, double g, double b)\nV.SetNanColor([float, float, float])\nC++: virtual void SetNanColor(double rgb[3])\n\nSet the color to use when a NaN (not a number) is encountered. \nThis is an RGB 3-tuple color of doubles in the range [0, 1].\nOverridden to pass the NanColor to the internal vtkLookupTable.\n"},
  {(char*)"UsingLogScale", PyvtkDiscretizableColorTransferFunction_UsingLogScale, METH_VARARGS,
   (char*)"V.UsingLogScale() -> int\nC++: virtual int UsingLogScale()\n\nThis should return 1 if the subclass is using log scale for\nmapping scalars to colors.\n"},
  {(char*)"GetNumberOfAvailableColors", PyvtkDiscretizableColorTransferFunction_GetNumberOfAvailableColors, METH_VARARGS,
   (char*)"V.GetNumberOfAvailableColors() -> int\nC++: virtual vtkIdType GetNumberOfAvailableColors()\n\nGet the number of available colors for mapping to.\n"},
  {(char*)"SetScalarOpacityFunction", PyvtkDiscretizableColorTransferFunction_SetScalarOpacityFunction, METH_VARARGS,
   (char*)"V.SetScalarOpacityFunction(vtkPiecewiseFunction)\nC++: virtual void SetScalarOpacityFunction(\n    vtkPiecewiseFunction *function)\n\nSet/get the opacity function to use.\n"},
  {(char*)"GetScalarOpacityFunction", PyvtkDiscretizableColorTransferFunction_GetScalarOpacityFunction, METH_VARARGS,
   (char*)"V.GetScalarOpacityFunction() -> vtkPiecewiseFunction\nC++: virtual vtkPiecewiseFunction *GetScalarOpacityFunction()\n\nSet/get the opacity function to use.\n"},
  {(char*)"SetEnableOpacityMapping", PyvtkDiscretizableColorTransferFunction_SetEnableOpacityMapping, METH_VARARGS,
   (char*)"V.SetEnableOpacityMapping(bool)\nC++: void SetEnableOpacityMapping(bool a)\n\nEnable/disable the usage of the scalar opacity function.\n"},
  {(char*)"GetEnableOpacityMapping", PyvtkDiscretizableColorTransferFunction_GetEnableOpacityMapping, METH_VARARGS,
   (char*)"V.GetEnableOpacityMapping() -> bool\nC++: bool GetEnableOpacityMapping()\n\nEnable/disable the usage of the scalar opacity function.\n"},
  {(char*)"EnableOpacityMappingOn", PyvtkDiscretizableColorTransferFunction_EnableOpacityMappingOn, METH_VARARGS,
   (char*)"V.EnableOpacityMappingOn()\nC++: void EnableOpacityMappingOn()\n\nEnable/disable the usage of the scalar opacity function.\n"},
  {(char*)"EnableOpacityMappingOff", PyvtkDiscretizableColorTransferFunction_EnableOpacityMappingOff, METH_VARARGS,
   (char*)"V.EnableOpacityMappingOff()\nC++: void EnableOpacityMappingOff()\n\nEnable/disable the usage of the scalar opacity function.\n"},
  {(char*)"GetMTime", PyvtkDiscretizableColorTransferFunction_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nOverridden to include the ScalarOpacityFunction's MTime.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDiscretizableColorTransferFunction_StaticNew()
{
  return vtkDiscretizableColorTransferFunction::New();
}

PyObject *PyVTKClass_vtkDiscretizableColorTransferFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDiscretizableColorTransferFunction_StaticNew,
    PyvtkDiscretizableColorTransferFunction_Methods,
    "vtkDiscretizableColorTransferFunction", modulename,
    NULL, NULL,
    PyvtkDiscretizableColorTransferFunction_Doc(),
    PyVTKClass_vtkColorTransferFunctionNew(modulename));
  return cls;
}

const char **PyvtkDiscretizableColorTransferFunction_Doc()
{
  static const char *docstring[] = {
    "vtkDiscretizableColorTransferFunction - a combination of\n\n",
    "Superclass: vtkColorTransferFunction\n\n",
    "This is a cross between a vtkColorTransferFunction and a\nvtkLookupTable selectively combining the functionality of both. This\nclass is a vtkColorTransferFunction allowing users to specify the RGB\ncontrol points that control the color transfer function. At the same\ntime, by settingDiscretize to 1 (true), one can force the transfer\nfunction to only haveNumberOfValues discrete colors.\n\nWhen IndexedLo",
    "okup is true, this class behaves differently. The\nannotated values are considered to the be only valid values for which\nentries in the color table should be returned. The colors for\nannotated values are those specified using AddIndexedColors.\nTypically, there must be at least as many indexed colors specified as\nthe annotations. For backwards compatibility, if no indexed-colors\nare specified, the c",
    "olors in the lookup Table are assigned to\nannotated values by taking the modulus of their index in the list of\nannotations. If a scalar value is not present in AnnotatedValues,\nthen NanColor will be used.\n\nNOTE: One must call Build() after making any changes to the points in\nthe ColorTransferFunction to ensure that the discrete and\nnon-discrete versions match up.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDiscretizableColorTransferFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDiscretizableColorTransferFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDiscretizableColorTransferFunction", o) != 0)
    {
    Py_DECREF(o);
    }

}

