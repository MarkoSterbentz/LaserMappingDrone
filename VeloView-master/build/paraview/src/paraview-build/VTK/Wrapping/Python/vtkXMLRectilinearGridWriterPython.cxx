// python wrapper for vtkXMLRectilinearGridWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLRectilinearGridWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLRectilinearGridWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLRectilinearGridWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLStructuredDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLStructuredDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLStructuredDataWriterNew
#endif

static const char **PyvtkXMLRectilinearGridWriter_Doc();


static PyObject *
PyvtkXMLRectilinearGridWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridWriter *op = static_cast<vtkXMLRectilinearGridWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLRectilinearGridWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLRectilinearGridWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridWriter *op = static_cast<vtkXMLRectilinearGridWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLRectilinearGridWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLRectilinearGridWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridWriter *op = static_cast<vtkXMLRectilinearGridWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLRectilinearGridWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLRectilinearGridWriter::NewInstance());

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
PyvtkXMLRectilinearGridWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLRectilinearGridWriter *tempr = vtkXMLRectilinearGridWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLRectilinearGridWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridWriter *op = static_cast<vtkXMLRectilinearGridWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRectilinearGrid *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkXMLRectilinearGridWriter::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLRectilinearGridWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridWriter *op = static_cast<vtkXMLRectilinearGridWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkXMLRectilinearGridWriter::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLRectilinearGridWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLRectilinearGridWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLRectilinearGridWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLRectilinearGridWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLRectilinearGridWriter\nC++: vtkXMLRectilinearGridWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLRectilinearGridWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLRectilinearGridWriter\nC++: vtkXMLRectilinearGridWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkXMLRectilinearGridWriter_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetInput()\n\nGet/Set the writer's input.\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLRectilinearGridWriter_GetDefaultFileExtension, METH_VARARGS,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLRectilinearGridWriter_StaticNew()
{
  return vtkXMLRectilinearGridWriter::New();
}

PyObject *PyVTKClass_vtkXMLRectilinearGridWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLRectilinearGridWriter_StaticNew,
    PyvtkXMLRectilinearGridWriter_Methods,
    "vtkXMLRectilinearGridWriter", modulename,
    NULL, NULL,
    PyvtkXMLRectilinearGridWriter_Doc(),
    PyVTKClass_vtkXMLStructuredDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLRectilinearGridWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLRectilinearGridWriter - Write VTK XML RectilinearGrid files.\n\n",
    "Superclass: vtkXMLStructuredDataWriter\n\n",
    "vtkXMLRectilinearGridWriter writes the VTK XML RectilinearGrid file\nformat.  One rectilinear grid input can be written into one file in\nany number of streamed pieces.  The standard extension for this\nwriter's file format is \"vtr\".  This writer is also used to write a\nsingle piece of the parallel file format.\n\nSee Also:\n\nvtkXMLPRectilinearGridWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLRectilinearGridWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLRectilinearGridWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLRectilinearGridWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

