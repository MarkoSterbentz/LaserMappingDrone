// python wrapper for vtkPointData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPointData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPointData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPointDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAttributesNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAttributesNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAttributesNew
#endif

static const char **PyvtkPointData_Doc();


static PyObject *
PyvtkPointData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointData *op = static_cast<vtkPointData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPointData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointData *op = static_cast<vtkPointData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointData *op = static_cast<vtkPointData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPointData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointData::NewInstance());

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
PyvtkPointData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPointData *tempr = vtkPointData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointData_NullPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NullPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointData *op = static_cast<vtkPointData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->NullPoint(temp0);
      }
    else
      {
      op->vtkPointData::NullPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPointData_Methods[] = {
  {(char*)"GetClassName", PyvtkPointData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPointData\nC++: vtkPointData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPointData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointData\nC++: vtkPointData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"NullPoint", PyvtkPointData_NullPoint, METH_VARARGS,
   (char*)"V.NullPoint(int)\nC++: void NullPoint(vtkIdType ptId)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointData_StaticNew()
{
  return vtkPointData::New();
}

PyObject *PyVTKClass_vtkPointDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointData_StaticNew,
    PyvtkPointData_Methods,
    "vtkPointData", modulename,
    NULL, NULL,
    PyvtkPointData_Doc(),
    PyVTKClass_vtkDataSetAttributesNew(modulename));
  return cls;
}

const char **PyvtkPointData_Doc()
{
  static const char *docstring[] = {
    "vtkPointData - represent and manipulate point attribute data\n\n",
    "Superclass: vtkDataSetAttributes\n\n",
    "vtkPointData is a class that is used to represent and manipulate\npoint attribute data (e.g., scalars, vectors, normals, texture\ncoordinates, etc.) Most of the functionality is handled by\nvtkDataSetAttributes\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointData", o) != 0)
    {
    Py_DECREF(o);
    }

}

