// python wrapper for vtkReductionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkReductionFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkReductionFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkReductionFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkReductionFilter_Doc();

#ifndef DECLARED_PyvtkReductionFilter_Tags_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkReductionFilter_Tags_Type;
#define DECLARED_PyvtkReductionFilter_Tags_Type
#endif

PyTypeObject PyvtkReductionFilter_Tags_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Tags", // tp_name
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

PyObject *PyvtkReductionFilter_Tags_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkReductionFilter_Tags_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkReductionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkReductionFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReductionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkReductionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReductionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkReductionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkReductionFilter::NewInstance());

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
PyvtkReductionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkReductionFilter *tempr = vtkReductionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReductionFilter_SetPreGatherHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreGatherHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  vtkAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetPreGatherHelper(temp0);
      }
    else
      {
      op->vtkReductionFilter::SetPreGatherHelper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReductionFilter_SetPreGatherHelperName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreGatherHelperName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreGatherHelperName(temp0);
      }
    else
      {
      op->vtkReductionFilter::SetPreGatherHelperName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReductionFilter_GetPreGatherHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreGatherHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetPreGatherHelper() :
      op->vtkReductionFilter::GetPreGatherHelper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReductionFilter_SetPostGatherHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPostGatherHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  vtkAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetPostGatherHelper(temp0);
      }
    else
      {
      op->vtkReductionFilter::SetPostGatherHelper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReductionFilter_SetPostGatherHelperName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPostGatherHelperName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPostGatherHelperName(temp0);
      }
    else
      {
      op->vtkReductionFilter::SetPostGatherHelperName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReductionFilter_GetPostGatherHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPostGatherHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetPostGatherHelper() :
      op->vtkReductionFilter::GetPostGatherHelper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReductionFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkReductionFilter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReductionFilter_SetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThrough(temp0);
      }
    else
      {
      op->vtkReductionFilter::SetPassThrough(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReductionFilter_GetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassThrough() :
      op->vtkReductionFilter::GetPassThrough());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReductionFilter_SetGenerateProcessIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateProcessIds(temp0);
      }
    else
      {
      op->vtkReductionFilter::SetGenerateProcessIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReductionFilter_GetGenerateProcessIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateProcessIds() :
      op->vtkReductionFilter::GetGenerateProcessIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkReductionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkReductionFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkReductionFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkReductionFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkReductionFilter\nC++: vtkReductionFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkReductionFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkReductionFilter\nC++: vtkReductionFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPreGatherHelper", PyvtkReductionFilter_SetPreGatherHelper, METH_VARARGS,
   (char*)"V.SetPreGatherHelper(vtkAlgorithm)\nC++: void SetPreGatherHelper(vtkAlgorithm *)\n\nGet/Set the pre-reduction helper. Pre-Reduction helper is an\nalgorithm that runs on each node's data before it is sent to the\nroot.\n"},
  {(char*)"SetPreGatherHelperName", PyvtkReductionFilter_SetPreGatherHelperName, METH_VARARGS,
   (char*)"V.SetPreGatherHelperName(string)\nC++: void SetPreGatherHelperName(const char *)\n\nGet/Set the pre-reduction helper. Pre-Reduction helper is an\nalgorithm that runs on each node's data before it is sent to the\nroot.\n"},
  {(char*)"GetPreGatherHelper", PyvtkReductionFilter_GetPreGatherHelper, METH_VARARGS,
   (char*)"V.GetPreGatherHelper() -> vtkAlgorithm\nC++: vtkAlgorithm *GetPreGatherHelper()\n\nGet/Set the pre-reduction helper. Pre-Reduction helper is an\nalgorithm that runs on each node's data before it is sent to the\nroot.\n"},
  {(char*)"SetPostGatherHelper", PyvtkReductionFilter_SetPostGatherHelper, METH_VARARGS,
   (char*)"V.SetPostGatherHelper(vtkAlgorithm)\nC++: void SetPostGatherHelper(vtkAlgorithm *)\n\nGet/Set the reduction helper. Reduction helper is an algorithm\nwith multiple input connections, that produces a single output as\nthe reduced output. This is run on the root node to produce a\nresult from the gathered results of each node.\n"},
  {(char*)"SetPostGatherHelperName", PyvtkReductionFilter_SetPostGatherHelperName, METH_VARARGS,
   (char*)"V.SetPostGatherHelperName(string)\nC++: void SetPostGatherHelperName(const char *)\n\nGet/Set the reduction helper. Reduction helper is an algorithm\nwith multiple input connections, that produces a single output as\nthe reduced output. This is run on the root node to produce a\nresult from the gathered results of each node.\n"},
  {(char*)"GetPostGatherHelper", PyvtkReductionFilter_GetPostGatherHelper, METH_VARARGS,
   (char*)"V.GetPostGatherHelper() -> vtkAlgorithm\nC++: vtkAlgorithm *GetPostGatherHelper()\n\nGet/Set the reduction helper. Reduction helper is an algorithm\nwith multiple input connections, that produces a single output as\nthe reduced output. This is run on the root node to produce a\nresult from the gathered results of each node.\n"},
  {(char*)"SetController", PyvtkReductionFilter_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *)\n\nGet/Set the MPI controller used for gathering.\n"},
  {(char*)"SetPassThrough", PyvtkReductionFilter_SetPassThrough, METH_VARARGS,
   (char*)"V.SetPassThrough(int)\nC++: void SetPassThrough(int a)\n\nGet/Set the PassThrough flag which (when set to a nonnegative\nnumber N) tells the filter to produce results that come from node\nN only. The data from that node still runs through the\nPreReduction and PostGatherHelper algorithms.\n"},
  {(char*)"GetPassThrough", PyvtkReductionFilter_GetPassThrough, METH_VARARGS,
   (char*)"V.GetPassThrough() -> int\nC++: int GetPassThrough()\n\nGet/Set the PassThrough flag which (when set to a nonnegative\nnumber N) tells the filter to produce results that come from node\nN only. The data from that node still runs through the\nPreReduction and PostGatherHelper algorithms.\n"},
  {(char*)"SetGenerateProcessIds", PyvtkReductionFilter_SetGenerateProcessIds, METH_VARARGS,
   (char*)"V.SetGenerateProcessIds(int)\nC++: void SetGenerateProcessIds(int a)\n\nWhen set, a new array vtkOriginalProcessIds will be added to the\noutput of the the pre-gather helper (or input, if no pre-gather\nhelper is set). The values in the array indicate the process id.\nNote that the array is added only if the number of processes is >\n1.\n"},
  {(char*)"GetGenerateProcessIds", PyvtkReductionFilter_GetGenerateProcessIds, METH_VARARGS,
   (char*)"V.GetGenerateProcessIds() -> int\nC++: int GetGenerateProcessIds()\n\nWhen set, a new array vtkOriginalProcessIds will be added to the\noutput of the the pre-gather helper (or input, if no pre-gather\nhelper is set). The values in the array indicate the process id.\nNote that the array is added only if the number of processes is >\n1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkReductionFilter_StaticNew()
{
  return vtkReductionFilter::New();
}

PyObject *PyVTKClass_vtkReductionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkReductionFilter_StaticNew,
    PyvtkReductionFilter_Methods,
    "vtkReductionFilter", modulename,
    NULL, NULL,
    PyvtkReductionFilter_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkReductionFilter_Tags_Type);
    PyvtkReductionFilter_Tags_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkReductionFilter_Tags_Type;
    if (o && PyDict_SetItemString(d, (char *)"Tags", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyvtkReductionFilter_Tags_FromEnum(vtkReductionFilter::TRANSMIT_DATA_OBJECT);
    if (o)
      {
      PyDict_SetItemString(d, (char *)"TRANSMIT_DATA_OBJECT", o);
      Py_DECREF(o);
      }
    }

  return cls;
}

const char **PyvtkReductionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkReductionFilter - A generic filter that can reduce any type of\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "A generic filter that can reduce any type of dataset using any\nreduction algorithm. Actual reduction is performed by running the\nPreGatherHelper and PostGatherHelper algorithms. The PreGatherHelper\nruns on each node in parallel. Next the intermediate results are\ngathered to the root node. Then the root node then runs the\nPostGatherHelper algorithm to produce a single result. The\nPostGatherHelper m",
    "ust be an algorithm that takes multiple input\nconnections and produces a single reduced output.\n\nIn addition to doing reduction the PassThrough variable lets you\nchoose to pass through the results of any one node instead of\naggregating all of them together.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkReductionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkReductionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkReductionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

