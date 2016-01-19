// python wrapper for vtkImageResample
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageResample.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageResample(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageResampleNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageResliceNew
extern "C" { PyObject *PyVTKClass_vtkImageResliceNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageResliceNew
#endif

static const char **PyvtkImageResample_Doc();


static PyObject *
PyvtkImageResample_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageResample::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResample_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageResample::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResample_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageResample *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageResample::NewInstance());

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
PyvtkImageResample_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageResample *tempr = vtkImageResample::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResample_SetAxisOutputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAxisOutputSpacing(temp0, temp1);
      }
    else
      {
      op->vtkImageResample::SetAxisOutputSpacing(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResample_SetAxisMagnificationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisMagnificationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAxisMagnificationFactor(temp0, temp1);
      }
    else
      {
      op->vtkImageResample::SetAxisMagnificationFactor(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResample_GetAxisMagnificationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMagnificationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  int temp0;
  vtkInformation *temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkInformation")))
    {
    double tempr = (ap.IsBound() ?
      op->GetAxisMagnificationFactor(temp0, temp1) :
      op->vtkImageResample::GetAxisMagnificationFactor(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageResample_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimensionality(temp0);
      }
    else
      {
      op->vtkImageResample::SetDimensionality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageResample_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageResample::GetDimensionality());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageResample_Methods[] = {
  {(char*)"GetClassName", PyvtkImageResample_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageResample_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageResample_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageResample\nC++: vtkImageResample *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageResample_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageResample\nC++: vtkImageResample *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAxisOutputSpacing", PyvtkImageResample_SetAxisOutputSpacing, METH_VARARGS,
   (char*)"V.SetAxisOutputSpacing(int, float)\nC++: void SetAxisOutputSpacing(int axis, double spacing)\n\nSet desired spacing. Zero is a reserved value indicating spacing\nhas not been set.\n"},
  {(char*)"SetAxisMagnificationFactor", PyvtkImageResample_SetAxisMagnificationFactor, METH_VARARGS,
   (char*)"V.SetAxisMagnificationFactor(int, float)\nC++: void SetAxisMagnificationFactor(int axis, double factor)\n\nSet/Get Magnification factors. Zero is a reserved value\nindicating values have not been computed.\n"},
  {(char*)"GetAxisMagnificationFactor", PyvtkImageResample_GetAxisMagnificationFactor, METH_VARARGS,
   (char*)"V.GetAxisMagnificationFactor(int, vtkInformation) -> float\nC++: double GetAxisMagnificationFactor(int axis,\n    vtkInformation *inInfo=0)\n\nSet/Get Magnification factors. Zero is a reserved value\nindicating values have not been computed.\n"},
  {(char*)"SetDimensionality", PyvtkImageResample_SetDimensionality, METH_VARARGS,
   (char*)"V.SetDimensionality(int)\nC++: void SetDimensionality(int a)\n\nDimensionality is the number of axes which are considered during\nexecution. To process images dimensionality would be set to 2.\nThis has the same effect as setting the magnification of the\nthird axis to 1.0\n"},
  {(char*)"GetDimensionality", PyvtkImageResample_GetDimensionality, METH_VARARGS,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nDimensionality is the number of axes which are considered during\nexecution. To process images dimensionality would be set to 2.\nThis has the same effect as setting the magnification of the\nthird axis to 1.0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageResample_StaticNew()
{
  return vtkImageResample::New();
}

PyObject *PyVTKClass_vtkImageResampleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageResample_StaticNew,
    PyvtkImageResample_Methods,
    "vtkImageResample", modulename,
    NULL, NULL,
    PyvtkImageResample_Doc(),
    PyVTKClass_vtkImageResliceNew(modulename));
  return cls;
}

const char **PyvtkImageResample_Doc()
{
  static const char *docstring[] = {
    "vtkImageResample - Resamples an image to be larger or smaller.\n\n",
    "Superclass: vtkImageReslice\n\n",
    "This filter produces an output with different spacing (and extent)\nthan the input.  Linear interpolation can be used to resample the\ndata. The Output spacing can be set explicitly or relative to input\nspacing with the SetAxisMagnificationFactor method.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageResample(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageResampleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageResample", o) != 0)
    {
    Py_DECREF(o);
    }

}

