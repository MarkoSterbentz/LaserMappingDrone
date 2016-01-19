// python wrapper for vtkStructuredAMRGridConnectivity
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStructuredAMRNeighbor.h"
#include "vtkStructuredAMRGridConnectivity.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStructuredAMRGridConnectivity(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStructuredAMRGridConnectivityNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractGridConnectivityNew
extern "C" { PyObject *PyVTKClass_vtkAbstractGridConnectivityNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractGridConnectivityNew
#endif

static const char **PyvtkStructuredAMRGridConnectivity_Doc();


static PyObject *
PyvtkStructuredAMRGridConnectivity_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStructuredAMRGridConnectivity::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredAMRGridConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredAMRGridConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredAMRGridConnectivity::NewInstance());

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
PyvtkStructuredAMRGridConnectivity_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStructuredAMRGridConnectivity *tempr = vtkStructuredAMRGridConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2 = -1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0, temp1, temp2);
      }
    else
      {
      op->vtkStructuredAMRGridConnectivity::Initialize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_ComputeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNeighbors();
      }
    else
      {
      op->vtkStructuredAMRGridConnectivity::ComputeNeighbors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_CreateGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

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
      op->vtkStructuredAMRGridConnectivity::CreateGhostLayers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_RegisterGrid_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3[6];
  int save3[6];
  const int size3 = 6;
  vtkUnsignedCharArray *temp4 = NULL;
  vtkUnsignedCharArray *temp5 = NULL;
  vtkPointData *temp6 = NULL;
  vtkCellData *temp7 = NULL;
  vtkPoints *temp8 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp5, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp6, "vtkPointData") &&
      ap.GetVTKObject(temp7, "vtkCellData") &&
      ap.GetVTKObject(temp8, "vtkPoints"))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->RegisterGrid(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkStructuredAMRGridConnectivity::RegisterGrid(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredAMRGridConnectivity_RegisterGrid_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  int temp0;
  int temp1;
  int temp2[6];
  int save2[6];
  const int size2 = 6;
  vtkUnsignedCharArray *temp3 = NULL;
  vtkUnsignedCharArray *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  vtkCellData *temp6 = NULL;
  vtkPoints *temp7 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetVTKObject(temp7, "vtkPoints"))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->RegisterGrid(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkStructuredAMRGridConnectivity::RegisterGrid(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredAMRGridConnectivity_RegisterGrid(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 9:
      return PyvtkStructuredAMRGridConnectivity_RegisterGrid_s1(self, args);
    case 8:
      return PyvtkStructuredAMRGridConnectivity_RegisterGrid_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RegisterGrid");
  return NULL;
}



static PyObject *
PyvtkStructuredAMRGridConnectivity_SetBalancedRefinement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalancedRefinement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBalancedRefinement(temp0);
      }
    else
      {
      op->vtkStructuredAMRGridConnectivity::SetBalancedRefinement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_GetBalancedRefinement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalancedRefinement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetBalancedRefinement() :
      op->vtkStructuredAMRGridConnectivity::GetBalancedRefinement());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_SetNodeCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNodeCentered(temp0);
      }
    else
      {
      op->vtkStructuredAMRGridConnectivity::SetNodeCentered(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_GetNodeCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetNodeCentered() :
      op->vtkStructuredAMRGridConnectivity::GetNodeCentered());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_SetCellCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellCentered(temp0);
      }
    else
      {
      op->vtkStructuredAMRGridConnectivity::SetCellCentered(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_GetCellCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCellCentered() :
      op->vtkStructuredAMRGridConnectivity::GetCellCentered());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_GetNumberOfNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNeighbors(temp0) :
      op->vtkStructuredAMRGridConnectivity::GetNumberOfNeighbors(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_GetGhostedExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostedExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

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
      op->GetGhostedExtent(temp0, temp1);
      }
    else
      {
      op->vtkStructuredAMRGridConnectivity::GetGhostedExtent(temp0, temp1);
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

static PyMethodDef PyvtkStructuredAMRGridConnectivity_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredAMRGridConnectivity_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredAMRGridConnectivity_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredAMRGridConnectivity_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStructuredAMRGridConnectivity\nC++: vtkStructuredAMRGridConnectivity *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredAMRGridConnectivity_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredAMRGridConnectivity\nC++: vtkStructuredAMRGridConnectivity *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkStructuredAMRGridConnectivity_Initialize, METH_VARARGS,
   (char*)"V.Initialize(int, int, int)\nC++: void Initialize(const unsigned int NumberOfLevels,\n    const unsigned int N, const int RefinementRatio=-1)\n\nInitializes this instance of vtkStructuredAMRGridConnectivity\nwhere N is the total number of grids in the AMR hierarchy.\nOptionally, if the AMR dataset has a constant refinement, it\nshould be specified during initialization as the code optimizes\nfor it. If a -1 or no refinement ratio is specified a varying\nrefinement ratio is assumed.\n"},
  {(char*)"ComputeNeighbors", PyvtkStructuredAMRGridConnectivity_ComputeNeighbors, METH_VARARGS,
   (char*)"V.ComputeNeighbors()\nC++: virtual void ComputeNeighbors()\n\nComputes neighboring information.\n"},
  {(char*)"CreateGhostLayers", PyvtkStructuredAMRGridConnectivity_CreateGhostLayers, METH_VARARGS,
   (char*)"V.CreateGhostLayers(int)\nC++: virtual void CreateGhostLayers(const int N=1)\n\nCreates ghost layers.\n"},
  {(char*)"RegisterGrid", PyvtkStructuredAMRGridConnectivity_RegisterGrid, METH_VARARGS,
   (char*)"V.RegisterGrid(int, int, int, [int, int, int, int, int, int],\n    vtkUnsignedCharArray, vtkUnsignedCharArray, vtkPointData,\n    vtkCellData, vtkPoints)\nC++: virtual void RegisterGrid(const int gridIdx, const int level,\n     const int refinementRatio, int extents[6],\n    vtkUnsignedCharArray *nodesGhostArray,\n    vtkUnsignedCharArray *cellGhostArray, vtkPointData *pointData,\n     vtkCellData *cellData, vtkPoints *gridNodes)\nV.RegisterGrid(int, int, [int, int, int, int, int, int],\n    vtkUnsignedCharArray, vtkUnsignedCharArray, vtkPointData,\n    vtkCellData, vtkPoints)\nC++: virtual void RegisterGrid(const int gridIdx, const int level,\n     int extents[6], vtkUnsignedCharArray *nodesGhostArray,\n    vtkUnsignedCharArray *cellGhostArray, vtkPointData *pointData,\n     vtkCellData *cellData, vtkPoints *gridNodes)\n\nRegisters the AMR grid with the given global linear grid ID\n(starting numbering from 0) and level and refinement ratio. This\nmethod is to be used when the refinement ratio is not constant.\n"},
  {(char*)"SetBalancedRefinement", PyvtkStructuredAMRGridConnectivity_SetBalancedRefinement, METH_VARARGS,
   (char*)"V.SetBalancedRefinement(bool)\nC++: void SetBalancedRefinement(bool a)\n\nGet/Set macro for BalancedRefinement property, default is true.\nIf the refinement is balanced, then, adjacent grids in the AMR\nhierarchy can only differ by one level. By default, a balanced\nrefinement is assumed.\n"},
  {(char*)"GetBalancedRefinement", PyvtkStructuredAMRGridConnectivity_GetBalancedRefinement, METH_VARARGS,
   (char*)"V.GetBalancedRefinement() -> bool\nC++: bool GetBalancedRefinement()\n\nGet/Set macro for BalancedRefinement property, default is true.\nIf the refinement is balanced, then, adjacent grids in the AMR\nhierarchy can only differ by one level. By default, a balanced\nrefinement is assumed.\n"},
  {(char*)"SetNodeCentered", PyvtkStructuredAMRGridConnectivity_SetNodeCentered, METH_VARARGS,
   (char*)"V.SetNodeCentered(bool)\nC++: void SetNodeCentered(bool a)\n\nGet/Set macor NodeCentered property which indicates if the data\nis node-centered or cell-centered. By default, node-centered is\nset to false since AMR datasets are primarily cell-centered.\n"},
  {(char*)"GetNodeCentered", PyvtkStructuredAMRGridConnectivity_GetNodeCentered, METH_VARARGS,
   (char*)"V.GetNodeCentered() -> bool\nC++: bool GetNodeCentered()\n\nGet/Set macor NodeCentered property which indicates if the data\nis node-centered or cell-centered. By default, node-centered is\nset to false since AMR datasets are primarily cell-centered.\n"},
  {(char*)"SetCellCentered", PyvtkStructuredAMRGridConnectivity_SetCellCentered, METH_VARARGS,
   (char*)"V.SetCellCentered(bool)\nC++: void SetCellCentered(bool a)\n\nGet/Set CellCentered property which indicates if the data is\ncell-centered By default, cell-centered is set to true.\n"},
  {(char*)"GetCellCentered", PyvtkStructuredAMRGridConnectivity_GetCellCentered, METH_VARARGS,
   (char*)"V.GetCellCentered() -> bool\nC++: bool GetCellCentered()\n\nGet/Set CellCentered property which indicates if the data is\ncell-centered By default, cell-centered is set to true.\n"},
  {(char*)"GetNumberOfNeighbors", PyvtkStructuredAMRGridConnectivity_GetNumberOfNeighbors, METH_VARARGS,
   (char*)"V.GetNumberOfNeighbors(int) -> int\nC++: int GetNumberOfNeighbors(const int gridID)\n\nReturns the number of neighbors for the grid corresponding to the\ngiven grid ID.\n"},
  {(char*)"GetGhostedExtent", PyvtkStructuredAMRGridConnectivity_GetGhostedExtent, METH_VARARGS,
   (char*)"V.GetGhostedExtent(int, [int, int, int, int, int, int])\nC++: void GetGhostedExtent(const int gridID, int ext[6])\n\nReturns the ghost extend for the grid corresponding to the given\ngrid ID.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredAMRGridConnectivity_StaticNew()
{
  return vtkStructuredAMRGridConnectivity::New();
}

PyObject *PyVTKClass_vtkStructuredAMRGridConnectivityNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredAMRGridConnectivity_StaticNew,
    PyvtkStructuredAMRGridConnectivity_Methods,
    "vtkStructuredAMRGridConnectivity", modulename,
    NULL, NULL,
    PyvtkStructuredAMRGridConnectivity_Doc(),
    PyVTKClass_vtkAbstractGridConnectivityNew(modulename));
  return cls;
}

const char **PyvtkStructuredAMRGridConnectivity_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredAMRGridConnectivity.h -- Constructs structured AMR\n\n",
    "Superclass: vtkAbstractGridConnectivity\n\n",
    "A concrete instance of vtkAbstractGridConnectivity that implements\n functionality for computing the neighboring topology within a\nstructured\n AMR grid, as well as, generating ghost-layers. Support is provided\nfor\n 1-D, 2-D (XY,XZ,YZ) and 3-D cell-centered datasets. This\nimplementation\n does not have any support for distributed data. For the parallel\n implementation see vtkPStructuredAMRGridConnect",
    "ivity.\n\nSee Also:\n\n\n vtkGhostArray vtkPStructuredAMRGridConnectivity\nvtkAbstractGridConnectivity\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredAMRGridConnectivity(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredAMRGridConnectivityNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredAMRGridConnectivity", o) != 0)
    {
    Py_DECREF(o);
    }

}

