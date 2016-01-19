// python wrapper for vtkDensifyPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDensifyPolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDensifyPolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDensifyPolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkDensifyPolyData_Doc();


static PyObject *
PyvtkDensifyPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPolyData *op = static_cast<vtkDensifyPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDensifyPolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDensifyPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPolyData *op = static_cast<vtkDensifyPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDensifyPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDensifyPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPolyData *op = static_cast<vtkDensifyPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDensifyPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDensifyPolyData::NewInstance());

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
PyvtkDensifyPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDensifyPolyData *tempr = vtkDensifyPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDensifyPolyData_SetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPolyData *op = static_cast<vtkDensifyPolyData *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSubdivisions(temp0);
      }
    else
      {
      op->vtkDensifyPolyData::SetNumberOfSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDensifyPolyData_GetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPolyData *op = static_cast<vtkDensifyPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfSubdivisions() :
      op->vtkDensifyPolyData::GetNumberOfSubdivisions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDensifyPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkDensifyPolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDensifyPolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDensifyPolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDensifyPolyData\nC++: vtkDensifyPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDensifyPolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDensifyPolyData\nC++: vtkDensifyPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfSubdivisions", PyvtkDensifyPolyData_SetNumberOfSubdivisions, METH_VARARGS,
   (char*)"V.SetNumberOfSubdivisions(int)\nC++: void SetNumberOfSubdivisions(unsigned int a)\n\nNumber of recursive subdivisions. Initial value is 1.\n"},
  {(char*)"GetNumberOfSubdivisions", PyvtkDensifyPolyData_GetNumberOfSubdivisions, METH_VARARGS,
   (char*)"V.GetNumberOfSubdivisions() -> int\nC++: unsigned int GetNumberOfSubdivisions()\n\nNumber of recursive subdivisions. Initial value is 1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDensifyPolyData_StaticNew()
{
  return vtkDensifyPolyData::New();
}

PyObject *PyVTKClass_vtkDensifyPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDensifyPolyData_StaticNew,
    PyvtkDensifyPolyData_Methods,
    "vtkDensifyPolyData", modulename,
    NULL, NULL,
    PyvtkDensifyPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDensifyPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkDensifyPolyData - Densify the input by adding points at the\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "The filter takes any polygonal data as input and will tessellate\ncells that are planar polygons present by fanning out triangles from\nits centroid. Other cells are simply passed through to the output. \nPointData, if present, is interpolated via linear interpolation.\nCellData for any tessellated cell is simply copied over from its\nparent cell. Planar polygons are assumed to be convex. Funny things\n",
    "will happen if they are not.\n\nThe number of subdivisions can be controlled by the parameter\nNumberOfSubdivisions.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDensifyPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDensifyPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDensifyPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

