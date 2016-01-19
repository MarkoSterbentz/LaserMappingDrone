// python wrapper for vtkPPhastaReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPPhastaReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPPhastaReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPPhastaReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkPPhastaReader_Doc();


static PyObject *
PyvtkPPhastaReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPPhastaReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPhastaReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPPhastaReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPhastaReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPPhastaReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPPhastaReader::NewInstance());

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
PyvtkPPhastaReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPPhastaReader *tempr = vtkPPhastaReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPhastaReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

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
      op->vtkPPhastaReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPPhastaReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkPPhastaReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPhastaReader_SetTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStepIndex(temp0);
      }
    else
      {
      op->vtkPPhastaReader::SetTimeStepIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPPhastaReader_GetTimeStepIndexMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepIndexMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepIndexMinValue() :
      op->vtkPPhastaReader::GetTimeStepIndexMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPhastaReader_GetTimeStepIndexMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepIndexMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepIndexMaxValue() :
      op->vtkPPhastaReader::GetTimeStepIndexMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPhastaReader_GetTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepIndex() :
      op->vtkPPhastaReader::GetTimeStepIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPhastaReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkPPhastaReader::GetTimeStepRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPPhastaReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkPPhastaReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPPhastaReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPPhastaReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPPhastaReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPPhastaReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPPhastaReader\nC++: vtkPPhastaReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPPhastaReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPPhastaReader\nC++: vtkPPhastaReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkPPhastaReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet and get the Phasta meta file name\n"},
  {(char*)"GetFileName", PyvtkPPhastaReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet and get the Phasta meta file name\n"},
  {(char*)"SetTimeStepIndex", PyvtkPPhastaReader_SetTimeStepIndex, METH_VARARGS,
   (char*)"V.SetTimeStepIndex(int)\nC++: void SetTimeStepIndex(int)\n\nSet the step number for the geometry.\n"},
  {(char*)"GetTimeStepIndexMinValue", PyvtkPPhastaReader_GetTimeStepIndexMinValue, METH_VARARGS,
   (char*)"V.GetTimeStepIndexMinValue() -> int\nC++: int GetTimeStepIndexMinValue()\n\nSet the step number for the geometry.\n"},
  {(char*)"GetTimeStepIndexMaxValue", PyvtkPPhastaReader_GetTimeStepIndexMaxValue, METH_VARARGS,
   (char*)"V.GetTimeStepIndexMaxValue() -> int\nC++: int GetTimeStepIndexMaxValue()\n\nSet the step number for the geometry.\n"},
  {(char*)"GetTimeStepIndex", PyvtkPPhastaReader_GetTimeStepIndex, METH_VARARGS,
   (char*)"V.GetTimeStepIndex() -> int\nC++: int GetTimeStepIndex()\n\nSet the step number for the geometry.\n"},
  {(char*)"GetTimeStepRange", PyvtkPPhastaReader_GetTimeStepRange, METH_VARARGS,
   (char*)"V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {(char*)"CanReadFile", PyvtkPPhastaReader_CanReadFile, METH_VARARGS | METH_STATIC,
   (char*)"V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPPhastaReader_StaticNew()
{
  return vtkPPhastaReader::New();
}

PyObject *PyVTKClass_vtkPPhastaReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPPhastaReader_StaticNew,
    PyvtkPPhastaReader_Methods,
    "vtkPPhastaReader", modulename,
    NULL, NULL,
    PyvtkPPhastaReader_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPPhastaReader_Doc()
{
  static const char *docstring[] = {
    "vtkPPhastaReader - parallel Phasta meta-file reader\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "See Also:\n\nvtkPhastaReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPPhastaReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPPhastaReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPPhastaReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

