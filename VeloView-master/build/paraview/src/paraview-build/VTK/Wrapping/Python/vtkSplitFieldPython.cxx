// python wrapper for vtkSplitField
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSplitField.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSplitField(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSplitFieldNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkSplitField_Doc();

#ifndef DECLARED_PyvtkSplitField_FieldLocations_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSplitField_FieldLocations_Type;
#define DECLARED_PyvtkSplitField_FieldLocations_Type
#endif

PyTypeObject PyvtkSplitField_FieldLocations_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"FieldLocations", // tp_name
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

PyObject *PyvtkSplitField_FieldLocations_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSplitField_FieldLocations_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSplitField_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSplitField::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplitField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSplitField::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplitField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSplitField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSplitField::NewInstance());

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
PyvtkSplitField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSplitField *tempr = vtkSplitField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplitField_SetInputField_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputField(temp0, temp1);
      }
    else
      {
      op->vtkSplitField::SetInputField(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSplitField_SetInputField_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputField(temp0, temp1);
      }
    else
      {
      op->vtkSplitField::SetInputField(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSplitField_SetInputField_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputField(temp0, temp1);
      }
    else
      {
      op->vtkSplitField::SetInputField(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSplitField_SetInputField_Methods[] = {
  {NULL, PyvtkSplitField_SetInputField_s1, METH_VARARGS,
   (char*)"@ii"},
  {NULL, PyvtkSplitField_SetInputField_s2, METH_VARARGS,
   (char*)"@zi"},
  {NULL, PyvtkSplitField_SetInputField_s3, METH_VARARGS,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSplitField_SetInputField(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSplitField_SetInputField_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputField");
  return NULL;
}



static PyObject *
PyvtkSplitField_Split(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Split");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Split(temp0, temp1);
      }
    else
      {
      op->vtkSplitField::Split(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSplitField_Methods[] = {
  {(char*)"GetClassName", PyvtkSplitField_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSplitField_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSplitField_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSplitField\nC++: vtkSplitField *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSplitField_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSplitField\nC++: vtkSplitField *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInputField", PyvtkSplitField_SetInputField, METH_VARARGS,
   (char*)"V.SetInputField(int, int)\nC++: void SetInputField(int attributeType, int fieldLoc)\nV.SetInputField(string, int)\nC++: void SetInputField(const char *name, int fieldLoc)\nV.SetInputField(string, string)\nC++: void SetInputField(const char *name, const char *fieldLoc)\n\nUse the  given attribute in the field data given by fieldLoc as\ninput.\n"},
  {(char*)"Split", PyvtkSplitField_Split, METH_VARARGS,
   (char*)"V.Split(int, string)\nC++: void Split(int component, const char *arrayName)\n\nCreate a new array with the given component.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSplitField_StaticNew()
{
  return vtkSplitField::New();
}

PyObject *PyVTKClass_vtkSplitFieldNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSplitField_StaticNew,
    PyvtkSplitField_Methods,
    "vtkSplitField", modulename,
    NULL, NULL,
    PyvtkSplitField_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSplitField_FieldLocations_Type);
    PyvtkSplitField_FieldLocations_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSplitField_FieldLocations_Type;
    if (o && PyDict_SetItemString(d, (char *)"FieldLocations", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkSplitField::FieldLocations cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "DATA_OBJECT", vtkSplitField::DATA_OBJECT },
          { "POINT_DATA", vtkSplitField::POINT_DATA },
          { "CELL_DATA", vtkSplitField::CELL_DATA },
        };

      o = PyvtkSplitField_FieldLocations_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSplitField_Doc()
{
  static const char *docstring[] = {
    "vtkSplitField - Split a field into single component fields\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkSplitField is used to split a multi-component field (vtkDataArray)\ninto multiple single component fields. The new fields are put in the\nsame field data as the original field. The output arrays are of the\nsame type as the input array. Example:\n sf->SetInputField(\"gradient\", vtkSplitField::POINT_DATA);\n sf->Split(0, \"firstcomponent\");\n  tells vtkSplitField to extract the first component of the fi",
    "eld\ncalled gradient and create an array called firstcomponent (the new\nfield will be in the output's point data). The same can be done from\nTcl:\n sf SetInputField gradient POINT_DATA\n sf Split 0 firstcomponent\n\n AttributeTypes: SCALARS, VECTORS, NORMALS, TCOORDS, TENSORS\n Field locations: DATA_OBJECT, POINT_DATA, CELL_DATA\n  Note that, by default, the original array is also passed through.\n\nCaveat",
    "s:\n\nWhen using Tcl, Java, Python or Visual Basic bindings, the array name\ncan not be one of the  AttributeTypes when calling Split() which\ntakes strings as arguments. The Tcl (Java etc.) command will always\nassume the string corresponds to an attribute type when the argument\nis one of the AttributeTypes. In this situation, use the Split()\nwhich takes enums.\n\nSee Also:\n\nvtkFieldData vtkDataSet vtkD",
    "ataObjectToDataSetFilter\nvtkDataSetAttributes vtkDataArray vtkRearrangeFields\nvtkAssignAttribute vtkMergeFields\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSplitField(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSplitFieldNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSplitField", o) != 0)
    {
    Py_DECREF(o);
    }

}

