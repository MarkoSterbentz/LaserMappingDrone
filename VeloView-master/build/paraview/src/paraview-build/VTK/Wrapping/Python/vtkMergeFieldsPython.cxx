// python wrapper for vtkMergeFields
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMergeFields.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMergeFields(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMergeFieldsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkMergeFields_Doc();

#ifndef DECLARED_PyvtkMergeFields_FieldLocations_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkMergeFields_FieldLocations_Type;
#define DECLARED_PyvtkMergeFields_FieldLocations_Type
#endif

PyTypeObject PyvtkMergeFields_FieldLocations_Type = {
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

PyObject *PyvtkMergeFields_FieldLocations_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkMergeFields_FieldLocations_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkMergeFields_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMergeFields::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFields_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeFields::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFields_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMergeFields *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeFields::NewInstance());

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
PyvtkMergeFields_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMergeFields *tempr = vtkMergeFields::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFields_SetOutputField_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOutputField(temp0, temp1);
      }
    else
      {
      op->vtkMergeFields::SetOutputField(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMergeFields_SetOutputField_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOutputField(temp0, temp1);
      }
    else
      {
      op->vtkMergeFields::SetOutputField(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMergeFields_SetOutputField_Methods[] = {
  {NULL, PyvtkMergeFields_SetOutputField_s1, METH_VARARGS,
   (char*)"@zi"},
  {NULL, PyvtkMergeFields_SetOutputField_s2, METH_VARARGS,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMergeFields_SetOutputField(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMergeFields_SetOutputField_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputField");
  return NULL;
}



static PyObject *
PyvtkMergeFields_Merge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Merge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Merge(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMergeFields::Merge(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFields_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfComponents(temp0);
      }
    else
      {
      op->vtkMergeFields::SetNumberOfComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFields_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkMergeFields::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMergeFields_Methods[] = {
  {(char*)"GetClassName", PyvtkMergeFields_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMergeFields_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMergeFields_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMergeFields\nC++: vtkMergeFields *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMergeFields_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMergeFields\nC++: vtkMergeFields *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutputField", PyvtkMergeFields_SetOutputField, METH_VARARGS,
   (char*)"V.SetOutputField(string, int)\nC++: void SetOutputField(const char *name, int fieldLoc)\nV.SetOutputField(string, string)\nC++: void SetOutputField(const char *name, const char *fieldLoc)\n\nThe output field will have the given name and it will be in\nfieldLoc (the input fields also have to be in fieldLoc).\n"},
  {(char*)"Merge", PyvtkMergeFields_Merge, METH_VARARGS,
   (char*)"V.Merge(int, string, int)\nC++: void Merge(int component, const char *arrayName,\n    int sourceComp)\n\nAdd a component (arrayName,sourceComp) to the output field.\n"},
  {(char*)"SetNumberOfComponents", PyvtkMergeFields_SetNumberOfComponents, METH_VARARGS,
   (char*)"V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int a)\n\nSet the number of the components in the output field. This has to\nbe set before execution. Default value is 0.\n"},
  {(char*)"GetNumberOfComponents", PyvtkMergeFields_GetNumberOfComponents, METH_VARARGS,
   (char*)"V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nSet the number of the components in the output field. This has to\nbe set before execution. Default value is 0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMergeFields_StaticNew()
{
  return vtkMergeFields::New();
}

PyObject *PyVTKClass_vtkMergeFieldsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMergeFields_StaticNew,
    PyvtkMergeFields_Methods,
    "vtkMergeFields", modulename,
    NULL, NULL,
    PyvtkMergeFields_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkMergeFields_FieldLocations_Type);
    PyvtkMergeFields_FieldLocations_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkMergeFields_FieldLocations_Type;
    if (o && PyDict_SetItemString(d, (char *)"FieldLocations", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkMergeFields::FieldLocations cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "DATA_OBJECT", vtkMergeFields::DATA_OBJECT },
          { "POINT_DATA", vtkMergeFields::POINT_DATA },
          { "CELL_DATA", vtkMergeFields::CELL_DATA },
        };

      o = PyvtkMergeFields_FieldLocations_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkMergeFields_Doc()
{
  static const char *docstring[] = {
    "vtkMergeFields - Merge multiple fields into one.\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkMergeFields is used to merge mutliple field into one. The new\nfield is put in the same field data as the original field. For\nexample\n mf->SetOutputField(\"foo\", vtkMergeFields::POINT_DATA);\n mf->SetNumberOfComponents(2);\n mf->Merge(0, \"array1\", 1);\n mf->Merge(1, \"array2\", 0);\n  will tell vtkMergeFields to use the 2nd component of array1 and the\n1st component of array2 to create a 2 component fie",
    "ld called foo. The\nsame can be done using Tcl:\n mf SetOutputField foo POINT_DATA\n mf Merge 0 array1 1\n mf Merge 1 array2 0\n\n Field locations: DATA_OBJECT, POINT_DATA, CELL_DATA\n \n\nSee Also:\n\nvtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\nvtkDataSetAttributes vtkDataArray vtkRearrangeFields vtkSplitField\nvtkAssignAttribute\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMergeFields(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMergeFieldsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMergeFields", o) != 0)
    {
    Py_DECREF(o);
    }

}

