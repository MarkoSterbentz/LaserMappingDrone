// python wrapper for vtkDuplicatePolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDuplicatePolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDuplicatePolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDuplicatePolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkDuplicatePolyData_Doc();


static PyObject *
PyvtkDuplicatePolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDuplicatePolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDuplicatePolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDuplicatePolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDuplicatePolyData::NewInstance());

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
PyvtkDuplicatePolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDuplicatePolyData *tempr = vtkDuplicatePolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkDuplicatePolyData::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkDuplicatePolyData::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_InitializeSchedule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSchedule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->InitializeSchedule(temp0);
      }
    else
      {
      op->vtkDuplicatePolyData::InitializeSchedule(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SetSynchronous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSynchronous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSynchronous(temp0);
      }
    else
      {
      op->vtkDuplicatePolyData::SetSynchronous(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetSynchronous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSynchronous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSynchronous() :
      op->vtkDuplicatePolyData::GetSynchronous());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SynchronousOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronousOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SynchronousOn();
      }
    else
      {
      op->vtkDuplicatePolyData::SynchronousOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SynchronousOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronousOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SynchronousOff();
      }
    else
      {
      op->vtkDuplicatePolyData::SynchronousOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSocketController *tempr = (ap.IsBound() ?
      op->GetSocketController() :
      op->vtkDuplicatePolyData::GetSocketController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  vtkSocketController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSocketController"))
    {
    if (ap.IsBound())
      {
      op->SetSocketController(temp0);
      }
    else
      {
      op->vtkDuplicatePolyData::SetSocketController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SetClientFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClientFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClientFlag(temp0);
      }
    else
      {
      op->vtkDuplicatePolyData::SetClientFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetClientFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClientFlag() :
      op->vtkDuplicatePolyData::GetClientFlag());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMemorySize() :
      op->vtkDuplicatePolyData::GetMemorySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDuplicatePolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkDuplicatePolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDuplicatePolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDuplicatePolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDuplicatePolyData\nC++: vtkDuplicatePolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDuplicatePolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDuplicatePolyData\nC++: vtkDuplicatePolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkDuplicatePolyData_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"GetController", PyvtkDuplicatePolyData_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"InitializeSchedule", PyvtkDuplicatePolyData_InitializeSchedule, METH_VARARGS,
   (char*)"V.InitializeSchedule(int)\nC++: void InitializeSchedule(int numProcs)\n\n"},
  {(char*)"SetSynchronous", PyvtkDuplicatePolyData_SetSynchronous, METH_VARARGS,
   (char*)"V.SetSynchronous(int)\nC++: void SetSynchronous(int a)\n\nThis flag causes sends and receives to be matched. When this flag\nis off, two sends occur then two receives. I want to see if it\nmakes a difference in performance. The flag is on by default.\n"},
  {(char*)"GetSynchronous", PyvtkDuplicatePolyData_GetSynchronous, METH_VARARGS,
   (char*)"V.GetSynchronous() -> int\nC++: int GetSynchronous()\n\nThis flag causes sends and receives to be matched. When this flag\nis off, two sends occur then two receives. I want to see if it\nmakes a difference in performance. The flag is on by default.\n"},
  {(char*)"SynchronousOn", PyvtkDuplicatePolyData_SynchronousOn, METH_VARARGS,
   (char*)"V.SynchronousOn()\nC++: void SynchronousOn()\n\nThis flag causes sends and receives to be matched. When this flag\nis off, two sends occur then two receives. I want to see if it\nmakes a difference in performance. The flag is on by default.\n"},
  {(char*)"SynchronousOff", PyvtkDuplicatePolyData_SynchronousOff, METH_VARARGS,
   (char*)"V.SynchronousOff()\nC++: void SynchronousOff()\n\nThis flag causes sends and receives to be matched. When this flag\nis off, two sends occur then two receives. I want to see if it\nmakes a difference in performance. The flag is on by default.\n"},
  {(char*)"GetSocketController", PyvtkDuplicatePolyData_GetSocketController, METH_VARARGS,
   (char*)"V.GetSocketController() -> vtkSocketController\nC++: vtkSocketController *GetSocketController()\n\nThis duplicate filter works in client server mode when this\ncontroller is set.  We have a client flag to diferentiate the\nclient and server because the socket controller is odd: Proth\nprocesses think their id is 0.\n"},
  {(char*)"SetSocketController", PyvtkDuplicatePolyData_SetSocketController, METH_VARARGS,
   (char*)"V.SetSocketController(vtkSocketController)\nC++: void SetSocketController(vtkSocketController *controller)\n\nThis duplicate filter works in client server mode when this\ncontroller is set.  We have a client flag to diferentiate the\nclient and server because the socket controller is odd: Proth\nprocesses think their id is 0.\n"},
  {(char*)"SetClientFlag", PyvtkDuplicatePolyData_SetClientFlag, METH_VARARGS,
   (char*)"V.SetClientFlag(int)\nC++: void SetClientFlag(int a)\n\nThis duplicate filter works in client server mode when this\ncontroller is set.  We have a client flag to diferentiate the\nclient and server because the socket controller is odd: Proth\nprocesses think their id is 0.\n"},
  {(char*)"GetClientFlag", PyvtkDuplicatePolyData_GetClientFlag, METH_VARARGS,
   (char*)"V.GetClientFlag() -> int\nC++: int GetClientFlag()\n\nThis duplicate filter works in client server mode when this\ncontroller is set.  We have a client flag to diferentiate the\nclient and server because the socket controller is odd: Proth\nprocesses think their id is 0.\n"},
  {(char*)"GetMemorySize", PyvtkDuplicatePolyData_GetMemorySize, METH_VARARGS,
   (char*)"V.GetMemorySize() -> int\nC++: unsigned long GetMemorySize()\n\nThis returns to size of the output (on this process). This method\nis not really used.  It is needed to have the same API as\nvtkCollectPolyData.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDuplicatePolyData_StaticNew()
{
  return vtkDuplicatePolyData::New();
}

PyObject *PyVTKClass_vtkDuplicatePolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDuplicatePolyData_StaticNew,
    PyvtkDuplicatePolyData_Methods,
    "vtkDuplicatePolyData", modulename,
    NULL, NULL,
    PyvtkDuplicatePolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDuplicatePolyData_Doc()
{
  static const char *docstring[] = {
    "vtkDuplicatePolyData - For distributed tiled displays.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "This filter collects poly data and duplicates it on every node.\nConverts data parallel so every node has a complete copy of the data.\nThe filter is used at the end of a pipeline for driving a tiled\ndisplay.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDuplicatePolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDuplicatePolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDuplicatePolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

