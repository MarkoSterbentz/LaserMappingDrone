// python wrapper for vtkPVLODVolume
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVLODVolume.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVLODVolume(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVLODVolumeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkVolumeNew
extern "C" { PyObject *PyVTKClass_vtkVolumeNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeNew
#endif

static const char **PyvtkPVLODVolume_Doc();


static PyObject *
PyvtkPVLODVolume_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVLODVolume::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODVolume_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVLODVolume::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODVolume_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVLODVolume *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVLODVolume::NewInstance());

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
PyvtkPVLODVolume_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVLODVolume *tempr = vtkPVLODVolume::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODVolume_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPVLODVolume::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODVolume_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkPVLODVolume::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODVolume_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkPVLODVolume::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODVolume_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkPVLODVolume::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODVolume_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

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
      op->vtkPVLODVolume::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODVolume_SetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  vtkAbstractVolumeMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractVolumeMapper"))
    {
    if (ap.IsBound())
      {
      op->SetMapper(temp0);
      }
    else
      {
      op->vtkPVLODVolume::SetMapper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODVolume_SetLODMapper_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  vtkAbstractVolumeMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractVolumeMapper"))
    {
    if (ap.IsBound())
      {
      op->SetLODMapper(temp0);
      }
    else
      {
      op->vtkPVLODVolume::SetLODMapper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVLODVolume_SetLODMapper_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  vtkMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMapper"))
    {
    if (ap.IsBound())
      {
      op->SetLODMapper(temp0);
      }
    else
      {
      op->vtkPVLODVolume::SetLODMapper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVLODVolume_SetLODMapper_Methods[] = {
  {NULL, PyvtkPVLODVolume_SetLODMapper_s1, METH_VARARGS,
   (char*)"@O *vtkAbstractVolumeMapper"},
  {NULL, PyvtkPVLODVolume_SetLODMapper_s2, METH_VARARGS,
   (char*)"@O *vtkMapper"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVLODVolume_SetLODMapper(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVLODVolume_SetLODMapper_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLODMapper");
  return NULL;
}



static PyObject *
PyvtkPVLODVolume_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  vtkVolumeProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeProperty"))
    {
    if (ap.IsBound())
      {
      op->SetProperty(temp0);
      }
    else
      {
      op->vtkPVLODVolume::SetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODVolume_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkPVLODVolume::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODVolume_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPVLODVolume::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODVolume_SetAllocatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllocatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  double temp0;
  vtkViewport *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->SetAllocatedRenderTime(temp0, temp1);
      }
    else
      {
      op->vtkPVLODVolume::SetAllocatedRenderTime(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODVolume_SetEnableLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableLOD(temp0);
      }
    else
      {
      op->vtkPVLODVolume::SetEnableLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODVolume_GetEnableLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableLOD() :
      op->vtkPVLODVolume::GetEnableLOD());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVLODVolume_Methods[] = {
  {(char*)"GetClassName", PyvtkPVLODVolume_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVLODVolume_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVLODVolume_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVLODVolume\nC++: vtkPVLODVolume *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVLODVolume_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVLODVolume\nC++: vtkPVLODVolume *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkPVLODVolume_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nThis method is used internally by the rendering process.\n"},
  {(char*)"RenderVolumetricGeometry", PyvtkPVLODVolume_RenderVolumetricGeometry, METH_VARARGS,
   (char*)"V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: virtual int RenderVolumetricGeometry(vtkViewport *viewport)\n\nThis method is used internally by the rendering process.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkPVLODVolume_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nThis method is used internally by the rendering process.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkPVLODVolume_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkPVLODVolume_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"SetMapper", PyvtkPVLODVolume_SetMapper, METH_VARARGS,
   (char*)"V.SetMapper(vtkAbstractVolumeMapper)\nC++: virtual void SetMapper(vtkAbstractVolumeMapper *)\n\nSet the high res input.  Overloads the virtual vtkVolume method.\n"},
  {(char*)"SetLODMapper", PyvtkPVLODVolume_SetLODMapper, METH_VARARGS,
   (char*)"V.SetLODMapper(vtkAbstractVolumeMapper)\nC++: virtual void SetLODMapper(vtkAbstractVolumeMapper *)\nV.SetLODMapper(vtkMapper)\nC++: virtual void SetLODMapper(vtkMapper *)\n\nThis sets the low res input.\n"},
  {(char*)"SetProperty", PyvtkPVLODVolume_SetProperty, METH_VARARGS,
   (char*)"V.SetProperty(vtkVolumeProperty)\nC++: virtual void SetProperty(vtkVolumeProperty *property)\n\nSets the volume propery.  Overloads the virtual vtkVolume method.\n"},
  {(char*)"ShallowCopy", PyvtkPVLODVolume_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nShallow copy of an LOD actor. Overloads the virtual vtkProp\nmethod.\n"},
  {(char*)"GetBounds", PyvtkPVLODVolume_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\n\nGet the bounds of the current mapper.\n"},
  {(char*)"SetAllocatedRenderTime", PyvtkPVLODVolume_SetAllocatedRenderTime, METH_VARARGS,
   (char*)"V.SetAllocatedRenderTime(float, vtkViewport)\nC++: virtual void SetAllocatedRenderTime(double t, vtkViewport *v)\n\nOverloads the virtual vtkProp method.\n"},
  {(char*)"SetEnableLOD", PyvtkPVLODVolume_SetEnableLOD, METH_VARARGS,
   (char*)"V.SetEnableLOD(int)\nC++: void SetEnableLOD(int a)\n\nWhen set, LODMapper, if present it used, otherwise the regular\nmapper is used.\n"},
  {(char*)"GetEnableLOD", PyvtkPVLODVolume_GetEnableLOD, METH_VARARGS,
   (char*)"V.GetEnableLOD() -> int\nC++: int GetEnableLOD()\n\nWhen set, LODMapper, if present it used, otherwise the regular\nmapper is used.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVLODVolume_StaticNew()
{
  return vtkPVLODVolume::New();
}

PyObject *PyVTKClass_vtkPVLODVolumeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVLODVolume_StaticNew,
    PyvtkPVLODVolume_Methods,
    "vtkPVLODVolume", modulename,
    NULL, NULL,
    PyvtkPVLODVolume_Doc(),
    PyVTKClass_vtkVolumeNew(modulename));
  return cls;
}

const char **PyvtkPVLODVolume_Doc()
{
  static const char *docstring[] = {
    "vtkPVLODVolume - an actor that supports multiple levels of detail\n\n",
    "Superclass: vtkVolume\n\n",
    "vtkPVLODVolume is much like vtkPVLODActor except that it works on\nvolumes instead of surfaces.  This just has two mappers: full res and\nLOD, and this actor knows which is which.\n\nSee Also:\n\nvtkActor vtkRenderer vtkLODProp3D vtkLODActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVLODVolume(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVLODVolumeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVLODVolume", o) != 0)
    {
    Py_DECREF(o);
    }

}

