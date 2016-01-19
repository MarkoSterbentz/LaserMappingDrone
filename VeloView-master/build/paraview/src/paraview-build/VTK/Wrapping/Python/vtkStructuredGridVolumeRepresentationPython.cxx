// python wrapper for vtkStructuredGridVolumeRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStructuredGridVolumeRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStructuredGridVolumeRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStructuredGridVolumeRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridVolumeRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridVolumeRepresentationNew
#endif

static const char **PyvtkStructuredGridVolumeRepresentation_Doc();


static PyObject *
PyvtkStructuredGridVolumeRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridVolumeRepresentation *op = static_cast<vtkStructuredGridVolumeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStructuredGridVolumeRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridVolumeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridVolumeRepresentation *op = static_cast<vtkStructuredGridVolumeRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredGridVolumeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridVolumeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridVolumeRepresentation *op = static_cast<vtkStructuredGridVolumeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredGridVolumeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredGridVolumeRepresentation::NewInstance());

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
PyvtkStructuredGridVolumeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStructuredGridVolumeRepresentation *tempr = vtkStructuredGridVolumeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridVolumeRepresentation_SetUseDataParititions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDataParititions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridVolumeRepresentation *op = static_cast<vtkStructuredGridVolumeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDataParititions(temp0);
      }
    else
      {
      op->vtkStructuredGridVolumeRepresentation::SetUseDataParititions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridVolumeRepresentation_GetUseDataParititions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDataParititions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridVolumeRepresentation *op = static_cast<vtkStructuredGridVolumeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseDataParititions() :
      op->vtkStructuredGridVolumeRepresentation::GetUseDataParititions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridVolumeRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridVolumeRepresentation *op = static_cast<vtkStructuredGridVolumeRepresentation *>(vp);

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
      op->vtkStructuredGridVolumeRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredGridVolumeRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredGridVolumeRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredGridVolumeRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredGridVolumeRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStructuredGridVolumeRepresentation\nC++: vtkStructuredGridVolumeRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredGridVolumeRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredGridVolumeRepresentation\nC++: vtkStructuredGridVolumeRepresentation *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetUseDataParititions", PyvtkStructuredGridVolumeRepresentation_SetUseDataParititions, METH_VARARGS,
   (char*)"V.SetUseDataParititions(bool)\nC++: void SetUseDataParititions(bool)\n\nWhen on (default), the representation tells the view to use the\npartitioning information from the input structured grid for\nordered compositing. When off we let the view build its own\nordering and redistribute data as needed.\n"},
  {(char*)"GetUseDataParititions", PyvtkStructuredGridVolumeRepresentation_GetUseDataParititions, METH_VARARGS,
   (char*)"V.GetUseDataParititions() -> bool\nC++: bool GetUseDataParititions()\n\nWhen on (default), the representation tells the view to use the\npartitioning information from the input structured grid for\nordered compositing. When off we let the view build its own\nordering and redistribute data as needed.\n"},
  {(char*)"ProcessViewRequest", PyvtkStructuredGridVolumeRepresentation_ProcessViewRequest, METH_VARARGS,
   (char*)"V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: virtual int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo)\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredGridVolumeRepresentation_StaticNew()
{
  return vtkStructuredGridVolumeRepresentation::New();
}

PyObject *PyVTKClass_vtkStructuredGridVolumeRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredGridVolumeRepresentation_StaticNew,
    PyvtkStructuredGridVolumeRepresentation_Methods,
    "vtkStructuredGridVolumeRepresentation", modulename,
    NULL, NULL,
    PyvtkStructuredGridVolumeRepresentation_Doc(),
    PyVTKClass_vtkUnstructuredGridVolumeRepresentationNew(modulename));
  return cls;
}

const char **PyvtkStructuredGridVolumeRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredGridVolumeRepresentation - representation for showing\n\n",
    "Superclass: vtkUnstructuredGridVolumeRepresentation\n\n",
    "vtkStructuredGridVolumeRepresentation is a representation for volume\nrendering vtkStructuredGrid datasets with one caveat: it assumes that\nthe structured grid is not \"curved\" i.e. bounding boxes of\nnon-intersecting extents don't intersect (or intersect negligibly).\nThis is the default (and faster) method. Alternatively, one can set\nUseDataParititions to off and the representation will simply reply",
    " on\nthe view to build the sorting order using the unstructured grid. In\nwhich case, however data will be transferred among processing.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredGridVolumeRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredGridVolumeRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredGridVolumeRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

