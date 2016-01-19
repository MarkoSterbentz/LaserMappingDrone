// python wrapper for vtkPVGlyphFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkPVGlyphFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVGlyphFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVGlyphFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGlyph3DNew
extern "C" { PyObject *PyVTKClass_vtkGlyph3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkGlyph3DNew
#endif

static const char **PyvtkPVGlyphFilter_Doc();

#ifndef DECLARED_PyvtkPVGlyphFilter_GlyphModeType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPVGlyphFilter_GlyphModeType_Type;
#define DECLARED_PyvtkPVGlyphFilter_GlyphModeType_Type
#endif

PyTypeObject PyvtkPVGlyphFilter_GlyphModeType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"GlyphModeType", // tp_name
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

PyObject *PyvtkPVGlyphFilter_GlyphModeType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVGlyphFilter_GlyphModeType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkPVGlyphFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVGlyphFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVGlyphFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVGlyphFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVGlyphFilter::NewInstance());

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
PyvtkPVGlyphFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVGlyphFilter *tempr = vtkPVGlyphFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPVGlyphFilter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPVGlyphFilter::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_SetGlyphMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphMode(temp0);
      }
    else
      {
      op->vtkPVGlyphFilter::SetGlyphMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetGlyphModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGlyphModeMinValue() :
      op->vtkPVGlyphFilter::GetGlyphModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetGlyphModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGlyphModeMaxValue() :
      op->vtkPVGlyphFilter::GetGlyphModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetGlyphMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGlyphMode() :
      op->vtkPVGlyphFilter::GetGlyphMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_SetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStride(temp0);
      }
    else
      {
      op->vtkPVGlyphFilter::SetStride(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetStrideMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrideMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStrideMinValue() :
      op->vtkPVGlyphFilter::GetStrideMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetStrideMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrideMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStrideMaxValue() :
      op->vtkPVGlyphFilter::GetStrideMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStride() :
      op->vtkPVGlyphFilter::GetStride());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_SetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSeed(temp0);
      }
    else
      {
      op->vtkPVGlyphFilter::SetSeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSeed() :
      op->vtkPVGlyphFilter::GetSeed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_SetMaximumNumberOfSamplePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSamplePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfSamplePoints(temp0);
      }
    else
      {
      op->vtkPVGlyphFilter::SetMaximumNumberOfSamplePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetMaximumNumberOfSamplePointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSamplePointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSamplePointsMinValue() :
      op->vtkPVGlyphFilter::GetMaximumNumberOfSamplePointsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetMaximumNumberOfSamplePointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSamplePointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSamplePointsMaxValue() :
      op->vtkPVGlyphFilter::GetMaximumNumberOfSamplePointsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetMaximumNumberOfSamplePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSamplePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSamplePoints() :
      op->vtkPVGlyphFilter::GetMaximumNumberOfSamplePoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVGlyphFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPVGlyphFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVGlyphFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVGlyphFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVGlyphFilter\nC++: vtkPVGlyphFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVGlyphFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVGlyphFilter\nC++: vtkPVGlyphFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPVGlyphFilter_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *)\n\nGet/Set the vtkMultiProcessController to use for parallel\nprocessing. By default, the\nvtkMultiProcessController::GetGlobalController() will be used.\n"},
  {(char*)"GetController", PyvtkPVGlyphFilter_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the vtkMultiProcessController to use for parallel\nprocessing. By default, the\nvtkMultiProcessController::GetGlobalController() will be used.\n"},
  {(char*)"SetGlyphMode", PyvtkPVGlyphFilter_SetGlyphMode, METH_VARARGS,
   (char*)"V.SetGlyphMode(int)\nC++: void SetGlyphMode(int)\n\nSet/Get the mode at which glyphs will be generated.\n"},
  {(char*)"GetGlyphModeMinValue", PyvtkPVGlyphFilter_GetGlyphModeMinValue, METH_VARARGS,
   (char*)"V.GetGlyphModeMinValue() -> int\nC++: int GetGlyphModeMinValue()\n\nSet/Get the mode at which glyphs will be generated.\n"},
  {(char*)"GetGlyphModeMaxValue", PyvtkPVGlyphFilter_GetGlyphModeMaxValue, METH_VARARGS,
   (char*)"V.GetGlyphModeMaxValue() -> int\nC++: int GetGlyphModeMaxValue()\n\nSet/Get the mode at which glyphs will be generated.\n"},
  {(char*)"GetGlyphMode", PyvtkPVGlyphFilter_GetGlyphMode, METH_VARARGS,
   (char*)"V.GetGlyphMode() -> int\nC++: int GetGlyphMode()\n\nSet/Get the mode at which glyphs will be generated.\n"},
  {(char*)"SetStride", PyvtkPVGlyphFilter_SetStride, METH_VARARGS,
   (char*)"V.SetStride(int)\nC++: void SetStride(int)\n\nSet/Get the stride at which to glyph the dataset. Note, only\napplicable with EVERY_NTH_POINT GlyphMode.\n"},
  {(char*)"GetStrideMinValue", PyvtkPVGlyphFilter_GetStrideMinValue, METH_VARARGS,
   (char*)"V.GetStrideMinValue() -> int\nC++: int GetStrideMinValue()\n\nSet/Get the stride at which to glyph the dataset. Note, only\napplicable with EVERY_NTH_POINT GlyphMode.\n"},
  {(char*)"GetStrideMaxValue", PyvtkPVGlyphFilter_GetStrideMaxValue, METH_VARARGS,
   (char*)"V.GetStrideMaxValue() -> int\nC++: int GetStrideMaxValue()\n\nSet/Get the stride at which to glyph the dataset. Note, only\napplicable with EVERY_NTH_POINT GlyphMode.\n"},
  {(char*)"GetStride", PyvtkPVGlyphFilter_GetStride, METH_VARARGS,
   (char*)"V.GetStride() -> int\nC++: int GetStride()\n\nSet/Get the stride at which to glyph the dataset. Note, only\napplicable with EVERY_NTH_POINT GlyphMode.\n"},
  {(char*)"SetSeed", PyvtkPVGlyphFilter_SetSeed, METH_VARARGS,
   (char*)"V.SetSeed(int)\nC++: void SetSeed(int a)\n\nSet/Get Seed used for generating a spatially uniform\ndistribution.\n"},
  {(char*)"GetSeed", PyvtkPVGlyphFilter_GetSeed, METH_VARARGS,
   (char*)"V.GetSeed() -> int\nC++: int GetSeed()\n\nSet/Get Seed used for generating a spatially uniform\ndistribution.\n"},
  {(char*)"SetMaximumNumberOfSamplePoints", PyvtkPVGlyphFilter_SetMaximumNumberOfSamplePoints, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfSamplePoints(int)\nC++: void SetMaximumNumberOfSamplePoints(int)\n\nSet/Get maximum number of sample points to use to sample the\nspace when GlyphMode is set to SPATIALLY_UNIFORM_DISTRIBUTION.\n"},
  {(char*)"GetMaximumNumberOfSamplePointsMinValue", PyvtkPVGlyphFilter_GetMaximumNumberOfSamplePointsMinValue, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfSamplePointsMinValue() -> int\nC++: int GetMaximumNumberOfSamplePointsMinValue()\n\nSet/Get maximum number of sample points to use to sample the\nspace when GlyphMode is set to SPATIALLY_UNIFORM_DISTRIBUTION.\n"},
  {(char*)"GetMaximumNumberOfSamplePointsMaxValue", PyvtkPVGlyphFilter_GetMaximumNumberOfSamplePointsMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfSamplePointsMaxValue() -> int\nC++: int GetMaximumNumberOfSamplePointsMaxValue()\n\nSet/Get maximum number of sample points to use to sample the\nspace when GlyphMode is set to SPATIALLY_UNIFORM_DISTRIBUTION.\n"},
  {(char*)"GetMaximumNumberOfSamplePoints", PyvtkPVGlyphFilter_GetMaximumNumberOfSamplePoints, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfSamplePoints() -> int\nC++: int GetMaximumNumberOfSamplePoints()\n\nSet/Get maximum number of sample points to use to sample the\nspace when GlyphMode is set to SPATIALLY_UNIFORM_DISTRIBUTION.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVGlyphFilter_StaticNew()
{
  return vtkPVGlyphFilter::New();
}

PyObject *PyVTKClass_vtkPVGlyphFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVGlyphFilter_StaticNew,
    PyvtkPVGlyphFilter_Methods,
    "vtkPVGlyphFilter", modulename,
    NULL, NULL,
    PyvtkPVGlyphFilter_Doc(),
    PyVTKClass_vtkGlyph3DNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkPVGlyphFilter_GlyphModeType_Type);
    PyvtkPVGlyphFilter_GlyphModeType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPVGlyphFilter_GlyphModeType_Type;
    if (o && PyDict_SetItemString(d, (char *)"GlyphModeType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkPVGlyphFilter::GlyphModeType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "ALL_POINTS", vtkPVGlyphFilter::ALL_POINTS },
          { "EVERY_NTH_POINT", vtkPVGlyphFilter::EVERY_NTH_POINT },
          { "SPATIALLY_UNIFORM_DISTRIBUTION", vtkPVGlyphFilter::SPATIALLY_UNIFORM_DISTRIBUTION },
        };

      o = PyvtkPVGlyphFilter_GlyphModeType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPVGlyphFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPVGlyphFilter - extended API for vtkGlyph3D for better control\n\n",
    "Superclass: vtkGlyph3D\n\n",
    "vtkPVGlyphFilter extends vtkGlyph3D for adding control over which\npoints are glyphed using GlyphMode. Three modes are now provided:\n\\li ALL_POINTS: all points in the input dataset are glyphed. This\n    same as using\nvtkGlyph3D directly.\n\n\\li EVERY_NTH_POINT: every n-th point in the input dataset when\n    iterated\nthrough the input points sequentially is glyphed. For composite\ndatasets, the counter",
    " resets every on block. In parallel, independent\ncounter is used on each rank. Use Stride to control now may points to\nskip.\n\n\\li SPATIALLY_UNIFORM_DISTRIBUTION: points close to a randomly\n    sampled spatial\ndistribution of points are glyphed. Seed controls the seed point for\nthe random number generator (vtkMinimalStandardRandomSequence).\nMaximumNumberOfSamplePoints can be used to limit the numbe",
    "r of sample\npoints used for random sampling. This doesn't not equal the number of\npoints actually glyphed, since that depends on several factors. In\nparallel, this filter ensures that spatial bounds are collected\nacross all ranks for generating identical sample points.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVGlyphFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVGlyphFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVGlyphFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

