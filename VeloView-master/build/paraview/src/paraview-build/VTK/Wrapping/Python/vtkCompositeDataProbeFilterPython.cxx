// python wrapper for vtkCompositeDataProbeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCompositeDataProbeFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositeDataProbeFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositeDataProbeFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkProbeFilterNew
extern "C" { PyObject *PyVTKClass_vtkProbeFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkProbeFilterNew
#endif

static const char **PyvtkCompositeDataProbeFilter_Doc();


static PyObject *
PyvtkCompositeDataProbeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositeDataProbeFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataProbeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeDataProbeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataProbeFilter::NewInstance());

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
PyvtkCompositeDataProbeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositeDataProbeFilter *tempr = vtkCompositeDataProbeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_SetPassPartialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPartialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassPartialArrays(temp0);
      }
    else
      {
      op->vtkCompositeDataProbeFilter::SetPassPartialArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_GetPassPartialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPartialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPassPartialArrays() :
      op->vtkCompositeDataProbeFilter::GetPassPartialArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_PassPartialArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPartialArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassPartialArraysOn();
      }
    else
      {
      op->vtkCompositeDataProbeFilter::PassPartialArraysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_PassPartialArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPartialArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassPartialArraysOff();
      }
    else
      {
      op->vtkCompositeDataProbeFilter::PassPartialArraysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeDataProbeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeDataProbeFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeDataProbeFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeDataProbeFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositeDataProbeFilter\nC++: vtkCompositeDataProbeFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeDataProbeFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeDataProbeFilter\nC++: vtkCompositeDataProbeFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPassPartialArrays", PyvtkCompositeDataProbeFilter_SetPassPartialArrays, METH_VARARGS,
   (char*)"V.SetPassPartialArrays(bool)\nC++: void SetPassPartialArrays(bool a)\n\nWhen dealing with composite datasets, partial arrays are common\ni.e. data-arrays that are not available in all of the blocks. By\ndefault, this filter only passes those point and cell data-arrays\nthat are available in all the blocks i.e. partial array are\nremoved.  When PassPartialArrays is turned on, this behavior is\nchanged to take a union of all arrays present thus partial arrays\nare passed as well. However, for composite dataset input, this\nfilter still produces a non-composite output. For all those\nlocations in a block of where a particular data array is missing,\nthis filter uses vtkMath::Nan() for double and float arrays,\nwhile 0 for all other types of arrays i.e int, char etc.\n"},
  {(char*)"GetPassPartialArrays", PyvtkCompositeDataProbeFilter_GetPassPartialArrays, METH_VARARGS,
   (char*)"V.GetPassPartialArrays() -> bool\nC++: bool GetPassPartialArrays()\n\nWhen dealing with composite datasets, partial arrays are common\ni.e. data-arrays that are not available in all of the blocks. By\ndefault, this filter only passes those point and cell data-arrays\nthat are available in all the blocks i.e. partial array are\nremoved.  When PassPartialArrays is turned on, this behavior is\nchanged to take a union of all arrays present thus partial arrays\nare passed as well. However, for composite dataset input, this\nfilter still produces a non-composite output. For all those\nlocations in a block of where a particular data array is missing,\nthis filter uses vtkMath::Nan() for double and float arrays,\nwhile 0 for all other types of arrays i.e int, char etc.\n"},
  {(char*)"PassPartialArraysOn", PyvtkCompositeDataProbeFilter_PassPartialArraysOn, METH_VARARGS,
   (char*)"V.PassPartialArraysOn()\nC++: void PassPartialArraysOn()\n\nWhen dealing with composite datasets, partial arrays are common\ni.e. data-arrays that are not available in all of the blocks. By\ndefault, this filter only passes those point and cell data-arrays\nthat are available in all the blocks i.e. partial array are\nremoved.  When PassPartialArrays is turned on, this behavior is\nchanged to take a union of all arrays present thus partial arrays\nare passed as well. However, for composite dataset input, this\nfilter still produces a non-composite output. For all those\nlocations in a block of where a particular data array is missing,\nthis filter uses vtkMath::Nan() for double and float arrays,\nwhile 0 for all other types of arrays i.e int, char etc.\n"},
  {(char*)"PassPartialArraysOff", PyvtkCompositeDataProbeFilter_PassPartialArraysOff, METH_VARARGS,
   (char*)"V.PassPartialArraysOff()\nC++: void PassPartialArraysOff()\n\nWhen dealing with composite datasets, partial arrays are common\ni.e. data-arrays that are not available in all of the blocks. By\ndefault, this filter only passes those point and cell data-arrays\nthat are available in all the blocks i.e. partial array are\nremoved.  When PassPartialArrays is turned on, this behavior is\nchanged to take a union of all arrays present thus partial arrays\nare passed as well. However, for composite dataset input, this\nfilter still produces a non-composite output. For all those\nlocations in a block of where a particular data array is missing,\nthis filter uses vtkMath::Nan() for double and float arrays,\nwhile 0 for all other types of arrays i.e int, char etc.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeDataProbeFilter_StaticNew()
{
  return vtkCompositeDataProbeFilter::New();
}

PyObject *PyVTKClass_vtkCompositeDataProbeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeDataProbeFilter_StaticNew,
    PyvtkCompositeDataProbeFilter_Methods,
    "vtkCompositeDataProbeFilter", modulename,
    NULL, NULL,
    PyvtkCompositeDataProbeFilter_Doc(),
    PyVTKClass_vtkProbeFilterNew(modulename));
  return cls;
}

const char **PyvtkCompositeDataProbeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeDataProbeFilter - subclass of vtkProbeFilter which\nsupports\n\n",
    "Superclass: vtkProbeFilter\n\n",
    "vtkCompositeDataProbeFilter supports probing into multi-group\ndatasets. It sequentially probes through each concrete dataset within\nthe composite probing at only those locations at which there were no\nhits when probing earlier datasets. For Hierarchical datasets, this\ntraversal through leaf datasets is done in reverse order of levels\ni.e. highest level first.\n\nWhen dealing with composite datasets,",
    " partial arrays are common i.e.\ndata-arrays that are not available in all of the blocks. By default,\nthis filter only passes those point and cell data-arrays that are\navailable in all the blocks i.e. partial array are removed. When\nPassPartialArrays is turned on, this behavior is changed to take a\nunion of all arrays present thus partial arrays are passed as well.\nHowever, for composite dataset in",
    "put, this filter still produces a\nnon-composite output. For all those locations in a block of where a\nparticular data array is missing, this filter uses vtkMath::Nan() for\ndouble and float arrays, while 0 for all other types of arrays i.e\nint, char etc.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeDataProbeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeDataProbeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeDataProbeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

