// python wrapper for vtkCoincidentPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCoincidentPoints.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCoincidentPoints(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCoincidentPointsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCoincidentPoints_Doc();


static PyObject *
PyvtkCoincidentPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCoincidentPoints::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCoincidentPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCoincidentPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCoincidentPoints::NewInstance());

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
PyvtkCoincidentPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCoincidentPoints *tempr = vtkCoincidentPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_AddPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  vtkIdType temp0;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->AddPoint(temp0, temp1);
      }
    else
      {
      op->vtkCoincidentPoints::AddPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_GetCoincidentPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoincidentPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetCoincidentPointIds(temp0) :
      op->vtkCoincidentPoints::GetCoincidentPointIds(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_GetNextCoincidentPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextCoincidentPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetNextCoincidentPointIds() :
      op->vtkCoincidentPoints::GetNextCoincidentPointIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal();
      }
    else
      {
      op->vtkCoincidentPoints::InitTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_RemoveNonCoincidentPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNonCoincidentPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveNonCoincidentPoints();
      }
    else
      {
      op->vtkCoincidentPoints::RemoveNonCoincidentPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkCoincidentPoints::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_SpiralPoints(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SpiralPoints");

  vtkIdType temp0;
  vtkPoints *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPoints"))
    {
    vtkCoincidentPoints::SpiralPoints(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCoincidentPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkCoincidentPoints_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCoincidentPoints_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCoincidentPoints_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCoincidentPoints\nC++: vtkCoincidentPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCoincidentPoints_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCoincidentPoints\nC++: vtkCoincidentPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddPoint", PyvtkCoincidentPoints_AddPoint, METH_VARARGS,
   (char*)"V.AddPoint(int, (float, float, float))\nC++: void AddPoint(vtkIdType Id, const double point[3])\n\nAccumulates a set of Ids in a map where the point coordinate is\nthe key. All Ids in a given map entry are thus coincident.\n@param Id - a unique Id for the given point that will be stored\n    in an vtkIdList.\n@param[in] point - the point coordinate that we will store in the\nmap to test if any other points are\ncoincident with it.\n"},
  {(char*)"GetCoincidentPointIds", PyvtkCoincidentPoints_GetCoincidentPointIds, METH_VARARGS,
   (char*)"V.GetCoincidentPointIds((float, float, float)) -> vtkIdList\nC++: vtkIdList *GetCoincidentPointIds(const double point[3])\n\nRetrieve the list of point Ids that are coincident with the given\npoint.\n@param[in] point - the coordinate of coincident points we want to\nretrieve.\n"},
  {(char*)"GetNextCoincidentPointIds", PyvtkCoincidentPoints_GetNextCoincidentPointIds, METH_VARARGS,
   (char*)"V.GetNextCoincidentPointIds() -> vtkIdList\nC++: vtkIdList *GetNextCoincidentPointIds()\n\nUsed to iterate the sets of coincident points within the map.\nInitTraversal must be called first or NULL will always be\nreturned.\n"},
  {(char*)"InitTraversal", PyvtkCoincidentPoints_InitTraversal, METH_VARARGS,
   (char*)"V.InitTraversal()\nC++: void InitTraversal()\n\n"},
  {(char*)"RemoveNonCoincidentPoints", PyvtkCoincidentPoints_RemoveNonCoincidentPoints, METH_VARARGS,
   (char*)"V.RemoveNonCoincidentPoints()\nC++: void RemoveNonCoincidentPoints()\n\n"},
  {(char*)"Clear", PyvtkCoincidentPoints_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\n"},
  {(char*)"SpiralPoints", PyvtkCoincidentPoints_SpiralPoints, METH_VARARGS | METH_STATIC,
   (char*)"V.SpiralPoints(int, vtkPoints)\nC++: static void SpiralPoints(vtkIdType num, vtkPoints *offsets)\n\nCalculate num points, at a regular interval, along a parametric\nspiral. Note this spiral is only in two dimensions having a\nconstant z value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCoincidentPoints_StaticNew()
{
  return vtkCoincidentPoints::New();
}

PyObject *PyVTKClass_vtkCoincidentPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCoincidentPoints_StaticNew,
    PyvtkCoincidentPoints_Methods,
    "vtkCoincidentPoints", modulename,
    NULL, NULL,
    PyvtkCoincidentPoints_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCoincidentPoints_Doc()
{
  static const char *docstring[] = {
    "vtkCoincidentPoints - contains an octree of labels\n\n",
    "Superclass: vtkObject\n\n",
    "This class provides a collection of points that is organized such\nthat each coordinate is stored with a set of point id's of points\nthat are all coincident.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCoincidentPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCoincidentPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCoincidentPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

