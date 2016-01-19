// python wrapper for vtkPVLegacyGlyphFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVLegacyGlyphFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVLegacyGlyphFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVLegacyGlyphFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGlyph3DNew
extern "C" { PyObject *PyVTKClass_vtkGlyph3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkGlyph3DNew
#endif

static const char **PyvtkPVLegacyGlyphFilter_Doc();

#ifndef DECLARED_PyvtkPVLegacyGlyphFilter_CommunicationIds_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPVLegacyGlyphFilter_CommunicationIds_Type;
#define DECLARED_PyvtkPVLegacyGlyphFilter_CommunicationIds_Type
#endif

PyTypeObject PyvtkPVLegacyGlyphFilter_CommunicationIds_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"CommunicationIds", // tp_name
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

PyObject *PyvtkPVLegacyGlyphFilter_CommunicationIds_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVLegacyGlyphFilter_CommunicationIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkPVLegacyGlyphFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLegacyGlyphFilter *op = static_cast<vtkPVLegacyGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVLegacyGlyphFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLegacyGlyphFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLegacyGlyphFilter *op = static_cast<vtkPVLegacyGlyphFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVLegacyGlyphFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLegacyGlyphFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLegacyGlyphFilter *op = static_cast<vtkPVLegacyGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVLegacyGlyphFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVLegacyGlyphFilter::NewInstance());

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
PyvtkPVLegacyGlyphFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVLegacyGlyphFilter *tempr = vtkPVLegacyGlyphFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLegacyGlyphFilter_SetMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLegacyGlyphFilter *op = static_cast<vtkPVLegacyGlyphFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfPoints(temp0);
      }
    else
      {
      op->vtkPVLegacyGlyphFilter::SetMaximumNumberOfPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVLegacyGlyphFilter_GetMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLegacyGlyphFilter *op = static_cast<vtkPVLegacyGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPoints() :
      op->vtkPVLegacyGlyphFilter::GetMaximumNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLegacyGlyphFilter_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLegacyGlyphFilter *op = static_cast<vtkPVLegacyGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses() :
      op->vtkPVLegacyGlyphFilter::GetNumberOfProcesses());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLegacyGlyphFilter_SetUseMaskPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMaskPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLegacyGlyphFilter *op = static_cast<vtkPVLegacyGlyphFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseMaskPoints(temp0);
      }
    else
      {
      op->vtkPVLegacyGlyphFilter::SetUseMaskPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVLegacyGlyphFilter_GetUseMaskPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMaskPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLegacyGlyphFilter *op = static_cast<vtkPVLegacyGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseMaskPoints() :
      op->vtkPVLegacyGlyphFilter::GetUseMaskPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLegacyGlyphFilter_SetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLegacyGlyphFilter *op = static_cast<vtkPVLegacyGlyphFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRandomMode(temp0);
      }
    else
      {
      op->vtkPVLegacyGlyphFilter::SetRandomMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVLegacyGlyphFilter_GetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLegacyGlyphFilter *op = static_cast<vtkPVLegacyGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRandomMode() :
      op->vtkPVLegacyGlyphFilter::GetRandomMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLegacyGlyphFilter_IsPointVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLegacyGlyphFilter *op = static_cast<vtkPVLegacyGlyphFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->IsPointVisible(temp0, temp1) :
      op->vtkPVLegacyGlyphFilter::IsPointVisible(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLegacyGlyphFilter_SetKeepRandomPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeepRandomPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLegacyGlyphFilter *op = static_cast<vtkPVLegacyGlyphFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeepRandomPoints(temp0);
      }
    else
      {
      op->vtkPVLegacyGlyphFilter::SetKeepRandomPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVLegacyGlyphFilter_GetKeepRandomPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeepRandomPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLegacyGlyphFilter *op = static_cast<vtkPVLegacyGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetKeepRandomPoints() :
      op->vtkPVLegacyGlyphFilter::GetKeepRandomPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVLegacyGlyphFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPVLegacyGlyphFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVLegacyGlyphFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVLegacyGlyphFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVLegacyGlyphFilter\nC++: vtkPVLegacyGlyphFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVLegacyGlyphFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVLegacyGlyphFilter\nC++: vtkPVLegacyGlyphFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaximumNumberOfPoints", PyvtkPVLegacyGlyphFilter_SetMaximumNumberOfPoints, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfPoints(int)\nC++: void SetMaximumNumberOfPoints(int a)\n\nLimit the number of points to glyph\n"},
  {(char*)"GetMaximumNumberOfPoints", PyvtkPVLegacyGlyphFilter_GetMaximumNumberOfPoints, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfPoints() -> int\nC++: int GetMaximumNumberOfPoints()\n\nLimit the number of points to glyph\n"},
  {(char*)"GetNumberOfProcesses", PyvtkPVLegacyGlyphFilter_GetNumberOfProcesses, METH_VARARGS,
   (char*)"V.GetNumberOfProcesses() -> int\nC++: int GetNumberOfProcesses()\n\nGet the number of processes used to run this filter.\n"},
  {(char*)"SetUseMaskPoints", PyvtkPVLegacyGlyphFilter_SetUseMaskPoints, METH_VARARGS,
   (char*)"V.SetUseMaskPoints(int)\nC++: void SetUseMaskPoints(int useMaskPoints)\n\nSet/get whether to mask points\n"},
  {(char*)"GetUseMaskPoints", PyvtkPVLegacyGlyphFilter_GetUseMaskPoints, METH_VARARGS,
   (char*)"V.GetUseMaskPoints() -> int\nC++: int GetUseMaskPoints()\n\nSet/get whether to mask points\n"},
  {(char*)"SetRandomMode", PyvtkPVLegacyGlyphFilter_SetRandomMode, METH_VARARGS,
   (char*)"V.SetRandomMode(int)\nC++: void SetRandomMode(int mode)\n\nSet/get flag to cause randomization of which points to mask.\n"},
  {(char*)"GetRandomMode", PyvtkPVLegacyGlyphFilter_GetRandomMode, METH_VARARGS,
   (char*)"V.GetRandomMode() -> int\nC++: int GetRandomMode()\n\nSet/get flag to cause randomization of which points to mask.\n"},
  {(char*)"IsPointVisible", PyvtkPVLegacyGlyphFilter_IsPointVisible, METH_VARARGS,
   (char*)"V.IsPointVisible(vtkDataSet, int) -> int\nC++: virtual int IsPointVisible(vtkDataSet *ds, vtkIdType ptId)\n\nIn processing composite datasets, will check if a point is\nvisible as long as the dataset being process if a vtkUniformGrid.\n"},
  {(char*)"SetKeepRandomPoints", PyvtkPVLegacyGlyphFilter_SetKeepRandomPoints, METH_VARARGS,
   (char*)"V.SetKeepRandomPoints(int)\nC++: void SetKeepRandomPoints(int keepRandomPoints)\n\n"},
  {(char*)"GetKeepRandomPoints", PyvtkPVLegacyGlyphFilter_GetKeepRandomPoints, METH_VARARGS,
   (char*)"V.GetKeepRandomPoints() -> int\nC++: int GetKeepRandomPoints()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVLegacyGlyphFilter_StaticNew()
{
  return vtkPVLegacyGlyphFilter::New();
}

PyObject *PyVTKClass_vtkPVLegacyGlyphFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVLegacyGlyphFilter_StaticNew,
    PyvtkPVLegacyGlyphFilter_Methods,
    "vtkPVLegacyGlyphFilter", modulename,
    NULL, NULL,
    PyvtkPVLegacyGlyphFilter_Doc(),
    PyVTKClass_vtkGlyph3DNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkPVLegacyGlyphFilter_CommunicationIds_Type);
    PyvtkPVLegacyGlyphFilter_CommunicationIds_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPVLegacyGlyphFilter_CommunicationIds_Type;
    if (o && PyDict_SetItemString(d, (char *)"CommunicationIds", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkPVLegacyGlyphFilter::CommunicationIds cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "GlyphNPointsGather", vtkPVLegacyGlyphFilter::GlyphNPointsGather },
          { "GlyphNPointsScatter", vtkPVLegacyGlyphFilter::GlyphNPointsScatter },
        };

      o = PyvtkPVLegacyGlyphFilter_CommunicationIds_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPVLegacyGlyphFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPVLegacyGlyphFilter - Glyph filter\n\n",
    "Superclass: vtkGlyph3D\n\n",
    "This is a subclass of vtkGlyph3D that allows selection of input\nscalars\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVLegacyGlyphFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVLegacyGlyphFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVLegacyGlyphFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

