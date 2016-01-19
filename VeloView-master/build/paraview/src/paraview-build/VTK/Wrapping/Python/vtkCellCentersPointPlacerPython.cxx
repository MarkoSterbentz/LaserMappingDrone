// python wrapper for vtkCellCentersPointPlacer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCellCentersPointPlacer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCellCentersPointPlacer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCellCentersPointPlacerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPointPlacerNew
extern "C" { PyObject *PyVTKClass_vtkPointPlacerNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointPlacerNew
#endif

static const char **PyvtkCellCentersPointPlacer_Doc();


static PyObject *
PyvtkCellCentersPointPlacer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCellCentersPointPlacer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellCentersPointPlacer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellCentersPointPlacer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellCentersPointPlacer::NewInstance());

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
PyvtkCellCentersPointPlacer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCellCentersPointPlacer *tempr = vtkCellCentersPointPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_AddProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->AddProp(temp0);
      }
    else
      {
      op->vtkCellCentersPointPlacer::AddProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_RemoveViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->RemoveViewProp(temp0);
      }
    else
      {
      op->vtkCellCentersPointPlacer::RemoveViewProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_RemoveAllProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllProps();
      }
    else
      {
      op->vtkCellCentersPointPlacer::RemoveAllProps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_HasProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    int tempr = (ap.IsBound() ?
      op->HasProp(temp0) :
      op->vtkCellCentersPointPlacer::HasProp(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_GetNumberOfProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProps() :
      op->vtkCellCentersPointPlacer::GetNumberOfProps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_ComputeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[9];
  double save3[9];
  const int size3 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ComputeWorldPosition(temp0, temp1, temp2, temp3) :
      op->vtkCellCentersPointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCellCentersPointPlacer_ComputeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4[9];
  double save4[9];
  const int size4 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCellCentersPointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCellCentersPointPlacer_ComputeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkCellCentersPointPlacer_ComputeWorldPosition_s1(self, args);
    case 5:
      return PyvtkCellCentersPointPlacer_ComputeWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWorldPosition");
  return NULL;
}



static PyObject *
PyvtkCellCentersPointPlacer_ValidateWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ValidateWorldPosition(temp0) :
      op->vtkCellCentersPointPlacer::ValidateWorldPosition(temp0));

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
PyvtkCellCentersPointPlacer_ValidateWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[9];
  double save1[9];
  const int size1 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ValidateWorldPosition(temp0, temp1) :
      op->vtkCellCentersPointPlacer::ValidateWorldPosition(temp0, temp1));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCellCentersPointPlacer_ValidateWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkCellCentersPointPlacer_ValidateWorldPosition_s1(self, args);
    case 2:
      return PyvtkCellCentersPointPlacer_ValidateWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ValidateWorldPosition");
  return NULL;
}



static PyObject *
PyvtkCellCentersPointPlacer_ValidateDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ValidateDisplayPosition(temp0, temp1) :
      op->vtkCellCentersPointPlacer::ValidateDisplayPosition(temp0, temp1));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_GetCellPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellPicker *tempr = (ap.IsBound() ?
      op->GetCellPicker() :
      op->vtkCellCentersPointPlacer::GetCellPicker());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMode(temp0);
      }
    else
      {
      op->vtkCellCentersPointPlacer::SetMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkCellCentersPointPlacer::GetMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCellCentersPointPlacer_Methods[] = {
  {(char*)"GetClassName", PyvtkCellCentersPointPlacer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkCellCentersPointPlacer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkCellCentersPointPlacer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCellCentersPointPlacer\nC++: vtkCellCentersPointPlacer *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkCellCentersPointPlacer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCellCentersPointPlacer\nC++: vtkCellCentersPointPlacer *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"AddProp", PyvtkCellCentersPointPlacer_AddProp, METH_VARARGS,
   (char*)"V.AddProp(vtkProp)\nC++: virtual void AddProp(vtkProp *)\n\n"},
  {(char*)"RemoveViewProp", PyvtkCellCentersPointPlacer_RemoveViewProp, METH_VARARGS,
   (char*)"V.RemoveViewProp(vtkProp)\nC++: virtual void RemoveViewProp(vtkProp *prop)\n\n"},
  {(char*)"RemoveAllProps", PyvtkCellCentersPointPlacer_RemoveAllProps, METH_VARARGS,
   (char*)"V.RemoveAllProps()\nC++: virtual void RemoveAllProps()\n\n"},
  {(char*)"HasProp", PyvtkCellCentersPointPlacer_HasProp, METH_VARARGS,
   (char*)"V.HasProp(vtkProp) -> int\nC++: int HasProp(vtkProp *)\n\n"},
  {(char*)"GetNumberOfProps", PyvtkCellCentersPointPlacer_GetNumberOfProps, METH_VARARGS,
   (char*)"V.GetNumberOfProps() -> int\nC++: int GetNumberOfProps()\n\n"},
  {(char*)"ComputeWorldPosition", PyvtkCellCentersPointPlacer_ComputeWorldPosition, METH_VARARGS,
   (char*)"V.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: virtual int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double worldPos[3],\n    double worldOrient[9])\nV.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float], [float, float, float, float,\n    float, float, float, float, float]) -> int\nC++: virtual int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double refWorldPos[3],\n    double worldPos[3], double worldOrient[9])\n\nGiven a renderer and a display position in pixel coordinates,\ncompute the world position and orientation where this point will\nbe placed. This method is typically used by the representation to\nplace the point initially. For the Terrain point placer this\ncomputes world points that lie at the specified height above the\nterrain.\n"},
  {(char*)"ValidateWorldPosition", PyvtkCellCentersPointPlacer_ValidateWorldPosition, METH_VARARGS,
   (char*)"V.ValidateWorldPosition([float, float, float]) -> int\nC++: virtual int ValidateWorldPosition(double worldPos[3])\nV.ValidateWorldPosition([float, float, float], [float, float,\n    float, float, float, float, float, float, float]) -> int\nC++: virtual int ValidateWorldPosition(double worldPos[3],\n    double worldOrient[9])\n\nGiven a world position check the validity of this position\naccording to the constraints of the placer\n"},
  {(char*)"ValidateDisplayPosition", PyvtkCellCentersPointPlacer_ValidateDisplayPosition, METH_VARARGS,
   (char*)"V.ValidateDisplayPosition(vtkRenderer, [float, float]) -> int\nC++: virtual int ValidateDisplayPosition(vtkRenderer *,\n    double displayPos[2])\n\nGiven a display position, check the validity of this position.\n"},
  {(char*)"GetCellPicker", PyvtkCellCentersPointPlacer_GetCellPicker, METH_VARARGS,
   (char*)"V.GetCellPicker() -> vtkCellPicker\nC++: vtkCellPicker *GetCellPicker()\n\nGet the Prop picker.\n"},
  {(char*)"SetMode", PyvtkCellCentersPointPlacer_SetMode, METH_VARARGS,
   (char*)"V.SetMode(int)\nC++: void SetMode(int a)\n\nModes to change the point placement. Parametric center picks the\nparametric center within the cell. CellPointsMean picks the\naverage of all points in the cell. When the mode is None, the\ninput point is passed through unmodified. Default is\nCellPointsMean.\n"},
  {(char*)"GetMode", PyvtkCellCentersPointPlacer_GetMode, METH_VARARGS,
   (char*)"V.GetMode() -> int\nC++: int GetMode()\n\nModes to change the point placement. Parametric center picks the\nparametric center within the cell. CellPointsMean picks the\naverage of all points in the cell. When the mode is None, the\ninput point is passed through unmodified. Default is\nCellPointsMean.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCellCentersPointPlacer_StaticNew()
{
  return vtkCellCentersPointPlacer::New();
}

PyObject *PyVTKClass_vtkCellCentersPointPlacerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCellCentersPointPlacer_StaticNew,
    PyvtkCellCentersPointPlacer_Methods,
    "vtkCellCentersPointPlacer", modulename,
    NULL, NULL,
    PyvtkCellCentersPointPlacer_Doc(),
    PyVTKClass_vtkPointPlacerNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "ParametricCenter", vtkCellCentersPointPlacer::ParametricCenter },
          { "CellPointsMean", vtkCellCentersPointPlacer::CellPointsMean },
          { "None", vtkCellCentersPointPlacer::None },
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

const char **PyvtkCellCentersPointPlacer_Doc()
{
  static const char *docstring[] = {
    "vtkCellCentersPointPlacer - Snaps points at the center of a cell\n\n",
    "Superclass: vtkPointPlacer\n\n",
    "vtkCellCentersPointPlacer is a class to snap points on the center of\ncells. The class has 3 modes. In the ParametricCenter mode, it snaps\npoints to the parametric center of the cell (see vtkCell). In\nCellPointsMean mode, points are snapped to the mean of the points in\nthe cell. In 'None' mode, no snapping is performed. The computed\nworld position is the picked position within the cell.\n\nUsage:\n\nTh",
    "e actors that render data and wish to be considered for placement\nby this placer are added to the list asplacer->AddProp( actor );\n\nSee Also:\n\nvtkPointPlacer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellCentersPointPlacer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellCentersPointPlacerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellCentersPointPlacer", o) != 0)
    {
    Py_DECREF(o);
    }

}

