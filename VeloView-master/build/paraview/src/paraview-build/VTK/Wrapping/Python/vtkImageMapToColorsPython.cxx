// python wrapper for vtkImageMapToColors
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageMapToColors.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageMapToColors(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageMapToColorsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageMapToColors_Doc();


static PyObject *
PyvtkImageMapToColors_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageMapToColors::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMapToColors::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageMapToColors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMapToColors::NewInstance());

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
PyvtkImageMapToColors_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageMapToColors *tempr = vtkImageMapToColors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

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
      op->vtkImageMapToColors::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkImageMapToColors::GetLookupTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetOutputFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

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
      op->vtkImageMapToColors::SetOutputFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_GetOutputFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputFormat() :
      op->vtkImageMapToColors::GetOutputFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetOutputFormatToRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFormatToRGBA();
      }
    else
      {
      op->vtkImageMapToColors::SetOutputFormatToRGBA();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetOutputFormatToRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFormatToRGB();
      }
    else
      {
      op->vtkImageMapToColors::SetOutputFormatToRGB();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetOutputFormatToLuminanceAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToLuminanceAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFormatToLuminanceAlpha();
      }
    else
      {
      op->vtkImageMapToColors::SetOutputFormatToLuminanceAlpha();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetOutputFormatToLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFormatToLuminance();
      }
    else
      {
      op->vtkImageMapToColors::SetOutputFormatToLuminance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActiveComponent(temp0);
      }
    else
      {
      op->vtkImageMapToColors::SetActiveComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_GetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponent() :
      op->vtkImageMapToColors::GetActiveComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetPassAlphaToOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassAlphaToOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassAlphaToOutput(temp0);
      }
    else
      {
      op->vtkImageMapToColors::SetPassAlphaToOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_PassAlphaToOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassAlphaToOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassAlphaToOutputOn();
      }
    else
      {
      op->vtkImageMapToColors::PassAlphaToOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_PassAlphaToOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassAlphaToOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassAlphaToOutputOff();
      }
    else
      {
      op->vtkImageMapToColors::PassAlphaToOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_GetPassAlphaToOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassAlphaToOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassAlphaToOutput() :
      op->vtkImageMapToColors::GetPassAlphaToOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageMapToColors::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetNaNColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNaNColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetNaNColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageMapToColors::SetNaNColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMapToColors_SetNaNColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNaNColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  unsigned char temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNaNColor(temp0);
      }
    else
      {
      op->vtkImageMapToColors::SetNaNColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMapToColors_SetNaNColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkImageMapToColors_SetNaNColor_s1(self, args);
    case 1:
      return PyvtkImageMapToColors_SetNaNColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNaNColor");
  return NULL;
}



static PyObject *
PyvtkImageMapToColors_GetNaNColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNaNColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetNaNColor() :
      op->vtkImageMapToColors::GetNaNColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMapToColors_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMapToColors_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMapToColors_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMapToColors_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageMapToColors\nC++: vtkImageMapToColors *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMapToColors_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMapToColors\nC++: vtkImageMapToColors *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLookupTable", PyvtkImageMapToColors_SetLookupTable, METH_VARARGS,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *)\n\nSet the lookup table.\n"},
  {(char*)"GetLookupTable", PyvtkImageMapToColors_GetLookupTable, METH_VARARGS,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSet the lookup table.\n"},
  {(char*)"SetOutputFormat", PyvtkImageMapToColors_SetOutputFormat, METH_VARARGS,
   (char*)"V.SetOutputFormat(int)\nC++: void SetOutputFormat(int a)\n\nSet the output format, the default is RGBA.\n"},
  {(char*)"GetOutputFormat", PyvtkImageMapToColors_GetOutputFormat, METH_VARARGS,
   (char*)"V.GetOutputFormat() -> int\nC++: int GetOutputFormat()\n\nSet the output format, the default is RGBA.\n"},
  {(char*)"SetOutputFormatToRGBA", PyvtkImageMapToColors_SetOutputFormatToRGBA, METH_VARARGS,
   (char*)"V.SetOutputFormatToRGBA()\nC++: void SetOutputFormatToRGBA()\n\nSet the output format, the default is RGBA.\n"},
  {(char*)"SetOutputFormatToRGB", PyvtkImageMapToColors_SetOutputFormatToRGB, METH_VARARGS,
   (char*)"V.SetOutputFormatToRGB()\nC++: void SetOutputFormatToRGB()\n\nSet the output format, the default is RGBA.\n"},
  {(char*)"SetOutputFormatToLuminanceAlpha", PyvtkImageMapToColors_SetOutputFormatToLuminanceAlpha, METH_VARARGS,
   (char*)"V.SetOutputFormatToLuminanceAlpha()\nC++: void SetOutputFormatToLuminanceAlpha()\n\nSet the output format, the default is RGBA.\n"},
  {(char*)"SetOutputFormatToLuminance", PyvtkImageMapToColors_SetOutputFormatToLuminance, METH_VARARGS,
   (char*)"V.SetOutputFormatToLuminance()\nC++: void SetOutputFormatToLuminance()\n\nSet the output format, the default is RGBA.\n"},
  {(char*)"SetActiveComponent", PyvtkImageMapToColors_SetActiveComponent, METH_VARARGS,
   (char*)"V.SetActiveComponent(int)\nC++: void SetActiveComponent(int a)\n\nSet the component to map for multi-component images (default: 0)\n"},
  {(char*)"GetActiveComponent", PyvtkImageMapToColors_GetActiveComponent, METH_VARARGS,
   (char*)"V.GetActiveComponent() -> int\nC++: int GetActiveComponent()\n\nSet the component to map for multi-component images (default: 0)\n"},
  {(char*)"SetPassAlphaToOutput", PyvtkImageMapToColors_SetPassAlphaToOutput, METH_VARARGS,
   (char*)"V.SetPassAlphaToOutput(int)\nC++: void SetPassAlphaToOutput(int a)\n\nUse the alpha component of the input when computing the alpha\ncomponent of the output (useful when converting monochrome+alpha\ndata to RGBA)\n"},
  {(char*)"PassAlphaToOutputOn", PyvtkImageMapToColors_PassAlphaToOutputOn, METH_VARARGS,
   (char*)"V.PassAlphaToOutputOn()\nC++: void PassAlphaToOutputOn()\n\nUse the alpha component of the input when computing the alpha\ncomponent of the output (useful when converting monochrome+alpha\ndata to RGBA)\n"},
  {(char*)"PassAlphaToOutputOff", PyvtkImageMapToColors_PassAlphaToOutputOff, METH_VARARGS,
   (char*)"V.PassAlphaToOutputOff()\nC++: void PassAlphaToOutputOff()\n\nUse the alpha component of the input when computing the alpha\ncomponent of the output (useful when converting monochrome+alpha\ndata to RGBA)\n"},
  {(char*)"GetPassAlphaToOutput", PyvtkImageMapToColors_GetPassAlphaToOutput, METH_VARARGS,
   (char*)"V.GetPassAlphaToOutput() -> int\nC++: int GetPassAlphaToOutput()\n\nUse the alpha component of the input when computing the alpha\ncomponent of the output (useful when converting monochrome+alpha\ndata to RGBA)\n"},
  {(char*)"GetMTime", PyvtkImageMapToColors_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nWe need to check the modified time of the lookup table too.\n"},
  {(char*)"SetNaNColor", PyvtkImageMapToColors_SetNaNColor, METH_VARARGS,
   (char*)"V.SetNaNColor(int, int, int, int)\nC++: void SetNaNColor(unsigned char, unsigned char, unsigned char,\n     unsigned char)\nV.SetNaNColor((int, int, int, int))\nC++: void SetNaNColor(unsigned char a[4])\n\n"},
  {(char*)"GetNaNColor", PyvtkImageMapToColors_GetNaNColor, METH_VARARGS,
   (char*)"V.GetNaNColor() -> (int, int, int, int)\nC++: unsigned char *GetNaNColor()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageMapToColors_StaticNew()
{
  return vtkImageMapToColors::New();
}

PyObject *PyVTKClass_vtkImageMapToColorsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageMapToColors_StaticNew,
    PyvtkImageMapToColors_Methods,
    "vtkImageMapToColors", modulename,
    NULL, NULL,
    PyvtkImageMapToColors_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageMapToColors_Doc()
{
  static const char *docstring[] = {
    "vtkImageMapToColors - map the input image through a lookup table\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "The vtkImageMapToColors filter will take an input image of any valid\nscalar type, and map the first component of the image through a\nlookup table.  The result is an image of type VTK_UNSIGNED_CHAR. If\nthe lookup table is not set, or is set to NULL, then the input data\nwill be passed through if it is already of type VTK_UNSIGNED_CHAR.\n\nSee Also:\n\nvtkLookupTable vtkScalarsToColors\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMapToColors(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMapToColorsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMapToColors", o) != 0)
    {
    Py_DECREF(o);
    }

}

