// python wrapper for vtkProperty2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProperty2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProperty2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProperty2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkProperty2D_Doc();


static PyObject *
PyvtkProperty2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProperty2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProperty2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProperty2D::NewInstance());

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
PyvtkProperty2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProperty2D *tempr = vtkProperty2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkProperty2D::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

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
      op->SetColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkProperty2D::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty2D_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  double temp0[3];
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
      op->vtkProperty2D::SetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProperty2D_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkProperty2D_SetColor_s1(self, args);
    case 1:
      return PyvtkProperty2D_SetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkProperty2D_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkProperty2D::GetColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkProperty2D::GetOpacity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOpacity(temp0);
      }
    else
      {
      op->vtkProperty2D::SetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointSize(temp0);
      }
    else
      {
      op->vtkProperty2D::SetPointSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_GetPointSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetPointSizeMinValue() :
      op->vtkProperty2D::GetPointSizeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_GetPointSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetPointSizeMaxValue() :
      op->vtkProperty2D::GetPointSizeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_GetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetPointSize() :
      op->vtkProperty2D::GetPointSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineWidth(temp0);
      }
    else
      {
      op->vtkProperty2D::SetLineWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_GetLineWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetLineWidthMinValue() :
      op->vtkProperty2D::GetLineWidthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_GetLineWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetLineWidthMaxValue() :
      op->vtkProperty2D::GetLineWidthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_GetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetLineWidth() :
      op->vtkProperty2D::GetLineWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_SetLineStipplePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStipplePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineStipplePattern(temp0);
      }
    else
      {
      op->vtkProperty2D::SetLineStipplePattern(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_GetLineStipplePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStipplePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLineStipplePattern() :
      op->vtkProperty2D::GetLineStipplePattern());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_SetLineStippleRepeatFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStippleRepeatFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineStippleRepeatFactor(temp0);
      }
    else
      {
      op->vtkProperty2D::SetLineStippleRepeatFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_GetLineStippleRepeatFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStippleRepeatFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLineStippleRepeatFactorMinValue() :
      op->vtkProperty2D::GetLineStippleRepeatFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_GetLineStippleRepeatFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStippleRepeatFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLineStippleRepeatFactorMaxValue() :
      op->vtkProperty2D::GetLineStippleRepeatFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_GetLineStippleRepeatFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStippleRepeatFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLineStippleRepeatFactor() :
      op->vtkProperty2D::GetLineStippleRepeatFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_SetDisplayLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplayLocation(temp0);
      }
    else
      {
      op->vtkProperty2D::SetDisplayLocation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_GetDisplayLocationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayLocationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDisplayLocationMinValue() :
      op->vtkProperty2D::GetDisplayLocationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_GetDisplayLocationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayLocationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDisplayLocationMaxValue() :
      op->vtkProperty2D::GetDisplayLocationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_GetDisplayLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDisplayLocation() :
      op->vtkProperty2D::GetDisplayLocation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_SetDisplayLocationToBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayLocationToBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDisplayLocationToBackground();
      }
    else
      {
      op->vtkProperty2D::SetDisplayLocationToBackground();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_SetDisplayLocationToForeground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayLocationToForeground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDisplayLocationToForeground();
      }
    else
      {
      op->vtkProperty2D::SetDisplayLocationToForeground();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProperty2D_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0);
      }
    else
      {
      op->vtkProperty2D::Render(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProperty2D_Methods[] = {
  {(char*)"GetClassName", PyvtkProperty2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProperty2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProperty2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProperty2D\nC++: vtkProperty2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProperty2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProperty2D\nC++: vtkProperty2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DeepCopy", PyvtkProperty2D_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkProperty2D)\nC++: void DeepCopy(vtkProperty2D *p)\n\nAssign one property to another.\n"},
  {(char*)"SetColor", PyvtkProperty2D_SetColor, METH_VARARGS,
   (char*)"V.SetColor(float, float, float)\nC++: void SetColor(double, double, double)\nV.SetColor((float, float, float))\nC++: void SetColor(double a[3])\n\n"},
  {(char*)"GetColor", PyvtkProperty2D_GetColor, METH_VARARGS,
   (char*)"V.GetColor() -> (float, float, float)\nC++: double *GetColor()\n\n"},
  {(char*)"GetOpacity", PyvtkProperty2D_GetOpacity, METH_VARARGS,
   (char*)"V.GetOpacity() -> float\nC++: double GetOpacity()\n\nSet/Get the Opacity of this property.\n"},
  {(char*)"SetOpacity", PyvtkProperty2D_SetOpacity, METH_VARARGS,
   (char*)"V.SetOpacity(float)\nC++: void SetOpacity(double a)\n\nSet/Get the Opacity of this property.\n"},
  {(char*)"SetPointSize", PyvtkProperty2D_SetPointSize, METH_VARARGS,
   (char*)"V.SetPointSize(float)\nC++: void SetPointSize(float)\n\nSet/Get the diameter of a Point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {(char*)"GetPointSizeMinValue", PyvtkProperty2D_GetPointSizeMinValue, METH_VARARGS,
   (char*)"V.GetPointSizeMinValue() -> float\nC++: float GetPointSizeMinValue()\n\nSet/Get the diameter of a Point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {(char*)"GetPointSizeMaxValue", PyvtkProperty2D_GetPointSizeMaxValue, METH_VARARGS,
   (char*)"V.GetPointSizeMaxValue() -> float\nC++: float GetPointSizeMaxValue()\n\nSet/Get the diameter of a Point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {(char*)"GetPointSize", PyvtkProperty2D_GetPointSize, METH_VARARGS,
   (char*)"V.GetPointSize() -> float\nC++: float GetPointSize()\n\nSet/Get the diameter of a Point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {(char*)"SetLineWidth", PyvtkProperty2D_SetLineWidth, METH_VARARGS,
   (char*)"V.SetLineWidth(float)\nC++: void SetLineWidth(float)\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {(char*)"GetLineWidthMinValue", PyvtkProperty2D_GetLineWidthMinValue, METH_VARARGS,
   (char*)"V.GetLineWidthMinValue() -> float\nC++: float GetLineWidthMinValue()\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {(char*)"GetLineWidthMaxValue", PyvtkProperty2D_GetLineWidthMaxValue, METH_VARARGS,
   (char*)"V.GetLineWidthMaxValue() -> float\nC++: float GetLineWidthMaxValue()\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {(char*)"GetLineWidth", PyvtkProperty2D_GetLineWidth, METH_VARARGS,
   (char*)"V.GetLineWidth() -> float\nC++: float GetLineWidth()\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {(char*)"SetLineStipplePattern", PyvtkProperty2D_SetLineStipplePattern, METH_VARARGS,
   (char*)"V.SetLineStipplePattern(int)\nC++: void SetLineStipplePattern(int a)\n\nSet/Get the stippling pattern of a Line, as a 16-bit binary\npattern (1 = pixel on, 0 = pixel off). This is only implemented\nfor OpenGL. The default is 0xFFFF.\n"},
  {(char*)"GetLineStipplePattern", PyvtkProperty2D_GetLineStipplePattern, METH_VARARGS,
   (char*)"V.GetLineStipplePattern() -> int\nC++: int GetLineStipplePattern()\n\nSet/Get the stippling pattern of a Line, as a 16-bit binary\npattern (1 = pixel on, 0 = pixel off). This is only implemented\nfor OpenGL. The default is 0xFFFF.\n"},
  {(char*)"SetLineStippleRepeatFactor", PyvtkProperty2D_SetLineStippleRepeatFactor, METH_VARARGS,
   (char*)"V.SetLineStippleRepeatFactor(int)\nC++: void SetLineStippleRepeatFactor(int)\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL. The default is 1.\n"},
  {(char*)"GetLineStippleRepeatFactorMinValue", PyvtkProperty2D_GetLineStippleRepeatFactorMinValue, METH_VARARGS,
   (char*)"V.GetLineStippleRepeatFactorMinValue() -> int\nC++: int GetLineStippleRepeatFactorMinValue()\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL. The default is 1.\n"},
  {(char*)"GetLineStippleRepeatFactorMaxValue", PyvtkProperty2D_GetLineStippleRepeatFactorMaxValue, METH_VARARGS,
   (char*)"V.GetLineStippleRepeatFactorMaxValue() -> int\nC++: int GetLineStippleRepeatFactorMaxValue()\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL. The default is 1.\n"},
  {(char*)"GetLineStippleRepeatFactor", PyvtkProperty2D_GetLineStippleRepeatFactor, METH_VARARGS,
   (char*)"V.GetLineStippleRepeatFactor() -> int\nC++: int GetLineStippleRepeatFactor()\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL. The default is 1.\n"},
  {(char*)"SetDisplayLocation", PyvtkProperty2D_SetDisplayLocation, METH_VARARGS,
   (char*)"V.SetDisplayLocation(int)\nC++: void SetDisplayLocation(int)\n\nThe DisplayLocation is either background or foreground. If it is\nbackground, then this 2D actor will be drawn behind all 3D props\nor foreground 2D actors. If it is background, then this 2D actor\nwill be drawn in front of all 3D props and background 2D actors.\nWithin 2D actors of the same DisplayLocation type, order is\ndetermined by the order in which the 2D actors were added to the\nviewport.\n"},
  {(char*)"GetDisplayLocationMinValue", PyvtkProperty2D_GetDisplayLocationMinValue, METH_VARARGS,
   (char*)"V.GetDisplayLocationMinValue() -> int\nC++: int GetDisplayLocationMinValue()\n\nThe DisplayLocation is either background or foreground. If it is\nbackground, then this 2D actor will be drawn behind all 3D props\nor foreground 2D actors. If it is background, then this 2D actor\nwill be drawn in front of all 3D props and background 2D actors.\nWithin 2D actors of the same DisplayLocation type, order is\ndetermined by the order in which the 2D actors were added to the\nviewport.\n"},
  {(char*)"GetDisplayLocationMaxValue", PyvtkProperty2D_GetDisplayLocationMaxValue, METH_VARARGS,
   (char*)"V.GetDisplayLocationMaxValue() -> int\nC++: int GetDisplayLocationMaxValue()\n\nThe DisplayLocation is either background or foreground. If it is\nbackground, then this 2D actor will be drawn behind all 3D props\nor foreground 2D actors. If it is background, then this 2D actor\nwill be drawn in front of all 3D props and background 2D actors.\nWithin 2D actors of the same DisplayLocation type, order is\ndetermined by the order in which the 2D actors were added to the\nviewport.\n"},
  {(char*)"GetDisplayLocation", PyvtkProperty2D_GetDisplayLocation, METH_VARARGS,
   (char*)"V.GetDisplayLocation() -> int\nC++: int GetDisplayLocation()\n\nThe DisplayLocation is either background or foreground. If it is\nbackground, then this 2D actor will be drawn behind all 3D props\nor foreground 2D actors. If it is background, then this 2D actor\nwill be drawn in front of all 3D props and background 2D actors.\nWithin 2D actors of the same DisplayLocation type, order is\ndetermined by the order in which the 2D actors were added to the\nviewport.\n"},
  {(char*)"SetDisplayLocationToBackground", PyvtkProperty2D_SetDisplayLocationToBackground, METH_VARARGS,
   (char*)"V.SetDisplayLocationToBackground()\nC++: void SetDisplayLocationToBackground()\n\nThe DisplayLocation is either background or foreground. If it is\nbackground, then this 2D actor will be drawn behind all 3D props\nor foreground 2D actors. If it is background, then this 2D actor\nwill be drawn in front of all 3D props and background 2D actors.\nWithin 2D actors of the same DisplayLocation type, order is\ndetermined by the order in which the 2D actors were added to the\nviewport.\n"},
  {(char*)"SetDisplayLocationToForeground", PyvtkProperty2D_SetDisplayLocationToForeground, METH_VARARGS,
   (char*)"V.SetDisplayLocationToForeground()\nC++: void SetDisplayLocationToForeground()\n\nThe DisplayLocation is either background or foreground. If it is\nbackground, then this 2D actor will be drawn behind all 3D props\nor foreground 2D actors. If it is background, then this 2D actor\nwill be drawn in front of all 3D props and background 2D actors.\nWithin 2D actors of the same DisplayLocation type, order is\ndetermined by the order in which the 2D actors were added to the\nviewport.\n"},
  {(char*)"Render", PyvtkProperty2D_Render, METH_VARARGS,
   (char*)"V.Render(vtkViewport)\nC++: virtual void Render(vtkViewport *viewport)\n\nHave the device specific subclass render this property.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProperty2D_StaticNew()
{
  return vtkProperty2D::New();
}

PyObject *PyVTKClass_vtkProperty2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProperty2D_StaticNew,
    PyvtkProperty2D_Methods,
    "vtkProperty2D", modulename,
    NULL, NULL,
    PyvtkProperty2D_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkProperty2D_Doc()
{
  static const char *docstring[] = {
    "vtkProperty2D - represent surface properties of a 2D image\n\n",
    "Superclass: vtkObject\n\n",
    "vtkProperty2D contains properties used to render two dimensional\nimages and annotations.\n\nSee Also:\n\nvtkActor2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProperty2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProperty2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProperty2D", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_BACKGROUND_LOCATION", 0 },
        { "VTK_FOREGROUND_LOCATION", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

