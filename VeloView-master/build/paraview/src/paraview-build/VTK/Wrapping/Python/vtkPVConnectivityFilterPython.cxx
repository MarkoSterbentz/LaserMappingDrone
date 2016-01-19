// python wrapper for vtkPVConnectivityFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVConnectivityFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVConnectivityFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVConnectivityFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkConnectivityFilterNew
extern "C" { PyObject *PyVTKClass_vtkConnectivityFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkConnectivityFilterNew
#endif

static const char **PyvtkPVConnectivityFilter_Doc();


static PyObject *
PyvtkPVConnectivityFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVConnectivityFilter *op = static_cast<vtkPVConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVConnectivityFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVConnectivityFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVConnectivityFilter *op = static_cast<vtkPVConnectivityFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVConnectivityFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVConnectivityFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVConnectivityFilter *op = static_cast<vtkPVConnectivityFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVConnectivityFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVConnectivityFilter::NewInstance());

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
PyvtkPVConnectivityFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVConnectivityFilter *tempr = vtkPVConnectivityFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVConnectivityFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPVConnectivityFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVConnectivityFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVConnectivityFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVConnectivityFilter\nC++: vtkPVConnectivityFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVConnectivityFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVConnectivityFilter\nC++: vtkPVConnectivityFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVConnectivityFilter_StaticNew()
{
  return vtkPVConnectivityFilter::New();
}

PyObject *PyVTKClass_vtkPVConnectivityFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVConnectivityFilter_StaticNew,
    PyvtkPVConnectivityFilter_Methods,
    "vtkPVConnectivityFilter", modulename,
    NULL, NULL,
    PyvtkPVConnectivityFilter_Doc(),
    PyVTKClass_vtkConnectivityFilterNew(modulename));
  return cls;
}

const char **PyvtkPVConnectivityFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPVConnectivityFilter - change the defaults for\nvtkConnectivityFilter\n\n",
    "Superclass: vtkConnectivityFilter\n\n",
    "vtkPVConnectivityFilter is a subclass of vtkConnectivityFilter.  It\nchanges the default settings.  We want different defaults than\nvtkConnectivityFilter has, but we don't want the user to have access\nto these parameters in the UI.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVConnectivityFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVConnectivityFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVConnectivityFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

