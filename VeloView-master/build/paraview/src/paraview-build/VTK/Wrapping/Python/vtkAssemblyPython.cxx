// python wrapper for vtkAssembly
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAssembly.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAssembly(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAssemblyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkProp3DNew
extern "C" { PyObject *PyVTKClass_vtkProp3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkProp3DNew
#endif

static const char **PyvtkAssembly_Doc();


static PyObject *
PyvtkAssembly_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAssembly::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAssembly::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAssembly *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAssembly::NewInstance());

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
PyvtkAssembly_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAssembly *tempr = vtkAssembly::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_AddPart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  vtkProp3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
    {
    if (ap.IsBound())
      {
      op->AddPart(temp0);
      }
    else
      {
      op->vtkAssembly::AddPart(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_RemovePart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  vtkProp3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
    {
    if (ap.IsBound())
      {
      op->RemovePart(temp0);
      }
    else
      {
      op->vtkAssembly::RemovePart(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_GetParts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProp3DCollection *tempr = (ap.IsBound() ?
      op->GetParts() :
      op->vtkAssembly::GetParts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors(temp0);
      }
    else
      {
      op->vtkAssembly::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_GetVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetVolumes(temp0);
      }
    else
      {
      op->vtkAssembly::GetVolumes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkAssembly::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkAssembly::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkAssembly::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkAssembly::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

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
      op->vtkAssembly::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_InitPathTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPathTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitPathTraversal();
      }
    else
      {
      op->vtkAssembly::InitPathTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_GetNextPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->GetNextPath() :
      op->vtkAssembly::GetNextPath());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_GetNumberOfPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPaths() :
      op->vtkAssembly::GetNumberOfPaths());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkAssembly::GetBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAssembly_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAssembly::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAssembly_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAssembly_GetBounds_s1(self, args);
    case 0:
      return PyvtkAssembly_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkAssembly_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAssembly::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

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
      op->vtkAssembly::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssembly_BuildPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssembly *op = static_cast<vtkAssembly *>(vp);

  vtkAssemblyPaths *temp0 = NULL;
  vtkAssemblyPath *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPaths") &&
      ap.GetVTKObject(temp1, "vtkAssemblyPath"))
    {
    if (ap.IsBound())
      {
      op->BuildPaths(temp0, temp1);
      }
    else
      {
      op->vtkAssembly::BuildPaths(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAssembly_Methods[] = {
  {(char*)"GetClassName", PyvtkAssembly_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAssembly_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAssembly_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAssembly\nC++: vtkAssembly *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAssembly_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAssembly\nC++: vtkAssembly *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddPart", PyvtkAssembly_AddPart, METH_VARARGS,
   (char*)"V.AddPart(vtkProp3D)\nC++: void AddPart(vtkProp3D *)\n\nAdd a part to the list of parts.\n"},
  {(char*)"RemovePart", PyvtkAssembly_RemovePart, METH_VARARGS,
   (char*)"V.RemovePart(vtkProp3D)\nC++: void RemovePart(vtkProp3D *)\n\nRemove a part from the list of parts,\n"},
  {(char*)"GetParts", PyvtkAssembly_GetParts, METH_VARARGS,
   (char*)"V.GetParts() -> vtkProp3DCollection\nC++: vtkProp3DCollection *GetParts()\n\nReturn the parts (direct descendants) of this assembly.\n"},
  {(char*)"GetActors", PyvtkAssembly_GetActors, METH_VARARGS,
   (char*)"V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *)\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {(char*)"GetVolumes", PyvtkAssembly_GetVolumes, METH_VARARGS,
   (char*)"V.GetVolumes(vtkPropCollection)\nC++: void GetVolumes(vtkPropCollection *)\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkAssembly_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *ren)\n\nRender this assembly and all its parts. The rendering process is\nrecursive. Note that a mapper need not be defined. If not\ndefined, then no geometry will be drawn for this assembly. This\nallows you to create \"logical\" assemblies; that is, assemblies\nthat only serve to group and transform its parts.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkAssembly_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *ren)\n\nRender this assembly and all its parts. The rendering process is\nrecursive. Note that a mapper need not be defined. If not\ndefined, then no geometry will be drawn for this assembly. This\nallows you to create \"logical\" assemblies; that is, assemblies\nthat only serve to group and transform its parts.\n"},
  {(char*)"RenderVolumetricGeometry", PyvtkAssembly_RenderVolumetricGeometry, METH_VARARGS,
   (char*)"V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: virtual int RenderVolumetricGeometry(vtkViewport *ren)\n\nRender this assembly and all its parts. The rendering process is\nrecursive. Note that a mapper need not be defined. If not\ndefined, then no geometry will be drawn for this assembly. This\nallows you to create \"logical\" assemblies; that is, assemblies\nthat only serve to group and transform its parts.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkAssembly_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAssembly_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"InitPathTraversal", PyvtkAssembly_InitPathTraversal, METH_VARARGS,
   (char*)"V.InitPathTraversal()\nC++: void InitPathTraversal()\n\nMethods to traverse the parts of an assembly. Each part (starting\nfrom the root) will appear properly transformed and with the\ncorrect properties (depending upon the ApplyProperty and\nApplyTransform ivars). Note that the part appears as an instance\nof vtkProp. These methods should be contrasted to those that\ntraverse the list of parts using GetParts().  GetParts() returns\na list of children of this assembly, not necessarily with the\ncorrect transformation or properties. To use the methods below -\nfirst invoke InitPathTraversal() followed by repeated calls to\nGetNextPath().  GetNextPath() returns a NULL pointer when the\nlist is exhausted.\n"},
  {(char*)"GetNextPath", PyvtkAssembly_GetNextPath, METH_VARARGS,
   (char*)"V.GetNextPath() -> vtkAssemblyPath\nC++: vtkAssemblyPath *GetNextPath()\n\nMethods to traverse the parts of an assembly. Each part (starting\nfrom the root) will appear properly transformed and with the\ncorrect properties (depending upon the ApplyProperty and\nApplyTransform ivars). Note that the part appears as an instance\nof vtkProp. These methods should be contrasted to those that\ntraverse the list of parts using GetParts().  GetParts() returns\na list of children of this assembly, not necessarily with the\ncorrect transformation or properties. To use the methods below -\nfirst invoke InitPathTraversal() followed by repeated calls to\nGetNextPath().  GetNextPath() returns a NULL pointer when the\nlist is exhausted.\n"},
  {(char*)"GetNumberOfPaths", PyvtkAssembly_GetNumberOfPaths, METH_VARARGS,
   (char*)"V.GetNumberOfPaths() -> int\nC++: int GetNumberOfPaths()\n\nMethods to traverse the parts of an assembly. Each part (starting\nfrom the root) will appear properly transformed and with the\ncorrect properties (depending upon the ApplyProperty and\nApplyTransform ivars). Note that the part appears as an instance\nof vtkProp. These methods should be contrasted to those that\ntraverse the list of parts using GetParts().  GetParts() returns\na list of children of this assembly, not necessarily with the\ncorrect transformation or properties. To use the methods below -\nfirst invoke InitPathTraversal() followed by repeated calls to\nGetNextPath().  GetNextPath() returns a NULL pointer when the\nlist is exhausted.\n"},
  {(char*)"GetBounds", PyvtkAssembly_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\nV.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\nGet the bounds for the assembly as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {(char*)"GetMTime", PyvtkAssembly_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nOverride default GetMTime method to also consider all of the\nassembly's parts.\n"},
  {(char*)"ShallowCopy", PyvtkAssembly_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of an assembly. Overloads the virtual vtkProp\nmethod.\n"},
  {(char*)"BuildPaths", PyvtkAssembly_BuildPaths, METH_VARARGS,
   (char*)"V.BuildPaths(vtkAssemblyPaths, vtkAssemblyPath)\nC++: void BuildPaths(vtkAssemblyPaths *paths,\n    vtkAssemblyPath *path)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Overload the\nsuperclass' vtkProp BuildPaths() method. Paths consist of an\nordered sequence of actors, with transformations properly\nconcatenated.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAssembly_StaticNew()
{
  return vtkAssembly::New();
}

PyObject *PyVTKClass_vtkAssemblyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAssembly_StaticNew,
    PyvtkAssembly_Methods,
    "vtkAssembly", modulename,
    NULL, NULL,
    PyvtkAssembly_Doc(),
    PyVTKClass_vtkProp3DNew(modulename));
  return cls;
}

const char **PyvtkAssembly_Doc()
{
  static const char *docstring[] = {
    "vtkAssembly - create hierarchies of vtkProp3Ds (transformable props)\n\n",
    "Superclass: vtkProp3D\n\n",
    "vtkAssembly is an object that groups vtkProp3Ds, its subclasses, and\nother assemblies into a tree-like hierarchy. The vtkProp3Ds and\nassemblies can then be transformed together by transforming just the\nroot assembly of the hierarchy.\n\nA vtkAssembly object can be used in place of an vtkProp3D since it is\na subclass of vtkProp3D. The difference is that vtkAssembly maintains\na list of vtkProp3D insta",
    "nces (its \"parts\") that form the assembly.\nThen, any operation that transforms (i.e., scales, rotates,\ntranslates) the parent assembly will transform all its parts.  Note\nthat this process is recursive: you can create groups consisting of\nassemblies and/or vtkProp3Ds to arbitrary depth.\n\nTo add an assembly to the renderer's list of props, you only need to\nadd the root of the assembly. During rende",
    "ring, the parts of the\nassembly are rendered during a hierarchical traversal process.\n\nCaveats:\n\nCollections of assemblies are slower to render than an equivalent\nlist of actors. This is because to support arbitrary nesting of\nassemblies, the state of the assemblies (i.e., transformation\nmatrices) must be propagated through the assembly hierarchy.\n\nAssemblies can consist of hierarchies of assembli",
    "es, where one actor\nor assembly used in one hierarchy is also used in other hierarchies.\nHowever, make that there are no cycles (e.g., parent->child->parent),\nthis will cause program failure.\n\nIf you wish to create assemblies without any transformation (using\nthe assembly strictly as a grouping mechanism), then you may wish to\nconsider using vtkPropAssembly.\n\nSee Also:\n\nvtkActor vtkTransform vtkMa",
    "pper vtkPolyDataMapper vtkPropAssembly\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAssembly(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAssemblyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAssembly", o) != 0)
    {
    Py_DECREF(o);
    }

}

