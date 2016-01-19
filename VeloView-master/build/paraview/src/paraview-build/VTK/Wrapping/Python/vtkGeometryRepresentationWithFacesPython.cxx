// python wrapper for vtkGeometryRepresentationWithFaces
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGeometryRepresentationWithFaces.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGeometryRepresentationWithFaces(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGeometryRepresentationWithFacesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGeometryRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkGeometryRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkGeometryRepresentationNew
#endif

static const char **PyvtkGeometryRepresentationWithFaces_Doc();

#ifndef DECLARED_PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_Type;
#define DECLARED_PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_Type
#endif

PyTypeObject PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"RepresentationTypesEx", // tp_name
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

PyObject *PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGeometryRepresentationWithFaces::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGeometryRepresentationWithFaces::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGeometryRepresentationWithFaces *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGeometryRepresentationWithFaces::NewInstance());

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
PyvtkGeometryRepresentationWithFaces_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGeometryRepresentationWithFaces *tempr = vtkGeometryRepresentationWithFaces::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

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
      op->vtkGeometryRepresentationWithFaces::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

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
      op->vtkGeometryRepresentationWithFaces::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_SetBackfaceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackfaceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackfaceRepresentation(temp0);
      }
    else
      {
      op->vtkGeometryRepresentationWithFaces::SetBackfaceRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_GetBackfaceRepresentationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackfaceRepresentationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBackfaceRepresentationMinValue() :
      op->vtkGeometryRepresentationWithFaces::GetBackfaceRepresentationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_GetBackfaceRepresentationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackfaceRepresentationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBackfaceRepresentationMaxValue() :
      op->vtkGeometryRepresentationWithFaces::GetBackfaceRepresentationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_GetBackfaceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackfaceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBackfaceRepresentation() :
      op->vtkGeometryRepresentationWithFaces::GetBackfaceRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_SetBackfaceAmbientColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackfaceAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

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
      op->SetBackfaceAmbientColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGeometryRepresentationWithFaces::SetBackfaceAmbientColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_SetBackfaceDiffuseColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackfaceDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

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
      op->SetBackfaceDiffuseColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGeometryRepresentationWithFaces::SetBackfaceDiffuseColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_SetBackfaceOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackfaceOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackfaceOpacity(temp0);
      }
    else
      {
      op->vtkGeometryRepresentationWithFaces::SetBackfaceOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGeometryRepresentationWithFaces_Methods[] = {
  {(char*)"GetClassName", PyvtkGeometryRepresentationWithFaces_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeometryRepresentationWithFaces_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeometryRepresentationWithFaces_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGeometryRepresentationWithFaces\nC++: vtkGeometryRepresentationWithFaces *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeometryRepresentationWithFaces_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeometryRepresentationWithFaces\nC++: vtkGeometryRepresentationWithFaces *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"ProcessViewRequest", PyvtkGeometryRepresentationWithFaces_ProcessViewRequest, METH_VARARGS,
   (char*)"V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: virtual int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo)\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {(char*)"SetVisibility", PyvtkGeometryRepresentationWithFaces_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool val)\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {(char*)"SetBackfaceRepresentation", PyvtkGeometryRepresentationWithFaces_SetBackfaceRepresentation, METH_VARARGS,
   (char*)"V.SetBackfaceRepresentation(int)\nC++: void SetBackfaceRepresentation(int)\n\nSet the backface representation.\n"},
  {(char*)"GetBackfaceRepresentationMinValue", PyvtkGeometryRepresentationWithFaces_GetBackfaceRepresentationMinValue, METH_VARARGS,
   (char*)"V.GetBackfaceRepresentationMinValue() -> int\nC++: int GetBackfaceRepresentationMinValue()\n\nSet the backface representation.\n"},
  {(char*)"GetBackfaceRepresentationMaxValue", PyvtkGeometryRepresentationWithFaces_GetBackfaceRepresentationMaxValue, METH_VARARGS,
   (char*)"V.GetBackfaceRepresentationMaxValue() -> int\nC++: int GetBackfaceRepresentationMaxValue()\n\nSet the backface representation.\n"},
  {(char*)"GetBackfaceRepresentation", PyvtkGeometryRepresentationWithFaces_GetBackfaceRepresentation, METH_VARARGS,
   (char*)"V.GetBackfaceRepresentation() -> int\nC++: int GetBackfaceRepresentation()\n\nSet the backface representation.\n"},
  {(char*)"SetBackfaceAmbientColor", PyvtkGeometryRepresentationWithFaces_SetBackfaceAmbientColor, METH_VARARGS,
   (char*)"V.SetBackfaceAmbientColor(float, float, float)\nC++: void SetBackfaceAmbientColor(double r, double g, double b)\n\n"},
  {(char*)"SetBackfaceDiffuseColor", PyvtkGeometryRepresentationWithFaces_SetBackfaceDiffuseColor, METH_VARARGS,
   (char*)"V.SetBackfaceDiffuseColor(float, float, float)\nC++: void SetBackfaceDiffuseColor(double r, double g, double b)\n\n"},
  {(char*)"SetBackfaceOpacity", PyvtkGeometryRepresentationWithFaces_SetBackfaceOpacity, METH_VARARGS,
   (char*)"V.SetBackfaceOpacity(float)\nC++: void SetBackfaceOpacity(double val)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeometryRepresentationWithFaces_StaticNew()
{
  return vtkGeometryRepresentationWithFaces::New();
}

PyObject *PyVTKClass_vtkGeometryRepresentationWithFacesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeometryRepresentationWithFaces_StaticNew,
    PyvtkGeometryRepresentationWithFaces_Methods,
    "vtkGeometryRepresentationWithFaces", modulename,
    NULL, NULL,
    PyvtkGeometryRepresentationWithFaces_Doc(),
    PyVTKClass_vtkGeometryRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_Type);
    PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_Type;
    if (o && PyDict_SetItemString(d, (char *)"RepresentationTypesEx", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkGeometryRepresentationWithFaces::RepresentationTypesEx cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "FOLLOW_FRONTFACE", vtkGeometryRepresentationWithFaces::FOLLOW_FRONTFACE },
          { "CULL_BACKFACE", vtkGeometryRepresentationWithFaces::CULL_BACKFACE },
          { "CULL_FRONTFACE", vtkGeometryRepresentationWithFaces::CULL_FRONTFACE },
        };

      o = PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkGeometryRepresentationWithFaces_Doc()
{
  static const char *docstring[] = {
    "vtkGeometryRepresentationWithFaces\n\n",
    "Superclass: vtkGeometryRepresentation\n\n",
    "vtkGeometryRepresentationWithFaces extends vtkGeometryRepresentation\nto add support for rendering back and front faces separately (with\ndifferent visibility and properties).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeometryRepresentationWithFaces(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeometryRepresentationWithFacesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeometryRepresentationWithFaces", o) != 0)
    {
    Py_DECREF(o);
    }

}

