// python wrapper for vtkHierarchicalBoxDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHierarchicalBoxDataSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHierarchicalBoxDataSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHierarchicalBoxDataSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkOverlappingAMRNew
extern "C" { PyObject *PyVTKClass_vtkOverlappingAMRNew(const char *); }
#define DECLARED_PyVTKClass_vtkOverlappingAMRNew
#endif

static const char **PyvtkHierarchicalBoxDataSet_Doc();


static PyObject *
PyvtkHierarchicalBoxDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHierarchicalBoxDataSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHierarchicalBoxDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHierarchicalBoxDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHierarchicalBoxDataSet::NewInstance());

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
PyvtkHierarchicalBoxDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHierarchicalBoxDataSet *tempr = vtkHierarchicalBoxDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeDataIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkHierarchicalBoxDataSet::NewIterator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkHierarchicalBoxDataSet::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkHierarchicalBoxDataSet *tempr = vtkHierarchicalBoxDataSet::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHierarchicalBoxDataSet_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkHierarchicalBoxDataSet *tempr = vtkHierarchicalBoxDataSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalBoxDataSet_GetData_Methods[] = {
  {NULL, PyvtkHierarchicalBoxDataSet_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkHierarchicalBoxDataSet_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkHierarchicalBoxDataSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkHierarchicalBoxDataSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkHierarchicalBoxDataSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkHierarchicalBoxDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkHierarchicalBoxDataSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHierarchicalBoxDataSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHierarchicalBoxDataSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHierarchicalBoxDataSet\nC++: vtkHierarchicalBoxDataSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHierarchicalBoxDataSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHierarchicalBoxDataSet\nC++: vtkHierarchicalBoxDataSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"NewIterator", PyvtkHierarchicalBoxDataSet_NewIterator, METH_VARARGS,
   (char*)"V.NewIterator() -> vtkCompositeDataIterator\nC++: virtual vtkCompositeDataIterator *NewIterator()\n\nReturn a new iterator (the iterator has to be deleted by user).\n"},
  {(char*)"GetDataObjectType", PyvtkHierarchicalBoxDataSet_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {(char*)"GetData", PyvtkHierarchicalBoxDataSet_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkHierarchicalBoxDataSet\nC++: static vtkHierarchicalBoxDataSet *GetData(\n    vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkHierarchicalBoxDataSet\nC++: static vtkHierarchicalBoxDataSet *GetData(\n    vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHierarchicalBoxDataSet_StaticNew()
{
  return vtkHierarchicalBoxDataSet::New();
}

PyObject *PyVTKClass_vtkHierarchicalBoxDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHierarchicalBoxDataSet_StaticNew,
    PyvtkHierarchicalBoxDataSet_Methods,
    "vtkHierarchicalBoxDataSet", modulename,
    NULL, NULL,
    PyvtkHierarchicalBoxDataSet_Doc(),
    PyVTKClass_vtkOverlappingAMRNew(modulename));
  return cls;
}

const char **PyvtkHierarchicalBoxDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkHierarchicalBoxDataSet - Backwards compatibility class\n\n",
    "Superclass: vtkOverlappingAMR\n\n",
    "An empty class for backwards compatiblity\n\nSee Also:\n\nvtkUniformGridAM vtkOverlappingAMR vtkNonOverlappingAMR\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHierarchicalBoxDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHierarchicalBoxDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHierarchicalBoxDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

