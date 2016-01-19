// python wrapper for vtkInformationIntegerRequestKey
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationIntegerRequestKey.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInformationIntegerRequestKey(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInformationIntegerRequestKeyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInformationIntegerKeyNew
extern "C" { PyObject *PyVTKClass_vtkInformationIntegerKeyNew(const char *); }
#define DECLARED_PyVTKClass_vtkInformationIntegerKeyNew
#endif

static const char **PyvtkInformationIntegerRequestKey_Doc();


static PyObject *
PyvtkInformationIntegerRequestKey_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInformationIntegerRequestKey::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationIntegerRequestKey::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformationIntegerRequestKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationIntegerRequestKey::NewInstance());

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
PyvtkInformationIntegerRequestKey_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInformationIntegerRequestKey *tempr = vtkInformationIntegerRequestKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_MakeKey(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeKey");

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkInformationIntegerRequestKey *tempr = vtkInformationIntegerRequestKey::MakeKey(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_NeedToExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedToExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    bool tempr = (ap.IsBound() ?
      op->NeedToExecute(temp0, temp1) :
      op->vtkInformationIntegerRequestKey::NeedToExecute(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_StoreMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StoreMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

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
      op->StoreMetaData(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformationIntegerRequestKey::StoreMetaData(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_CopyDefaultInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyDefaultInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

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
      op->vtkInformationIntegerRequestKey::CopyDefaultInformation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationIntegerRequestKey_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationIntegerRequestKey_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationIntegerRequestKey_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationIntegerRequestKey_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInformationIntegerRequestKey\nC++: vtkInformationIntegerRequestKey *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInformationIntegerRequestKey_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInformationIntegerRequestKey\nC++: vtkInformationIntegerRequestKey *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"MakeKey", PyvtkInformationIntegerRequestKey_MakeKey, METH_VARARGS | METH_STATIC,
   (char*)"V.MakeKey(string, string) -> vtkInformationIntegerRequestKey\nC++: static vtkInformationIntegerRequestKey *MakeKey(\n    const char *name, const char *location)\n\nThis method simply returns a new vtkInformationIntegerRequestKey,\ngiven a name and a location. This method is provided for\nwrappers. Use the constructor directly from C++ instead.\n"},
  {(char*)"NeedToExecute", PyvtkInformationIntegerRequestKey_NeedToExecute, METH_VARARGS,
   (char*)"V.NeedToExecute(vtkInformation, vtkInformation) -> bool\nC++: virtual bool NeedToExecute(vtkInformation *pipelineInfo,\n    vtkInformation *dobjInfo)\n\nReturns true if a value of type DataKey does not exist in\ndobjInfo or if it is different that the value stored in\npipelineInfo using this key.\n"},
  {(char*)"StoreMetaData", PyvtkInformationIntegerRequestKey_StoreMetaData, METH_VARARGS,
   (char*)"V.StoreMetaData(vtkInformation, vtkInformation, vtkInformation)\nC++: virtual void StoreMetaData(vtkInformation *request,\n    vtkInformation *pipelineInfo, vtkInformation *dobjInfo)\n\nCopies the value stored in pipelineInfo using this key into\ndobjInfo.\n"},
  {(char*)"CopyDefaultInformation", PyvtkInformationIntegerRequestKey_CopyDefaultInformation, METH_VARARGS,
   (char*)"V.CopyDefaultInformation(vtkInformation, vtkInformation,\n    vtkInformation)\nC++: virtual void CopyDefaultInformation(vtkInformation *request,\n    vtkInformation *fromInfo, vtkInformation *toInfo)\n\nCopies the value stored in fromInfo using this key into toInfo if\nrequest has the REQUEST_UPDATE_EXTENT key.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInformationIntegerRequestKeyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInformationIntegerRequestKey_Methods,
    "vtkInformationIntegerRequestKey", modulename,
    NULL, NULL,
    PyvtkInformationIntegerRequestKey_Doc(),
    PyVTKClass_vtkInformationIntegerKeyNew(modulename));
  return cls;
}

const char **PyvtkInformationIntegerRequestKey_Doc()
{
  static const char *docstring[] = {
    "vtkInformationIntegerRequestKey - key that can used to request\ninteger values from the pipeline\n\n",
    "Superclass: vtkInformationIntegerKey\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationIntegerRequestKey(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationIntegerRequestKeyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationIntegerRequestKey", o) != 0)
    {
    Py_DECREF(o);
    }

}

