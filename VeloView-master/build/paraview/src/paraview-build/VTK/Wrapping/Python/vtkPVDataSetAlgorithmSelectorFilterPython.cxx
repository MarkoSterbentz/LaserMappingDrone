// python wrapper for vtkPVDataSetAlgorithmSelectorFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkPVDataSetAlgorithmSelectorFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVDataSetAlgorithmSelectorFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVDataSetAlgorithmSelectorFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkPVDataSetAlgorithmSelectorFilter_Doc();


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVDataSetAlgorithmSelectorFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDataSetAlgorithmSelectorFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataSetAlgorithmSelectorFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDataSetAlgorithmSelectorFilter::NewInstance());

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
PyvtkPVDataSetAlgorithmSelectorFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVDataSetAlgorithmSelectorFilter *tempr = vtkPVDataSetAlgorithmSelectorFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_RegisterFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  vtkAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
    {
    int tempr = (ap.IsBound() ?
      op->RegisterFilter(temp0) :
      op->vtkPVDataSetAlgorithmSelectorFilter::RegisterFilter(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_UnRegisterFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnRegisterFilter(temp0);
      }
    else
      {
      op->vtkPVDataSetAlgorithmSelectorFilter::UnRegisterFilter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_ClearFilters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFilters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearFilters();
      }
    else
      {
      op->vtkPVDataSetAlgorithmSelectorFilter::ClearFilters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_GetNumberOfFilters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFilters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFilters() :
      op->vtkPVDataSetAlgorithmSelectorFilter::GetNumberOfFilters());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_GetFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetFilter(temp0) :
      op->vtkPVDataSetAlgorithmSelectorFilter::GetFilter(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_GetActiveFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetActiveFilter() :
      op->vtkPVDataSetAlgorithmSelectorFilter::GetActiveFilter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_SetActiveFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->SetActiveFilter(temp0) :
      op->vtkPVDataSetAlgorithmSelectorFilter::SetActiveFilter(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPVDataSetAlgorithmSelectorFilter::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_ProcessRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  vtkInformation *temp0 = NULL;
  vtkCollection *temp1 = NULL;
  vtkInformationVector *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkInformationVector"))
    {
    int tempr = (ap.IsBound() ?
      op->ProcessRequest(temp0, temp1, temp2) :
      op->vtkPVDataSetAlgorithmSelectorFilter::ProcessRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVDataSetAlgorithmSelectorFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPVDataSetAlgorithmSelectorFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVDataSetAlgorithmSelectorFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVDataSetAlgorithmSelectorFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVDataSetAlgorithmSelectorFilter\nC++: vtkPVDataSetAlgorithmSelectorFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVDataSetAlgorithmSelectorFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVDataSetAlgorithmSelectorFilter\nC++: vtkPVDataSetAlgorithmSelectorFilter *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"RegisterFilter", PyvtkPVDataSetAlgorithmSelectorFilter_RegisterFilter, METH_VARARGS,
   (char*)"V.RegisterFilter(vtkAlgorithm) -> int\nC++: int RegisterFilter(vtkAlgorithm *filter)\n\nRegister a new filter that can be used underneath in the\nrequestData call. The return value is the index of that\nregistered filter that should be use to activate it later on.\n(This number can became wrong in case you remove some previous\nregistered filter)\n"},
  {(char*)"UnRegisterFilter", PyvtkPVDataSetAlgorithmSelectorFilter_UnRegisterFilter, METH_VARARGS,
   (char*)"V.UnRegisterFilter(int)\nC++: void UnRegisterFilter(int index)\n\nUnRegister an existing filter that was previously registered\n"},
  {(char*)"ClearFilters", PyvtkPVDataSetAlgorithmSelectorFilter_ClearFilters, METH_VARARGS,
   (char*)"V.ClearFilters()\nC++: void ClearFilters()\n\nRemove all the registered filters.\n"},
  {(char*)"GetNumberOfFilters", PyvtkPVDataSetAlgorithmSelectorFilter_GetNumberOfFilters, METH_VARARGS,
   (char*)"V.GetNumberOfFilters() -> int\nC++: int GetNumberOfFilters()\n\nReturn the current number of registered filters\n"},
  {(char*)"GetFilter", PyvtkPVDataSetAlgorithmSelectorFilter_GetFilter, METH_VARARGS,
   (char*)"V.GetFilter(int) -> vtkAlgorithm\nC++: vtkAlgorithm *GetFilter(int index)\n\nReturn the filter that lies at the given index of the filters\nregistration queue.\n"},
  {(char*)"GetActiveFilter", PyvtkPVDataSetAlgorithmSelectorFilter_GetActiveFilter, METH_VARARGS,
   (char*)"V.GetActiveFilter() -> vtkAlgorithm\nC++: vtkAlgorithm *GetActiveFilter()\n\nReturn the current active filter if any otherwise return NULL\n"},
  {(char*)"SetActiveFilter", PyvtkPVDataSetAlgorithmSelectorFilter_SetActiveFilter, METH_VARARGS,
   (char*)"V.SetActiveFilter(int) -> vtkAlgorithm\nC++: virtual vtkAlgorithm *SetActiveFilter(int index)\n\nSet the active filter based on the given index of the filters\nregistration queue. And return the corresponding active filter.\n"},
  {(char*)"GetMTime", PyvtkPVDataSetAlgorithmSelectorFilter_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride GetMTime because we delegate to other filters to do the\nreal work\n"},
  {(char*)"ProcessRequest", PyvtkPVDataSetAlgorithmSelectorFilter_ProcessRequest, METH_VARARGS,
   (char*)"V.ProcessRequest(vtkInformation, vtkCollection,\n    vtkInformationVector) -> int\nC++: virtual int ProcessRequest(vtkInformation *request,\n    vtkCollection *inInfo, vtkInformationVector *outInfo)\n\nForward those methods to the underneath filters\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVDataSetAlgorithmSelectorFilter_StaticNew()
{
  return vtkPVDataSetAlgorithmSelectorFilter::New();
}

PyObject *PyVTKClass_vtkPVDataSetAlgorithmSelectorFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVDataSetAlgorithmSelectorFilter_StaticNew,
    PyvtkPVDataSetAlgorithmSelectorFilter_Methods,
    "vtkPVDataSetAlgorithmSelectorFilter", modulename,
    NULL, NULL,
    PyvtkPVDataSetAlgorithmSelectorFilter_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPVDataSetAlgorithmSelectorFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPVDataSetAlgorithmSelectorFilter -\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "The idea behind that filter is to merge the usage of any number of\nexisting vtk filter and allow to easily switch from one\nimplementation to another without changing anything in your pipeline.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVDataSetAlgorithmSelectorFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVDataSetAlgorithmSelectorFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVDataSetAlgorithmSelectorFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

