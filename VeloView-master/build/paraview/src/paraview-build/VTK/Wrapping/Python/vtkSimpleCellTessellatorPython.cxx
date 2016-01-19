// python wrapper for vtkSimpleCellTessellator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSimpleCellTessellator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSimpleCellTessellator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSimpleCellTessellatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGenericCellTessellatorNew
extern "C" { PyObject *PyVTKClass_vtkGenericCellTessellatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkGenericCellTessellatorNew
#endif

static const char **PyvtkSimpleCellTessellator_Doc();


static PyObject *
PyvtkSimpleCellTessellator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSimpleCellTessellator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSimpleCellTessellator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSimpleCellTessellator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSimpleCellTessellator::NewInstance());

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
PyvtkSimpleCellTessellator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSimpleCellTessellator *tempr = vtkSimpleCellTessellator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_GetGenericCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericAdaptorCell *tempr = (ap.IsBound() ?
      op->GetGenericCell() :
      op->vtkSimpleCellTessellator::GetGenericCell());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_TessellateFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TessellateFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  vtkGenericAdaptorCell *temp0 = NULL;
  vtkGenericAttributeCollection *temp1 = NULL;
  vtkIdType temp2;
  vtkDoubleArray *temp3 = NULL;
  vtkCellArray *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell") &&
      ap.GetVTKObject(temp1, "vtkGenericAttributeCollection") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDoubleArray") &&
      ap.GetVTKObject(temp4, "vtkCellArray") &&
      ap.GetVTKObject(temp5, "vtkPointData"))
    {
    if (ap.IsBound())
      {
      op->TessellateFace(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkSimpleCellTessellator::TessellateFace(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_Tessellate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Tessellate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  vtkGenericAdaptorCell *temp0 = NULL;
  vtkGenericAttributeCollection *temp1 = NULL;
  vtkDoubleArray *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell") &&
      ap.GetVTKObject(temp1, "vtkGenericAttributeCollection") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData"))
    {
    if (ap.IsBound())
      {
      op->Tessellate(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkSimpleCellTessellator::Tessellate(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  vtkGenericAdaptorCell *temp0 = NULL;
  vtkGenericAttributeCollection *temp1 = NULL;
  vtkDoubleArray *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell") &&
      ap.GetVTKObject(temp1, "vtkGenericAttributeCollection") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData"))
    {
    if (ap.IsBound())
      {
      op->Triangulate(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkSimpleCellTessellator::Triangulate(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkSimpleCellTessellator::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  vtkGenericDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericDataSet"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkSimpleCellTessellator::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_GetFixedSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFixedSubdivisions() :
      op->vtkSimpleCellTessellator::GetFixedSubdivisions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_GetMaxSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxSubdivisionLevel() :
      op->vtkSimpleCellTessellator::GetMaxSubdivisionLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_GetMaxAdaptiveSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxAdaptiveSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxAdaptiveSubdivisions() :
      op->vtkSimpleCellTessellator::GetMaxAdaptiveSubdivisions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_SetFixedSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFixedSubdivisions(temp0);
      }
    else
      {
      op->vtkSimpleCellTessellator::SetFixedSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_SetMaxSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxSubdivisionLevel(temp0);
      }
    else
      {
      op->vtkSimpleCellTessellator::SetMaxSubdivisionLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_SetSubdivisionLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivisionLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSubdivisionLevels(temp0, temp1);
      }
    else
      {
      op->vtkSimpleCellTessellator::SetSubdivisionLevels(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSimpleCellTessellator_Methods[] = {
  {(char*)"GetClassName", PyvtkSimpleCellTessellator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSimpleCellTessellator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSimpleCellTessellator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSimpleCellTessellator\nC++: vtkSimpleCellTessellator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSimpleCellTessellator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSimpleCellTessellator\nC++: vtkSimpleCellTessellator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetGenericCell", PyvtkSimpleCellTessellator_GetGenericCell, METH_VARARGS,
   (char*)"V.GetGenericCell() -> vtkGenericAdaptorCell\nC++: vtkGenericAdaptorCell *GetGenericCell()\n\nGet the higher order cell in order to access the evaluation\nfunction.\n"},
  {(char*)"TessellateFace", PyvtkSimpleCellTessellator_TessellateFace, METH_VARARGS,
   (char*)"V.TessellateFace(vtkGenericAdaptorCell,\n    vtkGenericAttributeCollection, int, vtkDoubleArray,\n    vtkCellArray, vtkPointData)\nC++: void TessellateFace(vtkGenericAdaptorCell *cell,\n    vtkGenericAttributeCollection *att, vtkIdType index,\n    vtkDoubleArray *points, vtkCellArray *cellArray,\n    vtkPointData *internalPd)\n\nTessellate a face of a 3D `cell'. The face is specified by the\nindex value. The result is a set of smaller linear triangles in\n`cellArray' with `points' and point data `internalPd'.\n\\pre cell_exists: cell!=0\n\\pre valid_dimension: cell->GetDimension()==3\n\\pre valid_index_range: (index>=0) &&\n    (index<cell->GetNumberOfBoundaries(2))\n\\pre att_exists: att!=0\n\\pre points_exists: points!=0\n\\pre cellArray_exists: cellArray!=0\n\\pre internalPd_exists: internalPd!=0\n"},
  {(char*)"Tessellate", PyvtkSimpleCellTessellator_Tessellate, METH_VARARGS,
   (char*)"V.Tessellate(vtkGenericAdaptorCell, vtkGenericAttributeCollection,\n     vtkDoubleArray, vtkCellArray, vtkPointData)\nC++: void Tessellate(vtkGenericAdaptorCell *cell,\n    vtkGenericAttributeCollection *att, vtkDoubleArray *points,\n    vtkCellArray *cellArray, vtkPointData *internalPd)\n\nTessellate a 3D `cell'. The result is a set of smaller linear\ntetrahedra in `cellArray' with `points' and point data\n`internalPd'.\n\\pre cell_exists: cell!=0\n\\pre valid_dimension: cell->GetDimension()==3\n\\pre att_exists: att!=0\n\\pre points_exists: points!=0\n\\pre cellArray_exists: cellArray!=0\n\\pre internalPd_exists: internalPd!=0\n"},
  {(char*)"Triangulate", PyvtkSimpleCellTessellator_Triangulate, METH_VARARGS,
   (char*)"V.Triangulate(vtkGenericAdaptorCell,\n    vtkGenericAttributeCollection, vtkDoubleArray, vtkCellArray,\n    vtkPointData)\nC++: void Triangulate(vtkGenericAdaptorCell *cell,\n    vtkGenericAttributeCollection *att, vtkDoubleArray *points,\n    vtkCellArray *cellArray, vtkPointData *internalPd)\n\nTriangulate a 2D `cell'. The result is a set of smaller linear\ntriangles in `cellArray' with `points' and point data\n`internalPd'.\n\\pre cell_exists: cell!=0\n\\pre valid_dimension: cell->GetDimension()==2\n\\pre att_exists: att!=0\n\\pre points_exists: points!=0\n\\pre cellArray_exists: cellArray!=0\n\\pre internalPd_exists: internalPd!=0\n"},
  {(char*)"Reset", PyvtkSimpleCellTessellator_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\nReset the output for repeated use of this class.\n"},
  {(char*)"Initialize", PyvtkSimpleCellTessellator_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkGenericDataSet)\nC++: void Initialize(vtkGenericDataSet *ds)\n\nInitialize the tessellator with a data set `ds'.\n"},
  {(char*)"GetFixedSubdivisions", PyvtkSimpleCellTessellator_GetFixedSubdivisions, METH_VARARGS,
   (char*)"V.GetFixedSubdivisions() -> int\nC++: int GetFixedSubdivisions()\n\nReturn the number of fixed subdivisions. It is used to prevent\nfrom infinite loop in degenerated cases. For order 3 or higher,\nif the inflection point is exactly on the mid-point, error metric\nwill not detect that a subdivision is required. 0 means no fixed\nsubdivision: there will be only adaptive subdivisions.\n\nThe algorithm first performs `GetFixedSubdivisions' non adaptive\nsubdivisions followed by at most `GetMaxAdaptiveSubdivisions'\nadaptive subdivisions. Hence, there are at most\n`GetMaxSubdivisionLevel' subdivisions.\n\\post positive_result: result>=0 &&\n    result<=GetMaxSubdivisionLevel()\n"},
  {(char*)"GetMaxSubdivisionLevel", PyvtkSimpleCellTessellator_GetMaxSubdivisionLevel, METH_VARARGS,
   (char*)"V.GetMaxSubdivisionLevel() -> int\nC++: int GetMaxSubdivisionLevel()\n\nReturn the maximum level of subdivision. It is used to prevent\nfrom infinite loop in degenerated cases. For order 3 or higher,\nif the inflection point is exactly on the mid-point, error metric\nwill not detect that a subdivision is required. 0 means no\nsubdivision, neither fixed nor adaptive.\n\\post positive_result: result>=GetFixedSubdivisions()\n"},
  {(char*)"GetMaxAdaptiveSubdivisions", PyvtkSimpleCellTessellator_GetMaxAdaptiveSubdivisions, METH_VARARGS,
   (char*)"V.GetMaxAdaptiveSubdivisions() -> int\nC++: int GetMaxAdaptiveSubdivisions()\n\nReturn the maximum number of adaptive subdivisions.\n\\post valid_result:\n    result==GetMaxSubdivisionLevel()-GetFixedSubdivisions()\n"},
  {(char*)"SetFixedSubdivisions", PyvtkSimpleCellTessellator_SetFixedSubdivisions, METH_VARARGS,
   (char*)"V.SetFixedSubdivisions(int)\nC++: void SetFixedSubdivisions(int level)\n\nSet the number of fixed subdivisions. See GetFixedSubdivisions()\nfor more explanations.\n\\pre positive_level: level>=0 && level<=GetMaxSubdivisionLevel()\n\\post is_set: GetFixedSubdivisions()==level\n"},
  {(char*)"SetMaxSubdivisionLevel", PyvtkSimpleCellTessellator_SetMaxSubdivisionLevel, METH_VARARGS,
   (char*)"V.SetMaxSubdivisionLevel(int)\nC++: void SetMaxSubdivisionLevel(int level)\n\nSet the maximum level of subdivision. See\nGetMaxSubdivisionLevel() for more explanations.\n\\pre positive_level: level>=GetFixedSubdivisions()\n\\post is_set: level==GetMaxSubdivisionLevel()\n"},
  {(char*)"SetSubdivisionLevels", PyvtkSimpleCellTessellator_SetSubdivisionLevels, METH_VARARGS,
   (char*)"V.SetSubdivisionLevels(int, int)\nC++: void SetSubdivisionLevels(int fixed, int maxLevel)\n\nSet both the number of fixed subdivisions and the maximum level\nof subdivisions. See GetFixedSubdivisions(),\nGetMaxSubdivisionLevel() and GetMaxAdaptiveSubdivisions() for\nmore explanations.\n\\pre positive_fixed: fixed>=0\n\\pre valid_range: fixed<=maxLevel\n\\post fixed_is_set: fixed==GetFixedSubdivisions()\n\\post maxLevel_is_set: maxLevel==GetMaxSubdivisionLevel()\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSimpleCellTessellator_StaticNew()
{
  return vtkSimpleCellTessellator::New();
}

PyObject *PyVTKClass_vtkSimpleCellTessellatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSimpleCellTessellator_StaticNew,
    PyvtkSimpleCellTessellator_Methods,
    "vtkSimpleCellTessellator", modulename,
    NULL, NULL,
    PyvtkSimpleCellTessellator_Doc(),
    PyVTKClass_vtkGenericCellTessellatorNew(modulename));
  return cls;
}

const char **PyvtkSimpleCellTessellator_Doc()
{
  static const char *docstring[] = {
    "vtkSimpleCellTessellator - helper class to perform cell tessellation\n\n",
    "Superclass: vtkGenericCellTessellator\n\n",
    "vtkSimpleCellTessellator is a helper class to perform adaptive\ntessellation of particular cell topologies. The major purpose for\nthis class is to transform higher-order cell types (e.g.,\nhigher-order finite elements) into linear cells that can then be\neasily visualized by VTK. This class works in conjunction with the\nvtkGenericDataSet and vtkGenericAdaptorCell classes.\n\nThis algorithm is based on ",
    "edge subdivision. An error metric along\neach edge is evaluated, and if the error is greater than some\ntolerance, the edge is subdivided (as well as all connected 2D and 3D\ncells). The process repeats until the error metric is satisfied.\nSince the algorithm is based on edge subdivision it inherently avoid\nT-junctions.\n\nA significant issue addressed by this algorithm is to insure face\ncompatibility ",
    "across neigboring cells. That is, diagonals due to face\ntriangulation must match to insure that the mesh is compatible. The\nalgorithm employs a precomputed table to accelerate the tessellation\nprocess. The table was generated with the help of\nvtkOrderedTriangulator the basic idea is that the choice of diagonal\nis made only by considering the relative value of the point ids.\n\nSee Also:\n\nvtkGenericC",
    "ellTessellator vtkGenericSubdivisionErrorMetric\nvtkAttributesErrorMetric vtkGeometricErrorMetric\nvtkViewDependentErrorMetric\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSimpleCellTessellator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSimpleCellTessellatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSimpleCellTessellator", o) != 0)
    {
    Py_DECREF(o);
    }

}

