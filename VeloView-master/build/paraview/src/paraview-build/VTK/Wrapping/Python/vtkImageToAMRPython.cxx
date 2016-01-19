// python wrapper for vtkImageToAMR
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageToAMR.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageToAMR(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageToAMRNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkOverlappingAMRAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkOverlappingAMRAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkOverlappingAMRAlgorithmNew
#endif

static const char **PyvtkImageToAMR_Doc();


static PyObject *
PyvtkImageToAMR_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageToAMR::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToAMR_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageToAMR::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToAMR_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageToAMR *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageToAMR::NewInstance());

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
PyvtkImageToAMR_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageToAMR *tempr = vtkImageToAMR::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToAMR_SetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfLevels(temp0);
      }
    else
      {
      op->vtkImageToAMR::SetNumberOfLevels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetNumberOfLevelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevelsMinValue() :
      op->vtkImageToAMR::GetNumberOfLevelsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetNumberOfLevelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevelsMaxValue() :
      op->vtkImageToAMR::GetNumberOfLevelsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkImageToAMR::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToAMR_SetRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRefinementRatio(temp0);
      }
    else
      {
      op->vtkImageToAMR::SetRefinementRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetRefinementRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRefinementRatioMinValue() :
      op->vtkImageToAMR::GetRefinementRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetRefinementRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRefinementRatioMaxValue() :
      op->vtkImageToAMR::GetRefinementRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRefinementRatio() :
      op->vtkImageToAMR::GetRefinementRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToAMR_SetMaximumNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfBlocks(temp0);
      }
    else
      {
      op->vtkImageToAMR::SetMaximumNumberOfBlocks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetMaximumNumberOfBlocksMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfBlocksMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfBlocksMinValue() :
      op->vtkImageToAMR::GetMaximumNumberOfBlocksMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetMaximumNumberOfBlocksMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfBlocksMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfBlocksMaxValue() :
      op->vtkImageToAMR::GetMaximumNumberOfBlocksMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToAMR_GetMaximumNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToAMR *op = static_cast<vtkImageToAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfBlocks() :
      op->vtkImageToAMR::GetMaximumNumberOfBlocks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageToAMR_Methods[] = {
  {(char*)"GetClassName", PyvtkImageToAMR_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageToAMR_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageToAMR_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageToAMR\nC++: vtkImageToAMR *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageToAMR_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageToAMR\nC++: vtkImageToAMR *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfLevels", PyvtkImageToAMR_SetNumberOfLevels, METH_VARARGS,
   (char*)"V.SetNumberOfLevels(int)\nC++: void SetNumberOfLevels(int)\n\nSet the maximum number of levels in the generated\nOverlapping-AMR.\n"},
  {(char*)"GetNumberOfLevelsMinValue", PyvtkImageToAMR_GetNumberOfLevelsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfLevelsMinValue() -> int\nC++: int GetNumberOfLevelsMinValue()\n\nSet the maximum number of levels in the generated\nOverlapping-AMR.\n"},
  {(char*)"GetNumberOfLevelsMaxValue", PyvtkImageToAMR_GetNumberOfLevelsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfLevelsMaxValue() -> int\nC++: int GetNumberOfLevelsMaxValue()\n\nSet the maximum number of levels in the generated\nOverlapping-AMR.\n"},
  {(char*)"GetNumberOfLevels", PyvtkImageToAMR_GetNumberOfLevels, METH_VARARGS,
   (char*)"V.GetNumberOfLevels() -> int\nC++: int GetNumberOfLevels()\n\nSet the maximum number of levels in the generated\nOverlapping-AMR.\n"},
  {(char*)"SetRefinementRatio", PyvtkImageToAMR_SetRefinementRatio, METH_VARARGS,
   (char*)"V.SetRefinementRatio(int)\nC++: void SetRefinementRatio(int)\n\nSet the refinement ratio for levels. This refinement ratio is\nused for all levels.\n"},
  {(char*)"GetRefinementRatioMinValue", PyvtkImageToAMR_GetRefinementRatioMinValue, METH_VARARGS,
   (char*)"V.GetRefinementRatioMinValue() -> int\nC++: int GetRefinementRatioMinValue()\n\nSet the refinement ratio for levels. This refinement ratio is\nused for all levels.\n"},
  {(char*)"GetRefinementRatioMaxValue", PyvtkImageToAMR_GetRefinementRatioMaxValue, METH_VARARGS,
   (char*)"V.GetRefinementRatioMaxValue() -> int\nC++: int GetRefinementRatioMaxValue()\n\nSet the refinement ratio for levels. This refinement ratio is\nused for all levels.\n"},
  {(char*)"GetRefinementRatio", PyvtkImageToAMR_GetRefinementRatio, METH_VARARGS,
   (char*)"V.GetRefinementRatio() -> int\nC++: int GetRefinementRatio()\n\nSet the refinement ratio for levels. This refinement ratio is\nused for all levels.\n"},
  {(char*)"SetMaximumNumberOfBlocks", PyvtkImageToAMR_SetMaximumNumberOfBlocks, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfBlocks(int)\nC++: void SetMaximumNumberOfBlocks(int)\n\nSet the maximun number of blocks in the output\n"},
  {(char*)"GetMaximumNumberOfBlocksMinValue", PyvtkImageToAMR_GetMaximumNumberOfBlocksMinValue, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfBlocksMinValue() -> int\nC++: int GetMaximumNumberOfBlocksMinValue()\n\nSet the maximun number of blocks in the output\n"},
  {(char*)"GetMaximumNumberOfBlocksMaxValue", PyvtkImageToAMR_GetMaximumNumberOfBlocksMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfBlocksMaxValue() -> int\nC++: int GetMaximumNumberOfBlocksMaxValue()\n\nSet the maximun number of blocks in the output\n"},
  {(char*)"GetMaximumNumberOfBlocks", PyvtkImageToAMR_GetMaximumNumberOfBlocks, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfBlocks() -> int\nC++: int GetMaximumNumberOfBlocks()\n\nSet the maximun number of blocks in the output\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageToAMR_StaticNew()
{
  return vtkImageToAMR::New();
}

PyObject *PyVTKClass_vtkImageToAMRNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageToAMR_StaticNew,
    PyvtkImageToAMR_Methods,
    "vtkImageToAMR", modulename,
    NULL, NULL,
    PyvtkImageToAMR_Doc(),
    PyVTKClass_vtkOverlappingAMRAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageToAMR_Doc()
{
  static const char *docstring[] = {
    "vtkImageToAMR - filter to convert any vtkImageData to a\n\n",
    "Superclass: vtkOverlappingAMRAlgorithm\n\n",
    "vtkImageToAMR is a simple filter that converts any vtkImageData to a\nvtkOverlappingAMR dataset. The input vtkImageData is treated as the\nhighest refinement available for the highest level. The lower\nrefinements and the number of blocks is controlled properties\nspecified on the filter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageToAMR(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageToAMRNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageToAMR", o) != 0)
    {
    Py_DECREF(o);
    }

}

