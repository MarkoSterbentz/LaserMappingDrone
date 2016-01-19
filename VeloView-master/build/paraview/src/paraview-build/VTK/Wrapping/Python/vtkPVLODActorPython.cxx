// python wrapper for vtkPVLODActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVLODActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVLODActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVLODActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkActorNew
extern "C" { PyObject *PyVTKClass_vtkActorNew(const char *); }
#define DECLARED_PyVTKClass_vtkActorNew
#endif

static const char **PyvtkPVLODActor_Doc();


static PyObject *
PyvtkPVLODActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVLODActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVLODActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVLODActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVLODActor::NewInstance());

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
PyvtkPVLODActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVLODActor *tempr = vtkPVLODActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODActor_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkMapper *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkMapper"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkPVLODActor::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPVLODActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

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
      op->vtkPVLODActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODActor_SetLODMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

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
      op->vtkPVLODActor::SetLODMapper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODActor_GetLODMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMapper *tempr = (ap.IsBound() ?
      op->GetLODMapper() :
      op->vtkPVLODActor::GetLODMapper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODActor_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMapper *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkPVLODActor::GetMapper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODActor_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Modified();
      }
    else
      {
      op->vtkPVLODActor::Modified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

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
      op->vtkPVLODActor::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODActor_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPVLODActor::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODActor_SetEnableLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

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
      op->vtkPVLODActor::SetEnableLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVLODActor_GetEnableLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableLOD() :
      op->vtkPVLODActor::GetEnableLOD());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVLODActor_Methods[] = {
  {(char*)"GetClassName", PyvtkPVLODActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVLODActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVLODActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVLODActor\nC++: vtkPVLODActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVLODActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVLODActor\nC++: vtkPVLODActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkPVLODActor_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkMapper)\nC++: virtual void Render(vtkRenderer *, vtkMapper *)\n\nThis causes the actor to be rendered. It, in turn, will render\nthe actor's property and then mapper.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkPVLODActor_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport)\n\nThis method is used internally by the rendering process. We\noveride the superclass method to properly set the estimated\nrender time.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkPVLODActor_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"SetLODMapper", PyvtkPVLODActor_SetLODMapper, METH_VARARGS,
   (char*)"V.SetLODMapper(vtkMapper)\nC++: virtual void SetLODMapper(vtkMapper *)\n\nThis sets the low res input.\n"},
  {(char*)"GetLODMapper", PyvtkPVLODActor_GetLODMapper, METH_VARARGS,
   (char*)"V.GetLODMapper() -> vtkMapper\nC++: vtkMapper *GetLODMapper()\n\nThis sets the low res input.\n"},
  {(char*)"GetMapper", PyvtkPVLODActor_GetMapper, METH_VARARGS,
   (char*)"V.GetMapper() -> vtkMapper\nC++: vtkMapper *GetMapper()\n\nThis is a bit of a hack.  This returns the last mapper used to\nrender. It does this so that compositing can descide if anything\nwas actually renderered.\n"},
  {(char*)"Modified", PyvtkPVLODActor_Modified, METH_VARARGS,
   (char*)"V.Modified()\nC++: void Modified()\n\nWhen this objects gets modified, this method also modifies the\nobject.\n"},
  {(char*)"ShallowCopy", PyvtkPVLODActor_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of an LOD actor. Overloads the virtual vtkProp\nmethod.\n"},
  {(char*)"GetBounds", PyvtkPVLODActor_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: double *GetBounds()\n\nGet the bounds of the current mapper.\n"},
  {(char*)"SetEnableLOD", PyvtkPVLODActor_SetEnableLOD, METH_VARARGS,
   (char*)"V.SetEnableLOD(int)\nC++: void SetEnableLOD(int a)\n\nWhen set, LODMapper, if present it used, otherwise the regular\nmapper is used.\n"},
  {(char*)"GetEnableLOD", PyvtkPVLODActor_GetEnableLOD, METH_VARARGS,
   (char*)"V.GetEnableLOD() -> int\nC++: int GetEnableLOD()\n\nWhen set, LODMapper, if present it used, otherwise the regular\nmapper is used.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVLODActor_StaticNew()
{
  return vtkPVLODActor::New();
}

PyObject *PyVTKClass_vtkPVLODActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVLODActor_StaticNew,
    PyvtkPVLODActor_Methods,
    "vtkPVLODActor", modulename,
    NULL, NULL,
    PyvtkPVLODActor_Doc(),
    PyVTKClass_vtkActorNew(modulename));
  return cls;
}

const char **PyvtkPVLODActor_Doc()
{
  static const char *docstring[] = {
    "vtkPVLODActor - an actor that supports multiple levels of detail\n\n",
    "Superclass: vtkActor\n\n",
    "vtkPVLODActor  is a very simple version of vtkLODActor.  Both\nvtkLODActor and vtkLODProp3D can get confused, and substitute LOD\nmappers when they are not needed.  This just has two mappers: full\nres and LOD, and this actor knows which is which.\n\nSee Also:\n\nvtkActor vtkRenderer vtkLODProp3D vtkLODActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVLODActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVLODActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVLODActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

