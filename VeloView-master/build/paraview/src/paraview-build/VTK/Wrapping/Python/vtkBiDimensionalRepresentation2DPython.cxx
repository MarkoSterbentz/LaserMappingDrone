// python wrapper for vtkBiDimensionalRepresentation2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBiDimensionalRepresentation2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBiDimensionalRepresentation2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBiDimensionalRepresentation2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkBiDimensionalRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkBiDimensionalRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkBiDimensionalRepresentationNew
#endif

static const char **PyvtkBiDimensionalRepresentation2D_Doc();


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBiDimensionalRepresentation2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBiDimensionalRepresentation2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBiDimensionalRepresentation2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBiDimensionalRepresentation2D::NewInstance());

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
PyvtkBiDimensionalRepresentation2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBiDimensionalRepresentation2D *tempr = vtkBiDimensionalRepresentation2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetLineProperty() :
      op->vtkBiDimensionalRepresentation2D::GetLineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetSelectedLineProperty() :
      op->vtkBiDimensionalRepresentation2D::GetSelectedLineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkBiDimensionalRepresentation2D::GetTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkBiDimensionalRepresentation2D::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->vtkBiDimensionalRepresentation2D::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_StartWidgetDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->StartWidgetDefinition(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation2D::StartWidgetDefinition(temp0);
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
PyvtkBiDimensionalRepresentation2D_Point2WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Point2WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->Point2WidgetInteraction(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation2D::Point2WidgetInteraction(temp0);
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
PyvtkBiDimensionalRepresentation2D_Point3WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Point3WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->Point3WidgetInteraction(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation2D::Point3WidgetInteraction(temp0);
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
PyvtkBiDimensionalRepresentation2D_StartWidgetManipulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetManipulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->StartWidgetManipulation(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation2D::StartWidgetManipulation(temp0);
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
PyvtkBiDimensionalRepresentation2D_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->vtkBiDimensionalRepresentation2D::WidgetInteraction(temp0);
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
PyvtkBiDimensionalRepresentation2D_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->vtkBiDimensionalRepresentation2D::Highlight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->vtkBiDimensionalRepresentation2D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkBiDimensionalRepresentation2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLabelText() :
      op->vtkBiDimensionalRepresentation2D::GetLabelText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetLabelPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetLabelPosition() :
      op->vtkBiDimensionalRepresentation2D::GetLabelPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkBiDimensionalRepresentation2D_GetLabelPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetLabelPosition(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation2D::GetLabelPosition(temp0);
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
PyvtkBiDimensionalRepresentation2D_GetLabelPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkBiDimensionalRepresentation2D_GetLabelPosition_s1(self, args);
    case 1:
      return PyvtkBiDimensionalRepresentation2D_GetLabelPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetLabelPosition");
  return NULL;
}



static PyObject *
PyvtkBiDimensionalRepresentation2D_GetWorldLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetWorldLabelPosition(temp0);
      }
    else
      {
      op->vtkBiDimensionalRepresentation2D::GetWorldLabelPosition(temp0);
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

static PyMethodDef PyvtkBiDimensionalRepresentation2D_Methods[] = {
  {(char*)"GetClassName", PyvtkBiDimensionalRepresentation2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkBiDimensionalRepresentation2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkBiDimensionalRepresentation2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBiDimensionalRepresentation2D\nC++: vtkBiDimensionalRepresentation2D *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkBiDimensionalRepresentation2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBiDimensionalRepresentation2D\nC++: vtkBiDimensionalRepresentation2D *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"GetLineProperty", PyvtkBiDimensionalRepresentation2D_GetLineProperty, METH_VARARGS,
   (char*)"V.GetLineProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetLineProperty()\n\nRetrieve the property used to control the appearance of the two\northogonal lines.\n"},
  {(char*)"GetSelectedLineProperty", PyvtkBiDimensionalRepresentation2D_GetSelectedLineProperty, METH_VARARGS,
   (char*)"V.GetSelectedLineProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetSelectedLineProperty()\n\nRetrieve the property used to control the appearance of the two\northogonal lines.\n"},
  {(char*)"GetTextProperty", PyvtkBiDimensionalRepresentation2D_GetTextProperty, METH_VARARGS,
   (char*)"V.GetTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\nRetrieve the property used to control the appearance of the text\nlabels.\n"},
  {(char*)"BuildRepresentation", PyvtkBiDimensionalRepresentation2D_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"ComputeInteractionState", PyvtkBiDimensionalRepresentation2D_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"StartWidgetDefinition", PyvtkBiDimensionalRepresentation2D_StartWidgetDefinition, METH_VARARGS,
   (char*)"V.StartWidgetDefinition([float, float])\nC++: virtual void StartWidgetDefinition(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"Point2WidgetInteraction", PyvtkBiDimensionalRepresentation2D_Point2WidgetInteraction, METH_VARARGS,
   (char*)"V.Point2WidgetInteraction([float, float])\nC++: virtual void Point2WidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"Point3WidgetInteraction", PyvtkBiDimensionalRepresentation2D_Point3WidgetInteraction, METH_VARARGS,
   (char*)"V.Point3WidgetInteraction([float, float])\nC++: virtual void Point3WidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"StartWidgetManipulation", PyvtkBiDimensionalRepresentation2D_StartWidgetManipulation, METH_VARARGS,
   (char*)"V.StartWidgetManipulation([float, float])\nC++: virtual void StartWidgetManipulation(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"WidgetInteraction", PyvtkBiDimensionalRepresentation2D_WidgetInteraction, METH_VARARGS,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"Highlight", PyvtkBiDimensionalRepresentation2D_Highlight, METH_VARARGS,
   (char*)"V.Highlight(int)\nC++: virtual void Highlight(int highlightOn)\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkBiDimensionalRepresentation2D_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *w)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderOverlay", PyvtkBiDimensionalRepresentation2D_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"GetLabelText", PyvtkBiDimensionalRepresentation2D_GetLabelText, METH_VARARGS,
   (char*)"V.GetLabelText() -> string\nC++: char *GetLabelText()\n\nGet the text shown in the widget's label.\n"},
  {(char*)"GetLabelPosition", PyvtkBiDimensionalRepresentation2D_GetLabelPosition, METH_VARARGS,
   (char*)"V.GetLabelPosition() -> (float, ...)\nC++: double *GetLabelPosition()\nV.GetLabelPosition([float, float, float])\nC++: void GetLabelPosition(double pos[3])\n\nGet the position of the widget's label in display coordinates.\n"},
  {(char*)"GetWorldLabelPosition", PyvtkBiDimensionalRepresentation2D_GetWorldLabelPosition, METH_VARARGS,
   (char*)"V.GetWorldLabelPosition([float, float, float])\nC++: void GetWorldLabelPosition(double pos[3])\n\nGet the position of the widget's label in display coordinates.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBiDimensionalRepresentation2D_StaticNew()
{
  return vtkBiDimensionalRepresentation2D::New();
}

PyObject *PyVTKClass_vtkBiDimensionalRepresentation2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBiDimensionalRepresentation2D_StaticNew,
    PyvtkBiDimensionalRepresentation2D_Methods,
    "vtkBiDimensionalRepresentation2D", modulename,
    NULL, NULL,
    PyvtkBiDimensionalRepresentation2D_Doc(),
    PyVTKClass_vtkBiDimensionalRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 10; c++)
      {
      static const struct { const char *name; int value; }
        constants[10] = {
          { "Outside", vtkBiDimensionalRepresentation2D::Outside },
          { "NearP1", vtkBiDimensionalRepresentation2D::NearP1 },
          { "NearP2", vtkBiDimensionalRepresentation2D::NearP2 },
          { "NearP3", vtkBiDimensionalRepresentation2D::NearP3 },
          { "NearP4", vtkBiDimensionalRepresentation2D::NearP4 },
          { "OnL1Inner", vtkBiDimensionalRepresentation2D::OnL1Inner },
          { "OnL1Outer", vtkBiDimensionalRepresentation2D::OnL1Outer },
          { "OnL2Inner", vtkBiDimensionalRepresentation2D::OnL2Inner },
          { "OnL2Outer", vtkBiDimensionalRepresentation2D::OnL2Outer },
          { "OnCenter", vtkBiDimensionalRepresentation2D::OnCenter },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkBiDimensionalRepresentation2D_Doc()
{
  static const char *docstring[] = {
    "vtkBiDimensionalRepresentation2D - represent the\nvtkBiDimensionalWidget\n\n",
    "Superclass: vtkBiDimensionalRepresentation\n\n",
    "The vtkBiDimensionalRepresentation2D is used to represent the\nbi-dimensional measure in a 2D (overlay) context. This representation\nconsists of two perpendicular lines defined by four\nvtkHandleRepresentations. The four handles can be independently\nmanipulated consistent with the orthogonal constraint on the lines.\n(Note: the four points are referred to as Point1, Point2, Point3 and\nPoint4. Point1 ",
    "and Point2 define the first line; and Point3 and\nPoint4 define the second orthogonal line.)\n\nTo create this widget, you click to place the first two points. The\nthird point is mirrored with the fourth point; when you place the\nthird point (which is orthogonal to the lined defined by the first\ntwo points), the fourth point is dropped as well. After definition,\nthe four points can be moved (in const",
    "rained fashion, preserving\northogonality). Further, the entire widget can be translated by\ngrabbing the center point of the widget; each line can be moved along\nthe other line; and the entire widget can be rotated around its\ncenter point.\n\nSee Also:\n\nvtkAngleWidget vtkHandleRepresentation vtkBiDimensionalRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBiDimensionalRepresentation2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBiDimensionalRepresentation2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBiDimensionalRepresentation2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

