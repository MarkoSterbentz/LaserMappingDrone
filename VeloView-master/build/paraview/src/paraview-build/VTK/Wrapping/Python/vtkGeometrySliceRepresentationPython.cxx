// python wrapper for vtkGeometrySliceRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGeometrySliceRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGeometrySliceRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGeometrySliceRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGeometryRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkGeometryRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkGeometryRepresentationNew
#endif

static const char **PyvtkGeometrySliceRepresentation_Doc();


static PyObject *
PyvtkGeometrySliceRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGeometrySliceRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGeometrySliceRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGeometrySliceRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGeometrySliceRepresentation::NewInstance());

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
PyvtkGeometrySliceRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGeometrySliceRepresentation *tempr = vtkGeometrySliceRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

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
      op->vtkGeometrySliceRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMode(temp0);
      }
    else
      {
      op->vtkGeometrySliceRepresentation::SetMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_GetModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetModeMinValue() :
      op->vtkGeometrySliceRepresentation::GetModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_GetModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetModeMaxValue() :
      op->vtkGeometrySliceRepresentation::GetModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkGeometrySliceRepresentation::GetMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_SetShowOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowOutline(temp0);
      }
    else
      {
      op->vtkGeometrySliceRepresentation::SetShowOutline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_GetShowOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetShowOutline() :
      op->vtkGeometrySliceRepresentation::GetShowOutline());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeometrySliceRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkGeometrySliceRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeometrySliceRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeometrySliceRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGeometrySliceRepresentation\nC++: vtkGeometrySliceRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeometrySliceRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeometrySliceRepresentation\nC++: vtkGeometrySliceRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ProcessViewRequest", PyvtkGeometrySliceRepresentation_ProcessViewRequest, METH_VARARGS,
   (char*)"V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: virtual int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo)\n\n"},
  {(char*)"SetMode", PyvtkGeometrySliceRepresentation_SetMode, METH_VARARGS,
   (char*)"V.SetMode(int)\nC++: void SetMode(int)\n\n"},
  {(char*)"GetModeMinValue", PyvtkGeometrySliceRepresentation_GetModeMinValue, METH_VARARGS,
   (char*)"V.GetModeMinValue() -> int\nC++: int GetModeMinValue()\n\n"},
  {(char*)"GetModeMaxValue", PyvtkGeometrySliceRepresentation_GetModeMaxValue, METH_VARARGS,
   (char*)"V.GetModeMaxValue() -> int\nC++: int GetModeMaxValue()\n\n"},
  {(char*)"GetMode", PyvtkGeometrySliceRepresentation_GetMode, METH_VARARGS,
   (char*)"V.GetMode() -> int\nC++: int GetMode()\n\n"},
  {(char*)"SetShowOutline", PyvtkGeometrySliceRepresentation_SetShowOutline, METH_VARARGS,
   (char*)"V.SetShowOutline(bool)\nC++: void SetShowOutline(bool a)\n\nGet/Set whether original data outline should be shown in the\nview.\n"},
  {(char*)"GetShowOutline", PyvtkGeometrySliceRepresentation_GetShowOutline, METH_VARARGS,
   (char*)"V.GetShowOutline() -> bool\nC++: bool GetShowOutline()\n\nGet/Set whether original data outline should be shown in the\nview.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeometrySliceRepresentation_StaticNew()
{
  return vtkGeometrySliceRepresentation::New();
}

PyObject *PyVTKClass_vtkGeometrySliceRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeometrySliceRepresentation_StaticNew,
    PyvtkGeometrySliceRepresentation_Methods,
    "vtkGeometrySliceRepresentation", modulename,
    NULL, NULL,
    PyvtkGeometrySliceRepresentation_Doc(),
    PyVTKClass_vtkGeometryRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 4; c++)
      {
      static const struct { const char *name; int value; }
        constants[4] = {
          { "X_SLICE_ONLY", vtkGeometrySliceRepresentation::X_SLICE_ONLY },
          { "Y_SLICE_ONLY", vtkGeometrySliceRepresentation::Y_SLICE_ONLY },
          { "Z_SLICE_ONLY", vtkGeometrySliceRepresentation::Z_SLICE_ONLY },
          { "ALL_SLICES", vtkGeometrySliceRepresentation::ALL_SLICES },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkGeometrySliceRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkGeometrySliceRepresentation - extends vtkGeometryRepresentation to\n\n",
    "Superclass: vtkGeometryRepresentation\n\n",
    "vtkGeometrySliceRepresentation extends vtkGeometryRepresentation to\nshow slices from the dataset. This is used for vtkPVMultiSliceView\nand vtkPVOrthographicSliceView.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeometrySliceRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeometrySliceRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeometrySliceRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

