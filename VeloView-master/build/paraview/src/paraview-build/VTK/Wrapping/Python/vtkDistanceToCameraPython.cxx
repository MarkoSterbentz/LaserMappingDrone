// python wrapper for vtkDistanceToCamera
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDistanceToCamera.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDistanceToCamera(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDistanceToCameraNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkDistanceToCamera_Doc();


static PyObject *
PyvtkDistanceToCamera_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDistanceToCamera::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDistanceToCamera::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDistanceToCamera *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDistanceToCamera::NewInstance());

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
PyvtkDistanceToCamera_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDistanceToCamera *tempr = vtkDistanceToCamera::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkDistanceToCamera::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkDistanceToCamera::GetRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_SetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScreenSize(temp0);
      }
    else
      {
      op->vtkDistanceToCamera::SetScreenSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkDistanceToCamera::GetScreenSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaling(temp0);
      }
    else
      {
      op->vtkDistanceToCamera::SetScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetScaling() :
      op->vtkDistanceToCamera::GetScaling());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOn();
      }
    else
      {
      op->vtkDistanceToCamera::ScalingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOff();
      }
    else
      {
      op->vtkDistanceToCamera::ScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDistanceToCamera::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDistanceToCamera_Methods[] = {
  {(char*)"GetClassName", PyvtkDistanceToCamera_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDistanceToCamera_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDistanceToCamera_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDistanceToCamera\nC++: vtkDistanceToCamera *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDistanceToCamera_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDistanceToCamera\nC++: vtkDistanceToCamera *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRenderer", PyvtkDistanceToCamera_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *ren)\n\nThe renderer which will ultimately render these points.\n"},
  {(char*)"GetRenderer", PyvtkDistanceToCamera_GetRenderer, METH_VARARGS,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nThe renderer which will ultimately render these points.\n"},
  {(char*)"SetScreenSize", PyvtkDistanceToCamera_SetScreenSize, METH_VARARGS,
   (char*)"V.SetScreenSize(float)\nC++: void SetScreenSize(double a)\n\nThe desired screen size obtained by scaling glyphs by the\ndistance array. It assumes the glyph at each point will be unit\nsize.\n"},
  {(char*)"GetScreenSize", PyvtkDistanceToCamera_GetScreenSize, METH_VARARGS,
   (char*)"V.GetScreenSize() -> float\nC++: double GetScreenSize()\n\nThe desired screen size obtained by scaling glyphs by the\ndistance array. It assumes the glyph at each point will be unit\nsize.\n"},
  {(char*)"SetScaling", PyvtkDistanceToCamera_SetScaling, METH_VARARGS,
   (char*)"V.SetScaling(bool)\nC++: void SetScaling(bool a)\n\nWhether to scale the distance by the input array to process.\n"},
  {(char*)"GetScaling", PyvtkDistanceToCamera_GetScaling, METH_VARARGS,
   (char*)"V.GetScaling() -> bool\nC++: bool GetScaling()\n\nWhether to scale the distance by the input array to process.\n"},
  {(char*)"ScalingOn", PyvtkDistanceToCamera_ScalingOn, METH_VARARGS,
   (char*)"V.ScalingOn()\nC++: void ScalingOn()\n\nWhether to scale the distance by the input array to process.\n"},
  {(char*)"ScalingOff", PyvtkDistanceToCamera_ScalingOff, METH_VARARGS,
   (char*)"V.ScalingOff()\nC++: void ScalingOff()\n\nWhether to scale the distance by the input array to process.\n"},
  {(char*)"GetMTime", PyvtkDistanceToCamera_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nThe modified time of this filter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDistanceToCamera_StaticNew()
{
  return vtkDistanceToCamera::New();
}

PyObject *PyVTKClass_vtkDistanceToCameraNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDistanceToCamera_StaticNew,
    PyvtkDistanceToCamera_Methods,
    "vtkDistanceToCamera", modulename,
    NULL, NULL,
    PyvtkDistanceToCamera_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDistanceToCamera_Doc()
{
  static const char *docstring[] = {
    "vtkDistanceToCamera - calculates distance from points to the camera.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "This filter adds a double array containing the distance from each\npoint to the camera. If Scaling is on, it will use the values in the\ninput array to process in order to scale the size of the points.\nScreenSize sets the size in screen pixels that you would want a\nrendered rectangle at that point to be, if it was scaled by the\noutput array.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDistanceToCamera(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDistanceToCameraNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDistanceToCamera", o) != 0)
    {
    Py_DECREF(o);
    }

}

