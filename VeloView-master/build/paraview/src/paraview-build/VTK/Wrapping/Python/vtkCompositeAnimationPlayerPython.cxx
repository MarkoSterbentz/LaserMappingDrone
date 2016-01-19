// python wrapper for vtkCompositeAnimationPlayer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCompositeAnimationPlayer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositeAnimationPlayer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositeAnimationPlayerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAnimationPlayerNew
extern "C" { PyObject *PyVTKClass_vtkAnimationPlayerNew(const char *); }
#define DECLARED_PyVTKClass_vtkAnimationPlayerNew
#endif

static const char **PyvtkCompositeAnimationPlayer_Doc();

#ifndef DECLARED_PyvtkCompositeAnimationPlayer_Modes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkCompositeAnimationPlayer_Modes_Type;
#define DECLARED_PyvtkCompositeAnimationPlayer_Modes_Type
#endif

PyTypeObject PyvtkCompositeAnimationPlayer_Modes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Modes", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkCompositeAnimationPlayer_Modes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCompositeAnimationPlayer_Modes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkCompositeAnimationPlayer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositeAnimationPlayer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeAnimationPlayer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeAnimationPlayer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeAnimationPlayer::NewInstance());

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
PyvtkCompositeAnimationPlayer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositeAnimationPlayer *tempr = vtkCompositeAnimationPlayer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_SetPlayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlayMode(temp0);
      }
    else
      {
      op->vtkCompositeAnimationPlayer::SetPlayMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_GetPlayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPlayMode() :
      op->vtkCompositeAnimationPlayer::GetPlayMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_SetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfFrames(temp0);
      }
    else
      {
      op->vtkCompositeAnimationPlayer::SetNumberOfFrames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_SetDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

  int temp0;
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
      op->vtkCompositeAnimationPlayer::SetDuration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_AddTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

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
      op->vtkCompositeAnimationPlayer::AddTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_RemoveAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllTimeSteps();
      }
    else
      {
      op->vtkCompositeAnimationPlayer::RemoveAllTimeSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_SetFramesPerTimestep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFramesPerTimestep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

  int temp0;
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
      op->vtkCompositeAnimationPlayer::SetFramesPerTimestep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeAnimationPlayer_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeAnimationPlayer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeAnimationPlayer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeAnimationPlayer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositeAnimationPlayer\nC++: vtkCompositeAnimationPlayer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeAnimationPlayer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeAnimationPlayer\nC++: vtkCompositeAnimationPlayer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPlayMode", PyvtkCompositeAnimationPlayer_SetPlayMode, METH_VARARGS,
   (char*)"V.SetPlayMode(int)\nC++: void SetPlayMode(int a)\n\nGet/Set the play mode\n"},
  {(char*)"GetPlayMode", PyvtkCompositeAnimationPlayer_GetPlayMode, METH_VARARGS,
   (char*)"V.GetPlayMode() -> int\nC++: int GetPlayMode()\n\nGet/Set the play mode\n"},
  {(char*)"SetNumberOfFrames", PyvtkCompositeAnimationPlayer_SetNumberOfFrames, METH_VARARGS,
   (char*)"V.SetNumberOfFrames(int)\nC++: void SetNumberOfFrames(int val)\n\nForwarded to vtkSequenceAnimationPlayer\n"},
  {(char*)"SetDuration", PyvtkCompositeAnimationPlayer_SetDuration, METH_VARARGS,
   (char*)"V.SetDuration(int)\nC++: void SetDuration(int val)\n\nForwarded to vtkRealtimeAnimationPlayer.\n"},
  {(char*)"AddTimeStep", PyvtkCompositeAnimationPlayer_AddTimeStep, METH_VARARGS,
   (char*)"V.AddTimeStep(float)\nC++: void AddTimeStep(double val)\n\nForwarded to vtkTimestepsAnimationPlayer.\n"},
  {(char*)"RemoveAllTimeSteps", PyvtkCompositeAnimationPlayer_RemoveAllTimeSteps, METH_VARARGS,
   (char*)"V.RemoveAllTimeSteps()\nC++: void RemoveAllTimeSteps()\n\nForwarded to vtkTimestepsAnimationPlayer.\n"},
  {(char*)"SetFramesPerTimestep", PyvtkCompositeAnimationPlayer_SetFramesPerTimestep, METH_VARARGS,
   (char*)"V.SetFramesPerTimestep(int)\nC++: void SetFramesPerTimestep(int val)\n\nForwarded to vtkTimestepsAnimationPlayer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeAnimationPlayer_StaticNew()
{
  return vtkCompositeAnimationPlayer::New();
}

PyObject *PyVTKClass_vtkCompositeAnimationPlayerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeAnimationPlayer_StaticNew,
    PyvtkCompositeAnimationPlayer_Methods,
    "vtkCompositeAnimationPlayer", modulename,
    NULL, NULL,
    PyvtkCompositeAnimationPlayer_Doc(),
    PyVTKClass_vtkAnimationPlayerNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkCompositeAnimationPlayer_Modes_Type);
    PyvtkCompositeAnimationPlayer_Modes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkCompositeAnimationPlayer_Modes_Type;
    if (o && PyDict_SetItemString(d, (char *)"Modes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkCompositeAnimationPlayer::Modes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "SEQUENCE", vtkCompositeAnimationPlayer::SEQUENCE },
          { "REAL_TIME", vtkCompositeAnimationPlayer::REAL_TIME },
          { "SNAP_TO_TIMESTEPS", vtkCompositeAnimationPlayer::SNAP_TO_TIMESTEPS },
        };

      o = PyvtkCompositeAnimationPlayer_Modes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkCompositeAnimationPlayer_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeAnimationPlayer\n\n",
    "Superclass: vtkAnimationPlayer\n\n",
    "This is composite animation player that can me made to play an\nanimation using the active player. It provides API to add animation\nplayers and then set one of them as the active one.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeAnimationPlayer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeAnimationPlayerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeAnimationPlayer", o) != 0)
    {
    Py_DECREF(o);
    }

}

