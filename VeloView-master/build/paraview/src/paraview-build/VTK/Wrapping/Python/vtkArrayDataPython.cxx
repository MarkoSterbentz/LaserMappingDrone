// python wrapper for vtkArrayData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkArrayData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkArrayData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkArrayDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkArrayData_Doc();


static PyObject *
PyvtkArrayData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayData *op = static_cast<vtkArrayData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkArrayData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayData *op = static_cast<vtkArrayData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayData *op = static_cast<vtkArrayData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArrayData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayData::NewInstance());

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
PyvtkArrayData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkArrayData *tempr = vtkArrayData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayData_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkArrayData *tempr = vtkArrayData::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkArrayData_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkArrayData *tempr = vtkArrayData::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkArrayData_GetData_Methods[] = {
  {NULL, PyvtkArrayData_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkArrayData_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkArrayData_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayData_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkArrayData_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkArrayData_AddArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayData *op = static_cast<vtkArrayData *>(vp);

  vtkArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkArray"))
    {
    if (ap.IsBound())
      {
      op->AddArray(temp0);
      }
    else
      {
      op->vtkArrayData::AddArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayData_ClearArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayData *op = static_cast<vtkArrayData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearArrays();
      }
    else
      {
      op->vtkArrayData::ClearArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayData_GetNumberOfArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayData *op = static_cast<vtkArrayData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfArrays() :
      op->vtkArrayData::GetNumberOfArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayData_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayData *op = static_cast<vtkArrayData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->GetArray(temp0) :
      op->vtkArrayData::GetArray(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayData_GetArrayByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayData *op = static_cast<vtkArrayData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->GetArrayByName(temp0) :
      op->vtkArrayData::GetArrayByName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayData_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayData *op = static_cast<vtkArrayData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkArrayData::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayData_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayData *op = static_cast<vtkArrayData *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkArrayData::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayData *op = static_cast<vtkArrayData *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkArrayData::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkArrayData_Methods[] = {
  {(char*)"GetClassName", PyvtkArrayData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArrayData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArrayData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkArrayData\nC++: vtkArrayData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkArrayData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkArrayData\nC++: vtkArrayData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetData", PyvtkArrayData_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkArrayData\nC++: static vtkArrayData *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkArrayData\nC++: static vtkArrayData *GetData(vtkInformationVector *v,\n    int i=0)\n\n"},
  {(char*)"AddArray", PyvtkArrayData_AddArray, METH_VARARGS,
   (char*)"V.AddArray(vtkArray)\nC++: void AddArray(vtkArray *)\n\nAdds a vtkArray to the collection\n"},
  {(char*)"ClearArrays", PyvtkArrayData_ClearArrays, METH_VARARGS,
   (char*)"V.ClearArrays()\nC++: void ClearArrays()\n\nClears the contents of the collection\n"},
  {(char*)"GetNumberOfArrays", PyvtkArrayData_GetNumberOfArrays, METH_VARARGS,
   (char*)"V.GetNumberOfArrays() -> int\nC++: vtkIdType GetNumberOfArrays()\n\nReturns the number of vtkArray instances in the collection\n"},
  {(char*)"GetArray", PyvtkArrayData_GetArray, METH_VARARGS,
   (char*)"V.GetArray(int) -> vtkArray\nC++: vtkArray *GetArray(vtkIdType index)\n\nReturns the n-th vtkArray in the collection\n"},
  {(char*)"GetArrayByName", PyvtkArrayData_GetArrayByName, METH_VARARGS,
   (char*)"V.GetArrayByName(string) -> vtkArray\nC++: vtkArray *GetArrayByName(const char *name)\n\nReturns the array having called name from the collection\n"},
  {(char*)"GetDataObjectType", PyvtkArrayData_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn class name of data type (VTK_ARRAY_DATA).\n"},
  {(char*)"ShallowCopy", PyvtkArrayData_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *other)\n\n"},
  {(char*)"DeepCopy", PyvtkArrayData_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *other)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkArrayData_StaticNew()
{
  return vtkArrayData::New();
}

PyObject *PyVTKClass_vtkArrayDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkArrayData_StaticNew,
    PyvtkArrayData_Methods,
    "vtkArrayData", modulename,
    NULL, NULL,
    PyvtkArrayData_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkArrayData_Doc()
{
  static const char *docstring[] = {
    "vtkArrayData - Pipeline data object that contains multiple vtkArray\nobjects.\n\n",
    "Superclass: vtkDataObject\n\n",
    "Because vtkArray cannot be stored as attributes of data objects\n(yet), a \"carrier\" object is needed to pass vtkArray through the\npipeline.  vtkArrayData acts as a container of zero-to-many vtkArray\ninstances, which can be retrieved via a zero-based index.  Note that\na collection of arrays stored in vtkArrayData may-or-may-not have\nrelated types, dimensions, or extents.\n\nSee Also:\n\nvtkArrayDataAlgo",
    "rithm, vtkArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrayData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArrayDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrayData", o) != 0)
    {
    Py_DECREF(o);
    }

}

