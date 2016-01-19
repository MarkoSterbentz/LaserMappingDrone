// python wrapper for vtkHull
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHull.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHull(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHullNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkHull_Doc();


static PyObject *
PyvtkHull_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHull::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHull_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHull::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHull_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHull *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHull::NewInstance());

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
PyvtkHull_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHull *tempr = vtkHull::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHull_RemoveAllPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllPlanes();
      }
    else
      {
      op->vtkHull::RemoveAllPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHull_AddPlane_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->AddPlane(temp0, temp1, temp2) :
      op->vtkHull::AddPlane(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHull_AddPlane_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AddPlane(temp0) :
      op->vtkHull::AddPlane(temp0));

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
PyvtkHull_AddPlane_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->AddPlane(temp0, temp1, temp2, temp3) :
      op->vtkHull::AddPlane(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHull_AddPlane_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AddPlane(temp0, temp1) :
      op->vtkHull::AddPlane(temp0, temp1));

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
PyvtkHull_AddPlane(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkHull_AddPlane_s1(self, args);
    case 1:
      return PyvtkHull_AddPlane_s2(self, args);
    case 4:
      return PyvtkHull_AddPlane_s3(self, args);
    case 2:
      return PyvtkHull_AddPlane_s4(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddPlane");
  return NULL;
}



static PyObject *
PyvtkHull_SetPlane_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetPlane(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkHull::SetPlane(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHull_SetPlane_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetPlane(temp0, temp1);
      }
    else
      {
      op->vtkHull::SetPlane(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHull_SetPlane_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetPlane(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkHull::SetPlane(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHull_SetPlane_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetPlane(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHull::SetPlane(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHull_SetPlane(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkHull_SetPlane_s1(self, args);
    case 2:
      return PyvtkHull_SetPlane_s2(self, args);
    case 5:
      return PyvtkHull_SetPlane_s3(self, args);
    case 3:
      return PyvtkHull_SetPlane_s4(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPlane");
  return NULL;
}



static PyObject *
PyvtkHull_SetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  vtkPlanes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
    {
    if (ap.IsBound())
      {
      op->SetPlanes(temp0);
      }
    else
      {
      op->vtkHull::SetPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHull_GetNumberOfPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPlanes() :
      op->vtkHull::GetNumberOfPlanes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHull_AddCubeVertexPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCubeVertexPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddCubeVertexPlanes();
      }
    else
      {
      op->vtkHull::AddCubeVertexPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHull_AddCubeEdgePlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCubeEdgePlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddCubeEdgePlanes();
      }
    else
      {
      op->vtkHull::AddCubeEdgePlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHull_AddCubeFacePlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCubeFacePlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddCubeFacePlanes();
      }
    else
      {
      op->vtkHull::AddCubeFacePlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHull_AddRecursiveSpherePlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRecursiveSpherePlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddRecursiveSpherePlanes(temp0);
      }
    else
      {
      op->vtkHull::AddRecursiveSpherePlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHull_GenerateHull_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateHull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  vtkPolyData *temp0 = NULL;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GenerateHull(temp0, temp1);
      }
    else
      {
      op->vtkHull::GenerateHull(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkHull_GenerateHull_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateHull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  vtkPolyData *temp0 = NULL;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    if (ap.IsBound())
      {
      op->GenerateHull(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkHull::GenerateHull(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHull_GenerateHull(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkHull_GenerateHull_s1(self, args);
    case 7:
      return PyvtkHull_GenerateHull_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GenerateHull");
  return NULL;
}


static PyMethodDef PyvtkHull_Methods[] = {
  {(char*)"GetClassName", PyvtkHull_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHull_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHull_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHull\nC++: vtkHull *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHull_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHull\nC++: vtkHull *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RemoveAllPlanes", PyvtkHull_RemoveAllPlanes, METH_VARARGS,
   (char*)"V.RemoveAllPlanes()\nC++: void RemoveAllPlanes(void)\n\nRemove all planes from the current set of planes.\n"},
  {(char*)"AddPlane", PyvtkHull_AddPlane, METH_VARARGS,
   (char*)"V.AddPlane(float, float, float) -> int\nC++: int AddPlane(double A, double B, double C)\nV.AddPlane([float, float, float]) -> int\nC++: int AddPlane(double plane[3])\nV.AddPlane(float, float, float, float) -> int\nC++: int AddPlane(double A, double B, double C, double D)\nV.AddPlane([float, float, float], float) -> int\nC++: int AddPlane(double plane[3], double D)\n\nAdd a plane to the current set of planes. It will be added at the\nend of the list, and an index that can later be used to set this\nplane's normal will be returned. The values A, B, C are from the\nplane equation Ax + By + Cz + D = 0. This vector does not have to\nhave unit length (but it must have a non-zero length!). If a\nvalue 0 > i >= -NumberOfPlanes is returned, then the plane is\nparallel with a previously inserted plane, and |-i-1| is the\nindex of the plane that was previously inserted. If a value i <\n-NumberOfPlanes is returned, then the plane normal is zero\nlength.\n"},
  {(char*)"SetPlane", PyvtkHull_SetPlane, METH_VARARGS,
   (char*)"V.SetPlane(int, float, float, float)\nC++: void SetPlane(int i, double A, double B, double C)\nV.SetPlane(int, [float, float, float])\nC++: void SetPlane(int i, double plane[3])\nV.SetPlane(int, float, float, float, float)\nC++: void SetPlane(int i, double A, double B, double C, double D)\nV.SetPlane(int, [float, float, float], float)\nC++: void SetPlane(int i, double plane[3], double D)\n\nSet the normal values for plane i. This is a plane that was\nalready added to the current set of planes with AddPlane(), and\nis now being modified. The values A, B, C are from the plane\nequation Ax + By + Cz + D = 0. This vector does not have to have\nunit length. Note that D is set to zero, except in the case of\nthe method taking a vtkPlanes* argument, where it is set to the D\nvalue defined there.\n"},
  {(char*)"SetPlanes", PyvtkHull_SetPlanes, METH_VARARGS,
   (char*)"V.SetPlanes(vtkPlanes)\nC++: void SetPlanes(vtkPlanes *planes)\n\nSet all the planes at once using a vtkPlanes implicit function.\nThis also sets the D value, so it can be used with\nGenerateHull().\n"},
  {(char*)"GetNumberOfPlanes", PyvtkHull_GetNumberOfPlanes, METH_VARARGS,
   (char*)"V.GetNumberOfPlanes() -> int\nC++: int GetNumberOfPlanes()\n\nGet the number of planes in the current set of planes.\n"},
  {(char*)"AddCubeVertexPlanes", PyvtkHull_AddCubeVertexPlanes, METH_VARARGS,
   (char*)"V.AddCubeVertexPlanes()\nC++: void AddCubeVertexPlanes()\n\nAdd the 8 planes that represent the vertices of a cube - the\ncombination of the three face planes connecting to a vertex -\n(1,1,1), (1,1,-1), (1,-1,1), (1,-1,1), (-1,1,1), (-1,1,-1),\n(-1,-1,1), (-1,-1-1).\n"},
  {(char*)"AddCubeEdgePlanes", PyvtkHull_AddCubeEdgePlanes, METH_VARARGS,
   (char*)"V.AddCubeEdgePlanes()\nC++: void AddCubeEdgePlanes()\n\nAdd the 12 planes that represent the edges of a cube - halfway\nbetween the two connecting face planes - (1,1,0), (-1,-1,0),\n(-1,1,0), (1,-1,0), (0,1,1), (0,-1,-1), (0,1,-1), (0,-1,1),\n(1,0,1), (-1,0,-1), (1,0,-1), (-1,0,1)\n"},
  {(char*)"AddCubeFacePlanes", PyvtkHull_AddCubeFacePlanes, METH_VARARGS,
   (char*)"V.AddCubeFacePlanes()\nC++: void AddCubeFacePlanes()\n\nAdd the six planes that make up the faces of a cube - (1,0,0),\n(-1, 0, 0), (0,1,0), (0,-1,0), (0,0,1), (0,0,-1)\n"},
  {(char*)"AddRecursiveSpherePlanes", PyvtkHull_AddRecursiveSpherePlanes, METH_VARARGS,
   (char*)"V.AddRecursiveSpherePlanes(int)\nC++: void AddRecursiveSpherePlanes(int level)\n\nAdd the planes that represent the normals of the vertices of a\npolygonal sphere formed by recursively subdividing the triangles\nin an octahedron.  Each triangle is subdivided by connecting the\nmidpoints of the edges thus forming 4 smaller triangles. The\nlevel indicates how many subdivisions to do with a level of 0\nused to add the 6 planes from the original octahedron, level 1\nwill add 18 planes, and so on.\n"},
  {(char*)"GenerateHull", PyvtkHull_GenerateHull, METH_VARARGS,
   (char*)"V.GenerateHull(vtkPolyData, [float, ...])\nC++: void GenerateHull(vtkPolyData *pd, double *bounds)\nV.GenerateHull(vtkPolyData, float, float, float, float, float,\n    float)\nC++: void GenerateHull(vtkPolyData *pd, double xmin, double xmax,\n    double ymin, double ymax, double zmin, double zmax)\n\nA special method that is used to generate a polyhedron directly\nfrom a set of n planes. The planes that are supplied by the user\nare not squeezed towards the input data (in fact the user need\nnot specify an input). To use this method, you must provide an\ninstance of vtkPolyData into which the points and cells defining\nthe polyhedron are placed. You must also provide a bounding box\nwhere you expect the resulting polyhedron to lie. This can be a\nvery generous fit, it's only used to create the initial polygons\nthat are eventually clipped.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHull_StaticNew()
{
  return vtkHull::New();
}

PyObject *PyVTKClass_vtkHullNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHull_StaticNew,
    PyvtkHull_Methods,
    "vtkHull", modulename,
    NULL, NULL,
    PyvtkHull_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHull_Doc()
{
  static const char *docstring[] = {
    "vtkHull - produce an n-sided convex hull\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkHull is a filter which will produce an n-sided convex hull given a\nset of n planes. (The convex hull bounds the input polygonal data.)\nThe hull is generated by squeezing the planes towards the input\nvtkPolyData, until the planes just touch the vtkPolyData. Then, the\nresulting planes are used to generate a polyhedron (i.e., hull) that\nis represented by triangles.\n\nThe n planes can be defined in ",
    "a number of ways including 1) manually\nspecifying each plane; 2) choosing the six face planes of the input's\nbounding box; 3) choosing the eight vertex planes of the input's\nbounding box; 4) choosing the twelve edge planes of the input's\nbounding box; and/or 5) using a recursively subdivided octahedron.\nNote that when specifying planes, the plane normals should point\noutside of the convex region.\n",
    "\nThe output of this filter can be used in combination with vtkLODActor\nto represent a levels-of-detail in the LOD hierarchy. Another use of\nthis class is to manually specify the planes, and then generate the\npolyhedron from the planes (without squeezing the planes towards the\ninput). The method GenerateHull() is used to do this.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHull(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHullNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHull", o) != 0)
    {
    Py_DECREF(o);
    }

}

