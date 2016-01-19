// python wrapper for vtkNewickTreeReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTree.h"
#include "vtkNewickTreeReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNewickTreeReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNewickTreeReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataReaderNew
#endif

static const char **PyvtkNewickTreeReader_Doc();


static PyObject *
PyvtkNewickTreeReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeReader *op = static_cast<vtkNewickTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNewickTreeReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNewickTreeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeReader *op = static_cast<vtkNewickTreeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNewickTreeReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNewickTreeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeReader *op = static_cast<vtkNewickTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNewickTreeReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNewickTreeReader::NewInstance());

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
PyvtkNewickTreeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNewickTreeReader *tempr = vtkNewickTreeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNewickTreeReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeReader *op = static_cast<vtkNewickTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkNewickTreeReader::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkNewickTreeReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeReader *op = static_cast<vtkNewickTreeReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkNewickTreeReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkNewickTreeReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkNewickTreeReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkNewickTreeReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkNewickTreeReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeReader *op = static_cast<vtkNewickTreeReader *>(vp);

  vtkTree *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTree"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkNewickTreeReader::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNewickTreeReader_ReadNewickTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadNewickTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeReader *op = static_cast<vtkNewickTreeReader *>(vp);

  char *temp0 = NULL;
  vtkTree *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkTree"))
    {
    int tempr = (ap.IsBound() ?
      op->ReadNewickTree(temp0, *temp1) :
      op->vtkNewickTreeReader::ReadNewickTree(temp0, *temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkNewickTreeReader_Methods[] = {
  {(char*)"GetClassName", PyvtkNewickTreeReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNewickTreeReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNewickTreeReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNewickTreeReader\nC++: vtkNewickTreeReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNewickTreeReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNewickTreeReader\nC++: vtkNewickTreeReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkNewickTreeReader_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkTree\nC++: vtkTree *GetOutput()\nV.GetOutput(int) -> vtkTree\nC++: vtkTree *GetOutput(int idx)\n\nGet the output of this reader.\n"},
  {(char*)"SetOutput", PyvtkNewickTreeReader_SetOutput, METH_VARARGS,
   (char*)"V.SetOutput(vtkTree)\nC++: void SetOutput(vtkTree *output)\n\nGet the output of this reader.\n"},
  {(char*)"ReadNewickTree", PyvtkNewickTreeReader_ReadNewickTree, METH_VARARGS,
   (char*)"V.ReadNewickTree(string, vtkTree) -> int\nC++: int ReadNewickTree(const char *buffer, vtkTree &tree)\n\nGet the output of this reader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNewickTreeReader_StaticNew()
{
  return vtkNewickTreeReader::New();
}

PyObject *PyVTKClass_vtkNewickTreeReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNewickTreeReader_StaticNew,
    PyvtkNewickTreeReader_Methods,
    "vtkNewickTreeReader", modulename,
    NULL, NULL,
    PyvtkNewickTreeReader_Doc(),
    PyVTKClass_vtkDataReaderNew(modulename));
  return cls;
}

const char **PyvtkNewickTreeReader_Doc()
{
  static const char *docstring[] = {
    "vtkNewickTreeReader - read vtkTree from Newick formatted file\n\n",
    "Superclass: vtkDataReader\n\n",
    "vtkNewickTreeReader is a source object that reads Newick tree format\nfiles. The output of this reader is a single vtkTree data object. The\nsuperclass of this class, vtkDataReader, provides many methods for\ncontrolling the reading of the data file, see vtkDataReader for more\ninformation.\n\nThanks:\n\nThis class is adapted from code originally written by Yu-Wei Wu.\n\nSee Also:\n\nvtkTree vtkDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNewickTreeReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNewickTreeReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNewickTreeReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

