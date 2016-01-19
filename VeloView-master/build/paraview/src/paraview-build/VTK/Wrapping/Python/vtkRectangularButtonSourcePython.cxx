// python wrapper for vtkRectangularButtonSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRectangularButtonSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRectangularButtonSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRectangularButtonSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkButtonSourceNew
extern "C" { PyObject *PyVTKClass_vtkButtonSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkButtonSourceNew
#endif

static const char **PyvtkRectangularButtonSource_Doc();


static PyObject *
PyvtkRectangularButtonSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRectangularButtonSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRectangularButtonSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRectangularButtonSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRectangularButtonSource::NewInstance());

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
PyvtkRectangularButtonSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRectangularButtonSource *tempr = vtkRectangularButtonSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWidth(temp0);
      }
    else
      {
      op->vtkRectangularButtonSource::SetWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetWidthMinValue() :
      op->vtkRectangularButtonSource::GetWidthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetWidthMaxValue() :
      op->vtkRectangularButtonSource::GetWidthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkRectangularButtonSource::GetWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeight(temp0);
      }
    else
      {
      op->vtkRectangularButtonSource::SetHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetHeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHeightMinValue() :
      op->vtkRectangularButtonSource::GetHeightMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetHeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHeightMaxValue() :
      op->vtkRectangularButtonSource::GetHeightMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkRectangularButtonSource::GetHeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepth(temp0);
      }
    else
      {
      op->vtkRectangularButtonSource::SetDepth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetDepthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDepthMinValue() :
      op->vtkRectangularButtonSource::GetDepthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetDepthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDepthMaxValue() :
      op->vtkRectangularButtonSource::GetDepthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDepth() :
      op->vtkRectangularButtonSource::GetDepth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetBoxRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBoxRatio(temp0);
      }
    else
      {
      op->vtkRectangularButtonSource::SetBoxRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetBoxRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBoxRatioMinValue() :
      op->vtkRectangularButtonSource::GetBoxRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetBoxRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBoxRatioMaxValue() :
      op->vtkRectangularButtonSource::GetBoxRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetBoxRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBoxRatio() :
      op->vtkRectangularButtonSource::GetBoxRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetTextureRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureRatio(temp0);
      }
    else
      {
      op->vtkRectangularButtonSource::SetTextureRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTextureRatioMinValue() :
      op->vtkRectangularButtonSource::GetTextureRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTextureRatioMaxValue() :
      op->vtkRectangularButtonSource::GetTextureRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTextureRatio() :
      op->vtkRectangularButtonSource::GetTextureRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetTextureHeightRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureHeightRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureHeightRatio(temp0);
      }
    else
      {
      op->vtkRectangularButtonSource::SetTextureHeightRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureHeightRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureHeightRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTextureHeightRatioMinValue() :
      op->vtkRectangularButtonSource::GetTextureHeightRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureHeightRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureHeightRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTextureHeightRatioMaxValue() :
      op->vtkRectangularButtonSource::GetTextureHeightRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureHeightRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureHeightRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTextureHeightRatio() :
      op->vtkRectangularButtonSource::GetTextureHeightRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

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
      op->vtkRectangularButtonSource::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkRectangularButtonSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRectangularButtonSource_Methods[] = {
  {(char*)"GetClassName", PyvtkRectangularButtonSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRectangularButtonSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRectangularButtonSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRectangularButtonSource\nC++: vtkRectangularButtonSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRectangularButtonSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRectangularButtonSource\nC++: vtkRectangularButtonSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWidth", PyvtkRectangularButtonSource_SetWidth, METH_VARARGS,
   (char*)"V.SetWidth(float)\nC++: void SetWidth(double)\n\nSet/Get the width of the button.\n"},
  {(char*)"GetWidthMinValue", PyvtkRectangularButtonSource_GetWidthMinValue, METH_VARARGS,
   (char*)"V.GetWidthMinValue() -> float\nC++: double GetWidthMinValue()\n\nSet/Get the width of the button.\n"},
  {(char*)"GetWidthMaxValue", PyvtkRectangularButtonSource_GetWidthMaxValue, METH_VARARGS,
   (char*)"V.GetWidthMaxValue() -> float\nC++: double GetWidthMaxValue()\n\nSet/Get the width of the button.\n"},
  {(char*)"GetWidth", PyvtkRectangularButtonSource_GetWidth, METH_VARARGS,
   (char*)"V.GetWidth() -> float\nC++: double GetWidth()\n\nSet/Get the width of the button.\n"},
  {(char*)"SetHeight", PyvtkRectangularButtonSource_SetHeight, METH_VARARGS,
   (char*)"V.SetHeight(float)\nC++: void SetHeight(double)\n\nSet/Get the height of the button.\n"},
  {(char*)"GetHeightMinValue", PyvtkRectangularButtonSource_GetHeightMinValue, METH_VARARGS,
   (char*)"V.GetHeightMinValue() -> float\nC++: double GetHeightMinValue()\n\nSet/Get the height of the button.\n"},
  {(char*)"GetHeightMaxValue", PyvtkRectangularButtonSource_GetHeightMaxValue, METH_VARARGS,
   (char*)"V.GetHeightMaxValue() -> float\nC++: double GetHeightMaxValue()\n\nSet/Get the height of the button.\n"},
  {(char*)"GetHeight", PyvtkRectangularButtonSource_GetHeight, METH_VARARGS,
   (char*)"V.GetHeight() -> float\nC++: double GetHeight()\n\nSet/Get the height of the button.\n"},
  {(char*)"SetDepth", PyvtkRectangularButtonSource_SetDepth, METH_VARARGS,
   (char*)"V.SetDepth(float)\nC++: void SetDepth(double)\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {(char*)"GetDepthMinValue", PyvtkRectangularButtonSource_GetDepthMinValue, METH_VARARGS,
   (char*)"V.GetDepthMinValue() -> float\nC++: double GetDepthMinValue()\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {(char*)"GetDepthMaxValue", PyvtkRectangularButtonSource_GetDepthMaxValue, METH_VARARGS,
   (char*)"V.GetDepthMaxValue() -> float\nC++: double GetDepthMaxValue()\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {(char*)"GetDepth", PyvtkRectangularButtonSource_GetDepth, METH_VARARGS,
   (char*)"V.GetDepth() -> float\nC++: double GetDepth()\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {(char*)"SetBoxRatio", PyvtkRectangularButtonSource_SetBoxRatio, METH_VARARGS,
   (char*)"V.SetBoxRatio(float)\nC++: void SetBoxRatio(double)\n\nSet/Get the ratio of the bottom of the button with the shoulder\nregion. Numbers greater than one produce buttons with a wider\nbottom than shoulder; ratios less than one produce buttons that\nhave a wider shoulder than bottom.\n"},
  {(char*)"GetBoxRatioMinValue", PyvtkRectangularButtonSource_GetBoxRatioMinValue, METH_VARARGS,
   (char*)"V.GetBoxRatioMinValue() -> float\nC++: double GetBoxRatioMinValue()\n\nSet/Get the ratio of the bottom of the button with the shoulder\nregion. Numbers greater than one produce buttons with a wider\nbottom than shoulder; ratios less than one produce buttons that\nhave a wider shoulder than bottom.\n"},
  {(char*)"GetBoxRatioMaxValue", PyvtkRectangularButtonSource_GetBoxRatioMaxValue, METH_VARARGS,
   (char*)"V.GetBoxRatioMaxValue() -> float\nC++: double GetBoxRatioMaxValue()\n\nSet/Get the ratio of the bottom of the button with the shoulder\nregion. Numbers greater than one produce buttons with a wider\nbottom than shoulder; ratios less than one produce buttons that\nhave a wider shoulder than bottom.\n"},
  {(char*)"GetBoxRatio", PyvtkRectangularButtonSource_GetBoxRatio, METH_VARARGS,
   (char*)"V.GetBoxRatio() -> float\nC++: double GetBoxRatio()\n\nSet/Get the ratio of the bottom of the button with the shoulder\nregion. Numbers greater than one produce buttons with a wider\nbottom than shoulder; ratios less than one produce buttons that\nhave a wider shoulder than bottom.\n"},
  {(char*)"SetTextureRatio", PyvtkRectangularButtonSource_SetTextureRatio, METH_VARARGS,
   (char*)"V.SetTextureRatio(float)\nC++: void SetTextureRatio(double)\n\nSet/Get the ratio of the texture region to the shoulder region.\nThis number must be 0<=tr<=1. If the texture style is to fit the\nimage, then satisfying the texture ratio may only be possible in\none of the two directions (length or width) depending on the\ndimensions of the texture.\n"},
  {(char*)"GetTextureRatioMinValue", PyvtkRectangularButtonSource_GetTextureRatioMinValue, METH_VARARGS,
   (char*)"V.GetTextureRatioMinValue() -> float\nC++: double GetTextureRatioMinValue()\n\nSet/Get the ratio of the texture region to the shoulder region.\nThis number must be 0<=tr<=1. If the texture style is to fit the\nimage, then satisfying the texture ratio may only be possible in\none of the two directions (length or width) depending on the\ndimensions of the texture.\n"},
  {(char*)"GetTextureRatioMaxValue", PyvtkRectangularButtonSource_GetTextureRatioMaxValue, METH_VARARGS,
   (char*)"V.GetTextureRatioMaxValue() -> float\nC++: double GetTextureRatioMaxValue()\n\nSet/Get the ratio of the texture region to the shoulder region.\nThis number must be 0<=tr<=1. If the texture style is to fit the\nimage, then satisfying the texture ratio may only be possible in\none of the two directions (length or width) depending on the\ndimensions of the texture.\n"},
  {(char*)"GetTextureRatio", PyvtkRectangularButtonSource_GetTextureRatio, METH_VARARGS,
   (char*)"V.GetTextureRatio() -> float\nC++: double GetTextureRatio()\n\nSet/Get the ratio of the texture region to the shoulder region.\nThis number must be 0<=tr<=1. If the texture style is to fit the\nimage, then satisfying the texture ratio may only be possible in\none of the two directions (length or width) depending on the\ndimensions of the texture.\n"},
  {(char*)"SetTextureHeightRatio", PyvtkRectangularButtonSource_SetTextureHeightRatio, METH_VARARGS,
   (char*)"V.SetTextureHeightRatio(float)\nC++: void SetTextureHeightRatio(double)\n\nSet/Get the ratio of the height of the texture region to the\nshoulder height. Values greater than 1.0 yield convex buttons\nwith the texture region raised above the shoulder. Values less\nthan 1.0 yield concave buttons with the texture region below the\nshoulder.\n"},
  {(char*)"GetTextureHeightRatioMinValue", PyvtkRectangularButtonSource_GetTextureHeightRatioMinValue, METH_VARARGS,
   (char*)"V.GetTextureHeightRatioMinValue() -> float\nC++: double GetTextureHeightRatioMinValue()\n\nSet/Get the ratio of the height of the texture region to the\nshoulder height. Values greater than 1.0 yield convex buttons\nwith the texture region raised above the shoulder. Values less\nthan 1.0 yield concave buttons with the texture region below the\nshoulder.\n"},
  {(char*)"GetTextureHeightRatioMaxValue", PyvtkRectangularButtonSource_GetTextureHeightRatioMaxValue, METH_VARARGS,
   (char*)"V.GetTextureHeightRatioMaxValue() -> float\nC++: double GetTextureHeightRatioMaxValue()\n\nSet/Get the ratio of the height of the texture region to the\nshoulder height. Values greater than 1.0 yield convex buttons\nwith the texture region raised above the shoulder. Values less\nthan 1.0 yield concave buttons with the texture region below the\nshoulder.\n"},
  {(char*)"GetTextureHeightRatio", PyvtkRectangularButtonSource_GetTextureHeightRatio, METH_VARARGS,
   (char*)"V.GetTextureHeightRatio() -> float\nC++: double GetTextureHeightRatio()\n\nSet/Get the ratio of the height of the texture region to the\nshoulder height. Values greater than 1.0 yield convex buttons\nwith the texture region raised above the shoulder. Values less\nthan 1.0 yield concave buttons with the texture region below the\nshoulder.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkRectangularButtonSource_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkRectangularButtonSource_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRectangularButtonSource_StaticNew()
{
  return vtkRectangularButtonSource::New();
}

PyObject *PyVTKClass_vtkRectangularButtonSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRectangularButtonSource_StaticNew,
    PyvtkRectangularButtonSource_Methods,
    "vtkRectangularButtonSource", modulename,
    NULL, NULL,
    PyvtkRectangularButtonSource_Doc(),
    PyVTKClass_vtkButtonSourceNew(modulename));
  return cls;
}

const char **PyvtkRectangularButtonSource_Doc()
{
  static const char *docstring[] = {
    "vtkRectangularButtonSource - create a rectangular button\n\n",
    "Superclass: vtkButtonSource\n\n",
    "vtkRectangularButtonSource creates a rectangular shaped button with\ntexture coordinates suitable for application of a texture map. This\nprovides a way to make nice looking 3D buttons. The buttons are\nrepresented as vtkPolyData that includes texture coordinates and\nnormals. The button lies in the x-y plane.\n\nTo use this class you must define its width, height and length. These\nmeasurements are all ",
    "taken with respect to the shoulder of the\nbutton. The shoulder is defined as follows. Imagine a box sitting on\nthe floor. The distance from the floor to the top of the box is the\ndepth; the other directions are the length (x-direction) and height\n(y-direction). In this particular widget the box can have a smaller\nbottom than top. The ratio in size between bottom and top is called\nthe box ratio (by",
    " default=1.0). The ratio of the texture region to\nthe shoulder region is the texture ratio. And finally the texture\nregion may be out of plane compared to the shoulder. The texture\nheight ratio controls this.\n\nCaveats:\n\nThe button is defined in the x-y plane. Use\nvtkTransformPolyDataFilter or vtkGlyph3D to orient the button in a\ndifferent direction.\n\nSee Also:\n\nvtkButtonSource vtkEllipticalButtonS",
    "ource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRectangularButtonSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRectangularButtonSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectangularButtonSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

