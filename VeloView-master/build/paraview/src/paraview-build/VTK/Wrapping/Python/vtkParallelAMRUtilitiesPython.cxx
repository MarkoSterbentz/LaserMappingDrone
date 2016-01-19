// python wrapper for vtkParallelAMRUtilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkParallelAMRUtilities.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkParallelAMRUtilities(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkParallelAMRUtilitiesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAMRUtilitiesNew
extern "C" { PyObject *PyVTKClass_vtkAMRUtilitiesNew(const char *); }
#define DECLARED_PyVTKClass_vtkAMRUtilitiesNew
#endif

static const char **PyvtkParallelAMRUtilities_Doc();


static PyObject *
PyvtkParallelAMRUtilities_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelAMRUtilities *op = static_cast<vtkParallelAMRUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkParallelAMRUtilities::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelAMRUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelAMRUtilities *op = static_cast<vtkParallelAMRUtilities *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelAMRUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelAMRUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelAMRUtilities *op = static_cast<vtkParallelAMRUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParallelAMRUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelAMRUtilities::NewInstance());

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
PyvtkParallelAMRUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkParallelAMRUtilities *tempr = vtkParallelAMRUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelAMRUtilities_StripGhostLayers(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StripGhostLayers");

  vtkOverlappingAMR *temp0 = NULL;
  vtkOverlappingAMR *temp1 = NULL;
  vtkMultiProcessController *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR") &&
      ap.GetVTKObject(temp1, "vtkOverlappingAMR") &&
      ap.GetVTKObject(temp2, "vtkMultiProcessController"))
    {
    vtkParallelAMRUtilities::StripGhostLayers(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelAMRUtilities_BlankCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BlankCells");

  vtkOverlappingAMR *temp0 = NULL;
  vtkMultiProcessController *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR") &&
      ap.GetVTKObject(temp1, "vtkMultiProcessController"))
    {
    vtkParallelAMRUtilities::BlankCells(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkParallelAMRUtilities_Methods[] = {
  {(char*)"GetClassName", PyvtkParallelAMRUtilities_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParallelAMRUtilities_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParallelAMRUtilities_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkParallelAMRUtilities\nC++: vtkParallelAMRUtilities *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParallelAMRUtilities_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParallelAMRUtilities\nC++: vtkParallelAMRUtilities *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"StripGhostLayers", PyvtkParallelAMRUtilities_StripGhostLayers, METH_VARARGS | METH_STATIC,
   (char*)"V.StripGhostLayers(vtkOverlappingAMR, vtkOverlappingAMR,\n    vtkMultiProcessController)\nC++: static void StripGhostLayers(\n    vtkOverlappingAMR *ghostedAMRData,\n    vtkOverlappingAMR *strippedAMRData,\n    vtkMultiProcessController *myController)\n\nThis method detects and strips partially overlapping cells from a\ngiven AMR dataset. If ghost layers are detected, they are removed\nand new grid instances are created to represent the stripped\ndata-set otherwise, each block is shallow-copied.\n\nAssumptions:\n\n1) The ghosted AMR data must have complete metadata information.\n"},
  {(char*)"BlankCells", PyvtkParallelAMRUtilities_BlankCells, METH_VARARGS | METH_STATIC,
   (char*)"V.BlankCells(vtkOverlappingAMR, vtkMultiProcessController)\nC++: static void BlankCells(vtkOverlappingAMR *amr,\n    vtkMultiProcessController *myController)\n\nBlank cells in overlapping AMR\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkParallelAMRUtilitiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkParallelAMRUtilities_Methods,
    "vtkParallelAMRUtilities", modulename,
    NULL, NULL,
    PyvtkParallelAMRUtilities_Doc(),
    PyVTKClass_vtkAMRUtilitiesNew(modulename));
  return cls;
}

const char **PyvtkParallelAMRUtilities_Doc()
{
  static const char *docstring[] = {
    "vtkParallelAMRUtilities -- Support for distributed AMR operations\n\n",
    "Superclass: vtkAMRUtilities\n\n",
    "A concrete instance of vtkObject that employs a singleton design\n pattern and implements functionality for AMR specific operations.\n\nSee Also:\n\n\n vtkOverlappingAMR, vtkAMRBox\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParallelAMRUtilities(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParallelAMRUtilitiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParallelAMRUtilities", o) != 0)
    {
    Py_DECREF(o);
    }

}

