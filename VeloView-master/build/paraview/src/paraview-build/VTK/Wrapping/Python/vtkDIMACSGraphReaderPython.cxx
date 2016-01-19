// python wrapper for vtkDIMACSGraphReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDIMACSGraphReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDIMACSGraphReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDIMACSGraphReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkDIMACSGraphReader_Doc();


static PyObject *
PyvtkDIMACSGraphReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDIMACSGraphReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDIMACSGraphReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDIMACSGraphReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDIMACSGraphReader::NewInstance());

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
PyvtkDIMACSGraphReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDIMACSGraphReader *tempr = vtkDIMACSGraphReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDIMACSGraphReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

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
      op->vtkDIMACSGraphReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_GetVertexAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetVertexAttributeArrayName() :
      op->vtkDIMACSGraphReader::GetVertexAttributeArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_SetVertexAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexAttributeArrayName(temp0);
      }
    else
      {
      op->vtkDIMACSGraphReader::SetVertexAttributeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_GetEdgeAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetEdgeAttributeArrayName() :
      op->vtkDIMACSGraphReader::GetEdgeAttributeArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_SetEdgeAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeAttributeArrayName(temp0);
      }
    else
      {
      op->vtkDIMACSGraphReader::SetEdgeAttributeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDIMACSGraphReader_Methods[] = {
  {(char*)"GetClassName", PyvtkDIMACSGraphReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDIMACSGraphReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDIMACSGraphReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDIMACSGraphReader\nC++: vtkDIMACSGraphReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDIMACSGraphReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDIMACSGraphReader\nC++: vtkDIMACSGraphReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkDIMACSGraphReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nThe DIMACS file name.\n"},
  {(char*)"SetFileName", PyvtkDIMACSGraphReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nThe DIMACS file name.\n"},
  {(char*)"GetVertexAttributeArrayName", PyvtkDIMACSGraphReader_GetVertexAttributeArrayName, METH_VARARGS,
   (char*)"V.GetVertexAttributeArrayName() -> string\nC++: char *GetVertexAttributeArrayName()\n\nVertex attribute array name\n"},
  {(char*)"SetVertexAttributeArrayName", PyvtkDIMACSGraphReader_SetVertexAttributeArrayName, METH_VARARGS,
   (char*)"V.SetVertexAttributeArrayName(string)\nC++: void SetVertexAttributeArrayName(char *)\n\nVertex attribute array name\n"},
  {(char*)"GetEdgeAttributeArrayName", PyvtkDIMACSGraphReader_GetEdgeAttributeArrayName, METH_VARARGS,
   (char*)"V.GetEdgeAttributeArrayName() -> string\nC++: char *GetEdgeAttributeArrayName()\n\nEdge attribute array name\n"},
  {(char*)"SetEdgeAttributeArrayName", PyvtkDIMACSGraphReader_SetEdgeAttributeArrayName, METH_VARARGS,
   (char*)"V.SetEdgeAttributeArrayName(string)\nC++: void SetEdgeAttributeArrayName(char *)\n\nEdge attribute array name\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDIMACSGraphReader_StaticNew()
{
  return vtkDIMACSGraphReader::New();
}

PyObject *PyVTKClass_vtkDIMACSGraphReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDIMACSGraphReader_StaticNew,
    PyvtkDIMACSGraphReader_Methods,
    "vtkDIMACSGraphReader", modulename,
    NULL, NULL,
    PyvtkDIMACSGraphReader_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDIMACSGraphReader_Doc()
{
  static const char *docstring[] = {
    "vtkDIMACSGraphReader - reads vtkGraph data from a DIMACS\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "vtkDIMACSGraphReader is a source object that reads vtkGraph data\nfiles from a DIMACS format.\n\nThe reader has special handlers for max-flow and graph coloring\nproblems, which are specified in the problem line as 'max' and 'edge'\nrespectively. Other graphs are treated as generic DIMACS files.\n\nDIMACS formatted files consist of lines in which the first character\nin in column 0 specifies the type of t",
    "he line.\n\nGeneric DIMACS files have the following line types:\n- problem statement line : p graph num_verts num_edges\n- node line (optional)   : n node_id node_weight\n- edge line              : a src_id trg_id edge_weight\n- alternate edge format  : e src_id trg_id edge_weight\n- comment lines          : c I am a comment line\n** note, there should be one and only one problem statement line per\n   fil",
    "e.\n\nDIMACS graphs are undirected and nodes are numbered 1..n\n\nSee webpage for additional formatting details.\n-  http://dimacs.rutgers.edu/Challenges/\n-  http://www.dis.uniroma1.it/~challenge9/format.shtml\n\nSee Also:\n\nvtkDIMACSGraphWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDIMACSGraphReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDIMACSGraphReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDIMACSGraphReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

