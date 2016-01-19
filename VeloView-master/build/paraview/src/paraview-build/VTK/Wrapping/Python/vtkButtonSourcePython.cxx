// python wrapper for vtkButtonSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkButtonSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkButtonSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkButtonSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkButtonSource_Doc();


static PyObject *
PyvtkButtonSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkButtonSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkButtonSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkButtonSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkButtonSource::NewInstance());

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
PyvtkButtonSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkButtonSource *tempr = vtkButtonSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkButtonSource::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkButtonSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkButtonSource::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkButtonSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkButtonSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkButtonSource_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkButtonSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkButtonSource::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonSource_SetTextureStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureStyle(temp0);
      }
    else
      {
      op->vtkButtonSource::SetTextureStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkButtonSource_GetTextureStyleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureStyleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextureStyleMinValue() :
      op->vtkButtonSource::GetTextureStyleMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonSource_GetTextureStyleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureStyleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextureStyleMaxValue() :
      op->vtkButtonSource::GetTextureStyleMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonSource_GetTextureStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextureStyle() :
      op->vtkButtonSource::GetTextureStyle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonSource_SetTextureStyleToFitImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureStyleToFitImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTextureStyleToFitImage();
      }
    else
      {
      op->vtkButtonSource::SetTextureStyleToFitImage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkButtonSource_SetTextureStyleToProportional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureStyleToProportional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTextureStyleToProportional();
      }
    else
      {
      op->vtkButtonSource::SetTextureStyleToProportional();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkButtonSource_SetTextureDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTextureDimensions(temp0, temp1);
      }
    else
      {
      op->vtkButtonSource::SetTextureDimensions(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkButtonSource_SetTextureDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTextureDimensions(temp0);
      }
    else
      {
      op->vtkButtonSource::SetTextureDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkButtonSource_SetTextureDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkButtonSource_SetTextureDimensions_s1(self, args);
    case 1:
      return PyvtkButtonSource_SetTextureDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTextureDimensions");
  return NULL;
}



static PyObject *
PyvtkButtonSource_GetTextureDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTextureDimensions() :
      op->vtkButtonSource::GetTextureDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonSource_SetShoulderTextureCoordinate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShoulderTextureCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetShoulderTextureCoordinate(temp0, temp1);
      }
    else
      {
      op->vtkButtonSource::SetShoulderTextureCoordinate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkButtonSource_SetShoulderTextureCoordinate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShoulderTextureCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetShoulderTextureCoordinate(temp0);
      }
    else
      {
      op->vtkButtonSource::SetShoulderTextureCoordinate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkButtonSource_SetShoulderTextureCoordinate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkButtonSource_SetShoulderTextureCoordinate_s1(self, args);
    case 1:
      return PyvtkButtonSource_SetShoulderTextureCoordinate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetShoulderTextureCoordinate");
  return NULL;
}



static PyObject *
PyvtkButtonSource_GetShoulderTextureCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShoulderTextureCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetShoulderTextureCoordinate() :
      op->vtkButtonSource::GetShoulderTextureCoordinate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonSource_SetTwoSided(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwoSided");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTwoSided(temp0);
      }
    else
      {
      op->vtkButtonSource::SetTwoSided(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkButtonSource_GetTwoSided(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwoSided");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTwoSided() :
      op->vtkButtonSource::GetTwoSided());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonSource_TwoSidedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoSidedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwoSidedOn();
      }
    else
      {
      op->vtkButtonSource::TwoSidedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkButtonSource_TwoSidedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoSidedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwoSidedOff();
      }
    else
      {
      op->vtkButtonSource::TwoSidedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkButtonSource_Methods[] = {
  {(char*)"GetClassName", PyvtkButtonSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkButtonSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkButtonSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkButtonSource\nC++: vtkButtonSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkButtonSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkButtonSource\nC++: vtkButtonSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCenter", PyvtkButtonSource_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkButtonSource_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSpecify a point defining the origin (center) of the button.\n"},
  {(char*)"SetTextureStyle", PyvtkButtonSource_SetTextureStyle, METH_VARARGS,
   (char*)"V.SetTextureStyle(int)\nC++: void SetTextureStyle(int)\n\nSet/Get the style of the texture region: whether to size it\naccording to the x-y dimensions of the texture, or whether to\nmake the texture region proportional to the width/height of the\nbutton.\n"},
  {(char*)"GetTextureStyleMinValue", PyvtkButtonSource_GetTextureStyleMinValue, METH_VARARGS,
   (char*)"V.GetTextureStyleMinValue() -> int\nC++: int GetTextureStyleMinValue()\n\nSet/Get the style of the texture region: whether to size it\naccording to the x-y dimensions of the texture, or whether to\nmake the texture region proportional to the width/height of the\nbutton.\n"},
  {(char*)"GetTextureStyleMaxValue", PyvtkButtonSource_GetTextureStyleMaxValue, METH_VARARGS,
   (char*)"V.GetTextureStyleMaxValue() -> int\nC++: int GetTextureStyleMaxValue()\n\nSet/Get the style of the texture region: whether to size it\naccording to the x-y dimensions of the texture, or whether to\nmake the texture region proportional to the width/height of the\nbutton.\n"},
  {(char*)"GetTextureStyle", PyvtkButtonSource_GetTextureStyle, METH_VARARGS,
   (char*)"V.GetTextureStyle() -> int\nC++: int GetTextureStyle()\n\nSet/Get the style of the texture region: whether to size it\naccording to the x-y dimensions of the texture, or whether to\nmake the texture region proportional to the width/height of the\nbutton.\n"},
  {(char*)"SetTextureStyleToFitImage", PyvtkButtonSource_SetTextureStyleToFitImage, METH_VARARGS,
   (char*)"V.SetTextureStyleToFitImage()\nC++: void SetTextureStyleToFitImage()\n\nSet/Get the style of the texture region: whether to size it\naccording to the x-y dimensions of the texture, or whether to\nmake the texture region proportional to the width/height of the\nbutton.\n"},
  {(char*)"SetTextureStyleToProportional", PyvtkButtonSource_SetTextureStyleToProportional, METH_VARARGS,
   (char*)"V.SetTextureStyleToProportional()\nC++: void SetTextureStyleToProportional()\n\nSet/Get the style of the texture region: whether to size it\naccording to the x-y dimensions of the texture, or whether to\nmake the texture region proportional to the width/height of the\nbutton.\n"},
  {(char*)"SetTextureDimensions", PyvtkButtonSource_SetTextureDimensions, METH_VARARGS,
   (char*)"V.SetTextureDimensions(int, int)\nC++: void SetTextureDimensions(int, int)\nV.SetTextureDimensions((int, int))\nC++: void SetTextureDimensions(int a[2])\n\n"},
  {(char*)"GetTextureDimensions", PyvtkButtonSource_GetTextureDimensions, METH_VARARGS,
   (char*)"V.GetTextureDimensions() -> (int, int)\nC++: int *GetTextureDimensions()\n\n"},
  {(char*)"SetShoulderTextureCoordinate", PyvtkButtonSource_SetShoulderTextureCoordinate, METH_VARARGS,
   (char*)"V.SetShoulderTextureCoordinate(float, float)\nC++: void SetShoulderTextureCoordinate(double, double)\nV.SetShoulderTextureCoordinate((float, float))\nC++: void SetShoulderTextureCoordinate(double a[2])\n\n"},
  {(char*)"GetShoulderTextureCoordinate", PyvtkButtonSource_GetShoulderTextureCoordinate, METH_VARARGS,
   (char*)"V.GetShoulderTextureCoordinate() -> (float, float)\nC++: double *GetShoulderTextureCoordinate()\n\n"},
  {(char*)"SetTwoSided", PyvtkButtonSource_SetTwoSided, METH_VARARGS,
   (char*)"V.SetTwoSided(int)\nC++: void SetTwoSided(int a)\n\nIndicate whether the button is single or double sided. A double\nsided button can be viewed from two sides...it looks sort of like\na \"pill.\" A single-sided button is meant to viewed from a single\nside; it looks like a \"clam-shell.\"\n"},
  {(char*)"GetTwoSided", PyvtkButtonSource_GetTwoSided, METH_VARARGS,
   (char*)"V.GetTwoSided() -> int\nC++: int GetTwoSided()\n\nIndicate whether the button is single or double sided. A double\nsided button can be viewed from two sides...it looks sort of like\na \"pill.\" A single-sided button is meant to viewed from a single\nside; it looks like a \"clam-shell.\"\n"},
  {(char*)"TwoSidedOn", PyvtkButtonSource_TwoSidedOn, METH_VARARGS,
   (char*)"V.TwoSidedOn()\nC++: void TwoSidedOn()\n\nIndicate whether the button is single or double sided. A double\nsided button can be viewed from two sides...it looks sort of like\na \"pill.\" A single-sided button is meant to viewed from a single\nside; it looks like a \"clam-shell.\"\n"},
  {(char*)"TwoSidedOff", PyvtkButtonSource_TwoSidedOff, METH_VARARGS,
   (char*)"V.TwoSidedOff()\nC++: void TwoSidedOff()\n\nIndicate whether the button is single or double sided. A double\nsided button can be viewed from two sides...it looks sort of like\na \"pill.\" A single-sided button is meant to viewed from a single\nside; it looks like a \"clam-shell.\"\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkButtonSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkButtonSource_Methods,
    "vtkButtonSource", modulename,
    NULL, NULL,
    PyvtkButtonSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkButtonSource_Doc()
{
  static const char *docstring[] = {
    "vtkButtonSource - abstract class for creating various button types\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkButtonSource is an abstract class that defines an API for creating\n\"button-like\" objects in VTK. A button is a geometry with a\nrectangular region that can be textured. The button is divided into\ntwo regions: the texture region and the shoulder region. The points\nin both regions are assigned texture coordinates. The texture region\nhas texture coordinates consistent with the image to be placed on",
    " it.\n All points in the shoulder regions are assigned a texture coordinate\nspecified by the user.  In this way the shoulder region can be\ncolored by the texture.\n\nCreating a vtkButtonSource requires specifying its center point.\n(Subclasses have other attributes that must be set to control the\nshape of the button.) You must also specify how to control the shape\nof the texture region; i.e., whether ",
    "to size the texture region\nproportional to the texture dimensions or whether to size the texture\nregion proportional to the button. Also, buttons can be created\nsingle sided are mirrored to create two-sided buttons.\n\nCaveats:\n\nThe button is defined in the x-y plane. Use\nvtkTransformPolyDataFilter or vtkGlyph3D to orient the button in a\ndifferent direction.\n\nSee Also:\n\nvtkEllipticalButtonSource vtk",
    "RectangularButtonSource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkButtonSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkButtonSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkButtonSource", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_TEXTURE_STYLE_FIT_IMAGE", 0 },
        { "VTK_TEXTURE_STYLE_PROPORTIONAL", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

