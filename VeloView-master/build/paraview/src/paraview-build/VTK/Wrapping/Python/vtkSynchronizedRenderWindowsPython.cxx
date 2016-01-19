// python wrapper for vtkSynchronizedRenderWindows
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSynchronizedRenderWindows.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSynchronizedRenderWindows(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSynchronizedRenderWindowsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSynchronizedRenderWindows_Doc();


static PyObject *
PyvtkSynchronizedRenderWindows_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSynchronizedRenderWindows::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSynchronizedRenderWindows::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSynchronizedRenderWindows *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSynchronizedRenderWindows::NewInstance());

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
PyvtkSynchronizedRenderWindows_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSynchronizedRenderWindows *tempr = vtkSynchronizedRenderWindows::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetRenderWindow(temp0);
      }
    else
      {
      op->vtkSynchronizedRenderWindows::SetRenderWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkSynchronizedRenderWindows::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_SetParallelController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetParallelController(temp0);
      }
    else
      {
      op->vtkSynchronizedRenderWindows::SetParallelController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_GetParallelController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetParallelController() :
      op->vtkSynchronizedRenderWindows::GetParallelController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_SetIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIdentifier(temp0);
      }
    else
      {
      op->vtkSynchronizedRenderWindows::SetIdentifier(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_GetIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetIdentifier() :
      op->vtkSynchronizedRenderWindows::GetIdentifier());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_SetParallelRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParallelRendering(temp0);
      }
    else
      {
      op->vtkSynchronizedRenderWindows::SetParallelRendering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_GetParallelRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetParallelRendering() :
      op->vtkSynchronizedRenderWindows::GetParallelRendering());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_ParallelRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParallelRenderingOn();
      }
    else
      {
      op->vtkSynchronizedRenderWindows::ParallelRenderingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_ParallelRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParallelRenderingOff();
      }
    else
      {
      op->vtkSynchronizedRenderWindows::ParallelRenderingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_SetRenderEventPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderEventPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderEventPropagation(temp0);
      }
    else
      {
      op->vtkSynchronizedRenderWindows::SetRenderEventPropagation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_GetRenderEventPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderEventPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRenderEventPropagation() :
      op->vtkSynchronizedRenderWindows::GetRenderEventPropagation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_RenderEventPropagationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderEventPropagationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderEventPropagationOn();
      }
    else
      {
      op->vtkSynchronizedRenderWindows::RenderEventPropagationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_RenderEventPropagationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderEventPropagationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderEventPropagationOff();
      }
    else
      {
      op->vtkSynchronizedRenderWindows::RenderEventPropagationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_AbortRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AbortRender();
      }
    else
      {
      op->vtkSynchronizedRenderWindows::AbortRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_SetRootProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRootProcessId(temp0);
      }
    else
      {
      op->vtkSynchronizedRenderWindows::SetRootProcessId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_GetRootProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRootProcessId() :
      op->vtkSynchronizedRenderWindows::GetRootProcessId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSynchronizedRenderWindows_Methods[] = {
  {(char*)"GetClassName", PyvtkSynchronizedRenderWindows_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSynchronizedRenderWindows_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSynchronizedRenderWindows_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSynchronizedRenderWindows\nC++: vtkSynchronizedRenderWindows *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSynchronizedRenderWindows_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSynchronizedRenderWindows\nC++: vtkSynchronizedRenderWindows *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRenderWindow", PyvtkSynchronizedRenderWindows_SetRenderWindow, METH_VARARGS,
   (char*)"V.SetRenderWindow(vtkRenderWindow)\nC++: void SetRenderWindow(vtkRenderWindow *)\n\nSet the render window to be synchronized by this\nvtkSynchronizedRenderWindows instance. A\nvtkSynchronizedRenderWindows can be used to synchronize exactly 1\nvtkRenderWindow on each process.\n"},
  {(char*)"GetRenderWindow", PyvtkSynchronizedRenderWindows_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nSet the render window to be synchronized by this\nvtkSynchronizedRenderWindows instance. A\nvtkSynchronizedRenderWindows can be used to synchronize exactly 1\nvtkRenderWindow on each process.\n"},
  {(char*)"SetParallelController", PyvtkSynchronizedRenderWindows_SetParallelController, METH_VARARGS,
   (char*)"V.SetParallelController(vtkMultiProcessController)\nC++: void SetParallelController(vtkMultiProcessController *)\n\nSet the parallel message communicator. This is used to\ncommunicate among processes.\n"},
  {(char*)"GetParallelController", PyvtkSynchronizedRenderWindows_GetParallelController, METH_VARARGS,
   (char*)"V.GetParallelController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetParallelController()\n\nSet the parallel message communicator. This is used to\ncommunicate among processes.\n"},
  {(char*)"SetIdentifier", PyvtkSynchronizedRenderWindows_SetIdentifier, METH_VARARGS,
   (char*)"V.SetIdentifier(int)\nC++: void SetIdentifier(unsigned int id)\n\nIt's acceptable to have multiple instances on\nvtkSynchronizedRenderWindows on each processes to synchronize\ndifferent render windows. In that case there's no way to each of\nthe vtkSynchronizedRenderWindows instance to know how they\ncorrespond across processes. To enable that identification, a\nvtkSynchronizedRenderWindows can be assigned a unique id. All\nvtkSynchronizedRenderWindows across different processes that have\nthe same id are \"linked\" together for synchronization. It's\ncritical that the id is set before any rendering happens.\n"},
  {(char*)"GetIdentifier", PyvtkSynchronizedRenderWindows_GetIdentifier, METH_VARARGS,
   (char*)"V.GetIdentifier() -> int\nC++: unsigned int GetIdentifier()\n\nIt's acceptable to have multiple instances on\nvtkSynchronizedRenderWindows on each processes to synchronize\ndifferent render windows. In that case there's no way to each of\nthe vtkSynchronizedRenderWindows instance to know how they\ncorrespond across processes. To enable that identification, a\nvtkSynchronizedRenderWindows can be assigned a unique id. All\nvtkSynchronizedRenderWindows across different processes that have\nthe same id are \"linked\" together for synchronization. It's\ncritical that the id is set before any rendering happens.\n"},
  {(char*)"SetParallelRendering", PyvtkSynchronizedRenderWindows_SetParallelRendering, METH_VARARGS,
   (char*)"V.SetParallelRendering(bool)\nC++: void SetParallelRendering(bool a)\n\nEnable/Disable parallel rendering. Unless ParallelRendering is\nON, no synchronization of vtkRenderWindow::Render() calls between\nprocesses happens. ON by default.\n"},
  {(char*)"GetParallelRendering", PyvtkSynchronizedRenderWindows_GetParallelRendering, METH_VARARGS,
   (char*)"V.GetParallelRendering() -> bool\nC++: bool GetParallelRendering()\n\nEnable/Disable parallel rendering. Unless ParallelRendering is\nON, no synchronization of vtkRenderWindow::Render() calls between\nprocesses happens. ON by default.\n"},
  {(char*)"ParallelRenderingOn", PyvtkSynchronizedRenderWindows_ParallelRenderingOn, METH_VARARGS,
   (char*)"V.ParallelRenderingOn()\nC++: void ParallelRenderingOn()\n\nEnable/Disable parallel rendering. Unless ParallelRendering is\nON, no synchronization of vtkRenderWindow::Render() calls between\nprocesses happens. ON by default.\n"},
  {(char*)"ParallelRenderingOff", PyvtkSynchronizedRenderWindows_ParallelRenderingOff, METH_VARARGS,
   (char*)"V.ParallelRenderingOff()\nC++: void ParallelRenderingOff()\n\nEnable/Disable parallel rendering. Unless ParallelRendering is\nON, no synchronization of vtkRenderWindow::Render() calls between\nprocesses happens. ON by default.\n"},
  {(char*)"SetRenderEventPropagation", PyvtkSynchronizedRenderWindows_SetRenderEventPropagation, METH_VARARGS,
   (char*)"V.SetRenderEventPropagation(bool)\nC++: void SetRenderEventPropagation(bool a)\n\n"},
  {(char*)"GetRenderEventPropagation", PyvtkSynchronizedRenderWindows_GetRenderEventPropagation, METH_VARARGS,
   (char*)"V.GetRenderEventPropagation() -> bool\nC++: bool GetRenderEventPropagation()\n\n"},
  {(char*)"RenderEventPropagationOn", PyvtkSynchronizedRenderWindows_RenderEventPropagationOn, METH_VARARGS,
   (char*)"V.RenderEventPropagationOn()\nC++: void RenderEventPropagationOn()\n\n"},
  {(char*)"RenderEventPropagationOff", PyvtkSynchronizedRenderWindows_RenderEventPropagationOff, METH_VARARGS,
   (char*)"V.RenderEventPropagationOff()\nC++: void RenderEventPropagationOff()\n\n"},
  {(char*)"AbortRender", PyvtkSynchronizedRenderWindows_AbortRender, METH_VARARGS,
   (char*)"V.AbortRender()\nC++: virtual void AbortRender()\n\nThis method call be called while a render is in progress to abort\nthe rendering. It should be called on the root node (or client).\n"},
  {(char*)"SetRootProcessId", PyvtkSynchronizedRenderWindows_SetRootProcessId, METH_VARARGS,
   (char*)"V.SetRootProcessId(int)\nC++: void SetRootProcessId(int a)\n\nGet/Set the root-process id. This is required when the\nParallelController is a vtkSocketController. Set to 0 by default\n(which will not work when using a vtkSocketController but will\nwork for vtkMPIController).\n"},
  {(char*)"GetRootProcessId", PyvtkSynchronizedRenderWindows_GetRootProcessId, METH_VARARGS,
   (char*)"V.GetRootProcessId() -> int\nC++: int GetRootProcessId()\n\nGet/Set the root-process id. This is required when the\nParallelController is a vtkSocketController. Set to 0 by default\n(which will not work when using a vtkSocketController but will\nwork for vtkMPIController).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSynchronizedRenderWindows_StaticNew()
{
  return vtkSynchronizedRenderWindows::New();
}

PyObject *PyVTKClass_vtkSynchronizedRenderWindowsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSynchronizedRenderWindows_StaticNew,
    PyvtkSynchronizedRenderWindows_Methods,
    "vtkSynchronizedRenderWindows", modulename,
    NULL, NULL,
    PyvtkSynchronizedRenderWindows_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(vtkSynchronizedRenderWindows::SYNC_RENDER_TAG);
    if (o)
      {
      PyDict_SetItemString(d, (char *)"SYNC_RENDER_TAG", o);
      Py_DECREF(o);
      }
    }

  return cls;
}

const char **PyvtkSynchronizedRenderWindows_Doc()
{
  static const char *docstring[] = {
    "vtkSynchronizedRenderWindows - synchronizes render windows across\n\n",
    "Superclass: vtkObject\n\n",
    "vtkSynchronizedRenderWindows is used to synchronize render windows\nacross processes for parallel rendering.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSynchronizedRenderWindows(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSynchronizedRenderWindowsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSynchronizedRenderWindows", o) != 0)
    {
    Py_DECREF(o);
    }

}

