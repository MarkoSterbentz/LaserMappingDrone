// python wrapper for vtkAMRUtilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRUtilities.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRUtilities(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRUtilitiesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAMRUtilities_Doc();


static PyObject *
PyvtkAMRUtilities_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRUtilities *op = static_cast<vtkAMRUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRUtilities::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRUtilities *op = static_cast<vtkAMRUtilities *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRUtilities *op = static_cast<vtkAMRUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRUtilities::NewInstance());

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
PyvtkAMRUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRUtilities *tempr = vtkAMRUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRUtilities_StripGhostLayers(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StripGhostLayers");

  vtkOverlappingAMR *temp0 = NULL;
  vtkOverlappingAMR *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR") &&
      ap.GetVTKObject(temp1, "vtkOverlappingAMR"))
    {
    vtkAMRUtilities::StripGhostLayers(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRUtilities_HasPartiallyOverlappingGhostCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HasPartiallyOverlappingGhostCells");

  vtkOverlappingAMR *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR"))
    {
    bool tempr = vtkAMRUtilities::HasPartiallyOverlappingGhostCells(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRUtilities_BlankCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BlankCells");

  vtkOverlappingAMR *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR"))
    {
    vtkAMRUtilities::BlankCells(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRUtilities_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRUtilities_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRUtilities_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRUtilities_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRUtilities\nC++: vtkAMRUtilities *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRUtilities_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRUtilities\nC++: vtkAMRUtilities *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"StripGhostLayers", PyvtkAMRUtilities_StripGhostLayers, METH_VARARGS | METH_STATIC,
   (char*)"V.StripGhostLayers(vtkOverlappingAMR, vtkOverlappingAMR)\nC++: static void StripGhostLayers(\n    vtkOverlappingAMR *ghostedAMRData,\n    vtkOverlappingAMR *strippedAMRData)\n\nThis method detects and strips partially overlapping cells from a\ngiven AMR dataset. If ghost layers are detected, they are removed\nand new grid instances are created to represent the stripped\ndata-set otherwise, each block is shallow-copied.\n\nAssumptions:\n\n1) The ghosted AMR data must have complete metadata information.\n"},
  {(char*)"HasPartiallyOverlappingGhostCells", PyvtkAMRUtilities_HasPartiallyOverlappingGhostCells, METH_VARARGS | METH_STATIC,
   (char*)"V.HasPartiallyOverlappingGhostCells(vtkOverlappingAMR) -> bool\nC++: static bool HasPartiallyOverlappingGhostCells(\n    vtkOverlappingAMR *amr)\n\nA quick test of whether partially overlapping ghost cells exist.\nThis test starts from the highest-res boxes and checks if they\nhave partially overlapping cells. The code returns with true once\npartially overlapping cells are detected. Otherwise, false is\nreturned.\n"},
  {(char*)"BlankCells", PyvtkAMRUtilities_BlankCells, METH_VARARGS | METH_STATIC,
   (char*)"V.BlankCells(vtkOverlappingAMR)\nC++: static void BlankCells(vtkOverlappingAMR *amr)\n\nBlank cells in overlapping AMR\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAMRUtilitiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAMRUtilities_Methods,
    "vtkAMRUtilities", modulename,
    NULL, NULL,
    PyvtkAMRUtilities_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAMRUtilities_Doc()
{
  static const char *docstring[] = {
    "vtkAMRUtilities -- Support for serial AMR operations\n\n",
    "Superclass: vtkObject\n\n",
    "A concrete instance of vtkObject that employs a singleton design\n pattern and implements functionality for AMR specific operations.\n\nSee Also:\n\n\n vtkOverlappingAMR, vtkAMRBox\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRUtilities(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRUtilitiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRUtilities", o) != 0)
    {
    Py_DECREF(o);
    }

}

