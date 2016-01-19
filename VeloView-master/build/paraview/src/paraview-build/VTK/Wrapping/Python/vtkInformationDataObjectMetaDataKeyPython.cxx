// python wrapper for vtkInformationDataObjectMetaDataKey
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationDataObjectMetaDataKey.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInformationDataObjectMetaDataKey(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInformationDataObjectMetaDataKeyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInformationDataObjectKeyNew
extern "C" { PyObject *PyVTKClass_vtkInformationDataObjectKeyNew(const char *); }
#define DECLARED_PyVTKClass_vtkInformationDataObjectKeyNew
#endif

static const char **PyvtkInformationDataObjectMetaDataKey_Doc();


static PyObject *
PyvtkInformationDataObjectMetaDataKey_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationDataObjectMetaDataKey *op = static_cast<vtkInformationDataObjectMetaDataKey *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInformationDataObjectMetaDataKey::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationDataObjectMetaDataKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationDataObjectMetaDataKey *op = static_cast<vtkInformationDataObjectMetaDataKey *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationDataObjectMetaDataKey::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationDataObjectMetaDataKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationDataObjectMetaDataKey *op = static_cast<vtkInformationDataObjectMetaDataKey *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformationDataObjectMetaDataKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationDataObjectMetaDataKey::NewInstance());

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
PyvtkInformationDataObjectMetaDataKey_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInformationDataObjectMetaDataKey *tempr = vtkInformationDataObjectMetaDataKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationDataObjectMetaDataKey_MakeKey(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeKey");

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkInformationDataObjectMetaDataKey *tempr = vtkInformationDataObjectMetaDataKey::MakeKey(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationDataObjectMetaDataKey_CopyDefaultInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyDefaultInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationDataObjectMetaDataKey *op = static_cast<vtkInformationDataObjectMetaDataKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  vtkInformation *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->CopyDefaultInformation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformationDataObjectMetaDataKey::CopyDefaultInformation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationDataObjectMetaDataKey_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationDataObjectMetaDataKey_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationDataObjectMetaDataKey_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationDataObjectMetaDataKey_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInformationDataObjectMetaDataKey\nC++: vtkInformationDataObjectMetaDataKey *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInformationDataObjectMetaDataKey_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInformationDataObjectMetaDataKey\nC++: vtkInformationDataObjectMetaDataKey *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"MakeKey", PyvtkInformationDataObjectMetaDataKey_MakeKey, METH_VARARGS | METH_STATIC,
   (char*)"V.MakeKey(string, string) -> vtkInformationDataObjectMetaDataKey\nC++: static vtkInformationDataObjectMetaDataKey *MakeKey(\n    const char *name, const char *location)\n\nThis method simply returns a new\nvtkInformationDataObjectMetaDataKey, given a name and a location.\nThis method is provided for wrappers. Use the constructor\ndirectly from C++ instead.\n"},
  {(char*)"CopyDefaultInformation", PyvtkInformationDataObjectMetaDataKey_CopyDefaultInformation, METH_VARARGS,
   (char*)"V.CopyDefaultInformation(vtkInformation, vtkInformation,\n    vtkInformation)\nC++: virtual void CopyDefaultInformation(vtkInformation *request,\n    vtkInformation *fromInfo, vtkInformation *toInfo)\n\nSimply shallow copies the key from fromInfo to toInfo if request\nhas the REQUEST_INFORMATION() key. This is used by the pipeline\nto propagate this key downstream.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInformationDataObjectMetaDataKeyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInformationDataObjectMetaDataKey_Methods,
    "vtkInformationDataObjectMetaDataKey", modulename,
    NULL, NULL,
    PyvtkInformationDataObjectMetaDataKey_Doc(),
    PyVTKClass_vtkInformationDataObjectKeyNew(modulename));
  return cls;
}

const char **PyvtkInformationDataObjectMetaDataKey_Doc()
{
  static const char *docstring[] = {
    "vtkInformationDataObjectMetaDataKey - key used to define meta-data of\ntype vtkDataObject\n\n",
    "Superclass: vtkInformationDataObjectKey\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationDataObjectMetaDataKey(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationDataObjectMetaDataKeyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationDataObjectMetaDataKey", o) != 0)
    {
    Py_DECREF(o);
    }

}

