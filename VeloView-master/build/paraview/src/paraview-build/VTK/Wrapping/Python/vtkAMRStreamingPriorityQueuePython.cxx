// python wrapper for vtkAMRStreamingPriorityQueue
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRStreamingPriorityQueue.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRStreamingPriorityQueue(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRStreamingPriorityQueueNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAMRStreamingPriorityQueue_Doc();


static PyObject *
PyvtkAMRStreamingPriorityQueue_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRStreamingPriorityQueue::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingPriorityQueue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRStreamingPriorityQueue::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingPriorityQueue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRStreamingPriorityQueue *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRStreamingPriorityQueue::NewInstance());

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
PyvtkAMRStreamingPriorityQueue_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRStreamingPriorityQueue *tempr = vtkAMRStreamingPriorityQueue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingPriorityQueue_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

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
      op->vtkAMRStreamingPriorityQueue::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingPriorityQueue_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRStreamingPriorityQueue::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingPriorityQueue_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  vtkAMRInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAMRInformation"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkAMRStreamingPriorityQueue::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingPriorityQueue_Reinitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reinitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reinitialize();
      }
    else
      {
      op->vtkAMRStreamingPriorityQueue::Reinitialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingPriorityQueue_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  double temp0[24];
  const int size0 = 24;
  double temp1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->Update(temp0, temp1);
      }
    else
      {
      op->vtkAMRStreamingPriorityQueue::Update(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRStreamingPriorityQueue_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  double temp0[24];
  const int size0 = 24;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->Update(temp0);
      }
    else
      {
      op->vtkAMRStreamingPriorityQueue::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRStreamingPriorityQueue_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAMRStreamingPriorityQueue_Update_s1(self, args);
    case 1:
      return PyvtkAMRStreamingPriorityQueue_Update_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return NULL;
}



static PyObject *
PyvtkAMRStreamingPriorityQueue_IsEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsEmpty() :
      op->vtkAMRStreamingPriorityQueue::IsEmpty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingPriorityQueue_Pop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->Pop() :
      op->vtkAMRStreamingPriorityQueue::Pop());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRStreamingPriorityQueue_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRStreamingPriorityQueue_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRStreamingPriorityQueue_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRStreamingPriorityQueue_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRStreamingPriorityQueue\nC++: vtkAMRStreamingPriorityQueue *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRStreamingPriorityQueue_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRStreamingPriorityQueue\nC++: vtkAMRStreamingPriorityQueue *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkAMRStreamingPriorityQueue_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *)\n\nIf the controller is specified, the queue can be used in\nparallel. So long as Initialize(), Update() and Pop() methods are\ncalled on all processes (need not be synchronized) and all\nprocess get the same amr tree and view_planes (which is generally\ntrue with ParaView), the blocks are distributed among the\nprocesses. By default, this is set to the\nvtkMultiProcessController::GetGlobalController();\n"},
  {(char*)"GetController", PyvtkAMRStreamingPriorityQueue_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nIf the controller is specified, the queue can be used in\nparallel. So long as Initialize(), Update() and Pop() methods are\ncalled on all processes (need not be synchronized) and all\nprocess get the same amr tree and view_planes (which is generally\ntrue with ParaView), the blocks are distributed among the\nprocesses. By default, this is set to the\nvtkMultiProcessController::GetGlobalController();\n"},
  {(char*)"Initialize", PyvtkAMRStreamingPriorityQueue_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkAMRInformation)\nC++: void Initialize(vtkAMRInformation *amr)\n\nInitializes the queue. All information about items in the is\nlost.\n"},
  {(char*)"Reinitialize", PyvtkAMRStreamingPriorityQueue_Reinitialize, METH_VARARGS,
   (char*)"V.Reinitialize()\nC++: void Reinitialize()\n\nRe-initializes the priority queue using the amr structure given\nto the most recent call to Initialize().\n"},
  {(char*)"Update", PyvtkAMRStreamingPriorityQueue_Update, METH_VARARGS,
   (char*)"V.Update((float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float), (float,\n    float, float, float, float, float))\nC++: void Update(const double view_planes[24],\n    const double clamp_bounds[6])\nV.Update((float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float))\nC++: void Update(const double view_planes[24])\n\nUpdates the priorities of blocks based on the new view frustum\nplanes. Information about blocks \"popped\" from the queue is\npreserved and those blocks are not reinserted in the queue.\n"},
  {(char*)"IsEmpty", PyvtkAMRStreamingPriorityQueue_IsEmpty, METH_VARARGS,
   (char*)"V.IsEmpty() -> bool\nC++: bool IsEmpty()\n\nReturns if the queue is empty.\n"},
  {(char*)"Pop", PyvtkAMRStreamingPriorityQueue_Pop, METH_VARARGS,
   (char*)"V.Pop() -> int\nC++: unsigned int Pop()\n\nPops and returns of composite id for the block at the top of the\nqueue. Test if the queue is empty before calling this method.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRStreamingPriorityQueue_StaticNew()
{
  return vtkAMRStreamingPriorityQueue::New();
}

PyObject *PyVTKClass_vtkAMRStreamingPriorityQueueNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRStreamingPriorityQueue_StaticNew,
    PyvtkAMRStreamingPriorityQueue_Methods,
    "vtkAMRStreamingPriorityQueue", modulename,
    NULL, NULL,
    PyvtkAMRStreamingPriorityQueue_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAMRStreamingPriorityQueue_Doc()
{
  static const char *docstring[] = {
    "vtkAMRStreamingPriorityQueue - implements a coverage based priority\n\n",
    "Superclass: vtkObject\n\n",
    "vtkAMRStreamingPriorityQueue is used by representations supporting\nstreaming of AMR datasets to determine the priorities for blocks in\nthe dataset. This class relies on the bounds information provided by\nthe AMR meta-data i.e. vtkAMRInformation. This class support\nview-based priority computation. Simply provide the view planes\n(returned by vtkCamera::GetFrustumPlanes()) to the\nvtkAMRStreamingPrior",
    "ityQueue::Update() call to update the prorities\nfor the blocks currently in the queue.\n\nSee Also:\n\nvtkAMROutlineRepresentation, vtkAMRStreamingVolumeRepresentation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRStreamingPriorityQueue(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRStreamingPriorityQueueNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRStreamingPriorityQueue", o) != 0)
    {
    Py_DECREF(o);
    }

}

