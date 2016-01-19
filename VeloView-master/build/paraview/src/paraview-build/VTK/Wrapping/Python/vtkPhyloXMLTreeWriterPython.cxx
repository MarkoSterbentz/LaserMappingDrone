// python wrapper for vtkPhyloXMLTreeWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkPhyloXMLTreeWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPhyloXMLTreeWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPhyloXMLTreeWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLWriterNew
#endif

static const char **PyvtkPhyloXMLTreeWriter_Doc();


static PyObject *
PyvtkPhyloXMLTreeWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeWriter *op = static_cast<vtkPhyloXMLTreeWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPhyloXMLTreeWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPhyloXMLTreeWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeWriter *op = static_cast<vtkPhyloXMLTreeWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPhyloXMLTreeWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPhyloXMLTreeWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeWriter *op = static_cast<vtkPhyloXMLTreeWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPhyloXMLTreeWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPhyloXMLTreeWriter::NewInstance());

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
PyvtkPhyloXMLTreeWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPhyloXMLTreeWriter *tempr = vtkPhyloXMLTreeWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPhyloXMLTreeWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeWriter *op = static_cast<vtkPhyloXMLTreeWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkPhyloXMLTreeWriter::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPhyloXMLTreeWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeWriter *op = static_cast<vtkPhyloXMLTreeWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkPhyloXMLTreeWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPhyloXMLTreeWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPhyloXMLTreeWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkPhyloXMLTreeWriter_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkPhyloXMLTreeWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeWriter *op = static_cast<vtkPhyloXMLTreeWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkPhyloXMLTreeWriter::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPhyloXMLTreeWriter_GetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeWriter *op = static_cast<vtkPhyloXMLTreeWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetEdgeWeightArrayName() :
      op->vtkPhyloXMLTreeWriter::GetEdgeWeightArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPhyloXMLTreeWriter_SetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeWriter *op = static_cast<vtkPhyloXMLTreeWriter *>(vp);

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
      op->vtkPhyloXMLTreeWriter::SetEdgeWeightArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPhyloXMLTreeWriter_GetNodeNameArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeNameArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeWriter *op = static_cast<vtkPhyloXMLTreeWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetNodeNameArrayName() :
      op->vtkPhyloXMLTreeWriter::GetNodeNameArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPhyloXMLTreeWriter_SetNodeNameArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeNameArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeWriter *op = static_cast<vtkPhyloXMLTreeWriter *>(vp);

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
      op->vtkPhyloXMLTreeWriter::SetNodeNameArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPhyloXMLTreeWriter_IgnoreArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeWriter *op = static_cast<vtkPhyloXMLTreeWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->IgnoreArray(temp0);
      }
    else
      {
      op->vtkPhyloXMLTreeWriter::IgnoreArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPhyloXMLTreeWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkPhyloXMLTreeWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPhyloXMLTreeWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPhyloXMLTreeWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPhyloXMLTreeWriter\nC++: vtkPhyloXMLTreeWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPhyloXMLTreeWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPhyloXMLTreeWriter\nC++: vtkPhyloXMLTreeWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkPhyloXMLTreeWriter_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkTree\nC++: vtkTree *GetInput()\nV.GetInput(int) -> vtkTree\nC++: vtkTree *GetInput(int port)\n\nGet the input to this writer.\n"},
  {(char*)"GetDefaultFileExtension", PyvtkPhyloXMLTreeWriter_GetDefaultFileExtension, METH_VARARGS,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: virtual const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {(char*)"GetEdgeWeightArrayName", PyvtkPhyloXMLTreeWriter_GetEdgeWeightArrayName, METH_VARARGS,
   (char*)"V.GetEdgeWeightArrayName() -> string\nC++: vtkStdString GetEdgeWeightArrayName()\n\nGet/Set the name of the input's tree edge weight array. This\narray must be part of the input tree's EdgeData. The default name\nis \"weight\".  If this array cannot be found, then no edge weights\nwill be included in the output of this writer.\n"},
  {(char*)"SetEdgeWeightArrayName", PyvtkPhyloXMLTreeWriter_SetEdgeWeightArrayName, METH_VARARGS,
   (char*)"V.SetEdgeWeightArrayName(string)\nC++: void SetEdgeWeightArrayName(vtkStdString a)\n\nGet/Set the name of the input's tree edge weight array. This\narray must be part of the input tree's EdgeData. The default name\nis \"weight\".  If this array cannot be found, then no edge weights\nwill be included in the output of this writer.\n"},
  {(char*)"GetNodeNameArrayName", PyvtkPhyloXMLTreeWriter_GetNodeNameArrayName, METH_VARARGS,
   (char*)"V.GetNodeNameArrayName() -> string\nC++: vtkStdString GetNodeNameArrayName()\n\nGet/Set the name of the input's tree node name array. This array\nmust be part of the input tree's VertexData. The default name is \"node\nname\".  If this array cannot be found, then no node names will be\nincluded in the output of this writer.\n"},
  {(char*)"SetNodeNameArrayName", PyvtkPhyloXMLTreeWriter_SetNodeNameArrayName, METH_VARARGS,
   (char*)"V.SetNodeNameArrayName(string)\nC++: void SetNodeNameArrayName(vtkStdString a)\n\nGet/Set the name of the input's tree node name array. This array\nmust be part of the input tree's VertexData. The default name is \"node\nname\".  If this array cannot be found, then no node names will be\nincluded in the output of this writer.\n"},
  {(char*)"IgnoreArray", PyvtkPhyloXMLTreeWriter_IgnoreArray, METH_VARARGS,
   (char*)"V.IgnoreArray(string)\nC++: void IgnoreArray(const char *arrayName)\n\nDo not include name the VertexData array in the PhyloXML output\nof this writer.  Call this function once for each array that you\nwish to ignore.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPhyloXMLTreeWriter_StaticNew()
{
  return vtkPhyloXMLTreeWriter::New();
}

PyObject *PyVTKClass_vtkPhyloXMLTreeWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPhyloXMLTreeWriter_StaticNew,
    PyvtkPhyloXMLTreeWriter_Methods,
    "vtkPhyloXMLTreeWriter", modulename,
    NULL, NULL,
    PyvtkPhyloXMLTreeWriter_Doc(),
    PyVTKClass_vtkXMLWriterNew(modulename));
  return cls;
}

const char **PyvtkPhyloXMLTreeWriter_Doc()
{
  static const char *docstring[] = {
    "vtkPhyloXMLTreeWriter - write vtkTree data to PhyloXML format.\n\n",
    "Superclass: vtkXMLWriter\n\n",
    "vtkPhyloXMLTreeWriter is writes a vtkTree to a PhyloXML formatted\nfile or string.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPhyloXMLTreeWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPhyloXMLTreeWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPhyloXMLTreeWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

