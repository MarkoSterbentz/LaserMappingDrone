// python wrapper for vtkSelectionDeliveryFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSelectionDeliveryFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSelectionDeliveryFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSelectionDeliveryFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkSelectionAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
#endif

static const char **PyvtkSelectionDeliveryFilter_Doc();


static PyObject *
PyvtkSelectionDeliveryFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionDeliveryFilter *op = static_cast<vtkSelectionDeliveryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSelectionDeliveryFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionDeliveryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionDeliveryFilter *op = static_cast<vtkSelectionDeliveryFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectionDeliveryFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionDeliveryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionDeliveryFilter *op = static_cast<vtkSelectionDeliveryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelectionDeliveryFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectionDeliveryFilter::NewInstance());

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
PyvtkSelectionDeliveryFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSelectionDeliveryFilter *tempr = vtkSelectionDeliveryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSelectionDeliveryFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkSelectionDeliveryFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSelectionDeliveryFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSelectionDeliveryFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSelectionDeliveryFilter\nC++: vtkSelectionDeliveryFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSelectionDeliveryFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSelectionDeliveryFilter\nC++: vtkSelectionDeliveryFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSelectionDeliveryFilter_StaticNew()
{
  return vtkSelectionDeliveryFilter::New();
}

PyObject *PyVTKClass_vtkSelectionDeliveryFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSelectionDeliveryFilter_StaticNew,
    PyvtkSelectionDeliveryFilter_Methods,
    "vtkSelectionDeliveryFilter", modulename,
    NULL, NULL,
    PyvtkSelectionDeliveryFilter_Doc(),
    PyVTKClass_vtkSelectionAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSelectionDeliveryFilter_Doc()
{
  static const char *docstring[] = {
    "vtkSelectionDeliveryFilter\n\n",
    "Superclass: vtkSelectionAlgorithm\n\n",
    "vtkSelectionDeliveryFilter is a filter that can deliver vtkSelection\nfrom data-server nodes to the client. This should not be instantiated\non the pure-render-server nodes to avoid odd side effects (We can fix\nthis later if the need arises).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSelectionDeliveryFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSelectionDeliveryFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSelectionDeliveryFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

