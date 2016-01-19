// python wrapper for vtkEllipsoidTensorProbeRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEllipsoidTensorProbeRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEllipsoidTensorProbeRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEllipsoidTensorProbeRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTensorProbeRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkTensorProbeRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkTensorProbeRepresentationNew
#endif

static const char **PyvtkEllipsoidTensorProbeRepresentation_Doc();


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEllipsoidTensorProbeRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEllipsoidTensorProbeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEllipsoidTensorProbeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEllipsoidTensorProbeRepresentation::NewInstance());

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
PyvtkEllipsoidTensorProbeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEllipsoidTensorProbeRepresentation *tempr = vtkEllipsoidTensorProbeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkEllipsoidTensorProbeRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkEllipsoidTensorProbeRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_SelectProbe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectProbe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SelectProbe(temp0) :
      op->vtkEllipsoidTensorProbeRepresentation::SelectProbe(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

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
      op->vtkEllipsoidTensorProbeRepresentation::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

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
      op->vtkEllipsoidTensorProbeRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkEllipsoidTensorProbeRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkEllipsoidTensorProbeRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkEllipsoidTensorProbeRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkEllipsoidTensorProbeRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEllipsoidTensorProbeRepresentation\nC++: vtkEllipsoidTensorProbeRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkEllipsoidTensorProbeRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEllipsoidTensorProbeRepresentation\nC++: vtkEllipsoidTensorProbeRepresentation *SafeDownCast(\n    vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"BuildRepresentation", PyvtkEllipsoidTensorProbeRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkEllipsoidTensorProbeRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\n"},
  {(char*)"SelectProbe", PyvtkEllipsoidTensorProbeRepresentation_SelectProbe, METH_VARARGS,
   (char*)"V.SelectProbe([int, int]) -> int\nC++: virtual int SelectProbe(int pos[2])\n\nCan we pick the tensor glyph at the current cursor pos\n"},
  {(char*)"GetActors", PyvtkEllipsoidTensorProbeRepresentation_GetActors, METH_VARARGS,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nSee vtkProp for details.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkEllipsoidTensorProbeRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nSee vtkProp for details.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEllipsoidTensorProbeRepresentation_StaticNew()
{
  return vtkEllipsoidTensorProbeRepresentation::New();
}

PyObject *PyVTKClass_vtkEllipsoidTensorProbeRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEllipsoidTensorProbeRepresentation_StaticNew,
    PyvtkEllipsoidTensorProbeRepresentation_Methods,
    "vtkEllipsoidTensorProbeRepresentation", modulename,
    NULL, NULL,
    PyvtkEllipsoidTensorProbeRepresentation_Doc(),
    PyVTKClass_vtkTensorProbeRepresentationNew(modulename));
  return cls;
}

const char **PyvtkEllipsoidTensorProbeRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkEllipsoidTensorProbeRepresentation - A concrete implementation of\nvtkTensorProbeRepresentation that renders tensors as ellipoids.\n\n",
    "Superclass: vtkTensorProbeRepresentation\n\n",
    "vtkEllipsoidTensorProbeRepresentation is a concrete implementation of\nvtkTensorProbeRepresentation. It renders tensors as ellipsoids.\nLocations between two points when probed have the tensors linearly\ninterpolated from the neighboring locations on the polyline.\n\nSee Also:\n\nvtkTensorProbeWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEllipsoidTensorProbeRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEllipsoidTensorProbeRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEllipsoidTensorProbeRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

