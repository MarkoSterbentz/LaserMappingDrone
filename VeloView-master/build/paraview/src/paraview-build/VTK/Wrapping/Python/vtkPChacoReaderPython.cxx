// python wrapper for vtkPChacoReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPChacoReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPChacoReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPChacoReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkChacoReaderNew
extern "C" { PyObject *PyVTKClass_vtkChacoReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkChacoReaderNew
#endif

static const char **PyvtkPChacoReader_Doc();


static PyObject *
PyvtkPChacoReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPChacoReader *op = static_cast<vtkPChacoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPChacoReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPChacoReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPChacoReader *op = static_cast<vtkPChacoReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPChacoReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPChacoReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPChacoReader *op = static_cast<vtkPChacoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPChacoReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPChacoReader::NewInstance());

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
PyvtkPChacoReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPChacoReader *tempr = vtkPChacoReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPChacoReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPChacoReader *op = static_cast<vtkPChacoReader *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPChacoReader::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPChacoReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPChacoReader *op = static_cast<vtkPChacoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPChacoReader::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPChacoReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPChacoReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPChacoReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPChacoReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPChacoReader\nC++: vtkPChacoReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPChacoReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPChacoReader\nC++: vtkPChacoReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPChacoReader_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/Get the communicator object (we'll use global World\ncontroller\n  if you don't set a different one).\n"},
  {(char*)"GetController", PyvtkPChacoReader_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/Get the communicator object (we'll use global World\ncontroller\n  if you don't set a different one).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPChacoReader_StaticNew()
{
  return vtkPChacoReader::New();
}

PyObject *PyVTKClass_vtkPChacoReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPChacoReader_StaticNew,
    PyvtkPChacoReader_Methods,
    "vtkPChacoReader", modulename,
    NULL, NULL,
    PyvtkPChacoReader_Doc(),
    PyVTKClass_vtkChacoReaderNew(modulename));
  return cls;
}

const char **PyvtkPChacoReader_Doc()
{
  static const char *docstring[] = {
    "vtkPChacoReader - Read Chaco files\n\n",
    "Superclass: vtkChacoReader\n\n",
    "vtkPChacoReader is a unstructured grid source object that reads Chaco\nfiles.  The file is read by process 0 and converted into a\nvtkUnstructuredGrid.  The vtkDistributedDataFilter is invoked to\ndivide the grid among the processes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPChacoReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPChacoReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPChacoReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

