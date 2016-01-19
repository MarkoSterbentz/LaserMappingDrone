// python wrapper for vtkPVExtractVOI
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVExtractVOI.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVExtractVOI(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVExtractVOINew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkPVExtractVOI_Doc();


static PyObject *
PyvtkPVExtractVOI_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVExtractVOI::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVExtractVOI::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVExtractVOI *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVExtractVOI::NewInstance());

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
PyvtkPVExtractVOI_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVExtractVOI *tempr = vtkPVExtractVOI::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_SetVOI_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

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
      op->vtkPVExtractVOI::SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVExtractVOI_SetVOI_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

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
      op->vtkPVExtractVOI::SetVOI(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVExtractVOI_SetVOI(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkPVExtractVOI_SetVOI_s1(self, args);
    case 1:
      return PyvtkPVExtractVOI_SetVOI_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVOI");
  return NULL;
}



static PyObject *
PyvtkPVExtractVOI_GetVOI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetVOI() :
      op->vtkPVExtractVOI::GetVOI());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_SetSampleRate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

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
      op->vtkPVExtractVOI::SetSampleRate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVExtractVOI_SetSampleRate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

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
      op->vtkPVExtractVOI::SetSampleRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVExtractVOI_SetSampleRate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPVExtractVOI_SetSampleRate_s1(self, args);
    case 1:
      return PyvtkPVExtractVOI_SetSampleRate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleRate");
  return NULL;
}



static PyObject *
PyvtkPVExtractVOI_GetSampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSampleRate() :
      op->vtkPVExtractVOI::GetSampleRate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_SetSampleRateI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRateI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSampleRateI(temp0);
      }
    else
      {
      op->vtkPVExtractVOI::SetSampleRateI(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_SetSampleRateJ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRateJ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSampleRateJ(temp0);
      }
    else
      {
      op->vtkPVExtractVOI::SetSampleRateJ(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_SetSampleRateK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRateK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSampleRateK(temp0);
      }
    else
      {
      op->vtkPVExtractVOI::SetSampleRateK(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_GetSampleRateI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleRateI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSampleRateI() :
      op->vtkPVExtractVOI::GetSampleRateI());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_GetSampleRateJ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleRateJ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSampleRateJ() :
      op->vtkPVExtractVOI::GetSampleRateJ());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_GetSampleRateK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleRateK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSampleRateK() :
      op->vtkPVExtractVOI::GetSampleRateK());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_SetIncludeBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

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
      op->vtkPVExtractVOI::SetIncludeBoundary(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_GetIncludeBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIncludeBoundary() :
      op->vtkPVExtractVOI::GetIncludeBoundary());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_IncludeBoundaryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeBoundaryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncludeBoundaryOn();
      }
    else
      {
      op->vtkPVExtractVOI::IncludeBoundaryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractVOI_IncludeBoundaryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeBoundaryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractVOI *op = static_cast<vtkPVExtractVOI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncludeBoundaryOff();
      }
    else
      {
      op->vtkPVExtractVOI::IncludeBoundaryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVExtractVOI_Methods[] = {
  {(char*)"GetClassName", PyvtkPVExtractVOI_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVExtractVOI_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVExtractVOI_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVExtractVOI\nC++: vtkPVExtractVOI *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVExtractVOI_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVExtractVOI\nC++: vtkPVExtractVOI *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVOI", PyvtkPVExtractVOI_SetVOI, METH_VARARGS,
   (char*)"V.SetVOI(int, int, int, int, int, int)\nC++: void SetVOI(int, int, int, int, int, int)\nV.SetVOI((int, int, int, int, int, int))\nC++: void SetVOI(int a[6])\n\n"},
  {(char*)"GetVOI", PyvtkPVExtractVOI_GetVOI, METH_VARARGS,
   (char*)"V.GetVOI() -> (int, int, int, int, int, int)\nC++: int *GetVOI()\n\nSpecify i-j-k (min,max) pairs to extract. The resulting\nstructured grid dataset can be of any topological dimension\n(i.e., point, line, plane, or 3D grid).\n"},
  {(char*)"SetSampleRate", PyvtkPVExtractVOI_SetSampleRate, METH_VARARGS,
   (char*)"V.SetSampleRate(int, int, int)\nC++: void SetSampleRate(int, int, int)\nV.SetSampleRate((int, int, int))\nC++: void SetSampleRate(int a[3])\n\n"},
  {(char*)"GetSampleRate", PyvtkPVExtractVOI_GetSampleRate, METH_VARARGS,
   (char*)"V.GetSampleRate() -> (int, int, int)\nC++: int *GetSampleRate()\n\nSet the sampling rate in the i, j, and k directions. If the rate\nis > 1, then the resulting VOI will be subsampled representation\nof the input. For example, if the SampleRate=(2,2,2), every other\npoint will be selected, resulting in a volume 1/8th the original\nsize.\n"},
  {(char*)"SetSampleRateI", PyvtkPVExtractVOI_SetSampleRateI, METH_VARARGS,
   (char*)"V.SetSampleRateI(int)\nC++: void SetSampleRateI(int ratei)\n\nSet/get the individual components of the sample rate.\n"},
  {(char*)"SetSampleRateJ", PyvtkPVExtractVOI_SetSampleRateJ, METH_VARARGS,
   (char*)"V.SetSampleRateJ(int)\nC++: void SetSampleRateJ(int ratej)\n\nSet/get the individual components of the sample rate.\n"},
  {(char*)"SetSampleRateK", PyvtkPVExtractVOI_SetSampleRateK, METH_VARARGS,
   (char*)"V.SetSampleRateK(int)\nC++: void SetSampleRateK(int ratek)\n\nSet/get the individual components of the sample rate.\n"},
  {(char*)"GetSampleRateI", PyvtkPVExtractVOI_GetSampleRateI, METH_VARARGS,
   (char*)"V.GetSampleRateI() -> int\nC++: int GetSampleRateI()\n\nSet/get the individual components of the sample rate.\n"},
  {(char*)"GetSampleRateJ", PyvtkPVExtractVOI_GetSampleRateJ, METH_VARARGS,
   (char*)"V.GetSampleRateJ() -> int\nC++: int GetSampleRateJ()\n\nSet/get the individual components of the sample rate.\n"},
  {(char*)"GetSampleRateK", PyvtkPVExtractVOI_GetSampleRateK, METH_VARARGS,
   (char*)"V.GetSampleRateK() -> int\nC++: int GetSampleRateK()\n\nSet/get the individual components of the sample rate.\n"},
  {(char*)"SetIncludeBoundary", PyvtkPVExtractVOI_SetIncludeBoundary, METH_VARARGS,
   (char*)"V.SetIncludeBoundary(int)\nC++: void SetIncludeBoundary(int a)\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {(char*)"GetIncludeBoundary", PyvtkPVExtractVOI_GetIncludeBoundary, METH_VARARGS,
   (char*)"V.GetIncludeBoundary() -> int\nC++: int GetIncludeBoundary()\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {(char*)"IncludeBoundaryOn", PyvtkPVExtractVOI_IncludeBoundaryOn, METH_VARARGS,
   (char*)"V.IncludeBoundaryOn()\nC++: void IncludeBoundaryOn()\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {(char*)"IncludeBoundaryOff", PyvtkPVExtractVOI_IncludeBoundaryOff, METH_VARARGS,
   (char*)"V.IncludeBoundaryOff()\nC++: void IncludeBoundaryOff()\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVExtractVOI_StaticNew()
{
  return vtkPVExtractVOI::New();
}

PyObject *PyVTKClass_vtkPVExtractVOINew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVExtractVOI_StaticNew,
    PyvtkPVExtractVOI_Methods,
    "vtkPVExtractVOI", modulename,
    NULL, NULL,
    PyvtkPVExtractVOI_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPVExtractVOI_Doc()
{
  static const char *docstring[] = {
    "vtkPVExtractVOI -  select piece (e.g., volume of interest) and/or\nsubsample structured dataset\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkPVExtractVOI is a wrapper around vtkExtractVOI, vtkExtractGrid and\nvtkExtractRectilinearGrid. It choose the right filter depending on\ninput and passes the necessary parameters.\n\nSee Also:\n\nvtkExtractVOI vtkExtractGrid vtkExtractRectilinearGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVExtractVOI(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVExtractVOINew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVExtractVOI", o) != 0)
    {
    Py_DECREF(o);
    }

}

