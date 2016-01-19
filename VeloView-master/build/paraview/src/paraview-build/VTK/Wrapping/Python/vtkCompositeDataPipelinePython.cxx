// python wrapper for vtkCompositeDataPipeline
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkCompositeDataPipeline.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositeDataPipeline(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositeDataPipelineNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStreamingDemandDrivenPipelineNew
extern "C" { PyObject *PyVTKClass_vtkStreamingDemandDrivenPipelineNew(const char *); }
#define DECLARED_PyVTKClass_vtkStreamingDemandDrivenPipelineNew
#endif

static const char **PyvtkCompositeDataPipeline_Doc();


static PyObject *
PyvtkCompositeDataPipeline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataPipeline *op = static_cast<vtkCompositeDataPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositeDataPipeline::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataPipeline *op = static_cast<vtkCompositeDataPipeline *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataPipeline *op = static_cast<vtkCompositeDataPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeDataPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataPipeline::NewInstance());

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
PyvtkCompositeDataPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositeDataPipeline *tempr = vtkCompositeDataPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_GetCompositeOutputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeOutputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataPipeline *op = static_cast<vtkCompositeDataPipeline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetCompositeOutputData(temp0) :
      op->vtkCompositeDataPipeline::GetCompositeOutputData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_LOAD_REQUESTED_BLOCKS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LOAD_REQUESTED_BLOCKS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkCompositeDataPipeline::LOAD_REQUESTED_BLOCKS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_COMPOSITE_DATA_META_DATA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COMPOSITE_DATA_META_DATA");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationObjectBaseKey *tempr = vtkCompositeDataPipeline::COMPOSITE_DATA_META_DATA();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_UPDATE_COMPOSITE_INDICES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_COMPOSITE_INDICES");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerVectorKey *tempr = vtkCompositeDataPipeline::UPDATE_COMPOSITE_INDICES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_BLOCK_AMOUNT_OF_DETAIL(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BLOCK_AMOUNT_OF_DETAIL");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleKey *tempr = vtkCompositeDataPipeline::BLOCK_AMOUNT_OF_DETAIL();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeDataPipeline_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeDataPipeline_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeDataPipeline_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeDataPipeline_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositeDataPipeline\nC++: vtkCompositeDataPipeline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeDataPipeline_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeDataPipeline\nC++: vtkCompositeDataPipeline *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetCompositeOutputData", PyvtkCompositeDataPipeline_GetCompositeOutputData, METH_VARARGS,
   (char*)"V.GetCompositeOutputData(int) -> vtkDataObject\nC++: vtkDataObject *GetCompositeOutputData(int port)\n\nReturns the data object stored with the DATA_OBJECT() in the\noutput port\n"},
  {(char*)"LOAD_REQUESTED_BLOCKS", PyvtkCompositeDataPipeline_LOAD_REQUESTED_BLOCKS, METH_VARARGS | METH_STATIC,
   (char*)"V.LOAD_REQUESTED_BLOCKS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *LOAD_REQUESTED_BLOCKS()\n\nAn integer key that indicates to the source to load all requested\nblocks specified in UPDATE_COMPOSITE_INDICES.\n"},
  {(char*)"COMPOSITE_DATA_META_DATA", PyvtkCompositeDataPipeline_COMPOSITE_DATA_META_DATA, METH_VARARGS | METH_STATIC,
   (char*)"V.COMPOSITE_DATA_META_DATA() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *COMPOSITE_DATA_META_DATA(\n    )\n\nCOMPOSITE_DATA_META_DATA is a key placed in the output-port\ninformation by readers/sources producing composite datasets. This\nmeta-data provides information about the structure of the\ncomposite dataset and things like data-bounds etc.\n*** THIS IS AN EXPERIMENTAL FEATURE. IT MAY CHANGE WITHOUT NOTICE\n***\n"},
  {(char*)"UPDATE_COMPOSITE_INDICES", PyvtkCompositeDataPipeline_UPDATE_COMPOSITE_INDICES, METH_VARARGS | METH_STATIC,
   (char*)"V.UPDATE_COMPOSITE_INDICES() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *UPDATE_COMPOSITE_INDICES(\n    )\n\nUPDATE_COMPOSITE_INDICES is a key placed in the request to\nrequest a set of composite indices from a reader/source producing\ncomposite dataset. Typically, the reader publishes its structure\nusing COMPOSITE_DATA_META_DATA() and then the sink requests\nblocks of interest using UPDATE_COMPOSITE_INDICES(). Note that\nUPDATE_COMPOSITE_INDICES has to be sorted vector with increasing\nindices.\n*** THIS IS AN EXPERIMENTAL FEATURE. IT MAY CHANGE WITHOUT NOTICE\n***\n"},
  {(char*)"BLOCK_AMOUNT_OF_DETAIL", PyvtkCompositeDataPipeline_BLOCK_AMOUNT_OF_DETAIL, METH_VARARGS | METH_STATIC,
   (char*)"V.BLOCK_AMOUNT_OF_DETAIL() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *BLOCK_AMOUNT_OF_DETAIL()\n\nBLOCK_AMOUNT_OF_DETAIL is a key placed in the information about a\nmulti-block dataset that indicates how complex the block is.  It\nis intended to work with multi-resolution streaming code.  For\nexample in a multi-resolution dataset of points, this key might\nstore the number of points.\n*** THIS IS AN EXPERIMENTAL FEATURE. IT MAY CHANGE WITHOUT NOTICE\n***\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeDataPipeline_StaticNew()
{
  return vtkCompositeDataPipeline::New();
}

PyObject *PyVTKClass_vtkCompositeDataPipelineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeDataPipeline_StaticNew,
    PyvtkCompositeDataPipeline_Methods,
    "vtkCompositeDataPipeline", modulename,
    NULL, NULL,
    PyvtkCompositeDataPipeline_Doc(),
    PyVTKClass_vtkStreamingDemandDrivenPipelineNew(modulename));
  return cls;
}

const char **PyvtkCompositeDataPipeline_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeDataPipeline - Executive supporting composite datasets.\n\n",
    "Superclass: vtkStreamingDemandDrivenPipeline\n\n",
    "vtkCompositeDataPipeline is an executive that supports the processing\nof composite dataset. It supports algorithms that are aware of\ncomposite dataset as well as those that are not. Type checking is\nperformed at run time. Algorithms that are not composite\ndataset-aware have to support all dataset types contained in the\ncomposite dataset. The pipeline execution can be summarized as\nfollows:\n\n* REQU",
    "EST_INFORMATION: The producers have to provide information\n  about the contents of the composite dataset in this pass. Sources\n  that can produce more than one piece (note that a piece is\n  different than a block; each piece consistes of 0 or more blocks)\n  should set CAN_HANDLE_PIECE_REQUEST.\n\n* REQUEST_UPDATE_EXTENT: This pass is identical to the one\n  implemented in vtkStreamingDemandDrivenPipe",
    "line\n\n* REQUEST_DATA: This is where the algorithms execute. If the\n  vtkCompositeDataPipeline is assigned to a simple filter, it will\n  invoke the  vtkStreamingDemandDrivenPipeline passes in a loop,\n  passing a different block each time and will collect the results in\na composite dataset.\n\nSee also:\n\n\n vtkCompositeDataSet\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeDataPipeline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeDataPipelineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeDataPipeline", o) != 0)
    {
    Py_DECREF(o);
    }

}

