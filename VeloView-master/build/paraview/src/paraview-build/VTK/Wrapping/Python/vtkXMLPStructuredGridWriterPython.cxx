// python wrapper for vtkXMLPStructuredGridWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLPStructuredGridWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLPStructuredGridWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLPStructuredGridWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLPStructuredDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLPStructuredDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPStructuredDataWriterNew
#endif

static const char **PyvtkXMLPStructuredGridWriter_Doc();


static PyObject *
PyvtkXMLPStructuredGridWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridWriter *op = static_cast<vtkXMLPStructuredGridWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLPStructuredGridWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredGridWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridWriter *op = static_cast<vtkXMLPStructuredGridWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPStructuredGridWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredGridWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridWriter *op = static_cast<vtkXMLPStructuredGridWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLPStructuredGridWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPStructuredGridWriter::NewInstance());

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
PyvtkXMLPStructuredGridWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLPStructuredGridWriter *tempr = vtkXMLPStructuredGridWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredGridWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridWriter *op = static_cast<vtkXMLPStructuredGridWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkXMLPStructuredGridWriter::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredGridWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridWriter *op = static_cast<vtkXMLPStructuredGridWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkXMLPStructuredGridWriter::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPStructuredGridWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPStructuredGridWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPStructuredGridWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPStructuredGridWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLPStructuredGridWriter\nC++: vtkXMLPStructuredGridWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPStructuredGridWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPStructuredGridWriter\nC++: vtkXMLPStructuredGridWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkXMLPStructuredGridWriter_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetInput()\n\nGet/Set the writer's input.\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLPStructuredGridWriter_GetDefaultFileExtension, METH_VARARGS,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPStructuredGridWriter_StaticNew()
{
  return vtkXMLPStructuredGridWriter::New();
}

PyObject *PyVTKClass_vtkXMLPStructuredGridWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPStructuredGridWriter_StaticNew,
    PyvtkXMLPStructuredGridWriter_Methods,
    "vtkXMLPStructuredGridWriter", modulename,
    NULL, NULL,
    PyvtkXMLPStructuredGridWriter_Doc(),
    PyVTKClass_vtkXMLPStructuredDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPStructuredGridWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPStructuredGridWriter - Write PVTK XML StructuredGrid files.\n\n",
    "Superclass: vtkXMLPStructuredDataWriter\n\n",
    "vtkXMLPStructuredGridWriter writes the PVTK XML StructuredGrid file\nformat.  One structured grid input can be written into a parallel\nfile format with any number of pieces spread across files. The\nstandard extension for this writer's file format is \"pvts\". This\nwriter uses vtkXMLStructuredGridWriter to write the individual piece\nfiles.\n\nSee Also:\n\nvtkXMLStructuredGridWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPStructuredGridWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPStructuredGridWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPStructuredGridWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

