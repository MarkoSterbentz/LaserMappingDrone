// python wrapper for vtkPImageWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPImageWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPImageWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPImageWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageWriterNew
extern "C" { PyObject *PyVTKClass_vtkImageWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageWriterNew
#endif

static const char **PyvtkPImageWriter_Doc();


static PyObject *
PyvtkPImageWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPImageWriter *op = static_cast<vtkPImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPImageWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPImageWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPImageWriter *op = static_cast<vtkPImageWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPImageWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPImageWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPImageWriter *op = static_cast<vtkPImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPImageWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPImageWriter::NewInstance());

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
PyvtkPImageWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPImageWriter *tempr = vtkPImageWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPImageWriter_SetMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPImageWriter *op = static_cast<vtkPImageWriter *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMemoryLimit(temp0);
      }
    else
      {
      op->vtkPImageWriter::SetMemoryLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPImageWriter_GetMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPImageWriter *op = static_cast<vtkPImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMemoryLimit() :
      op->vtkPImageWriter::GetMemoryLimit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPImageWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkPImageWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPImageWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPImageWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPImageWriter\nC++: vtkPImageWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPImageWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPImageWriter\nC++: vtkPImageWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMemoryLimit", PyvtkPImageWriter_SetMemoryLimit, METH_VARARGS,
   (char*)"V.SetMemoryLimit(int)\nC++: void SetMemoryLimit(unsigned long a)\n\nSet / Get the memory limit in kilobytes. The writer will stream\nto attempt to keep the pipeline size within this limit\n"},
  {(char*)"GetMemoryLimit", PyvtkPImageWriter_GetMemoryLimit, METH_VARARGS,
   (char*)"V.GetMemoryLimit() -> int\nC++: unsigned long GetMemoryLimit()\n\nSet / Get the memory limit in kilobytes. The writer will stream\nto attempt to keep the pipeline size within this limit\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPImageWriter_StaticNew()
{
  return vtkPImageWriter::New();
}

PyObject *PyVTKClass_vtkPImageWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPImageWriter_StaticNew,
    PyvtkPImageWriter_Methods,
    "vtkPImageWriter", modulename,
    NULL, NULL,
    PyvtkPImageWriter_Doc(),
    PyVTKClass_vtkImageWriterNew(modulename));
  return cls;
}

const char **PyvtkPImageWriter_Doc()
{
  static const char *docstring[] = {
    "vtkPImageWriter - Writes images to files.\n\n",
    "Superclass: vtkImageWriter\n\n",
    "vtkPImageWriter writes images to files with any data type. The data\ntype of the file is the same scalar type as the input.  The\ndimensionality determines whether the data will be written in one or\nmultiple files. This class is used as the superclass of most image\nwriting classes such as vtkBMPWriter etc. It supports streaming.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPImageWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPImageWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPImageWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

