// python wrapper for vtkAbstractGridConnectivity
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAbstractGridConnectivity.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAbstractGridConnectivity(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAbstractGridConnectivityNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAbstractGridConnectivity_Doc();


static PyObject *
PyvtkAbstractGridConnectivity_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAbstractGridConnectivity::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractGridConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractGridConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractGridConnectivity::NewInstance());

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
PyvtkAbstractGridConnectivity_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAbstractGridConnectivity *tempr = vtkAbstractGridConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_SetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfGhostLayers(temp0);
      }
    else
      {
      op->vtkAbstractGridConnectivity::SetNumberOfGhostLayers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_GetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfGhostLayers() :
      op->vtkAbstractGridConnectivity::GetNumberOfGhostLayers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_SetNumberOfGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetNumberOfGrids(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_GetNumberOfGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfGrids() :
      op->vtkAbstractGridConnectivity::GetNumberOfGrids());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_ComputeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->ComputeNeighbors();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_CreateGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  int temp0 = 1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    op->CreateGhostLayers(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_GetGhostedPointGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostedPointGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetGhostedPointGhostArray(temp0) :
      op->vtkAbstractGridConnectivity::GetGhostedPointGhostArray(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_GetGhostedCellGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostedCellGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetGhostedCellGhostArray(temp0) :
      op->vtkAbstractGridConnectivity::GetGhostedCellGhostArray(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_GetGhostedGridPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostedGridPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPointData *tempr = (ap.IsBound() ?
      op->GetGhostedGridPointData(temp0) :
      op->vtkAbstractGridConnectivity::GetGhostedGridPointData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_GetGhostedGridCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostedGridCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCellData *tempr = (ap.IsBound() ?
      op->GetGhostedGridCellData(temp0) :
      op->vtkAbstractGridConnectivity::GetGhostedGridCellData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractGridConnectivity_GetGhostedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractGridConnectivity *op = static_cast<vtkAbstractGridConnectivity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetGhostedPoints(temp0) :
      op->vtkAbstractGridConnectivity::GetGhostedPoints(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractGridConnectivity_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractGridConnectivity_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractGridConnectivity_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractGridConnectivity_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAbstractGridConnectivity\nC++: vtkAbstractGridConnectivity *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAbstractGridConnectivity_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAbstractGridConnectivity\nC++: vtkAbstractGridConnectivity *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfGhostLayers", PyvtkAbstractGridConnectivity_SetNumberOfGhostLayers, METH_VARARGS,
   (char*)"V.SetNumberOfGhostLayers(int)\nC++: void SetNumberOfGhostLayers(unsigned int a)\n\nSet/Get the number of ghost layers\n"},
  {(char*)"GetNumberOfGhostLayers", PyvtkAbstractGridConnectivity_GetNumberOfGhostLayers, METH_VARARGS,
   (char*)"V.GetNumberOfGhostLayers() -> int\nC++: unsigned int GetNumberOfGhostLayers()\n\nSet/Get the number of ghost layers\n"},
  {(char*)"SetNumberOfGrids", PyvtkAbstractGridConnectivity_SetNumberOfGrids, METH_VARARGS,
   (char*)"V.SetNumberOfGrids(int)\nC++: virtual void SetNumberOfGrids(const unsigned int N)\n\nSets the total number of grids in the domain. Note: This method\nis implemented by concrete classes. NOTE: Concrete classes\nimplementing this pure virtual method must set the number of\ngrids and call AllocateUserRegisterDataStructures in addition to\ndefining any other additional functionality.\n"},
  {(char*)"GetNumberOfGrids", PyvtkAbstractGridConnectivity_GetNumberOfGrids, METH_VARARGS,
   (char*)"V.GetNumberOfGrids() -> int\nC++: unsigned int GetNumberOfGrids()\n\nReturns the total number of grids.\n"},
  {(char*)"ComputeNeighbors", PyvtkAbstractGridConnectivity_ComputeNeighbors, METH_VARARGS,
   (char*)"V.ComputeNeighbors()\nC++: virtual void ComputeNeighbors()\n\nComputes the grid neighboring topology for the domain\n"},
  {(char*)"CreateGhostLayers", PyvtkAbstractGridConnectivity_CreateGhostLayers, METH_VARARGS,
   (char*)"V.CreateGhostLayers(int)\nC++: virtual void CreateGhostLayers(const int N=1)\n\nCreates N layers of ghost layers where N is the number of cells\nthat will be added to each grid. If no parameter is supplied, N\nhas a nominal value of 1, in which case 1 layer of cells would be\nadded. NOTE: This method is implemented by concrete\nimplementations\n"},
  {(char*)"GetGhostedPointGhostArray", PyvtkAbstractGridConnectivity_GetGhostedPointGhostArray, METH_VARARGS,
   (char*)"V.GetGhostedPointGhostArray(int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetGhostedPointGhostArray(\n    const int gridID)\n\nReturns the ghosted points ghost array for the grid associated\nwith the given grid ID. The return pointer is a shallow-copy of\nthe internal data-structure. The pointer may be NULL iff there is\nno ghosted points ghost array for the requested grid.\n"},
  {(char*)"GetGhostedCellGhostArray", PyvtkAbstractGridConnectivity_GetGhostedCellGhostArray, METH_VARARGS,
   (char*)"V.GetGhostedCellGhostArray(int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetGhostedCellGhostArray(\n    const int gridID)\n\nReturns the ghosted cells ghost array for the grid associated\nwith the given grid ID. The return pointer is a shallow-copy of\nthe internal data-structure. The pointer may be NULL iff there is\nno ghosted cells ghost array for the requested grid.\n"},
  {(char*)"GetGhostedGridPointData", PyvtkAbstractGridConnectivity_GetGhostedGridPointData, METH_VARARGS,
   (char*)"V.GetGhostedGridPointData(int) -> vtkPointData\nC++: vtkPointData *GetGhostedGridPointData(const int gridID)\n\nReturns the ghosted grid point data for the grid associated with\nthe given grid ID. The return pointer is a shallow-copy of the\ninternal data-structure. The pointer may be NULL iff there is no\nghosted point data for the requested grid.\n"},
  {(char*)"GetGhostedGridCellData", PyvtkAbstractGridConnectivity_GetGhostedGridCellData, METH_VARARGS,
   (char*)"V.GetGhostedGridCellData(int) -> vtkCellData\nC++: vtkCellData *GetGhostedGridCellData(const int gridID)\n\nReturns the ghosted grid cell data for the grid associated with\nthe given grid ID. The return pointer is a shallow-copy of the\ninternal data-structure. The pointer may be NULL iff there is no\nghosted cell data for the requested grid.\n"},
  {(char*)"GetGhostedPoints", PyvtkAbstractGridConnectivity_GetGhostedPoints, METH_VARARGS,
   (char*)"V.GetGhostedPoints(int) -> vtkPoints\nC++: vtkPoints *GetGhostedPoints(const int gridID)\n\nReturns the ghosted grid points for the grid associated with the\ngiven grid ID. The return pointer is a shallow-copy of the\ninternal data structure. The pointer may be NULL iff there are no\nghosted points created for the requested grid.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractGridConnectivityNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractGridConnectivity_Methods,
    "vtkAbstractGridConnectivity", modulename,
    NULL, NULL,
    PyvtkAbstractGridConnectivity_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAbstractGridConnectivity_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractGridConnectivity.h -- Superclass for GridConnectivity\n\n",
    "Superclass: vtkObject\n\n",
    "A superclass that defines the interface to be implemented by all\n concrete grid connectivity classes. Grid connectivity classes\nprovide the\n mechanism to achieve the following:\n \n   \n     Handling of partitioned/distributed data\n\n\n      Construct the neighboring topology information for each\npartition,e.g.,\n      used for creating communication lists and in computing\nstatistics,i.e.,\n      average",
    ", mean, etc.\n     \n     Creation of ghost layers\n\n\n      Provides the mechanism for automatically generating ghost\ninformation\n      given a partitioned/distributed grid configuration.\n     \n   \n \n\nSee Also:\n\n\n vtkStructuredGridConnectivity vtkStructuredAMRGridConnectivity\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractGridConnectivity(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractGridConnectivityNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractGridConnectivity", o) != 0)
    {
    Py_DECREF(o);
    }

}

