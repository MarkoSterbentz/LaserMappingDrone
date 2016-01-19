// python wrapper for vtkNonOverlappingAMR
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkNonOverlappingAMR.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNonOverlappingAMR(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNonOverlappingAMRNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUniformGridAMRNew
extern "C" { PyObject *PyVTKClass_vtkUniformGridAMRNew(const char *); }
#define DECLARED_PyVTKClass_vtkUniformGridAMRNew
#endif

static const char **PyvtkNonOverlappingAMR_Doc();


static PyObject *
PyvtkNonOverlappingAMR_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonOverlappingAMR *op = static_cast<vtkNonOverlappingAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNonOverlappingAMR::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonOverlappingAMR_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonOverlappingAMR *op = static_cast<vtkNonOverlappingAMR *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNonOverlappingAMR::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonOverlappingAMR_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonOverlappingAMR *op = static_cast<vtkNonOverlappingAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNonOverlappingAMR *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNonOverlappingAMR::NewInstance());

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
PyvtkNonOverlappingAMR_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNonOverlappingAMR *tempr = vtkNonOverlappingAMR::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonOverlappingAMR_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonOverlappingAMR *op = static_cast<vtkNonOverlappingAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkNonOverlappingAMR::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonOverlappingAMR_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkNonOverlappingAMR *tempr = vtkNonOverlappingAMR::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkNonOverlappingAMR_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkNonOverlappingAMR *tempr = vtkNonOverlappingAMR::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkNonOverlappingAMR_GetData_Methods[] = {
  {NULL, PyvtkNonOverlappingAMR_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkNonOverlappingAMR_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkNonOverlappingAMR_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkNonOverlappingAMR_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkNonOverlappingAMR_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkNonOverlappingAMR_Methods[] = {
  {(char*)"GetClassName", PyvtkNonOverlappingAMR_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNonOverlappingAMR_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNonOverlappingAMR_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNonOverlappingAMR\nC++: vtkNonOverlappingAMR *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNonOverlappingAMR_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNonOverlappingAMR\nC++: vtkNonOverlappingAMR *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkNonOverlappingAMR_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturns object type (see vtkType.h for definitions).\n"},
  {(char*)"GetData", PyvtkNonOverlappingAMR_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkNonOverlappingAMR\nC++: static vtkNonOverlappingAMR *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkNonOverlappingAMR\nC++: static vtkNonOverlappingAMR *GetData(vtkInformationVector *v,\n     int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNonOverlappingAMR_StaticNew()
{
  return vtkNonOverlappingAMR::New();
}

PyObject *PyVTKClass_vtkNonOverlappingAMRNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNonOverlappingAMR_StaticNew,
    PyvtkNonOverlappingAMR_Methods,
    "vtkNonOverlappingAMR", modulename,
    NULL, NULL,
    PyvtkNonOverlappingAMR_Doc(),
    PyVTKClass_vtkUniformGridAMRNew(modulename));
  return cls;
}

const char **PyvtkNonOverlappingAMR_Doc()
{
  static const char *docstring[] = {
    "vtkNonOverlappingAMR.h -- Non-Overlapping AMR\n\n",
    "Superclass: vtkUniformGridAMR\n\n",
    "A concrete instance of vtkUniformGridAMR to store uniform grids at\ndifferent\n levels of resolution that do not overlap with each other.\n\nSee Also:\n\nvtkUniformGridAMR\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNonOverlappingAMR(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNonOverlappingAMRNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNonOverlappingAMR", o) != 0)
    {
    Py_DECREF(o);
    }

}

