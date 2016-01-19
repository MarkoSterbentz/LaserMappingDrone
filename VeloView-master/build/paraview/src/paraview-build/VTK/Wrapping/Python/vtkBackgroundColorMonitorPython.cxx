// python wrapper for vtkBackgroundColorMonitor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBackgroundColorMonitor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBackgroundColorMonitor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBackgroundColorMonitorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkBackgroundColorMonitor_Doc();


static PyObject *
PyvtkBackgroundColorMonitor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBackgroundColorMonitor *op = static_cast<vtkBackgroundColorMonitor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBackgroundColorMonitor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBackgroundColorMonitor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBackgroundColorMonitor *op = static_cast<vtkBackgroundColorMonitor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBackgroundColorMonitor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBackgroundColorMonitor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBackgroundColorMonitor *op = static_cast<vtkBackgroundColorMonitor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBackgroundColorMonitor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBackgroundColorMonitor::NewInstance());

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
PyvtkBackgroundColorMonitor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBackgroundColorMonitor *tempr = vtkBackgroundColorMonitor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBackgroundColorMonitor_StateChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StateChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBackgroundColorMonitor *op = static_cast<vtkBackgroundColorMonitor *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    bool tempr = (ap.IsBound() ?
      op->StateChanged(temp0) :
      op->vtkBackgroundColorMonitor::StateChanged(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBackgroundColorMonitor_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBackgroundColorMonitor *op = static_cast<vtkBackgroundColorMonitor *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->Update(temp0);
      }
    else
      {
      op->vtkBackgroundColorMonitor::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBackgroundColorMonitor_Methods[] = {
  {(char*)"GetClassName", PyvtkBackgroundColorMonitor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBackgroundColorMonitor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBackgroundColorMonitor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBackgroundColorMonitor\nC++: vtkBackgroundColorMonitor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBackgroundColorMonitor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBackgroundColorMonitor\nC++: vtkBackgroundColorMonitor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"StateChanged", PyvtkBackgroundColorMonitor_StateChanged, METH_VARARGS,
   (char*)"V.StateChanged(vtkRenderer) -> bool\nC++: bool StateChanged(vtkRenderer *ren)\n\nFetches the current background color state and updates the\ninternal copies of the data. returns true if any of the tracked\ncolors or modes have changed. Typically this is the only function\na user needs to call.\n"},
  {(char*)"Update", PyvtkBackgroundColorMonitor_Update, METH_VARARGS,
   (char*)"V.Update(vtkRenderer)\nC++: void Update(vtkRenderer *ren)\n\nUpdate the internal state if anything changed. Note, this is done\nautomatically in SateChanged.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBackgroundColorMonitor_StaticNew()
{
  return vtkBackgroundColorMonitor::New();
}

PyObject *PyVTKClass_vtkBackgroundColorMonitorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBackgroundColorMonitor_StaticNew,
    PyvtkBackgroundColorMonitor_Methods,
    "vtkBackgroundColorMonitor", modulename,
    NULL, NULL,
    PyvtkBackgroundColorMonitor_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkBackgroundColorMonitor_Doc()
{
  static const char *docstring[] = {
    "vtkBackgroundColorMonitor -- A helper for painters that\n\n",
    "Superclass: vtkObject\n\n",
    "vtkBackgroundColorMonitor -- A helper for painters that tracks state\nof background color(s). A Painter could use this to skip expensive\nprocessing that is only needed when background color changes. This\nclass queries VTK renderer rather than OpenGL state in order to\nsupport VTK's gradient background.\n\nthis is not intended to be shared. each object should use it's own\ninstance of this class. it's i",
    "ntended to be called once per render.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBackgroundColorMonitor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBackgroundColorMonitorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBackgroundColorMonitor", o) != 0)
    {
    Py_DECREF(o);
    }

}

