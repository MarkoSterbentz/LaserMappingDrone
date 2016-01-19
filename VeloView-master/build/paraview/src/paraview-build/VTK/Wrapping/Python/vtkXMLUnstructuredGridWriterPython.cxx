// python wrapper for vtkXMLUnstructuredGridWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLUnstructuredGridWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLUnstructuredGridWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLUnstructuredGridWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLUnstructuredDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLUnstructuredDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLUnstructuredDataWriterNew
#endif

static const char **PyvtkXMLUnstructuredGridWriter_Doc();


static PyObject *
PyvtkXMLUnstructuredGridWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredGridWriter *op = static_cast<vtkXMLUnstructuredGridWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLUnstructuredGridWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredGridWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredGridWriter *op = static_cast<vtkXMLUnstructuredGridWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLUnstructuredGridWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredGridWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredGridWriter *op = static_cast<vtkXMLUnstructuredGridWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLUnstructuredGridWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLUnstructuredGridWriter::NewInstance());

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
PyvtkXMLUnstructuredGridWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLUnstructuredGridWriter *tempr = vtkXMLUnstructuredGridWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredGridWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredGridWriter *op = static_cast<vtkXMLUnstructuredGridWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGridBase *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkXMLUnstructuredGridWriter::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredGridWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredGridWriter *op = static_cast<vtkXMLUnstructuredGridWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkXMLUnstructuredGridWriter::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLUnstructuredGridWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLUnstructuredGridWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLUnstructuredGridWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLUnstructuredGridWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLUnstructuredGridWriter\nC++: vtkXMLUnstructuredGridWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLUnstructuredGridWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLUnstructuredGridWriter\nC++: vtkXMLUnstructuredGridWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkXMLUnstructuredGridWriter_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkUnstructuredGridBase\nC++: vtkUnstructuredGridBase *GetInput()\n\nGet/Set the writer's input.\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLUnstructuredGridWriter_GetDefaultFileExtension, METH_VARARGS,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLUnstructuredGridWriter_StaticNew()
{
  return vtkXMLUnstructuredGridWriter::New();
}

PyObject *PyVTKClass_vtkXMLUnstructuredGridWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLUnstructuredGridWriter_StaticNew,
    PyvtkXMLUnstructuredGridWriter_Methods,
    "vtkXMLUnstructuredGridWriter", modulename,
    NULL, NULL,
    PyvtkXMLUnstructuredGridWriter_Doc(),
    PyVTKClass_vtkXMLUnstructuredDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLUnstructuredGridWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLUnstructuredGridWriter - Write VTK XML UnstructuredGrid files.\n\n",
    "Superclass: vtkXMLUnstructuredDataWriter\n\n",
    "vtkXMLUnstructuredGridWriter writes the VTK XML UnstructuredGrid file\nformat.  One unstructured grid input can be written into one file in\nany number of streamed pieces (if supported by the rest of the\npipeline).  The standard extension for this writer's file format is\n\"vtu\".  This writer is also used to write a single piece of the\nparallel file format.\n\nSee Also:\n\nvtkXMLPUnstructuredGridWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLUnstructuredGridWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLUnstructuredGridWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLUnstructuredGridWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

