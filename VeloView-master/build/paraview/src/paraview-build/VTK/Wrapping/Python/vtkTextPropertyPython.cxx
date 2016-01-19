// python wrapper for vtkTextProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTextProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTextProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTextPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTextProperty_Doc();


static PyObject *
PyvtkTextProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTextProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextProperty::NewInstance());

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
PyvtkTextProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTextProperty *tempr = vtkTextProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

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
      op->vtkTextProperty::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextProperty_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

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
      op->vtkTextProperty::SetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextProperty_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTextProperty_SetColor_s1(self, args);
    case 1:
      return PyvtkTextProperty_SetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkTextProperty_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkTextProperty::GetColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

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
      op->vtkTextProperty::SetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkTextProperty::GetOpacity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontFamilyAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFamilyAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFontFamilyAsString() :
      op->vtkTextProperty::GetFontFamilyAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextProperty_GetFontFamilyAsString_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFontFamilyAsString");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = vtkTextProperty::GetFontFamilyAsString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextProperty_GetFontFamilyAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkTextProperty_GetFontFamilyAsString_s1(self, args);
    case 1:
      return PyvtkTextProperty_GetFontFamilyAsString_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetFontFamilyAsString");
  return NULL;
}



static PyObject *
PyvtkTextProperty_SetFontFamilyAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFamilyAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFontFamilyAsString(temp0);
      }
    else
      {
      op->vtkTextProperty::SetFontFamilyAsString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFontFamily(temp0);
      }
    else
      {
      op->vtkTextProperty::SetFontFamily(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFontFamily() :
      op->vtkTextProperty::GetFontFamily());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontFamilyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFamilyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFontFamilyMinValue() :
      op->vtkTextProperty::GetFontFamilyMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontFamilyToArial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFamilyToArial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFontFamilyToArial();
      }
    else
      {
      op->vtkTextProperty::SetFontFamilyToArial();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontFamilyToCourier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFamilyToCourier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFontFamilyToCourier();
      }
    else
      {
      op->vtkTextProperty::SetFontFamilyToCourier();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontFamilyToTimes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFamilyToTimes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFontFamilyToTimes();
      }
    else
      {
      op->vtkTextProperty::SetFontFamilyToTimes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontFamilyFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFontFamilyFromString");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkTextProperty::GetFontFamilyFromString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFontFile() :
      op->vtkTextProperty::GetFontFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFontFile(temp0);
      }
    else
      {
      op->vtkTextProperty::SetFontFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFontSize(temp0);
      }
    else
      {
      op->vtkTextProperty::SetFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFontSizeMinValue() :
      op->vtkTextProperty::GetFontSizeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFontSizeMaxValue() :
      op->vtkTextProperty::GetFontSizeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFontSize() :
      op->vtkTextProperty::GetFontSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBold(temp0);
      }
    else
      {
      op->vtkTextProperty::SetBold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBold() :
      op->vtkTextProperty::GetBold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_BoldOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoldOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoldOn();
      }
    else
      {
      op->vtkTextProperty::BoldOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_BoldOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoldOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoldOff();
      }
    else
      {
      op->vtkTextProperty::BoldOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetItalic(temp0);
      }
    else
      {
      op->vtkTextProperty::SetItalic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetItalic() :
      op->vtkTextProperty::GetItalic());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_ItalicOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ItalicOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ItalicOn();
      }
    else
      {
      op->vtkTextProperty::ItalicOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_ItalicOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ItalicOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ItalicOff();
      }
    else
      {
      op->vtkTextProperty::ItalicOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShadow(temp0);
      }
    else
      {
      op->vtkTextProperty::SetShadow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShadow() :
      op->vtkTextProperty::GetShadow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_ShadowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShadowOn();
      }
    else
      {
      op->vtkTextProperty::ShadowOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_ShadowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShadowOff();
      }
    else
      {
      op->vtkTextProperty::ShadowOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetShadowOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadowOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetShadowOffset(temp0, temp1);
      }
    else
      {
      op->vtkTextProperty::SetShadowOffset(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextProperty_SetShadowOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadowOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetShadowOffset(temp0);
      }
    else
      {
      op->vtkTextProperty::SetShadowOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextProperty_SetShadowOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTextProperty_SetShadowOffset_s1(self, args);
    case 1:
      return PyvtkTextProperty_SetShadowOffset_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetShadowOffset");
  return NULL;
}



static PyObject *
PyvtkTextProperty_GetShadowOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadowOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetShadowOffset() :
      op->vtkTextProperty::GetShadowOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetShadowColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadowColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

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
      op->GetShadowColor(temp0);
      }
    else
      {
      op->vtkTextProperty::GetShadowColor(temp0);
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
PyvtkTextProperty_SetJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetJustification(temp0);
      }
    else
      {
      op->vtkTextProperty::SetJustification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetJustificationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJustificationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetJustificationMinValue() :
      op->vtkTextProperty::GetJustificationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetJustificationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJustificationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetJustificationMaxValue() :
      op->vtkTextProperty::GetJustificationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetJustification() :
      op->vtkTextProperty::GetJustification());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetJustificationToLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJustificationToLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetJustificationToLeft();
      }
    else
      {
      op->vtkTextProperty::SetJustificationToLeft();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetJustificationToCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJustificationToCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetJustificationToCentered();
      }
    else
      {
      op->vtkTextProperty::SetJustificationToCentered();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetJustificationToRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJustificationToRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetJustificationToRight();
      }
    else
      {
      op->vtkTextProperty::SetJustificationToRight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetJustificationAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJustificationAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetJustificationAsString() :
      op->vtkTextProperty::GetJustificationAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetVerticalJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVerticalJustification(temp0);
      }
    else
      {
      op->vtkTextProperty::SetVerticalJustification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetVerticalJustificationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalJustificationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVerticalJustificationMinValue() :
      op->vtkTextProperty::GetVerticalJustificationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetVerticalJustificationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalJustificationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVerticalJustificationMaxValue() :
      op->vtkTextProperty::GetVerticalJustificationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetVerticalJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVerticalJustification() :
      op->vtkTextProperty::GetVerticalJustification());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetVerticalJustificationToBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalJustificationToBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVerticalJustificationToBottom();
      }
    else
      {
      op->vtkTextProperty::SetVerticalJustificationToBottom();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetVerticalJustificationToCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalJustificationToCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVerticalJustificationToCentered();
      }
    else
      {
      op->vtkTextProperty::SetVerticalJustificationToCentered();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetVerticalJustificationToTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalJustificationToTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVerticalJustificationToTop();
      }
    else
      {
      op->vtkTextProperty::SetVerticalJustificationToTop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetVerticalJustificationAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalJustificationAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetVerticalJustificationAsString() :
      op->vtkTextProperty::GetVerticalJustificationAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientation(temp0);
      }
    else
      {
      op->vtkTextProperty::SetOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkTextProperty::GetOrientation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetLineSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineSpacing(temp0);
      }
    else
      {
      op->vtkTextProperty::SetLineSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetLineSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLineSpacing() :
      op->vtkTextProperty::GetLineSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_SetLineOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineOffset(temp0);
      }
    else
      {
      op->vtkTextProperty::SetLineOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_GetLineOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLineOffset() :
      op->vtkTextProperty::GetLineOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextProperty_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkTextProperty::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTextProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkTextProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTextProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTextProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTextProperty\nC++: vtkTextProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTextProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTextProperty\nC++: vtkTextProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetColor", PyvtkTextProperty_SetColor, METH_VARARGS,
   (char*)"V.SetColor(float, float, float)\nC++: void SetColor(double, double, double)\nV.SetColor((float, float, float))\nC++: void SetColor(double a[3])\n\n"},
  {(char*)"GetColor", PyvtkTextProperty_GetColor, METH_VARARGS,
   (char*)"V.GetColor() -> (float, float, float)\nC++: double *GetColor()\n\n"},
  {(char*)"SetOpacity", PyvtkTextProperty_SetOpacity, METH_VARARGS,
   (char*)"V.SetOpacity(float)\nC++: void SetOpacity(double a)\n\nSet/Get the text's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {(char*)"GetOpacity", PyvtkTextProperty_GetOpacity, METH_VARARGS,
   (char*)"V.GetOpacity() -> float\nC++: double GetOpacity()\n\nSet/Get the text's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {(char*)"GetFontFamilyAsString", PyvtkTextProperty_GetFontFamilyAsString, METH_VARARGS,
   (char*)"V.GetFontFamilyAsString() -> string\nC++: char *GetFontFamilyAsString()\nV.GetFontFamilyAsString(int) -> string\nC++: static const char *GetFontFamilyAsString(int f)\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {(char*)"SetFontFamilyAsString", PyvtkTextProperty_SetFontFamilyAsString, METH_VARARGS,
   (char*)"V.SetFontFamilyAsString(string)\nC++: void SetFontFamilyAsString(char *)\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {(char*)"SetFontFamily", PyvtkTextProperty_SetFontFamily, METH_VARARGS,
   (char*)"V.SetFontFamily(int)\nC++: void SetFontFamily(int t)\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {(char*)"GetFontFamily", PyvtkTextProperty_GetFontFamily, METH_VARARGS,
   (char*)"V.GetFontFamily() -> int\nC++: int GetFontFamily()\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {(char*)"GetFontFamilyMinValue", PyvtkTextProperty_GetFontFamilyMinValue, METH_VARARGS,
   (char*)"V.GetFontFamilyMinValue() -> int\nC++: int GetFontFamilyMinValue()\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {(char*)"SetFontFamilyToArial", PyvtkTextProperty_SetFontFamilyToArial, METH_VARARGS,
   (char*)"V.SetFontFamilyToArial()\nC++: void SetFontFamilyToArial()\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {(char*)"SetFontFamilyToCourier", PyvtkTextProperty_SetFontFamilyToCourier, METH_VARARGS,
   (char*)"V.SetFontFamilyToCourier()\nC++: void SetFontFamilyToCourier()\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {(char*)"SetFontFamilyToTimes", PyvtkTextProperty_SetFontFamilyToTimes, METH_VARARGS,
   (char*)"V.SetFontFamilyToTimes()\nC++: void SetFontFamilyToTimes()\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {(char*)"GetFontFamilyFromString", PyvtkTextProperty_GetFontFamilyFromString, METH_VARARGS | METH_STATIC,
   (char*)"V.GetFontFamilyFromString(string) -> int\nC++: static int GetFontFamilyFromString(const char *f)\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {(char*)"GetFontFile", PyvtkTextProperty_GetFontFile, METH_VARARGS,
   (char*)"V.GetFontFile() -> string\nC++: char *GetFontFile()\n\nThe absolute filepath to a local file containing a\nfreetype-readable font if GetFontFamily() return VTK_FONT_FILE.\nThe result is undefined for other values of GetFontFamily().\n"},
  {(char*)"SetFontFile", PyvtkTextProperty_SetFontFile, METH_VARARGS,
   (char*)"V.SetFontFile(string)\nC++: void SetFontFile(char *)\n\nThe absolute filepath to a local file containing a\nfreetype-readable font if GetFontFamily() return VTK_FONT_FILE.\nThe result is undefined for other values of GetFontFamily().\n"},
  {(char*)"SetFontSize", PyvtkTextProperty_SetFontSize, METH_VARARGS,
   (char*)"V.SetFontSize(int)\nC++: void SetFontSize(int)\n\nSet/Get the font size (in points).\n"},
  {(char*)"GetFontSizeMinValue", PyvtkTextProperty_GetFontSizeMinValue, METH_VARARGS,
   (char*)"V.GetFontSizeMinValue() -> int\nC++: int GetFontSizeMinValue()\n\nSet/Get the font size (in points).\n"},
  {(char*)"GetFontSizeMaxValue", PyvtkTextProperty_GetFontSizeMaxValue, METH_VARARGS,
   (char*)"V.GetFontSizeMaxValue() -> int\nC++: int GetFontSizeMaxValue()\n\nSet/Get the font size (in points).\n"},
  {(char*)"GetFontSize", PyvtkTextProperty_GetFontSize, METH_VARARGS,
   (char*)"V.GetFontSize() -> int\nC++: int GetFontSize()\n\nSet/Get the font size (in points).\n"},
  {(char*)"SetBold", PyvtkTextProperty_SetBold, METH_VARARGS,
   (char*)"V.SetBold(int)\nC++: void SetBold(int a)\n\nEnable/disable text bolding.\n"},
  {(char*)"GetBold", PyvtkTextProperty_GetBold, METH_VARARGS,
   (char*)"V.GetBold() -> int\nC++: int GetBold()\n\nEnable/disable text bolding.\n"},
  {(char*)"BoldOn", PyvtkTextProperty_BoldOn, METH_VARARGS,
   (char*)"V.BoldOn()\nC++: void BoldOn()\n\nEnable/disable text bolding.\n"},
  {(char*)"BoldOff", PyvtkTextProperty_BoldOff, METH_VARARGS,
   (char*)"V.BoldOff()\nC++: void BoldOff()\n\nEnable/disable text bolding.\n"},
  {(char*)"SetItalic", PyvtkTextProperty_SetItalic, METH_VARARGS,
   (char*)"V.SetItalic(int)\nC++: void SetItalic(int a)\n\nEnable/disable text italic.\n"},
  {(char*)"GetItalic", PyvtkTextProperty_GetItalic, METH_VARARGS,
   (char*)"V.GetItalic() -> int\nC++: int GetItalic()\n\nEnable/disable text italic.\n"},
  {(char*)"ItalicOn", PyvtkTextProperty_ItalicOn, METH_VARARGS,
   (char*)"V.ItalicOn()\nC++: void ItalicOn()\n\nEnable/disable text italic.\n"},
  {(char*)"ItalicOff", PyvtkTextProperty_ItalicOff, METH_VARARGS,
   (char*)"V.ItalicOff()\nC++: void ItalicOff()\n\nEnable/disable text italic.\n"},
  {(char*)"SetShadow", PyvtkTextProperty_SetShadow, METH_VARARGS,
   (char*)"V.SetShadow(int)\nC++: void SetShadow(int a)\n\nEnable/disable text shadow.\n"},
  {(char*)"GetShadow", PyvtkTextProperty_GetShadow, METH_VARARGS,
   (char*)"V.GetShadow() -> int\nC++: int GetShadow()\n\nEnable/disable text shadow.\n"},
  {(char*)"ShadowOn", PyvtkTextProperty_ShadowOn, METH_VARARGS,
   (char*)"V.ShadowOn()\nC++: void ShadowOn()\n\nEnable/disable text shadow.\n"},
  {(char*)"ShadowOff", PyvtkTextProperty_ShadowOff, METH_VARARGS,
   (char*)"V.ShadowOff()\nC++: void ShadowOff()\n\nEnable/disable text shadow.\n"},
  {(char*)"SetShadowOffset", PyvtkTextProperty_SetShadowOffset, METH_VARARGS,
   (char*)"V.SetShadowOffset(int, int)\nC++: void SetShadowOffset(int, int)\nV.SetShadowOffset((int, int))\nC++: void SetShadowOffset(int a[2])\n\n"},
  {(char*)"GetShadowOffset", PyvtkTextProperty_GetShadowOffset, METH_VARARGS,
   (char*)"V.GetShadowOffset() -> (int, int)\nC++: int *GetShadowOffset()\n\nSet/Get the shadow offset, i.e. the distance from the text to its\nshadow, in the same unit as FontSize.\n"},
  {(char*)"GetShadowColor", PyvtkTextProperty_GetShadowColor, METH_VARARGS,
   (char*)"V.GetShadowColor([float, float, float])\nC++: void GetShadowColor(double color[3])\n\nGet the shadow color. It is computed from the Color ivar\n"},
  {(char*)"SetJustification", PyvtkTextProperty_SetJustification, METH_VARARGS,
   (char*)"V.SetJustification(int)\nC++: void SetJustification(int)\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {(char*)"GetJustificationMinValue", PyvtkTextProperty_GetJustificationMinValue, METH_VARARGS,
   (char*)"V.GetJustificationMinValue() -> int\nC++: int GetJustificationMinValue()\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {(char*)"GetJustificationMaxValue", PyvtkTextProperty_GetJustificationMaxValue, METH_VARARGS,
   (char*)"V.GetJustificationMaxValue() -> int\nC++: int GetJustificationMaxValue()\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {(char*)"GetJustification", PyvtkTextProperty_GetJustification, METH_VARARGS,
   (char*)"V.GetJustification() -> int\nC++: int GetJustification()\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {(char*)"SetJustificationToLeft", PyvtkTextProperty_SetJustificationToLeft, METH_VARARGS,
   (char*)"V.SetJustificationToLeft()\nC++: void SetJustificationToLeft()\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {(char*)"SetJustificationToCentered", PyvtkTextProperty_SetJustificationToCentered, METH_VARARGS,
   (char*)"V.SetJustificationToCentered()\nC++: void SetJustificationToCentered()\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {(char*)"SetJustificationToRight", PyvtkTextProperty_SetJustificationToRight, METH_VARARGS,
   (char*)"V.SetJustificationToRight()\nC++: void SetJustificationToRight()\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {(char*)"GetJustificationAsString", PyvtkTextProperty_GetJustificationAsString, METH_VARARGS,
   (char*)"V.GetJustificationAsString() -> string\nC++: const char *GetJustificationAsString()\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {(char*)"SetVerticalJustification", PyvtkTextProperty_SetVerticalJustification, METH_VARARGS,
   (char*)"V.SetVerticalJustification(int)\nC++: void SetVerticalJustification(int)\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {(char*)"GetVerticalJustificationMinValue", PyvtkTextProperty_GetVerticalJustificationMinValue, METH_VARARGS,
   (char*)"V.GetVerticalJustificationMinValue() -> int\nC++: int GetVerticalJustificationMinValue()\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {(char*)"GetVerticalJustificationMaxValue", PyvtkTextProperty_GetVerticalJustificationMaxValue, METH_VARARGS,
   (char*)"V.GetVerticalJustificationMaxValue() -> int\nC++: int GetVerticalJustificationMaxValue()\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {(char*)"GetVerticalJustification", PyvtkTextProperty_GetVerticalJustification, METH_VARARGS,
   (char*)"V.GetVerticalJustification() -> int\nC++: int GetVerticalJustification()\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {(char*)"SetVerticalJustificationToBottom", PyvtkTextProperty_SetVerticalJustificationToBottom, METH_VARARGS,
   (char*)"V.SetVerticalJustificationToBottom()\nC++: void SetVerticalJustificationToBottom()\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {(char*)"SetVerticalJustificationToCentered", PyvtkTextProperty_SetVerticalJustificationToCentered, METH_VARARGS,
   (char*)"V.SetVerticalJustificationToCentered()\nC++: void SetVerticalJustificationToCentered()\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {(char*)"SetVerticalJustificationToTop", PyvtkTextProperty_SetVerticalJustificationToTop, METH_VARARGS,
   (char*)"V.SetVerticalJustificationToTop()\nC++: void SetVerticalJustificationToTop()\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {(char*)"GetVerticalJustificationAsString", PyvtkTextProperty_GetVerticalJustificationAsString, METH_VARARGS,
   (char*)"V.GetVerticalJustificationAsString() -> string\nC++: const char *GetVerticalJustificationAsString()\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {(char*)"SetOrientation", PyvtkTextProperty_SetOrientation, METH_VARARGS,
   (char*)"V.SetOrientation(float)\nC++: void SetOrientation(double a)\n\nSet/Get the text's orientation (in degrees).\n"},
  {(char*)"GetOrientation", PyvtkTextProperty_GetOrientation, METH_VARARGS,
   (char*)"V.GetOrientation() -> float\nC++: double GetOrientation()\n\nSet/Get the text's orientation (in degrees).\n"},
  {(char*)"SetLineSpacing", PyvtkTextProperty_SetLineSpacing, METH_VARARGS,
   (char*)"V.SetLineSpacing(float)\nC++: void SetLineSpacing(double a)\n\nSet/Get the (extra) spacing between lines, expressed as a text\nheight multiplication factor.\n"},
  {(char*)"GetLineSpacing", PyvtkTextProperty_GetLineSpacing, METH_VARARGS,
   (char*)"V.GetLineSpacing() -> float\nC++: double GetLineSpacing()\n\nSet/Get the (extra) spacing between lines, expressed as a text\nheight multiplication factor.\n"},
  {(char*)"SetLineOffset", PyvtkTextProperty_SetLineOffset, METH_VARARGS,
   (char*)"V.SetLineOffset(float)\nC++: void SetLineOffset(double a)\n\nSet/Get the vertical offset (measured in pixels).\n"},
  {(char*)"GetLineOffset", PyvtkTextProperty_GetLineOffset, METH_VARARGS,
   (char*)"V.GetLineOffset() -> float\nC++: double GetLineOffset()\n\nSet/Get the vertical offset (measured in pixels).\n"},
  {(char*)"ShallowCopy", PyvtkTextProperty_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkTextProperty)\nC++: void ShallowCopy(vtkTextProperty *tprop)\n\nShallow copy of a text property.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextProperty_StaticNew()
{
  return vtkTextProperty::New();
}

PyObject *PyVTKClass_vtkTextPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextProperty_StaticNew,
    PyvtkTextProperty_Methods,
    "vtkTextProperty", modulename,
    NULL, NULL,
    PyvtkTextProperty_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkTextProperty_Doc()
{
  static const char *docstring[] = {
    "vtkTextProperty - represent text properties.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkTextProperty is an object that represents text properties. The\nprimary properties that can be set are color, opacity, font size,\nfont family horizontal and vertical justification, bold/italic/shadow\nstyles.\n\nSee Also:\n\nvtkTextMapper vtkTextActor vtkLegendBoxActor vtkCaptionActor2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

