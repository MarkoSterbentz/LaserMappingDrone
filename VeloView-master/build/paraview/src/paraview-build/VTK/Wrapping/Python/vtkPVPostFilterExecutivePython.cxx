// python wrapper for vtkPVPostFilterExecutive
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkPVPostFilterExecutive.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVPostFilterExecutive(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVPostFilterExecutiveNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVCompositeDataPipelineNew
extern "C" { PyObject *PyVTKClass_vtkPVCompositeDataPipelineNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVCompositeDataPipelineNew
#endif

static const char **PyvtkPVPostFilterExecutive_Doc();


static PyObject *
PyvtkPVPostFilterExecutive_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPostFilterExecutive *op = static_cast<vtkPVPostFilterExecutive *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVPostFilterExecutive::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPostFilterExecutive_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPostFilterExecutive *op = static_cast<vtkPVPostFilterExecutive *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPostFilterExecutive::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPostFilterExecutive_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPostFilterExecutive *op = static_cast<vtkPVPostFilterExecutive *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVPostFilterExecutive *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPostFilterExecutive::NewInstance());

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
PyvtkPVPostFilterExecutive_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVPostFilterExecutive *tempr = vtkPVPostFilterExecutive::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPostFilterExecutive_POST_ARRAYS_TO_PROCESS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POST_ARRAYS_TO_PROCESS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationInformationVectorKey *tempr = vtkPVPostFilterExecutive::POST_ARRAYS_TO_PROCESS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPostFilterExecutive_POST_ARRAY_COMPONENT_KEY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POST_ARRAY_COMPONENT_KEY");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationStringVectorKey *tempr = vtkPVPostFilterExecutive::POST_ARRAY_COMPONENT_KEY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPostFilterExecutive_GetPostArrayToProcessInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPostArrayToProcessInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPostFilterExecutive *op = static_cast<vtkPVPostFilterExecutive *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetPostArrayToProcessInformation(temp0) :
      op->vtkPVPostFilterExecutive::GetPostArrayToProcessInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPostFilterExecutive_SetPostArrayToProcessInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPostArrayToProcessInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPostFilterExecutive *op = static_cast<vtkPVPostFilterExecutive *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->SetPostArrayToProcessInformation(temp0, temp1);
      }
    else
      {
      op->vtkPVPostFilterExecutive::SetPostArrayToProcessInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVPostFilterExecutive_Methods[] = {
  {(char*)"GetClassName", PyvtkPVPostFilterExecutive_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVPostFilterExecutive_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVPostFilterExecutive_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVPostFilterExecutive\nC++: vtkPVPostFilterExecutive *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVPostFilterExecutive_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVPostFilterExecutive\nC++: vtkPVPostFilterExecutive *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"POST_ARRAYS_TO_PROCESS", PyvtkPVPostFilterExecutive_POST_ARRAYS_TO_PROCESS, METH_VARARGS | METH_STATIC,
   (char*)"V.POST_ARRAYS_TO_PROCESS() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *POST_ARRAYS_TO_PROCESS(\n    )\n\n"},
  {(char*)"POST_ARRAY_COMPONENT_KEY", PyvtkPVPostFilterExecutive_POST_ARRAY_COMPONENT_KEY, METH_VARARGS | METH_STATIC,
   (char*)"V.POST_ARRAY_COMPONENT_KEY() -> vtkInformationStringVectorKey\nC++: static vtkInformationStringVectorKey *POST_ARRAY_COMPONENT_KEY(\n    )\n\n"},
  {(char*)"GetPostArrayToProcessInformation", PyvtkPVPostFilterExecutive_GetPostArrayToProcessInformation, METH_VARARGS,
   (char*)"V.GetPostArrayToProcessInformation(int) -> vtkInformation\nC++: vtkInformation *GetPostArrayToProcessInformation(int idx)\n\n"},
  {(char*)"SetPostArrayToProcessInformation", PyvtkPVPostFilterExecutive_SetPostArrayToProcessInformation, METH_VARARGS,
   (char*)"V.SetPostArrayToProcessInformation(int, vtkInformation)\nC++: void SetPostArrayToProcessInformation(int idx,\n    vtkInformation *inInfo)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVPostFilterExecutive_StaticNew()
{
  return vtkPVPostFilterExecutive::New();
}

PyObject *PyVTKClass_vtkPVPostFilterExecutiveNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVPostFilterExecutive_StaticNew,
    PyvtkPVPostFilterExecutive_Methods,
    "vtkPVPostFilterExecutive", modulename,
    NULL, NULL,
    PyvtkPVPostFilterExecutive_Doc(),
    PyVTKClass_vtkPVCompositeDataPipelineNew(modulename));
  return cls;
}

const char **PyvtkPVPostFilterExecutive_Doc()
{
  static const char *docstring[] = {
    "vtkPVPostFilterExecutive - Executive supporting post filters.\n\n",
    "Superclass: vtkPVCompositeDataPipeline\n\n",
    "vtkPVPostFilterExecutive is an executive that supports the creation\nof post filters for the following uses cases: Provide the ability to\nautomatically use a vector component as a scalar input property.\n\nInterpolate cell centered data to point data, and the inverse if\nneeded by the filter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVPostFilterExecutive(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVPostFilterExecutiveNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVPostFilterExecutive", o) != 0)
    {
    Py_DECREF(o);
    }

}

