// python wrapper for vtkTimestepsAnimationPlayer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTimestepsAnimationPlayer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTimestepsAnimationPlayer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTimestepsAnimationPlayerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAnimationPlayerNew
extern "C" { PyObject *PyVTKClass_vtkAnimationPlayerNew(const char *); }
#define DECLARED_PyVTKClass_vtkAnimationPlayerNew
#endif

static const char **PyvtkTimestepsAnimationPlayer_Doc();


static PyObject *
PyvtkTimestepsAnimationPlayer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTimestepsAnimationPlayer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTimestepsAnimationPlayer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTimestepsAnimationPlayer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTimestepsAnimationPlayer::NewInstance());

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
PyvtkTimestepsAnimationPlayer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTimestepsAnimationPlayer *tempr = vtkTimestepsAnimationPlayer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_AddTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddTimeStep(temp0);
      }
    else
      {
      op->vtkTimestepsAnimationPlayer::AddTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_RemoveTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveTimeStep(temp0);
      }
    else
      {
      op->vtkTimestepsAnimationPlayer::RemoveTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_RemoveAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllTimeSteps();
      }
    else
      {
      op->vtkTimestepsAnimationPlayer::RemoveAllTimeSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkTimestepsAnimationPlayer::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_SetFramesPerTimestep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFramesPerTimestep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFramesPerTimestep(temp0);
      }
    else
      {
      op->vtkTimestepsAnimationPlayer::SetFramesPerTimestep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_GetFramesPerTimestepMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFramesPerTimestepMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetFramesPerTimestepMinValue() :
      op->vtkTimestepsAnimationPlayer::GetFramesPerTimestepMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_GetFramesPerTimestepMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFramesPerTimestepMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetFramesPerTimestepMaxValue() :
      op->vtkTimestepsAnimationPlayer::GetFramesPerTimestepMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_GetFramesPerTimestep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFramesPerTimestep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetFramesPerTimestep() :
      op->vtkTimestepsAnimationPlayer::GetFramesPerTimestep());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_GetNextTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetNextTimeStep(temp0) :
      op->vtkTimestepsAnimationPlayer::GetNextTimeStep(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_GetPreviousTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreviousTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPreviousTimeStep(temp0) :
      op->vtkTimestepsAnimationPlayer::GetPreviousTimeStep(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTimestepsAnimationPlayer_Methods[] = {
  {(char*)"GetClassName", PyvtkTimestepsAnimationPlayer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTimestepsAnimationPlayer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTimestepsAnimationPlayer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTimestepsAnimationPlayer\nC++: vtkTimestepsAnimationPlayer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTimestepsAnimationPlayer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTimestepsAnimationPlayer\nC++: vtkTimestepsAnimationPlayer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddTimeStep", PyvtkTimestepsAnimationPlayer_AddTimeStep, METH_VARARGS,
   (char*)"V.AddTimeStep(float)\nC++: void AddTimeStep(double time)\n\nAdd/Remove timesteps.\n"},
  {(char*)"RemoveTimeStep", PyvtkTimestepsAnimationPlayer_RemoveTimeStep, METH_VARARGS,
   (char*)"V.RemoveTimeStep(float)\nC++: void RemoveTimeStep(double time)\n\nAdd/Remove timesteps.\n"},
  {(char*)"RemoveAllTimeSteps", PyvtkTimestepsAnimationPlayer_RemoveAllTimeSteps, METH_VARARGS,
   (char*)"V.RemoveAllTimeSteps()\nC++: void RemoveAllTimeSteps()\n\nRemove all timesteps.\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkTimestepsAnimationPlayer_GetNumberOfTimeSteps, METH_VARARGS,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: unsigned int GetNumberOfTimeSteps()\n\nGet number of timesteps.\n"},
  {(char*)"SetFramesPerTimestep", PyvtkTimestepsAnimationPlayer_SetFramesPerTimestep, METH_VARARGS,
   (char*)"V.SetFramesPerTimestep(int)\nC++: void SetFramesPerTimestep(unsigned long)\n\nGet/Set the number of frames per timstep.\n"},
  {(char*)"GetFramesPerTimestepMinValue", PyvtkTimestepsAnimationPlayer_GetFramesPerTimestepMinValue, METH_VARARGS,
   (char*)"V.GetFramesPerTimestepMinValue() -> int\nC++: unsigned long GetFramesPerTimestepMinValue()\n\nGet/Set the number of frames per timstep.\n"},
  {(char*)"GetFramesPerTimestepMaxValue", PyvtkTimestepsAnimationPlayer_GetFramesPerTimestepMaxValue, METH_VARARGS,
   (char*)"V.GetFramesPerTimestepMaxValue() -> int\nC++: unsigned long GetFramesPerTimestepMaxValue()\n\nGet/Set the number of frames per timstep.\n"},
  {(char*)"GetFramesPerTimestep", PyvtkTimestepsAnimationPlayer_GetFramesPerTimestep, METH_VARARGS,
   (char*)"V.GetFramesPerTimestep() -> int\nC++: unsigned long GetFramesPerTimestep()\n\nGet/Set the number of frames per timstep.\n"},
  {(char*)"GetNextTimeStep", PyvtkTimestepsAnimationPlayer_GetNextTimeStep, METH_VARARGS,
   (char*)"V.GetNextTimeStep(float) -> float\nC++: double GetNextTimeStep(double time)\n\nReturns the timestep value after the given timestep. If no value\nexists, returns the argument time itself.\n"},
  {(char*)"GetPreviousTimeStep", PyvtkTimestepsAnimationPlayer_GetPreviousTimeStep, METH_VARARGS,
   (char*)"V.GetPreviousTimeStep(float) -> float\nC++: double GetPreviousTimeStep(double time)\n\nReturns the timestep value before the given timestep. If no value\nexists, returns the argument time itself.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTimestepsAnimationPlayer_StaticNew()
{
  return vtkTimestepsAnimationPlayer::New();
}

PyObject *PyVTKClass_vtkTimestepsAnimationPlayerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTimestepsAnimationPlayer_StaticNew,
    PyvtkTimestepsAnimationPlayer_Methods,
    "vtkTimestepsAnimationPlayer", modulename,
    NULL, NULL,
    PyvtkTimestepsAnimationPlayer_Doc(),
    PyVTKClass_vtkAnimationPlayerNew(modulename));
  return cls;
}

const char **PyvtkTimestepsAnimationPlayer_Doc()
{
  static const char *docstring[] = {
    "vtkTimestepsAnimationPlayer - vtkAnimationPlayer subclass\n\n",
    "Superclass: vtkAnimationPlayer\n\n",
    "Player to play an animation scene through a discrete set of time\nvalues. FramesPerTimestep controls how many frames are generated for\neach time value.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTimestepsAnimationPlayer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTimestepsAnimationPlayerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTimestepsAnimationPlayer", o) != 0)
    {
    Py_DECREF(o);
    }

}

