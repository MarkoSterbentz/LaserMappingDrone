// python wrapper for vtkDistanceRepresentation2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDistanceRepresentation2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDistanceRepresentation2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDistanceRepresentation2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDistanceRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkDistanceRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkDistanceRepresentationNew
#endif

static const char **PyvtkDistanceRepresentation2D_Doc();


static PyObject *
PyvtkDistanceRepresentation2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDistanceRepresentation2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDistanceRepresentation2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDistanceRepresentation2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDistanceRepresentation2D::NewInstance());

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
PyvtkDistanceRepresentation2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDistanceRepresentation2D *tempr = vtkDistanceRepresentation2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation2D_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistance() :
      op->vtkDistanceRepresentation2D::GetDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation2D_GetPoint1WorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1WorldPosition() :
      op->vtkDistanceRepresentation2D::GetPoint1WorldPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDistanceRepresentation2D_GetPoint1WorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

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
      op->GetPoint1WorldPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation2D::GetPoint1WorldPosition(temp0);
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
PyvtkDistanceRepresentation2D_GetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDistanceRepresentation2D_GetPoint1WorldPosition_s1(self, args);
    case 1:
      return PyvtkDistanceRepresentation2D_GetPoint1WorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1WorldPosition");
  return NULL;
}



static PyObject *
PyvtkDistanceRepresentation2D_GetPoint2WorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2WorldPosition() :
      op->vtkDistanceRepresentation2D::GetPoint2WorldPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDistanceRepresentation2D_GetPoint2WorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

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
      op->GetPoint2WorldPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation2D::GetPoint2WorldPosition(temp0);
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
PyvtkDistanceRepresentation2D_GetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDistanceRepresentation2D_GetPoint2WorldPosition_s1(self, args);
    case 1:
      return PyvtkDistanceRepresentation2D_GetPoint2WorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2WorldPosition");
  return NULL;
}



static PyObject *
PyvtkDistanceRepresentation2D_SetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

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
      op->SetPoint1WorldPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation2D::SetPoint1WorldPosition(temp0);
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
PyvtkDistanceRepresentation2D_SetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

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
      op->SetPoint2WorldPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation2D::SetPoint2WorldPosition(temp0);
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
PyvtkDistanceRepresentation2D_SetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

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
      op->SetPoint1DisplayPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation2D::SetPoint1DisplayPosition(temp0);
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
PyvtkDistanceRepresentation2D_SetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

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
      op->SetPoint2DisplayPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation2D::SetPoint2DisplayPosition(temp0);
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
PyvtkDistanceRepresentation2D_GetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

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
      op->GetPoint1DisplayPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation2D::GetPoint1DisplayPosition(temp0);
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
PyvtkDistanceRepresentation2D_GetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

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
      op->GetPoint2DisplayPosition(temp0);
      }
    else
      {
      op->vtkDistanceRepresentation2D::GetPoint2DisplayPosition(temp0);
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
PyvtkDistanceRepresentation2D_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkDistanceRepresentation2D::GetAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation2D_GetAxisProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetAxisProperty() :
      op->vtkDistanceRepresentation2D::GetAxisProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation2D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkDistanceRepresentation2D::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

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
      op->vtkDistanceRepresentation2D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkDistanceRepresentation2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation2D *op = static_cast<vtkDistanceRepresentation2D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkDistanceRepresentation2D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDistanceRepresentation2D_Methods[] = {
  {(char*)"GetClassName", PyvtkDistanceRepresentation2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkDistanceRepresentation2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkDistanceRepresentation2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDistanceRepresentation2D\nC++: vtkDistanceRepresentation2D *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkDistanceRepresentation2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDistanceRepresentation2D\nC++: vtkDistanceRepresentation2D *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"GetDistance", PyvtkDistanceRepresentation2D_GetDistance, METH_VARARGS,
   (char*)"V.GetDistance() -> float\nC++: virtual double GetDistance()\n\nSatisfy the superclasses API.\n"},
  {(char*)"GetPoint1WorldPosition", PyvtkDistanceRepresentation2D_GetPoint1WorldPosition, METH_VARARGS,
   (char*)"V.GetPoint1WorldPosition() -> (float, ...)\nC++: double *GetPoint1WorldPosition()\nV.GetPoint1WorldPosition([float, float, float])\nC++: void GetPoint1WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint2WorldPosition", PyvtkDistanceRepresentation2D_GetPoint2WorldPosition, METH_VARARGS,
   (char*)"V.GetPoint2WorldPosition() -> (float, ...)\nC++: double *GetPoint2WorldPosition()\nV.GetPoint2WorldPosition([float, float, float])\nC++: void GetPoint2WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint1WorldPosition", PyvtkDistanceRepresentation2D_SetPoint1WorldPosition, METH_VARARGS,
   (char*)"V.SetPoint1WorldPosition([float, float, float])\nC++: void SetPoint1WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint2WorldPosition", PyvtkDistanceRepresentation2D_SetPoint2WorldPosition, METH_VARARGS,
   (char*)"V.SetPoint2WorldPosition([float, float, float])\nC++: void SetPoint2WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint1DisplayPosition", PyvtkDistanceRepresentation2D_SetPoint1DisplayPosition, METH_VARARGS,
   (char*)"V.SetPoint1DisplayPosition([float, float, float])\nC++: void SetPoint1DisplayPosition(double pos[3])\n\n"},
  {(char*)"SetPoint2DisplayPosition", PyvtkDistanceRepresentation2D_SetPoint2DisplayPosition, METH_VARARGS,
   (char*)"V.SetPoint2DisplayPosition([float, float, float])\nC++: void SetPoint2DisplayPosition(double pos[3])\n\n"},
  {(char*)"GetPoint1DisplayPosition", PyvtkDistanceRepresentation2D_GetPoint1DisplayPosition, METH_VARARGS,
   (char*)"V.GetPoint1DisplayPosition([float, float, float])\nC++: void GetPoint1DisplayPosition(double pos[3])\n\n"},
  {(char*)"GetPoint2DisplayPosition", PyvtkDistanceRepresentation2D_GetPoint2DisplayPosition, METH_VARARGS,
   (char*)"V.GetPoint2DisplayPosition([float, float, float])\nC++: void GetPoint2DisplayPosition(double pos[3])\n\n"},
  {(char*)"GetAxis", PyvtkDistanceRepresentation2D_GetAxis, METH_VARARGS,
   (char*)"V.GetAxis() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetAxis()\n\nRetrieve the vtkAxisActor2D used to draw the measurement axis.\nWith this properties can be set and so on. There is also a\nconvenience method to get the axis property.\n"},
  {(char*)"GetAxisProperty", PyvtkDistanceRepresentation2D_GetAxisProperty, METH_VARARGS,
   (char*)"V.GetAxisProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetAxisProperty()\n\nRetrieve the vtkAxisActor2D used to draw the measurement axis.\nWith this properties can be set and so on. There is also a\nconvenience method to get the axis property.\n"},
  {(char*)"BuildRepresentation", PyvtkDistanceRepresentation2D_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nMethod to satisfy superclasses' API.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkDistanceRepresentation2D_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *w)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderOverlay", PyvtkDistanceRepresentation2D_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkDistanceRepresentation2D_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDistanceRepresentation2D_StaticNew()
{
  return vtkDistanceRepresentation2D::New();
}

PyObject *PyVTKClass_vtkDistanceRepresentation2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDistanceRepresentation2D_StaticNew,
    PyvtkDistanceRepresentation2D_Methods,
    "vtkDistanceRepresentation2D", modulename,
    NULL, NULL,
    PyvtkDistanceRepresentation2D_Doc(),
    PyVTKClass_vtkDistanceRepresentationNew(modulename));
  return cls;
}

const char **PyvtkDistanceRepresentation2D_Doc()
{
  static const char *docstring[] = {
    "vtkDistanceRepresentation2D - represent the vtkDistanceWidget\n\n",
    "Superclass: vtkDistanceRepresentation\n\n",
    "The vtkDistanceRepresentation2D is a representation for the\nvtkDistanceWidget. This representation consists of a measuring line\n(axis) and two vtkHandleWidgets to place the end points of the line.\nNote that this particular widget draws its representation in the\noverlay plane, and the handles also operate in the 2D overlay plane.\n(If you desire to use the distance widget for 3D measurements, use\nth",
    "e vtkDistanceRepresentation3D.)\n\nSee Also:\n\nvtkDistanceWidget vtkDistanceRepresentation\nvtkDistanceRepresentation3D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDistanceRepresentation2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDistanceRepresentation2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDistanceRepresentation2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

