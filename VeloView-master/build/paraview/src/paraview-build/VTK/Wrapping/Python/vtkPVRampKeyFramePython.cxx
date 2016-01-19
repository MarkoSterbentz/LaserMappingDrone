// python wrapper for vtkPVRampKeyFrame
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVRampKeyFrame.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVRampKeyFrame(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVRampKeyFrameNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVKeyFrameNew
extern "C" { PyObject *PyVTKClass_vtkPVKeyFrameNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVKeyFrameNew
#endif

static const char **PyvtkPVRampKeyFrame_Doc();


static PyObject *
PyvtkPVRampKeyFrame_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRampKeyFrame *op = static_cast<vtkPVRampKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVRampKeyFrame::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRampKeyFrame_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRampKeyFrame *op = static_cast<vtkPVRampKeyFrame *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVRampKeyFrame::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRampKeyFrame_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRampKeyFrame *op = static_cast<vtkPVRampKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVRampKeyFrame *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVRampKeyFrame::NewInstance());

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
PyvtkPVRampKeyFrame_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVRampKeyFrame *tempr = vtkPVRampKeyFrame::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRampKeyFrame_UpdateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRampKeyFrame *op = static_cast<vtkPVRampKeyFrame *>(vp);

  double temp0;
  vtkPVAnimationCue *temp1 = NULL;
  vtkPVKeyFrame *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVAnimationCue") &&
      ap.GetVTKObject(temp2, "vtkPVKeyFrame"))
    {
    if (ap.IsBound())
      {
      op->UpdateValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVRampKeyFrame::UpdateValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVRampKeyFrame_Methods[] = {
  {(char*)"GetClassName", PyvtkPVRampKeyFrame_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVRampKeyFrame_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVRampKeyFrame_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVRampKeyFrame\nC++: vtkPVRampKeyFrame *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVRampKeyFrame_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVRampKeyFrame\nC++: vtkPVRampKeyFrame *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"UpdateValue", PyvtkPVRampKeyFrame_UpdateValue, METH_VARARGS,
   (char*)"V.UpdateValue(float, vtkPVAnimationCue, vtkPVKeyFrame)\nC++: virtual void UpdateValue(double currenttime,\n    vtkPVAnimationCue *cue, vtkPVKeyFrame *next)\n\nThis method will do the actual interpolation. currenttime is\nnormalized to the time range between this key frame and the next\nkey frame.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVRampKeyFrame_StaticNew()
{
  return vtkPVRampKeyFrame::New();
}

PyObject *PyVTKClass_vtkPVRampKeyFrameNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVRampKeyFrame_StaticNew,
    PyvtkPVRampKeyFrame_Methods,
    "vtkPVRampKeyFrame", modulename,
    NULL, NULL,
    PyvtkPVRampKeyFrame_Doc(),
    PyVTKClass_vtkPVKeyFrameNew(modulename));
  return cls;
}

const char **PyvtkPVRampKeyFrame_Doc()
{
  static const char *docstring[] = {
    "vtkPVRampKeyFrame\n\n",
    "Superclass: vtkPVKeyFrame\n\n",
    "Interplates lineraly between consequtive key frames.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVRampKeyFrame(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVRampKeyFrameNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVRampKeyFrame", o) != 0)
    {
    Py_DECREF(o);
    }

}

