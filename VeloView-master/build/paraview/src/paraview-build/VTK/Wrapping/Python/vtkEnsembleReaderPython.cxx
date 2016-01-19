// python wrapper for vtkEnsembleReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkEnsembleReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEnsembleReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEnsembleReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMetaReaderNew
extern "C" { PyObject *PyVTKClass_vtkMetaReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkMetaReaderNew
#endif

static const char **PyvtkEnsembleReader_Doc();


static PyObject *
PyvtkEnsembleReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleReader *op = static_cast<vtkEnsembleReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEnsembleReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnsembleReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleReader *op = static_cast<vtkEnsembleReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnsembleReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnsembleReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleReader *op = static_cast<vtkEnsembleReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEnsembleReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnsembleReader::NewInstance());

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
PyvtkEnsembleReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEnsembleReader *tempr = vtkEnsembleReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnsembleReader_GetNumberOfFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleReader *op = static_cast<vtkEnsembleReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfFiles() :
      op->vtkEnsembleReader::GetNumberOfFiles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnsembleReader_GetNumberOfParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleReader *op = static_cast<vtkEnsembleReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfParameters() :
      op->vtkEnsembleReader::GetNumberOfParameters());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEnsembleReader_Methods[] = {
  {(char*)"GetClassName", PyvtkEnsembleReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEnsembleReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEnsembleReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEnsembleReader\nC++: vtkEnsembleReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEnsembleReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEnsembleReader\nC++: vtkEnsembleReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfFiles", PyvtkEnsembleReader_GetNumberOfFiles, METH_VARARGS,
   (char*)"V.GetNumberOfFiles() -> int\nC++: vtkIdType GetNumberOfFiles()\n\nReturns the number of simulations (files) in the ensemble\n"},
  {(char*)"GetNumberOfParameters", PyvtkEnsembleReader_GetNumberOfParameters, METH_VARARGS,
   (char*)"V.GetNumberOfParameters() -> int\nC++: vtkIdType GetNumberOfParameters()\n\nGet the number of simulation parameters specified for each\nsimulation file.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEnsembleReader_StaticNew()
{
  return vtkEnsembleReader::New();
}

PyObject *PyVTKClass_vtkEnsembleReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEnsembleReader_StaticNew,
    PyvtkEnsembleReader_Methods,
    "vtkEnsembleReader", modulename,
    NULL, NULL,
    PyvtkEnsembleReader_Doc(),
    PyVTKClass_vtkMetaReaderNew(modulename));
  return cls;
}

const char **PyvtkEnsembleReader_Doc()
{
  static const char *docstring[] = {
    "vtkEnsembleReader - no description provided.\n\n",
    "Superclass: vtkMetaReader\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEnsembleReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEnsembleReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEnsembleReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

