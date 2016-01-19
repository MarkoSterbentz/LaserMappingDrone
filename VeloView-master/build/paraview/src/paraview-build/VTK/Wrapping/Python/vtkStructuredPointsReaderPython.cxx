// python wrapper for vtkStructuredPointsReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStructuredPointsReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStructuredPointsReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStructuredPointsReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataReaderNew
#endif

static const char **PyvtkStructuredPointsReader_Doc();


static PyObject *
PyvtkStructuredPointsReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStructuredPointsReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredPointsReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredPointsReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredPointsReader::NewInstance());

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
PyvtkStructuredPointsReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStructuredPointsReader *tempr = vtkStructuredPointsReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  vtkStructuredPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStructuredPoints"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkStructuredPointsReader::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkStructuredPoints *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkStructuredPointsReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredPointsReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredPoints *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkStructuredPointsReader::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredPointsReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkStructuredPointsReader_GetOutput_s1(self, args);
    case 0:
      return PyvtkStructuredPointsReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkStructuredPointsReader_ReadMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsReader *op = static_cast<vtkStructuredPointsReader *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->ReadMetaData(temp0) :
      op->vtkStructuredPointsReader::ReadMetaData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredPointsReader_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredPointsReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredPointsReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredPointsReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStructuredPointsReader\nC++: vtkStructuredPointsReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredPointsReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredPointsReader\nC++: vtkStructuredPointsReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutput", PyvtkStructuredPointsReader_SetOutput, METH_VARARGS,
   (char*)"V.SetOutput(vtkStructuredPoints)\nC++: void SetOutput(vtkStructuredPoints *output)\n\nSet/Get the output of this reader.\n"},
  {(char*)"GetOutput", PyvtkStructuredPointsReader_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput(int) -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetOutput(int idx)\nV.GetOutput() -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetOutput()\n\nSet/Get the output of this reader.\n"},
  {(char*)"ReadMetaData", PyvtkStructuredPointsReader_ReadMetaData, METH_VARARGS,
   (char*)"V.ReadMetaData(vtkInformation) -> int\nC++: virtual int ReadMetaData(vtkInformation *outInfo)\n\nRead the meta information from the file.  This needs to be public\nto it can be accessed by vtkDataSetReader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredPointsReader_StaticNew()
{
  return vtkStructuredPointsReader::New();
}

PyObject *PyVTKClass_vtkStructuredPointsReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredPointsReader_StaticNew,
    PyvtkStructuredPointsReader_Methods,
    "vtkStructuredPointsReader", modulename,
    NULL, NULL,
    PyvtkStructuredPointsReader_Doc(),
    PyVTKClass_vtkDataReaderNew(modulename));
  return cls;
}

const char **PyvtkStructuredPointsReader_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredPointsReader - read vtk structured points data file\n\n",
    "Superclass: vtkDataReader\n\n",
    "vtkStructuredPointsReader is a source object that reads ASCII or\nbinary structured points data files in vtk format (see text for\nformat details). The output of this reader is a single\nvtkStructuredPoints data object. The superclass of this class,\nvtkDataReader, provides many methods for controlling the reading of\nthe data file, see vtkDataReader for more information.\n\nCaveats:\n\nBinary files writte",
    "n on one system may not be readable on other\nsystems.\n\nSee Also:\n\nvtkStructuredPoints vtkDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredPointsReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredPointsReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredPointsReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

