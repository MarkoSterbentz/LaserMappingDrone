// python wrapper for vtkTensorProbeRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTensorProbeRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTensorProbeRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTensorProbeRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkTensorProbeRepresentation_Doc();


static PyObject *
PyvtkTensorProbeRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTensorProbeRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTensorProbeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTensorProbeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTensorProbeRepresentation::NewInstance());

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
PyvtkTensorProbeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTensorProbeRepresentation *tempr = vtkTensorProbeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkTensorProbeRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkTensorProbeRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_SetProbePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetProbePosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTensorProbeRepresentation::SetProbePosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTensorProbeRepresentation_SetProbePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetProbePosition(temp0);
      }
    else
      {
      op->vtkTensorProbeRepresentation::SetProbePosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTensorProbeRepresentation_SetProbePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTensorProbeRepresentation_SetProbePosition_s1(self, args);
    case 1:
      return PyvtkTensorProbeRepresentation_SetProbePosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetProbePosition");
  return NULL;
}



static PyObject *
PyvtkTensorProbeRepresentation_GetProbePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProbePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetProbePosition() :
      op->vtkTensorProbeRepresentation::GetProbePosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_SetProbeCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbeCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProbeCellId(temp0);
      }
    else
      {
      op->vtkTensorProbeRepresentation::SetProbeCellId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_GetProbeCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProbeCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetProbeCellId() :
      op->vtkTensorProbeRepresentation::GetProbeCellId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_SetTrajectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrajectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetTrajectory(temp0);
      }
    else
      {
      op->vtkTensorProbeRepresentation::SetTrajectory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkTensorProbeRepresentation::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_SelectProbe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectProbe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = op->SelectProbe(temp0);

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
PyvtkTensorProbeRepresentation_Move(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Move");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Move(temp0) :
      op->vtkTensorProbeRepresentation::Move(temp0));

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
PyvtkTensorProbeRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

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
      op->vtkTensorProbeRepresentation::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

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
      op->vtkTensorProbeRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTensorProbeRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkTensorProbeRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkTensorProbeRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkTensorProbeRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTensorProbeRepresentation\nC++: vtkTensorProbeRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkTensorProbeRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTensorProbeRepresentation\nC++: vtkTensorProbeRepresentation *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"BuildRepresentation", PyvtkTensorProbeRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nSee vtkWidgetRepresentation for details.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkTensorProbeRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nSee vtkWidgetRepresentation for details.\n"},
  {(char*)"SetProbePosition", PyvtkTensorProbeRepresentation_SetProbePosition, METH_VARARGS,
   (char*)"V.SetProbePosition(float, float, float)\nC++: void SetProbePosition(double, double, double)\nV.SetProbePosition((float, float, float))\nC++: void SetProbePosition(double a[3])\n\n"},
  {(char*)"GetProbePosition", PyvtkTensorProbeRepresentation_GetProbePosition, METH_VARARGS,
   (char*)"V.GetProbePosition() -> (float, float, float)\nC++: double *GetProbePosition()\n\n"},
  {(char*)"SetProbeCellId", PyvtkTensorProbeRepresentation_SetProbeCellId, METH_VARARGS,
   (char*)"V.SetProbeCellId(int)\nC++: void SetProbeCellId(vtkIdType a)\n\nSet the position of the Tensor probe.\n"},
  {(char*)"GetProbeCellId", PyvtkTensorProbeRepresentation_GetProbeCellId, METH_VARARGS,
   (char*)"V.GetProbeCellId() -> int\nC++: vtkIdType GetProbeCellId()\n\nSet the position of the Tensor probe.\n"},
  {(char*)"SetTrajectory", PyvtkTensorProbeRepresentation_SetTrajectory, METH_VARARGS,
   (char*)"V.SetTrajectory(vtkPolyData)\nC++: virtual void SetTrajectory(vtkPolyData *)\n\nSet the trajectory that we are trying to probe tensors on\n"},
  {(char*)"Initialize", PyvtkTensorProbeRepresentation_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nSet the probe position to a reasonable location on the\ntrajectory.\n"},
  {(char*)"SelectProbe", PyvtkTensorProbeRepresentation_SelectProbe, METH_VARARGS,
   (char*)"V.SelectProbe([int, int]) -> int\nC++: virtual int SelectProbe(int pos[2])\n\nThis method is invoked by the widget during user interaction. Can\nwe pick the tensor glyph at the current cursor pos\n"},
  {(char*)"Move", PyvtkTensorProbeRepresentation_Move, METH_VARARGS,
   (char*)"V.Move([float, float]) -> int\nC++: virtual int Move(double motionVector[2])\n\nINTERNAL - Do not use This method is invoked by the widget during\nuser interaction. Move probe based on the position and the motion\nvector.\n"},
  {(char*)"GetActors", PyvtkTensorProbeRepresentation_GetActors, METH_VARARGS,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nSee vtkProp for details.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkTensorProbeRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nSee vtkProp for details.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTensorProbeRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTensorProbeRepresentation_Methods,
    "vtkTensorProbeRepresentation", modulename,
    NULL, NULL,
    PyvtkTensorProbeRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));
  return cls;
}

const char **PyvtkTensorProbeRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkTensorProbeRepresentation - Abstract class that serves as a\nrepresentation for vtkTensorProbeWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "The class serves as an abstract geometrical representation for the\nvtkTensorProbeWidget. It is left to the concrete implementation to\nrender the tensors as it desires. For instance,\nvtkEllipsoidTensorProbeRepresentation renders the tensors as\nellipsoids.\n\nSee Also:\n\nvtkTensorProbeWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTensorProbeRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTensorProbeRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTensorProbeRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

