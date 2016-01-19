// python wrapper for vtkSubCommunicator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSubCommunicator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSubCommunicator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSubCommunicatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCommunicatorNew
extern "C" { PyObject *PyVTKClass_vtkCommunicatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkCommunicatorNew
#endif

static const char **PyvtkSubCommunicator_Doc();


static PyObject *
PyvtkSubCommunicator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubCommunicator *op = static_cast<vtkSubCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSubCommunicator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubCommunicator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubCommunicator *op = static_cast<vtkSubCommunicator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSubCommunicator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubCommunicator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubCommunicator *op = static_cast<vtkSubCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSubCommunicator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSubCommunicator::NewInstance());

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
PyvtkSubCommunicator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSubCommunicator *tempr = vtkSubCommunicator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubCommunicator_GetGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubCommunicator *op = static_cast<vtkSubCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProcessGroup *tempr = (ap.IsBound() ?
      op->GetGroup() :
      op->vtkSubCommunicator::GetGroup());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubCommunicator_SetGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubCommunicator *op = static_cast<vtkSubCommunicator *>(vp);

  vtkProcessGroup *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProcessGroup"))
    {
    if (ap.IsBound())
      {
      op->SetGroup(temp0);
      }
    else
      {
      op->vtkSubCommunicator::SetGroup(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSubCommunicator_SendVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubCommunicator *op = static_cast<vtkSubCommunicator *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    int tempr = (ap.IsBound() ?
      op->SendVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSubCommunicator::SendVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubCommunicator_ReceiveVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubCommunicator *op = static_cast<vtkSubCommunicator *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    int tempr = (ap.IsBound() ?
      op->ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSubCommunicator::ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSubCommunicator_Methods[] = {
  {(char*)"GetClassName", PyvtkSubCommunicator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSubCommunicator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSubCommunicator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSubCommunicator\nC++: vtkSubCommunicator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSubCommunicator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSubCommunicator\nC++: vtkSubCommunicator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetGroup", PyvtkSubCommunicator_GetGroup, METH_VARARGS,
   (char*)"V.GetGroup() -> vtkProcessGroup\nC++: vtkProcessGroup *GetGroup()\n\nSet/get the group on which communication will happen.\n"},
  {(char*)"SetGroup", PyvtkSubCommunicator_SetGroup, METH_VARARGS,
   (char*)"V.SetGroup(vtkProcessGroup)\nC++: virtual void SetGroup(vtkProcessGroup *group)\n\nSet/get the group on which communication will happen.\n"},
  {(char*)"SendVoidArray", PyvtkSubCommunicator_SendVoidArray, METH_VARARGS,
   (char*)"V.SendVoidArray(, int, int, int, int) -> int\nC++: virtual int SendVoidArray(const void *data, vtkIdType length,\n     int type, int remoteHandle, int tag)\n\nImplementation for abstract supercalss.\n"},
  {(char*)"ReceiveVoidArray", PyvtkSubCommunicator_ReceiveVoidArray, METH_VARARGS,
   (char*)"V.ReceiveVoidArray(, int, int, int, int) -> int\nC++: virtual int ReceiveVoidArray(void *data, vtkIdType length,\n    int type, int remoteHandle, int tag)\n\nImplementation for abstract supercalss.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSubCommunicator_StaticNew()
{
  return vtkSubCommunicator::New();
}

PyObject *PyVTKClass_vtkSubCommunicatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSubCommunicator_StaticNew,
    PyvtkSubCommunicator_Methods,
    "vtkSubCommunicator", modulename,
    NULL, NULL,
    PyvtkSubCommunicator_Doc(),
    PyVTKClass_vtkCommunicatorNew(modulename));
  return cls;
}

const char **PyvtkSubCommunicator_Doc()
{
  static const char *docstring[] = {
    "vtkSubCommunicator - Provides communication on a process group.\n\n",
    "Superclass: vtkCommunicator\n\n",
    "This class provides an implementation for communicating on process\ngroups. In general, you should never use this class directly. \nInstead, use the vtkMultiProcessController::CreateSubController\nmethod.\n\nBUGS:\n\nBecause all communication is delegated to the original communicator,\nany error will report process ids with respect to the original\ncommunicator, not this communicator that was actually used",
    ".\n\nSee Also:\n\nvtkCommunicator, vtkMultiProcessController\n\nThanks:\n\nThis class was originally written by Kenneth Moreland\n(kmorel@sandia.gov) from Sandia National Laboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSubCommunicator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSubCommunicatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSubCommunicator", o) != 0)
    {
    Py_DECREF(o);
    }

}

