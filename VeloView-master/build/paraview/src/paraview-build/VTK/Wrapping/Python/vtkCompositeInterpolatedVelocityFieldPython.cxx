// python wrapper for vtkCompositeInterpolatedVelocityField
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCompositeInterpolatedVelocityField.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositeInterpolatedVelocityField(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositeInterpolatedVelocityFieldNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew
extern "C" { PyObject *PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew
#endif

static const char **PyvtkCompositeInterpolatedVelocityField_Doc();


static PyObject *
PyvtkCompositeInterpolatedVelocityField_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositeInterpolatedVelocityField::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeInterpolatedVelocityField::NewInstance());

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
PyvtkCompositeInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositeInterpolatedVelocityField *tempr = vtkCompositeInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_GetLastDataSetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLastDataSetIndex() :
      op->vtkCompositeInterpolatedVelocityField::GetLastDataSetIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_GetLastDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetLastDataSet() :
      op->vtkCompositeInterpolatedVelocityField::GetLastDataSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_AddDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    op->AddDataSet(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeInterpolatedVelocityField_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeInterpolatedVelocityField_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeInterpolatedVelocityField_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeInterpolatedVelocityField_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositeInterpolatedVelocityField\nC++: vtkCompositeInterpolatedVelocityField *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeInterpolatedVelocityField_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeInterpolatedVelocityField\nC++: vtkCompositeInterpolatedVelocityField *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"GetLastDataSetIndex", PyvtkCompositeInterpolatedVelocityField_GetLastDataSetIndex, METH_VARARGS,
   (char*)"V.GetLastDataSetIndex() -> int\nC++: int GetLastDataSetIndex()\n\nGet the most recently visited dataset and it id. The dataset is\nused for a guess regarding where the next point will be, without\nsearching through all datasets. When setting the last dataset,\ncare is needed as no reference counting or checks are performed.\nThis feature is intended for custom interpolators only that cache\ndatasets independently.\n"},
  {(char*)"GetLastDataSet", PyvtkCompositeInterpolatedVelocityField_GetLastDataSet, METH_VARARGS,
   (char*)"V.GetLastDataSet() -> vtkDataSet\nC++: vtkDataSet *GetLastDataSet()\n\nGet the most recently visited dataset and it id. The dataset is\nused for a guess regarding where the next point will be, without\nsearching through all datasets. When setting the last dataset,\ncare is needed as no reference counting or checks are performed.\nThis feature is intended for custom interpolators only that cache\ndatasets independently.\n"},
  {(char*)"AddDataSet", PyvtkCompositeInterpolatedVelocityField_AddDataSet, METH_VARARGS,
   (char*)"V.AddDataSet(vtkDataSet)\nC++: virtual void AddDataSet(vtkDataSet *dataset)\n\nAdd a dataset for implicit velocity function evaluation. If more\nthan one dataset is added, the evaluation point is searched in\nall until a match is found. THIS FUNCTION DOES NOT CHANGE THE\nREFERENCE COUNT OF dataset FOR THREAD SAFETY REASONS.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkCompositeInterpolatedVelocityFieldNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkCompositeInterpolatedVelocityField_Methods,
    "vtkCompositeInterpolatedVelocityField", modulename,
    NULL, NULL,
    PyvtkCompositeInterpolatedVelocityField_Doc(),
    PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew(modulename));
  return cls;
}

const char **PyvtkCompositeInterpolatedVelocityField_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeInterpolatedVelocityField - An abstract class for\n\n",
    "Superclass: vtkAbstractInterpolatedVelocityField\n\n",
    "vtkCompositeInterpolatedVelocityField acts as a continuous velocity\nfield\n by performing cell interpolation on the underlying vtkDataSet. This\nis an\n abstract sub-class of vtkFunctionSet, NumberOfIndependentVariables =\n4\n (x,y,z,t) and NumberOfFunctions = 3 (u,v,w). With a brute-force\nscheme,\n every time an evaluation is performed, the target cell containing\npoint\n (x,y,z) needs to be found by cal",
    "ling FindCell(), via either\nvtkDataSet or\n vtkAbstractCelllocator's sub-classes (vtkCellLocator &\nvtkModifiedBSPTree).\n As it incurs a large cost, one (for\nvtkCellLocatorInterpolatedVelocityField\n via vtkAbstractCellLocator) or two (for vtkInterpolatedVelocityField\nvia\n vtkDataSet that involves vtkPointLocator in addressing vtkPointSet)\nlevels\n of cell caching may be exploited to increase the perf",
    "ormance.\n\n\n For vtkInterpolatedVelocityField, level #0 begins with intra-cell\ncaching.\n Specifically if the previous cell is valid and the next point is\nstill in\n it ( i.e., vtkCell::EvaluatePosition() returns 1, coupled with newly\ncreated\n parametric coordinates & weights ), the function values can be\ninterpolated\n and only vtkCell::EvaluatePosition() is invoked. If this fails, then\nlevel #1\n fol",
    "lows by inter-cell search for the target cell that contains the\nnext point.\n By an inter-cell search, the previous cell provides an important\nclue or serves\n as an immediate neighbor to aid in locating the target cell via\nvtkPointSet::\n FindCell(). If this still fails, a global cell location / search is\ninvoked via\n vtkPointSet::FindCell(). Here regardless of either inter-cell or\nglobal search,\n v",
    "tkPointLocator is in fact employed (for datasets of type\nvtkPointSet only, note\n vtkImageData and vtkRectilinearGrid are able to provide rapid and\nrobust cell\n location due to the simple mesh topology) as a crucial tool\nunderlying the cell\n locator. However, the use of vtkPointLocator makes\nvtkInterpolatedVelocityField\n non-robust in cell location for vtkPointSet.\n\n\n For vtkCellLocatorInterpolated",
    "VelocityField, the only caching (level\n#0) works\n by intra-cell trial. In case of failure, a global search for the\ntarget cell is\n invoked via vtkAbstractCellLocator::FindCell() and the actual work\nis done by\n either vtkCellLocator or vtkModifiedBSPTree (for datasets of type\nvtkPointSet\n only, while vtkImageData and vtkRectilinearGrid themselves are able\nto provide\n fast robust cell location). Wit",
    "hout the involvement of\nvtkPointLocator, robust\n cell location is achieved for vtkPointSet.\n\nCaveats:\n\n\n vtkCompositeInterpolatedVelocityField is not thread safe. A new\ninstance\n should be created by each thread.\n\nSee Also:\n\n\n vtkInterpolatedVelocityField vtkCellLocatorInterpolatedVelocityField\n vtkGenericInterpolatedVelocityField\nvtkCachingInterpolatedVelocityField\n vtkTemporalInterpolatedVelocit",
    "yField vtkFunctionSet vtkStreamer\nvtkStreamTracer\n\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Doc();

static PyMethodDef PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Type;
#define DECLARED_PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Type
#endif


static PyObject *
PyvtkCompositeInterpolatedVelocityFieldDataSetsType_vtkCompositeInterpolatedVelocityFieldDataSetsType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkCompositeInterpolatedVelocityFieldDataSetsType");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkCompositeInterpolatedVelocityFieldDataSetsType *op = new vtkCompositeInterpolatedVelocityFieldDataSetsType();

    result = PyVTKSpecialObject_New("vtkCompositeInterpolatedVelocityFieldDataSetsType", op);
    }

  return result;
}

static PyMethodDef PyvtkCompositeInterpolatedVelocityFieldDataSetsType_vtkCompositeInterpolatedVelocityFieldDataSetsType_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkCompositeInterpolatedVelocityFieldDataSetsType_NewMethod = \
{ (char*)"vtkCompositeInterpolatedVelocityFieldDataSetsType", PyvtkCompositeInterpolatedVelocityFieldDataSetsType_vtkCompositeInterpolatedVelocityFieldDataSetsType, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkCompositeInterpolatedVelocityFieldDataSetsType_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkCompositeInterpolatedVelocityFieldDataSetsType_vtkCompositeInterpolatedVelocityFieldDataSetsType(NULL, args);
}
#endif

static void PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkCompositeInterpolatedVelocityFieldDataSetsType *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Hash(PyObject *self)
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

PyTypeObject PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkCompositeInterpolatedVelocityFieldDataSetsType", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Hash, // tp_hash
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
  PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkCompositeInterpolatedVelocityFieldDataSetsType_New, // tp_new
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

static void *PyvtkCompositeInterpolatedVelocityFieldDataSetsType_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkCompositeInterpolatedVelocityFieldDataSetsType(*static_cast<const vtkCompositeInterpolatedVelocityFieldDataSetsType*>(obj));
    }
  return 0;
}

static PyObject *PyvtkCompositeInterpolatedVelocityFieldDataSetsType_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Type,
    PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Methods,
    PyvtkCompositeInterpolatedVelocityFieldDataSetsType_vtkCompositeInterpolatedVelocityFieldDataSetsType_Methods,
    &PyvtkCompositeInterpolatedVelocityFieldDataSetsType_NewMethod,
    PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Doc(), &PyvtkCompositeInterpolatedVelocityFieldDataSetsType_CCopy);

  return cls;
}

const char **PyvtkCompositeInterpolatedVelocityFieldDataSetsType_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeInterpolatedVelocityField - An abstract class for\n\n",
    "vtkCompositeInterpolatedVelocityField acts as a continuous velocity\nfield\n by performing cell interpolation on the underlying vtkDataSet. This\nis an\n abstract sub-class of vtkFunctionSet, NumberOfIndependentVariables =\n4\n (x,y,z,t) and NumberOfFunctions = 3 (u,v,w). With a brute-force\nscheme,\n every time an evaluation is performed, the target cell containing\npoint\n (x,y,z) needs to be found by cal",
    "ling FindCell(), via either\nvtkDataSet or\n vtkAbstractCelllocator's sub-classes (vtkCellLocator &\nvtkModifiedBSPTree).\n As it incurs a large cost, one (for\nvtkCellLocatorInterpolatedVelocityField\n via vtkAbstractCellLocator) or two (for vtkInterpolatedVelocityField\nvia\n vtkDataSet that involves vtkPointLocator in addressing vtkPointSet)\nlevels\n of cell caching may be exploited to increase the perf",
    "ormance.\n\n\n For vtkInterpolatedVelocityField, level #0 begins with intra-cell\ncaching.\n Specifically if the previous cell is valid and the next point is\nstill in\n it ( i.e., vtkCell::EvaluatePosition() returns 1, coupled with newly\ncreated\n parametric coordinates & weights ), the function values can be\ninterpolated\n and only vtkCell::EvaluatePosition() is invoked. If this fails, then\nlevel #1\n fol",
    "lows by inter-cell search for the target cell that contains the\nnext point.\n By an inter-cell search, the previous cell provides an important\nclue or serves\n as an immediate neighbor to aid in locating the target cell via\nvtkPointSet::\n FindCell(). If this still fails, a global cell location / search is\ninvoked via\n vtkPointSet::FindCell(). Here regardless of either inter-cell or\nglobal search,\n v",
    "tkPointLocator is in fact employed (for datasets of type\nvtkPointSet only, note\n vtkImageData and vtkRectilinearGrid are able to provide rapid and\nrobust cell\n location due to the simple mesh topology) as a crucial tool\nunderlying the cell\n locator. However, the use of vtkPointLocator makes\nvtkInterpolatedVelocityField\n non-robust in cell location for vtkPointSet.\n\n\n For vtkCellLocatorInterpolated",
    "VelocityField, the only caching (level\n#0) works\n by intra-cell trial. In case of failure, a global search for the\ntarget cell is\n invoked via vtkAbstractCellLocator::FindCell() and the actual work\nis done by\n either vtkCellLocator or vtkModifiedBSPTree (for datasets of type\nvtkPointSet\n only, while vtkImageData and vtkRectilinearGrid themselves are able\nto provide\n fast robust cell location). Wit",
    "hout the involvement of\nvtkPointLocator, robust\n cell location is achieved for vtkPointSet.\n\nCaveats:\n\n\n vtkCompositeInterpolatedVelocityField is not thread safe. A new\ninstance\n should be created by each thread.\n\nSee Also:\n\n\n vtkInterpolatedVelocityField vtkCellLocatorInterpolatedVelocityField\n vtkGenericInterpolatedVelocityField\nvtkCachingInterpolatedVelocityField\n vtkTemporalInterpolatedVelocit",
    "yField vtkFunctionSet vtkStreamer\nvtkStreamTracer\n\n",
    "V.vtkCompositeInterpolatedVelocityFieldDataSetsType()\nC++: vtkCompositeInterpolatedVelocityFieldDataSetsType()\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeInterpolatedVelocityField(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeInterpolatedVelocityFieldNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeInterpolatedVelocityField", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkCompositeInterpolatedVelocityFieldDataSetsType_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeInterpolatedVelocityFieldDataSetsType", o) != 0)
    {
    Py_DECREF(o);
    }

}

