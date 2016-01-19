// python wrapper for vtkPVServerSideAnimationPlayer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVServerSideAnimationPlayer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVServerSideAnimationPlayer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVServerSideAnimationPlayerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVServerSideAnimationPlayer_Doc();


static PyObject *
PyvtkPVServerSideAnimationPlayer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerSideAnimationPlayer *op = static_cast<vtkPVServerSideAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVServerSideAnimationPlayer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerSideAnimationPlayer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerSideAnimationPlayer *op = static_cast<vtkPVServerSideAnimationPlayer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVServerSideAnimationPlayer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerSideAnimationPlayer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerSideAnimationPlayer *op = static_cast<vtkPVServerSideAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVServerSideAnimationPlayer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVServerSideAnimationPlayer::NewInstance());

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
PyvtkPVServerSideAnimationPlayer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVServerSideAnimationPlayer *tempr = vtkPVServerSideAnimationPlayer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerSideAnimationPlayer_SetWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerSideAnimationPlayer *op = static_cast<vtkPVServerSideAnimationPlayer *>(vp);

  vtkSMAnimationSceneImageWriter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMAnimationSceneImageWriter"))
    {
    if (ap.IsBound())
      {
      op->SetWriter(temp0);
      }
    else
      {
      op->vtkPVServerSideAnimationPlayer::SetWriter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVServerSideAnimationPlayer_SetSessionProxyManagerState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSessionProxyManagerState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerSideAnimationPlayer *op = static_cast<vtkPVServerSideAnimationPlayer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSessionProxyManagerState(temp0);
      }
    else
      {
      op->vtkPVServerSideAnimationPlayer::SetSessionProxyManagerState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVServerSideAnimationPlayer_Methods[] = {
  {(char*)"GetClassName", PyvtkPVServerSideAnimationPlayer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVServerSideAnimationPlayer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVServerSideAnimationPlayer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVServerSideAnimationPlayer\nC++: vtkPVServerSideAnimationPlayer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVServerSideAnimationPlayer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVServerSideAnimationPlayer\nC++: vtkPVServerSideAnimationPlayer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWriter", PyvtkPVServerSideAnimationPlayer_SetWriter, METH_VARARGS,
   (char*)"V.SetWriter(vtkSMAnimationSceneImageWriter)\nC++: void SetWriter(vtkSMAnimationSceneImageWriter *writer)\n\n"},
  {(char*)"SetSessionProxyManagerState", PyvtkPVServerSideAnimationPlayer_SetSessionProxyManagerState, METH_VARARGS,
   (char*)"V.SetSessionProxyManagerState(string)\nC++: void SetSessionProxyManagerState(const char *xml_state)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVServerSideAnimationPlayer_StaticNew()
{
  return vtkPVServerSideAnimationPlayer::New();
}

PyObject *PyVTKClass_vtkPVServerSideAnimationPlayerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVServerSideAnimationPlayer_StaticNew,
    PyvtkPVServerSideAnimationPlayer_Methods,
    "vtkPVServerSideAnimationPlayer", modulename,
    NULL, NULL,
    PyvtkPVServerSideAnimationPlayer_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVServerSideAnimationPlayer_Doc()
{
  static const char *docstring[] = {
    "vtkPVServerSideAnimationPlayer - help class for server side animation\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVServerSideAnimationPlayer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVServerSideAnimationPlayerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVServerSideAnimationPlayer", o) != 0)
    {
    Py_DECREF(o);
    }

}

