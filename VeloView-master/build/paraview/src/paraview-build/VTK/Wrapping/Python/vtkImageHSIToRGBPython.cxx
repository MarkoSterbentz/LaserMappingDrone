// python wrapper for vtkImageHSIToRGB
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageHSIToRGB.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageHSIToRGB(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageHSIToRGBNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageHSIToRGB_Doc();


static PyObject *
PyvtkImageHSIToRGB_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSIToRGB *op = static_cast<vtkImageHSIToRGB *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageHSIToRGB::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageHSIToRGB_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSIToRGB *op = static_cast<vtkImageHSIToRGB *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageHSIToRGB::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageHSIToRGB_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSIToRGB *op = static_cast<vtkImageHSIToRGB *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageHSIToRGB *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageHSIToRGB::NewInstance());

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
PyvtkImageHSIToRGB_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageHSIToRGB *tempr = vtkImageHSIToRGB::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageHSIToRGB_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSIToRGB *op = static_cast<vtkImageHSIToRGB *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximum(temp0);
      }
    else
      {
      op->vtkImageHSIToRGB::SetMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageHSIToRGB_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSIToRGB *op = static_cast<vtkImageHSIToRGB *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximum() :
      op->vtkImageHSIToRGB::GetMaximum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageHSIToRGB_Methods[] = {
  {(char*)"GetClassName", PyvtkImageHSIToRGB_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageHSIToRGB_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageHSIToRGB_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageHSIToRGB\nC++: vtkImageHSIToRGB *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageHSIToRGB_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageHSIToRGB\nC++: vtkImageHSIToRGB *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaximum", PyvtkImageHSIToRGB_SetMaximum, METH_VARARGS,
   (char*)"V.SetMaximum(float)\nC++: void SetMaximum(double a)\n\nHue is an angle. Maximum specifies when it maps back to 0.\nHueMaximum defaults to 255 instead of 2PI, because unsigned char\nis expected as input. Maximum also specifies the maximum of the\nSaturation, and R, G, B.\n"},
  {(char*)"GetMaximum", PyvtkImageHSIToRGB_GetMaximum, METH_VARARGS,
   (char*)"V.GetMaximum() -> float\nC++: double GetMaximum()\n\nHue is an angle. Maximum specifies when it maps back to 0.\nHueMaximum defaults to 255 instead of 2PI, because unsigned char\nis expected as input. Maximum also specifies the maximum of the\nSaturation, and R, G, B.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageHSIToRGB_StaticNew()
{
  return vtkImageHSIToRGB::New();
}

PyObject *PyVTKClass_vtkImageHSIToRGBNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageHSIToRGB_StaticNew,
    PyvtkImageHSIToRGB_Methods,
    "vtkImageHSIToRGB", modulename,
    NULL, NULL,
    PyvtkImageHSIToRGB_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageHSIToRGB_Doc()
{
  static const char *docstring[] = {
    "vtkImageHSIToRGB - Converts HSI components to RGB.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "For each pixel with hue, saturation and intensity components this\nfilter outputs the color coded as red, green, blue.  Output type must\nbe the same as input type.\n\nSee Also:\n\nvtkImageRGBToHSI\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageHSIToRGB(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageHSIToRGBNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageHSIToRGB", o) != 0)
    {
    Py_DECREF(o);
    }

}

