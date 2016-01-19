// python wrapper for vtkStructuredGridConnectivity
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStructuredNeighbor.h"
#include "vtkStructuredGridConnectivity.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStructuredGridConnectivity(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStructuredGridConnectivityNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractGridConnectivityNew
extern "C" { PyObject *PyVTKClass_vtkAbstractGridConnectivityNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractGridConnectivityNew
#endif

static const char **PyvtkStructuredGridConnectivity_Doc();


static PyObject *
PyvtkStructuredGridConnectivity_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStructuredGridConnectivity::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredGridConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredGridConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredGridConnectivity::NewInstance());

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
PyvtkStructuredGridConnectivity_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStructuredGridConnectivity *tempr = vtkStructuredGridConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkStructuredGridConnectivity::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGridConnectivity_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0);
      }
    else
      {
      op->vtkStructuredGridConnectivity::SetWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGridConnectivity_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkStructuredGridConnectivity_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkStructuredGridConnectivity_SetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return NULL;
}



static PyObject *
PyvtkStructuredGridConnectivity_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkStructuredGridConnectivity::GetWholeExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_GetDataDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataDimension() :
      op->vtkStructuredGridConnectivity::GetDataDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_SetNumberOfGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfGrids(temp0);
      }
    else
      {
      op->vtkStructuredGridConnectivity::SetNumberOfGrids(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_RegisterGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  int temp0;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  vtkUnsignedCharArray *temp2 = NULL;
  vtkUnsignedCharArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkCellData *temp5 = NULL;
  vtkPoints *temp6 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp3, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkCellData") &&
      ap.GetVTKObject(temp6, "vtkPoints"))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->RegisterGrid(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkStructuredGridConnectivity::RegisterGrid(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
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
PyvtkStructuredGridConnectivity_GetGridExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  int temp0;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetGridExtent(temp0, temp1);
      }
    else
      {
      op->vtkStructuredGridConnectivity::GetGridExtent(temp0, temp1);
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
PyvtkStructuredGridConnectivity_SetGhostedGridExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostedGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  int temp0;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetGhostedGridExtent(temp0, temp1);
      }
    else
      {
      op->vtkStructuredGridConnectivity::SetGhostedGridExtent(temp0, temp1);
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
PyvtkStructuredGridConnectivity_GetGhostedGridExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostedGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  int temp0;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetGhostedGridExtent(temp0, temp1);
      }
    else
      {
      op->vtkStructuredGridConnectivity::GetGhostedGridExtent(temp0, temp1);
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
PyvtkStructuredGridConnectivity_ComputeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNeighbors();
      }
    else
      {
      op->vtkStructuredGridConnectivity::ComputeNeighbors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_GetNumberOfNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNeighbors(temp0) :
      op->vtkStructuredGridConnectivity::GetNumberOfNeighbors(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_GetNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  int temp0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkIdList *tempr = (ap.IsBound() ?
      op->GetNeighbors(temp0, temp1) :
      op->vtkStructuredGridConnectivity::GetNeighbors(temp0, temp1));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_FillGhostArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillGhostArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  int temp0;
  vtkUnsignedCharArray *temp1 = NULL;
  vtkUnsignedCharArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp2, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->FillGhostArrays(temp0, temp1, temp2);
      }
    else
      {
      op->vtkStructuredGridConnectivity::FillGhostArrays(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_CreateGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  int temp0 = 1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      op->CreateGhostLayers(temp0);
      }
    else
      {
      op->vtkStructuredGridConnectivity::CreateGhostLayers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredGridConnectivity_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredGridConnectivity_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredGridConnectivity_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredGridConnectivity_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStructuredGridConnectivity\nC++: vtkStructuredGridConnectivity *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredGridConnectivity_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredGridConnectivity\nC++: vtkStructuredGridConnectivity *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWholeExtent", PyvtkStructuredGridConnectivity_SetWholeExtent, METH_VARARGS,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {(char*)"GetWholeExtent", PyvtkStructuredGridConnectivity_GetWholeExtent, METH_VARARGS,
   (char*)"V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {(char*)"GetDataDimension", PyvtkStructuredGridConnectivity_GetDataDimension, METH_VARARGS,
   (char*)"V.GetDataDimension() -> int\nC++: int GetDataDimension()\n\nReturns the data dimension based on the whole extent\n"},
  {(char*)"SetNumberOfGrids", PyvtkStructuredGridConnectivity_SetNumberOfGrids, METH_VARARGS,
   (char*)"V.SetNumberOfGrids(int)\nC++: virtual void SetNumberOfGrids(const unsigned int N)\n\nSet/Get the total number of domains distributed among processors\n"},
  {(char*)"RegisterGrid", PyvtkStructuredGridConnectivity_RegisterGrid, METH_VARARGS,
   (char*)"V.RegisterGrid(int, [int, int, int, int, int, int],\n    vtkUnsignedCharArray, vtkUnsignedCharArray, vtkPointData,\n    vtkCellData, vtkPoints)\nC++: virtual void RegisterGrid(const int gridID, int extents[6],\n    vtkUnsignedCharArray *nodesGhostArray,\n    vtkUnsignedCharArray *cellGhostArray, vtkPointData *pointData,\n     vtkCellData *cellData, vtkPoints *gridNodes)\n\nRegisters the current grid corresponding to the grid ID by its\nglobal extent w.r.t. the whole extent.\n"},
  {(char*)"GetGridExtent", PyvtkStructuredGridConnectivity_GetGridExtent, METH_VARARGS,
   (char*)"V.GetGridExtent(int, [int, int, int, int, int, int])\nC++: void GetGridExtent(const int gridID, int extent[6])\n\nReturns the grid extent of the grid corresponding to the given\ngrid ID.\n"},
  {(char*)"SetGhostedGridExtent", PyvtkStructuredGridConnectivity_SetGhostedGridExtent, METH_VARARGS,
   (char*)"V.SetGhostedGridExtent(int, [int, int, int, int, int, int])\nC++: void SetGhostedGridExtent(const int gridID, int ext[6])\n\nSets the ghosted grid extent for the grid corresponding to the\ngiven grid ID to the given extent.\n"},
  {(char*)"GetGhostedGridExtent", PyvtkStructuredGridConnectivity_GetGhostedGridExtent, METH_VARARGS,
   (char*)"V.GetGhostedGridExtent(int, [int, int, int, int, int, int])\nC++: void GetGhostedGridExtent(const int gridID, int ext[6])\n\nReturns the ghosted grid extent for the block corresponding the\n"},
  {(char*)"ComputeNeighbors", PyvtkStructuredGridConnectivity_ComputeNeighbors, METH_VARARGS,
   (char*)"V.ComputeNeighbors()\nC++: virtual void ComputeNeighbors()\n\nComputes neighboring information\n"},
  {(char*)"GetNumberOfNeighbors", PyvtkStructuredGridConnectivity_GetNumberOfNeighbors, METH_VARARGS,
   (char*)"V.GetNumberOfNeighbors(int) -> int\nC++: int GetNumberOfNeighbors(const int gridID)\n\nReturns the number of neighbors for the grid corresponding to the\ngiven grid ID.\n"},
  {(char*)"GetNeighbors", PyvtkStructuredGridConnectivity_GetNeighbors, METH_VARARGS,
   (char*)"V.GetNeighbors(int, [int, ...]) -> vtkIdList\nC++: vtkIdList *GetNeighbors(const int gridID, int *extents)\n\nReturns the list of neighboring blocks for the given grid and the\ncorresponding overlapping extents are filled in the 1-D flat\narray strided by 6.\n\nNOTE: the flat array extents must be pre-allocated.\n"},
  {(char*)"FillGhostArrays", PyvtkStructuredGridConnectivity_FillGhostArrays, METH_VARARGS,
   (char*)"V.FillGhostArrays(int, vtkUnsignedCharArray, vtkUnsignedCharArray)\nC++: void FillGhostArrays(const int gridID,\n    vtkUnsignedCharArray *nodesArray,\n    vtkUnsignedCharArray *cellsArray)\n\nFilles the mesh property arrays, nodes and cells, for the grid\ncorresponding to the given grid ID. NOTE: this method assumes\nthat ComputeNeighbors() has been called.\n"},
  {(char*)"CreateGhostLayers", PyvtkStructuredGridConnectivity_CreateGhostLayers, METH_VARARGS,
   (char*)"V.CreateGhostLayers(int)\nC++: virtual void CreateGhostLayers(const int N=1)\n\nCreates ghost layers.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredGridConnectivity_StaticNew()
{
  return vtkStructuredGridConnectivity::New();
}

PyObject *PyVTKClass_vtkStructuredGridConnectivityNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredGridConnectivity_StaticNew,
    PyvtkStructuredGridConnectivity_Methods,
    "vtkStructuredGridConnectivity", modulename,
    NULL, NULL,
    PyvtkStructuredGridConnectivity_Doc(),
    PyVTKClass_vtkAbstractGridConnectivityNew(modulename));
  return cls;
}

const char **PyvtkStructuredGridConnectivity_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredGridConnectivity.h -- Constructs structured connectivity\n\n",
    "Superclass: vtkAbstractGridConnectivity\n\n",
    "vtkStructuredGridConnectivity is a concrete instance of vtkObject\nthat\n implements functionality for computing the neighboring topology\nwithin a\n single partitioned structured grid dataset. This class\nimplementation does\n not have any support for distributed data. For the parallel\nimplementation\n see vtkPStructuredGridConnectivity.\n\nSee Also:\n\n\n vtkGhostArray vtkPStructuredGridConnectivity\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredGridConnectivity(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredGridConnectivityNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredGridConnectivity", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 4; c++)
    {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_NO_OVERLAP", 0 },
        { "VTK_NODE_OVERLAP", 1 },
        { "VTK_EDGE_OVERLAP", 2 },
        { "VTK_PARTIAL_OVERLAP", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

