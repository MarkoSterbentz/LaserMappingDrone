// python wrapper for vtkXMLPStructuredGridReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLPStructuredGridReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLPStructuredGridReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLPStructuredGridReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLPStructuredDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLPStructuredDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPStructuredDataReaderNew
#endif

static const char **PyvtkXMLPStructuredGridReader_Doc();


static PyObject *
PyvtkXMLPStructuredGridReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridReader *op = static_cast<vtkXMLPStructuredGridReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLPStructuredGridReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredGridReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridReader *op = static_cast<vtkXMLPStructuredGridReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPStructuredGridReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredGridReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridReader *op = static_cast<vtkXMLPStructuredGridReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLPStructuredGridReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPStructuredGridReader::NewInstance());

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
PyvtkXMLPStructuredGridReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLPStructuredGridReader *tempr = vtkXMLPStructuredGridReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredGridReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridReader *op = static_cast<vtkXMLPStructuredGridReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkXMLPStructuredGridReader::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLPStructuredGridReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridReader *op = static_cast<vtkXMLPStructuredGridReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkXMLPStructuredGridReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLPStructuredGridReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLPStructuredGridReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLPStructuredGridReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkXMLPStructuredGridReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPStructuredGridReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPStructuredGridReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPStructuredGridReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLPStructuredGridReader\nC++: vtkXMLPStructuredGridReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPStructuredGridReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPStructuredGridReader\nC++: vtkXMLPStructuredGridReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkXMLPStructuredGridReader_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetOutput()\nV.GetOutput(int) -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPStructuredGridReader_StaticNew()
{
  return vtkXMLPStructuredGridReader::New();
}

PyObject *PyVTKClass_vtkXMLPStructuredGridReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPStructuredGridReader_StaticNew,
    PyvtkXMLPStructuredGridReader_Methods,
    "vtkXMLPStructuredGridReader", modulename,
    NULL, NULL,
    PyvtkXMLPStructuredGridReader_Doc(),
    PyVTKClass_vtkXMLPStructuredDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLPStructuredGridReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPStructuredGridReader - Read PVTK XML StructuredGrid files.\n\n",
    "Superclass: vtkXMLPStructuredDataReader\n\n",
    "vtkXMLPStructuredGridReader reads the PVTK XML StructuredGrid file\nformat.  This reads the parallel format's summary file and then uses\nvtkXMLStructuredGridReader to read data from the individual\nStructuredGrid piece files.  Streaming is supported.  The standard\nextension for this reader's file format is \"pvts\".\n\nSee Also:\n\nvtkXMLStructuredGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPStructuredGridReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPStructuredGridReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPStructuredGridReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

