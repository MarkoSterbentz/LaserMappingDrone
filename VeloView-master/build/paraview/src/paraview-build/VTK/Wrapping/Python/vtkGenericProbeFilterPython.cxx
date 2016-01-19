// python wrapper for vtkGenericProbeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericProbeFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenericProbeFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenericProbeFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkGenericProbeFilter_Doc();


static PyObject *
PyvtkGenericProbeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericProbeFilter *op = static_cast<vtkGenericProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenericProbeFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericProbeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericProbeFilter *op = static_cast<vtkGenericProbeFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericProbeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericProbeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericProbeFilter *op = static_cast<vtkGenericProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericProbeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericProbeFilter::NewInstance());

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
PyvtkGenericProbeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenericProbeFilter *tempr = vtkGenericProbeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericProbeFilter_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericProbeFilter *op = static_cast<vtkGenericProbeFilter *>(vp);

  vtkGenericDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetSourceData(temp0);
      }
    else
      {
      op->vtkGenericProbeFilter::SetSourceData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericProbeFilter_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericProbeFilter *op = static_cast<vtkGenericProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericDataSet *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkGenericProbeFilter::GetSource());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericProbeFilter_GetValidPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericProbeFilter *op = static_cast<vtkGenericProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetValidPoints() :
      op->vtkGenericProbeFilter::GetValidPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericProbeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericProbeFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericProbeFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericProbeFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenericProbeFilter\nC++: vtkGenericProbeFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericProbeFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericProbeFilter\nC++: vtkGenericProbeFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSourceData", PyvtkGenericProbeFilter_SetSourceData, METH_VARARGS,
   (char*)"V.SetSourceData(vtkGenericDataSet)\nC++: void SetSourceData(vtkGenericDataSet *source)\n\nSpecify the point locations used to probe input. A generic\ndataset type is assumed.\n"},
  {(char*)"GetSource", PyvtkGenericProbeFilter_GetSource, METH_VARARGS,
   (char*)"V.GetSource() -> vtkGenericDataSet\nC++: vtkGenericDataSet *GetSource()\n\nSpecify the point locations used to probe input. A generic\ndataset type is assumed.\n"},
  {(char*)"GetValidPoints", PyvtkGenericProbeFilter_GetValidPoints, METH_VARARGS,
   (char*)"V.GetValidPoints() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetValidPoints()\n\nGet the list of point ids in the output that contain attribute\ndata interpolated from the source.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericProbeFilter_StaticNew()
{
  return vtkGenericProbeFilter::New();
}

PyObject *PyVTKClass_vtkGenericProbeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericProbeFilter_StaticNew,
    PyvtkGenericProbeFilter_Methods,
    "vtkGenericProbeFilter", modulename,
    NULL, NULL,
    PyvtkGenericProbeFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGenericProbeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkGenericProbeFilter - sample data values at specified point\nlocations\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkGenericProbeFilter is a filter that computes point attributes\n(e.g., scalars, vectors, etc.) at specified point positions. The\nfilter has two inputs: the Input and Source. The Input geometric\nstructure is passed through the filter. The point attributes are\ncomputed at the Input point positions by interpolating into the\nsource data. For example, we can compute data values on a plane\n(plane speci",
    "fied as Input) from a volume (Source).\n\nThis filter can be used to resample data, or convert one dataset form\ninto another. For example, a generic dataset can be probed with a\nvolume (three-dimensional vtkImageData), and then volume rendering\ntechniques can be used to visualize the results. Another example: a\nline or curve can be used to probe data to produce x-y plots along\nthat line or curve.\n\nT",
    "his filter has been implemented to operate on generic datasets,\nrather than the typical vtkDataSet (and subclasses).\nvtkGenericDataSet is a more complex cousin of vtkDataSet, typically\nconsisting of nonlinear, higher-order cells. To process this type of\ndata, generic cells are automatically tessellated into linear cells\nprior to isocontouring.\n\nSee Also:\n\nvtkGenericProbeFilter vtkProbeFilter vtkGe",
    "nericDataSet\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericProbeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericProbeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericProbeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

