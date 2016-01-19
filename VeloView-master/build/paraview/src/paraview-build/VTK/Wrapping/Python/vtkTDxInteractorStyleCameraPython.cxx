// python wrapper for vtkTDxInteractorStyleCamera
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTDxInteractorStyleCamera.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTDxInteractorStyleCamera(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTDxInteractorStyleCameraNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTDxInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkTDxInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkTDxInteractorStyleNew
#endif

static const char **PyvtkTDxInteractorStyleCamera_Doc();


static PyObject *
PyvtkTDxInteractorStyleCamera_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleCamera *op = static_cast<vtkTDxInteractorStyleCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTDxInteractorStyleCamera::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleCamera_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleCamera *op = static_cast<vtkTDxInteractorStyleCamera *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTDxInteractorStyleCamera::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleCamera_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleCamera *op = static_cast<vtkTDxInteractorStyleCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTDxInteractorStyleCamera *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTDxInteractorStyleCamera::NewInstance());

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
PyvtkTDxInteractorStyleCamera_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTDxInteractorStyleCamera *tempr = vtkTDxInteractorStyleCamera::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleCamera_OnMotionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMotionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleCamera *op = static_cast<vtkTDxInteractorStyleCamera *>(vp);

  vtkTDxMotionEventInfo *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTDxMotionEventInfo"))
    {
    if (ap.IsBound())
      {
      op->OnMotionEvent(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyleCamera::OnMotionEvent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTDxInteractorStyleCamera_Methods[] = {
  {(char*)"GetClassName", PyvtkTDxInteractorStyleCamera_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTDxInteractorStyleCamera_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTDxInteractorStyleCamera_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTDxInteractorStyleCamera\nC++: vtkTDxInteractorStyleCamera *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTDxInteractorStyleCamera_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTDxInteractorStyleCamera\nC++: vtkTDxInteractorStyleCamera *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnMotionEvent", PyvtkTDxInteractorStyleCamera_OnMotionEvent, METH_VARARGS,
   (char*)"V.OnMotionEvent(vtkTDxMotionEventInfo)\nC++: virtual void OnMotionEvent(vtkTDxMotionEventInfo *motionInfo)\n\nAction on motion event.\n\\pre: motionInfo_exist: motionInfo!=0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTDxInteractorStyleCamera_StaticNew()
{
  return vtkTDxInteractorStyleCamera::New();
}

PyObject *PyVTKClass_vtkTDxInteractorStyleCameraNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTDxInteractorStyleCamera_StaticNew,
    PyvtkTDxInteractorStyleCamera_Methods,
    "vtkTDxInteractorStyleCamera", modulename,
    NULL, NULL,
    PyvtkTDxInteractorStyleCamera_Doc(),
    PyVTKClass_vtkTDxInteractorStyleNew(modulename));
  return cls;
}

const char **PyvtkTDxInteractorStyleCamera_Doc()
{
  static const char *docstring[] = {
    "vtkTDxInteractorStyleCamera - interactive manipulation of the camera\nwith a 3DConnexion device\n\n",
    "Superclass: vtkTDxInteractorStyle\n\n",
    "vtkTDxInteractorStyleCamera allows the end-user to manipulate tha\ncamera with a 3DConnexion device.\n\nSee Also:\n\nvtkInteractorStyle vtkRenderWindowInteractor vtkTDxInteractorStyle\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTDxInteractorStyleCamera(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTDxInteractorStyleCameraNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTDxInteractorStyleCamera", o) != 0)
    {
    Py_DECREF(o);
    }

}

