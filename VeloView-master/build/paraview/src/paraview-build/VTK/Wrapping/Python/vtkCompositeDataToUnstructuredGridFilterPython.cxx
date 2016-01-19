// python wrapper for vtkCompositeDataToUnstructuredGridFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCompositeDataToUnstructuredGridFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositeDataToUnstructuredGridFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositeDataToUnstructuredGridFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkCompositeDataToUnstructuredGridFilter_Doc();


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositeDataToUnstructuredGridFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataToUnstructuredGridFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeDataToUnstructuredGridFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataToUnstructuredGridFilter::NewInstance());

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
PyvtkCompositeDataToUnstructuredGridFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositeDataToUnstructuredGridFilter *tempr = vtkCompositeDataToUnstructuredGridFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_SetSubTreeCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubTreeCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSubTreeCompositeIndex(temp0);
      }
    else
      {
      op->vtkCompositeDataToUnstructuredGridFilter::SetSubTreeCompositeIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_GetSubTreeCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubTreeCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSubTreeCompositeIndex() :
      op->vtkCompositeDataToUnstructuredGridFilter::GetSubTreeCompositeIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_SetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMergePoints(temp0);
      }
    else
      {
      op->vtkCompositeDataToUnstructuredGridFilter::SetMergePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_GetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetMergePoints() :
      op->vtkCompositeDataToUnstructuredGridFilter::GetMergePoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_MergePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergePointsOn();
      }
    else
      {
      op->vtkCompositeDataToUnstructuredGridFilter::MergePointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_MergePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergePointsOff();
      }
    else
      {
      op->vtkCompositeDataToUnstructuredGridFilter::MergePointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeDataToUnstructuredGridFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeDataToUnstructuredGridFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeDataToUnstructuredGridFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeDataToUnstructuredGridFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositeDataToUnstructuredGridFilter\nC++: vtkCompositeDataToUnstructuredGridFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeDataToUnstructuredGridFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkCompositeDataToUnstructuredGridFilter\nC++: vtkCompositeDataToUnstructuredGridFilter *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetSubTreeCompositeIndex", PyvtkCompositeDataToUnstructuredGridFilter_SetSubTreeCompositeIndex, METH_VARARGS,
   (char*)"V.SetSubTreeCompositeIndex(int)\nC++: void SetSubTreeCompositeIndex(unsigned int a)\n\nGet/Set the composite index of the subtree to be merged. By\ndefault set to 0 i.e. root, hence entire input composite dataset\nis merged.\n"},
  {(char*)"GetSubTreeCompositeIndex", PyvtkCompositeDataToUnstructuredGridFilter_GetSubTreeCompositeIndex, METH_VARARGS,
   (char*)"V.GetSubTreeCompositeIndex() -> int\nC++: unsigned int GetSubTreeCompositeIndex()\n\nGet/Set the composite index of the subtree to be merged. By\ndefault set to 0 i.e. root, hence entire input composite dataset\nis merged.\n"},
  {(char*)"SetMergePoints", PyvtkCompositeDataToUnstructuredGridFilter_SetMergePoints, METH_VARARGS,
   (char*)"V.SetMergePoints(bool)\nC++: void SetMergePoints(bool a)\n\nTurn on/off merging of coincidental points.  Frontend to\nvtkAppendFilter::MergePoints. Default is on.\n"},
  {(char*)"GetMergePoints", PyvtkCompositeDataToUnstructuredGridFilter_GetMergePoints, METH_VARARGS,
   (char*)"V.GetMergePoints() -> bool\nC++: bool GetMergePoints()\n\nTurn on/off merging of coincidental points.  Frontend to\nvtkAppendFilter::MergePoints. Default is on.\n"},
  {(char*)"MergePointsOn", PyvtkCompositeDataToUnstructuredGridFilter_MergePointsOn, METH_VARARGS,
   (char*)"V.MergePointsOn()\nC++: void MergePointsOn()\n\nTurn on/off merging of coincidental points.  Frontend to\nvtkAppendFilter::MergePoints. Default is on.\n"},
  {(char*)"MergePointsOff", PyvtkCompositeDataToUnstructuredGridFilter_MergePointsOff, METH_VARARGS,
   (char*)"V.MergePointsOff()\nC++: void MergePointsOff()\n\nTurn on/off merging of coincidental points.  Frontend to\nvtkAppendFilter::MergePoints. Default is on.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeDataToUnstructuredGridFilter_StaticNew()
{
  return vtkCompositeDataToUnstructuredGridFilter::New();
}

PyObject *PyVTKClass_vtkCompositeDataToUnstructuredGridFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeDataToUnstructuredGridFilter_StaticNew,
    PyvtkCompositeDataToUnstructuredGridFilter_Methods,
    "vtkCompositeDataToUnstructuredGridFilter", modulename,
    NULL, NULL,
    PyvtkCompositeDataToUnstructuredGridFilter_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCompositeDataToUnstructuredGridFilter_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeDataToUnstructuredGridFilter -  appends all\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkCompositeDataToUnstructuredGridFilter appends all\nvtkUnstructuredGrid leaves of the input composite dataset to a single\nunstructure grid. The subtree to be combined can be chosen using the\nSubTreeCompositeIndex. If the SubTreeCompositeIndex is a leaf node,\nthen no appending is required.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeDataToUnstructuredGridFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeDataToUnstructuredGridFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeDataToUnstructuredGridFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

