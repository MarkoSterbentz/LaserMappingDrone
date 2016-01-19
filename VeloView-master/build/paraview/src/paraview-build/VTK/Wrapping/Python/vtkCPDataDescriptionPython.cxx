// python wrapper for vtkCPDataDescription
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCPDataDescription.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCPDataDescription(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCPDataDescriptionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCPDataDescription_Doc();


static PyObject *
PyvtkCPDataDescription_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCPDataDescription::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPDataDescription::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCPDataDescription *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPDataDescription::NewInstance());

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
PyvtkCPDataDescription_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCPDataDescription *tempr = vtkCPDataDescription::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_SetTimeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  double temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTimeData(temp0, temp1);
      }
    else
      {
      op->vtkCPDataDescription::SetTimeData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkCPDataDescription::GetTimeStep());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTime() :
      op->vtkCPDataDescription::GetTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_SetForceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForceOutput(temp0);
      }
    else
      {
      op->vtkCPDataDescription::SetForceOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_ForceOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceOutputOn();
      }
    else
      {
      op->vtkCPDataDescription::ForceOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_ForceOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceOutputOff();
      }
    else
      {
      op->vtkCPDataDescription::ForceOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetForceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetForceOutput() :
      op->vtkCPDataDescription::GetForceOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_AddInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0);
      }
    else
      {
      op->vtkCPDataDescription::AddInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetNumberOfInputDescriptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputDescriptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfInputDescriptions() :
      op->vtkCPDataDescription::GetNumberOfInputDescriptions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_ResetInputDescriptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetInputDescriptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetInputDescriptions();
      }
    else
      {
      op->vtkCPDataDescription::ResetInputDescriptions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_ResetAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetAll();
      }
    else
      {
      op->vtkCPDataDescription::ResetAll();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetInputDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCPInputDataDescription *tempr = (ap.IsBound() ?
      op->GetInputDescription(temp0) :
      op->vtkCPDataDescription::GetInputDescription(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetInputDescriptionName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputDescriptionName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetInputDescriptionName(temp0) :
      op->vtkCPDataDescription::GetInputDescriptionName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetInputDescriptionByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputDescriptionByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCPInputDataDescription *tempr = (ap.IsBound() ?
      op->GetInputDescriptionByName(temp0) :
      op->vtkCPDataDescription::GetInputDescriptionByName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetIfGridIsNecessary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIfGridIsNecessary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIfGridIsNecessary(temp0) :
      op->vtkCPDataDescription::GetIfGridIsNecessary(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetIfAnyGridNecessary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIfAnyGridNecessary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIfAnyGridNecessary() :
      op->vtkCPDataDescription::GetIfAnyGridNecessary());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_SetUserData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  vtkFieldData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      op->SetUserData(temp0);
      }
    else
      {
      op->vtkCPDataDescription::SetUserData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetUserData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->GetUserData() :
      op->vtkCPDataDescription::GetUserData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCPDataDescription_Methods[] = {
  {(char*)"GetClassName", PyvtkCPDataDescription_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCPDataDescription_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCPDataDescription_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCPDataDescription\nC++: vtkCPDataDescription *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCPDataDescription_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCPDataDescription\nC++: vtkCPDataDescription *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTimeData", PyvtkCPDataDescription_SetTimeData, METH_VARARGS,
   (char*)"V.SetTimeData(float, int)\nC++: void SetTimeData(double time, vtkIdType timeStep)\n\n"},
  {(char*)"GetTimeStep", PyvtkCPDataDescription_GetTimeStep, METH_VARARGS,
   (char*)"V.GetTimeStep() -> int\nC++: vtkIdType GetTimeStep()\n\n"},
  {(char*)"GetTime", PyvtkCPDataDescription_GetTime, METH_VARARGS,
   (char*)"V.GetTime() -> float\nC++: double GetTime()\n\n"},
  {(char*)"SetForceOutput", PyvtkCPDataDescription_SetForceOutput, METH_VARARGS,
   (char*)"V.SetForceOutput(bool)\nC++: void SetForceOutput(bool a)\n\n"},
  {(char*)"ForceOutputOn", PyvtkCPDataDescription_ForceOutputOn, METH_VARARGS,
   (char*)"V.ForceOutputOn()\nC++: void ForceOutputOn()\n\n"},
  {(char*)"ForceOutputOff", PyvtkCPDataDescription_ForceOutputOff, METH_VARARGS,
   (char*)"V.ForceOutputOff()\nC++: void ForceOutputOff()\n\n"},
  {(char*)"GetForceOutput", PyvtkCPDataDescription_GetForceOutput, METH_VARARGS,
   (char*)"V.GetForceOutput() -> bool\nC++: bool GetForceOutput()\n\n"},
  {(char*)"AddInput", PyvtkCPDataDescription_AddInput, METH_VARARGS,
   (char*)"V.AddInput(string)\nC++: void AddInput(const char *gridName)\n\n"},
  {(char*)"GetNumberOfInputDescriptions", PyvtkCPDataDescription_GetNumberOfInputDescriptions, METH_VARARGS,
   (char*)"V.GetNumberOfInputDescriptions() -> int\nC++: unsigned int GetNumberOfInputDescriptions()\n\n"},
  {(char*)"ResetInputDescriptions", PyvtkCPDataDescription_ResetInputDescriptions, METH_VARARGS,
   (char*)"V.ResetInputDescriptions()\nC++: void ResetInputDescriptions()\n\n"},
  {(char*)"ResetAll", PyvtkCPDataDescription_ResetAll, METH_VARARGS,
   (char*)"V.ResetAll()\nC++: void ResetAll()\n\n"},
  {(char*)"GetInputDescription", PyvtkCPDataDescription_GetInputDescription, METH_VARARGS,
   (char*)"V.GetInputDescription(int) -> vtkCPInputDataDescription\nC++: vtkCPInputDataDescription *GetInputDescription(unsigned int)\n\n"},
  {(char*)"GetInputDescriptionName", PyvtkCPDataDescription_GetInputDescriptionName, METH_VARARGS,
   (char*)"V.GetInputDescriptionName(int) -> string\nC++: const char *GetInputDescriptionName(unsigned int)\n\n"},
  {(char*)"GetInputDescriptionByName", PyvtkCPDataDescription_GetInputDescriptionByName, METH_VARARGS,
   (char*)"V.GetInputDescriptionByName(string) -> vtkCPInputDataDescription\nC++: vtkCPInputDataDescription *GetInputDescriptionByName(\n    const char *)\n\n"},
  {(char*)"GetIfGridIsNecessary", PyvtkCPDataDescription_GetIfGridIsNecessary, METH_VARARGS,
   (char*)"V.GetIfGridIsNecessary(string) -> bool\nC++: bool GetIfGridIsNecessary(const char *)\n\n"},
  {(char*)"GetIfAnyGridNecessary", PyvtkCPDataDescription_GetIfAnyGridNecessary, METH_VARARGS,
   (char*)"V.GetIfAnyGridNecessary() -> bool\nC++: bool GetIfAnyGridNecessary()\n\n"},
  {(char*)"SetUserData", PyvtkCPDataDescription_SetUserData, METH_VARARGS,
   (char*)"V.SetUserData(vtkFieldData)\nC++: void SetUserData(vtkFieldData *UserData)\n\n"},
  {(char*)"GetUserData", PyvtkCPDataDescription_GetUserData, METH_VARARGS,
   (char*)"V.GetUserData() -> vtkFieldData\nC++: vtkFieldData *GetUserData()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCPDataDescription_StaticNew()
{
  return vtkCPDataDescription::New();
}

PyObject *PyVTKClass_vtkCPDataDescriptionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCPDataDescription_StaticNew,
    PyvtkCPDataDescription_Methods,
    "vtkCPDataDescription", modulename,
    NULL, NULL,
    PyvtkCPDataDescription_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCPDataDescription_Doc()
{
  static const char *docstring[] = {
    "vtkCPDataDescription - no description provided.\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCPDataDescription(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCPDataDescriptionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCPDataDescription", o) != 0)
    {
    Py_DECREF(o);
    }

}

