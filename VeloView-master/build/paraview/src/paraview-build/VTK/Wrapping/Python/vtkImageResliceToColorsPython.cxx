// python wrapper for vtkImageResliceToColors
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageResliceToColors.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageResliceToColors(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageResliceToColorsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageResliceNew
extern "C" { PyObject *PyVTKClass_vtkImageResliceNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageResliceNew
#endif

static const char **PyvtkImageResliceToColors_Doc();


static PyObject *
PyvtkImageResliceToColors_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageResliceToColors::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageResliceToColors::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageResliceToColors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageResliceToColors::NewInstance());

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
PyvtkImageResliceToColors_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageResliceToColors *tempr = vtkImageResliceToColors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

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
      op->vtkImageResliceToColors::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkImageResliceToColors::GetLookupTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetOutputFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFormat(temp0);
      }
    else
      {
      op->vtkImageResliceToColors::SetOutputFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetOutputFormatMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFormatMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputFormatMinValue() :
      op->vtkImageResliceToColors::GetOutputFormatMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetOutputFormatMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFormatMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputFormatMaxValue() :
      op->vtkImageResliceToColors::GetOutputFormatMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetOutputFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputFormat() :
      op->vtkImageResliceToColors::GetOutputFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetOutputFormatToRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFormatToRGBA();
      }
    else
      {
      op->vtkImageResliceToColors::SetOutputFormatToRGBA();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetOutputFormatToRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFormatToRGB();
      }
    else
      {
      op->vtkImageResliceToColors::SetOutputFormatToRGB();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetOutputFormatToLuminanceAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToLuminanceAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFormatToLuminanceAlpha();
      }
    else
      {
      op->vtkImageResliceToColors::SetOutputFormatToLuminanceAlpha();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetOutputFormatToLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFormatToLuminance();
      }
    else
      {
      op->vtkImageResliceToColors::SetOutputFormatToLuminance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetBypass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBypass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBypass(temp0);
      }
    else
      {
      op->vtkImageResliceToColors::SetBypass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_BypassOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BypassOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BypassOn();
      }
    else
      {
      op->vtkImageResliceToColors::BypassOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_BypassOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BypassOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BypassOff();
      }
    else
      {
      op->vtkImageResliceToColors::BypassOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetBypass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBypass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBypass() :
      op->vtkImageResliceToColors::GetBypass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageResliceToColors::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageResliceToColors_Methods[] = {
  {(char*)"GetClassName", PyvtkImageResliceToColors_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageResliceToColors_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageResliceToColors_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageResliceToColors\nC++: vtkImageResliceToColors *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageResliceToColors_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageResliceToColors\nC++: vtkImageResliceToColors *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLookupTable", PyvtkImageResliceToColors_SetLookupTable, METH_VARARGS,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *table)\n\nSet a lookup table to apply to the data.  Use the Range,\nVectorMode, and VectorComponents of the table to control the\nmapping of the input data to colors.  If any output voxel is\ntransformed to a point outside the input volume, then that voxel\nwill be set to the BackgroundColor.\n"},
  {(char*)"GetLookupTable", PyvtkImageResliceToColors_GetLookupTable, METH_VARARGS,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSet a lookup table to apply to the data.  Use the Range,\nVectorMode, and VectorComponents of the table to control the\nmapping of the input data to colors.  If any output voxel is\ntransformed to a point outside the input volume, then that voxel\nwill be set to the BackgroundColor.\n"},
  {(char*)"SetOutputFormat", PyvtkImageResliceToColors_SetOutputFormat, METH_VARARGS,
   (char*)"V.SetOutputFormat(int)\nC++: void SetOutputFormat(int)\n\nSet the output format, the default is RGBA.\n"},
  {(char*)"GetOutputFormatMinValue", PyvtkImageResliceToColors_GetOutputFormatMinValue, METH_VARARGS,
   (char*)"V.GetOutputFormatMinValue() -> int\nC++: int GetOutputFormatMinValue()\n\nSet the output format, the default is RGBA.\n"},
  {(char*)"GetOutputFormatMaxValue", PyvtkImageResliceToColors_GetOutputFormatMaxValue, METH_VARARGS,
   (char*)"V.GetOutputFormatMaxValue() -> int\nC++: int GetOutputFormatMaxValue()\n\nSet the output format, the default is RGBA.\n"},
  {(char*)"GetOutputFormat", PyvtkImageResliceToColors_GetOutputFormat, METH_VARARGS,
   (char*)"V.GetOutputFormat() -> int\nC++: int GetOutputFormat()\n\nSet the output format, the default is RGBA.\n"},
  {(char*)"SetOutputFormatToRGBA", PyvtkImageResliceToColors_SetOutputFormatToRGBA, METH_VARARGS,
   (char*)"V.SetOutputFormatToRGBA()\nC++: void SetOutputFormatToRGBA()\n\nSet the output format, the default is RGBA.\n"},
  {(char*)"SetOutputFormatToRGB", PyvtkImageResliceToColors_SetOutputFormatToRGB, METH_VARARGS,
   (char*)"V.SetOutputFormatToRGB()\nC++: void SetOutputFormatToRGB()\n\nSet the output format, the default is RGBA.\n"},
  {(char*)"SetOutputFormatToLuminanceAlpha", PyvtkImageResliceToColors_SetOutputFormatToLuminanceAlpha, METH_VARARGS,
   (char*)"V.SetOutputFormatToLuminanceAlpha()\nC++: void SetOutputFormatToLuminanceAlpha()\n\nSet the output format, the default is RGBA.\n"},
  {(char*)"SetOutputFormatToLuminance", PyvtkImageResliceToColors_SetOutputFormatToLuminance, METH_VARARGS,
   (char*)"V.SetOutputFormatToLuminance()\nC++: void SetOutputFormatToLuminance()\n\nSet the output format, the default is RGBA.\n"},
  {(char*)"SetBypass", PyvtkImageResliceToColors_SetBypass, METH_VARARGS,
   (char*)"V.SetBypass(int)\nC++: void SetBypass(int bypass)\n\nBypass the color mapping operation and output the scalar values\ndirectly.  The output values will be float, rather than the input\ndata type.\n"},
  {(char*)"BypassOn", PyvtkImageResliceToColors_BypassOn, METH_VARARGS,
   (char*)"V.BypassOn()\nC++: void BypassOn()\n\nBypass the color mapping operation and output the scalar values\ndirectly.  The output values will be float, rather than the input\ndata type.\n"},
  {(char*)"BypassOff", PyvtkImageResliceToColors_BypassOff, METH_VARARGS,
   (char*)"V.BypassOff()\nC++: void BypassOff()\n\nBypass the color mapping operation and output the scalar values\ndirectly.  The output values will be float, rather than the input\ndata type.\n"},
  {(char*)"GetBypass", PyvtkImageResliceToColors_GetBypass, METH_VARARGS,
   (char*)"V.GetBypass() -> int\nC++: int GetBypass()\n\nBypass the color mapping operation and output the scalar values\ndirectly.  The output values will be float, rather than the input\ndata type.\n"},
  {(char*)"GetMTime", PyvtkImageResliceToColors_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nWhen determining the modified time of the filter, this check the\nmodified time of the transform and matrix.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageResliceToColors_StaticNew()
{
  return vtkImageResliceToColors::New();
}

PyObject *PyVTKClass_vtkImageResliceToColorsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageResliceToColors_StaticNew,
    PyvtkImageResliceToColors_Methods,
    "vtkImageResliceToColors", modulename,
    NULL, NULL,
    PyvtkImageResliceToColors_Doc(),
    PyVTKClass_vtkImageResliceNew(modulename));
  return cls;
}

const char **PyvtkImageResliceToColors_Doc()
{
  static const char *docstring[] = {
    "vtkImageResliceToColors - Reslice and produce color scalars.\n\n",
    "Superclass: vtkImageReslice\n\n",
    "vtkImageResliceToColors is an extension of vtkImageReslice that\nproduces color scalars.  It should be provided with a lookup table\nthat defines the output colors and the desired range of input values\nto map to those colors.  If the input has multiple components, then\nyou should use the SetVectorMode() method of the lookup table to\nspecify how the vectors will be colored.  If no lookup table is\npro",
    "vided, then the input must already be color scalars, but they will\nbe converted to the specified output format.\n\nSee Also:\n\nvtkImageMapToColors\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageResliceToColors(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageResliceToColorsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageResliceToColors", o) != 0)
    {
    Py_DECREF(o);
    }

}

