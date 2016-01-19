// python wrapper for vtkCellData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCellData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCellData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCellDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAttributesNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAttributesNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAttributesNew
#endif

static const char **PyvtkCellData_Doc();


static PyObject *
PyvtkCellData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellData *op = static_cast<vtkCellData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCellData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellData *op = static_cast<vtkCellData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellData *op = static_cast<vtkCellData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellData::NewInstance());

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
PyvtkCellData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCellData *tempr = vtkCellData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCellData_Methods[] = {
  {(char*)"GetClassName", PyvtkCellData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCellData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCellData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCellData\nC++: vtkCellData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCellData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCellData\nC++: vtkCellData *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCellData_StaticNew()
{
  return vtkCellData::New();
}

PyObject *PyVTKClass_vtkCellDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCellData_StaticNew,
    PyvtkCellData_Methods,
    "vtkCellData", modulename,
    NULL, NULL,
    PyvtkCellData_Doc(),
    PyVTKClass_vtkDataSetAttributesNew(modulename));
  return cls;
}

const char **PyvtkCellData_Doc()
{
  static const char *docstring[] = {
    "vtkCellData - represent and manipulate cell attribute data\n\n",
    "Superclass: vtkDataSetAttributes\n\n",
    "vtkCellData is a class that is used to represent and manipulate cell\nattribute data (e.g., scalars, vectors, normals, texture coordinates,\netc.) Special methods are provided to work with filter objects, such\nas passing data through filter, copying data from one cell to\nanother, and interpolating data given cell interpolation weights.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellData", o) != 0)
    {
    Py_DECREF(o);
    }

}

