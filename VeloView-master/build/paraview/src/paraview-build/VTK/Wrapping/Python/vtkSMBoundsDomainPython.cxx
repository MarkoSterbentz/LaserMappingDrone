// python wrapper for vtkSMBoundsDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMBoundsDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMBoundsDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMBoundsDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDoubleRangeDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMDoubleRangeDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDoubleRangeDomainNew
#endif

static const char **PyvtkSMBoundsDomain_Doc();

#ifndef DECLARED_PyvtkSMBoundsDomain_Modes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMBoundsDomain_Modes_Type;
#define DECLARED_PyvtkSMBoundsDomain_Modes_Type
#endif

PyTypeObject PyvtkSMBoundsDomain_Modes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Modes", // tp_name
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

PyObject *PyvtkSMBoundsDomain_Modes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMBoundsDomain_Modes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMBoundsDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMBoundsDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMBoundsDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMBoundsDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMBoundsDomain::NewInstance());

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
PyvtkSMBoundsDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMBoundsDomain *tempr = vtkSMBoundsDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    if (ap.IsBound())
      {
      op->Update(temp0);
      }
    else
      {
      op->vtkSMBoundsDomain::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

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
      op->vtkSMBoundsDomain::SetMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_GetModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetModeMinValue() :
      op->vtkSMBoundsDomain::GetModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_GetModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetModeMaxValue() :
      op->vtkSMBoundsDomain::GetModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkSMBoundsDomain::GetMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkSMBoundsDomain::GetScaleFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMBoundsDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMBoundsDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMBoundsDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMBoundsDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMBoundsDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMBoundsDomain\nC++: vtkSMBoundsDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMBoundsDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMBoundsDomain\nC++: vtkSMBoundsDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkSMBoundsDomain_Update, METH_VARARGS,
   (char*)"V.Update(vtkSMProperty)\nC++: virtual void Update(vtkSMProperty *)\n\nUpdate self checking the \"unchecked\" values of all required\nproperties. Overwritten by sub-classes.\n"},
  {(char*)"SetMode", PyvtkSMBoundsDomain_SetMode, METH_VARARGS,
   (char*)"V.SetMode(int)\nC++: void SetMode(int)\n\n\n"},
  {(char*)"GetModeMinValue", PyvtkSMBoundsDomain_GetModeMinValue, METH_VARARGS,
   (char*)"V.GetModeMinValue() -> int\nC++: int GetModeMinValue()\n\n\n"},
  {(char*)"GetModeMaxValue", PyvtkSMBoundsDomain_GetModeMaxValue, METH_VARARGS,
   (char*)"V.GetModeMaxValue() -> int\nC++: int GetModeMaxValue()\n\n\n"},
  {(char*)"GetMode", PyvtkSMBoundsDomain_GetMode, METH_VARARGS,
   (char*)"V.GetMode() -> int\nC++: int GetMode()\n\n\n"},
  {(char*)"GetScaleFactor", PyvtkSMBoundsDomain_GetScaleFactor, METH_VARARGS,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\n"},
  {(char*)"SetDefaultValues", PyvtkSMBoundsDomain_SetDefaultValues, METH_VARARGS,
   (char*)"V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *property,\n    bool use_unchecked_values)\n\nOverridden to handle APPROXIMATE_CELL_LENGTH.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMBoundsDomain_StaticNew()
{
  return vtkSMBoundsDomain::New();
}

PyObject *PyVTKClass_vtkSMBoundsDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMBoundsDomain_StaticNew,
    PyvtkSMBoundsDomain_Methods,
    "vtkSMBoundsDomain", modulename,
    NULL, NULL,
    PyvtkSMBoundsDomain_Doc(),
    PyVTKClass_vtkSMDoubleRangeDomainNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMBoundsDomain_Modes_Type);
    PyvtkSMBoundsDomain_Modes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMBoundsDomain_Modes_Type;
    if (o && PyDict_SetItemString(d, (char *)"Modes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkSMBoundsDomain::Modes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "NORMAL", vtkSMBoundsDomain::NORMAL },
          { "MAGNITUDE", vtkSMBoundsDomain::MAGNITUDE },
          { "ORIENTED_MAGNITUDE", vtkSMBoundsDomain::ORIENTED_MAGNITUDE },
          { "SCALED_EXTENT", vtkSMBoundsDomain::SCALED_EXTENT },
          { "APPROXIMATE_CELL_LENGTH", vtkSMBoundsDomain::APPROXIMATE_CELL_LENGTH },
        };

      o = PyvtkSMBoundsDomain_Modes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMBoundsDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMBoundsDomain - double range domain based on data set bounds\n\n",
    "Superclass: vtkSMDoubleRangeDomain\n\n",
    "vtkSMBoundsDomain extends vtkSMDoubleRangeDomain to add support to\ndetermine the valid range for the values based on the dataset bounds.\nThere are severalModes which can be used to control how the range is\ncomputed based on the data bounds (defined by the\nvtkSMBoundsDomain::Modes enum).\n\\li NORMAL : this is the basic mode where the domain will have 3\n    ranges which\nare the min and max for the bo",
    "unds along each of the coordinate axis.\n\\li MAGNITUDE: the domain has a single range set to (-magn/2.0,\n    +magn/2.0)\nwhere magn is the magnitude of the diagonal.\n\\li ORIENTED_MAGNITUDE:  same as MAGNITUDE, but instead of the\n    dialog, a\nvector determined using two additional required properties with\nfunctions Normal, and Origin is used. li SCALED_EXTENT: the range is\nset to (0, maxbounds * thi",
    "s->ScaleFactor) where maxbounds is the\nlength of the longest axis for the bounding box. li\nAPPROXIMATE_CELL_LENGTH: approximation for cell length computed using\nthe expression (diameter/ (cube_root(numCells)) * this->ScaleFactor.\n\nTo determine the input data bounds, this domain depends on a required\nproperty with function Input. The data-information from the\nsource-proxy set as the value for that ",
    "property is used to determine\nthe bounds.\n\nSupported XML attributes:\n\\li mode : used to specify the Mode. Value can be \"normal\",\n    \"magnitude\",\n\"oriented_magnitude\", \"scaled_extent\", or \"approximate_cell_length\".\n\\li scale_factor : used in SCALED_EXTENT and APPROXIMATE_CELL_LENGTH\n    mode.\nValue is a floating point number that is used as the scale factor.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMBoundsDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMBoundsDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMBoundsDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

