// python wrapper for vtkChacoGraphReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkChacoGraphReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkChacoGraphReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkChacoGraphReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUndirectedGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUndirectedGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUndirectedGraphAlgorithmNew
#endif

static const char **PyvtkChacoGraphReader_Doc();


static PyObject *
PyvtkChacoGraphReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoGraphReader *op = static_cast<vtkChacoGraphReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkChacoGraphReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoGraphReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoGraphReader *op = static_cast<vtkChacoGraphReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChacoGraphReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoGraphReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoGraphReader *op = static_cast<vtkChacoGraphReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChacoGraphReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChacoGraphReader::NewInstance());

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
PyvtkChacoGraphReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkChacoGraphReader *tempr = vtkChacoGraphReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoGraphReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoGraphReader *op = static_cast<vtkChacoGraphReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkChacoGraphReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoGraphReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoGraphReader *op = static_cast<vtkChacoGraphReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkChacoGraphReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkChacoGraphReader_Methods[] = {
  {(char*)"GetClassName", PyvtkChacoGraphReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChacoGraphReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChacoGraphReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkChacoGraphReader\nC++: vtkChacoGraphReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChacoGraphReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChacoGraphReader\nC++: vtkChacoGraphReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkChacoGraphReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nThe Chaco file name.\n"},
  {(char*)"SetFileName", PyvtkChacoGraphReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nThe Chaco file name.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkChacoGraphReader_StaticNew()
{
  return vtkChacoGraphReader::New();
}

PyObject *PyVTKClass_vtkChacoGraphReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkChacoGraphReader_StaticNew,
    PyvtkChacoGraphReader_Methods,
    "vtkChacoGraphReader", modulename,
    NULL, NULL,
    PyvtkChacoGraphReader_Doc(),
    PyVTKClass_vtkUndirectedGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkChacoGraphReader_Doc()
{
  static const char *docstring[] = {
    "vtkChacoGraphReader - Reads chaco graph files.\n\n",
    "Superclass: vtkUndirectedGraphAlgorithm\n\n",
    "vtkChacoGraphReader reads in files in the Chaco format into a\nvtkGraph. An example is the following  10 13 2 6 10 1 3 2 4 8 3 5 4 6\n10 1 5 7 6 8 3 7 9 8 10 1 5 9  The first line specifies the number of\nvertices and edges in the graph. Each additional line contains the\nvertices adjacent to a particular vertex.  In this example, vertex 1\nis adjacent to 2, 6 and 10, vertex 2 is adjacent to 1 and 3, e",
    "tc. \nSince Chaco ids start at 1 and VTK ids start at 0, the vertex ids in\nthe vtkGraph will be 1 less than the Chaco ids.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChacoGraphReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChacoGraphReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChacoGraphReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

