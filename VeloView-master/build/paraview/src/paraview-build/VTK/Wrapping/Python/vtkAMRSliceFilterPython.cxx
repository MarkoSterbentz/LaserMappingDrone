// python wrapper for vtkAMRSliceFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkAMRSliceFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRSliceFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRSliceFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkOverlappingAMRAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkOverlappingAMRAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkOverlappingAMRAlgorithmNew
#endif

static const char **PyvtkAMRSliceFilter_Doc();


static PyObject *
PyvtkAMRSliceFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRSliceFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRSliceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRSliceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRSliceFilter::NewInstance());

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
PyvtkAMRSliceFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRSliceFilter *tempr = vtkAMRSliceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_SetOffSetFromOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffSetFromOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOffSetFromOrigin(temp0);
      }
    else
      {
      op->vtkAMRSliceFilter::SetOffSetFromOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_GetOffSetFromOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffSetFromOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOffSetFromOrigin() :
      op->vtkAMRSliceFilter::GetOffSetFromOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_SetForwardUpstream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForwardUpstream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForwardUpstream(temp0);
      }
    else
      {
      op->vtkAMRSliceFilter::SetForwardUpstream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_GetForwardUpstream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForwardUpstream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetForwardUpstream() :
      op->vtkAMRSliceFilter::GetForwardUpstream());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_ForwardUpstreamOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForwardUpstreamOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForwardUpstreamOn();
      }
    else
      {
      op->vtkAMRSliceFilter::ForwardUpstreamOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_ForwardUpstreamOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForwardUpstreamOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForwardUpstreamOff();
      }
    else
      {
      op->vtkAMRSliceFilter::ForwardUpstreamOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_SetEnablePrefetching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnablePrefetching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnablePrefetching(temp0);
      }
    else
      {
      op->vtkAMRSliceFilter::SetEnablePrefetching(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_GetEnablePrefetching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnablePrefetching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnablePrefetching() :
      op->vtkAMRSliceFilter::GetEnablePrefetching());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_EnablePrefetchingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnablePrefetchingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnablePrefetchingOn();
      }
    else
      {
      op->vtkAMRSliceFilter::EnablePrefetchingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_EnablePrefetchingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnablePrefetchingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnablePrefetchingOff();
      }
    else
      {
      op->vtkAMRSliceFilter::EnablePrefetchingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_SetMaxResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxResolution(temp0);
      }
    else
      {
      op->vtkAMRSliceFilter::SetMaxResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_GetMaxResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxResolution() :
      op->vtkAMRSliceFilter::GetMaxResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_SetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormal(temp0);
      }
    else
      {
      op->vtkAMRSliceFilter::SetNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkAMRSliceFilter::GetNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

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
      op->vtkAMRSliceFilter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRSliceFilter::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkAMRSliceFilter::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_FillOutputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillOutputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->FillOutputPortInformation(temp0, temp1) :
      op->vtkAMRSliceFilter::FillOutputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRSliceFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRSliceFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRSliceFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRSliceFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRSliceFilter\nC++: vtkAMRSliceFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRSliceFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRSliceFilter\nC++: vtkAMRSliceFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOffSetFromOrigin", PyvtkAMRSliceFilter_SetOffSetFromOrigin, METH_VARARGS,
   (char*)"V.SetOffSetFromOrigin(float)\nC++: void SetOffSetFromOrigin(double a)\n\n"},
  {(char*)"GetOffSetFromOrigin", PyvtkAMRSliceFilter_GetOffSetFromOrigin, METH_VARARGS,
   (char*)"V.GetOffSetFromOrigin() -> float\nC++: double GetOffSetFromOrigin()\n\n"},
  {(char*)"SetForwardUpstream", PyvtkAMRSliceFilter_SetForwardUpstream, METH_VARARGS,
   (char*)"V.SetForwardUpstream(int)\nC++: void SetForwardUpstream(int a)\n\nSet/Get ForwardUpstream property\n"},
  {(char*)"GetForwardUpstream", PyvtkAMRSliceFilter_GetForwardUpstream, METH_VARARGS,
   (char*)"V.GetForwardUpstream() -> int\nC++: int GetForwardUpstream()\n\nSet/Get ForwardUpstream property\n"},
  {(char*)"ForwardUpstreamOn", PyvtkAMRSliceFilter_ForwardUpstreamOn, METH_VARARGS,
   (char*)"V.ForwardUpstreamOn()\nC++: void ForwardUpstreamOn()\n\nSet/Get ForwardUpstream property\n"},
  {(char*)"ForwardUpstreamOff", PyvtkAMRSliceFilter_ForwardUpstreamOff, METH_VARARGS,
   (char*)"V.ForwardUpstreamOff()\nC++: void ForwardUpstreamOff()\n\nSet/Get ForwardUpstream property\n"},
  {(char*)"SetEnablePrefetching", PyvtkAMRSliceFilter_SetEnablePrefetching, METH_VARARGS,
   (char*)"V.SetEnablePrefetching(int)\nC++: void SetEnablePrefetching(int a)\n\nSet/Get EnablePrefetching property\n"},
  {(char*)"GetEnablePrefetching", PyvtkAMRSliceFilter_GetEnablePrefetching, METH_VARARGS,
   (char*)"V.GetEnablePrefetching() -> int\nC++: int GetEnablePrefetching()\n\nSet/Get EnablePrefetching property\n"},
  {(char*)"EnablePrefetchingOn", PyvtkAMRSliceFilter_EnablePrefetchingOn, METH_VARARGS,
   (char*)"V.EnablePrefetchingOn()\nC++: void EnablePrefetchingOn()\n\nSet/Get EnablePrefetching property\n"},
  {(char*)"EnablePrefetchingOff", PyvtkAMRSliceFilter_EnablePrefetchingOff, METH_VARARGS,
   (char*)"V.EnablePrefetchingOff()\nC++: void EnablePrefetchingOff()\n\nSet/Get EnablePrefetching property\n"},
  {(char*)"SetMaxResolution", PyvtkAMRSliceFilter_SetMaxResolution, METH_VARARGS,
   (char*)"V.SetMaxResolution(int)\nC++: void SetMaxResolution(int a)\n\nSet/Get the maximum resolution used in this instance.\n"},
  {(char*)"GetMaxResolution", PyvtkAMRSliceFilter_GetMaxResolution, METH_VARARGS,
   (char*)"V.GetMaxResolution() -> int\nC++: int GetMaxResolution()\n\nSet/Get the maximum resolution used in this instance.\n"},
  {(char*)"SetNormal", PyvtkAMRSliceFilter_SetNormal, METH_VARARGS,
   (char*)"V.SetNormal(int)\nC++: void SetNormal(int a)\n\nSet/Get the Axis normal. There are only 3 acceptable values\n1-(X-Normal); 2-(Y-Normal); 3-(Z-Normal)\n"},
  {(char*)"GetNormal", PyvtkAMRSliceFilter_GetNormal, METH_VARARGS,
   (char*)"V.GetNormal() -> int\nC++: int GetNormal()\n\nSet/Get the Axis normal. There are only 3 acceptable values\n1-(X-Normal); 2-(Y-Normal); 3-(Z-Normal)\n"},
  {(char*)"SetController", PyvtkAMRSliceFilter_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *a)\n\nSet/Get a multiprocess controller for paralle processing. By\ndefault this parameter is set to NULL by the constructor.\n"},
  {(char*)"GetController", PyvtkAMRSliceFilter_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/Get a multiprocess controller for paralle processing. By\ndefault this parameter is set to NULL by the constructor.\n"},
  {(char*)"FillInputPortInformation", PyvtkAMRSliceFilter_FillInputPortInformation, METH_VARARGS,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: virtual int FillInputPortInformation(int port,\n    vtkInformation *info)\n\n"},
  {(char*)"FillOutputPortInformation", PyvtkAMRSliceFilter_FillOutputPortInformation, METH_VARARGS,
   (char*)"V.FillOutputPortInformation(int, vtkInformation) -> int\nC++: virtual int FillOutputPortInformation(int port,\n    vtkInformation *info)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRSliceFilter_StaticNew()
{
  return vtkAMRSliceFilter::New();
}

PyObject *PyVTKClass_vtkAMRSliceFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRSliceFilter_StaticNew,
    PyvtkAMRSliceFilter_Methods,
    "vtkAMRSliceFilter", modulename,
    NULL, NULL,
    PyvtkAMRSliceFilter_Doc(),
    PyVTKClass_vtkOverlappingAMRAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAMRSliceFilter_Doc()
{
  static const char *docstring[] = {
    "vtkAMRSliceFilter.h -- Creates slices from AMR datasets\n\n",
    "Superclass: vtkOverlappingAMRAlgorithm\n\n",
    "A concrete instance of vtkOverlappingAMRAlgorithm which implements\n functionality for extracting slices from AMR data. Unlike the\nconventional\n slice filter, the output of this filter is a 2-D AMR dataset itself.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRSliceFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRSliceFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRSliceFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

