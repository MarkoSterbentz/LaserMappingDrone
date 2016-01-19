// python wrapper for vtkPVAMRDualClip
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkPVAMRDualClip.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVAMRDualClip(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVAMRDualClipNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAMRDualClipNew
extern "C" { PyObject *PyVTKClass_vtkAMRDualClipNew(const char *); }
#define DECLARED_PyVTKClass_vtkAMRDualClipNew
#endif

static const char **PyvtkPVAMRDualClip_Doc();


static PyObject *
PyvtkPVAMRDualClip_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualClip *op = static_cast<vtkPVAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVAMRDualClip::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRDualClip_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualClip *op = static_cast<vtkPVAMRDualClip *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVAMRDualClip::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRDualClip_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualClip *op = static_cast<vtkPVAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVAMRDualClip *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVAMRDualClip::NewInstance());

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
PyvtkPVAMRDualClip_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVAMRDualClip *tempr = vtkPVAMRDualClip::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRDualClip_AddInputCellArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputCellArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualClip *op = static_cast<vtkPVAMRDualClip *>(vp);

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
      op->vtkPVAMRDualClip::AddInputCellArrayToProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRDualClip_ClearInputCellArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputCellArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualClip *op = static_cast<vtkPVAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearInputCellArrayToProcess();
      }
    else
      {
      op->vtkPVAMRDualClip::ClearInputCellArrayToProcess();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRDualClip_GetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualClip *op = static_cast<vtkPVAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValue() :
      op->vtkPVAMRDualClip::GetVolumeFractionSurfaceValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRDualClip_SetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualClip *op = static_cast<vtkPVAMRDualClip *>(vp);

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
      op->vtkPVAMRDualClip::SetVolumeFractionSurfaceValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVAMRDualClip_Methods[] = {
  {(char*)"GetClassName", PyvtkPVAMRDualClip_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVAMRDualClip_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVAMRDualClip_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVAMRDualClip\nC++: vtkPVAMRDualClip *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVAMRDualClip_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVAMRDualClip\nC++: vtkPVAMRDualClip *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddInputCellArrayToProcess", PyvtkPVAMRDualClip_AddInputCellArrayToProcess, METH_VARARGS,
   (char*)"V.AddInputCellArrayToProcess(string)\nC++: void AddInputCellArrayToProcess(const char *name)\n\nAdd to list of cell arrays which are used for generating\ncontours.\n"},
  {(char*)"ClearInputCellArrayToProcess", PyvtkPVAMRDualClip_ClearInputCellArrayToProcess, METH_VARARGS,
   (char*)"V.ClearInputCellArrayToProcess()\nC++: void ClearInputCellArrayToProcess()\n\nAdd to list of cell arrays which are used for generating\ncontours.\n"},
  {(char*)"GetVolumeFractionSurfaceValue", PyvtkPVAMRDualClip_GetVolumeFractionSurfaceValue, METH_VARARGS,
   (char*)"V.GetVolumeFractionSurfaceValue() -> float\nC++: double GetVolumeFractionSurfaceValue()\n\nGet / Set volume fraction value.\n"},
  {(char*)"SetVolumeFractionSurfaceValue", PyvtkPVAMRDualClip_SetVolumeFractionSurfaceValue, METH_VARARGS,
   (char*)"V.SetVolumeFractionSurfaceValue(float)\nC++: void SetVolumeFractionSurfaceValue(double a)\n\nGet / Set volume fraction value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVAMRDualClip_StaticNew()
{
  return vtkPVAMRDualClip::New();
}

PyObject *PyVTKClass_vtkPVAMRDualClipNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVAMRDualClip_StaticNew,
    PyvtkPVAMRDualClip_Methods,
    "vtkPVAMRDualClip", modulename,
    NULL, NULL,
    PyvtkPVAMRDualClip_Doc(),
    PyVTKClass_vtkAMRDualClipNew(modulename));
  return cls;
}

const char **PyvtkPVAMRDualClip_Doc()
{
  static const char *docstring[] = {
    "vtkPVAMRDualClip - Generates contour given one or more cell array\n\n",
    "Superclass: vtkAMRDualClip\n\n",
    ".SEE vtkAMRDualClip\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVAMRDualClip(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVAMRDualClipNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVAMRDualClip", o) != 0)
    {
    Py_DECREF(o);
    }

}

