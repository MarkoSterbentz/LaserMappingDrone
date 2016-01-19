// python wrapper for vtkGenericDataSetTessellator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericDataSetTessellator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenericDataSetTessellator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenericDataSetTessellatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkGenericDataSetTessellator_Doc();


static PyObject *
PyvtkGenericDataSetTessellator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenericDataSetTessellator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericDataSetTessellator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericDataSetTessellator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericDataSetTessellator::NewInstance());

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
PyvtkGenericDataSetTessellator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenericDataSetTessellator *tempr = vtkGenericDataSetTessellator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_SetKeepCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeepCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeepCellIds(temp0);
      }
    else
      {
      op->vtkGenericDataSetTessellator::SetKeepCellIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetKeepCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeepCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetKeepCellIds() :
      op->vtkGenericDataSetTessellator::GetKeepCellIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_KeepCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->KeepCellIdsOn();
      }
    else
      {
      op->vtkGenericDataSetTessellator::KeepCellIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_KeepCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->KeepCellIdsOff();
      }
    else
      {
      op->vtkGenericDataSetTessellator::KeepCellIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMerging(temp0);
      }
    else
      {
      op->vtkGenericDataSetTessellator::SetMerging(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMerging() :
      op->vtkGenericDataSetTessellator::GetMerging());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOn();
      }
    else
      {
      op->vtkGenericDataSetTessellator::MergingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOff();
      }
    else
      {
      op->vtkGenericDataSetTessellator::MergingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkGenericDataSetTessellator::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkGenericDataSetTessellator::GetLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkGenericDataSetTessellator::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGenericDataSetTessellator::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericDataSetTessellator_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericDataSetTessellator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkGenericDataSetTessellator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkGenericDataSetTessellator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenericDataSetTessellator\nC++: vtkGenericDataSetTessellator *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkGenericDataSetTessellator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericDataSetTessellator\nC++: vtkGenericDataSetTessellator *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"SetKeepCellIds", PyvtkGenericDataSetTessellator_SetKeepCellIds, METH_VARARGS,
   (char*)"V.SetKeepCellIds(int)\nC++: void SetKeepCellIds(int a)\n\n"},
  {(char*)"GetKeepCellIds", PyvtkGenericDataSetTessellator_GetKeepCellIds, METH_VARARGS,
   (char*)"V.GetKeepCellIds() -> int\nC++: int GetKeepCellIds()\n\n"},
  {(char*)"KeepCellIdsOn", PyvtkGenericDataSetTessellator_KeepCellIdsOn, METH_VARARGS,
   (char*)"V.KeepCellIdsOn()\nC++: void KeepCellIdsOn()\n\n"},
  {(char*)"KeepCellIdsOff", PyvtkGenericDataSetTessellator_KeepCellIdsOff, METH_VARARGS,
   (char*)"V.KeepCellIdsOff()\nC++: void KeepCellIdsOff()\n\n"},
  {(char*)"SetMerging", PyvtkGenericDataSetTessellator_SetMerging, METH_VARARGS,
   (char*)"V.SetMerging(int)\nC++: void SetMerging(int a)\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"GetMerging", PyvtkGenericDataSetTessellator_GetMerging, METH_VARARGS,
   (char*)"V.GetMerging() -> int\nC++: int GetMerging()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"MergingOn", PyvtkGenericDataSetTessellator_MergingOn, METH_VARARGS,
   (char*)"V.MergingOn()\nC++: void MergingOn()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"MergingOff", PyvtkGenericDataSetTessellator_MergingOff, METH_VARARGS,
   (char*)"V.MergingOff()\nC++: void MergingOff()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"SetLocator", PyvtkGenericDataSetTessellator_SetLocator, METH_VARARGS,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkGenericDataSetTessellator_GetLocator, METH_VARARGS,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkGenericDataSetTessellator_CreateDefaultLocator, METH_VARARGS,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {(char*)"GetMTime", PyvtkGenericDataSetTessellator_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the locator.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericDataSetTessellator_StaticNew()
{
  return vtkGenericDataSetTessellator::New();
}

PyObject *PyVTKClass_vtkGenericDataSetTessellatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericDataSetTessellator_StaticNew,
    PyvtkGenericDataSetTessellator_Methods,
    "vtkGenericDataSetTessellator", modulename,
    NULL, NULL,
    PyvtkGenericDataSetTessellator_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGenericDataSetTessellator_Doc()
{
  static const char *docstring[] = {
    "vtkGenericDataSetTessellator - tessellates generic, higher-order\ndatasets into linear cells\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "See Also:\n\nvtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericDataSetTessellator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericDataSetTessellatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericDataSetTessellator", o) != 0)
    {
    Py_DECREF(o);
    }

}

