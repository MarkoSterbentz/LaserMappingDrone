// python wrapper for vtkDSPFilterGroup
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDSPFilterGroup.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDSPFilterGroup(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDSPFilterGroupNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDSPFilterGroup_Doc();


static PyObject *
PyvtkDSPFilterGroup_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDSPFilterGroup::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDSPFilterGroup::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDSPFilterGroup *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDSPFilterGroup::NewInstance());

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
PyvtkDSPFilterGroup_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDSPFilterGroup *tempr = vtkDSPFilterGroup::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_AddFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  vtkDSPFilterDefinition *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDSPFilterDefinition"))
    {
    if (ap.IsBound())
      {
      op->AddFilter(temp0);
      }
    else
      {
      op->vtkDSPFilterGroup::AddFilter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_RemoveFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveFilter(temp0);
      }
    else
      {
      op->vtkDSPFilterGroup::RemoveFilter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_IsThisInputVariableInstanceNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsThisInputVariableInstanceNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  char *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->IsThisInputVariableInstanceNeeded(temp0, temp1, temp2) :
      op->vtkDSPFilterGroup::IsThisInputVariableInstanceNeeded(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_IsThisInputVariableInstanceCached(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsThisInputVariableInstanceCached");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->IsThisInputVariableInstanceCached(temp0, temp1) :
      op->vtkDSPFilterGroup::IsThisInputVariableInstanceCached(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_AddInputVariableInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputVariableInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  char *temp0 = NULL;
  int temp1;
  vtkFloatArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkFloatArray"))
    {
    if (ap.IsBound())
      {
      op->AddInputVariableInstance(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDSPFilterGroup::AddInputVariableInstance(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetOutput(temp0, temp1, temp2) :
      op->vtkDSPFilterGroup::GetOutput(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_GetCachedInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCachedInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetCachedInput(temp0, temp1) :
      op->vtkDSPFilterGroup::GetCachedInput(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_GetCachedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCachedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetCachedOutput(temp0, temp1) :
      op->vtkDSPFilterGroup::GetCachedOutput(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_GetInputVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetInputVariableName(temp0) :
      op->vtkDSPFilterGroup::GetInputVariableName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_GetNumFilters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumFilters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumFilters() :
      op->vtkDSPFilterGroup::GetNumFilters());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  vtkDSPFilterGroup *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDSPFilterGroup"))
    {
    if (ap.IsBound())
      {
      op->Copy(temp0);
      }
    else
      {
      op->vtkDSPFilterGroup::Copy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterGroup_GetFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterGroup *op = static_cast<vtkDSPFilterGroup *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDSPFilterDefinition *tempr = (ap.IsBound() ?
      op->GetFilter(temp0) :
      op->vtkDSPFilterGroup::GetFilter(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDSPFilterGroup_Methods[] = {
  {(char*)"GetClassName", PyvtkDSPFilterGroup_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDSPFilterGroup_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDSPFilterGroup_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDSPFilterGroup\nC++: vtkDSPFilterGroup *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDSPFilterGroup_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDSPFilterGroup\nC++: vtkDSPFilterGroup *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddFilter", PyvtkDSPFilterGroup_AddFilter, METH_VARARGS,
   (char*)"V.AddFilter(vtkDSPFilterDefinition)\nC++: void AddFilter(vtkDSPFilterDefinition *filter)\n\n"},
  {(char*)"RemoveFilter", PyvtkDSPFilterGroup_RemoveFilter, METH_VARARGS,
   (char*)"V.RemoveFilter(string)\nC++: void RemoveFilter(char *a_outputVariableName)\n\n"},
  {(char*)"IsThisInputVariableInstanceNeeded", PyvtkDSPFilterGroup_IsThisInputVariableInstanceNeeded, METH_VARARGS,
   (char*)"V.IsThisInputVariableInstanceNeeded(string, int, int) -> bool\nC++: bool IsThisInputVariableInstanceNeeded(const char *a_name,\n    int a_timestep, int a_outputTimestep)\n\n"},
  {(char*)"IsThisInputVariableInstanceCached", PyvtkDSPFilterGroup_IsThisInputVariableInstanceCached, METH_VARARGS,
   (char*)"V.IsThisInputVariableInstanceCached(string, int) -> bool\nC++: bool IsThisInputVariableInstanceCached(const char *a_name,\n    int a_timestep)\n\n"},
  {(char*)"AddInputVariableInstance", PyvtkDSPFilterGroup_AddInputVariableInstance, METH_VARARGS,
   (char*)"V.AddInputVariableInstance(string, int, vtkFloatArray)\nC++: void AddInputVariableInstance(const char *a_name,\n    int a_timestep, vtkFloatArray *a_data)\n\n"},
  {(char*)"GetOutput", PyvtkDSPFilterGroup_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput(int, int, int) -> vtkFloatArray\nC++: vtkFloatArray *GetOutput(int a_whichFilter,\n    int a_whichTimestep, int &a_instancesCalculated)\n\n"},
  {(char*)"GetCachedInput", PyvtkDSPFilterGroup_GetCachedInput, METH_VARARGS,
   (char*)"V.GetCachedInput(int, int) -> vtkFloatArray\nC++: vtkFloatArray *GetCachedInput(int a_whichFilter,\n    int a_whichTimestep)\n\n"},
  {(char*)"GetCachedOutput", PyvtkDSPFilterGroup_GetCachedOutput, METH_VARARGS,
   (char*)"V.GetCachedOutput(int, int) -> vtkFloatArray\nC++: vtkFloatArray *GetCachedOutput(int a_whichFilter,\n    int a_whichTimestep)\n\n"},
  {(char*)"GetInputVariableName", PyvtkDSPFilterGroup_GetInputVariableName, METH_VARARGS,
   (char*)"V.GetInputVariableName(int) -> string\nC++: const char *GetInputVariableName(int a_whichFilter)\n\n"},
  {(char*)"GetNumFilters", PyvtkDSPFilterGroup_GetNumFilters, METH_VARARGS,
   (char*)"V.GetNumFilters() -> int\nC++: int GetNumFilters()\n\n"},
  {(char*)"Copy", PyvtkDSPFilterGroup_Copy, METH_VARARGS,
   (char*)"V.Copy(vtkDSPFilterGroup)\nC++: void Copy(vtkDSPFilterGroup *other)\n\n"},
  {(char*)"GetFilter", PyvtkDSPFilterGroup_GetFilter, METH_VARARGS,
   (char*)"V.GetFilter(int) -> vtkDSPFilterDefinition\nC++: vtkDSPFilterDefinition *GetFilter(int a_whichFilter)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDSPFilterGroup_StaticNew()
{
  return vtkDSPFilterGroup::New();
}

PyObject *PyVTKClass_vtkDSPFilterGroupNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDSPFilterGroup_StaticNew,
    PyvtkDSPFilterGroup_Methods,
    "vtkDSPFilterGroup", modulename,
    NULL, NULL,
    PyvtkDSPFilterGroup_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkDSPFilterGroup_Doc()
{
  static const char *docstring[] = {
    "vtkDSPFilterGroup - used by the Exodus readers\n\n",
    "Superclass: vtkObject\n\n",
    "vtkDSPFilterGroup is used by vtkExodusReader, vtkExodusIIReader and\nvtkPExodusReader to do temporal smoothing of data\n\nSee Also:\n\nvtkDSPFilterDefinition vtkExodusReader vtkExodusIIReader\nvtkPExodusReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDSPFilterGroup(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDSPFilterGroupNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDSPFilterGroup", o) != 0)
    {
    Py_DECREF(o);
    }

}

