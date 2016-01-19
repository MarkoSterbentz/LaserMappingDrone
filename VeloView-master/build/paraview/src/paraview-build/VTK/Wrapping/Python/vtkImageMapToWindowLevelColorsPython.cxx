// python wrapper for vtkImageMapToWindowLevelColors
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageMapToWindowLevelColors.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageMapToWindowLevelColors(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageMapToWindowLevelColorsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageMapToColorsNew
extern "C" { PyObject *PyVTKClass_vtkImageMapToColorsNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageMapToColorsNew
#endif

static const char **PyvtkImageMapToWindowLevelColors_Doc();


static PyObject *
PyvtkImageMapToWindowLevelColors_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageMapToWindowLevelColors::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMapToWindowLevelColors::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageMapToWindowLevelColors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMapToWindowLevelColors::NewInstance());

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
PyvtkImageMapToWindowLevelColors_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageMapToWindowLevelColors *tempr = vtkImageMapToWindowLevelColors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_SetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWindow(temp0);
      }
    else
      {
      op->vtkImageMapToWindowLevelColors::SetWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetWindow() :
      op->vtkImageMapToWindowLevelColors::GetWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevel(temp0);
      }
    else
      {
      op->vtkImageMapToWindowLevelColors::SetLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkImageMapToWindowLevelColors::GetLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMapToWindowLevelColors_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMapToWindowLevelColors_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMapToWindowLevelColors_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMapToWindowLevelColors_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageMapToWindowLevelColors\nC++: vtkImageMapToWindowLevelColors *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMapToWindowLevelColors_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMapToWindowLevelColors\nC++: vtkImageMapToWindowLevelColors *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWindow", PyvtkImageMapToWindowLevelColors_SetWindow, METH_VARARGS,
   (char*)"V.SetWindow(float)\nC++: void SetWindow(double a)\n\nSet / Get the Window to use -> modulation will be performed on\nthe color based on (S - (L - W/2))/W where S is the scalar value,\nL is the level and W is the window.\n"},
  {(char*)"GetWindow", PyvtkImageMapToWindowLevelColors_GetWindow, METH_VARARGS,
   (char*)"V.GetWindow() -> float\nC++: double GetWindow()\n\nSet / Get the Window to use -> modulation will be performed on\nthe color based on (S - (L - W/2))/W where S is the scalar value,\nL is the level and W is the window.\n"},
  {(char*)"SetLevel", PyvtkImageMapToWindowLevelColors_SetLevel, METH_VARARGS,
   (char*)"V.SetLevel(float)\nC++: void SetLevel(double a)\n\nSet / Get the Level to use -> modulation will be performed on the\ncolor based on (S - (L - W/2))/W where S is the scalar value, L\nis the level and W is the window.\n"},
  {(char*)"GetLevel", PyvtkImageMapToWindowLevelColors_GetLevel, METH_VARARGS,
   (char*)"V.GetLevel() -> float\nC++: double GetLevel()\n\nSet / Get the Level to use -> modulation will be performed on the\ncolor based on (S - (L - W/2))/W where S is the scalar value, L\nis the level and W is the window.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageMapToWindowLevelColors_StaticNew()
{
  return vtkImageMapToWindowLevelColors::New();
}

PyObject *PyVTKClass_vtkImageMapToWindowLevelColorsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageMapToWindowLevelColors_StaticNew,
    PyvtkImageMapToWindowLevelColors_Methods,
    "vtkImageMapToWindowLevelColors", modulename,
    NULL, NULL,
    PyvtkImageMapToWindowLevelColors_Doc(),
    PyVTKClass_vtkImageMapToColorsNew(modulename));
  return cls;
}

const char **PyvtkImageMapToWindowLevelColors_Doc()
{
  static const char *docstring[] = {
    "vtkImageMapToWindowLevelColors - map the input image through a lookup\ntable and window / level it\n\n",
    "Superclass: vtkImageMapToColors\n\n",
    "The vtkImageMapToWindowLevelColors filter will take an input image of\nany valid scalar type, and map the first component of the image\nthrough a lookup table.  This resulting color will be modulated with\nvalue obtained by a window / level operation. The result is an image\nof type VTK_UNSIGNED_CHAR. If the lookup table is not set, or is set\nto NULL, then the input data will be passed through if it i",
    "s already\nof type UNSIGNED_CHAR.\n\nSee Also:\n\nvtkLookupTable vtkScalarsToColors\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMapToWindowLevelColors(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMapToWindowLevelColorsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMapToWindowLevelColors", o) != 0)
    {
    Py_DECREF(o);
    }

}

