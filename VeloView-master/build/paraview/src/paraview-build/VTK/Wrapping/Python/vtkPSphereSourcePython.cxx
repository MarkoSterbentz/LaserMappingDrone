// python wrapper for vtkPSphereSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPSphereSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPSphereSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPSphereSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSphereSourceNew
extern "C" { PyObject *PyVTKClass_vtkSphereSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkSphereSourceNew
#endif

static const char **PyvtkPSphereSource_Doc();


static PyObject *
PyvtkPSphereSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSphereSource *op = static_cast<vtkPSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPSphereSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSphereSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSphereSource *op = static_cast<vtkPSphereSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPSphereSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSphereSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSphereSource *op = static_cast<vtkPSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPSphereSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPSphereSource::NewInstance());

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
PyvtkPSphereSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPSphereSource *tempr = vtkPSphereSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSphereSource_GetEstimatedMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSphereSource *op = static_cast<vtkPSphereSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetEstimatedMemorySize() :
      op->vtkPSphereSource::GetEstimatedMemorySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPSphereSource_Methods[] = {
  {(char*)"GetClassName", PyvtkPSphereSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPSphereSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPSphereSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPSphereSource\nC++: vtkPSphereSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPSphereSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPSphereSource\nC++: vtkPSphereSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetEstimatedMemorySize", PyvtkPSphereSource_GetEstimatedMemorySize, METH_VARARGS,
   (char*)"V.GetEstimatedMemorySize() -> int\nC++: unsigned long GetEstimatedMemorySize()\n\nGet the estimated memory size in 1024 bytes\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPSphereSource_StaticNew()
{
  return vtkPSphereSource::New();
}

PyObject *PyVTKClass_vtkPSphereSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPSphereSource_StaticNew,
    PyvtkPSphereSource_Methods,
    "vtkPSphereSource", modulename,
    NULL, NULL,
    PyvtkPSphereSource_Doc(),
    PyVTKClass_vtkSphereSourceNew(modulename));
  return cls;
}

const char **PyvtkPSphereSource_Doc()
{
  static const char *docstring[] = {
    "vtkPSphereSource - sphere source that supports pieces\n\n",
    "Superclass: vtkSphereSource\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPSphereSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPSphereSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPSphereSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

