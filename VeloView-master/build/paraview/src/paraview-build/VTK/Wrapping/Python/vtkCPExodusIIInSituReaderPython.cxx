// python wrapper for vtkCPExodusIIInSituReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCPExodusIIInSituReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCPExodusIIInSituReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCPExodusIIInSituReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkCPExodusIIInSituReader_Doc();


static PyObject *
PyvtkCPExodusIIInSituReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCPExodusIIInSituReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPExodusIIInSituReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCPExodusIIInSituReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPExodusIIInSituReader::NewInstance());

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
PyvtkCPExodusIIInSituReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCPExodusIIInSituReader *tempr = vtkCPExodusIIInSituReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkCPExodusIIInSituReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkCPExodusIIInSituReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_GetCurrentTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCurrentTimeStep() :
      op->vtkCPExodusIIInSituReader::GetCurrentTimeStep());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_SetCurrentTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentTimeStep(temp0);
      }
    else
      {
      op->vtkCPExodusIIInSituReader::SetCurrentTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkCPExodusIIInSituReader::GetTimeStepRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_GetTimeStepValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTimeStepValue(temp0) :
      op->vtkCPExodusIIInSituReader::GetTimeStepValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCPExodusIIInSituReader_Methods[] = {
  {(char*)"GetClassName", PyvtkCPExodusIIInSituReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCPExodusIIInSituReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCPExodusIIInSituReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCPExodusIIInSituReader\nC++: vtkCPExodusIIInSituReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCPExodusIIInSituReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCPExodusIIInSituReader\nC++: vtkCPExodusIIInSituReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkCPExodusIIInSituReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the name of the Exodus file to read.\n"},
  {(char*)"GetFileName", PyvtkCPExodusIIInSituReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the name of the Exodus file to read.\n"},
  {(char*)"GetCurrentTimeStep", PyvtkCPExodusIIInSituReader_GetCurrentTimeStep, METH_VARARGS,
   (char*)"V.GetCurrentTimeStep() -> int\nC++: int GetCurrentTimeStep()\n\nGet/Set the current timestep to read as a zero-based index.\n"},
  {(char*)"SetCurrentTimeStep", PyvtkCPExodusIIInSituReader_SetCurrentTimeStep, METH_VARARGS,
   (char*)"V.SetCurrentTimeStep(int)\nC++: void SetCurrentTimeStep(int a)\n\nGet/Set the current timestep to read as a zero-based index.\n"},
  {(char*)"GetTimeStepRange", PyvtkCPExodusIIInSituReader_GetTimeStepRange, METH_VARARGS,
   (char*)"V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {(char*)"GetTimeStepValue", PyvtkCPExodusIIInSituReader_GetTimeStepValue, METH_VARARGS,
   (char*)"V.GetTimeStepValue(int) -> float\nC++: double GetTimeStepValue(int step)\n\nGet the floating point tag associated with the timestep at\n'step'.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCPExodusIIInSituReader_StaticNew()
{
  return vtkCPExodusIIInSituReader::New();
}

PyObject *PyVTKClass_vtkCPExodusIIInSituReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCPExodusIIInSituReader_StaticNew,
    PyvtkCPExodusIIInSituReader_Methods,
    "vtkCPExodusIIInSituReader", modulename,
    NULL, NULL,
    PyvtkCPExodusIIInSituReader_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCPExodusIIInSituReader_Doc()
{
  static const char *docstring[] = {
    "vtkCPExodusIIInSituReader - Read an Exodus II file into data\nstructures\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "This class can be used to import Exodus II files into VTK without\nrepacking the data into the standard VTK memory layout, avoiding the\ncost of a deep copy.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCPExodusIIInSituReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCPExodusIIInSituReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCPExodusIIInSituReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

