// python wrapper for vtkNamedColors
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkColor.h"
#include "vtkColor.h"
#include "vtkColor.h"
#include "vtkColor.h"
#include "vtkNamedColors.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNamedColors(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNamedColorsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkNamedColors_Doc();


static PyObject *
PyvtkNamedColors_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNamedColors::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNamedColors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNamedColors::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNamedColors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNamedColors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNamedColors::NewInstance());

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
PyvtkNamedColors_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNamedColors *tempr = vtkNamedColors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNamedColors_GetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColors() :
      op->vtkNamedColors::GetNumberOfColors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNamedColors_ResetColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetColors();
      }
    else
      {
      op->vtkNamedColors::ResetColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNamedColors_ColorExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->ColorExists(temp0) :
      op->vtkNamedColors::ColorExists(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNamedColors_GetColor4ub(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor4ub");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->GetColor4ub(temp0) :
      op->vtkNamedColors::GetColor4ub(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
      }
    }

  return result;
}


static PyObject *
PyvtkNamedColors_GetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  unsigned char temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->GetColor(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkNamedColors::GetColor(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNamedColors_GetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  unsigned char temp1[4];
  unsigned char save1[4];
  const int size1 = 4;
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
      op->vtkNamedColors::GetColor(temp0, temp1);
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
PyvtkNamedColors_GetColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkColor4ub *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkColor4ub"))
    {
    if (ap.IsBound())
      {
      op->GetColor(temp0, *temp1);
      }
    else
      {
      op->vtkNamedColors::GetColor(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNamedColors_GetColor_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->GetColor(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkNamedColors::GetColor(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNamedColors_GetColor_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
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
      op->GetColor(temp0, temp1);
      }
    else
      {
      op->vtkNamedColors::GetColor(temp0, temp1);
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
PyvtkNamedColors_GetColor_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkColor4d *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkColor4d"))
    {
    if (ap.IsBound())
      {
      op->GetColor(temp0, *temp1);
      }
    else
      {
      op->vtkNamedColors::GetColor(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNamedColors_GetColor_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
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
      op->GetColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkNamedColors::GetColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNamedColors_GetColor_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkColor3ub *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkColor3ub"))
    {
    if (ap.IsBound())
      {
      op->GetColor(temp0, *temp1);
      }
    else
      {
      op->vtkNamedColors::GetColor(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNamedColors_GetColor_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkColor3d *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkColor3d"))
    {
    if (ap.IsBound())
      {
      op->GetColor(temp0, *temp1);
      }
    else
      {
      op->vtkNamedColors::GetColor(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkNamedColors_GetColor_Methods[] = {
  {NULL, PyvtkNamedColors_GetColor_s1, METH_VARARGS,
   (char*)"@sbbbb"},
  {NULL, PyvtkNamedColors_GetColor_s2, METH_VARARGS,
   (char*)"@sO *b"},
  {NULL, PyvtkNamedColors_GetColor_s3, METH_VARARGS,
   (char*)"@sO &vtkColor4ub"},
  {NULL, PyvtkNamedColors_GetColor_s4, METH_VARARGS,
   (char*)"@sdddd"},
  {NULL, PyvtkNamedColors_GetColor_s5, METH_VARARGS,
   (char*)"@sO *d"},
  {NULL, PyvtkNamedColors_GetColor_s6, METH_VARARGS,
   (char*)"@sO &vtkColor4d"},
  {NULL, PyvtkNamedColors_GetColor_s8, METH_VARARGS,
   (char*)"@sO &vtkColor3ub"},
  {NULL, PyvtkNamedColors_GetColor_s9, METH_VARARGS,
   (char*)"@sO &vtkColor3d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkNamedColors_GetColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkNamedColors_GetColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkNamedColors_GetColor_s7(self, args);
    case 2:
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetColor");
  return NULL;
}



static PyObject *
PyvtkNamedColors_GetColor4d(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor4d");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor4d tempr = (ap.IsBound() ?
      op->GetColor4d(temp0) :
      op->vtkNamedColors::GetColor4d(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4d");
      }
    }

  return result;
}


static PyObject *
PyvtkNamedColors_GetColor3ub(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor3ub");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor3ub tempr = (ap.IsBound() ?
      op->GetColor3ub(temp0) :
      op->vtkNamedColors::GetColor3ub(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3ub");
      }
    }

  return result;
}


static PyObject *
PyvtkNamedColors_GetColor3d(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor3d");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor3d tempr = (ap.IsBound() ?
      op->GetColor3d(temp0) :
      op->vtkNamedColors::GetColor3d(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3d");
      }
    }

  return result;
}


static PyObject *
PyvtkNamedColors_GetColorRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
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
      op->GetColorRGB(temp0, temp1);
      }
    else
      {
      op->vtkNamedColors::GetColorRGB(temp0, temp1);
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
PyvtkNamedColors_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  unsigned char temp4 = 255;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkNamedColors::SetColor(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNamedColors_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4 = 1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkNamedColors::SetColor(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNamedColors_SetColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  unsigned char temp1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, temp1);
      }
    else
      {
      op->vtkNamedColors::SetColor(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNamedColors_SetColor_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkColor4ub *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor4ub"))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, *temp1);
      }
    else
      {
      op->vtkNamedColors::SetColor(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkNamedColors_SetColor_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkColor3ub *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor3ub"))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, *temp1);
      }
    else
      {
      op->vtkNamedColors::SetColor(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkNamedColors_SetColor_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  double temp1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, temp1);
      }
    else
      {
      op->vtkNamedColors::SetColor(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNamedColors_SetColor_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkColor4d *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor4d"))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, *temp1);
      }
    else
      {
      op->vtkNamedColors::SetColor(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkNamedColors_SetColor_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkColor3d *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor3d"))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, *temp1);
      }
    else
      {
      op->vtkNamedColors::SetColor(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkNamedColors_SetColor_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, temp1);
      }
    else
      {
      op->vtkNamedColors::SetColor(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkNamedColors_SetColor_Methods[] = {
  {NULL, PyvtkNamedColors_SetColor_s1, METH_VARARGS,
   (char*)"@sbbb|b"},
  {NULL, PyvtkNamedColors_SetColor_s2, METH_VARARGS,
   (char*)"@sddd|d"},
  {NULL, PyvtkNamedColors_SetColor_s3, METH_VARARGS,
   (char*)"@sO *b"},
  {NULL, PyvtkNamedColors_SetColor_s4, METH_VARARGS,
   (char*)"@sO &vtkColor4ub"},
  {NULL, PyvtkNamedColors_SetColor_s5, METH_VARARGS,
   (char*)"@sO &vtkColor3ub"},
  {NULL, PyvtkNamedColors_SetColor_s6, METH_VARARGS,
   (char*)"@sO *d"},
  {NULL, PyvtkNamedColors_SetColor_s7, METH_VARARGS,
   (char*)"@sO &vtkColor4d"},
  {NULL, PyvtkNamedColors_SetColor_s8, METH_VARARGS,
   (char*)"@sO &vtkColor3d"},
  {NULL, PyvtkNamedColors_SetColor_s9, METH_VARARGS,
   (char*)"@ss"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkNamedColors_SetColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkNamedColors_SetColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
    case 4:
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkNamedColors_RemoveColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveColor(temp0);
      }
    else
      {
      op->vtkNamedColors::RemoveColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNamedColors_GetColorNames_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetColorNames() :
      op->vtkNamedColors::GetColorNames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkNamedColors_GetColorNames_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->GetColorNames(temp0);
      }
    else
      {
      op->vtkNamedColors::GetColorNames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNamedColors_GetColorNames(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkNamedColors_GetColorNames_s1(self, args);
    case 1:
      return PyvtkNamedColors_GetColorNames_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetColorNames");
  return NULL;
}



static PyObject *
PyvtkNamedColors_GetSynonyms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSynonyms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetSynonyms() :
      op->vtkNamedColors::GetSynonyms());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNamedColors_HTMLColorToRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HTMLColorToRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->HTMLColorToRGBA(temp0) :
      op->vtkNamedColors::HTMLColorToRGBA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
      }
    }

  return result;
}


static PyObject *
PyvtkNamedColors_HTMLColorToRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HTMLColorToRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor3ub tempr = (ap.IsBound() ?
      op->HTMLColorToRGB(temp0) :
      op->vtkNamedColors::HTMLColorToRGB(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3ub");
      }
    }

  return result;
}


static PyObject *
PyvtkNamedColors_RGBToHTMLColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RGBToHTMLColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkColor3ub *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3ub"))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->RGBToHTMLColor(*temp0) :
      op->vtkNamedColors::RGBToHTMLColor(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkNamedColors_RGBAToHTMLColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RGBAToHTMLColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkColor4ub *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4ub"))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->RGBAToHTMLColor(*temp0) :
      op->vtkNamedColors::RGBAToHTMLColor(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkNamedColors_Methods[] = {
  {(char*)"GetClassName", PyvtkNamedColors_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNamedColors_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNamedColors_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNamedColors\nC++: vtkNamedColors *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNamedColors_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNamedColors\nC++: vtkNamedColors *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfColors", PyvtkNamedColors_GetNumberOfColors, METH_VARARGS,
   (char*)"V.GetNumberOfColors() -> int\nC++: int GetNumberOfColors()\n\nGet the number of colors.\n"},
  {(char*)"ResetColors", PyvtkNamedColors_ResetColors, METH_VARARGS,
   (char*)"V.ResetColors()\nC++: void ResetColors()\n\nReset the colors in the color map to the original colors. Any\ncolors inserted by the user will be lost.\n"},
  {(char*)"ColorExists", PyvtkNamedColors_ColorExists, METH_VARARGS,
   (char*)"V.ColorExists(string) -> bool\nC++: bool ColorExists(const vtkStdString &name)\n\nReturn true if the color exists.\n"},
  {(char*)"GetColor4ub", PyvtkNamedColors_GetColor4ub, METH_VARARGS,
   (char*)"V.GetColor4ub(string) -> vtkColor4ub\nC++: vtkColor4ub GetColor4ub(const vtkStdString &name)\n\nGet the color by name. The name is treated as being\ncase-insensitive. The color is returned as a vtkColor4ub class.\nThe color black is returned if the color is not found.\n"},
  {(char*)"GetColor", PyvtkNamedColors_GetColor, METH_VARARGS,
   (char*)"V.GetColor(string, int, int, int, int)\nC++: void GetColor(const vtkStdString &name, unsigned char &r,\n    unsigned char &g, unsigned char &b, unsigned char &a)\nV.GetColor(string, [int, int, int, int])\nC++: void GetColor(const vtkStdString &name,\n    unsigned char rgba[4])\nV.GetColor(string, vtkColor4ub)\nC++: void GetColor(const vtkStdString &name, vtkColor4ub &rgba)\nV.GetColor(string, float, float, float, float)\nC++: void GetColor(const vtkStdString &name, double &r, double &g,\n     double &b, double &a)\nV.GetColor(string, [float, float, float, float])\nC++: void GetColor(const vtkStdString &name, double rgba[4])\nV.GetColor(string, vtkColor4d)\nC++: void GetColor(const vtkStdString &name, vtkColor4d &rgba)\nV.GetColor(string, float, float, float)\nC++: void GetColor(const vtkStdString &name, double &r, double &g,\n     double &b)\nV.GetColor(string, vtkColor3ub)\nC++: void GetColor(const vtkStdString &name, vtkColor3ub &rgb)\nV.GetColor(string, vtkColor3d)\nC++: void GetColor(const vtkStdString &name, vtkColor3d &rgb)\n\nGet the color by name. The name is treated as being\ncase-insensitive. The color is returned as four unsigned char\nvariables: red, green, blue, alpha. The range of each element is\n0...255. The color black is returned if the color is not found.\n"},
  {(char*)"GetColor4d", PyvtkNamedColors_GetColor4d, METH_VARARGS,
   (char*)"V.GetColor4d(string) -> vtkColor4d\nC++: vtkColor4d GetColor4d(const vtkStdString &name)\n\nGet the color by name. The name is treated as being\ncase-insensitive. The color is returned as a vtkColor4d class.\nThe color black is returned if the color is not found.\n"},
  {(char*)"GetColor3ub", PyvtkNamedColors_GetColor3ub, METH_VARARGS,
   (char*)"V.GetColor3ub(string) -> vtkColor3ub\nC++: vtkColor3ub GetColor3ub(const vtkStdString &name)\n\nGet the color by name. The name is treated as being\ncase-insensitive. The color is returned as a vtkColor3ub class.\nThe color black is returned if the color is not found.\n"},
  {(char*)"GetColor3d", PyvtkNamedColors_GetColor3d, METH_VARARGS,
   (char*)"V.GetColor3d(string) -> vtkColor3d\nC++: vtkColor3d GetColor3d(const vtkStdString &name)\n\nGet the color by name. The name is treated as being\ncase-insensitive. The color is returned as a vtkColor3d class.\nThe color black is returned if the color is not found.\n"},
  {(char*)"GetColorRGB", PyvtkNamedColors_GetColorRGB, METH_VARARGS,
   (char*)"V.GetColorRGB(string, [float, float, float])\nC++: void GetColorRGB(const vtkStdString &name, double rgb[3])\n\nGet the color by name. The name is treated as being\ncase-insensitive. The color is returned as a double array: [red,\ngreen, blue]. The range of each element is 0...1. The color black\nis returned if the color is not found.\n"},
  {(char*)"SetColor", PyvtkNamedColors_SetColor, METH_VARARGS,
   (char*)"V.SetColor(string, int, int, int, int)\nC++: virtual void SetColor(const vtkStdString &name,\n    const unsigned char &r, const unsigned char &g,\n    const unsigned char &b, const unsigned char &a=255)\nV.SetColor(string, float, float, float, float)\nC++: virtual void SetColor(const vtkStdString &name,\n    const double &r, const double &g, const double &b,\n    const double &a=1)\nV.SetColor(string, (int, int, int, int))\nC++: virtual void SetColor(const vtkStdString &name,\n    const unsigned char rgba[4])\nV.SetColor(string, vtkColor4ub)\nC++: virtual void SetColor(const vtkStdString &name,\n    const vtkColor4ub &rgba)\nV.SetColor(string, vtkColor3ub)\nC++: virtual void SetColor(const vtkStdString &name,\n    const vtkColor3ub &rgb)\nV.SetColor(string, (float, float, float, float))\nC++: virtual void SetColor(const vtkStdString &name,\n    const double rgba[4])\nV.SetColor(string, vtkColor4d)\nC++: virtual void SetColor(const vtkStdString &name,\n    const vtkColor4d &rgba)\nV.SetColor(string, vtkColor3d)\nC++: virtual void SetColor(const vtkStdString &name,\n    const vtkColor3d &rgb)\nV.SetColor(string, string)\nC++: void SetColor(const vtkStdString &name,\n    const vtkStdString &htmlString)\n\nSet the color by name. The name is treated as being\ncase-insensitive. The range of each color is 0...255. No color is\nset if the name is empty.\n"},
  {(char*)"RemoveColor", PyvtkNamedColors_RemoveColor, METH_VARARGS,
   (char*)"V.RemoveColor(string)\nC++: void RemoveColor(const vtkStdString &name)\n\nRemove the color by name. The name is treated as being\ncase-insensitive. Examples for parsing are provided in:\nTestNamedColors.cxx and TestNamedColorsIntegration.py\n"},
  {(char*)"GetColorNames", PyvtkNamedColors_GetColorNames, METH_VARARGS,
   (char*)"V.GetColorNames() -> string\nC++: vtkStdString GetColorNames()\nV.GetColorNames(vtkStringArray)\nC++: void GetColorNames(vtkStringArray *colorNames)\n\nReturn a string of color names with each name delimited by a line\nfeed. This is easily parsed by the user into whatever data\nstructure they require. Examples for parsing are provided in:\nTestNamedColors.cxx and TestNamedColorsIntegration.py\n"},
  {(char*)"GetSynonyms", PyvtkNamedColors_GetSynonyms, METH_VARARGS,
   (char*)"V.GetSynonyms() -> string\nC++: vtkStdString GetSynonyms()\n\n"},
  {(char*)"HTMLColorToRGBA", PyvtkNamedColors_HTMLColorToRGBA, METH_VARARGS,
   (char*)"V.HTMLColorToRGBA(string) -> vtkColor4ub\nC++: vtkColor4ub HTMLColorToRGBA(const vtkStdString &colorString)\n\nReturn a vtkColor4ub instance from an HTML color string in any of\nthe following formats:\n- #RGB\n- #RRGGBB\n- rgb(r, g, b)\n- rgba(r, g, b, a)\n- a CSS3 color name, e.g. \"steelblue\" If the string argument\n  defines a color using one of the above formats the method\n  returns the successfully parsed color else returns a color\n  equal to `rgba(0, 0, 0, 0)`.\n"},
  {(char*)"HTMLColorToRGB", PyvtkNamedColors_HTMLColorToRGB, METH_VARARGS,
   (char*)"V.HTMLColorToRGB(string) -> vtkColor3ub\nC++: vtkColor3ub HTMLColorToRGB(const vtkStdString &colorString)\n\nReturn a vtkColor3ub instance from an HTML color string in any of\nthe following formats:\n- #RGB\n- #RRGGBB\n- rgb(r, g, b)\n- rgba(r, g, b, a)\n- a CSS3 color name, e.g. \"steelblue\" If the string argument\n  defines a color using one of the above formats the method\n  returns the successfully parsed color else returns the color\n  black.\n"},
  {(char*)"RGBToHTMLColor", PyvtkNamedColors_RGBToHTMLColor, METH_VARARGS,
   (char*)"V.RGBToHTMLColor(vtkColor3ub) -> string\nC++: vtkStdString RGBToHTMLColor(const vtkColor3ub &rgb)\n\nGiven a vtkColor3ub instance as input color return a valid HTML\ncolor string in the `#RRGGBB` format.\n"},
  {(char*)"RGBAToHTMLColor", PyvtkNamedColors_RGBAToHTMLColor, METH_VARARGS,
   (char*)"V.RGBAToHTMLColor(vtkColor4ub) -> string\nC++: vtkStdString RGBAToHTMLColor(const vtkColor4ub &rgba)\n\nGiven a vtkColor4ub instance as input color return a valid HTML\ncolor string in the `rgba(r, g, b, a)` format.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNamedColors_StaticNew()
{
  return vtkNamedColors::New();
}

PyObject *PyVTKClass_vtkNamedColorsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNamedColors_StaticNew,
    PyvtkNamedColors_Methods,
    "vtkNamedColors", modulename,
    NULL, NULL,
    PyvtkNamedColors_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkNamedColors_Doc()
{
  static const char *docstring[] = {
    "vtkNamedColors - A class holding colors and their names.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkNamedColors is class that holds colors and their associated names.\n\nColor names are case insensitive and are stored as lower-case names\nalong with a 4-element array whose elements are red, green, blue and\nalpha, in that order, corresponding to the RGBA value of the color.\n\nIt is assumed that if the RGBA values are unsigned char then each\nelement lies in the range 0...255 and if the RGBA values ",
    "are double\nthen each element lies in the range 0...1.\n\nThe colors and names are those in\nhttp://en.wikipedia.org/wiki/Web_colors that are derived from the\nCSS3 specification: http://www.w3.org/TR/css3-color/#svg-color In\nthis table common synonyms such as cyan/aqua and magenta/fuchsia are\nalso included.\n\nAlso included in this class are names and colors taken from\nWrapping/Tcl/vtktesting/colors.tcl",
    " and\nWrapping/Python/vtk/util/colors.py.\n\nWeb colors and names in http://en.wikipedia.org/wiki/Web_colors take\nprecedence over those in colors.tcl and colors.py. One consequence of\nthis is that while colors.py and colors.tcl specify green as\nequivalent to (0,255,0), the web color standard defines it as\n(0,128,0).\n\nFor a web page of VTK Named Colors and their RGB values, see:\nhttp://www.vtk.org/Wik",
    "i/VTK/Examples/Python/Visualization/VTKNamedColo\nrPatches_html .\n\nThe code used to generate this table is available from:\nhttp://www.vtk.org/Wiki/VTK/Examples/Python/Visualization/NamedColorPa\ntches , this is useful if you wish to generate your own table.\n\nThe SetColor methods will overwrite existing colors if the name of\nthe color being set matches an existing color. Note that\nColorExists() can b",
    "e used to test for existence of the color being\nset.\n\nIn the case of the GetColor methods returning doubles, alternative\nversions, identified by the letters RGB in the names, are provided.\nThese get functions return just the red, green and blue components of\na color.\n\nThe class also provides methods for defining a color through an HTML\ncolor string. The following formats are supported:\n\n- #RGB    ",
    "              (3-digit hexadecimal number, where #4F2 is a\n  shortcut for #44FF22)\n- #RRGGBB               (6-digit hexadecimal number)\n- rgb(r, g, b)          (where r, g, b are in 0..255 or percentage\n  values)\n- rgba(r, g, b, a)      (where r, g, b, are in 0..255 or percentage\n  values, a is in 0.0..1.0)\n- a CSS3 color name     (e.g. \"steelblue\")\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNamedColors(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNamedColorsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNamedColors", o) != 0)
    {
    Py_DECREF(o);
    }

}

