// python wrapper for vtkPSLACReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPSLACReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPSLACReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPSLACReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSLACReaderNew
extern "C" { PyObject *PyVTKClass_vtkSLACReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkSLACReaderNew
#endif

static const char **PyvtkPSLACReader_Doc();


static PyObject *
PyvtkPSLACReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSLACReader *op = static_cast<vtkPSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPSLACReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSLACReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSLACReader *op = static_cast<vtkPSLACReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPSLACReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSLACReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSLACReader *op = static_cast<vtkPSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPSLACReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPSLACReader::NewInstance());

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
PyvtkPSLACReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPSLACReader *tempr = vtkPSLACReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSLACReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSLACReader *op = static_cast<vtkPSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPSLACReader::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSLACReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSLACReader *op = static_cast<vtkPSLACReader *>(vp);

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
      op->vtkPSLACReader::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPSLACReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPSLACReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPSLACReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPSLACReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPSLACReader\nC++: vtkPSLACReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPSLACReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPSLACReader\nC++: vtkPSLACReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetController", PyvtkPSLACReader_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nThe controller used to communicate partition data.  The number of\npieces requested must agree with the number of processes, the\npiece requested must agree with the local process id, and all\nprocess must invoke ProcessRequests of this filter\nsimultaneously.\n"},
  {(char*)"SetController", PyvtkPSLACReader_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nThe controller used to communicate partition data.  The number of\npieces requested must agree with the number of processes, the\npiece requested must agree with the local process id, and all\nprocess must invoke ProcessRequests of this filter\nsimultaneously.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPSLACReader_StaticNew()
{
  return vtkPSLACReader::New();
}

PyObject *PyVTKClass_vtkPSLACReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPSLACReader_StaticNew,
    PyvtkPSLACReader_Methods,
    "vtkPSLACReader", modulename,
    NULL, NULL,
    PyvtkPSLACReader_Doc(),
    PyVTKClass_vtkSLACReaderNew(modulename));
  return cls;
}

const char **PyvtkPSLACReader_Doc()
{
  static const char *docstring[] = {
    "vtkPSLACReader\n\n",
    "Superclass: vtkSLACReader\n\n",
    "Extends the vtkSLACReader to read in partitioned pieces.  Due to the\nnature of the data layout, this reader only works in a data parallel\nmode where each process in a parallel job simultaneously attempts to\nread the piece corresponding to the local process id.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPSLACReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPSLACReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPSLACReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

