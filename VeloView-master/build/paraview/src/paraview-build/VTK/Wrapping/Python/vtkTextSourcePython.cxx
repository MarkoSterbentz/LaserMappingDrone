// python wrapper for vtkTextSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTextSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTextSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTextSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkTextSource_Doc();


static PyObject *
PyvtkTextSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTextSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextSource::NewInstance());

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
PyvtkTextSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTextSource *tempr = vtkTextSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextSource_SetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetText(temp0);
      }
    else
      {
      op->vtkTextSource::SetText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextSource_GetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetText() :
      op->vtkTextSource::GetText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextSource_SetBacking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBacking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBacking(temp0);
      }
    else
      {
      op->vtkTextSource::SetBacking(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextSource_GetBacking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBacking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBacking() :
      op->vtkTextSource::GetBacking());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextSource_BackingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BackingOn();
      }
    else
      {
      op->vtkTextSource::BackingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextSource_BackingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BackingOff();
      }
    else
      {
      op->vtkTextSource::BackingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextSource_SetForegroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

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
      op->SetForegroundColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTextSource::SetForegroundColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextSource_SetForegroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetForegroundColor(temp0);
      }
    else
      {
      op->vtkTextSource::SetForegroundColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextSource_SetForegroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTextSource_SetForegroundColor_s1(self, args);
    case 1:
      return PyvtkTextSource_SetForegroundColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetForegroundColor");
  return NULL;
}



static PyObject *
PyvtkTextSource_GetForegroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForegroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetForegroundColor() :
      op->vtkTextSource::GetForegroundColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTextSource_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

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
      op->SetBackgroundColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTextSource::SetBackgroundColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextSource_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundColor(temp0);
      }
    else
      {
      op->vtkTextSource::SetBackgroundColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextSource_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTextSource_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkTextSource_SetBackgroundColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return NULL;
}



static PyObject *
PyvtkTextSource_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor() :
      op->vtkTextSource::GetBackgroundColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTextSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

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
      op->vtkTextSource::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSource *op = static_cast<vtkTextSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkTextSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTextSource_Methods[] = {
  {(char*)"GetClassName", PyvtkTextSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTextSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTextSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTextSource\nC++: vtkTextSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTextSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTextSource\nC++: vtkTextSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetText", PyvtkTextSource_SetText, METH_VARARGS,
   (char*)"V.SetText(string)\nC++: void SetText(char *)\n\nSet/Get the text to be drawn.\n"},
  {(char*)"GetText", PyvtkTextSource_GetText, METH_VARARGS,
   (char*)"V.GetText() -> string\nC++: char *GetText()\n\nSet/Get the text to be drawn.\n"},
  {(char*)"SetBacking", PyvtkTextSource_SetBacking, METH_VARARGS,
   (char*)"V.SetBacking(int)\nC++: void SetBacking(int a)\n\nControls whether or not a background is drawn with the text.\n"},
  {(char*)"GetBacking", PyvtkTextSource_GetBacking, METH_VARARGS,
   (char*)"V.GetBacking() -> int\nC++: int GetBacking()\n\nControls whether or not a background is drawn with the text.\n"},
  {(char*)"BackingOn", PyvtkTextSource_BackingOn, METH_VARARGS,
   (char*)"V.BackingOn()\nC++: void BackingOn()\n\nControls whether or not a background is drawn with the text.\n"},
  {(char*)"BackingOff", PyvtkTextSource_BackingOff, METH_VARARGS,
   (char*)"V.BackingOff()\nC++: void BackingOff()\n\nControls whether or not a background is drawn with the text.\n"},
  {(char*)"SetForegroundColor", PyvtkTextSource_SetForegroundColor, METH_VARARGS,
   (char*)"V.SetForegroundColor(float, float, float)\nC++: void SetForegroundColor(double, double, double)\nV.SetForegroundColor((float, float, float))\nC++: void SetForegroundColor(double a[3])\n\n"},
  {(char*)"GetForegroundColor", PyvtkTextSource_GetForegroundColor, METH_VARARGS,
   (char*)"V.GetForegroundColor() -> (float, float, float)\nC++: double *GetForegroundColor()\n\nSet/Get the foreground color. Default is white (1,1,1). ALpha is\nalways 1.\n"},
  {(char*)"SetBackgroundColor", PyvtkTextSource_SetBackgroundColor, METH_VARARGS,
   (char*)"V.SetBackgroundColor(float, float, float)\nC++: void SetBackgroundColor(double, double, double)\nV.SetBackgroundColor((float, float, float))\nC++: void SetBackgroundColor(double a[3])\n\n"},
  {(char*)"GetBackgroundColor", PyvtkTextSource_GetBackgroundColor, METH_VARARGS,
   (char*)"V.GetBackgroundColor() -> (float, float, float)\nC++: double *GetBackgroundColor()\n\nSet/Get the background color. Default is black (0,0,0). Alpha is\nalways 1.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkTextSource_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkTextSource_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextSource_StaticNew()
{
  return vtkTextSource::New();
}

PyObject *PyVTKClass_vtkTextSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextSource_StaticNew,
    PyvtkTextSource_Methods,
    "vtkTextSource", modulename,
    NULL, NULL,
    PyvtkTextSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTextSource_Doc()
{
  static const char *docstring[] = {
    "vtkTextSource - create polygonal text\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkTextSource converts a text string into polygons.  This way you can\ninsert text into your renderings. It uses the 9x15 font from X\nWindows. You can specify if you want the background to be drawn or\nnot. The characters are formed by scan converting the raster font\ninto quadrilaterals. Colors are assigned to the letters using scalar\ndata. To set the color of the characters with the source's actor\n",
    "property, set BackingOff on the text source and ScalarVisibilityOff\non the associated vtkPolyDataMapper. Then, the color can be set using\nthe associated actor's property.\n\nvtkVectorText generates higher quality polygonal representations of\ncharacters.\n\nSee Also:\n\nvtkVectorText\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

