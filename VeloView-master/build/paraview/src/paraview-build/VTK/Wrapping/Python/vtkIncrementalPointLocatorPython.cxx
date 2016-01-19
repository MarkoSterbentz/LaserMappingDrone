// python wrapper for vtkIncrementalPointLocator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkIncrementalPointLocator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkIncrementalPointLocatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractPointLocatorNew
extern "C" { PyObject *PyVTKClass_vtkAbstractPointLocatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractPointLocatorNew
#endif

static const char **PyvtkIncrementalPointLocator_Doc();


static PyObject *
PyvtkIncrementalPointLocator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkIncrementalPointLocator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIncrementalPointLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIncrementalPointLocator::NewInstance());

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
PyvtkIncrementalPointLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkIncrementalPointLocator *tempr = vtkIncrementalPointLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Initialize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_FindClosestInsertedPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkIdType tempr = op->FindClosestInsertedPoint(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_InitPointInsertion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  vtkPoints *temp0 = NULL;
  double temp1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1))
    {
    int tempr = op->InitPointInsertion(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkIncrementalPointLocator_InitPointInsertion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  vtkPoints *temp0 = NULL;
  double temp1[6];
  const int size1 = 6;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    int tempr = op->InitPointInsertion(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkIncrementalPointLocator_InitPointInsertion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkIncrementalPointLocator_InitPointInsertion_s1(self, args);
    case 3:
      return PyvtkIncrementalPointLocator_InitPointInsertion_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InitPointInsertion");
  return NULL;
}



static PyObject *
PyvtkIncrementalPointLocator_IsInsertedPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkIdType tempr = op->IsInsertedPoint(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkIncrementalPointLocator_IsInsertedPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkIdType tempr = op->IsInsertedPoint(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkIncrementalPointLocator_IsInsertedPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkIncrementalPointLocator_IsInsertedPoint_s1(self, args);
    case 1:
      return PyvtkIncrementalPointLocator_IsInsertedPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsInsertedPoint");
  return NULL;
}



static PyObject *
PyvtkIncrementalPointLocator_InsertUniquePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniquePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    int tempr = op->InsertUniquePoint(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_InsertPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  vtkIdType temp0;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    op->InsertPoint(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_InsertNextPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkIdType tempr = op->InsertNextPoint(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkIncrementalPointLocator_Methods[] = {
  {(char*)"GetClassName", PyvtkIncrementalPointLocator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIncrementalPointLocator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIncrementalPointLocator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIncrementalPointLocator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkIncrementalPointLocator_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nDelete the search structure.\n"},
  {(char*)"FindClosestInsertedPoint", PyvtkIncrementalPointLocator_FindClosestInsertedPoint, METH_VARARGS,
   (char*)"V.FindClosestInsertedPoint((float, float, float)) -> int\nC++: virtual vtkIdType FindClosestInsertedPoint(const double x[3])\n\nGiven a point x assumed to be covered by the search structure,\nreturn the index of the closest point (already inserted to the\nsearch structure) regardless of the associated minimum squared\ndistance relative to the squared insertion-tolerance distance.\nThis method is used when performing incremental point insertion.\nNote -1 indicates that no point is found. InitPointInsertion()\nshould have been called in advance.\n"},
  {(char*)"InitPointInsertion", PyvtkIncrementalPointLocator_InitPointInsertion, METH_VARARGS,
   (char*)"V.InitPointInsertion(vtkPoints, (float, float, float, float,\n    float, float)) -> int\nC++: virtual int InitPointInsertion(vtkPoints *newPts,\n    const double bounds[6])\nV.InitPointInsertion(vtkPoints, (float, float, float, float,\n    float, float), int) -> int\nC++: virtual int InitPointInsertion(vtkPoints *newPts,\n    const double bounds[6], vtkIdType estSize)\n\nInitialize the point insertion process. newPts is an object,\nstoring 3D point coordinates, to which incremental point\ninsertion puts coordinates. It is created and provided by an\nexternal VTK class. Argument bounds represents the spatial\nbounding box, into which the points fall.\n"},
  {(char*)"IsInsertedPoint", PyvtkIncrementalPointLocator_IsInsertedPoint, METH_VARARGS,
   (char*)"V.IsInsertedPoint(float, float, float) -> int\nC++: virtual vtkIdType IsInsertedPoint(double x, double y,\n    double z)\nV.IsInsertedPoint((float, float, float)) -> int\nC++: virtual vtkIdType IsInsertedPoint(const double x[3])\n\nDetermine whether or not a given point has been inserted. Return\nthe id of the already inserted point if true, else return -1.\nInitPointInsertion() should have been called in advance.\n"},
  {(char*)"InsertUniquePoint", PyvtkIncrementalPointLocator_InsertUniquePoint, METH_VARARGS,
   (char*)"V.InsertUniquePoint((float, float, float), int) -> int\nC++: virtual int InsertUniquePoint(const double x[3],\n    vtkIdType &ptId)\n\nInsert a point unless there has been a duplciate in the search\nstructure. This method is not thread safe.\n"},
  {(char*)"InsertPoint", PyvtkIncrementalPointLocator_InsertPoint, METH_VARARGS,
   (char*)"V.InsertPoint(int, (float, float, float))\nC++: virtual void InsertPoint(vtkIdType ptId, const double x[3])\n\nInsert a given point with a specified point index ptId.\nInitPointInsertion() should have been called prior to this\nfunction. Also, IsInsertedPoint() should have been called in\nadvance to ensure that the given point has not been inserted\nunless point duplication is allowed.\n"},
  {(char*)"InsertNextPoint", PyvtkIncrementalPointLocator_InsertNextPoint, METH_VARARGS,
   (char*)"V.InsertNextPoint((float, float, float)) -> int\nC++: virtual vtkIdType InsertNextPoint(const double x[3])\n\nInsert a given point and return the point index.\nInitPointInsertion() should have been called prior to this\nfunction. Also, IsInsertedPoint() should have been called in\nadvance to ensure that the given point has not been inserted\nunless point duplication is allowed.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkIncrementalPointLocatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkIncrementalPointLocator_Methods,
    "vtkIncrementalPointLocator", modulename,
    NULL, NULL,
    PyvtkIncrementalPointLocator_Doc(),
    PyVTKClass_vtkAbstractPointLocatorNew(modulename));
  return cls;
}

const char **PyvtkIncrementalPointLocator_Doc()
{
  static const char *docstring[] = {
    "vtkIncrementalPointLocator - Abstract class in support of both\n\n",
    "Superclass: vtkAbstractPointLocator\n\n",
    "Compared to a static point locator for pure location functionalities\n through some search structure established from a fixed set of\npoints,\n an incremental point locator allows for, in addition, point\ninsertion\n capabilities, with the search structure maintaining a dynamically\n increasing number of points. There are two incremental point\nlocators,\n i.e., vtkPointLocator and vtkIncrementalOctreePoi",
    "ntLocator. As\nopposed\n to the uniform bin-based search structure (adopted in\nvtkPointLocator)\n with a fixed spatial resolution, an octree mechanism (employed in\n vtkIncrementalOctreePointlocator) resorts to a hierarchy of\ntree-like\n sub-division of the 3D data domain. Thus it enables data-aware\nmulti-\n resolution and accordingly accelerated point location as well as\npoint\n insertion, particularly ",
    "when handling a radically imbalanced layout\nof\n points as not uncommon in datasets defined on adaptive meshes. In\nother\n words, vtkIncrementalOctreePointLocator is an octree-based\naccelerated\n implementation of all functionalities of vtkPointLocator.\n\nSee Also:\n\n\n vtkLocator, vtkIncrementalOctreePointLocator, vtkPointLocator,\n vtkMergePoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIncrementalPointLocator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIncrementalPointLocatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIncrementalPointLocator", o) != 0)
    {
    Py_DECREF(o);
    }

}

