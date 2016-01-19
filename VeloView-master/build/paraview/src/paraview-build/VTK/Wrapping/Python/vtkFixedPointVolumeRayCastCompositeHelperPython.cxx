// python wrapper for vtkFixedPointVolumeRayCastCompositeHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkFixedPointVolumeRayCastCompositeHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFixedPointVolumeRayCastCompositeHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFixedPointVolumeRayCastCompositeHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkFixedPointVolumeRayCastHelperNew
extern "C" { PyObject *PyVTKClass_vtkFixedPointVolumeRayCastHelperNew(const char *); }
#define DECLARED_PyVTKClass_vtkFixedPointVolumeRayCastHelperNew
#endif

static const char **PyvtkFixedPointVolumeRayCastCompositeHelper_Doc();


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFixedPointVolumeRayCastCompositeHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFixedPointVolumeRayCastCompositeHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFixedPointVolumeRayCastCompositeHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFixedPointVolumeRayCastCompositeHelper::NewInstance());

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
PyvtkFixedPointVolumeRayCastCompositeHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFixedPointVolumeRayCastCompositeHelper *tempr = vtkFixedPointVolumeRayCastCompositeHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeHelper_GenerateImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeHelper *>(vp);

  int temp0;
  int temp1;
  vtkVolume *temp2 = NULL;
  vtkFixedPointVolumeRayCastMapper *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkVolume") &&
      ap.GetVTKObject(temp3, "vtkFixedPointVolumeRayCastMapper"))
    {
    if (ap.IsBound())
      {
      op->GenerateImage(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastCompositeHelper::GenerateImage(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFixedPointVolumeRayCastCompositeHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkFixedPointVolumeRayCastCompositeHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFixedPointVolumeRayCastCompositeHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFixedPointVolumeRayCastCompositeHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFixedPointVolumeRayCastCompositeHelper\nC++: vtkFixedPointVolumeRayCastCompositeHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFixedPointVolumeRayCastCompositeHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkFixedPointVolumeRayCastCompositeHelper\nC++: vtkFixedPointVolumeRayCastCompositeHelper *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"GenerateImage", PyvtkFixedPointVolumeRayCastCompositeHelper_GenerateImage, METH_VARARGS,
   (char*)"V.GenerateImage(int, int, vtkVolume,\n    vtkFixedPointVolumeRayCastMapper)\nC++: virtual void GenerateImage(int threadID, int threadCount,\n    vtkVolume *vol, vtkFixedPointVolumeRayCastMapper *mapper)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFixedPointVolumeRayCastCompositeHelper_StaticNew()
{
  return vtkFixedPointVolumeRayCastCompositeHelper::New();
}

PyObject *PyVTKClass_vtkFixedPointVolumeRayCastCompositeHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFixedPointVolumeRayCastCompositeHelper_StaticNew,
    PyvtkFixedPointVolumeRayCastCompositeHelper_Methods,
    "vtkFixedPointVolumeRayCastCompositeHelper", modulename,
    NULL, NULL,
    PyvtkFixedPointVolumeRayCastCompositeHelper_Doc(),
    PyVTKClass_vtkFixedPointVolumeRayCastHelperNew(modulename));
  return cls;
}

const char **PyvtkFixedPointVolumeRayCastCompositeHelper_Doc()
{
  static const char *docstring[] = {
    "vtkFixedPointVolumeRayCastCompositeHelper - A helper that generates\ncomposite images for the volume ray cast mapper\n\n",
    "Superclass: vtkFixedPointVolumeRayCastHelper\n\n",
    "This is one of the helper classes for the\nvtkFixedPointVolumeRayCastMapper. It will generate composite images\nusing an alpha blending operation. This class should not be used\ndirectly, it is a helper class for the mapper and has no user-level\nAPI.\n\nSee Also:\n\nvtkFixedPointVolumeRayCastMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFixedPointVolumeRayCastCompositeHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFixedPointVolumeRayCastCompositeHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFixedPointVolumeRayCastCompositeHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

