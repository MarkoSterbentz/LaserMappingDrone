// python wrapper for vtkResliceCursorLineRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkResliceCursorLineRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkResliceCursorLineRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkResliceCursorLineRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkResliceCursorRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkResliceCursorRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkResliceCursorRepresentationNew
#endif

static const char **PyvtkResliceCursorLineRepresentation_Doc();


static PyObject *
PyvtkResliceCursorLineRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkResliceCursorLineRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorLineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursorLineRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorLineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceCursorLineRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursorLineRepresentation::NewInstance());

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
PyvtkResliceCursorLineRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkResliceCursorLineRepresentation *tempr = vtkResliceCursorLineRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorLineRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkResliceCursorLineRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorLineRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkResliceCursorLineRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorLineRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->StartWidgetInteraction(temp0);
      }
    else
      {
      op->vtkResliceCursorLineRepresentation::StartWidgetInteraction(temp0);
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
PyvtkResliceCursorLineRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->WidgetInteraction(temp0);
      }
    else
      {
      op->vtkResliceCursorLineRepresentation::WidgetInteraction(temp0);
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
PyvtkResliceCursorLineRepresentation_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Highlight(temp0);
      }
    else
      {
      op->vtkResliceCursorLineRepresentation::Highlight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorLineRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

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
      op->vtkResliceCursorLineRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorLineRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkResliceCursorLineRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorLineRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkResliceCursorLineRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorLineRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkResliceCursorLineRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorLineRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkResliceCursorLineRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorLineRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkResliceCursorLineRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorLineRepresentation_GetResliceCursorActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceCursorActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceCursorActor *tempr = (ap.IsBound() ?
      op->GetResliceCursorActor() :
      op->vtkResliceCursorLineRepresentation::GetResliceCursorActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorLineRepresentation_GetResliceCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceCursor *tempr = (ap.IsBound() ?
      op->GetResliceCursor() :
      op->vtkResliceCursorLineRepresentation::GetResliceCursor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorLineRepresentation_SetUserMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorLineRepresentation *op = static_cast<vtkResliceCursorLineRepresentation *>(vp);

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
      op->vtkResliceCursorLineRepresentation::SetUserMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkResliceCursorLineRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkResliceCursorLineRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkResliceCursorLineRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkResliceCursorLineRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkResliceCursorLineRepresentation\nC++: vtkResliceCursorLineRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkResliceCursorLineRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkResliceCursorLineRepresentation\nC++: vtkResliceCursorLineRepresentation *SafeDownCast(\n    vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"BuildRepresentation", PyvtkResliceCursorLineRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"ComputeInteractionState", PyvtkResliceCursorLineRepresentation_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"StartWidgetInteraction", PyvtkResliceCursorLineRepresentation_StartWidgetInteraction, METH_VARARGS,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double startEventPos[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"WidgetInteraction", PyvtkResliceCursorLineRepresentation_WidgetInteraction, METH_VARARGS,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"Highlight", PyvtkResliceCursorLineRepresentation_Highlight, METH_VARARGS,
   (char*)"V.Highlight(int)\nC++: virtual void Highlight(int highlightOn)\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkResliceCursorLineRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *w)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderOverlay", PyvtkResliceCursorLineRepresentation_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkResliceCursorLineRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkResliceCursorLineRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkResliceCursorLineRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"GetBounds", PyvtkResliceCursorLineRepresentation_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\n\nGet the bounds of this prop. This simply returns the bounds of\nthe reslice cursor object.\n"},
  {(char*)"GetResliceCursorActor", PyvtkResliceCursorLineRepresentation_GetResliceCursorActor, METH_VARARGS,
   (char*)"V.GetResliceCursorActor() -> vtkResliceCursorActor\nC++: vtkResliceCursorActor *GetResliceCursorActor()\n\nGet the reslice cursor actor. You must set the reslice cursor on\nthis class\n"},
  {(char*)"GetResliceCursor", PyvtkResliceCursorLineRepresentation_GetResliceCursor, METH_VARARGS,
   (char*)"V.GetResliceCursor() -> vtkResliceCursor\nC++: virtual vtkResliceCursor *GetResliceCursor()\n\nGet the reslice cursor.\n"},
  {(char*)"SetUserMatrix", PyvtkResliceCursorLineRepresentation_SetUserMatrix, METH_VARARGS,
   (char*)"V.SetUserMatrix(vtkMatrix4x4)\nC++: virtual void SetUserMatrix(vtkMatrix4x4 *matrix)\n\nSet the user matrix on all the internal actors.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkResliceCursorLineRepresentation_StaticNew()
{
  return vtkResliceCursorLineRepresentation::New();
}

PyObject *PyVTKClass_vtkResliceCursorLineRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkResliceCursorLineRepresentation_StaticNew,
    PyvtkResliceCursorLineRepresentation_Methods,
    "vtkResliceCursorLineRepresentation", modulename,
    NULL, NULL,
    PyvtkResliceCursorLineRepresentation_Doc(),
    PyVTKClass_vtkResliceCursorRepresentationNew(modulename));
  return cls;
}

const char **PyvtkResliceCursorLineRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkResliceCursorLineRepresentation - represent the\nvtkResliceCursorWidget\n\n",
    "Superclass: vtkResliceCursorRepresentation\n\n",
    "This class provides a representation for the reslice cursor widget.\nIt consists of two cross sectional hairs, with an optional thickness.\nThe hairs may have a hole in the center. These may be translated or\nrotated independent of each other in the view. The result is used to\nreslice the data along these cross sections. This allows the user to\nperform multi-planar thin or thick reformat of the data ",
    "on an image\nview, rather than a 3D view.\n\nSee Also:\n\nvtkResliceCursorWidget vtkResliceCursor\nvtkResliceCursorPolyDataAlgorithm vtkResliceCursorRepresentation\nvtkResliceCursorThickLineRepresentation vtkResliceCursorActor\nvtkImagePlaneWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkResliceCursorLineRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkResliceCursorLineRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkResliceCursorLineRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

