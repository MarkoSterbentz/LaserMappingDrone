// python wrapper for vtkGenericDataObjectWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericDataObjectWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenericDataObjectWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenericDataObjectWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataWriterNew
#endif

static const char **PyvtkGenericDataObjectWriter_Doc();


static PyObject *
PyvtkGenericDataObjectWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectWriter *op = static_cast<vtkGenericDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenericDataObjectWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataObjectWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectWriter *op = static_cast<vtkGenericDataObjectWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericDataObjectWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataObjectWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectWriter *op = static_cast<vtkGenericDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericDataObjectWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericDataObjectWriter::NewInstance());

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
PyvtkGenericDataObjectWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenericDataObjectWriter *tempr = vtkGenericDataObjectWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericDataObjectWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericDataObjectWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericDataObjectWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericDataObjectWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenericDataObjectWriter\nC++: vtkGenericDataObjectWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericDataObjectWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericDataObjectWriter\nC++: vtkGenericDataObjectWriter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericDataObjectWriter_StaticNew()
{
  return vtkGenericDataObjectWriter::New();
}

PyObject *PyVTKClass_vtkGenericDataObjectWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericDataObjectWriter_StaticNew,
    PyvtkGenericDataObjectWriter_Methods,
    "vtkGenericDataObjectWriter", modulename,
    NULL, NULL,
    PyvtkGenericDataObjectWriter_Doc(),
    PyVTKClass_vtkDataWriterNew(modulename));
  return cls;
}

const char **PyvtkGenericDataObjectWriter_Doc()
{
  static const char *docstring[] = {
    "vtkGenericDataObjectWriter - writes any type of vtk data object to\nfile\n\n",
    "Superclass: vtkDataWriter\n\n",
    "vtkGenericDataObjectWriter is a concrete class that writes data\nobjects to disk. The input to this object is any subclass of\nvtkDataObject.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericDataObjectWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericDataObjectWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericDataObjectWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

