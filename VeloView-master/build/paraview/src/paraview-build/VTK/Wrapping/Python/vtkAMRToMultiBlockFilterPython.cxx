// python wrapper for vtkAMRToMultiBlockFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkAMRToMultiBlockFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRToMultiBlockFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRToMultiBlockFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkAMRToMultiBlockFilter_Doc();


static PyObject *
PyvtkAMRToMultiBlockFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRToMultiBlockFilter *op = static_cast<vtkAMRToMultiBlockFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRToMultiBlockFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRToMultiBlockFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRToMultiBlockFilter *op = static_cast<vtkAMRToMultiBlockFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRToMultiBlockFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRToMultiBlockFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRToMultiBlockFilter *op = static_cast<vtkAMRToMultiBlockFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRToMultiBlockFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRToMultiBlockFilter::NewInstance());

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
PyvtkAMRToMultiBlockFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRToMultiBlockFilter *tempr = vtkAMRToMultiBlockFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRToMultiBlockFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRToMultiBlockFilter *op = static_cast<vtkAMRToMultiBlockFilter *>(vp);

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
      op->vtkAMRToMultiBlockFilter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRToMultiBlockFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRToMultiBlockFilter *op = static_cast<vtkAMRToMultiBlockFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRToMultiBlockFilter::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRToMultiBlockFilter_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRToMultiBlockFilter *op = static_cast<vtkAMRToMultiBlockFilter *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkAMRToMultiBlockFilter::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRToMultiBlockFilter_FillOutputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillOutputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRToMultiBlockFilter *op = static_cast<vtkAMRToMultiBlockFilter *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->FillOutputPortInformation(temp0, temp1) :
      op->vtkAMRToMultiBlockFilter::FillOutputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRToMultiBlockFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRToMultiBlockFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRToMultiBlockFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRToMultiBlockFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRToMultiBlockFilter\nC++: vtkAMRToMultiBlockFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRToMultiBlockFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRToMultiBlockFilter\nC++: vtkAMRToMultiBlockFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkAMRToMultiBlockFilter_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *a)\n\nSet/Get a multiprocess controller for paralle processing. By\ndefault this parameter is set to NULL by the constructor.\n"},
  {(char*)"GetController", PyvtkAMRToMultiBlockFilter_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/Get a multiprocess controller for paralle processing. By\ndefault this parameter is set to NULL by the constructor.\n"},
  {(char*)"FillInputPortInformation", PyvtkAMRToMultiBlockFilter_FillInputPortInformation, METH_VARARGS,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: virtual int FillInputPortInformation(int port,\n    vtkInformation *info)\n\n"},
  {(char*)"FillOutputPortInformation", PyvtkAMRToMultiBlockFilter_FillOutputPortInformation, METH_VARARGS,
   (char*)"V.FillOutputPortInformation(int, vtkInformation) -> int\nC++: virtual int FillOutputPortInformation(int port,\n    vtkInformation *info)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRToMultiBlockFilter_StaticNew()
{
  return vtkAMRToMultiBlockFilter::New();
}

PyObject *PyVTKClass_vtkAMRToMultiBlockFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRToMultiBlockFilter_StaticNew,
    PyvtkAMRToMultiBlockFilter_Methods,
    "vtkAMRToMultiBlockFilter", modulename,
    NULL, NULL,
    PyvtkAMRToMultiBlockFilter_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAMRToMultiBlockFilter_Doc()
{
  static const char *docstring[] = {
    "vtkAMRToMultiBlockFilter.h -- Converts an AMR instance to multiblock\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "A filter that accepts as input an AMR dataset and produces a\ncorresponding vtkMultiBlockDataset as output.\n\nSee Also:\n\nvtkOverlappingAMR vtkMultiBlockDataSet\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRToMultiBlockFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRToMultiBlockFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRToMultiBlockFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

