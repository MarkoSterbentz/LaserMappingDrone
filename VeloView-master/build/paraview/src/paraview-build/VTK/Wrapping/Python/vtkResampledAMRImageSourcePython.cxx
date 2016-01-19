// python wrapper for vtkResampledAMRImageSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkResampledAMRImageSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkResampledAMRImageSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkResampledAMRImageSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTrivialProducerNew
extern "C" { PyObject *PyVTKClass_vtkTrivialProducerNew(const char *); }
#define DECLARED_PyVTKClass_vtkTrivialProducerNew
#endif

static const char **PyvtkResampledAMRImageSource_Doc();


static PyObject *
PyvtkResampledAMRImageSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkResampledAMRImageSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResampledAMRImageSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResampledAMRImageSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResampledAMRImageSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResampledAMRImageSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResampledAMRImageSource::NewInstance());

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
PyvtkResampledAMRImageSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkResampledAMRImageSource *tempr = vtkResampledAMRImageSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResampledAMRImageSource_SetMaxDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetMaxDimensions(temp0, temp1, temp2);
      }
    else
      {
      op->vtkResampledAMRImageSource::SetMaxDimensions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkResampledAMRImageSource_SetMaxDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMaxDimensions(temp0);
      }
    else
      {
      op->vtkResampledAMRImageSource::SetMaxDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkResampledAMRImageSource_SetMaxDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkResampledAMRImageSource_SetMaxDimensions_s1(self, args);
    case 1:
      return PyvtkResampledAMRImageSource_SetMaxDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaxDimensions");
  return NULL;
}



static PyObject *
PyvtkResampledAMRImageSource_GetMaxDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetMaxDimensions() :
      op->vtkResampledAMRImageSource::GetMaxDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkResampledAMRImageSource_SetSpatialBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpatialBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetSpatialBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkResampledAMRImageSource::SetSpatialBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkResampledAMRImageSource_SetSpatialBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpatialBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSpatialBounds(temp0);
      }
    else
      {
      op->vtkResampledAMRImageSource::SetSpatialBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkResampledAMRImageSource_SetSpatialBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkResampledAMRImageSource_SetSpatialBounds_s1(self, args);
    case 1:
      return PyvtkResampledAMRImageSource_SetSpatialBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSpatialBounds");
  return NULL;
}



static PyObject *
PyvtkResampledAMRImageSource_GetSpatialBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpatialBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSpatialBounds() :
      op->vtkResampledAMRImageSource::GetSpatialBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkResampledAMRImageSource_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkResampledAMRImageSource::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResampledAMRImageSource_UpdateResampledVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateResampledVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  vtkOverlappingAMR *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR"))
    {
    if (ap.IsBound())
      {
      op->UpdateResampledVolume(temp0);
      }
    else
      {
      op->vtkResampledAMRImageSource::UpdateResampledVolume(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResampledAMRImageSource_NeedsInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedsInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->NeedsInitialization() :
      op->vtkResampledAMRImageSource::NeedsInitialization());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkResampledAMRImageSource_Methods[] = {
  {(char*)"GetClassName", PyvtkResampledAMRImageSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkResampledAMRImageSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkResampledAMRImageSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkResampledAMRImageSource\nC++: vtkResampledAMRImageSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkResampledAMRImageSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkResampledAMRImageSource\nC++: vtkResampledAMRImageSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaxDimensions", PyvtkResampledAMRImageSource_SetMaxDimensions, METH_VARARGS,
   (char*)"V.SetMaxDimensions(int, int, int)\nC++: void SetMaxDimensions(int, int, int)\nV.SetMaxDimensions((int, int, int))\nC++: void SetMaxDimensions(int a[3])\n\n"},
  {(char*)"GetMaxDimensions", PyvtkResampledAMRImageSource_GetMaxDimensions, METH_VARARGS,
   (char*)"V.GetMaxDimensions() -> (int, int, int)\nC++: int *GetMaxDimensions()\n\n"},
  {(char*)"SetSpatialBounds", PyvtkResampledAMRImageSource_SetSpatialBounds, METH_VARARGS,
   (char*)"V.SetSpatialBounds(float, float, float, float, float, float)\nC++: void SetSpatialBounds(double, double, double, double, double,\n     double)\nV.SetSpatialBounds((float, float, float, float, float, float))\nC++: void SetSpatialBounds(double a[6])\n\n"},
  {(char*)"GetSpatialBounds", PyvtkResampledAMRImageSource_GetSpatialBounds, METH_VARARGS,
   (char*)"V.GetSpatialBounds() -> (float, float, float, float, float, float)\nC++: double *GetSpatialBounds()\n\n"},
  {(char*)"Reset", PyvtkResampledAMRImageSource_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\nTo restart the incremental resample process, call this method.\nThe output image data is setup in the first call to Update().\n"},
  {(char*)"UpdateResampledVolume", PyvtkResampledAMRImageSource_UpdateResampledVolume, METH_VARARGS,
   (char*)"V.UpdateResampledVolume(vtkOverlappingAMR)\nC++: void UpdateResampledVolume(vtkOverlappingAMR *)\n\nUpdates the volume. Any non-empty pieces provided by the amr are\nadded to the resampled volume if it adds refinement to the\nvolume.\n"},
  {(char*)"NeedsInitialization", PyvtkResampledAMRImageSource_NeedsInitialization, METH_VARARGS,
   (char*)"V.NeedsInitialization() -> bool\nC++: bool NeedsInitialization()\n\nReturns true if the resampler will reinitialize the volume in the\nnext call to UpdateResampledVolume().\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkResampledAMRImageSource_StaticNew()
{
  return vtkResampledAMRImageSource::New();
}

PyObject *PyVTKClass_vtkResampledAMRImageSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkResampledAMRImageSource_StaticNew,
    PyvtkResampledAMRImageSource_Methods,
    "vtkResampledAMRImageSource", modulename,
    NULL, NULL,
    PyvtkResampledAMRImageSource_Doc(),
    PyVTKClass_vtkTrivialProducerNew(modulename));
  return cls;
}

const char **PyvtkResampledAMRImageSource_Doc()
{
  static const char *docstring[] = {
    "vtkResampledAMRImageSource - image data source that resamples an AMR\n\n",
    "Superclass: vtkTrivialProducer\n\n",
    "vtkResampledAMRImageSource is a image data source that resamples a\nvtkOverlappingAMR dataset to produce an image data. The output AMR\nwill have both the point data and cell data from the input AMR grids\npassed along as point data for the output image data. This filter\nassumes that all blocks in the input AMR have exactly the same\npoint/cell arrays in same order. If they are different we will end u",
    "p\nwith weird runtime issues that may be hard to debug.\n\nNotes:\n\nWe subclass vtkTrivialProducer since it deals with all the meta-data\nthat needs to be passed down the pipeline for image data, keeping the\ncode here simple.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkResampledAMRImageSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkResampledAMRImageSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkResampledAMRImageSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

