// python wrapper for vtkGeometryRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGeometryRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGeometryRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGeometryRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkPVDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVDataRepresentationNew
#endif

static const char **PyvtkGeometryRepresentation_Doc();

#ifndef DECLARED_PyvtkGeometryRepresentation_RepresentationTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkGeometryRepresentation_RepresentationTypes_Type;
#define DECLARED_PyvtkGeometryRepresentation_RepresentationTypes_Type
#endif

PyTypeObject PyvtkGeometryRepresentation_RepresentationTypes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"RepresentationTypes", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkGeometryRepresentation_RepresentationTypes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGeometryRepresentation_RepresentationTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkGeometryRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGeometryRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGeometryRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGeometryRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGeometryRepresentation::NewInstance());

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
PyvtkGeometryRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGeometryRepresentation *tempr = vtkGeometryRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

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
      op->vtkGeometryRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MarkModified();
      }
    else
      {
      op->vtkGeometryRepresentation::MarkModified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVisibility(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetSuppressLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuppressLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSuppressLOD(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetSuppressLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAmbient(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetAmbient(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiffuse(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetDiffuse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpecular(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetSpecular(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAmbient() :
      op->vtkGeometryRepresentation::GetAmbient());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDiffuse() :
      op->vtkGeometryRepresentation::GetDiffuse());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSpecular() :
      op->vtkGeometryRepresentation::GetSpecular());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetRepresentation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeometryRepresentation_SetRepresentation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGeometryRepresentation_SetRepresentation_Methods[] = {
  {NULL, PyvtkGeometryRepresentation_SetRepresentation_s1, METH_VARARGS,
   (char*)"@i"},
  {NULL, PyvtkGeometryRepresentation_SetRepresentation_s2, METH_VARARGS,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGeometryRepresentation_SetRepresentation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGeometryRepresentation_SetRepresentation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRepresentation");
  return NULL;
}



static PyObject *
PyvtkGeometryRepresentation_GetRepresentationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMinValue() :
      op->vtkGeometryRepresentation::GetRepresentationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetRepresentationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMaxValue() :
      op->vtkGeometryRepresentation::GetRepresentationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtkGeometryRepresentation::GetRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetRenderedDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderedDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetRenderedDataObject(temp0) :
      op->vtkGeometryRepresentation::GetRenderedDataObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_DoRequestGhostCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DoRequestGhostCells");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    bool tempr = vtkGeometryRepresentation::DoRequestGhostCells(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetRequestGhostCellsIfNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestGhostCellsIfNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRequestGhostCellsIfNeeded(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetRequestGhostCellsIfNeeded(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetRequestGhostCellsIfNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestGhostCellsIfNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRequestGhostCellsIfNeeded() :
      op->vtkGeometryRepresentation::GetRequestGhostCellsIfNeeded());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_RequestGhostCellsIfNeededOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestGhostCellsIfNeededOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RequestGhostCellsIfNeededOn();
      }
    else
      {
      op->vtkGeometryRepresentation::RequestGhostCellsIfNeededOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_RequestGhostCellsIfNeededOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestGhostCellsIfNeededOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RequestGhostCellsIfNeededOff();
      }
    else
      {
      op->vtkGeometryRepresentation::RequestGhostCellsIfNeededOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetUseOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOutline(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetUseOutline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetTriangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTriangulate(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetTriangulate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetNonlinearSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonlinearSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNonlinearSubdivisionLevel(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetNonlinearSubdivisionLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetAmbientColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetAmbientColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGeometryRepresentation::SetAmbientColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGeometryRepresentation::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetDiffuseColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetDiffuseColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGeometryRepresentation::SetDiffuseColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetEdgeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetEdgeColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGeometryRepresentation::SetEdgeColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolation(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetInterpolation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineWidth(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetLineWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOpacity(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointSize(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetPointSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetSpecularColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetSpecularColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGeometryRepresentation::SetSpecularColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetSpecularPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpecularPower(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetSpecularPower(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetOrientation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGeometryRepresentation::SetOrientation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGeometryRepresentation::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPickable(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetPickable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGeometryRepresentation::SetPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetScale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGeometryRepresentation::SetScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  vtkTexture *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
    {
    if (ap.IsBound())
      {
      op->SetTexture(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetUserTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0[16];
  const int size0 = 16;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetUserTransform(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetUserTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetInterpolateScalarsBeforeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateScalarsBeforeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolateScalarsBeforeMapping(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetInterpolateScalarsBeforeMapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMapScalars(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetMapScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStatic(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::SetStatic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVLODActor *tempr = (ap.IsBound() ?
      op->GetActor() :
      op->vtkGeometryRepresentation::GetActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetBlockVisibility(temp0, temp1);
      }
    else
      {
      op->vtkGeometryRepresentation::SetBlockVisibility(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetBlockVisibility(temp0) :
      op->vtkGeometryRepresentation::GetBlockVisibility(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_RemoveBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  bool temp1 = true;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->RemoveBlockVisibility(temp0, temp1);
      }
    else
      {
      op->vtkGeometryRepresentation::RemoveBlockVisibility(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_RemoveBlockVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveBlockVisibilities();
      }
    else
      {
      op->vtkGeometryRepresentation::RemoveBlockVisibilities();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetBlockColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetBlockColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkGeometryRepresentation::SetBlockColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeometryRepresentation_SetBlockColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetBlockColor(temp0, temp1);
      }
    else
      {
      op->vtkGeometryRepresentation::SetBlockColor(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkGeometryRepresentation_SetBlockColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkGeometryRepresentation_SetBlockColor_s1(self, args);
    case 2:
      return PyvtkGeometryRepresentation_SetBlockColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBlockColor");
  return NULL;
}



static PyObject *
PyvtkGeometryRepresentation_GetBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBlockColor(temp0) :
      op->vtkGeometryRepresentation::GetBlockColor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_RemoveBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveBlockColor(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::RemoveBlockColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_RemoveBlockColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveBlockColors();
      }
    else
      {
      op->vtkGeometryRepresentation::RemoveBlockColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetBlockOpacity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetBlockOpacity(temp0, temp1);
      }
    else
      {
      op->vtkGeometryRepresentation::SetBlockOpacity(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeometryRepresentation_SetBlockOpacity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetBlockOpacity(temp0, temp1);
      }
    else
      {
      op->vtkGeometryRepresentation::SetBlockOpacity(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyMethodDef PyvtkGeometryRepresentation_SetBlockOpacity_Methods[] = {
  {NULL, PyvtkGeometryRepresentation_SetBlockOpacity_s1, METH_VARARGS,
   (char*)"@Id"},
  {NULL, PyvtkGeometryRepresentation_SetBlockOpacity_s2, METH_VARARGS,
   (char*)"@IO *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGeometryRepresentation_SetBlockOpacity(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGeometryRepresentation_SetBlockOpacity_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBlockOpacity");
  return NULL;
}



static PyObject *
PyvtkGeometryRepresentation_GetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBlockOpacity(temp0) :
      op->vtkGeometryRepresentation::GetBlockOpacity(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_RemoveBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveBlockOpacity(temp0);
      }
    else
      {
      op->vtkGeometryRepresentation::RemoveBlockOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_RemoveBlockOpacities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveBlockOpacities();
      }
    else
      {
      op->vtkGeometryRepresentation::RemoveBlockOpacities();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetColorArrayName() :
      op->vtkGeometryRepresentation::GetColorArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetBounds(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBounds");

  vtkDataObject *temp0 = NULL;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    bool tempr = vtkGeometryRepresentation::GetBounds(temp0, temp1);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeometryRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkGeometryRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeometryRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeometryRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGeometryRepresentation\nC++: vtkGeometryRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeometryRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeometryRepresentation\nC++: vtkGeometryRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ProcessViewRequest", PyvtkGeometryRepresentation_ProcessViewRequest, METH_VARARGS,
   (char*)"V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: virtual int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo)\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {(char*)"MarkModified", PyvtkGeometryRepresentation_MarkModified, METH_VARARGS,
   (char*)"V.MarkModified()\nC++: virtual void MarkModified()\n\nThis needs to be called on all instances of\nvtkGeometryRepresentation when the input is modified. This is\nessential since the geometry filter does not have any real-input\non the client side which messes with the Update requests.\n"},
  {(char*)"SetVisibility", PyvtkGeometryRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool val)\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {(char*)"SetSuppressLOD", PyvtkGeometryRepresentation_SetSuppressLOD, METH_VARARGS,
   (char*)"V.SetSuppressLOD(bool)\nC++: virtual void SetSuppressLOD(bool suppress)\n\nEnable/Disable LOD;\n"},
  {(char*)"SetAmbient", PyvtkGeometryRepresentation_SetAmbient, METH_VARARGS,
   (char*)"V.SetAmbient(float)\nC++: void SetAmbient(double a)\n\nSet the lighting properties of the object.\nvtkGeometryRepresentation overrides these based of the following\nconditions:\n\\li When Representation is wireframe or points, it disables\n    diffuse or\nspecular.\n\\li When scalar coloring is employed, it disabled specular.\n"},
  {(char*)"SetDiffuse", PyvtkGeometryRepresentation_SetDiffuse, METH_VARARGS,
   (char*)"V.SetDiffuse(float)\nC++: void SetDiffuse(double a)\n\nSet the lighting properties of the object.\nvtkGeometryRepresentation overrides these based of the following\nconditions:\n\\li When Representation is wireframe or points, it disables\n    diffuse or\nspecular.\n\\li When scalar coloring is employed, it disabled specular.\n"},
  {(char*)"SetSpecular", PyvtkGeometryRepresentation_SetSpecular, METH_VARARGS,
   (char*)"V.SetSpecular(float)\nC++: void SetSpecular(double a)\n\nSet the lighting properties of the object.\nvtkGeometryRepresentation overrides these based of the following\nconditions:\n\\li When Representation is wireframe or points, it disables\n    diffuse or\nspecular.\n\\li When scalar coloring is employed, it disabled specular.\n"},
  {(char*)"GetAmbient", PyvtkGeometryRepresentation_GetAmbient, METH_VARARGS,
   (char*)"V.GetAmbient() -> float\nC++: double GetAmbient()\n\nSet the lighting properties of the object.\nvtkGeometryRepresentation overrides these based of the following\nconditions:\n\\li When Representation is wireframe or points, it disables\n    diffuse or\nspecular.\n\\li When scalar coloring is employed, it disabled specular.\n"},
  {(char*)"GetDiffuse", PyvtkGeometryRepresentation_GetDiffuse, METH_VARARGS,
   (char*)"V.GetDiffuse() -> float\nC++: double GetDiffuse()\n\nSet the lighting properties of the object.\nvtkGeometryRepresentation overrides these based of the following\nconditions:\n\\li When Representation is wireframe or points, it disables\n    diffuse or\nspecular.\n\\li When scalar coloring is employed, it disabled specular.\n"},
  {(char*)"GetSpecular", PyvtkGeometryRepresentation_GetSpecular, METH_VARARGS,
   (char*)"V.GetSpecular() -> float\nC++: double GetSpecular()\n\nSet the lighting properties of the object.\nvtkGeometryRepresentation overrides these based of the following\nconditions:\n\\li When Representation is wireframe or points, it disables\n    diffuse or\nspecular.\n\\li When scalar coloring is employed, it disabled specular.\n"},
  {(char*)"SetRepresentation", PyvtkGeometryRepresentation_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(int)\nC++: void SetRepresentation(int)\nV.SetRepresentation(string)\nC++: virtual void SetRepresentation(const char *)\n\nSet the representation type. This adds VTK_SURFACE_WITH_EDGES to\nthose defined in vtkProperty.\n"},
  {(char*)"GetRepresentationMinValue", PyvtkGeometryRepresentation_GetRepresentationMinValue, METH_VARARGS,
   (char*)"V.GetRepresentationMinValue() -> int\nC++: int GetRepresentationMinValue()\n\nSet the representation type. This adds VTK_SURFACE_WITH_EDGES to\nthose defined in vtkProperty.\n"},
  {(char*)"GetRepresentationMaxValue", PyvtkGeometryRepresentation_GetRepresentationMaxValue, METH_VARARGS,
   (char*)"V.GetRepresentationMaxValue() -> int\nC++: int GetRepresentationMaxValue()\n\nSet the representation type. This adds VTK_SURFACE_WITH_EDGES to\nthose defined in vtkProperty.\n"},
  {(char*)"GetRepresentation", PyvtkGeometryRepresentation_GetRepresentation, METH_VARARGS,
   (char*)"V.GetRepresentation() -> int\nC++: int GetRepresentation()\n\nSet the representation type. This adds VTK_SURFACE_WITH_EDGES to\nthose defined in vtkProperty.\n"},
  {(char*)"GetRenderedDataObject", PyvtkGeometryRepresentation_GetRenderedDataObject, METH_VARARGS,
   (char*)"V.GetRenderedDataObject(int) -> vtkDataObject\nC++: virtual vtkDataObject *GetRenderedDataObject(int port)\n\nReturns the data object that is rendered from the given input\nport.\n"},
  {(char*)"DoRequestGhostCells", PyvtkGeometryRepresentation_DoRequestGhostCells, METH_VARARGS | METH_STATIC,
   (char*)"V.DoRequestGhostCells(vtkInformation) -> bool\nC++: static bool DoRequestGhostCells(vtkInformation *information)\n\nReturns true if this class would like to get ghost-cells if\navailable for the connection whose information object is passed\nas the argument.\n"},
  {(char*)"SetRequestGhostCellsIfNeeded", PyvtkGeometryRepresentation_SetRequestGhostCellsIfNeeded, METH_VARARGS,
   (char*)"V.SetRequestGhostCellsIfNeeded(bool)\nC++: void SetRequestGhostCellsIfNeeded(bool a)\n\nRepresentations that use geometry representation as the internal\nrepresentation should turn this flag off so that we don't end up\nrequesting ghost cells twice.\n"},
  {(char*)"GetRequestGhostCellsIfNeeded", PyvtkGeometryRepresentation_GetRequestGhostCellsIfNeeded, METH_VARARGS,
   (char*)"V.GetRequestGhostCellsIfNeeded() -> bool\nC++: bool GetRequestGhostCellsIfNeeded()\n\nRepresentations that use geometry representation as the internal\nrepresentation should turn this flag off so that we don't end up\nrequesting ghost cells twice.\n"},
  {(char*)"RequestGhostCellsIfNeededOn", PyvtkGeometryRepresentation_RequestGhostCellsIfNeededOn, METH_VARARGS,
   (char*)"V.RequestGhostCellsIfNeededOn()\nC++: void RequestGhostCellsIfNeededOn()\n\nRepresentations that use geometry representation as the internal\nrepresentation should turn this flag off so that we don't end up\nrequesting ghost cells twice.\n"},
  {(char*)"RequestGhostCellsIfNeededOff", PyvtkGeometryRepresentation_RequestGhostCellsIfNeededOff, METH_VARARGS,
   (char*)"V.RequestGhostCellsIfNeededOff()\nC++: void RequestGhostCellsIfNeededOff()\n\nRepresentations that use geometry representation as the internal\nrepresentation should turn this flag off so that we don't end up\nrequesting ghost cells twice.\n"},
  {(char*)"SetUseOutline", PyvtkGeometryRepresentation_SetUseOutline, METH_VARARGS,
   (char*)"V.SetUseOutline(int)\nC++: virtual void SetUseOutline(int)\n\n"},
  {(char*)"SetTriangulate", PyvtkGeometryRepresentation_SetTriangulate, METH_VARARGS,
   (char*)"V.SetTriangulate(int)\nC++: void SetTriangulate(int)\n\n"},
  {(char*)"SetNonlinearSubdivisionLevel", PyvtkGeometryRepresentation_SetNonlinearSubdivisionLevel, METH_VARARGS,
   (char*)"V.SetNonlinearSubdivisionLevel(int)\nC++: void SetNonlinearSubdivisionLevel(int)\n\n"},
  {(char*)"SetAmbientColor", PyvtkGeometryRepresentation_SetAmbientColor, METH_VARARGS,
   (char*)"V.SetAmbientColor(float, float, float)\nC++: virtual void SetAmbientColor(double r, double g, double b)\n\n"},
  {(char*)"SetColor", PyvtkGeometryRepresentation_SetColor, METH_VARARGS,
   (char*)"V.SetColor(float, float, float)\nC++: virtual void SetColor(double r, double g, double b)\n\n"},
  {(char*)"SetDiffuseColor", PyvtkGeometryRepresentation_SetDiffuseColor, METH_VARARGS,
   (char*)"V.SetDiffuseColor(float, float, float)\nC++: virtual void SetDiffuseColor(double r, double g, double b)\n\n"},
  {(char*)"SetEdgeColor", PyvtkGeometryRepresentation_SetEdgeColor, METH_VARARGS,
   (char*)"V.SetEdgeColor(float, float, float)\nC++: virtual void SetEdgeColor(double r, double g, double b)\n\n"},
  {(char*)"SetInterpolation", PyvtkGeometryRepresentation_SetInterpolation, METH_VARARGS,
   (char*)"V.SetInterpolation(int)\nC++: virtual void SetInterpolation(int val)\n\n"},
  {(char*)"SetLineWidth", PyvtkGeometryRepresentation_SetLineWidth, METH_VARARGS,
   (char*)"V.SetLineWidth(float)\nC++: virtual void SetLineWidth(double val)\n\n"},
  {(char*)"SetOpacity", PyvtkGeometryRepresentation_SetOpacity, METH_VARARGS,
   (char*)"V.SetOpacity(float)\nC++: virtual void SetOpacity(double val)\n\n"},
  {(char*)"SetPointSize", PyvtkGeometryRepresentation_SetPointSize, METH_VARARGS,
   (char*)"V.SetPointSize(float)\nC++: virtual void SetPointSize(double val)\n\n"},
  {(char*)"SetSpecularColor", PyvtkGeometryRepresentation_SetSpecularColor, METH_VARARGS,
   (char*)"V.SetSpecularColor(float, float, float)\nC++: virtual void SetSpecularColor(double r, double g, double b)\n\n"},
  {(char*)"SetSpecularPower", PyvtkGeometryRepresentation_SetSpecularPower, METH_VARARGS,
   (char*)"V.SetSpecularPower(float)\nC++: virtual void SetSpecularPower(double val)\n\n"},
  {(char*)"SetOrientation", PyvtkGeometryRepresentation_SetOrientation, METH_VARARGS,
   (char*)"V.SetOrientation(float, float, float)\nC++: virtual void SetOrientation(double, double, double)\n\n"},
  {(char*)"SetOrigin", PyvtkGeometryRepresentation_SetOrigin, METH_VARARGS,
   (char*)"V.SetOrigin(float, float, float)\nC++: virtual void SetOrigin(double, double, double)\n\n"},
  {(char*)"SetPickable", PyvtkGeometryRepresentation_SetPickable, METH_VARARGS,
   (char*)"V.SetPickable(int)\nC++: virtual void SetPickable(int val)\n\n"},
  {(char*)"SetPosition", PyvtkGeometryRepresentation_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(float, float, float)\nC++: virtual void SetPosition(double, double, double)\n\n"},
  {(char*)"SetScale", PyvtkGeometryRepresentation_SetScale, METH_VARARGS,
   (char*)"V.SetScale(float, float, float)\nC++: virtual void SetScale(double, double, double)\n\n"},
  {(char*)"SetTexture", PyvtkGeometryRepresentation_SetTexture, METH_VARARGS,
   (char*)"V.SetTexture(vtkTexture)\nC++: virtual void SetTexture(vtkTexture *)\n\n"},
  {(char*)"SetUserTransform", PyvtkGeometryRepresentation_SetUserTransform, METH_VARARGS,
   (char*)"V.SetUserTransform((float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float))\nC++: virtual void SetUserTransform(const double[16])\n\n"},
  {(char*)"SetInterpolateScalarsBeforeMapping", PyvtkGeometryRepresentation_SetInterpolateScalarsBeforeMapping, METH_VARARGS,
   (char*)"V.SetInterpolateScalarsBeforeMapping(int)\nC++: virtual void SetInterpolateScalarsBeforeMapping(int val)\n\n"},
  {(char*)"SetLookupTable", PyvtkGeometryRepresentation_SetLookupTable, METH_VARARGS,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *val)\n\n"},
  {(char*)"SetMapScalars", PyvtkGeometryRepresentation_SetMapScalars, METH_VARARGS,
   (char*)"V.SetMapScalars(int)\nC++: virtual void SetMapScalars(int val)\n\nSets if scalars are mapped through a color-map or are used\ndirectly as colors. 0 maps to VTK_COLOR_MODE_DIRECT_SCALARS 1\nmaps to VTK_COLOR_MODE_MAP_SCALARS@see\nvtkScalarsToColors::MapScalars\n"},
  {(char*)"SetStatic", PyvtkGeometryRepresentation_SetStatic, METH_VARARGS,
   (char*)"V.SetStatic(int)\nC++: virtual void SetStatic(int val)\n\nSets if scalars are mapped through a color-map or are used\ndirectly as colors. 0 maps to VTK_COLOR_MODE_DIRECT_SCALARS 1\nmaps to VTK_COLOR_MODE_MAP_SCALARS@see\nvtkScalarsToColors::MapScalars\n"},
  {(char*)"GetActor", PyvtkGeometryRepresentation_GetActor, METH_VARARGS,
   (char*)"V.GetActor() -> vtkPVLODActor\nC++: vtkPVLODActor *GetActor()\n\nProvides access to the actor used by this representation.\n"},
  {(char*)"SetBlockVisibility", PyvtkGeometryRepresentation_SetBlockVisibility, METH_VARARGS,
   (char*)"V.SetBlockVisibility(int, bool)\nC++: virtual void SetBlockVisibility(unsigned int index,\n    bool visible)\n\nSet/get the visibility for a single block.\n"},
  {(char*)"GetBlockVisibility", PyvtkGeometryRepresentation_GetBlockVisibility, METH_VARARGS,
   (char*)"V.GetBlockVisibility(int) -> bool\nC++: virtual bool GetBlockVisibility(unsigned int index)\n\nSet/get the visibility for a single block.\n"},
  {(char*)"RemoveBlockVisibility", PyvtkGeometryRepresentation_RemoveBlockVisibility, METH_VARARGS,
   (char*)"V.RemoveBlockVisibility(int, bool)\nC++: virtual void RemoveBlockVisibility(unsigned int index,\n    bool=true)\n\nSet/get the visibility for a single block.\n"},
  {(char*)"RemoveBlockVisibilities", PyvtkGeometryRepresentation_RemoveBlockVisibilities, METH_VARARGS,
   (char*)"V.RemoveBlockVisibilities()\nC++: virtual void RemoveBlockVisibilities()\n\nSet/get the visibility for a single block.\n"},
  {(char*)"SetBlockColor", PyvtkGeometryRepresentation_SetBlockColor, METH_VARARGS,
   (char*)"V.SetBlockColor(int, float, float, float)\nC++: virtual void SetBlockColor(unsigned int index, double r,\n    double g, double b)\nV.SetBlockColor(int, [float, ...])\nC++: virtual void SetBlockColor(unsigned int index, double *color)\n\nSet/get the color for a single block.\n"},
  {(char*)"GetBlockColor", PyvtkGeometryRepresentation_GetBlockColor, METH_VARARGS,
   (char*)"V.GetBlockColor(int) -> (float, ...)\nC++: virtual double *GetBlockColor(unsigned int index)\n\nSet/get the color for a single block.\n"},
  {(char*)"RemoveBlockColor", PyvtkGeometryRepresentation_RemoveBlockColor, METH_VARARGS,
   (char*)"V.RemoveBlockColor(int)\nC++: virtual void RemoveBlockColor(unsigned int index)\n\nSet/get the color for a single block.\n"},
  {(char*)"RemoveBlockColors", PyvtkGeometryRepresentation_RemoveBlockColors, METH_VARARGS,
   (char*)"V.RemoveBlockColors()\nC++: virtual void RemoveBlockColors()\n\nSet/get the color for a single block.\n"},
  {(char*)"SetBlockOpacity", PyvtkGeometryRepresentation_SetBlockOpacity, METH_VARARGS,
   (char*)"V.SetBlockOpacity(int, float)\nC++: virtual void SetBlockOpacity(unsigned int index,\n    double opacity)\nV.SetBlockOpacity(int, [float, ...])\nC++: virtual void SetBlockOpacity(unsigned int index,\n    double *opacity)\n\nSet/get the opacityfor a single block.\n"},
  {(char*)"GetBlockOpacity", PyvtkGeometryRepresentation_GetBlockOpacity, METH_VARARGS,
   (char*)"V.GetBlockOpacity(int) -> float\nC++: virtual double GetBlockOpacity(unsigned int index)\n\nSet/get the opacityfor a single block.\n"},
  {(char*)"RemoveBlockOpacity", PyvtkGeometryRepresentation_RemoveBlockOpacity, METH_VARARGS,
   (char*)"V.RemoveBlockOpacity(int)\nC++: virtual void RemoveBlockOpacity(unsigned int index)\n\nSet/get the opacityfor a single block.\n"},
  {(char*)"RemoveBlockOpacities", PyvtkGeometryRepresentation_RemoveBlockOpacities, METH_VARARGS,
   (char*)"V.RemoveBlockOpacities()\nC++: virtual void RemoveBlockOpacities()\n\nSet/get the opacityfor a single block.\n"},
  {(char*)"GetColorArrayName", PyvtkGeometryRepresentation_GetColorArrayName, METH_VARARGS,
   (char*)"V.GetColorArrayName() -> string\nC++: const char *GetColorArrayName()\n\nConvenience method to get the array name used to scalar color\nwith.\n"},
  {(char*)"GetBounds", PyvtkGeometryRepresentation_GetBounds, METH_VARARGS | METH_STATIC,
   (char*)"V.GetBounds(vtkDataObject, [float, float, float, float, float,\n    float]) -> bool\nC++: static bool GetBounds(vtkDataObject *dataObject,\n    double bounds[6])\n\nConvenience method to get bounds from a dataset/composite\ndataset. Returns true if valid bounds were computed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeometryRepresentation_StaticNew()
{
  return vtkGeometryRepresentation::New();
}

PyObject *PyVTKClass_vtkGeometryRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeometryRepresentation_StaticNew,
    PyvtkGeometryRepresentation_Methods,
    "vtkGeometryRepresentation", modulename,
    NULL, NULL,
    PyvtkGeometryRepresentation_Doc(),
    PyVTKClass_vtkPVDataRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkGeometryRepresentation_RepresentationTypes_Type);
    PyvtkGeometryRepresentation_RepresentationTypes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkGeometryRepresentation_RepresentationTypes_Type;
    if (o && PyDict_SetItemString(d, (char *)"RepresentationTypes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkGeometryRepresentation::RepresentationTypes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "POINTS", vtkGeometryRepresentation::POINTS },
          { "WIREFRAME", vtkGeometryRepresentation::WIREFRAME },
          { "SURFACE", vtkGeometryRepresentation::SURFACE },
          { "SURFACE_WITH_EDGES", vtkGeometryRepresentation::SURFACE_WITH_EDGES },
        };

      o = PyvtkGeometryRepresentation_RepresentationTypes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkGeometryRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkGeometryRepresentation - representation for showing any datasets as\n\n",
    "Superclass: vtkPVDataRepresentation\n\n",
    "vtkGeometryRepresentation is a representation for showing polygon\ngeometry. It handles non-polygonal datasets by extracting external\nsurfaces. One can use this representation to show\nsurface/wireframe/points/surface-with-edges.\n\nThanks:\n\nThe addition of a transformation matrix was supported by CEA/DIF\nCommissariat a l'Energie Atomique, Centre DAM Ile-De-France, Arpajon,\nFrance.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeometryRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeometryRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeometryRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

