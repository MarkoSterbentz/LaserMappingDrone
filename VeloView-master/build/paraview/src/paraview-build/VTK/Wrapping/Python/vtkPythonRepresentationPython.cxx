// python wrapper for vtkPythonRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPythonRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPythonRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPythonRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkPVDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVDataRepresentationNew
#endif

static const char **PyvtkPythonRepresentation_Doc();


static PyObject *
PyvtkPythonRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPythonRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPythonRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonRepresentation::NewInstance());

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
PyvtkPythonRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPythonRepresentation *tempr = vtkPythonRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  vtkInformation *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkPythonRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_GetLocalInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetLocalInput() :
      op->vtkPythonRepresentation::GetLocalInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_GetClientDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetClientDataObject() :
      op->vtkPythonRepresentation::GetClientDataObject());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_GetNumberOfAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAttributeArrays(temp0) :
      op->vtkPythonRepresentation::GetNumberOfAttributeArrays(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_GetAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeArrayName(temp0, temp1) :
      op->vtkPythonRepresentation::GetAttributeArrayName(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_SetAttributeArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetAttributeArrayStatus(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPythonRepresentation::SetAttributeArrayStatus(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_GetAttributeArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttributeArrayStatus(temp0, temp1) :
      op->vtkPythonRepresentation::GetAttributeArrayStatus(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_EnableAllAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllAttributeArrays();
      }
    else
      {
      op->vtkPythonRepresentation::EnableAllAttributeArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonRepresentation_DisableAllAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonRepresentation *op = static_cast<vtkPythonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllAttributeArrays();
      }
    else
      {
      op->vtkPythonRepresentation::DisableAllAttributeArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPythonRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkPythonRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPythonRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPythonRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPythonRepresentation\nC++: vtkPythonRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPythonRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPythonRepresentation\nC++: vtkPythonRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ProcessViewRequest", PyvtkPythonRepresentation_ProcessViewRequest, METH_VARARGS,
   (char*)"V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: virtual int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo)\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering. Overridden to skip processing when\nvisibility if off.\n"},
  {(char*)"GetLocalInput", PyvtkPythonRepresentation_GetLocalInput, METH_VARARGS,
   (char*)"V.GetLocalInput() -> vtkDataObject\nC++: vtkDataObject *GetLocalInput()\n\nGets local copy of the input. This will be NULL on the client\nwhen running in client-only mode until after Update() is called.\n"},
  {(char*)"GetClientDataObject", PyvtkPythonRepresentation_GetClientDataObject, METH_VARARGS,
   (char*)"V.GetClientDataObject() -> vtkDataObject\nC++: vtkDataObject *GetClientDataObject()\n\nGets the client's copy of the input\n"},
  {(char*)"GetNumberOfAttributeArrays", PyvtkPythonRepresentation_GetNumberOfAttributeArrays, METH_VARARGS,
   (char*)"V.GetNumberOfAttributeArrays(int) -> int\nC++: int GetNumberOfAttributeArrays(int attributeType)\n\nGet number of arrays in an attribute (e.g., vtkDataObject::POINT,\nvtkDataObject::CELL, vtkDataObject::ROW,\nvtkDataObject::FIELD_DATA).\n"},
  {(char*)"GetAttributeArrayName", PyvtkPythonRepresentation_GetAttributeArrayName, METH_VARARGS,
   (char*)"V.GetAttributeArrayName(int, int) -> string\nC++: const char *GetAttributeArrayName(int attributeType,\n    int arrayIndex)\n\nFrom the input data, get the name of attribute array at index for\nthe given attribute type.\n"},
  {(char*)"SetAttributeArrayStatus", PyvtkPythonRepresentation_SetAttributeArrayStatus, METH_VARARGS,
   (char*)"V.SetAttributeArrayStatus(int, string, int)\nC++: void SetAttributeArrayStatus(int attributeType,\n    const char *name, int status)\n\nSet the array status for the input data object. A status of 1\nmeans that the array with the given name for the given attribute\nwill be copied to the client. A status of 0 means the array will\nnot be copied to the client. The status is 0 by default.\n"},
  {(char*)"GetAttributeArrayStatus", PyvtkPythonRepresentation_GetAttributeArrayStatus, METH_VARARGS,
   (char*)"V.GetAttributeArrayStatus(int, string) -> int\nC++: int GetAttributeArrayStatus(int attributeType,\n    const char *name)\n\nGet the status indicating whether the array with the given name\nand attribute type in the input will be copied to the client.\nStatus is 0 by default.\n"},
  {(char*)"EnableAllAttributeArrays", PyvtkPythonRepresentation_EnableAllAttributeArrays, METH_VARARGS,
   (char*)"V.EnableAllAttributeArrays()\nC++: void EnableAllAttributeArrays()\n\nEnable all arrays. When called, all arrays will be marked as\nenabled.\n"},
  {(char*)"DisableAllAttributeArrays", PyvtkPythonRepresentation_DisableAllAttributeArrays, METH_VARARGS,
   (char*)"V.DisableAllAttributeArrays()\nC++: void DisableAllAttributeArrays()\n\nDisable all arrays. When called, all arrays will be marked as\ndisabled.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPythonRepresentation_StaticNew()
{
  return vtkPythonRepresentation::New();
}

PyObject *PyVTKClass_vtkPythonRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPythonRepresentation_StaticNew,
    PyvtkPythonRepresentation_Methods,
    "vtkPythonRepresentation", modulename,
    NULL, NULL,
    PyvtkPythonRepresentation_Doc(),
    PyVTKClass_vtkPVDataRepresentationNew(modulename));
  return cls;
}

const char **PyvtkPythonRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkPythonRepresentation\n\n",
    "Superclass: vtkPVDataRepresentation\n\n",
    "Representation for showing data in a vtkPythonView. This\nrepresentation does not create any intermediate data for display.\nInstead, it simply fetches data from the server.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPythonRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPythonRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPythonRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

