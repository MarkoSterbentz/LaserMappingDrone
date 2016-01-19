// python wrapper for vtkDIMACSGraphWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDIMACSGraphWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDIMACSGraphWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDIMACSGraphWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataWriterNew
#endif

static const char **PyvtkDIMACSGraphWriter_Doc();


static PyObject *
PyvtkDIMACSGraphWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphWriter *op = static_cast<vtkDIMACSGraphWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDIMACSGraphWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphWriter *op = static_cast<vtkDIMACSGraphWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDIMACSGraphWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphWriter *op = static_cast<vtkDIMACSGraphWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDIMACSGraphWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDIMACSGraphWriter::NewInstance());

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
PyvtkDIMACSGraphWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDIMACSGraphWriter *tempr = vtkDIMACSGraphWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphWriter *op = static_cast<vtkDIMACSGraphWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkDIMACSGraphWriter::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDIMACSGraphWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphWriter *op = static_cast<vtkDIMACSGraphWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkDIMACSGraphWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDIMACSGraphWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDIMACSGraphWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkDIMACSGraphWriter_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}


static PyMethodDef PyvtkDIMACSGraphWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkDIMACSGraphWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDIMACSGraphWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDIMACSGraphWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDIMACSGraphWriter\nC++: vtkDIMACSGraphWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDIMACSGraphWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDIMACSGraphWriter\nC++: vtkDIMACSGraphWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkDIMACSGraphWriter_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkGraph\nC++: vtkGraph *GetInput()\nV.GetInput(int) -> vtkGraph\nC++: vtkGraph *GetInput(int port)\n\nGet the input to this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDIMACSGraphWriter_StaticNew()
{
  return vtkDIMACSGraphWriter::New();
}

PyObject *PyVTKClass_vtkDIMACSGraphWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDIMACSGraphWriter_StaticNew,
    PyvtkDIMACSGraphWriter_Methods,
    "vtkDIMACSGraphWriter", modulename,
    NULL, NULL,
    PyvtkDIMACSGraphWriter_Doc(),
    PyVTKClass_vtkDataWriterNew(modulename));
  return cls;
}

const char **PyvtkDIMACSGraphWriter_Doc()
{
  static const char *docstring[] = {
    "vtkDIMACSGraphWriter - write vtkGraph data to a DIMACS\n\n",
    "Superclass: vtkDataWriter\n\n",
    "vtkDIMACSGraphWriter is a sink object that writes vtkGraph data files\ninto a generic DIMACS (.gr) format.\n\nOutput files contain a problem statement line:\n\np graph <num_verts> <num_edges>\n\nFollowed by |E| edge descriptor lines that are formatted as:\n\ne <target> \n\nVertices are numbered from 1..n in DIMACS formatted files.\n\nSee webpage for format details.\nhttp://prolland.free.fr/works/research/dsat/d",
    "imacs.html\n\nSee Also:\n\nvtkDIMACSGraphReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDIMACSGraphWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDIMACSGraphWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDIMACSGraphWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

