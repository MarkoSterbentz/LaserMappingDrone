// python wrapper for vtkSMInputArrayDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMInputArrayDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMInputArrayDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMInputArrayDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDomainNew
#endif

static const char **PyvtkSMInputArrayDomain_Doc();

#ifndef DECLARED_PyvtkSMInputArrayDomain_AttributeTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMInputArrayDomain_AttributeTypes_Type;
#define DECLARED_PyvtkSMInputArrayDomain_AttributeTypes_Type
#endif

PyTypeObject PyvtkSMInputArrayDomain_AttributeTypes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"AttributeTypes", // tp_name
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

PyObject *PyvtkSMInputArrayDomain_AttributeTypes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMInputArrayDomain_AttributeTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMInputArrayDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputArrayDomain *op = static_cast<vtkSMInputArrayDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMInputArrayDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputArrayDomain *op = static_cast<vtkSMInputArrayDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMInputArrayDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputArrayDomain *op = static_cast<vtkSMInputArrayDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMInputArrayDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMInputArrayDomain::NewInstance());

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
PyvtkSMInputArrayDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMInputArrayDomain *tempr = vtkSMInputArrayDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_IsInDomain_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputArrayDomain *op = static_cast<vtkSMInputArrayDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMInputArrayDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMInputArrayDomain_IsInDomain_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputArrayDomain *op = static_cast<vtkSMInputArrayDomain *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  unsigned int temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0, temp1) :
      op->vtkSMInputArrayDomain::IsInDomain(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMInputArrayDomain_IsInDomain_Methods[] = {
  {NULL, PyvtkSMInputArrayDomain_IsInDomain_s1, METH_VARARGS,
   (char*)"@O *vtkSMProperty"},
  {NULL, PyvtkSMInputArrayDomain_IsInDomain_s2, METH_VARARGS,
   (char*)"@O|I *vtkSMSourceProxy"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMInputArrayDomain_IsInDomain(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMInputArrayDomain_IsInDomain_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMInputArrayDomain_IsInDomain_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsInDomain");
  return NULL;
}



static PyObject *
PyvtkSMInputArrayDomain_GetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputArrayDomain *op = static_cast<vtkSMInputArrayDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttributeType() :
      op->vtkSMInputArrayDomain::GetAttributeType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_GetAttributeTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputArrayDomain *op = static_cast<vtkSMInputArrayDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeTypeAsString() :
      op->vtkSMInputArrayDomain::GetAttributeTypeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputArrayDomain *op = static_cast<vtkSMInputArrayDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkSMInputArrayDomain::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_SetAutomaticPropertyConversion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetAutomaticPropertyConversion");

  bool temp0 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMInputArrayDomain::SetAutomaticPropertyConversion(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_GetAutomaticPropertyConversion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAutomaticPropertyConversion");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    bool tempr = vtkSMInputArrayDomain::GetAutomaticPropertyConversion();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_IsAttributeTypeAcceptable(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsAttributeTypeAcceptable");

  int temp0;
  int temp1;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new int[2*size2];
    }
  save2 = &temp2[size2];

  if (ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)))
    {
    ap.SaveArray(temp2, save2, size2);

    bool tempr = vtkSMInputArrayDomain::IsAttributeTypeAcceptable(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_IsArrayAcceptable(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsArrayAcceptable");

  int temp0;
  vtkPVArrayInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVArrayInformation"))
    {
    bool tempr = vtkSMInputArrayDomain::IsArrayAcceptable(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMInputArrayDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMInputArrayDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMInputArrayDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMInputArrayDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMInputArrayDomain\nC++: vtkSMInputArrayDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMInputArrayDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMInputArrayDomain\nC++: vtkSMInputArrayDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsInDomain", PyvtkSMInputArrayDomain_IsInDomain, METH_VARARGS,
   (char*)"V.IsInDomain(vtkSMProperty) -> int\nC++: virtual int IsInDomain(vtkSMProperty *property)\nV.IsInDomain(vtkSMSourceProxy, int) -> int\nC++: int IsInDomain(vtkSMSourceProxy *proxy,\n    unsigned int outputport=0)\n\nReturns true if the value of the propery is in the domain. The\npropery has to be a vtkSMProxyProperty which points to a\nvtkSMSourceProxy. The input has to have one or more arrays that\nmatch the requirements.\n"},
  {(char*)"GetAttributeType", PyvtkSMInputArrayDomain_GetAttributeType, METH_VARARGS,
   (char*)"V.GetAttributeType() -> int\nC++: int GetAttributeType()\n\nGet the attribute type. Valid values are defined in\nAttributeTypes which map to vtkDataObject::AttributeTypes.\n"},
  {(char*)"GetAttributeTypeAsString", PyvtkSMInputArrayDomain_GetAttributeTypeAsString, METH_VARARGS,
   (char*)"V.GetAttributeTypeAsString() -> string\nC++: const char *GetAttributeTypeAsString()\n\nGet the attribute type. Valid values are defined in\nAttributeTypes which map to vtkDataObject::AttributeTypes.\n"},
  {(char*)"GetNumberOfComponents", PyvtkSMInputArrayDomain_GetNumberOfComponents, METH_VARARGS,
   (char*)"V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nGet the required number of components. Set to 0 for no check.\n"},
  {(char*)"SetAutomaticPropertyConversion", PyvtkSMInputArrayDomain_SetAutomaticPropertyConversion, METH_VARARGS | METH_STATIC,
   (char*)"V.SetAutomaticPropertyConversion(bool)\nC++: static void SetAutomaticPropertyConversion(bool)\n\n"},
  {(char*)"GetAutomaticPropertyConversion", PyvtkSMInputArrayDomain_GetAutomaticPropertyConversion, METH_VARARGS | METH_STATIC,
   (char*)"V.GetAutomaticPropertyConversion() -> bool\nC++: static bool GetAutomaticPropertyConversion()\n\n"},
  {(char*)"IsAttributeTypeAcceptable", PyvtkSMInputArrayDomain_IsAttributeTypeAcceptable, METH_VARARGS | METH_STATIC,
   (char*)"V.IsAttributeTypeAcceptable(int, int, [int, ...]) -> bool\nC++: static bool IsAttributeTypeAcceptable(int required_type,\n    int attribute_type, int *acceptable_as_type=NULL)\n\nMethod to check if a particular attribute-type ( attribute_type)\nwill be accepted by this domain with a required attribute type (\nrequired_type). This takes into consideration the state of\nAutomaticePropertyConversion flag. If a particular attribute_type\nis acceptable only because AutomaticPropertyConversion is true,\nacceptable_as_type value will be set to the attribute type that\nthe particular attribute was automatically converted to. e.g. is\nrequired_type = POINT and attribute_type is CELL and\nAutomaticPropertyConversion is true, this method will return true\nand acceptable_as_type will be set to POINT. In other cases,\nacceptable_as_type is simply set to attribute_type.\n"},
  {(char*)"IsArrayAcceptable", PyvtkSMInputArrayDomain_IsArrayAcceptable, METH_VARARGS | METH_STATIC,
   (char*)"V.IsArrayAcceptable(int, vtkPVArrayInformation) -> bool\nC++: static bool IsArrayAcceptable(\n    int required_number_of_components,\n    vtkPVArrayInformation *arrayInfo)\n\nMethod to check if a particular array is acceptable to a domain\nwith the specified required number of components (\nrequired_number_of_components). This takes into consideration the\nstate of AutomaticePropertyConversion flag. If\nAutomaticePropertyConversion, required_numer_of_components == 1\nand the actual number of components in the array are >= 1, then\nthis method will return true. This method will return true if\nrequired_number_of_components == 0 (i.e. no restriction of num.\nof components is specified) or if required_number_of_components\n== num. of components in the array.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMInputArrayDomain_StaticNew()
{
  return vtkSMInputArrayDomain::New();
}

PyObject *PyVTKClass_vtkSMInputArrayDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMInputArrayDomain_StaticNew,
    PyvtkSMInputArrayDomain_Methods,
    "vtkSMInputArrayDomain", modulename,
    NULL, NULL,
    PyvtkSMInputArrayDomain_Doc(),
    PyVTKClass_vtkSMDomainNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMInputArrayDomain_AttributeTypes_Type);
    PyvtkSMInputArrayDomain_AttributeTypes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMInputArrayDomain_AttributeTypes_Type;
    if (o && PyDict_SetItemString(d, (char *)"AttributeTypes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 8; c++)
      {
      typedef vtkSMInputArrayDomain::AttributeTypes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[8] = {
          { "POINT", vtkSMInputArrayDomain::POINT },
          { "CELL", vtkSMInputArrayDomain::CELL },
          { "FIELD", vtkSMInputArrayDomain::FIELD },
          { "ANY", vtkSMInputArrayDomain::ANY },
          { "VERTEX", vtkSMInputArrayDomain::VERTEX },
          { "EDGE", vtkSMInputArrayDomain::EDGE },
          { "ROW", vtkSMInputArrayDomain::ROW },
          { "NUMBER_OF_ATTRIBUTE_TYPES", vtkSMInputArrayDomain::NUMBER_OF_ATTRIBUTE_TYPES },
        };

      o = PyvtkSMInputArrayDomain_AttributeTypes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMInputArrayDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMInputArrayDomain - domain to ensure that input has required types\n\n",
    "Superclass: vtkSMDomain\n\n",
    "vtkSMInputArrayDomain is domain that can be used on a\nvtkSMInputProperty to check if the pipeline input provides attribute\narrays of the required types e.g. if a filter can only work if the\ninput data set has cell data arrays, then one can use this domain.\n\nvtkSMInputArrayDomain also provides a mechanism to check if the\nattribute arrays have a certain number of components.\n\nWhen enabled, ParaView ",
    "supports automatic array conversion i.e.\nextracting components or converting cell data to point data and\nvice-versa is done implicitly. In that case, vtkSMInputArrayDomain's\nbehavior also changes as appropriate.\n\nSupported XML attributes:\n\\li attribute_type : (optional) value can be 'point', 'cell', 'any',\n                        'vertex', 'edge', 'row', 'none'. If no\nspecified,\n                  ",
    "      'any' is assumed. This indicates the\nattribute type\n                        for acceptable arrays. Note \"any\" implies all\ntypes\n                        of attribute data (thus doesn't include field\ndata\n                        since it's not attribute data).\n\\li number_of_components : (optional) 0 by default. If non-zero,\n    indicates\n                        the component count for acceptab",
    "le arrays.\n\nThis domain doesn't support any required properties (to help clean\nold code, we print a warning if any required properties are\nspecified).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMInputArrayDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMInputArrayDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMInputArrayDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

