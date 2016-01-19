// python wrapper for vtkXMLUniformGridAMRWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLUniformGridAMRWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLUniformGridAMRWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLUniformGridAMRWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLCompositeDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLCompositeDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLCompositeDataWriterNew
#endif

static const char **PyvtkXMLUniformGridAMRWriter_Doc();


static PyObject *
PyvtkXMLUniformGridAMRWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUniformGridAMRWriter *op = static_cast<vtkXMLUniformGridAMRWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLUniformGridAMRWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUniformGridAMRWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUniformGridAMRWriter *op = static_cast<vtkXMLUniformGridAMRWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLUniformGridAMRWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUniformGridAMRWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUniformGridAMRWriter *op = static_cast<vtkXMLUniformGridAMRWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLUniformGridAMRWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLUniformGridAMRWriter::NewInstance());

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
PyvtkXMLUniformGridAMRWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLUniformGridAMRWriter *tempr = vtkXMLUniformGridAMRWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUniformGridAMRWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUniformGridAMRWriter *op = static_cast<vtkXMLUniformGridAMRWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkXMLUniformGridAMRWriter::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLUniformGridAMRWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLUniformGridAMRWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLUniformGridAMRWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLUniformGridAMRWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLUniformGridAMRWriter\nC++: vtkXMLUniformGridAMRWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLUniformGridAMRWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLUniformGridAMRWriter\nC++: vtkXMLUniformGridAMRWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLUniformGridAMRWriter_GetDefaultFileExtension, METH_VARARGS,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: virtual const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLUniformGridAMRWriter_StaticNew()
{
  return vtkXMLUniformGridAMRWriter::New();
}

PyObject *PyVTKClass_vtkXMLUniformGridAMRWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLUniformGridAMRWriter_StaticNew,
    PyvtkXMLUniformGridAMRWriter_Methods,
    "vtkXMLUniformGridAMRWriter", modulename,
    NULL, NULL,
    PyvtkXMLUniformGridAMRWriter_Doc(),
    PyVTKClass_vtkXMLCompositeDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLUniformGridAMRWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLUniformGridAMRWriter - writer for vtkUniformGridAMR.\n\n",
    "Superclass: vtkXMLCompositeDataWriter\n\n",
    "vtkXMLUniformGridAMRWriter is a vtkXMLCompositeDataWriter subclass to\nhandle vtkUniformGridAMR datasets (including vtkNonOverlappingAMR and\nvtkOverlappingAMR).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLUniformGridAMRWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLUniformGridAMRWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLUniformGridAMRWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

