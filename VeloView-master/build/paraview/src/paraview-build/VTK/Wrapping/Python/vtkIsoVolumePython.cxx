// python wrapper for vtkIsoVolume
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkIsoVolume.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkIsoVolume(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkIsoVolumeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkIsoVolume_Doc();


static PyObject *
PyvtkIsoVolume_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIsoVolume *op = static_cast<vtkIsoVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkIsoVolume::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIsoVolume_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIsoVolume *op = static_cast<vtkIsoVolume *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIsoVolume::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIsoVolume_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIsoVolume *op = static_cast<vtkIsoVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIsoVolume *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIsoVolume::NewInstance());

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
PyvtkIsoVolume_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkIsoVolume *tempr = vtkIsoVolume::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIsoVolume_ThresholdBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIsoVolume *op = static_cast<vtkIsoVolume *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ThresholdBetween(temp0, temp1);
      }
    else
      {
      op->vtkIsoVolume::ThresholdBetween(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIsoVolume_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIsoVolume *op = static_cast<vtkIsoVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUpperThreshold() :
      op->vtkIsoVolume::GetUpperThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIsoVolume_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIsoVolume *op = static_cast<vtkIsoVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLowerThreshold() :
      op->vtkIsoVolume::GetLowerThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkIsoVolume_Methods[] = {
  {(char*)"GetClassName", PyvtkIsoVolume_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIsoVolume_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIsoVolume_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkIsoVolume\nC++: vtkIsoVolume *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIsoVolume_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIsoVolume\nC++: vtkIsoVolume *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ThresholdBetween", PyvtkIsoVolume_ThresholdBetween, METH_VARARGS,
   (char*)"V.ThresholdBetween(float, float)\nC++: void ThresholdBetween(double lower, double upper)\n\nCriterion is cells whose scalars are between lower and upper\nthresholds (inclusive of the end values).\n"},
  {(char*)"GetUpperThreshold", PyvtkIsoVolume_GetUpperThreshold, METH_VARARGS,
   (char*)"V.GetUpperThreshold() -> float\nC++: double GetUpperThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {(char*)"GetLowerThreshold", PyvtkIsoVolume_GetLowerThreshold, METH_VARARGS,
   (char*)"V.GetLowerThreshold() -> float\nC++: double GetLowerThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIsoVolume_StaticNew()
{
  return vtkIsoVolume::New();
}

PyObject *PyVTKClass_vtkIsoVolumeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIsoVolume_StaticNew,
    PyvtkIsoVolume_Methods,
    "vtkIsoVolume", modulename,
    NULL, NULL,
    PyvtkIsoVolume_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkIsoVolume_Doc()
{
  static const char *docstring[] = {
    "vtkIsoVolume - This filter extract cells using lower / upper\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "See Also:\n\nvtkThreshold vtkPVClipDataSet\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIsoVolume(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIsoVolumeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIsoVolume", o) != 0)
    {
    Py_DECREF(o);
    }

}

