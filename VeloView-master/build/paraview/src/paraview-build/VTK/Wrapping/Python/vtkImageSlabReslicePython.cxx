// python wrapper for vtkImageSlabReslice
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageSlabReslice.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageSlabReslice(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageSlabResliceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageResliceNew
extern "C" { PyObject *PyVTKClass_vtkImageResliceNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageResliceNew
#endif

static const char **PyvtkImageSlabReslice_Doc();


static PyObject *
PyvtkImageSlabReslice_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageSlabReslice::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSlabReslice::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageSlabReslice *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSlabReslice::NewInstance());

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
PyvtkImageSlabReslice_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageSlabReslice *tempr = vtkImageSlabReslice::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_SetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBlendMode(temp0);
      }
    else
      {
      op->vtkImageSlabReslice::SetBlendMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_GetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBlendMode() :
      op->vtkImageSlabReslice::GetBlendMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_SetBlendModeToMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBlendModeToMin();
      }
    else
      {
      op->vtkImageSlabReslice::SetBlendModeToMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_SetBlendModeToMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBlendModeToMax();
      }
    else
      {
      op->vtkImageSlabReslice::SetBlendModeToMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_SetBlendModeToMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBlendModeToMean();
      }
    else
      {
      op->vtkImageSlabReslice::SetBlendModeToMean();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_GetNumBlendSamplePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumBlendSamplePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumBlendSamplePoints() :
      op->vtkImageSlabReslice::GetNumBlendSamplePoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_SetSlabThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSlabThickness(temp0);
      }
    else
      {
      op->vtkImageSlabReslice::SetSlabThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_GetSlabThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSlabThickness() :
      op->vtkImageSlabReslice::GetSlabThickness());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_SetSlabResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSlabResolution(temp0);
      }
    else
      {
      op->vtkImageSlabReslice::SetSlabResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_GetSlabResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSlabResolution() :
      op->vtkImageSlabReslice::GetSlabResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageSlabReslice_Methods[] = {
  {(char*)"GetClassName", PyvtkImageSlabReslice_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageSlabReslice_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageSlabReslice_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageSlabReslice\nC++: vtkImageSlabReslice *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageSlabReslice_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageSlabReslice\nC++: vtkImageSlabReslice *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetBlendMode", PyvtkImageSlabReslice_SetBlendMode, METH_VARARGS,
   (char*)"V.SetBlendMode(int)\nC++: void SetBlendMode(int a)\n\nSet/Get the blend mode. Default is MIP (ie Max)\n"},
  {(char*)"GetBlendMode", PyvtkImageSlabReslice_GetBlendMode, METH_VARARGS,
   (char*)"V.GetBlendMode() -> int\nC++: int GetBlendMode()\n\nSet/Get the blend mode. Default is MIP (ie Max)\n"},
  {(char*)"SetBlendModeToMin", PyvtkImageSlabReslice_SetBlendModeToMin, METH_VARARGS,
   (char*)"V.SetBlendModeToMin()\nC++: void SetBlendModeToMin()\n\nSet/Get the blend mode. Default is MIP (ie Max)\n"},
  {(char*)"SetBlendModeToMax", PyvtkImageSlabReslice_SetBlendModeToMax, METH_VARARGS,
   (char*)"V.SetBlendModeToMax()\nC++: void SetBlendModeToMax()\n\nSet/Get the blend mode. Default is MIP (ie Max)\n"},
  {(char*)"SetBlendModeToMean", PyvtkImageSlabReslice_SetBlendModeToMean, METH_VARARGS,
   (char*)"V.SetBlendModeToMean()\nC++: void SetBlendModeToMean()\n\nSet/Get the blend mode. Default is MIP (ie Max)\n"},
  {(char*)"GetNumBlendSamplePoints", PyvtkImageSlabReslice_GetNumBlendSamplePoints, METH_VARARGS,
   (char*)"V.GetNumBlendSamplePoints() -> int\nC++: int GetNumBlendSamplePoints()\n\nNumber of sample points used across the slab cross-section. If\nequal to 1, this ends up being a thin reslice through the data\na.k.a. vtkImageReslice\n"},
  {(char*)"SetSlabThickness", PyvtkImageSlabReslice_SetSlabThickness, METH_VARARGS,
   (char*)"V.SetSlabThickness(float)\nC++: void SetSlabThickness(double a)\n\nSlabThickness of slab in world coords. SlabThickness must be\nnon-zero and positive.\n"},
  {(char*)"GetSlabThickness", PyvtkImageSlabReslice_GetSlabThickness, METH_VARARGS,
   (char*)"V.GetSlabThickness() -> float\nC++: double GetSlabThickness()\n\nSlabThickness of slab in world coords. SlabThickness must be\nnon-zero and positive.\n"},
  {(char*)"SetSlabResolution", PyvtkImageSlabReslice_SetSlabResolution, METH_VARARGS,
   (char*)"V.SetSlabResolution(float)\nC++: void SetSlabResolution(double a)\n\nSpacing between slabs in world units. (Number of Slices, ie\nsamples to blend is computed from SlabThickness and\nSlabResolution).\n"},
  {(char*)"GetSlabResolution", PyvtkImageSlabReslice_GetSlabResolution, METH_VARARGS,
   (char*)"V.GetSlabResolution() -> float\nC++: double GetSlabResolution()\n\nSpacing between slabs in world units. (Number of Slices, ie\nsamples to blend is computed from SlabThickness and\nSlabResolution).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageSlabReslice_StaticNew()
{
  return vtkImageSlabReslice::New();
}

PyObject *PyVTKClass_vtkImageSlabResliceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageSlabReslice_StaticNew,
    PyvtkImageSlabReslice_Methods,
    "vtkImageSlabReslice", modulename,
    NULL, NULL,
    PyvtkImageSlabReslice_Doc(),
    PyVTKClass_vtkImageResliceNew(modulename));
  return cls;
}

const char **PyvtkImageSlabReslice_Doc()
{
  static const char *docstring[] = {
    "vtkImageSlabReslice - Thick slab reformat through data.\n\n",
    "Superclass: vtkImageReslice\n\n",
    "This class derives from vtkImageResliceBase. Much like\nvtkImageReslice, it reslices the data. It is multi-threaded. It takes\na three dimensional image as input and produces a two dimensional\nthick MPR along some direction.\n\nThe class reslices the thick slab using a blending function.\nSupported blending functions are Minimum Intensity blend through the\nslab, maximum intensity blend and a Mean (aver",
    "age) intensity of\nvalues across the slab.\n\nThe user can adjust the thickness of the slab by using the method\nSetSlabThickness. The distance between sample points used for\nblending across the thickness of the slab is controlled by the method\nSetSlabResolution. These two methods determine the number of slices\nused across the slab for blending, which is computed as {(2 x\n(int)(0.5 x SlabThickness/Sla",
    "bResolution)) + 1}. This value may be\nqueried via GetNumBlendSamplePoints() and is always >= 1.\n\nMuch like vtkImageReslice, the reslice axes direction cosines may be\nset via the methods SetResliceAxes or SetResliceAxesDirectionCosines.\nThe output spacing is controlled by SetOutputSpacing and the output\norigin is controlled by SetOutputOrigin. The default value to be set\non pixels that lie outside ",
    "the volume when reformatting is controlled\nby SetBackgroundColor or SetBackgroundLevel. The\nSetResliceAxesOrigin() method can also be used to provide an (x,y,z)\npoint that the slice will pass through.\n\nSee Also:\n\nvtkImageReslice\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageSlabReslice(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageSlabResliceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageSlabReslice", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_IMAGESLAB_BLEND_MIN", VTK_IMAGE_SLAB_MIN },
        { "VTK_IMAGESLAB_BLEND_MAX", VTK_IMAGE_SLAB_MAX },
        { "VTK_IMAGESLAB_BLEND_MEAN", VTK_IMAGE_SLAB_MEAN },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

