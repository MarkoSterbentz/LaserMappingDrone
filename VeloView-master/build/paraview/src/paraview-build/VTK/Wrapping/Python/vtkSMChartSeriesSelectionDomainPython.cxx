// python wrapper for vtkSMChartSeriesSelectionDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMChartSeriesSelectionDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMChartSeriesSelectionDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMChartSeriesSelectionDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMStringListDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMStringListDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMStringListDomainNew
#endif

static const char **PyvtkSMChartSeriesSelectionDomain_Doc();

#ifndef DECLARED_PyvtkSMChartSeriesSelectionDomain_DefaultModes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMChartSeriesSelectionDomain_DefaultModes_Type;
#define DECLARED_PyvtkSMChartSeriesSelectionDomain_DefaultModes_Type
#endif

PyTypeObject PyvtkSMChartSeriesSelectionDomain_DefaultModes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"DefaultModes", // tp_name
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

PyObject *PyvtkSMChartSeriesSelectionDomain_DefaultModes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMChartSeriesSelectionDomain_DefaultModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesSelectionDomain *op = static_cast<vtkSMChartSeriesSelectionDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMChartSeriesSelectionDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesSelectionDomain *op = static_cast<vtkSMChartSeriesSelectionDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMChartSeriesSelectionDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesSelectionDomain *op = static_cast<vtkSMChartSeriesSelectionDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMChartSeriesSelectionDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMChartSeriesSelectionDomain::NewInstance());

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
PyvtkSMChartSeriesSelectionDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMChartSeriesSelectionDomain *tempr = vtkSMChartSeriesSelectionDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesSelectionDomain *op = static_cast<vtkSMChartSeriesSelectionDomain *>(vp);

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
      op->vtkSMChartSeriesSelectionDomain::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesSelectionDomain *op = static_cast<vtkSMChartSeriesSelectionDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMChartSeriesSelectionDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_GetDefaultMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesSelectionDomain *op = static_cast<vtkSMChartSeriesSelectionDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDefaultMode() :
      op->vtkSMChartSeriesSelectionDomain::GetDefaultMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_AddSeriesVisibilityDefault(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AddSeriesVisibilityDefault");

  char *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkSMChartSeriesSelectionDomain::AddSeriesVisibilityDefault(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMChartSeriesSelectionDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMChartSeriesSelectionDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMChartSeriesSelectionDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMChartSeriesSelectionDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMChartSeriesSelectionDomain\nC++: vtkSMChartSeriesSelectionDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMChartSeriesSelectionDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMChartSeriesSelectionDomain\nC++: vtkSMChartSeriesSelectionDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkSMChartSeriesSelectionDomain_Update, METH_VARARGS,
   (char*)"V.Update(vtkSMProperty)\nC++: virtual void Update(vtkSMProperty *)\n\nUpdate self checking the \"unchecked\" values of all required\nproperties.\n"},
  {(char*)"SetDefaultValues", PyvtkSMChartSeriesSelectionDomain_SetDefaultValues, METH_VARARGS,
   (char*)"V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values)\n\nSet the property's default value based on the domain. How the\nvalue is determined using the range is controlled by DefaultMode.\n"},
  {(char*)"GetDefaultMode", PyvtkSMChartSeriesSelectionDomain_GetDefaultMode, METH_VARARGS,
   (char*)"V.GetDefaultMode() -> int\nC++: int GetDefaultMode()\n\nGet the default-mode that controls how SetDefaultValues()\nbehaves.\n"},
  {(char*)"AddSeriesVisibilityDefault", PyvtkSMChartSeriesSelectionDomain_AddSeriesVisibilityDefault, METH_VARARGS | METH_STATIC,
   (char*)"V.AddSeriesVisibilityDefault(string, bool)\nC++: static void AddSeriesVisibilityDefault(const char *regex,\n    bool value)\n\nAdd/Remove series names to hide by default. These are regular\nexpressions.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMChartSeriesSelectionDomain_StaticNew()
{
  return vtkSMChartSeriesSelectionDomain::New();
}

PyObject *PyVTKClass_vtkSMChartSeriesSelectionDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMChartSeriesSelectionDomain_StaticNew,
    PyvtkSMChartSeriesSelectionDomain_Methods,
    "vtkSMChartSeriesSelectionDomain", modulename,
    NULL, NULL,
    PyvtkSMChartSeriesSelectionDomain_Doc(),
    PyVTKClass_vtkSMStringListDomainNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMChartSeriesSelectionDomain_DefaultModes_Type);
    PyvtkSMChartSeriesSelectionDomain_DefaultModes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMChartSeriesSelectionDomain_DefaultModes_Type;
    if (o && PyDict_SetItemString(d, (char *)"DefaultModes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkSMChartSeriesSelectionDomain::DefaultModes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "UNDEFINED", vtkSMChartSeriesSelectionDomain::UNDEFINED },
          { "VISIBILITY", vtkSMChartSeriesSelectionDomain::VISIBILITY },
          { "LABEL", vtkSMChartSeriesSelectionDomain::LABEL },
          { "COLOR", vtkSMChartSeriesSelectionDomain::COLOR },
          { "VALUE", vtkSMChartSeriesSelectionDomain::VALUE },
        };

      o = PyvtkSMChartSeriesSelectionDomain_DefaultModes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMChartSeriesSelectionDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMChartSeriesSelectionDomain - extends vtkSMChartSeriesListDomain\nto\n\n",
    "Superclass: vtkSMStringListDomain\n\n",
    "vtkSMChartSeriesSelectionDomain extends vtkSMChartSeriesListDomain to\nadd logic to better handle default values suitable for\nseries-parameter type properties such as SeriesVisibility,\nSeriesLabel, etc.\n\nThis domain also supports an experimental feature (we can generalize\nthis to vtkSMDomain is found useful in other places). Generally, a\nvtkSMProperty never changes unless the application/user updat",
    "es it.\nHowever for things like series parameters, it is useful if the\nproperty is updated to handle changed/newly added series consistently\nin the Qt application and the Python. To support that, this domain\nresets the property value to default every time the domain changes\npreserving status for existing series i.e. it won't affect the state\nfor any series that already set on the property. Thus, it",
    "'s not a\ntrue \"reset\", but more like \"update\".\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMChartSeriesSelectionDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMChartSeriesSelectionDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMChartSeriesSelectionDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

