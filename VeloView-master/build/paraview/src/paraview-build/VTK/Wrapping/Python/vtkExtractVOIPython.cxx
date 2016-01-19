// python wrapper for vtkExtractVOI
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractVOI.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractVOI(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractVOINew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkExtractVOI_Doc();


static PyObject *
PyvtkExtractVOI_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractVOI::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVOI_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractVOI::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVOI_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractVOI *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractVOI::NewInstance());

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
PyvtkExtractVOI_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractVOI *tempr = vtkExtractVOI::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVOI_SetVOI_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkExtractVOI::SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractVOI_SetVOI_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetVOI(temp0);
      }
    else
      {
      op->vtkExtractVOI::SetVOI(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractVOI_SetVOI(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkExtractVOI_SetVOI_s1(self, args);
    case 1:
      return PyvtkExtractVOI_SetVOI_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVOI");
  return NULL;
}



static PyObject *
PyvtkExtractVOI_GetVOI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetVOI() :
      op->vtkExtractVOI::GetVOI());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVOI_SetSampleRate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

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
      op->SetSampleRate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkExtractVOI::SetSampleRate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractVOI_SetSampleRate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSampleRate(temp0);
      }
    else
      {
      op->vtkExtractVOI::SetSampleRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractVOI_SetSampleRate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkExtractVOI_SetSampleRate_s1(self, args);
    case 1:
      return PyvtkExtractVOI_SetSampleRate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleRate");
  return NULL;
}



static PyObject *
PyvtkExtractVOI_GetSampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSampleRate() :
      op->vtkExtractVOI::GetSampleRate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVOI_SetIncludeBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIncludeBoundary(temp0);
      }
    else
      {
      op->vtkExtractVOI::SetIncludeBoundary(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVOI_GetIncludeBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIncludeBoundary() :
      op->vtkExtractVOI::GetIncludeBoundary());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVOI_IncludeBoundaryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeBoundaryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncludeBoundaryOn();
      }
    else
      {
      op->vtkExtractVOI::IncludeBoundaryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVOI_IncludeBoundaryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeBoundaryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncludeBoundaryOff();
      }
    else
      {
      op->vtkExtractVOI::IncludeBoundaryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractVOI_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractVOI_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractVOI_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractVOI_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractVOI\nC++: vtkExtractVOI *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractVOI_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractVOI\nC++: vtkExtractVOI *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVOI", PyvtkExtractVOI_SetVOI, METH_VARARGS,
   (char*)"V.SetVOI(int, int, int, int, int, int)\nC++: void SetVOI(int, int, int, int, int, int)\nV.SetVOI((int, int, int, int, int, int))\nC++: void SetVOI(int a[6])\n\n"},
  {(char*)"GetVOI", PyvtkExtractVOI_GetVOI, METH_VARARGS,
   (char*)"V.GetVOI() -> (int, int, int, int, int, int)\nC++: int *GetVOI()\n\nSpecify i-j-k (min,max) pairs to extract. The resulting\nstructured points dataset can be of any topological dimension\n(i.e., point, line, image, or volume).\n"},
  {(char*)"SetSampleRate", PyvtkExtractVOI_SetSampleRate, METH_VARARGS,
   (char*)"V.SetSampleRate(int, int, int)\nC++: void SetSampleRate(int, int, int)\nV.SetSampleRate((int, int, int))\nC++: void SetSampleRate(int a[3])\n\n"},
  {(char*)"GetSampleRate", PyvtkExtractVOI_GetSampleRate, METH_VARARGS,
   (char*)"V.GetSampleRate() -> (int, int, int)\nC++: int *GetSampleRate()\n\nSet the sampling rate in the i, j, and k directions. If the rate\nis > 1, then the resulting VOI will be subsampled representation\nof the input.  For example, if the SampleRate=(2,2,2), every\nother point will be selected, resulting in a volume 1/8th the\noriginal size.\n"},
  {(char*)"SetIncludeBoundary", PyvtkExtractVOI_SetIncludeBoundary, METH_VARARGS,
   (char*)"V.SetIncludeBoundary(int)\nC++: void SetIncludeBoundary(int a)\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {(char*)"GetIncludeBoundary", PyvtkExtractVOI_GetIncludeBoundary, METH_VARARGS,
   (char*)"V.GetIncludeBoundary() -> int\nC++: int GetIncludeBoundary()\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {(char*)"IncludeBoundaryOn", PyvtkExtractVOI_IncludeBoundaryOn, METH_VARARGS,
   (char*)"V.IncludeBoundaryOn()\nC++: void IncludeBoundaryOn()\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {(char*)"IncludeBoundaryOff", PyvtkExtractVOI_IncludeBoundaryOff, METH_VARARGS,
   (char*)"V.IncludeBoundaryOff()\nC++: void IncludeBoundaryOff()\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractVOI_StaticNew()
{
  return vtkExtractVOI::New();
}

PyObject *PyVTKClass_vtkExtractVOINew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractVOI_StaticNew,
    PyvtkExtractVOI_Methods,
    "vtkExtractVOI", modulename,
    NULL, NULL,
    PyvtkExtractVOI_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractVOI_Doc()
{
  static const char *docstring[] = {
    "vtkExtractVOI - select piece (e.g., volume of interest) and/or\nsubsample structured points dataset\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkExtractVOI is a filter that selects a portion of an input\nstructured points dataset, or subsamples an input dataset. (The\nselected portion of interested is referred to as the Volume Of\nInterest, or VOI.) The output of this filter is a structured points\ndataset. The filter treats input data of any topological dimension\n(i.e., point, line, image, or volume) and can generate output data of\nany top",
    "ological dimension.\n\nTo use this filter set the VOI ivar which are i-j-k min/max indices\nthat specify a rectangular region in the data. (Note that these are\n0-offset.) You can also specify a sampling rate to subsample the\ndata.\n\nTypical applications of this filter are to extract a slice from a\nvolume for image processing, subsampling large volumes to reduce data\nsize, or extracting regions of a vo",
    "lume with interesting data.\n\nSee Also:\n\nvtkGeometryFilter vtkExtractGeometry vtkExtractGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractVOI(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractVOINew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractVOI", o) != 0)
    {
    Py_DECREF(o);
    }

}

