// python wrapper for vtkPVDataInformationHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVDataInformationHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVDataInformationHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVDataInformationHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVDataInformationHelper_Doc();


static PyObject *
PyvtkPVDataInformationHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformationHelper *op = static_cast<vtkPVDataInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVDataInformationHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformationHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformationHelper *op = static_cast<vtkPVDataInformationHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDataInformationHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformationHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformationHelper *op = static_cast<vtkPVDataInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataInformationHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDataInformationHelper::NewInstance());

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
PyvtkPVDataInformationHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVDataInformationHelper *tempr = vtkPVDataInformationHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformationHelper_CopyFromDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformationHelper *op = static_cast<vtkPVDataInformationHelper *>(vp);

  vtkPVDataInformation *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVDataInformation") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->CopyFromDataObject(temp0, temp1);
      }
    else
      {
      op->vtkPVDataInformationHelper::CopyFromDataObject(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformationHelper_GetPrettyDataTypeString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrettyDataTypeString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformationHelper *op = static_cast<vtkPVDataInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    const char *tempr = op->GetPrettyDataTypeString();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVDataInformationHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkPVDataInformationHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVDataInformationHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVDataInformationHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVDataInformationHelper\nC++: vtkPVDataInformationHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVDataInformationHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVDataInformationHelper\nC++: vtkPVDataInformationHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CopyFromDataObject", PyvtkPVDataInformationHelper_CopyFromDataObject, METH_VARARGS,
   (char*)"V.CopyFromDataObject(vtkPVDataInformation, vtkDataObject)\nC++: void CopyFromDataObject(vtkPVDataInformation *self,\n    vtkDataObject *data)\n\n"},
  {(char*)"GetPrettyDataTypeString", PyvtkPVDataInformationHelper_GetPrettyDataTypeString, METH_VARARGS,
   (char*)"V.GetPrettyDataTypeString() -> string\nC++: virtual const char *GetPrettyDataTypeString()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPVDataInformationHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPVDataInformationHelper_Methods,
    "vtkPVDataInformationHelper", modulename,
    NULL, NULL,
    PyvtkPVDataInformationHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVDataInformationHelper_Doc()
{
  static const char *docstring[] = {
    "vtkPVDataInformationHelper - allows extension of types that\n\n",
    "Superclass: vtkObject\n\n",
    "Plugins can subclass this and call\nvtkPVDataInformation::RegisterHelper() in order to allow\nvtkPVDataInformation (and thus ParaView) to handle new data types.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVDataInformationHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVDataInformationHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVDataInformationHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

