// python wrapper for vtkSurfaceVectors
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSurfaceVectors.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSurfaceVectors(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSurfaceVectorsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkSurfaceVectors_Doc();

#ifndef DECLARED_PyvtkSurfaceVectors_ConstraintMode_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSurfaceVectors_ConstraintMode_Type;
#define DECLARED_PyvtkSurfaceVectors_ConstraintMode_Type
#endif

PyTypeObject PyvtkSurfaceVectors_ConstraintMode_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ConstraintMode", // tp_name
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

PyObject *PyvtkSurfaceVectors_ConstraintMode_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSurfaceVectors_ConstraintMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSurfaceVectors_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceVectors *op = static_cast<vtkSurfaceVectors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSurfaceVectors::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceVectors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceVectors *op = static_cast<vtkSurfaceVectors *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSurfaceVectors::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceVectors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceVectors *op = static_cast<vtkSurfaceVectors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSurfaceVectors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSurfaceVectors::NewInstance());

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
PyvtkSurfaceVectors_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSurfaceVectors *tempr = vtkSurfaceVectors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceVectors_SetConstraintMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceVectors *op = static_cast<vtkSurfaceVectors *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConstraintMode(temp0);
      }
    else
      {
      op->vtkSurfaceVectors::SetConstraintMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceVectors_GetConstraintMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstraintMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceVectors *op = static_cast<vtkSurfaceVectors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetConstraintMode() :
      op->vtkSurfaceVectors::GetConstraintMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceVectors_SetConstraintModeToParallel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintModeToParallel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceVectors *op = static_cast<vtkSurfaceVectors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetConstraintModeToParallel();
      }
    else
      {
      op->vtkSurfaceVectors::SetConstraintModeToParallel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceVectors_SetConstraintModeToPerpendicular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintModeToPerpendicular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceVectors *op = static_cast<vtkSurfaceVectors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetConstraintModeToPerpendicular();
      }
    else
      {
      op->vtkSurfaceVectors::SetConstraintModeToPerpendicular();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceVectors_SetConstraintModeToPerpendicularScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintModeToPerpendicularScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceVectors *op = static_cast<vtkSurfaceVectors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetConstraintModeToPerpendicularScale();
      }
    else
      {
      op->vtkSurfaceVectors::SetConstraintModeToPerpendicularScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSurfaceVectors_Methods[] = {
  {(char*)"GetClassName", PyvtkSurfaceVectors_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSurfaceVectors_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSurfaceVectors_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSurfaceVectors\nC++: vtkSurfaceVectors *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSurfaceVectors_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSurfaceVectors\nC++: vtkSurfaceVectors *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetConstraintMode", PyvtkSurfaceVectors_SetConstraintMode, METH_VARARGS,
   (char*)"V.SetConstraintMode(int)\nC++: void SetConstraintMode(int a)\n\nThis mode determines whether this filter projects vectors to be\nperpendicular to surface or parallel to surface. It defaults to\nparallel.\n"},
  {(char*)"GetConstraintMode", PyvtkSurfaceVectors_GetConstraintMode, METH_VARARGS,
   (char*)"V.GetConstraintMode() -> int\nC++: int GetConstraintMode()\n\nThis mode determines whether this filter projects vectors to be\nperpendicular to surface or parallel to surface. It defaults to\nparallel.\n"},
  {(char*)"SetConstraintModeToParallel", PyvtkSurfaceVectors_SetConstraintModeToParallel, METH_VARARGS,
   (char*)"V.SetConstraintModeToParallel()\nC++: void SetConstraintModeToParallel()\n\nThis mode determines whether this filter projects vectors to be\nperpendicular to surface or parallel to surface. It defaults to\nparallel.\n"},
  {(char*)"SetConstraintModeToPerpendicular", PyvtkSurfaceVectors_SetConstraintModeToPerpendicular, METH_VARARGS,
   (char*)"V.SetConstraintModeToPerpendicular()\nC++: void SetConstraintModeToPerpendicular()\n\nThis mode determines whether this filter projects vectors to be\nperpendicular to surface or parallel to surface. It defaults to\nparallel.\n"},
  {(char*)"SetConstraintModeToPerpendicularScale", PyvtkSurfaceVectors_SetConstraintModeToPerpendicularScale, METH_VARARGS,
   (char*)"V.SetConstraintModeToPerpendicularScale()\nC++: void SetConstraintModeToPerpendicularScale()\n\nThis mode determines whether this filter projects vectors to be\nperpendicular to surface or parallel to surface. It defaults to\nparallel.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSurfaceVectors_StaticNew()
{
  return vtkSurfaceVectors::New();
}

PyObject *PyVTKClass_vtkSurfaceVectorsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSurfaceVectors_StaticNew,
    PyvtkSurfaceVectors_Methods,
    "vtkSurfaceVectors", modulename,
    NULL, NULL,
    PyvtkSurfaceVectors_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSurfaceVectors_ConstraintMode_Type);
    PyvtkSurfaceVectors_ConstraintMode_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSurfaceVectors_ConstraintMode_Type;
    if (o && PyDict_SetItemString(d, (char *)"ConstraintMode", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "Parallel", vtkSurfaceVectors::Parallel },
          { "Perpendicular", vtkSurfaceVectors::Perpendicular },
          { "PerpendicularScale", vtkSurfaceVectors::PerpendicularScale },
        };

      o = PyvtkSurfaceVectors_ConstraintMode_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSurfaceVectors_Doc()
{
  static const char *docstring[] = {
    "vtkSurfaceVectors - Constrains vectors to surface.\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "This filter works on point vectors.  It does not work on cell vectors\nyet. A normal is conputed for a point by averaging normals of\nsurrounding 2D cells.  The vector is then constrained to be\nperpendicular to the normal.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSurfaceVectors(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSurfaceVectorsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSurfaceVectors", o) != 0)
    {
    Py_DECREF(o);
    }

}

