// python wrapper for vtkPVAMRFragmentIntegration
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkPVAMRFragmentIntegration.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVAMRFragmentIntegration(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVAMRFragmentIntegrationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAMRFragmentIntegrationNew
extern "C" { PyObject *PyVTKClass_vtkAMRFragmentIntegrationNew(const char *); }
#define DECLARED_PyVTKClass_vtkAMRFragmentIntegrationNew
#endif

static const char **PyvtkPVAMRFragmentIntegration_Doc();


static PyObject *
PyvtkPVAMRFragmentIntegration_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVAMRFragmentIntegration::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVAMRFragmentIntegration::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVAMRFragmentIntegration *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVAMRFragmentIntegration::NewInstance());

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
PyvtkPVAMRFragmentIntegration_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVAMRFragmentIntegration *tempr = vtkPVAMRFragmentIntegration::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_AddInputVolumeArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputVolumeArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddInputVolumeArrayToProcess(temp0);
      }
    else
      {
      op->vtkPVAMRFragmentIntegration::AddInputVolumeArrayToProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_ClearInputVolumeArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputVolumeArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearInputVolumeArrayToProcess();
      }
    else
      {
      op->vtkPVAMRFragmentIntegration::ClearInputVolumeArrayToProcess();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_AddInputMassArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputMassArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddInputMassArrayToProcess(temp0);
      }
    else
      {
      op->vtkPVAMRFragmentIntegration::AddInputMassArrayToProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_ClearInputMassArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputMassArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearInputMassArrayToProcess();
      }
    else
      {
      op->vtkPVAMRFragmentIntegration::ClearInputMassArrayToProcess();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_AddInputVolumeWeightedArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputVolumeWeightedArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddInputVolumeWeightedArrayToProcess(temp0);
      }
    else
      {
      op->vtkPVAMRFragmentIntegration::AddInputVolumeWeightedArrayToProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_ClearInputVolumeWeightedArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputVolumeWeightedArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearInputVolumeWeightedArrayToProcess();
      }
    else
      {
      op->vtkPVAMRFragmentIntegration::ClearInputVolumeWeightedArrayToProcess();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_AddInputMassWeightedArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputMassWeightedArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddInputMassWeightedArrayToProcess(temp0);
      }
    else
      {
      op->vtkPVAMRFragmentIntegration::AddInputMassWeightedArrayToProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_ClearInputMassWeightedArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputMassWeightedArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearInputMassWeightedArrayToProcess();
      }
    else
      {
      op->vtkPVAMRFragmentIntegration::ClearInputMassWeightedArrayToProcess();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_SetContourConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContourConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetContourConnection(temp0);
      }
    else
      {
      op->vtkPVAMRFragmentIntegration::SetContourConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVAMRFragmentIntegration_Methods[] = {
  {(char*)"GetClassName", PyvtkPVAMRFragmentIntegration_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVAMRFragmentIntegration_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVAMRFragmentIntegration_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVAMRFragmentIntegration\nC++: vtkPVAMRFragmentIntegration *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVAMRFragmentIntegration_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVAMRFragmentIntegration\nC++: vtkPVAMRFragmentIntegration *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddInputVolumeArrayToProcess", PyvtkPVAMRFragmentIntegration_AddInputVolumeArrayToProcess, METH_VARARGS,
   (char*)"V.AddInputVolumeArrayToProcess(string)\nC++: void AddInputVolumeArrayToProcess(const char *name)\n\nAdd to list of volume arrays which are used for generating\ncontours.\n"},
  {(char*)"ClearInputVolumeArrayToProcess", PyvtkPVAMRFragmentIntegration_ClearInputVolumeArrayToProcess, METH_VARARGS,
   (char*)"V.ClearInputVolumeArrayToProcess()\nC++: void ClearInputVolumeArrayToProcess()\n\nAdd to list of volume arrays which are used for generating\ncontours.\n"},
  {(char*)"AddInputMassArrayToProcess", PyvtkPVAMRFragmentIntegration_AddInputMassArrayToProcess, METH_VARARGS,
   (char*)"V.AddInputMassArrayToProcess(string)\nC++: void AddInputMassArrayToProcess(const char *name)\n\nAdd to list of mass arrays\n"},
  {(char*)"ClearInputMassArrayToProcess", PyvtkPVAMRFragmentIntegration_ClearInputMassArrayToProcess, METH_VARARGS,
   (char*)"V.ClearInputMassArrayToProcess()\nC++: void ClearInputMassArrayToProcess()\n\nAdd to list of mass arrays\n"},
  {(char*)"AddInputVolumeWeightedArrayToProcess", PyvtkPVAMRFragmentIntegration_AddInputVolumeWeightedArrayToProcess, METH_VARARGS,
   (char*)"V.AddInputVolumeWeightedArrayToProcess(string)\nC++: void AddInputVolumeWeightedArrayToProcess(const char *name)\n\nAdd to list of volume weighted arrays\n"},
  {(char*)"ClearInputVolumeWeightedArrayToProcess", PyvtkPVAMRFragmentIntegration_ClearInputVolumeWeightedArrayToProcess, METH_VARARGS,
   (char*)"V.ClearInputVolumeWeightedArrayToProcess()\nC++: void ClearInputVolumeWeightedArrayToProcess()\n\nAdd to list of volume weighted arrays\n"},
  {(char*)"AddInputMassWeightedArrayToProcess", PyvtkPVAMRFragmentIntegration_AddInputMassWeightedArrayToProcess, METH_VARARGS,
   (char*)"V.AddInputMassWeightedArrayToProcess(string)\nC++: void AddInputMassWeightedArrayToProcess(const char *name)\n\nAdd to list of mass weighted arrays\n"},
  {(char*)"ClearInputMassWeightedArrayToProcess", PyvtkPVAMRFragmentIntegration_ClearInputMassWeightedArrayToProcess, METH_VARARGS,
   (char*)"V.ClearInputMassWeightedArrayToProcess()\nC++: void ClearInputMassWeightedArrayToProcess()\n\nAdd to list of mass weighted arrays\n"},
  {(char*)"SetContourConnection", PyvtkPVAMRFragmentIntegration_SetContourConnection, METH_VARARGS,
   (char*)"V.SetContourConnection(vtkAlgorithmOutput)\nC++: void SetContourConnection(vtkAlgorithmOutput *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVAMRFragmentIntegration_StaticNew()
{
  return vtkPVAMRFragmentIntegration::New();
}

PyObject *PyVTKClass_vtkPVAMRFragmentIntegrationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVAMRFragmentIntegration_StaticNew,
    PyvtkPVAMRFragmentIntegration_Methods,
    "vtkPVAMRFragmentIntegration", modulename,
    NULL, NULL,
    PyvtkPVAMRFragmentIntegration_Doc(),
    PyVTKClass_vtkAMRFragmentIntegrationNew(modulename));
  return cls;
}

const char **PyvtkPVAMRFragmentIntegration_Doc()
{
  static const char *docstring[] = {
    "vtkPVAMRFragmentIntegration - Generates fragment analysis from an\n\n",
    "Superclass: vtkAMRFragmentIntegration\n\n",
    ".SEE vtkAMRFragmentIntegration\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVAMRFragmentIntegration(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVAMRFragmentIntegrationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVAMRFragmentIntegration", o) != 0)
    {
    Py_DECREF(o);
    }

}

