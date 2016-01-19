// python wrapper for vtkAssignAttribute
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAssignAttribute.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAssignAttribute(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAssignAttributeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkAssignAttribute_Doc();

#ifndef DECLARED_PyvtkAssignAttribute_AttributeLocation_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkAssignAttribute_AttributeLocation_Type;
#define DECLARED_PyvtkAssignAttribute_AttributeLocation_Type
#endif

PyTypeObject PyvtkAssignAttribute_AttributeLocation_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"AttributeLocation", // tp_name
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

PyObject *PyvtkAssignAttribute_AttributeLocation_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAssignAttribute_AttributeLocation_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkAssignAttribute_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAssignAttribute::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignAttribute_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAssignAttribute::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignAttribute_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAssignAttribute *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAssignAttribute::NewInstance());

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
PyvtkAssignAttribute_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAssignAttribute *tempr = vtkAssignAttribute::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignAttribute_Assign_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Assign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Assign(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAssignAttribute::Assign(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAssignAttribute_Assign_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Assign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  char *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Assign(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAssignAttribute::Assign(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAssignAttribute_Assign_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Assign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Assign(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAssignAttribute::Assign(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAssignAttribute_Assign_Methods[] = {
  {NULL, PyvtkAssignAttribute_Assign_s1, METH_VARARGS,
   (char*)"@iii"},
  {NULL, PyvtkAssignAttribute_Assign_s2, METH_VARARGS,
   (char*)"@zii"},
  {NULL, PyvtkAssignAttribute_Assign_s3, METH_VARARGS,
   (char*)"@zzz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAssignAttribute_Assign(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAssignAttribute_Assign_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Assign");
  return NULL;
}


static PyMethodDef PyvtkAssignAttribute_Methods[] = {
  {(char*)"GetClassName", PyvtkAssignAttribute_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAssignAttribute_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAssignAttribute_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAssignAttribute\nC++: vtkAssignAttribute *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAssignAttribute_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAssignAttribute\nC++: vtkAssignAttribute *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Assign", PyvtkAssignAttribute_Assign, METH_VARARGS,
   (char*)"V.Assign(int, int, int)\nC++: void Assign(int inputAttributeType, int attributeType,\n    int attributeLoc)\nV.Assign(string, int, int)\nC++: void Assign(const char *fieldName, int attributeType,\n    int attributeLoc)\nV.Assign(string, string, string)\nC++: void Assign(const char *name, const char *attributeType,\n    const char *attributeLoc)\n\nLabel an attribute as another attribute.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAssignAttribute_StaticNew()
{
  return vtkAssignAttribute::New();
}

PyObject *PyVTKClass_vtkAssignAttributeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAssignAttribute_StaticNew,
    PyvtkAssignAttribute_Methods,
    "vtkAssignAttribute", modulename,
    NULL, NULL,
    PyvtkAssignAttribute_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkAssignAttribute_AttributeLocation_Type);
    PyvtkAssignAttribute_AttributeLocation_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkAssignAttribute_AttributeLocation_Type;
    if (o && PyDict_SetItemString(d, (char *)"AttributeLocation", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkAssignAttribute::AttributeLocation cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "POINT_DATA", vtkAssignAttribute::POINT_DATA },
          { "CELL_DATA", vtkAssignAttribute::CELL_DATA },
          { "VERTEX_DATA", vtkAssignAttribute::VERTEX_DATA },
          { "EDGE_DATA", vtkAssignAttribute::EDGE_DATA },
          { "NUM_ATTRIBUTE_LOCS", vtkAssignAttribute::NUM_ATTRIBUTE_LOCS },
        };

      o = PyvtkAssignAttribute_AttributeLocation_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkAssignAttribute_Doc()
{
  static const char *docstring[] = {
    "vtkAssignAttribute - Labels/marks a field as an attribute\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "vtkAssignAttribute is used to label/mark a field (vtkDataArray) as an\nattribute. A field name or an attribute to labeled can be specified.\nFor example:\n aa->Assign(\"foo\", vtkDataSetAttributes::SCALARS,\n            vtkAssignAttribute::POINT_DATA);\n  tells vtkAssignAttribute to make the array in the point data called\n\"foo\" the active scalars. On the other hand,\n aa->Assign(vtkDataSetAttributes::VECT",
    "ORS, vtkDataSetAttributes::SCALARS,\n            vtkAssignAttribute::POINT_DATA);\n  tells vtkAssignAttribute to make the active vectors also the active\nscalars. The same can be done more easily from Tcl by using the\nAssign() method which takes strings:\n aa Assign \"foo\" SCALARS POINT_DATA\n or\n aa Assign SCALARS VECTORS POINT_DATA\n\n AttributeTypes: SCALARS, VECTORS, NORMALS, TCOORDS, TENSORS\n Attribu",
    "te locations: POINT_DATA, CELL_DATA\n \n\nCaveats:\n\nWhen using Tcl, Java, Python or Visual Basic bindings, the array name\ncan not be one of the  AttributeTypes when calling Assign() which\ntakes strings as arguments. The Tcl (Java etc.) command will always\nassume the string corresponds to an attribute type when the argument\nis one of the AttributeTypes. In this situation, use the Assign()\nwhich takes ",
    "enums.\n\nSee Also:\n\nvtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\nvtkDataSetAttributes vtkDataArray vtkRearrangeFields vtkSplitField\nvtkMergeFields\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAssignAttribute(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAssignAttributeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAssignAttribute", o) != 0)
    {
    Py_DECREF(o);
    }

}

