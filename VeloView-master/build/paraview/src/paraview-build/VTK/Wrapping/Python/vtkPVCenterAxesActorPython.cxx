// python wrapper for vtkPVCenterAxesActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVCenterAxesActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVCenterAxesActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVCenterAxesActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkOpenGLActorNew
extern "C" { PyObject *PyVTKClass_vtkOpenGLActorNew(const char *); }
#define DECLARED_PyVTKClass_vtkOpenGLActorNew
#endif

static const char **PyvtkPVCenterAxesActor_Doc();


static PyObject *
PyvtkPVCenterAxesActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCenterAxesActor *op = static_cast<vtkPVCenterAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVCenterAxesActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCenterAxesActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCenterAxesActor *op = static_cast<vtkPVCenterAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCenterAxesActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCenterAxesActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCenterAxesActor *op = static_cast<vtkPVCenterAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVCenterAxesActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCenterAxesActor::NewInstance());

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
PyvtkPVCenterAxesActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVCenterAxesActor *tempr = vtkPVCenterAxesActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCenterAxesActor_SetSymmetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSymmetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCenterAxesActor *op = static_cast<vtkPVCenterAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSymmetric(temp0);
      }
    else
      {
      op->vtkPVCenterAxesActor::SetSymmetric(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCenterAxesActor_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCenterAxesActor *op = static_cast<vtkPVCenterAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeNormals(temp0);
      }
    else
      {
      op->vtkPVCenterAxesActor::SetComputeNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVCenterAxesActor_Methods[] = {
  {(char*)"GetClassName", PyvtkPVCenterAxesActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVCenterAxesActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVCenterAxesActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVCenterAxesActor\nC++: vtkPVCenterAxesActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVCenterAxesActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVCenterAxesActor\nC++: vtkPVCenterAxesActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSymmetric", PyvtkPVCenterAxesActor_SetSymmetric, METH_VARARGS,
   (char*)"V.SetSymmetric(int)\nC++: void SetSymmetric(int)\n\nIf Symetric is on, the the axis continue to negative values.\n"},
  {(char*)"SetComputeNormals", PyvtkPVCenterAxesActor_SetComputeNormals, METH_VARARGS,
   (char*)"V.SetComputeNormals(int)\nC++: void SetComputeNormals(int)\n\nOption for computing normals.  By default they are computed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVCenterAxesActor_StaticNew()
{
  return vtkPVCenterAxesActor::New();
}

PyObject *PyVTKClass_vtkPVCenterAxesActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVCenterAxesActor_StaticNew,
    PyvtkPVCenterAxesActor_Methods,
    "vtkPVCenterAxesActor", modulename,
    NULL, NULL,
    PyvtkPVCenterAxesActor_Doc(),
    PyVTKClass_vtkOpenGLActorNew(modulename));
  return cls;
}

const char **PyvtkPVCenterAxesActor_Doc()
{
  static const char *docstring[] = {
    "vtkPVCenterAxesActor\n\n",
    "Superclass: vtkOpenGLActor\n\n",
    "vtkPVCenterAxesActor is an actor for the center-axes used in\nParaView. It merely uses vtkAxes as the poly data source.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVCenterAxesActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVCenterAxesActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVCenterAxesActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

