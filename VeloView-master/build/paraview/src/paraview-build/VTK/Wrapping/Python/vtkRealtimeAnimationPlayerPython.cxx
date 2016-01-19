// python wrapper for vtkRealtimeAnimationPlayer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRealtimeAnimationPlayer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRealtimeAnimationPlayer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRealtimeAnimationPlayerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAnimationPlayerNew
extern "C" { PyObject *PyVTKClass_vtkAnimationPlayerNew(const char *); }
#define DECLARED_PyVTKClass_vtkAnimationPlayerNew
#endif

static const char **PyvtkRealtimeAnimationPlayer_Doc();


static PyObject *
PyvtkRealtimeAnimationPlayer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRealtimeAnimationPlayer *op = static_cast<vtkRealtimeAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRealtimeAnimationPlayer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRealtimeAnimationPlayer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRealtimeAnimationPlayer *op = static_cast<vtkRealtimeAnimationPlayer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRealtimeAnimationPlayer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRealtimeAnimationPlayer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRealtimeAnimationPlayer *op = static_cast<vtkRealtimeAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRealtimeAnimationPlayer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRealtimeAnimationPlayer::NewInstance());

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
PyvtkRealtimeAnimationPlayer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRealtimeAnimationPlayer *tempr = vtkRealtimeAnimationPlayer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRealtimeAnimationPlayer_GetDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRealtimeAnimationPlayer *op = static_cast<vtkRealtimeAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetDuration() :
      op->vtkRealtimeAnimationPlayer::GetDuration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRealtimeAnimationPlayer_SetDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRealtimeAnimationPlayer *op = static_cast<vtkRealtimeAnimationPlayer *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDuration(temp0);
      }
    else
      {
      op->vtkRealtimeAnimationPlayer::SetDuration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRealtimeAnimationPlayer_Methods[] = {
  {(char*)"GetClassName", PyvtkRealtimeAnimationPlayer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRealtimeAnimationPlayer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRealtimeAnimationPlayer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRealtimeAnimationPlayer\nC++: vtkRealtimeAnimationPlayer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRealtimeAnimationPlayer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRealtimeAnimationPlayer\nC++: vtkRealtimeAnimationPlayer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDuration", PyvtkRealtimeAnimationPlayer_GetDuration, METH_VARARGS,
   (char*)"V.GetDuration() -> int\nC++: unsigned long GetDuration()\n\nGet/Set the duration for playing the animation in seconds.\n"},
  {(char*)"SetDuration", PyvtkRealtimeAnimationPlayer_SetDuration, METH_VARARGS,
   (char*)"V.SetDuration(int)\nC++: void SetDuration(unsigned long a)\n\nGet/Set the duration for playing the animation in seconds.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRealtimeAnimationPlayer_StaticNew()
{
  return vtkRealtimeAnimationPlayer::New();
}

PyObject *PyVTKClass_vtkRealtimeAnimationPlayerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRealtimeAnimationPlayer_StaticNew,
    PyvtkRealtimeAnimationPlayer_Methods,
    "vtkRealtimeAnimationPlayer", modulename,
    NULL, NULL,
    PyvtkRealtimeAnimationPlayer_Doc(),
    PyVTKClass_vtkAnimationPlayerNew(modulename));
  return cls;
}

const char **PyvtkRealtimeAnimationPlayer_Doc()
{
  static const char *docstring[] = {
    "vtkRealtimeAnimationPlayer\n\n",
    "Superclass: vtkAnimationPlayer\n\n",
    "Animation player that plays in real time.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRealtimeAnimationPlayer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRealtimeAnimationPlayerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRealtimeAnimationPlayer", o) != 0)
    {
    Py_DECREF(o);
    }

}

