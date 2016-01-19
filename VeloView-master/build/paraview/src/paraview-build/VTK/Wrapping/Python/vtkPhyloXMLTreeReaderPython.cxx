// python wrapper for vtkPhyloXMLTreeReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPhyloXMLTreeReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPhyloXMLTreeReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPhyloXMLTreeReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLReaderNew
#endif

static const char **PyvtkPhyloXMLTreeReader_Doc();


static PyObject *
PyvtkPhyloXMLTreeReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeReader *op = static_cast<vtkPhyloXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPhyloXMLTreeReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPhyloXMLTreeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeReader *op = static_cast<vtkPhyloXMLTreeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPhyloXMLTreeReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPhyloXMLTreeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeReader *op = static_cast<vtkPhyloXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPhyloXMLTreeReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPhyloXMLTreeReader::NewInstance());

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
PyvtkPhyloXMLTreeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPhyloXMLTreeReader *tempr = vtkPhyloXMLTreeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPhyloXMLTreeReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeReader *op = static_cast<vtkPhyloXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkPhyloXMLTreeReader::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPhyloXMLTreeReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeReader *op = static_cast<vtkPhyloXMLTreeReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkPhyloXMLTreeReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPhyloXMLTreeReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPhyloXMLTreeReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkPhyloXMLTreeReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkPhyloXMLTreeReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPhyloXMLTreeReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPhyloXMLTreeReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPhyloXMLTreeReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPhyloXMLTreeReader\nC++: vtkPhyloXMLTreeReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPhyloXMLTreeReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPhyloXMLTreeReader\nC++: vtkPhyloXMLTreeReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkPhyloXMLTreeReader_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkTree\nC++: vtkTree *GetOutput()\nV.GetOutput(int) -> vtkTree\nC++: vtkTree *GetOutput(int idx)\n\nGet the output of this reader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPhyloXMLTreeReader_StaticNew()
{
  return vtkPhyloXMLTreeReader::New();
}

PyObject *PyVTKClass_vtkPhyloXMLTreeReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPhyloXMLTreeReader_StaticNew,
    PyvtkPhyloXMLTreeReader_Methods,
    "vtkPhyloXMLTreeReader", modulename,
    NULL, NULL,
    PyvtkPhyloXMLTreeReader_Doc(),
    PyVTKClass_vtkXMLReaderNew(modulename));
  return cls;
}

const char **PyvtkPhyloXMLTreeReader_Doc()
{
  static const char *docstring[] = {
    "vtkPhyloXMLTreeReader - read vtkTree from PhyloXML formatted file\n\n",
    "Superclass: vtkXMLReader\n\n",
    "vtkPhyloXMLTreeReader is a source object that reads PhyloXML tree\nformat files. The output of this reader is a single vtkTree data\nobject.\n\nCaveats:\n\nThis reader does not implement the entire PhyloXML specification. It\ncurrently only supports the following tags: phylogeny, name,\ndescription, confidence, property, clade, branch_length, color, red,\ngreen, and blue. This reader also only supports a s",
    "ingle phylogeny\nper file.\n\nSee Also:\n\nvtkTree vtkXMLReader vtkPhyloXMLTreeWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPhyloXMLTreeReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPhyloXMLTreeReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPhyloXMLTreeReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

