// python wrapper for vtkExodusIICache
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkExodusIICache.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExodusIICache(PyObject *, const char *); }

static const char **PyvtkExodusIICacheKey_Doc();

static PyMethodDef PyvtkExodusIICacheKey_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkExodusIICacheKey_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkExodusIICacheKey_Type;
#define DECLARED_PyvtkExodusIICacheKey_Type
#endif


static PyObject *
PyvtkExodusIICacheKey_vtkExodusIICacheKey_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkExodusIICacheKey");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkExodusIICacheKey *op = new vtkExodusIICacheKey();

    result = PyVTKSpecialObject_New("vtkExodusIICacheKey", op);
    }

  return result;
}

static PyObject *
PyvtkExodusIICacheKey_vtkExodusIICacheKey_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkExodusIICacheKey");

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkExodusIICacheKey *op = new vtkExodusIICacheKey(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkExodusIICacheKey", op);
    }

  return result;
}

static PyMethodDef PyvtkExodusIICacheKey_vtkExodusIICacheKey_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIICacheKey_vtkExodusIICacheKey(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkExodusIICacheKey_vtkExodusIICacheKey_s1(self, args);
    case 4:
      return PyvtkExodusIICacheKey_vtkExodusIICacheKey_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkExodusIICacheKey");
  return NULL;
}


static PyMethodDef PyvtkExodusIICacheKey_NewMethod = \
{ (char*)"vtkExodusIICacheKey", PyvtkExodusIICacheKey_vtkExodusIICacheKey, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkExodusIICacheKey_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkExodusIICacheKey_vtkExodusIICacheKey(NULL, args);
}
#endif

static void PyvtkExodusIICacheKey_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkExodusIICacheKey *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

#if PY_VERSION_HEX >= 0x02010000
static PyObject *PyvtkExodusIICacheKey_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = NULL;
  PyObject *n2 = NULL;
  const vtkExodusIICacheKey *so1 = NULL;
  const vtkExodusIICacheKey *so2 = NULL;
  int result = -1;

  if (o1->ob_type == &PyvtkExodusIICacheKey_Type)
    {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkExodusIICacheKey *>(s1->vtk_ptr);
    }
  else
    {
    so1 = static_cast<const vtkExodusIICacheKey *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkExodusIICacheKey", &n1));
    if (so1 == NULL)
      {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
      }
    }

  if (o2->ob_type == &PyvtkExodusIICacheKey_Type)
    {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkExodusIICacheKey *>(s2->vtk_ptr);
    }
  else
    {
    so2 = static_cast<const vtkExodusIICacheKey *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkExodusIICacheKey", &n2));
    if (so2 == NULL)
      {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
      }
    }

  switch (opid)
    {
    case Py_LT:
      result = ((*so1) < (*so2));
      break;
    case Py_LE:
      break;
    case Py_EQ:
      break;
    case Py_NE:
      break;
    case Py_GT:
      break;
    case Py_GE:
      break;
    }

  if (n1)
    {
    Py_DECREF(n1);
    }
  else if (n2)
    {
    Py_DECREF(n2);
    }

  if (result == -1)
    {
    PyErr_SetString(PyExc_TypeError, (char *)"operation not available");
    return NULL;
    }

#if PY_VERSION_HEX >= 0x02030000
  // avoids aliasing issues with Py_INCREF(Py_False)
  return PyBool_FromLong((long)result);
#else
  if (result == 0)
    {
    Py_INCREF(Py_False);
    return Py_False;
    }
  Py_INCREF(Py_True);
  return Py_True;
#endif
}
#endif

static long PyvtkExodusIICacheKey_Hash(PyObject *self)
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

PyTypeObject PyvtkExodusIICacheKey_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkExodusIICacheKey", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkExodusIICacheKey_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkExodusIICacheKey_Hash, // tp_hash
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
#if PY_VERSION_HEX >= 0x02010000
  PyvtkExodusIICacheKey_RichCompare, // tp_richcompare
#else
  0, // tp_richcompare
#endif
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkExodusIICacheKey_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkExodusIICacheKey_New, // tp_new
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

static void *PyvtkExodusIICacheKey_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkExodusIICacheKey(*static_cast<const vtkExodusIICacheKey*>(obj));
    }
  return 0;
}

static PyObject *PyvtkExodusIICacheKey_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkExodusIICacheKey_Type,
    PyvtkExodusIICacheKey_Methods,
    PyvtkExodusIICacheKey_vtkExodusIICacheKey_Methods,
    &PyvtkExodusIICacheKey_NewMethod,
    PyvtkExodusIICacheKey_Doc(), &PyvtkExodusIICacheKey_CCopy);

  return cls;
}

const char **PyvtkExodusIICacheKey_Doc()
{
  static const char *docstring[] = {
    "vtkExodusIICacheKey - no description provided.\n\n",
    "\n\n",
    "V.vtkExodusIICacheKey()\nC++: vtkExodusIICacheKey()\nV.vtkExodusIICacheKey(int, int, int, int)\nC++: vtkExodusIICacheKey(int time, int objType, int objId, int arrId)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkExodusIICacheEntry_Doc();


static PyObject *
PyvtkExodusIICacheEntry_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetValue");
  void *vp = ap.GetSelfPointer(self);
  vtkExodusIICacheEntry *op = static_cast<vtkExodusIICacheEntry *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = op->GetValue();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIICacheEntry_Methods[] = {
  {(char*)"GetValue", PyvtkExodusIICacheEntry_GetValue, METH_VARARGS,
   (char*)"V.GetValue() -> vtkDataArray\nC++: vtkDataArray *GetValue()\n\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkExodusIICacheEntry_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkExodusIICacheEntry_Type;
#define DECLARED_PyvtkExodusIICacheEntry_Type
#endif


static PyObject *
PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkExodusIICacheEntry");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkExodusIICacheEntry *op = new vtkExodusIICacheEntry();

    result = PyVTKSpecialObject_New("vtkExodusIICacheEntry", op);
    }

  return result;
}

static PyObject *
PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkExodusIICacheEntry");

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    vtkExodusIICacheEntry *op = new vtkExodusIICacheEntry(temp0);

    result = PyVTKSpecialObject_New("vtkExodusIICacheEntry", op);
    }

  return result;
}

static PyMethodDef PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_Methods[] = {
  {NULL, PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s2, METH_VARARGS,
   (char*)"O *vtkDataArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIICacheEntry_vtkExodusIICacheEntry(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s1(self, args);
    case 1:
      return PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkExodusIICacheEntry");
  return NULL;
}


static PyMethodDef PyvtkExodusIICacheEntry_NewMethod = \
{ (char*)"vtkExodusIICacheEntry", PyvtkExodusIICacheEntry_vtkExodusIICacheEntry, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkExodusIICacheEntry_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkExodusIICacheEntry_vtkExodusIICacheEntry(NULL, args);
}
#endif

static void PyvtkExodusIICacheEntry_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkExodusIICacheEntry *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkExodusIICacheEntry_Hash(PyObject *self)
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

PyTypeObject PyvtkExodusIICacheEntry_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkExodusIICacheEntry", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkExodusIICacheEntry_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkExodusIICacheEntry_Hash, // tp_hash
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
  PyvtkExodusIICacheEntry_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkExodusIICacheEntry_New, // tp_new
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

static void *PyvtkExodusIICacheEntry_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkExodusIICacheEntry(*static_cast<const vtkExodusIICacheEntry*>(obj));
    }
  return 0;
}

static PyObject *PyvtkExodusIICacheEntry_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkExodusIICacheEntry_Type,
    PyvtkExodusIICacheEntry_Methods,
    PyvtkExodusIICacheEntry_vtkExodusIICacheEntry_Methods,
    &PyvtkExodusIICacheEntry_NewMethod,
    PyvtkExodusIICacheEntry_Doc(), &PyvtkExodusIICacheEntry_CCopy);

  return cls;
}

const char **PyvtkExodusIICacheEntry_Doc()
{
  static const char *docstring[] = {
    "vtkExodusIICacheEntry - no description provided.\n\n",
    "\n\n",
    "V.vtkExodusIICacheEntry()\nC++: vtkExodusIICacheEntry()\nV.vtkExodusIICacheEntry(vtkDataArray)\nC++: vtkExodusIICacheEntry(vtkDataArray *arr)\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExodusIICacheNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkExodusIICache_Doc();


static PyObject *
PyvtkExodusIICache_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExodusIICache::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIICache_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExodusIICache::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIICache_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExodusIICache *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExodusIICache::NewInstance());

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
PyvtkExodusIICache_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExodusIICache *tempr = vtkExodusIICache::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIICache_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkExodusIICache::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIICache_SetCacheCapacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheCapacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheCapacity(temp0);
      }
    else
      {
      op->vtkExodusIICache::SetCacheCapacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIICache_GetSpaceLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpaceLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSpaceLeft() :
      op->vtkExodusIICache::GetSpaceLeft());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIICache_ReduceToSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceToSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIICache *op = static_cast<vtkExodusIICache *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->ReduceToSize(temp0) :
      op->vtkExodusIICache::ReduceToSize(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIICache_Methods[] = {
  {(char*)"GetClassName", PyvtkExodusIICache_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExodusIICache_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExodusIICache_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExodusIICache\nC++: vtkExodusIICache *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExodusIICache_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExodusIICache\nC++: vtkExodusIICache *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Clear", PyvtkExodusIICache_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\n"},
  {(char*)"SetCacheCapacity", PyvtkExodusIICache_SetCacheCapacity, METH_VARARGS,
   (char*)"V.SetCacheCapacity(float)\nC++: void SetCacheCapacity(double sizeInMiB)\n\n"},
  {(char*)"GetSpaceLeft", PyvtkExodusIICache_GetSpaceLeft, METH_VARARGS,
   (char*)"V.GetSpaceLeft() -> float\nC++: double GetSpaceLeft()\n\n"},
  {(char*)"ReduceToSize", PyvtkExodusIICache_ReduceToSize, METH_VARARGS,
   (char*)"V.ReduceToSize(float) -> int\nC++: int ReduceToSize(double newSize)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExodusIICache_StaticNew()
{
  return vtkExodusIICache::New();
}

PyObject *PyVTKClass_vtkExodusIICacheNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExodusIICache_StaticNew,
    PyvtkExodusIICache_Methods,
    "vtkExodusIICache", modulename,
    NULL, NULL,
    PyvtkExodusIICache_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkExodusIICache_Doc()
{
  static const char *docstring[] = {
    "vtkExodusIICache - no description provided.\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExodusIICache(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkExodusIICacheKey_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExodusIICacheKey", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkExodusIICacheEntry_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExodusIICacheEntry", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkExodusIICacheNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExodusIICache", o) != 0)
    {
    Py_DECREF(o);
    }

}

