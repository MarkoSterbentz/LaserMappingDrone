// python wrapper for vtkArrayReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkArrayReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkArrayReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkArrayReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkArrayDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
#endif

static const char **PyvtkArrayReader_Doc();


static PyObject *
PyvtkArrayReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkArrayReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArrayReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayReader::NewInstance());

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
PyvtkArrayReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkArrayReader *tempr = vtkArrayReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkArrayReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

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
      op->vtkArrayReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayReader_SetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputString(temp0);
      }
    else
      {
      op->vtkArrayReader::SetInputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayReader_GetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetInputString() :
      op->vtkArrayReader::GetInputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayReader_SetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadFromInputString(temp0);
      }
    else
      {
      op->vtkArrayReader::SetReadFromInputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayReader_GetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetReadFromInputString() :
      op->vtkArrayReader::GetReadFromInputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayReader_ReadFromInputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadFromInputStringOn();
      }
    else
      {
      op->vtkArrayReader::ReadFromInputStringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayReader_ReadFromInputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadFromInputStringOff();
      }
    else
      {
      op->vtkArrayReader::ReadFromInputStringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayReader_Read(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Read");

  vtkStdString temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkArray *tempr = vtkArrayReader::Read(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkArrayReader_Methods[] = {
  {(char*)"GetClassName", PyvtkArrayReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArrayReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArrayReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkArrayReader\nC++: vtkArrayReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkArrayReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkArrayReader\nC++: vtkArrayReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkArrayReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet the filesystem location from which data will be read.\n"},
  {(char*)"SetFileName", PyvtkArrayReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet the filesystem location from which data will be read.\n"},
  {(char*)"SetInputString", PyvtkArrayReader_SetInputString, METH_VARARGS,
   (char*)"V.SetInputString(string)\nC++: virtual void SetInputString(const vtkStdString &string)\n\nThe input string to parse. If you set the input string, you must\nalso set the ReadFromInputString flag to parse the string instead\nof a file.\n"},
  {(char*)"GetInputString", PyvtkArrayReader_GetInputString, METH_VARARGS,
   (char*)"V.GetInputString() -> string\nC++: virtual vtkStdString GetInputString()\n\nThe input string to parse. If you set the input string, you must\nalso set the ReadFromInputString flag to parse the string instead\nof a file.\n"},
  {(char*)"SetReadFromInputString", PyvtkArrayReader_SetReadFromInputString, METH_VARARGS,
   (char*)"V.SetReadFromInputString(bool)\nC++: void SetReadFromInputString(bool a)\n\nWhether to read from an input string as opposed to a file, which\nis the default.\n"},
  {(char*)"GetReadFromInputString", PyvtkArrayReader_GetReadFromInputString, METH_VARARGS,
   (char*)"V.GetReadFromInputString() -> bool\nC++: bool GetReadFromInputString()\n\nWhether to read from an input string as opposed to a file, which\nis the default.\n"},
  {(char*)"ReadFromInputStringOn", PyvtkArrayReader_ReadFromInputStringOn, METH_VARARGS,
   (char*)"V.ReadFromInputStringOn()\nC++: void ReadFromInputStringOn()\n\nWhether to read from an input string as opposed to a file, which\nis the default.\n"},
  {(char*)"ReadFromInputStringOff", PyvtkArrayReader_ReadFromInputStringOff, METH_VARARGS,
   (char*)"V.ReadFromInputStringOff()\nC++: void ReadFromInputStringOff()\n\nWhether to read from an input string as opposed to a file, which\nis the default.\n"},
  {(char*)"Read", PyvtkArrayReader_Read, METH_VARARGS | METH_STATIC,
   (char*)"V.Read(string) -> vtkArray\nC++: static vtkArray *Read(vtkStdString str)\n\nRead an arbitrary array from a string.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkArrayReader_StaticNew()
{
  return vtkArrayReader::New();
}

PyObject *PyVTKClass_vtkArrayReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkArrayReader_StaticNew,
    PyvtkArrayReader_Methods,
    "vtkArrayReader", modulename,
    NULL, NULL,
    PyvtkArrayReader_Doc(),
    PyVTKClass_vtkArrayDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkArrayReader_Doc()
{
  static const char *docstring[] = {
    "vtkArrayReader -  Reads sparse and dense vtkArray data written by\nvtkArrayWriter.\n\n",
    "Superclass: vtkArrayDataAlgorithm\n\n",
    "Reads sparse and dense vtkArray data written with vtkArrayWriter.\n\nOutputs:\n  Output port 0: vtkArrayData containing a dense or sparse array.\n\nSee Also:\n\nvtkArrayWriter\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrayReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArrayReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrayReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

