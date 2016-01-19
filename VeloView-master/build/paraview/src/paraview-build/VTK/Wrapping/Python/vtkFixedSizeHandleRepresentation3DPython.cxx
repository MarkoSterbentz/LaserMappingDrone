// python wrapper for vtkFixedSizeHandleRepresentation3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkFixedSizeHandleRepresentation3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFixedSizeHandleRepresentation3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFixedSizeHandleRepresentation3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolygonalHandleRepresentation3DNew
extern "C" { PyObject *PyVTKClass_vtkPolygonalHandleRepresentation3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolygonalHandleRepresentation3DNew
#endif

static const char **PyvtkFixedSizeHandleRepresentation3D_Doc();


static PyObject *
PyvtkFixedSizeHandleRepresentation3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedSizeHandleRepresentation3D *op = static_cast<vtkFixedSizeHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFixedSizeHandleRepresentation3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedSizeHandleRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedSizeHandleRepresentation3D *op = static_cast<vtkFixedSizeHandleRepresentation3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFixedSizeHandleRepresentation3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedSizeHandleRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedSizeHandleRepresentation3D *op = static_cast<vtkFixedSizeHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFixedSizeHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFixedSizeHandleRepresentation3D::NewInstance());

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
PyvtkFixedSizeHandleRepresentation3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFixedSizeHandleRepresentation3D *tempr = vtkFixedSizeHandleRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedSizeHandleRepresentation3D_GetSphereSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedSizeHandleRepresentation3D *op = static_cast<vtkFixedSizeHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSphereSource *tempr = (ap.IsBound() ?
      op->GetSphereSource() :
      op->vtkFixedSizeHandleRepresentation3D::GetSphereSource());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedSizeHandleRepresentation3D_SetHandleSizeInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleSizeInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedSizeHandleRepresentation3D *op = static_cast<vtkFixedSizeHandleRepresentation3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHandleSizeInPixels(temp0);
      }
    else
      {
      op->vtkFixedSizeHandleRepresentation3D::SetHandleSizeInPixels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedSizeHandleRepresentation3D_GetHandleSizeInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSizeInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedSizeHandleRepresentation3D *op = static_cast<vtkFixedSizeHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHandleSizeInPixels() :
      op->vtkFixedSizeHandleRepresentation3D::GetHandleSizeInPixels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedSizeHandleRepresentation3D_SetHandleSizeToleranceInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleSizeToleranceInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedSizeHandleRepresentation3D *op = static_cast<vtkFixedSizeHandleRepresentation3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHandleSizeToleranceInPixels(temp0);
      }
    else
      {
      op->vtkFixedSizeHandleRepresentation3D::SetHandleSizeToleranceInPixels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedSizeHandleRepresentation3D_GetHandleSizeToleranceInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSizeToleranceInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedSizeHandleRepresentation3D *op = static_cast<vtkFixedSizeHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHandleSizeToleranceInPixels() :
      op->vtkFixedSizeHandleRepresentation3D::GetHandleSizeToleranceInPixels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFixedSizeHandleRepresentation3D_Methods[] = {
  {(char*)"GetClassName", PyvtkFixedSizeHandleRepresentation3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard vtk methods\n"},
  {(char*)"IsA", PyvtkFixedSizeHandleRepresentation3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard vtk methods\n"},
  {(char*)"NewInstance", PyvtkFixedSizeHandleRepresentation3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFixedSizeHandleRepresentation3D\nC++: vtkFixedSizeHandleRepresentation3D *NewInstance()\n\nStandard vtk methods\n"},
  {(char*)"SafeDownCast", PyvtkFixedSizeHandleRepresentation3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFixedSizeHandleRepresentation3D\nC++: vtkFixedSizeHandleRepresentation3D *SafeDownCast(\n    vtkObject* o)\n\nStandard vtk methods\n"},
  {(char*)"GetSphereSource", PyvtkFixedSizeHandleRepresentation3D_GetSphereSource, METH_VARARGS,
   (char*)"V.GetSphereSource() -> vtkSphereSource\nC++: vtkSphereSource *GetSphereSource()\n\nGet the object used to render the spherical handle marker\n"},
  {(char*)"SetHandleSizeInPixels", PyvtkFixedSizeHandleRepresentation3D_SetHandleSizeInPixels, METH_VARARGS,
   (char*)"V.SetHandleSizeInPixels(float)\nC++: void SetHandleSizeInPixels(double a)\n\nSet/Get the required handle size in pixels. Defaults to a width\nof 10 pixels.\n"},
  {(char*)"GetHandleSizeInPixels", PyvtkFixedSizeHandleRepresentation3D_GetHandleSizeInPixels, METH_VARARGS,
   (char*)"V.GetHandleSizeInPixels() -> float\nC++: double GetHandleSizeInPixels()\n\nSet/Get the required handle size in pixels. Defaults to a width\nof 10 pixels.\n"},
  {(char*)"SetHandleSizeToleranceInPixels", PyvtkFixedSizeHandleRepresentation3D_SetHandleSizeToleranceInPixels, METH_VARARGS,
   (char*)"V.SetHandleSizeToleranceInPixels(float)\nC++: void SetHandleSizeToleranceInPixels(double a)\n\nSpecify the acceptable handle size tolerance. During each render,\nthe handle 3D source will be updated to automatically match a\ndisplay size as specified by HandleSizeInPixels. This update will\nbe done if the handle size is larger than a tolerance. Default\nvalue of this tolerance is half a pixel.\n"},
  {(char*)"GetHandleSizeToleranceInPixels", PyvtkFixedSizeHandleRepresentation3D_GetHandleSizeToleranceInPixels, METH_VARARGS,
   (char*)"V.GetHandleSizeToleranceInPixels() -> float\nC++: double GetHandleSizeToleranceInPixels()\n\nSpecify the acceptable handle size tolerance. During each render,\nthe handle 3D source will be updated to automatically match a\ndisplay size as specified by HandleSizeInPixels. This update will\nbe done if the handle size is larger than a tolerance. Default\nvalue of this tolerance is half a pixel.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFixedSizeHandleRepresentation3D_StaticNew()
{
  return vtkFixedSizeHandleRepresentation3D::New();
}

PyObject *PyVTKClass_vtkFixedSizeHandleRepresentation3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFixedSizeHandleRepresentation3D_StaticNew,
    PyvtkFixedSizeHandleRepresentation3D_Methods,
    "vtkFixedSizeHandleRepresentation3D", modulename,
    NULL, NULL,
    PyvtkFixedSizeHandleRepresentation3D_Doc(),
    PyVTKClass_vtkPolygonalHandleRepresentation3DNew(modulename));
  return cls;
}

const char **PyvtkFixedSizeHandleRepresentation3D_Doc()
{
  static const char *docstring[] = {
    "vtkFixedSizeHandleRepresentation - A marker that has the same size in\npixels.\n\n",
    "Superclass: vtkPolygonalHandleRepresentation3D\n\n",
    "This class is a concrete implementation of vtkHandleRepresentation.\nIt is meant to be used as a representation for vtkHandleWidget.\nUnlike the other represenations, this can maintain a constant size in\npixels, regardless of the camera zoom parameters. The size in pixels\nmay be set via SetHandleSizeInPixels. This representation renders the\nmarkers as spherical blobs in 3D space with the width as sp",
    "ecified\nabove, defaults to 10 pixels. The handles will have the same size in\npixels, give or take a certain tolerance, as specified by\nSetHandleSizeToleranceInPixels. The tolerance defaults to half a\npixel. PointPlacers may be used to specify constraints on the\nplacement of markers. For instance a vtkPolygonalSurfacePointPlacer\nwill constrain placement of these spherical handles to a surface\nmesh.",
    "\n\nSee Also:\n\nvtkHandleRepresentation vtkHandleWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFixedSizeHandleRepresentation3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFixedSizeHandleRepresentation3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFixedSizeHandleRepresentation3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

