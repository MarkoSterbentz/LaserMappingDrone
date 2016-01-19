// python wrapper for vtkProgressObserver
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProgressObserver.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProgressObserver(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProgressObserverNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkProgressObserver_Doc();


static PyObject *
PyvtkProgressObserver_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressObserver *op = static_cast<vtkProgressObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProgressObserver::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgressObserver_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressObserver *op = static_cast<vtkProgressObserver *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProgressObserver::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgressObserver_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressObserver *op = static_cast<vtkProgressObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProgressObserver *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProgressObserver::NewInstance());

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
PyvtkProgressObserver_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProgressObserver *tempr = vtkProgressObserver::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgressObserver_UpdateProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressObserver *op = static_cast<vtkProgressObserver *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UpdateProgress(temp0);
      }
    else
      {
      op->vtkProgressObserver::UpdateProgress(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgressObserver_GetProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressObserver *op = static_cast<vtkProgressObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetProgress() :
      op->vtkProgressObserver::GetProgress());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProgressObserver_Methods[] = {
  {(char*)"GetClassName", PyvtkProgressObserver_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProgressObserver_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProgressObserver_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProgressObserver\nC++: vtkProgressObserver *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProgressObserver_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProgressObserver\nC++: vtkProgressObserver *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"UpdateProgress", PyvtkProgressObserver_UpdateProgress, METH_VARARGS,
   (char*)"V.UpdateProgress(float)\nC++: virtual void UpdateProgress(double amount)\n\nThe default behavior is to update the Progress data member and\ninvoke a ProgressEvent. This is designed to be overwritten.\n"},
  {(char*)"GetProgress", PyvtkProgressObserver_GetProgress, METH_VARARGS,
   (char*)"V.GetProgress() -> float\nC++: double GetProgress()\n\nReturns the progress reported by the algorithm.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProgressObserver_StaticNew()
{
  return vtkProgressObserver::New();
}

PyObject *PyVTKClass_vtkProgressObserverNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProgressObserver_StaticNew,
    PyvtkProgressObserver_Methods,
    "vtkProgressObserver", modulename,
    NULL, NULL,
    PyvtkProgressObserver_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkProgressObserver_Doc()
{
  static const char *docstring[] = {
    "vtkProgressObserver - Basic class to optionally replace vtkAlgorithm\nprogress functionality.\n\n",
    "Superclass: vtkObject\n\n",
    "When the basic functionality in vtkAlgorithm that reports progress is\nnot enough, a subclass of vtkProgressObserver can be used to provide\ncustom functionality. The main use case for this is when an\nalgorithm's RequestData() is called from multiple threads in parallel\n- the basic functionality in vtkAlgorithm is not thread safe.\nvtkSMPProgressObserver can handle this situation by routing progress\n",
    "from each thread to a thread local vtkProgressObserver, which will\ninvoke events separately for each thread.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProgressObserver(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProgressObserverNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProgressObserver", o) != 0)
    {
    Py_DECREF(o);
    }

}

