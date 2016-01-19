// python wrapper for vtkPostScriptWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPostScriptWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPostScriptWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPostScriptWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageWriterNew
extern "C" { PyObject *PyVTKClass_vtkImageWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageWriterNew
#endif

static const char **PyvtkPostScriptWriter_Doc();


static PyObject *
PyvtkPostScriptWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPostScriptWriter *op = static_cast<vtkPostScriptWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPostScriptWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPostScriptWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPostScriptWriter *op = static_cast<vtkPostScriptWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPostScriptWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPostScriptWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPostScriptWriter *op = static_cast<vtkPostScriptWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPostScriptWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPostScriptWriter::NewInstance());

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
PyvtkPostScriptWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPostScriptWriter *tempr = vtkPostScriptWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPostScriptWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkPostScriptWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPostScriptWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPostScriptWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPostScriptWriter\nC++: vtkPostScriptWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPostScriptWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPostScriptWriter\nC++: vtkPostScriptWriter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPostScriptWriter_StaticNew()
{
  return vtkPostScriptWriter::New();
}

PyObject *PyVTKClass_vtkPostScriptWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPostScriptWriter_StaticNew,
    PyvtkPostScriptWriter_Methods,
    "vtkPostScriptWriter", modulename,
    NULL, NULL,
    PyvtkPostScriptWriter_Doc(),
    PyVTKClass_vtkImageWriterNew(modulename));
  return cls;
}

const char **PyvtkPostScriptWriter_Doc()
{
  static const char *docstring[] = {
    "vtkPostScriptWriter - Writes an image as a PostScript file.\n\n",
    "Superclass: vtkImageWriter\n\n",
    "vtkPostScriptWriter writes an image as a PostScript file using some\nreasonable scalings and centered on the page which is assumed to be\nabout 8.5 by 11 inches. This is based loosely off of the code from\npnmtops.c. Right now there aren't any real options.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPostScriptWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPostScriptWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPostScriptWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

