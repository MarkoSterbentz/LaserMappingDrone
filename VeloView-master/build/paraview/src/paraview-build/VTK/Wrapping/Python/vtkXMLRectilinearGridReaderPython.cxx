// python wrapper for vtkXMLRectilinearGridReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLRectilinearGridReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLRectilinearGridReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLRectilinearGridReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLStructuredDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLStructuredDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLStructuredDataReaderNew
#endif

static const char **PyvtkXMLRectilinearGridReader_Doc();


static PyObject *
PyvtkXMLRectilinearGridReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridReader *op = static_cast<vtkXMLRectilinearGridReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLRectilinearGridReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLRectilinearGridReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridReader *op = static_cast<vtkXMLRectilinearGridReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLRectilinearGridReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLRectilinearGridReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridReader *op = static_cast<vtkXMLRectilinearGridReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLRectilinearGridReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLRectilinearGridReader::NewInstance());

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
PyvtkXMLRectilinearGridReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLRectilinearGridReader *tempr = vtkXMLRectilinearGridReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLRectilinearGridReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridReader *op = static_cast<vtkXMLRectilinearGridReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRectilinearGrid *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkXMLRectilinearGridReader::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLRectilinearGridReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridReader *op = static_cast<vtkXMLRectilinearGridReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkRectilinearGrid *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkXMLRectilinearGridReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLRectilinearGridReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLRectilinearGridReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLRectilinearGridReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkXMLRectilinearGridReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLRectilinearGridReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLRectilinearGridReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLRectilinearGridReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLRectilinearGridReader\nC++: vtkXMLRectilinearGridReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLRectilinearGridReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLRectilinearGridReader\nC++: vtkXMLRectilinearGridReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkXMLRectilinearGridReader_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetOutput()\nV.GetOutput(int) -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLRectilinearGridReader_StaticNew()
{
  return vtkXMLRectilinearGridReader::New();
}

PyObject *PyVTKClass_vtkXMLRectilinearGridReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLRectilinearGridReader_StaticNew,
    PyvtkXMLRectilinearGridReader_Methods,
    "vtkXMLRectilinearGridReader", modulename,
    NULL, NULL,
    PyvtkXMLRectilinearGridReader_Doc(),
    PyVTKClass_vtkXMLStructuredDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLRectilinearGridReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLRectilinearGridReader - Read VTK XML RectilinearGrid files.\n\n",
    "Superclass: vtkXMLStructuredDataReader\n\n",
    "vtkXMLRectilinearGridReader reads the VTK XML RectilinearGrid file\nformat.  One rectilinear grid file can be read to produce one output.\n Streaming is supported.  The standard extension for this reader's\nfile format is \"vtr\".  This reader is also used to read a single\npiece of the parallel file format.\n\nSee Also:\n\nvtkXMLPRectilinearGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLRectilinearGridReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLRectilinearGridReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLRectilinearGridReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

