// python wrapper for vtkOpenGLCamera
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLCamera.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLCamera(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLCameraNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCameraNew
extern "C" { PyObject *PyVTKClass_vtkCameraNew(const char *); }
#define DECLARED_PyVTKClass_vtkCameraNew
#endif

static const char **PyvtkOpenGLCamera_Doc();


static PyObject *
PyvtkOpenGLCamera_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCamera *op = static_cast<vtkOpenGLCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLCamera::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLCamera_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCamera *op = static_cast<vtkOpenGLCamera *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLCamera::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLCamera_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCamera *op = static_cast<vtkOpenGLCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLCamera *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLCamera::NewInstance());

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
PyvtkOpenGLCamera_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLCamera *tempr = vtkOpenGLCamera::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLCamera_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCamera *op = static_cast<vtkOpenGLCamera *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0);
      }
    else
      {
      op->vtkOpenGLCamera::Render(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLCamera_UpdateViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCamera *op = static_cast<vtkOpenGLCamera *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->UpdateViewport(temp0);
      }
    else
      {
      op->vtkOpenGLCamera::UpdateViewport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLCamera_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLCamera_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLCamera_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLCamera_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLCamera\nC++: vtkOpenGLCamera *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLCamera_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLCamera\nC++: vtkOpenGLCamera *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkOpenGLCamera_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer)\nC++: void Render(vtkRenderer *ren)\n\nImplement base class method.\n"},
  {(char*)"UpdateViewport", PyvtkOpenGLCamera_UpdateViewport, METH_VARARGS,
   (char*)"V.UpdateViewport(vtkRenderer)\nC++: void UpdateViewport(vtkRenderer *ren)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLCamera_StaticNew()
{
  return vtkOpenGLCamera::New();
}

PyObject *PyVTKClass_vtkOpenGLCameraNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLCamera_StaticNew,
    PyvtkOpenGLCamera_Methods,
    "vtkOpenGLCamera", modulename,
    NULL, NULL,
    PyvtkOpenGLCamera_Doc(),
    PyVTKClass_vtkCameraNew(modulename));
  return cls;
}

const char **PyvtkOpenGLCamera_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLCamera - OpenGL camera\n\n",
    "Superclass: vtkCamera\n\n",
    "vtkOpenGLCamera is a concrete implementation of the abstract class\nvtkCamera.  vtkOpenGLCamera interfaces to the OpenGL rendering\nlibrary.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLCamera(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLCameraNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLCamera", o) != 0)
    {
    Py_DECREF(o);
    }

}

