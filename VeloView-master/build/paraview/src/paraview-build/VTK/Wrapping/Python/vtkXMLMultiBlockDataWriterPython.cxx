// python wrapper for vtkXMLMultiBlockDataWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLMultiBlockDataWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLMultiBlockDataWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLMultiBlockDataWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLCompositeDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLCompositeDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLCompositeDataWriterNew
#endif

static const char **PyvtkXMLMultiBlockDataWriter_Doc();


static PyObject *
PyvtkXMLMultiBlockDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMultiBlockDataWriter *op = static_cast<vtkXMLMultiBlockDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLMultiBlockDataWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMultiBlockDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMultiBlockDataWriter *op = static_cast<vtkXMLMultiBlockDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLMultiBlockDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMultiBlockDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMultiBlockDataWriter *op = static_cast<vtkXMLMultiBlockDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLMultiBlockDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLMultiBlockDataWriter::NewInstance());

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
PyvtkXMLMultiBlockDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLMultiBlockDataWriter *tempr = vtkXMLMultiBlockDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMultiBlockDataWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMultiBlockDataWriter *op = static_cast<vtkXMLMultiBlockDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkXMLMultiBlockDataWriter::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLMultiBlockDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLMultiBlockDataWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLMultiBlockDataWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLMultiBlockDataWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLMultiBlockDataWriter\nC++: vtkXMLMultiBlockDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLMultiBlockDataWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLMultiBlockDataWriter\nC++: vtkXMLMultiBlockDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLMultiBlockDataWriter_GetDefaultFileExtension, METH_VARARGS,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: virtual const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLMultiBlockDataWriter_StaticNew()
{
  return vtkXMLMultiBlockDataWriter::New();
}

PyObject *PyVTKClass_vtkXMLMultiBlockDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLMultiBlockDataWriter_StaticNew,
    PyvtkXMLMultiBlockDataWriter_Methods,
    "vtkXMLMultiBlockDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLMultiBlockDataWriter_Doc(),
    PyVTKClass_vtkXMLCompositeDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLMultiBlockDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLMultiBlockDataWriter - writer for vtkMultiBlockDataSet.\n\n",
    "Superclass: vtkXMLCompositeDataWriter\n\n",
    "vtkXMLMultiBlockDataWriter is a vtkXMLCompositeDataWriter subclass to\nhandle vtkMultiBlockDataSet.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLMultiBlockDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLMultiBlockDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLMultiBlockDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

