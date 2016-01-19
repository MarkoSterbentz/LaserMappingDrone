// python wrapper for vtkXMLHierarchicalBoxDataWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLHierarchicalBoxDataWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLHierarchicalBoxDataWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLHierarchicalBoxDataWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLUniformGridAMRWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLUniformGridAMRWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLUniformGridAMRWriterNew
#endif

static const char **PyvtkXMLHierarchicalBoxDataWriter_Doc();


static PyObject *
PyvtkXMLHierarchicalBoxDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataWriter *op = static_cast<vtkXMLHierarchicalBoxDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLHierarchicalBoxDataWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataWriter *op = static_cast<vtkXMLHierarchicalBoxDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLHierarchicalBoxDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataWriter *op = static_cast<vtkXMLHierarchicalBoxDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLHierarchicalBoxDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLHierarchicalBoxDataWriter::NewInstance());

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
PyvtkXMLHierarchicalBoxDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLHierarchicalBoxDataWriter *tempr = vtkXMLHierarchicalBoxDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataWriter *op = static_cast<vtkXMLHierarchicalBoxDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkXMLHierarchicalBoxDataWriter::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLHierarchicalBoxDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLHierarchicalBoxDataWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLHierarchicalBoxDataWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLHierarchicalBoxDataWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLHierarchicalBoxDataWriter\nC++: vtkXMLHierarchicalBoxDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLHierarchicalBoxDataWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLHierarchicalBoxDataWriter\nC++: vtkXMLHierarchicalBoxDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLHierarchicalBoxDataWriter_GetDefaultFileExtension, METH_VARARGS,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: virtual const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLHierarchicalBoxDataWriter_StaticNew()
{
  return vtkXMLHierarchicalBoxDataWriter::New();
}

PyObject *PyVTKClass_vtkXMLHierarchicalBoxDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLHierarchicalBoxDataWriter_StaticNew,
    PyvtkXMLHierarchicalBoxDataWriter_Methods,
    "vtkXMLHierarchicalBoxDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLHierarchicalBoxDataWriter_Doc(),
    PyVTKClass_vtkXMLUniformGridAMRWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLHierarchicalBoxDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLHierarchicalBoxDataWriter - writer for vtkHierarchicalBoxDataSet\n\n",
    "Superclass: vtkXMLUniformGridAMRWriter\n\n",
    "vtkXMLHierarchicalBoxDataWriter is an empty subclass of\nvtkXMLUniformGridAMRWriter for writing vtkUniformGridAMR datasets in\nVTK-XML format.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLHierarchicalBoxDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLHierarchicalBoxDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLHierarchicalBoxDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

