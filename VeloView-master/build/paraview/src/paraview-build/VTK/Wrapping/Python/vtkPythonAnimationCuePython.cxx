// python wrapper for vtkPythonAnimationCue
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPythonAnimationCue.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPythonAnimationCue(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPythonAnimationCueNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAnimationCueNew
extern "C" { PyObject *PyVTKClass_vtkAnimationCueNew(const char *); }
#define DECLARED_PyVTKClass_vtkAnimationCueNew
#endif

static const char **PyvtkPythonAnimationCue_Doc();


static PyObject *
PyvtkPythonAnimationCue_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPythonAnimationCue::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnimationCue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonAnimationCue::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnimationCue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPythonAnimationCue *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonAnimationCue::NewInstance());

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
PyvtkPythonAnimationCue_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPythonAnimationCue *tempr = vtkPythonAnimationCue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnimationCue_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkPythonAnimationCue::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnimationCue_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkPythonAnimationCue::GetEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnimationCue_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOn();
      }
    else
      {
      op->vtkPythonAnimationCue::EnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnimationCue_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOff();
      }
    else
      {
      op->vtkPythonAnimationCue::EnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnimationCue_SetScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScript(temp0);
      }
    else
      {
      op->vtkPythonAnimationCue::SetScript(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnimationCue_GetScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetScript() :
      op->vtkPythonAnimationCue::GetScript());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPythonAnimationCue_Methods[] = {
  {(char*)"GetClassName", PyvtkPythonAnimationCue_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPythonAnimationCue_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPythonAnimationCue_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPythonAnimationCue\nC++: vtkPythonAnimationCue *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPythonAnimationCue_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPythonAnimationCue\nC++: vtkPythonAnimationCue *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnabled", PyvtkPythonAnimationCue_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(bool)\nC++: void SetEnabled(bool a)\n\nEnable/Disable this cue.\n"},
  {(char*)"GetEnabled", PyvtkPythonAnimationCue_GetEnabled, METH_VARARGS,
   (char*)"V.GetEnabled() -> bool\nC++: bool GetEnabled()\n\nEnable/Disable this cue.\n"},
  {(char*)"EnabledOn", PyvtkPythonAnimationCue_EnabledOn, METH_VARARGS,
   (char*)"V.EnabledOn()\nC++: void EnabledOn()\n\nEnable/Disable this cue.\n"},
  {(char*)"EnabledOff", PyvtkPythonAnimationCue_EnabledOff, METH_VARARGS,
   (char*)"V.EnabledOff()\nC++: void EnabledOff()\n\nEnable/Disable this cue.\n"},
  {(char*)"SetScript", PyvtkPythonAnimationCue_SetScript, METH_VARARGS,
   (char*)"V.SetScript(string)\nC++: void SetScript(char *)\n\nGet/Set the python script to execute. The script must have the\nfollowing functions:\n\\li start_cue(cue): (optional) if present, called when the cue\n    starts.\n\\li tick(cue) : (required) called on every tick.\n\\li end_cue(cue): (optional) if present, called when the cue\n    ends.\n"},
  {(char*)"GetScript", PyvtkPythonAnimationCue_GetScript, METH_VARARGS,
   (char*)"V.GetScript() -> string\nC++: char *GetScript()\n\nGet/Set the python script to execute. The script must have the\nfollowing functions:\n\\li start_cue(cue): (optional) if present, called when the cue\n    starts.\n\\li tick(cue) : (required) called on every tick.\n\\li end_cue(cue): (optional) if present, called when the cue\n    ends.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPythonAnimationCue_StaticNew()
{
  return vtkPythonAnimationCue::New();
}

PyObject *PyVTKClass_vtkPythonAnimationCueNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPythonAnimationCue_StaticNew,
    PyvtkPythonAnimationCue_Methods,
    "vtkPythonAnimationCue", modulename,
    NULL, NULL,
    PyvtkPythonAnimationCue_Doc(),
    PyVTKClass_vtkAnimationCueNew(modulename));
  return cls;
}

const char **PyvtkPythonAnimationCue_Doc()
{
  static const char *docstring[] = {
    "vtkPythonAnimationCue\n\n",
    "Superclass: vtkAnimationCue\n\n",
    "vtkPythonAnimationCue is an animation cue that can execute arbitrary\nPython scripts.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPythonAnimationCue(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPythonAnimationCueNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPythonAnimationCue", o) != 0)
    {
    Py_DECREF(o);
    }

}

