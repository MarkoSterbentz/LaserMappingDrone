// python wrapper for vtkNewickTreeWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkNewickTreeWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNewickTreeWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNewickTreeWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataWriterNew
#endif

static const char **PyvtkNewickTreeWriter_Doc();


static PyObject *
PyvtkNewickTreeWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNewickTreeWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNewickTreeWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNewickTreeWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNewickTreeWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNewickTreeWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNewickTreeWriter::NewInstance());

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
PyvtkNewickTreeWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNewickTreeWriter *tempr = vtkNewickTreeWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNewickTreeWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkNewickTreeWriter::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkNewickTreeWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkNewickTreeWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkNewickTreeWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkNewickTreeWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkNewickTreeWriter_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkNewickTreeWriter_GetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetEdgeWeightArrayName() :
      op->vtkNewickTreeWriter::GetEdgeWeightArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNewickTreeWriter_SetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeWeightArrayName(temp0);
      }
    else
      {
      op->vtkNewickTreeWriter::SetEdgeWeightArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNewickTreeWriter_GetNodeNameArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeNameArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetNodeNameArrayName() :
      op->vtkNewickTreeWriter::GetNodeNameArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNewickTreeWriter_SetNodeNameArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeNameArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNodeNameArrayName(temp0);
      }
    else
      {
      op->vtkNewickTreeWriter::SetNodeNameArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkNewickTreeWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkNewickTreeWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNewickTreeWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNewickTreeWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNewickTreeWriter\nC++: vtkNewickTreeWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNewickTreeWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNewickTreeWriter\nC++: vtkNewickTreeWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkNewickTreeWriter_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkTree\nC++: vtkTree *GetInput()\nV.GetInput(int) -> vtkTree\nC++: vtkTree *GetInput(int port)\n\nGet the input to this writer.\n"},
  {(char*)"GetEdgeWeightArrayName", PyvtkNewickTreeWriter_GetEdgeWeightArrayName, METH_VARARGS,
   (char*)"V.GetEdgeWeightArrayName() -> string\nC++: vtkStdString GetEdgeWeightArrayName()\n\nGet/Set the name of the input's tree edge weight array. This\narray must be part of the input tree's EdgeData. The default name\nis \"weight\".  If this array cannot be found, then no edge weights\nwill be included in the output of this writer.\n"},
  {(char*)"SetEdgeWeightArrayName", PyvtkNewickTreeWriter_SetEdgeWeightArrayName, METH_VARARGS,
   (char*)"V.SetEdgeWeightArrayName(string)\nC++: void SetEdgeWeightArrayName(vtkStdString a)\n\nGet/Set the name of the input's tree edge weight array. This\narray must be part of the input tree's EdgeData. The default name\nis \"weight\".  If this array cannot be found, then no edge weights\nwill be included in the output of this writer.\n"},
  {(char*)"GetNodeNameArrayName", PyvtkNewickTreeWriter_GetNodeNameArrayName, METH_VARARGS,
   (char*)"V.GetNodeNameArrayName() -> string\nC++: vtkStdString GetNodeNameArrayName()\n\nGet/Set the name of the input's tree node name array. This array\nmust be part of the input tree's VertexData. The default name is \"node\nname\".  If this array cannot be found, then no node names will be\nincluded in the output of this writer.\n"},
  {(char*)"SetNodeNameArrayName", PyvtkNewickTreeWriter_SetNodeNameArrayName, METH_VARARGS,
   (char*)"V.SetNodeNameArrayName(string)\nC++: void SetNodeNameArrayName(vtkStdString a)\n\nGet/Set the name of the input's tree node name array. This array\nmust be part of the input tree's VertexData. The default name is \"node\nname\".  If this array cannot be found, then no node names will be\nincluded in the output of this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNewickTreeWriter_StaticNew()
{
  return vtkNewickTreeWriter::New();
}

PyObject *PyVTKClass_vtkNewickTreeWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNewickTreeWriter_StaticNew,
    PyvtkNewickTreeWriter_Methods,
    "vtkNewickTreeWriter", modulename,
    NULL, NULL,
    PyvtkNewickTreeWriter_Doc(),
    PyVTKClass_vtkDataWriterNew(modulename));
  return cls;
}

const char **PyvtkNewickTreeWriter_Doc()
{
  static const char *docstring[] = {
    "vtkNewickTreeWriter - write vtkTree data to Newick format.\n\n",
    "Superclass: vtkDataWriter\n\n",
    "vtkNewickTreeWriter is writes a vtkTree to a Newick formatted file or\nstring.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNewickTreeWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNewickTreeWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNewickTreeWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

