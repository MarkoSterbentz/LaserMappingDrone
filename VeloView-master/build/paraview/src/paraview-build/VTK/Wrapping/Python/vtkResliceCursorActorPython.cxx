// python wrapper for vtkResliceCursorActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkResliceCursorActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkResliceCursorActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkResliceCursorActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkProp3DNew
extern "C" { PyObject *PyVTKClass_vtkProp3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkProp3DNew
#endif

static const char **PyvtkResliceCursorActor_Doc();


static PyObject *
PyvtkResliceCursorActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkResliceCursorActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursorActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceCursorActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursorActor::NewInstance());

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
PyvtkResliceCursorActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkResliceCursorActor *tempr = vtkResliceCursorActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_GetCursorAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceCursorPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->GetCursorAlgorithm() :
      op->vtkResliceCursorActor::GetCursorAlgorithm());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkResliceCursorActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkResliceCursorActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkResliceCursorActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkResliceCursorActor::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkResliceCursorActor::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_GetCenterlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetCenterlineProperty(temp0) :
      op->vtkResliceCursorActor::GetCenterlineProperty(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_GetThickSlabProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickSlabProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetThickSlabProperty(temp0) :
      op->vtkResliceCursorActor::GetThickSlabProperty(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_GetCenterlineActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterlineActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetCenterlineActor(temp0) :
      op->vtkResliceCursorActor::GetCenterlineActor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_SetUserMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetUserMatrix(temp0);
      }
    else
      {
      op->vtkResliceCursorActor::SetUserMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkResliceCursorActor_Methods[] = {
  {(char*)"GetClassName", PyvtkResliceCursorActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods\n"},
  {(char*)"IsA", PyvtkResliceCursorActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods\n"},
  {(char*)"NewInstance", PyvtkResliceCursorActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkResliceCursorActor\nC++: vtkResliceCursorActor *NewInstance()\n\nStandard VTK methods\n"},
  {(char*)"SafeDownCast", PyvtkResliceCursorActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkResliceCursorActor\nC++: vtkResliceCursorActor *SafeDownCast(vtkObject* o)\n\nStandard VTK methods\n"},
  {(char*)"GetCursorAlgorithm", PyvtkResliceCursorActor_GetCursorAlgorithm, METH_VARARGS,
   (char*)"V.GetCursorAlgorithm() -> vtkResliceCursorPolyDataAlgorithm\nC++: vtkResliceCursorPolyDataAlgorithm *GetCursorAlgorithm()\n\nGet the cursor algorithm. The cursor must be set on the algorithm\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkResliceCursorActor_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkResliceCursorActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry? No.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkResliceCursorActor_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetBounds", PyvtkResliceCursorActor_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: double *GetBounds()\n\nGet the bounds for this Actor as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {(char*)"GetMTime", PyvtkResliceCursorActor_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nGet the actors mtime plus consider its algorithm.\n"},
  {(char*)"GetCenterlineProperty", PyvtkResliceCursorActor_GetCenterlineProperty, METH_VARARGS,
   (char*)"V.GetCenterlineProperty(int) -> vtkProperty\nC++: vtkProperty *GetCenterlineProperty(int i)\n\nGet property of the internal actor.\n"},
  {(char*)"GetThickSlabProperty", PyvtkResliceCursorActor_GetThickSlabProperty, METH_VARARGS,
   (char*)"V.GetThickSlabProperty(int) -> vtkProperty\nC++: vtkProperty *GetThickSlabProperty(int i)\n\nGet property of the internal actor.\n"},
  {(char*)"GetCenterlineActor", PyvtkResliceCursorActor_GetCenterlineActor, METH_VARARGS,
   (char*)"V.GetCenterlineActor(int) -> vtkActor\nC++: vtkActor *GetCenterlineActor(int axis)\n\nGet the centerline actor along a particular axis\n"},
  {(char*)"SetUserMatrix", PyvtkResliceCursorActor_SetUserMatrix, METH_VARARGS,
   (char*)"V.SetUserMatrix(vtkMatrix4x4)\nC++: virtual void SetUserMatrix(vtkMatrix4x4 *matrix)\n\nSet the user matrix on all the internal actors.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkResliceCursorActor_StaticNew()
{
  return vtkResliceCursorActor::New();
}

PyObject *PyVTKClass_vtkResliceCursorActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkResliceCursorActor_StaticNew,
    PyvtkResliceCursorActor_Methods,
    "vtkResliceCursorActor", modulename,
    NULL, NULL,
    PyvtkResliceCursorActor_Doc(),
    PyVTKClass_vtkProp3DNew(modulename));
  return cls;
}

const char **PyvtkResliceCursorActor_Doc()
{
  static const char *docstring[] = {
    "vtkResliceCursorActor - Represent a reslice cursor\n\n",
    "Superclass: vtkProp3D\n\n",
    "A reslice cursor consists of a pair of lines (cross hairs), thin or\nthick, that may be interactively manipulated for thin/thick reformats\nthrough the data.\n\nSee Also:\n\nvtkResliceCursor vtkResliceCursorPolyDataAlgorithm\nvtkResliceCursorWidget vtkResliceCursorRepresentation\nvtkResliceCursorLineRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkResliceCursorActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkResliceCursorActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkResliceCursorActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

