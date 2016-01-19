// python wrapper for vtkImageConnector
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageConnector.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageConnector(PyObject *, const char *); }

static const char **PyvtkImageConnectorSeed_Doc();

static PyMethodDef PyvtkImageConnectorSeed_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkImageConnectorSeed_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkImageConnectorSeed_Type;
#define DECLARED_PyvtkImageConnectorSeed_Type
#endif


static PyObject *
PyvtkImageConnectorSeed_vtkImageConnectorSeed(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkImageConnectorSeed");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkImageConnectorSeed *op = new vtkImageConnectorSeed();

    result = PyVTKSpecialObject_New("vtkImageConnectorSeed", op);
    }

  return result;
}

static PyMethodDef PyvtkImageConnectorSeed_vtkImageConnectorSeed_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkImageConnectorSeed_NewMethod = \
{ (char*)"vtkImageConnectorSeed", PyvtkImageConnectorSeed_vtkImageConnectorSeed, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkImageConnectorSeed_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkImageConnectorSeed_vtkImageConnectorSeed(NULL, args);
}
#endif

static void PyvtkImageConnectorSeed_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkImageConnectorSeed *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkImageConnectorSeed_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkImageConnectorSeed_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkImageConnectorSeed", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkImageConnectorSeed_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkImageConnectorSeed_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkImageConnectorSeed_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkImageConnectorSeed_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkImageConnectorSeed_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkImageConnectorSeed(*static_cast<const vtkImageConnectorSeed*>(obj));
    }
  return 0;
}

static PyObject *PyvtkImageConnectorSeed_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkImageConnectorSeed_Type,
    PyvtkImageConnectorSeed_Methods,
    PyvtkImageConnectorSeed_vtkImageConnectorSeed_Methods,
    &PyvtkImageConnectorSeed_NewMethod,
    PyvtkImageConnectorSeed_Doc(), &PyvtkImageConnectorSeed_CCopy);

  return cls;
}

const char **PyvtkImageConnectorSeed_Doc()
{
  static const char *docstring[] = {
    "vtkImageConnector - Create a binary image of a sphere.\n\n",
    "vtkImageConnector is a helper class for connectivity filters. It is\nnot meant to be used directly. It implements a stack and breadth\nfirst search necessary for some connectivity filters.  Filtered axes\nsets the dimensionality of the neighbor comparison, and cannot be\nmore than three dimensions. As implemented, only voxels which share\nfaces are considered neighbors.\n\n",
    "V.vtkImageConnectorSeed()\nC++: vtkImageConnectorSeed()\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageConnectorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkImageConnector_Doc();


static PyObject *
PyvtkImageConnector_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageConnector::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageConnector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageConnector::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageConnector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageConnector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageConnector::NewInstance());

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
PyvtkImageConnector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageConnector *tempr = vtkImageConnector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageConnector_RemoveAllSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllSeeds();
      }
    else
      {
      op->vtkImageConnector::RemoveAllSeeds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageConnector_SetConnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConnectedValue(temp0);
      }
    else
      {
      op->vtkImageConnector::SetConnectedValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageConnector_GetConnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char tempr = (ap.IsBound() ?
      op->GetConnectedValue() :
      op->vtkImageConnector::GetConnectedValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageConnector_SetUnconnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnconnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUnconnectedValue(temp0);
      }
    else
      {
      op->vtkImageConnector::SetUnconnectedValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageConnector_GetUnconnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnconnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char tempr = (ap.IsBound() ?
      op->GetUnconnectedValue() :
      op->vtkImageConnector::GetUnconnectedValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageConnector_MarkData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  vtkImageData *temp0 = NULL;
  int temp1;
  int temp2[6];
  int save2[6];
  const int size2 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->MarkData(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageConnector::MarkData(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageConnector_Methods[] = {
  {(char*)"GetClassName", PyvtkImageConnector_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageConnector_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageConnector_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageConnector\nC++: vtkImageConnector *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageConnector_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageConnector\nC++: vtkImageConnector *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RemoveAllSeeds", PyvtkImageConnector_RemoveAllSeeds, METH_VARARGS,
   (char*)"V.RemoveAllSeeds()\nC++: void RemoveAllSeeds()\n\n"},
  {(char*)"SetConnectedValue", PyvtkImageConnector_SetConnectedValue, METH_VARARGS,
   (char*)"V.SetConnectedValue(int)\nC++: void SetConnectedValue(unsigned char a)\n\nValues used by the MarkRegion method\n"},
  {(char*)"GetConnectedValue", PyvtkImageConnector_GetConnectedValue, METH_VARARGS,
   (char*)"V.GetConnectedValue() -> int\nC++: unsigned char GetConnectedValue()\n\nValues used by the MarkRegion method\n"},
  {(char*)"SetUnconnectedValue", PyvtkImageConnector_SetUnconnectedValue, METH_VARARGS,
   (char*)"V.SetUnconnectedValue(int)\nC++: void SetUnconnectedValue(unsigned char a)\n\nValues used by the MarkRegion method\n"},
  {(char*)"GetUnconnectedValue", PyvtkImageConnector_GetUnconnectedValue, METH_VARARGS,
   (char*)"V.GetUnconnectedValue() -> int\nC++: unsigned char GetUnconnectedValue()\n\nValues used by the MarkRegion method\n"},
  {(char*)"MarkData", PyvtkImageConnector_MarkData, METH_VARARGS,
   (char*)"V.MarkData(vtkImageData, int, [int, int, int, int, int, int])\nC++: void MarkData(vtkImageData *data, int dimensionality,\n    int ext[6])\n\nInput a data of 0's and \"UnconnectedValue\"s. Seeds of this object\nare used to find connected pixels.  All pixels connected to seeds\nare set to ConnectedValue.  The data has to be unsigned char.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageConnector_StaticNew()
{
  return vtkImageConnector::New();
}

PyObject *PyVTKClass_vtkImageConnectorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageConnector_StaticNew,
    PyvtkImageConnector_Methods,
    "vtkImageConnector", modulename,
    NULL, NULL,
    PyvtkImageConnector_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkImageConnector_Doc()
{
  static const char *docstring[] = {
    "vtkImageConnector - Create a binary image of a sphere.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkImageConnector is a helper class for connectivity filters. It is\nnot meant to be used directly. It implements a stack and breadth\nfirst search necessary for some connectivity filters.  Filtered axes\nsets the dimensionality of the neighbor comparison, and cannot be\nmore than three dimensions. As implemented, only voxels which share\nfaces are considered neighbors.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageConnector(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkImageConnectorSeed_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageConnectorSeed", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkImageConnectorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageConnector", o) != 0)
    {
    Py_DECREF(o);
    }

}

