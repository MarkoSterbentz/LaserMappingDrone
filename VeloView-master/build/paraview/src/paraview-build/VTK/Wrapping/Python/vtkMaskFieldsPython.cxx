// python wrapper for vtkMaskFields
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMaskFields.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMaskFields(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMaskFieldsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkMaskFields_Doc();

#ifndef DECLARED_PyvtkMaskFields_FieldLocation_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkMaskFields_FieldLocation_Type;
#define DECLARED_PyvtkMaskFields_FieldLocation_Type
#endif

PyTypeObject PyvtkMaskFields_FieldLocation_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"FieldLocation", // tp_name
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

PyObject *PyvtkMaskFields_FieldLocation_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkMaskFields_FieldLocation_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkMaskFields_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMaskFields::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskFields_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMaskFields::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskFields_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMaskFields *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMaskFields::NewInstance());

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
PyvtkMaskFields_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMaskFields *tempr = vtkMaskFields::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyFieldOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyFieldOn(temp0, temp1);
      }
    else
      {
      op->vtkMaskFields::CopyFieldOn(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMaskFields_CopyFieldOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyFieldOn(temp0, temp1);
      }
    else
      {
      op->vtkMaskFields::CopyFieldOn(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMaskFields_CopyFieldOn_Methods[] = {
  {NULL, PyvtkMaskFields_CopyFieldOn_s1, METH_VARARGS,
   (char*)"@iz"},
  {NULL, PyvtkMaskFields_CopyFieldOn_s2, METH_VARARGS,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMaskFields_CopyFieldOn(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaskFields_CopyFieldOn_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyFieldOn");
  return NULL;
}



static PyObject *
PyvtkMaskFields_CopyFieldOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyFieldOff(temp0, temp1);
      }
    else
      {
      op->vtkMaskFields::CopyFieldOff(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMaskFields_CopyFieldOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyFieldOff(temp0, temp1);
      }
    else
      {
      op->vtkMaskFields::CopyFieldOff(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMaskFields_CopyFieldOff_Methods[] = {
  {NULL, PyvtkMaskFields_CopyFieldOff_s1, METH_VARARGS,
   (char*)"@iz"},
  {NULL, PyvtkMaskFields_CopyFieldOff_s2, METH_VARARGS,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMaskFields_CopyFieldOff(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaskFields_CopyFieldOff_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyFieldOff");
  return NULL;
}



static PyObject *
PyvtkMaskFields_CopyAttributeOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyAttributeOn(temp0, temp1);
      }
    else
      {
      op->vtkMaskFields::CopyAttributeOn(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMaskFields_CopyAttributeOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyAttributeOn(temp0, temp1);
      }
    else
      {
      op->vtkMaskFields::CopyAttributeOn(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMaskFields_CopyAttributeOn_Methods[] = {
  {NULL, PyvtkMaskFields_CopyAttributeOn_s1, METH_VARARGS,
   (char*)"@ii"},
  {NULL, PyvtkMaskFields_CopyAttributeOn_s2, METH_VARARGS,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMaskFields_CopyAttributeOn(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaskFields_CopyAttributeOn_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyAttributeOn");
  return NULL;
}



static PyObject *
PyvtkMaskFields_CopyAttributeOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyAttributeOff(temp0, temp1);
      }
    else
      {
      op->vtkMaskFields::CopyAttributeOff(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMaskFields_CopyAttributeOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyAttributeOff(temp0, temp1);
      }
    else
      {
      op->vtkMaskFields::CopyAttributeOff(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMaskFields_CopyAttributeOff_Methods[] = {
  {NULL, PyvtkMaskFields_CopyAttributeOff_s1, METH_VARARGS,
   (char*)"@ii"},
  {NULL, PyvtkMaskFields_CopyAttributeOff_s2, METH_VARARGS,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMaskFields_CopyAttributeOff(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaskFields_CopyAttributeOff_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyAttributeOff");
  return NULL;
}



static PyObject *
PyvtkMaskFields_CopyFieldsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyFieldsOff();
      }
    else
      {
      op->vtkMaskFields::CopyFieldsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyAttributesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyAttributesOff();
      }
    else
      {
      op->vtkMaskFields::CopyAttributesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyFieldsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyFieldsOn();
      }
    else
      {
      op->vtkMaskFields::CopyFieldsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyAttributesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyAttributesOn();
      }
    else
      {
      op->vtkMaskFields::CopyAttributesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyAllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyAllOn();
      }
    else
      {
      op->vtkMaskFields::CopyAllOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyAllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyAllOff();
      }
    else
      {
      op->vtkMaskFields::CopyAllOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMaskFields_Methods[] = {
  {(char*)"GetClassName", PyvtkMaskFields_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMaskFields_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMaskFields_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMaskFields\nC++: vtkMaskFields *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMaskFields_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMaskFields\nC++: vtkMaskFields *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CopyFieldOn", PyvtkMaskFields_CopyFieldOn, METH_VARARGS,
   (char*)"V.CopyFieldOn(int, string)\nC++: void CopyFieldOn(int fieldLocation, const char *name)\nV.CopyFieldOn(string, string)\nC++: void CopyFieldOn(const char *fieldLoc, const char *name)\n\nTurn on/off the copying of the field or specified by name. During\nthe copying/passing, the following rules are followed for each\narray:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array A field name and a location must be\n   specified. For example:\n maskFields->CopyFieldOff(vtkMaskFields::CELL_DATA, \"foo\");\n  causes the field \"foo\" on the input cell data to not get copied\n   to the output.\n"},
  {(char*)"CopyFieldOff", PyvtkMaskFields_CopyFieldOff, METH_VARARGS,
   (char*)"V.CopyFieldOff(int, string)\nC++: void CopyFieldOff(int fieldLocation, const char *name)\nV.CopyFieldOff(string, string)\nC++: void CopyFieldOff(const char *fieldLoc, const char *name)\n\nTurn on/off the copying of the field or specified by name. During\nthe copying/passing, the following rules are followed for each\narray:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array A field name and a location must be\n   specified. For example:\n maskFields->CopyFieldOff(vtkMaskFields::CELL_DATA, \"foo\");\n  causes the field \"foo\" on the input cell data to not get copied\n   to the output.\n"},
  {(char*)"CopyAttributeOn", PyvtkMaskFields_CopyAttributeOn, METH_VARARGS,
   (char*)"V.CopyAttributeOn(int, int)\nC++: void CopyAttributeOn(int attributeLocation,\n    int attributeType)\nV.CopyAttributeOn(string, string)\nC++: void CopyAttributeOn(const char *attributeLoc,\n    const char *attributeType)\n\nTurn on/off the copying of the attribute or specified by\nvtkDataSetAttributes:AttributeTypes. During the copying/passing,\nthe following rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array An attribute type and a location must be\n   specified. For example:\n maskFields->CopyAttributeOff(vtkMaskFields::POINT_DATA, vtkDataSetAttributes::SCALARS);\n  causes the scalars on the input point data to not get copied to\nthe output.\n"},
  {(char*)"CopyAttributeOff", PyvtkMaskFields_CopyAttributeOff, METH_VARARGS,
   (char*)"V.CopyAttributeOff(int, int)\nC++: void CopyAttributeOff(int attributeLocation,\n    int attributeType)\nV.CopyAttributeOff(string, string)\nC++: void CopyAttributeOff(const char *attributeLoc,\n    const char *attributeType)\n\nTurn on/off the copying of the attribute or specified by\nvtkDataSetAttributes:AttributeTypes. During the copying/passing,\nthe following rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array An attribute type and a location must be\n   specified. For example:\n maskFields->CopyAttributeOff(vtkMaskFields::POINT_DATA, vtkDataSetAttributes::SCALARS);\n  causes the scalars on the input point data to not get copied to\nthe output.\n"},
  {(char*)"CopyFieldsOff", PyvtkMaskFields_CopyFieldsOff, METH_VARARGS,
   (char*)"V.CopyFieldsOff()\nC++: void CopyFieldsOff()\n\nConvenience methods which operate on all field data or attribute\ndata.  More specific than CopyAllOn or CopyAllOff\n"},
  {(char*)"CopyAttributesOff", PyvtkMaskFields_CopyAttributesOff, METH_VARARGS,
   (char*)"V.CopyAttributesOff()\nC++: void CopyAttributesOff()\n\nConvenience methods which operate on all field data or attribute\ndata.  More specific than CopyAllOn or CopyAllOff\n"},
  {(char*)"CopyFieldsOn", PyvtkMaskFields_CopyFieldsOn, METH_VARARGS,
   (char*)"V.CopyFieldsOn()\nC++: void CopyFieldsOn()\n\n"},
  {(char*)"CopyAttributesOn", PyvtkMaskFields_CopyAttributesOn, METH_VARARGS,
   (char*)"V.CopyAttributesOn()\nC++: void CopyAttributesOn()\n\n"},
  {(char*)"CopyAllOn", PyvtkMaskFields_CopyAllOn, METH_VARARGS,
   (char*)"V.CopyAllOn()\nC++: virtual void CopyAllOn()\n\nTurn on copying of all data. During the copying/passing, the\nfollowing rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyAllOff", PyvtkMaskFields_CopyAllOff, METH_VARARGS,
   (char*)"V.CopyAllOff()\nC++: virtual void CopyAllOff()\n\nTurn off copying of all data. During the copying/passing, the\nfollowing rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMaskFields_StaticNew()
{
  return vtkMaskFields::New();
}

PyObject *PyVTKClass_vtkMaskFieldsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMaskFields_StaticNew,
    PyvtkMaskFields_Methods,
    "vtkMaskFields", modulename,
    NULL, NULL,
    PyvtkMaskFields_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkMaskFields_FieldLocation_Type);
    PyvtkMaskFields_FieldLocation_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkMaskFields_FieldLocation_Type;
    if (o && PyDict_SetItemString(d, (char *)"FieldLocation", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkMaskFields::FieldLocation cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "OBJECT_DATA", vtkMaskFields::OBJECT_DATA },
          { "POINT_DATA", vtkMaskFields::POINT_DATA },
          { "CELL_DATA", vtkMaskFields::CELL_DATA },
        };

      o = PyvtkMaskFields_FieldLocation_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkMaskFields_Doc()
{
  static const char *docstring[] = {
    "vtkMaskFields - Allow control of which fields get passed\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkMaskFields is used to mark which fields in the input dataset get\ncopied to the output.  The output will contain only those fields\nmarked as on by the filter.\n\nSee Also:\n\nvtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\nvtkDataSetAttributes vtkDataArray vtkRearrangeFields vtkSplitField\nvtkMergeFields vtkAssignAttribute\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMaskFields(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMaskFieldsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMaskFields", o) != 0)
    {
    Py_DECREF(o);
    }

}

