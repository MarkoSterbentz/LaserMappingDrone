// python wrapper for vtkTimeStamp
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkTimeStamp.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTimeStamp(PyObject *, const char *); }

static const char **PyvtkTimeStamp_Doc();


static PyObject *
PyvtkTimeStamp_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Modified");
  void *vp = ap.GetSelfPointer(self);
  vtkTimeStamp *op = static_cast<vtkTimeStamp *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->Modified();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimeStamp_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMTime");
  void *vp = ap.GetSelfPointer(self);
  vtkTimeStamp *op = static_cast<vtkTimeStamp *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    unsigned long tempr = op->GetMTime();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTimeStamp_Methods[] = {
  {(char*)"Modified", PyvtkTimeStamp_Modified, METH_VARARGS,
   (char*)"V.Modified()\nC++: void Modified()\n\nSet this objects time to the current time. The current time is\njust a monotonically increasing unsigned long integer. It is\npossible for this number to wrap around back to zero. This should\nonly happen for processes that have been running for a very long\ntime, while constantly changing objects within the program. When\nthis does occur, the typical consequence should be that some\nfilters will update themselves when really they don't need to.\n"},
  {(char*)"GetMTime", PyvtkTimeStamp_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn this object's Modified time.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkTimeStamp_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTimeStamp_Type;
#define DECLARED_PyvtkTimeStamp_Type
#endif


static PyObject *
PyvtkTimeStamp_vtkTimeStamp_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTimeStamp");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTimeStamp *op = new vtkTimeStamp();

    result = PyVTKSpecialObject_New("vtkTimeStamp", op);
    }

  return result;
}

static PyObject *
PyvtkTimeStamp_vtkTimeStamp_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTimeStamp");

  vtkTimeStamp *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTimeStamp"))
    {
    vtkTimeStamp *op = new vtkTimeStamp(*temp0);

    result = PyVTKSpecialObject_New("vtkTimeStamp", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTimeStamp_vtkTimeStamp_Methods[] = {
  {NULL, PyvtkTimeStamp_vtkTimeStamp_s2, METH_VARARGS,
   (char*)"O &vtkTimeStamp"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTimeStamp_vtkTimeStamp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkTimeStamp_vtkTimeStamp_s1(self, args);
    case 1:
      return PyvtkTimeStamp_vtkTimeStamp_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkTimeStamp");
  return NULL;
}


static PyMethodDef PyvtkTimeStamp_NewMethod = \
{ (char*)"vtkTimeStamp", PyvtkTimeStamp_vtkTimeStamp, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkTimeStamp_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkTimeStamp_vtkTimeStamp(NULL, args);
}
#endif

static void PyvtkTimeStamp_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkTimeStamp *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

#if PY_VERSION_HEX >= 0x02010000
static PyObject *PyvtkTimeStamp_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = NULL;
  PyObject *n2 = NULL;
  const vtkTimeStamp *so1 = NULL;
  const vtkTimeStamp *so2 = NULL;
  int result = -1;

  if (o1->ob_type == &PyvtkTimeStamp_Type)
    {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkTimeStamp *>(s1->vtk_ptr);
    }
  else
    {
    so1 = static_cast<const vtkTimeStamp *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkTimeStamp", &n1));
    if (so1 == NULL)
      {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
      }
    }

  if (o2->ob_type == &PyvtkTimeStamp_Type)
    {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkTimeStamp *>(s2->vtk_ptr);
    }
  else
    {
    so2 = static_cast<const vtkTimeStamp *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkTimeStamp", &n2));
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
      result = ((*so1) > (*so2));
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

static long PyvtkTimeStamp_Hash(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  const vtkTimeStamp *op = static_cast<const vtkTimeStamp *>(obj->vtk_ptr);
  unsigned long mtime = *op;
  long h = (long)mtime;
  if (h != -1) { return h; }
  return -2;
}

PyTypeObject PyvtkTimeStamp_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkTimeStamp", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTimeStamp_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkTimeStamp_Hash, // tp_hash
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
  PyvtkTimeStamp_RichCompare, // tp_richcompare
#else
  0, // tp_richcompare
#endif
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkTimeStamp_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkTimeStamp_New, // tp_new
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

static void *PyvtkTimeStamp_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkTimeStamp(*static_cast<const vtkTimeStamp*>(obj));
    }
  return 0;
}

static PyObject *PyvtkTimeStamp_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkTimeStamp_Type,
    PyvtkTimeStamp_Methods,
    PyvtkTimeStamp_vtkTimeStamp_Methods,
    &PyvtkTimeStamp_NewMethod,
    PyvtkTimeStamp_Doc(), &PyvtkTimeStamp_CCopy);

  return cls;
}

const char **PyvtkTimeStamp_Doc()
{
  static const char *docstring[] = {
    "vtkTimeStamp - record modification and/or execution time\n\n",
    "vtkTimeStamp records a unique time when the method Modified() is\nexecuted. This time is guaranteed to be monotonically increasing.\nClasses use this object to record modified and/or execution time.\nThere is built in support for the binary < and > comparison operators\nbetween two vtkTimeStamp objects.\n\n",
    "V.vtkTimeStamp()\nC++: vtkTimeStamp()\nV.vtkTimeStamp(vtkTimeStamp)\nC++: vtkTimeStamp(const &vtkTimeStamp)\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTimeStamp(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkTimeStamp_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTimeStamp", o) != 0)
    {
    Py_DECREF(o);
    }

}

