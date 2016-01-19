// python wrapper for vtkMultiNewickTreeReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMultiNewickTreeReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMultiNewickTreeReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMultiNewickTreeReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataReaderNew
#endif

static const char **PyvtkMultiNewickTreeReader_Doc();


static PyObject *
PyvtkMultiNewickTreeReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiNewickTreeReader *op = static_cast<vtkMultiNewickTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMultiNewickTreeReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiNewickTreeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiNewickTreeReader *op = static_cast<vtkMultiNewickTreeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiNewickTreeReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiNewickTreeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiNewickTreeReader *op = static_cast<vtkMultiNewickTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiNewickTreeReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiNewickTreeReader::NewInstance());

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
PyvtkMultiNewickTreeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMultiNewickTreeReader *tempr = vtkMultiNewickTreeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiNewickTreeReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiNewickTreeReader *op = static_cast<vtkMultiNewickTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiPieceDataSet *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkMultiNewickTreeReader::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiNewickTreeReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiNewickTreeReader *op = static_cast<vtkMultiNewickTreeReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkMultiPieceDataSet *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkMultiNewickTreeReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiNewickTreeReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMultiNewickTreeReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkMultiNewickTreeReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkMultiNewickTreeReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiNewickTreeReader *op = static_cast<vtkMultiNewickTreeReader *>(vp);

  vtkMultiPieceDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiPieceDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkMultiNewickTreeReader::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiNewickTreeReader_Methods[] = {
  {(char*)"GetClassName", PyvtkMultiNewickTreeReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMultiNewickTreeReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMultiNewickTreeReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMultiNewickTreeReader\nC++: vtkMultiNewickTreeReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMultiNewickTreeReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMultiNewickTreeReader\nC++: vtkMultiNewickTreeReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkMultiNewickTreeReader_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkMultiPieceDataSet\nC++: vtkMultiPieceDataSet *GetOutput()\nV.GetOutput(int) -> vtkMultiPieceDataSet\nC++: vtkMultiPieceDataSet *GetOutput(int idx)\n\nGet the output of this reader.\n"},
  {(char*)"SetOutput", PyvtkMultiNewickTreeReader_SetOutput, METH_VARARGS,
   (char*)"V.SetOutput(vtkMultiPieceDataSet)\nC++: void SetOutput(vtkMultiPieceDataSet *output)\n\nGet the output of this reader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMultiNewickTreeReader_StaticNew()
{
  return vtkMultiNewickTreeReader::New();
}

PyObject *PyVTKClass_vtkMultiNewickTreeReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMultiNewickTreeReader_StaticNew,
    PyvtkMultiNewickTreeReader_Methods,
    "vtkMultiNewickTreeReader", modulename,
    NULL, NULL,
    PyvtkMultiNewickTreeReader_Doc(),
    PyVTKClass_vtkDataReaderNew(modulename));
  return cls;
}

const char **PyvtkMultiNewickTreeReader_Doc()
{
  static const char *docstring[] = {
    "vtkMultiNewickTreeReader - read multiple vtkTrees from Newick\nformatted file\n\n",
    "Superclass: vtkDataReader\n\n",
    "vtkMultiNewickTreeReader is a source object that reads Newick tree\nformat files. The output of this reader is a single\nvtkMultiPieceDataSet that contains multiple vtkTree objects. The\nsuperclass of this class, vtkDataReader, provides many methods for\ncontrolling the reading of the data file, see vtkDataReader for more\ninformation.\n\nSee Also:\n\nvtkTree vtkDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMultiNewickTreeReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMultiNewickTreeReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMultiNewickTreeReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

