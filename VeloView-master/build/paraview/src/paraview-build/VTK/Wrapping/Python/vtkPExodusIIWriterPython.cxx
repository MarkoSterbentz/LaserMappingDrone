// python wrapper for vtkPExodusIIWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPExodusIIWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPExodusIIWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPExodusIIWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExodusIIWriterNew
extern "C" { PyObject *PyVTKClass_vtkExodusIIWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkExodusIIWriterNew
#endif

static const char **PyvtkPExodusIIWriter_Doc();


static PyObject *
PyvtkPExodusIIWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIWriter *op = static_cast<vtkPExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPExodusIIWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIWriter *op = static_cast<vtkPExodusIIWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPExodusIIWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIWriter *op = static_cast<vtkPExodusIIWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPExodusIIWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPExodusIIWriter::NewInstance());

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
PyvtkPExodusIIWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPExodusIIWriter *tempr = vtkPExodusIIWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPExodusIIWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkPExodusIIWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPExodusIIWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPExodusIIWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPExodusIIWriter\nC++: vtkPExodusIIWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPExodusIIWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPExodusIIWriter\nC++: vtkPExodusIIWriter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPExodusIIWriter_StaticNew()
{
  return vtkPExodusIIWriter::New();
}

PyObject *PyVTKClass_vtkPExodusIIWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPExodusIIWriter_StaticNew,
    PyvtkPExodusIIWriter_Methods,
    "vtkPExodusIIWriter", modulename,
    NULL, NULL,
    PyvtkPExodusIIWriter_Doc(),
    PyVTKClass_vtkExodusIIWriterNew(modulename));
  return cls;
}

const char **PyvtkPExodusIIWriter_Doc()
{
  static const char *docstring[] = {
    "vtkPExodusIIWriter - Write Exodus II files\n\n",
    "Superclass: vtkExodusIIWriter\n\n",
    "This is a vtkWriter that writes it's vtkUnstructuredGrid\n    input out to an Exodus II file.  Go to\nhttp://endo.sandia.gov/SEACAS/\n    for more information about the Exodus II format.\n\n\n    Exodus files contain much information that is not captured\n    in a vtkUnstructuredGrid, such as time steps, information\n    lines, node sets, and side sets.  This information can be\n    stored in a vtkModelMet",
    "adata object.\n\n\n    The vtkExodusReader and vtkPExodusReader can create\n    a vtkModelMetadata object and embed it in a vtkUnstructuredGrid\n    in a series of field arrays.  This writer searches for these\n    field arrays and will use the metadata contained in them\n    when creating the new Exodus II file.\n\n\n    You can also explicitly give the vtkExodusIIWriter a\n    vtkModelMetadata object to us",
    "e when writing the file.\n\n\n    In the absence of the information provided by vtkModelMetadata,\n    if this writer is not part of a parallel application, we will use\n    reasonable defaults for all the values in the output Exodus file.\n    If you don't provide a block ID element array, we'll create a\n    block for each cell type that appears in the unstructured grid.\n\n\n    However if this writer is",
    " part of a parallel application (hence\n    writing out a distributed Exodus file), then we need at the very\n    least a list of all the block IDs that appear in the file.  And\n    we need the element array of block IDs for the input unstructured\ngrid.\n\n\n    In the absence of a vtkModelMetadata object, you can also provide\n    time step information which we will include in the output Exodus\n    fil",
    "e.\n\nCaveats:\n\n\n    If the input floating point field arrays and point locations are\nall\n    floats or all doubles, this class will operate more efficiently.\n    Mixing floats and doubles will slow you down, because Exodus II\n    requires that we write only floats or only doubles.\n\n\n    We use the terms \"point\" and \"node\" interchangeably.\n    Also, we use the terms \"element\" and \"cell\" interchangea",
    "bly.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPExodusIIWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPExodusIIWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPExodusIIWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

