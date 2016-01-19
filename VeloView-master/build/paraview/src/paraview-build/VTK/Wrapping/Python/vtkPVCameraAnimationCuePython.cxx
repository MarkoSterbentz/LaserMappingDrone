// python wrapper for vtkPVCameraAnimationCue
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVCameraAnimationCue.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVCameraAnimationCue(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVCameraAnimationCueNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVKeyFrameAnimationCueNew
extern "C" { PyObject *PyVTKClass_vtkPVKeyFrameAnimationCueNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVKeyFrameAnimationCueNew
#endif

static const char **PyvtkPVCameraAnimationCue_Doc();


static PyObject *
PyvtkPVCameraAnimationCue_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVCameraAnimationCue::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCameraAnimationCue::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVCameraAnimationCue *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCameraAnimationCue::NewInstance());

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
PyvtkPVCameraAnimationCue_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVCameraAnimationCue *tempr = vtkPVCameraAnimationCue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_SetView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  vtkPVRenderView *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVRenderView"))
    {
    if (ap.IsBound())
      {
      op->SetView(temp0);
      }
    else
      {
      op->vtkPVCameraAnimationCue::SetView(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_GetView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVRenderView *tempr = (ap.IsBound() ?
      op->GetView() :
      op->vtkPVCameraAnimationCue::GetView());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkPVCameraAnimationCue::GetCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMode(temp0);
      }
    else
      {
      op->vtkPVCameraAnimationCue::SetMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_BeginUpdateAnimationValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginUpdateAnimationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BeginUpdateAnimationValues();
      }
    else
      {
      op->vtkPVCameraAnimationCue::BeginUpdateAnimationValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_SetAnimationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAnimationValue(temp0, temp1);
      }
    else
      {
      op->vtkPVCameraAnimationCue::SetAnimationValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_EndUpdateAnimationValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndUpdateAnimationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndUpdateAnimationValues();
      }
    else
      {
      op->vtkPVCameraAnimationCue::EndUpdateAnimationValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_SetDataSourceProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSourceProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->SetDataSourceProxy(temp0);
      }
    else
      {
      op->vtkPVCameraAnimationCue::SetDataSourceProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVCameraAnimationCue_Methods[] = {
  {(char*)"GetClassName", PyvtkPVCameraAnimationCue_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVCameraAnimationCue_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVCameraAnimationCue_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVCameraAnimationCue\nC++: vtkPVCameraAnimationCue *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVCameraAnimationCue_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVCameraAnimationCue\nC++: vtkPVCameraAnimationCue *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetView", PyvtkPVCameraAnimationCue_SetView, METH_VARARGS,
   (char*)"V.SetView(vtkPVRenderView)\nC++: void SetView(vtkPVRenderView *)\n\nGet/Set the render view.\n"},
  {(char*)"GetView", PyvtkPVCameraAnimationCue_GetView, METH_VARARGS,
   (char*)"V.GetView() -> vtkPVRenderView\nC++: vtkPVRenderView *GetView()\n\nGet/Set the render view.\n"},
  {(char*)"GetCamera", PyvtkPVCameraAnimationCue_GetCamera, METH_VARARGS,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nReturns the animated camera, if any.\n"},
  {(char*)"SetMode", PyvtkPVCameraAnimationCue_SetMode, METH_VARARGS,
   (char*)"V.SetMode(int)\nC++: void SetMode(int mode)\n\nForwarded to vtkPVCameraCueManipulator.\n"},
  {(char*)"BeginUpdateAnimationValues", PyvtkPVCameraAnimationCue_BeginUpdateAnimationValues, METH_VARARGS,
   (char*)"V.BeginUpdateAnimationValues()\nC++: virtual void BeginUpdateAnimationValues()\n\n"},
  {(char*)"SetAnimationValue", PyvtkPVCameraAnimationCue_SetAnimationValue, METH_VARARGS,
   (char*)"V.SetAnimationValue(int, float)\nC++: virtual void SetAnimationValue(int, double)\n\n"},
  {(char*)"EndUpdateAnimationValues", PyvtkPVCameraAnimationCue_EndUpdateAnimationValues, METH_VARARGS,
   (char*)"V.EndUpdateAnimationValues()\nC++: virtual void EndUpdateAnimationValues()\n\n"},
  {(char*)"SetDataSourceProxy", PyvtkPVCameraAnimationCue_SetDataSourceProxy, METH_VARARGS,
   (char*)"V.SetDataSourceProxy(vtkSMProxy)\nC++: void SetDataSourceProxy(vtkSMProxy *dataSourceProxy)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVCameraAnimationCue_StaticNew()
{
  return vtkPVCameraAnimationCue::New();
}

PyObject *PyVTKClass_vtkPVCameraAnimationCueNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVCameraAnimationCue_StaticNew,
    PyvtkPVCameraAnimationCue_Methods,
    "vtkPVCameraAnimationCue", modulename,
    NULL, NULL,
    PyvtkPVCameraAnimationCue_Doc(),
    PyVTKClass_vtkPVKeyFrameAnimationCueNew(modulename));
  return cls;
}

const char **PyvtkPVCameraAnimationCue_Doc()
{
  static const char *docstring[] = {
    "vtkPVCameraAnimationCue\n\n",
    "Superclass: vtkPVKeyFrameAnimationCue\n\n",
    "vtkPVCameraAnimationCue is a specialization of the\nvtkPVKeyFrameAnimationCue suitable for animating cameras from a\nvtkPVRenderView.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVCameraAnimationCue(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVCameraAnimationCueNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVCameraAnimationCue", o) != 0)
    {
    Py_DECREF(o);
    }

}

