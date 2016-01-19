// python wrapper for vtkPHardwareSelector
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPHardwareSelector.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPHardwareSelector(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPHardwareSelectorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkOpenGLHardwareSelectorNew
extern "C" { PyObject *PyVTKClass_vtkOpenGLHardwareSelectorNew(const char *); }
#define DECLARED_PyVTKClass_vtkOpenGLHardwareSelectorNew
#endif

static const char **PyvtkPHardwareSelector_Doc();


static PyObject *
PyvtkPHardwareSelector_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPHardwareSelector *op = static_cast<vtkPHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPHardwareSelector::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPHardwareSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPHardwareSelector *op = static_cast<vtkPHardwareSelector *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPHardwareSelector::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPHardwareSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPHardwareSelector *op = static_cast<vtkPHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPHardwareSelector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPHardwareSelector::NewInstance());

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
PyvtkPHardwareSelector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPHardwareSelector *tempr = vtkPHardwareSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPHardwareSelector_SetProcessIsRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessIsRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPHardwareSelector *op = static_cast<vtkPHardwareSelector *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessIsRoot(temp0);
      }
    else
      {
      op->vtkPHardwareSelector::SetProcessIsRoot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPHardwareSelector_GetProcessIsRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessIsRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPHardwareSelector *op = static_cast<vtkPHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetProcessIsRoot() :
      op->vtkPHardwareSelector::GetProcessIsRoot());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPHardwareSelector_ProcessIsRootOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessIsRootOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPHardwareSelector *op = static_cast<vtkPHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProcessIsRootOn();
      }
    else
      {
      op->vtkPHardwareSelector::ProcessIsRootOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPHardwareSelector_ProcessIsRootOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessIsRootOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPHardwareSelector *op = static_cast<vtkPHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProcessIsRootOff();
      }
    else
      {
      op->vtkPHardwareSelector::ProcessIsRootOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPHardwareSelector_CaptureBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPHardwareSelector *op = static_cast<vtkPHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->CaptureBuffers() :
      op->vtkPHardwareSelector::CaptureBuffers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPHardwareSelector_Methods[] = {
  {(char*)"GetClassName", PyvtkPHardwareSelector_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPHardwareSelector_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPHardwareSelector_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPHardwareSelector\nC++: vtkPHardwareSelector *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPHardwareSelector_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPHardwareSelector\nC++: vtkPHardwareSelector *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetProcessIsRoot", PyvtkPHardwareSelector_SetProcessIsRoot, METH_VARARGS,
   (char*)"V.SetProcessIsRoot(bool)\nC++: void SetProcessIsRoot(bool a)\n\nSet/Get the is the root process. The root processes is the only\nprocesses which has the composited result and hence the only\nprocesses that capture buffers and builds selected list ids.\n"},
  {(char*)"GetProcessIsRoot", PyvtkPHardwareSelector_GetProcessIsRoot, METH_VARARGS,
   (char*)"V.GetProcessIsRoot() -> bool\nC++: bool GetProcessIsRoot()\n\nSet/Get the is the root process. The root processes is the only\nprocesses which has the composited result and hence the only\nprocesses that capture buffers and builds selected list ids.\n"},
  {(char*)"ProcessIsRootOn", PyvtkPHardwareSelector_ProcessIsRootOn, METH_VARARGS,
   (char*)"V.ProcessIsRootOn()\nC++: void ProcessIsRootOn()\n\nSet/Get the is the root process. The root processes is the only\nprocesses which has the composited result and hence the only\nprocesses that capture buffers and builds selected list ids.\n"},
  {(char*)"ProcessIsRootOff", PyvtkPHardwareSelector_ProcessIsRootOff, METH_VARARGS,
   (char*)"V.ProcessIsRootOff()\nC++: void ProcessIsRootOff()\n\nSet/Get the is the root process. The root processes is the only\nprocesses which has the composited result and hence the only\nprocesses that capture buffers and builds selected list ids.\n"},
  {(char*)"CaptureBuffers", PyvtkPHardwareSelector_CaptureBuffers, METH_VARARGS,
   (char*)"V.CaptureBuffers() -> bool\nC++: virtual bool CaptureBuffers()\n\nOverridden to only allow the superclass implementation on the\nroot node. On all other processes, the updating the internal\nstate of the vtkHardwareSelector as the capturing of buffers\nprogresses is done as a slave to the master render.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPHardwareSelector_StaticNew()
{
  return vtkPHardwareSelector::New();
}

PyObject *PyVTKClass_vtkPHardwareSelectorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPHardwareSelector_StaticNew,
    PyvtkPHardwareSelector_Methods,
    "vtkPHardwareSelector", modulename,
    NULL, NULL,
    PyvtkPHardwareSelector_Doc(),
    PyVTKClass_vtkOpenGLHardwareSelectorNew(modulename));
  return cls;
}

const char **PyvtkPHardwareSelector_Doc()
{
  static const char *docstring[] = {
    "vtkPHardwareSelector - vtkHardwareSelector useful for parallel\n\n",
    "Superclass: vtkOpenGLHardwareSelector\n\n",
    "vtkPHardwareSelector is a vtkHardwareSelector that is parallel aware.\nIt relies on the fact that the application is going to use some other\nmechanism to ensure that renders are synchronized among windows on\nall processes. The synchronization happens from the root node. When\nthe root node renders, all processes render. Only\nvtkPHardwareSelector instance on the root node triggers the renders.\nAll ot",
    "her processes, simply listen to the StartEvent fired and\nbeginning of the render to ensure that vtkHardwareSelector's\nCurrentPass is updated appropriately.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPHardwareSelector(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPHardwareSelectorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPHardwareSelector", o) != 0)
    {
    Py_DECREF(o);
    }

}

