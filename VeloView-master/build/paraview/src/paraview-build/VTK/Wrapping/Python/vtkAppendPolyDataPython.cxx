// python wrapper for vtkAppendPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkAppendPolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAppendPolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAppendPolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkAppendPolyData_Doc();


static PyObject *
PyvtkAppendPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAppendPolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAppendPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAppendPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAppendPolyData::NewInstance());

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
PyvtkAppendPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAppendPolyData *tempr = vtkAppendPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_SetUserManagedInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserManagedInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUserManagedInputs(temp0);
      }
    else
      {
      op->vtkAppendPolyData::SetUserManagedInputs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_GetUserManagedInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserManagedInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUserManagedInputs() :
      op->vtkAppendPolyData::GetUserManagedInputs());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_UserManagedInputsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserManagedInputsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UserManagedInputsOn();
      }
    else
      {
      op->vtkAppendPolyData::UserManagedInputsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_UserManagedInputsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserManagedInputsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UserManagedInputsOff();
      }
    else
      {
      op->vtkAppendPolyData::UserManagedInputsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_AddInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->AddInputData(temp0);
      }
    else
      {
      op->vtkAppendPolyData::AddInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_RemoveInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->RemoveInputData(temp0);
      }
    else
      {
      op->vtkAppendPolyData::RemoveInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkAppendPolyData::GetInput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAppendPolyData_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkAppendPolyData::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAppendPolyData_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAppendPolyData_GetInput_s1(self, args);
    case 0:
      return PyvtkAppendPolyData_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkAppendPolyData_SetNumberOfInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfInputs(temp0);
      }
    else
      {
      op->vtkAppendPolyData::SetNumberOfInputs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_SetInputConnectionByNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnectionByNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnectionByNumber(temp0, temp1);
      }
    else
      {
      op->vtkAppendPolyData::SetInputConnectionByNumber(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_SetInputDataByNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputDataByNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetInputDataByNumber(temp0, temp1);
      }
    else
      {
      op->vtkAppendPolyData::SetInputDataByNumber(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_SetParallelStreaming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelStreaming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParallelStreaming(temp0);
      }
    else
      {
      op->vtkAppendPolyData::SetParallelStreaming(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_GetParallelStreaming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelStreaming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetParallelStreaming() :
      op->vtkAppendPolyData::GetParallelStreaming());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_ParallelStreamingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelStreamingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParallelStreamingOn();
      }
    else
      {
      op->vtkAppendPolyData::ParallelStreamingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_ParallelStreamingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelStreamingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParallelStreamingOff();
      }
    else
      {
      op->vtkAppendPolyData::ParallelStreamingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPointsPrecision(temp0);
      }
    else
      {
      op->vtkAppendPolyData::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkAppendPolyData::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAppendPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkAppendPolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAppendPolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAppendPolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAppendPolyData\nC++: vtkAppendPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAppendPolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAppendPolyData\nC++: vtkAppendPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetUserManagedInputs", PyvtkAppendPolyData_SetUserManagedInputs, METH_VARARGS,
   (char*)"V.SetUserManagedInputs(int)\nC++: void SetUserManagedInputs(int a)\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputConnectionByNumber should not be mixed\nwith calls to AddInput/RemoveInput. By default, UserManagedInputs\nis false.\n"},
  {(char*)"GetUserManagedInputs", PyvtkAppendPolyData_GetUserManagedInputs, METH_VARARGS,
   (char*)"V.GetUserManagedInputs() -> int\nC++: int GetUserManagedInputs()\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputConnectionByNumber should not be mixed\nwith calls to AddInput/RemoveInput. By default, UserManagedInputs\nis false.\n"},
  {(char*)"UserManagedInputsOn", PyvtkAppendPolyData_UserManagedInputsOn, METH_VARARGS,
   (char*)"V.UserManagedInputsOn()\nC++: void UserManagedInputsOn()\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputConnectionByNumber should not be mixed\nwith calls to AddInput/RemoveInput. By default, UserManagedInputs\nis false.\n"},
  {(char*)"UserManagedInputsOff", PyvtkAppendPolyData_UserManagedInputsOff, METH_VARARGS,
   (char*)"V.UserManagedInputsOff()\nC++: void UserManagedInputsOff()\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputConnectionByNumber should not be mixed\nwith calls to AddInput/RemoveInput. By default, UserManagedInputs\nis false.\n"},
  {(char*)"AddInputData", PyvtkAppendPolyData_AddInputData, METH_VARARGS,
   (char*)"V.AddInputData(vtkPolyData)\nC++: void AddInputData(vtkPolyData *)\n\nAdd a dataset to the list of data to append. Should not be used\nwhen UserManagedInputs is true, use SetInputByNumber instead.\n"},
  {(char*)"RemoveInputData", PyvtkAppendPolyData_RemoveInputData, METH_VARARGS,
   (char*)"V.RemoveInputData(vtkPolyData)\nC++: void RemoveInputData(vtkPolyData *)\n\nRemove a dataset from the list of data to append. Should not be\nused when UserManagedInputs is true, use SetInputByNumber (NULL)\ninstead.\n"},
  {(char*)"GetInput", PyvtkAppendPolyData_GetInput, METH_VARARGS,
   (char*)"V.GetInput(int) -> vtkPolyData\nC++: vtkPolyData *GetInput(int idx)\nV.GetInput() -> vtkPolyData\nC++: vtkPolyData *GetInput()\n\nGet any input of this filter.\n"},
  {(char*)"SetNumberOfInputs", PyvtkAppendPolyData_SetNumberOfInputs, METH_VARARGS,
   (char*)"V.SetNumberOfInputs(int)\nC++: void SetNumberOfInputs(int num)\n\nDirectly set(allocate) number of inputs, should only be used when\nUserManagedInputs is true.\n"},
  {(char*)"SetInputConnectionByNumber", PyvtkAppendPolyData_SetInputConnectionByNumber, METH_VARARGS,
   (char*)"V.SetInputConnectionByNumber(int, vtkAlgorithmOutput)\nC++: void SetInputConnectionByNumber(int num,\n    vtkAlgorithmOutput *input)\n\n"},
  {(char*)"SetInputDataByNumber", PyvtkAppendPolyData_SetInputDataByNumber, METH_VARARGS,
   (char*)"V.SetInputDataByNumber(int, vtkPolyData)\nC++: void SetInputDataByNumber(int num, vtkPolyData *ds)\n\n"},
  {(char*)"SetParallelStreaming", PyvtkAppendPolyData_SetParallelStreaming, METH_VARARGS,
   (char*)"V.SetParallelStreaming(int)\nC++: void SetParallelStreaming(int a)\n\nParallelStreaming is for a particular application. It causes this\nfilter to ask for a different piece from each of its inputs.  If\nall the inputs are the same, then the output of this append\nfilter is the whole dataset pieced back together.  Duplicate\npoints are create along the seams.  The purpose of this feature\nis to get data parallelism at a course scale.  Each of the inputs\ncan be generated in a different process at the same time.\n"},
  {(char*)"GetParallelStreaming", PyvtkAppendPolyData_GetParallelStreaming, METH_VARARGS,
   (char*)"V.GetParallelStreaming() -> int\nC++: int GetParallelStreaming()\n\nParallelStreaming is for a particular application. It causes this\nfilter to ask for a different piece from each of its inputs.  If\nall the inputs are the same, then the output of this append\nfilter is the whole dataset pieced back together.  Duplicate\npoints are create along the seams.  The purpose of this feature\nis to get data parallelism at a course scale.  Each of the inputs\ncan be generated in a different process at the same time.\n"},
  {(char*)"ParallelStreamingOn", PyvtkAppendPolyData_ParallelStreamingOn, METH_VARARGS,
   (char*)"V.ParallelStreamingOn()\nC++: void ParallelStreamingOn()\n\nParallelStreaming is for a particular application. It causes this\nfilter to ask for a different piece from each of its inputs.  If\nall the inputs are the same, then the output of this append\nfilter is the whole dataset pieced back together.  Duplicate\npoints are create along the seams.  The purpose of this feature\nis to get data parallelism at a course scale.  Each of the inputs\ncan be generated in a different process at the same time.\n"},
  {(char*)"ParallelStreamingOff", PyvtkAppendPolyData_ParallelStreamingOff, METH_VARARGS,
   (char*)"V.ParallelStreamingOff()\nC++: void ParallelStreamingOff()\n\nParallelStreaming is for a particular application. It causes this\nfilter to ask for a different piece from each of its inputs.  If\nall the inputs are the same, then the output of this append\nfilter is the whole dataset pieced back together.  Duplicate\npoints are create along the seams.  The purpose of this feature\nis to get data parallelism at a course scale.  Each of the inputs\ncan be generated in a different process at the same time.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkAppendPolyData_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkAppendPolyData_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAppendPolyData_StaticNew()
{
  return vtkAppendPolyData::New();
}

PyObject *PyVTKClass_vtkAppendPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAppendPolyData_StaticNew,
    PyvtkAppendPolyData_Methods,
    "vtkAppendPolyData", modulename,
    NULL, NULL,
    PyvtkAppendPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAppendPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkAppendPolyData - appends one or more polygonal datasets together\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkAppendPolyData is a filter that appends one of more polygonal\ndatasets into a single polygonal dataset. All geometry is extracted\nand appended, but point and cell attributes (i.e., scalars, vectors,\nnormals) are extracted and appended only if all datasets have the\npoint and/or cell attributes available.  (For example, if one dataset\nhas point scalars but another does not, point scalars will not",
    " be\nappended.)\n\nSee Also:\n\nvtkAppendFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAppendPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAppendPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAppendPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

