// python wrapper for vtkProcrustesAlignmentFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProcrustesAlignmentFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProcrustesAlignmentFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProcrustesAlignmentFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkProcrustesAlignmentFilter_Doc();


static PyObject *
PyvtkProcrustesAlignmentFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProcrustesAlignmentFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProcrustesAlignmentFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProcrustesAlignmentFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProcrustesAlignmentFilter::NewInstance());

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
PyvtkProcrustesAlignmentFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProcrustesAlignmentFilter *tempr = vtkProcrustesAlignmentFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_GetLandmarkTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLandmarkTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLandmarkTransform *tempr = (ap.IsBound() ?
      op->GetLandmarkTransform() :
      op->vtkProcrustesAlignmentFilter::GetLandmarkTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_GetMeanPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeanPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetMeanPoints() :
      op->vtkProcrustesAlignmentFilter::GetMeanPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_SetStartFromCentroid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartFromCentroid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartFromCentroid(temp0);
      }
    else
      {
      op->vtkProcrustesAlignmentFilter::SetStartFromCentroid(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_GetStartFromCentroid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartFromCentroid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetStartFromCentroid() :
      op->vtkProcrustesAlignmentFilter::GetStartFromCentroid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_StartFromCentroidOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartFromCentroidOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartFromCentroidOn();
      }
    else
      {
      op->vtkProcrustesAlignmentFilter::StartFromCentroidOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_StartFromCentroidOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartFromCentroidOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartFromCentroidOff();
      }
    else
      {
      op->vtkProcrustesAlignmentFilter::StartFromCentroidOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

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
      op->vtkProcrustesAlignmentFilter::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkProcrustesAlignmentFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProcrustesAlignmentFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkProcrustesAlignmentFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProcrustesAlignmentFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProcrustesAlignmentFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProcrustesAlignmentFilter\nC++: vtkProcrustesAlignmentFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProcrustesAlignmentFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProcrustesAlignmentFilter\nC++: vtkProcrustesAlignmentFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetLandmarkTransform", PyvtkProcrustesAlignmentFilter_GetLandmarkTransform, METH_VARARGS,
   (char*)"V.GetLandmarkTransform() -> vtkLandmarkTransform\nC++: vtkLandmarkTransform *GetLandmarkTransform()\n\nGet the internal landmark transform. Use it to constrain the\nnumber of degrees of freedom of the alignment (i.e. rigid body,\nsimilarity, etc.). The default is a similarity alignment.\n"},
  {(char*)"GetMeanPoints", PyvtkProcrustesAlignmentFilter_GetMeanPoints, METH_VARARGS,
   (char*)"V.GetMeanPoints() -> vtkPoints\nC++: vtkPoints *GetMeanPoints()\n\nGet the estimated mean point cloud\n"},
  {(char*)"SetStartFromCentroid", PyvtkProcrustesAlignmentFilter_SetStartFromCentroid, METH_VARARGS,
   (char*)"V.SetStartFromCentroid(bool)\nC++: void SetStartFromCentroid(bool a)\n\nWhen on, the initial alignment is to the centroid of the cohort\ncurves.  When off, the alignment is to the centroid of the first\ninput.  Default is off for backward compatibility.\n"},
  {(char*)"GetStartFromCentroid", PyvtkProcrustesAlignmentFilter_GetStartFromCentroid, METH_VARARGS,
   (char*)"V.GetStartFromCentroid() -> bool\nC++: bool GetStartFromCentroid()\n\nWhen on, the initial alignment is to the centroid of the cohort\ncurves.  When off, the alignment is to the centroid of the first\ninput.  Default is off for backward compatibility.\n"},
  {(char*)"StartFromCentroidOn", PyvtkProcrustesAlignmentFilter_StartFromCentroidOn, METH_VARARGS,
   (char*)"V.StartFromCentroidOn()\nC++: void StartFromCentroidOn()\n\nWhen on, the initial alignment is to the centroid of the cohort\ncurves.  When off, the alignment is to the centroid of the first\ninput.  Default is off for backward compatibility.\n"},
  {(char*)"StartFromCentroidOff", PyvtkProcrustesAlignmentFilter_StartFromCentroidOff, METH_VARARGS,
   (char*)"V.StartFromCentroidOff()\nC++: void StartFromCentroidOff()\n\nWhen on, the initial alignment is to the centroid of the cohort\ncurves.  When off, the alignment is to the centroid of the first\ninput.  Default is off for backward compatibility.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkProcrustesAlignmentFilter_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings. If the\ndesired precision is DEFAULT_PRECISION and any of the inputs are\ndouble precision, then the mean points will be double precision.\nOtherwise, if the desired precision is DEFAULT_PRECISION and all\nthe inputs are single precision, then the mean points will be\nsingle precision.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkProcrustesAlignmentFilter_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings. If the\ndesired precision is DEFAULT_PRECISION and any of the inputs are\ndouble precision, then the mean points will be double precision.\nOtherwise, if the desired precision is DEFAULT_PRECISION and all\nthe inputs are single precision, then the mean points will be\nsingle precision.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProcrustesAlignmentFilter_StaticNew()
{
  return vtkProcrustesAlignmentFilter::New();
}

PyObject *PyVTKClass_vtkProcrustesAlignmentFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProcrustesAlignmentFilter_StaticNew,
    PyvtkProcrustesAlignmentFilter_Methods,
    "vtkProcrustesAlignmentFilter", modulename,
    NULL, NULL,
    PyvtkProcrustesAlignmentFilter_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkProcrustesAlignmentFilter_Doc()
{
  static const char *docstring[] = {
    "vtkProcrustesAlignmentFilter - aligns a set of pointsets together\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkProcrustesAlignmentFilter is a filter that takes a set of\npointsets (any object derived from vtkPointSet) and aligns them in a\nleast-squares sense to their mutual mean. The algorithm is iterated\nuntil convergence, as the mean must be recomputed after each\nalignment.\n\nvtkProcrustesAlignmentFilter requires a vtkMultiBlock input\nconsisting of vtkPointSets as first level children.\n\nThe default (in ",
    "vtkLandmarkTransform) is for a similarity alignment.\nFor a rigid-body alignment (to build a 'size-and-shape' model) use:\n\n\n   GetLandmarkTransform()->SetModeToRigidBody().\n\nAffine alignments are not normally used but are left in for\ncompleteness:\n\n\n   GetLandmarkTransform()->SetModeToAffine().\n\nvtkProcrustesAlignmentFilter is an implementation of:\n\n\n   J.C. Gower (1975)\n   Generalized Procrustes A",
    "nalysis. Psychometrika, 40:33-51.\n\nCaveats:\n\nAll of the input pointsets must have the same number of points.\n\nThanks:\n\nTim Hutton and Rasmus Paulsen who developed and contributed this\nclass\n\nSee Also:\n\nvtkLandmarkTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProcrustesAlignmentFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProcrustesAlignmentFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProcrustesAlignmentFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

