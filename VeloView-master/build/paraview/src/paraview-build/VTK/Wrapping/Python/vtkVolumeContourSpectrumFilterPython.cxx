// python wrapper for vtkVolumeContourSpectrumFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVolumeContourSpectrumFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVolumeContourSpectrumFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVolumeContourSpectrumFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkVolumeContourSpectrumFilter_Doc();


static PyObject *
PyvtkVolumeContourSpectrumFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVolumeContourSpectrumFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeContourSpectrumFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeContourSpectrumFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeContourSpectrumFilter::NewInstance());

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
PyvtkVolumeContourSpectrumFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVolumeContourSpectrumFilter *tempr = vtkVolumeContourSpectrumFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_SetArcId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArcId(temp0);
      }
    else
      {
      op->vtkVolumeContourSpectrumFilter::SetArcId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_GetArcId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArcId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetArcId() :
      op->vtkVolumeContourSpectrumFilter::GetArcId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_SetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSamples(temp0);
      }
    else
      {
      op->vtkVolumeContourSpectrumFilter::SetNumberOfSamples(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_GetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSamples() :
      op->vtkVolumeContourSpectrumFilter::GetNumberOfSamples());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_SetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldId(temp0);
      }
    else
      {
      op->vtkVolumeContourSpectrumFilter::SetFieldId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_GetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetFieldId() :
      op->vtkVolumeContourSpectrumFilter::GetFieldId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkVolumeContourSpectrumFilter::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeContourSpectrumFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeContourSpectrumFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeContourSpectrumFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeContourSpectrumFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVolumeContourSpectrumFilter\nC++: vtkVolumeContourSpectrumFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeContourSpectrumFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeContourSpectrumFilter\nC++: vtkVolumeContourSpectrumFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetArcId", PyvtkVolumeContourSpectrumFilter_SetArcId, METH_VARARGS,
   (char*)"V.SetArcId(int)\nC++: void SetArcId(vtkIdType a)\n\nSet the arc Id for which the contour signature has to be\ncomputed. Default value: 0\n"},
  {(char*)"GetArcId", PyvtkVolumeContourSpectrumFilter_GetArcId, METH_VARARGS,
   (char*)"V.GetArcId() -> int\nC++: vtkIdType GetArcId()\n\nSet the arc Id for which the contour signature has to be\ncomputed. Default value: 0\n"},
  {(char*)"SetNumberOfSamples", PyvtkVolumeContourSpectrumFilter_SetNumberOfSamples, METH_VARARGS,
   (char*)"V.SetNumberOfSamples(int)\nC++: void SetNumberOfSamples(int a)\n\nSet the number of samples in the output signature Default value:\n100\n"},
  {(char*)"GetNumberOfSamples", PyvtkVolumeContourSpectrumFilter_GetNumberOfSamples, METH_VARARGS,
   (char*)"V.GetNumberOfSamples() -> int\nC++: int GetNumberOfSamples()\n\nSet the number of samples in the output signature Default value:\n100\n"},
  {(char*)"SetFieldId", PyvtkVolumeContourSpectrumFilter_SetFieldId, METH_VARARGS,
   (char*)"V.SetFieldId(int)\nC++: void SetFieldId(vtkIdType a)\n\nSet the scalar field Id Default value: 0\n"},
  {(char*)"GetFieldId", PyvtkVolumeContourSpectrumFilter_GetFieldId, METH_VARARGS,
   (char*)"V.GetFieldId() -> int\nC++: vtkIdType GetFieldId()\n\nSet the scalar field Id Default value: 0\n"},
  {(char*)"GetOutput", PyvtkVolumeContourSpectrumFilter_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkTable\nC++: vtkTable *GetOutput()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeContourSpectrumFilter_StaticNew()
{
  return vtkVolumeContourSpectrumFilter::New();
}

PyObject *PyVTKClass_vtkVolumeContourSpectrumFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeContourSpectrumFilter_StaticNew,
    PyvtkVolumeContourSpectrumFilter_Methods,
    "vtkVolumeContourSpectrumFilter", modulename,
    NULL, NULL,
    PyvtkVolumeContourSpectrumFilter_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVolumeContourSpectrumFilter_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeContourSpectrumFilter - compute an approximation of the\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "The filter takes a vtkUnstructuredGrid as an input (port 0), along\nwith a vtkReebGraph (port 1). The Reeb graph arc to consider can be\nspecified with SetArcId() (default: 0). The number of (evenly\ndistributed) samples of the signature can be defined with\nSetNumberOfSamples() (default value: 100). The filter will first try\nto pull as a scalar field the vtkDataArray with Id 'FieldId' of the\nvtkUnstr",
    "ucturedGrid, see SetFieldId (default: 0). The filter will\nabort if this field does not exist.\n\nThe filter outputs a vtkTable with the volume contour signature\napproximation, each sample being evenly distributed in the function\nspan of the arc.\n\nThis filter is a typical example for designing your own contour\nsignature filter (with customized metrics). It also shows typical\nvtkReebGraph traversals.\n",
    "\nReference: C. Bajaj, V. Pascucci, D. Schikore, \"The contour\nspectrum\", IEEE Visualization, 167-174, 1997.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeContourSpectrumFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeContourSpectrumFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeContourSpectrumFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

