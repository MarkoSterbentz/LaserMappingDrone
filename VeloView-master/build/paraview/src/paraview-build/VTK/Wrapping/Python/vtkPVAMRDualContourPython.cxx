// python wrapper for vtkPVAMRDualContour
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkPVAMRDualContour.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVAMRDualContour(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVAMRDualContourNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAMRDualContourNew
extern "C" { PyObject *PyVTKClass_vtkAMRDualContourNew(const char *); }
#define DECLARED_PyVTKClass_vtkAMRDualContourNew
#endif

static const char **PyvtkPVAMRDualContour_Doc();


static PyObject *
PyvtkPVAMRDualContour_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualContour *op = static_cast<vtkPVAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVAMRDualContour::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRDualContour_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualContour *op = static_cast<vtkPVAMRDualContour *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVAMRDualContour::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRDualContour_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualContour *op = static_cast<vtkPVAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVAMRDualContour *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVAMRDualContour::NewInstance());

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
PyvtkPVAMRDualContour_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVAMRDualContour *tempr = vtkPVAMRDualContour::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRDualContour_AddInputCellArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputCellArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualContour *op = static_cast<vtkPVAMRDualContour *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddInputCellArrayToProcess(temp0);
      }
    else
      {
      op->vtkPVAMRDualContour::AddInputCellArrayToProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRDualContour_ClearInputCellArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputCellArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualContour *op = static_cast<vtkPVAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearInputCellArrayToProcess();
      }
    else
      {
      op->vtkPVAMRDualContour::ClearInputCellArrayToProcess();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRDualContour_GetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualContour *op = static_cast<vtkPVAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValue() :
      op->vtkPVAMRDualContour::GetVolumeFractionSurfaceValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRDualContour_SetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualContour *op = static_cast<vtkPVAMRDualContour *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVolumeFractionSurfaceValue(temp0);
      }
    else
      {
      op->vtkPVAMRDualContour::SetVolumeFractionSurfaceValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVAMRDualContour_Methods[] = {
  {(char*)"GetClassName", PyvtkPVAMRDualContour_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVAMRDualContour_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVAMRDualContour_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVAMRDualContour\nC++: vtkPVAMRDualContour *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVAMRDualContour_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVAMRDualContour\nC++: vtkPVAMRDualContour *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddInputCellArrayToProcess", PyvtkPVAMRDualContour_AddInputCellArrayToProcess, METH_VARARGS,
   (char*)"V.AddInputCellArrayToProcess(string)\nC++: void AddInputCellArrayToProcess(const char *name)\n\nAdd to list of cell arrays which are used for generating\ncontours.\n"},
  {(char*)"ClearInputCellArrayToProcess", PyvtkPVAMRDualContour_ClearInputCellArrayToProcess, METH_VARARGS,
   (char*)"V.ClearInputCellArrayToProcess()\nC++: void ClearInputCellArrayToProcess()\n\nAdd to list of cell arrays which are used for generating\ncontours.\n"},
  {(char*)"GetVolumeFractionSurfaceValue", PyvtkPVAMRDualContour_GetVolumeFractionSurfaceValue, METH_VARARGS,
   (char*)"V.GetVolumeFractionSurfaceValue() -> float\nC++: double GetVolumeFractionSurfaceValue()\n\nGet / Set volume fraction value.\n"},
  {(char*)"SetVolumeFractionSurfaceValue", PyvtkPVAMRDualContour_SetVolumeFractionSurfaceValue, METH_VARARGS,
   (char*)"V.SetVolumeFractionSurfaceValue(float)\nC++: void SetVolumeFractionSurfaceValue(double a)\n\nGet / Set volume fraction value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVAMRDualContour_StaticNew()
{
  return vtkPVAMRDualContour::New();
}

PyObject *PyVTKClass_vtkPVAMRDualContourNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVAMRDualContour_StaticNew,
    PyvtkPVAMRDualContour_Methods,
    "vtkPVAMRDualContour", modulename,
    NULL, NULL,
    PyvtkPVAMRDualContour_Doc(),
    PyVTKClass_vtkAMRDualContourNew(modulename));
  return cls;
}

const char **PyvtkPVAMRDualContour_Doc()
{
  static const char *docstring[] = {
    "vtkPVAMRDualContour - Generates a contour surface given one or\n\n",
    "Superclass: vtkAMRDualContour\n\n",
    ".SEE vtkAMRDualContour\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVAMRDualContour(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVAMRDualContourNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVAMRDualContour", o) != 0)
    {
    Py_DECREF(o);
    }

}

