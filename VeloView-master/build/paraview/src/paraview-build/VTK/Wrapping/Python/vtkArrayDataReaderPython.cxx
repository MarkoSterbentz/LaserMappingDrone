// python wrapper for vtkArrayDataReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkArrayDataReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkArrayDataReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkArrayDataReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkArrayDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
#endif

static const char **PyvtkArrayDataReader_Doc();


static PyObject *
PyvtkArrayDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataReader *op = static_cast<vtkArrayDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkArrayDataReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataReader *op = static_cast<vtkArrayDataReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataReader *op = static_cast<vtkArrayDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArrayDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayDataReader::NewInstance());

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
PyvtkArrayDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkArrayDataReader *tempr = vtkArrayDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataReader *op = static_cast<vtkArrayDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkArrayDataReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataReader *op = static_cast<vtkArrayDataReader *>(vp);

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
      op->vtkArrayDataReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataReader_SetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataReader *op = static_cast<vtkArrayDataReader *>(vp);

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
      op->vtkArrayDataReader::SetInputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataReader_GetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataReader *op = static_cast<vtkArrayDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetInputString() :
      op->vtkArrayDataReader::GetInputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataReader_SetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataReader *op = static_cast<vtkArrayDataReader *>(vp);

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
      op->vtkArrayDataReader::SetReadFromInputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataReader_GetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataReader *op = static_cast<vtkArrayDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetReadFromInputString() :
      op->vtkArrayDataReader::GetReadFromInputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataReader_ReadFromInputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataReader *op = static_cast<vtkArrayDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadFromInputStringOn();
      }
    else
      {
      op->vtkArrayDataReader::ReadFromInputStringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataReader_ReadFromInputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataReader *op = static_cast<vtkArrayDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadFromInputStringOff();
      }
    else
      {
      op->vtkArrayDataReader::ReadFromInputStringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataReader_Read(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Read");

  vtkStdString temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkArrayData *tempr = vtkArrayDataReader::Read(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkArrayDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkArrayDataReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArrayDataReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArrayDataReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkArrayDataReader\nC++: vtkArrayDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkArrayDataReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkArrayDataReader\nC++: vtkArrayDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkArrayDataReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet the filesystem location from which data will be read.\n"},
  {(char*)"SetFileName", PyvtkArrayDataReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet the filesystem location from which data will be read.\n"},
  {(char*)"SetInputString", PyvtkArrayDataReader_SetInputString, METH_VARARGS,
   (char*)"V.SetInputString(string)\nC++: virtual void SetInputString(const vtkStdString &string)\n\nThe input string to parse. If you set the input string, you must\nalso set the ReadFromInputString flag to parse the string instead\nof a file.\n"},
  {(char*)"GetInputString", PyvtkArrayDataReader_GetInputString, METH_VARARGS,
   (char*)"V.GetInputString() -> string\nC++: virtual vtkStdString GetInputString()\n\nThe input string to parse. If you set the input string, you must\nalso set the ReadFromInputString flag to parse the string instead\nof a file.\n"},
  {(char*)"SetReadFromInputString", PyvtkArrayDataReader_SetReadFromInputString, METH_VARARGS,
   (char*)"V.SetReadFromInputString(bool)\nC++: void SetReadFromInputString(bool a)\n\nWhether to read from an input string as opposed to a file, which\nis the default.\n"},
  {(char*)"GetReadFromInputString", PyvtkArrayDataReader_GetReadFromInputString, METH_VARARGS,
   (char*)"V.GetReadFromInputString() -> bool\nC++: bool GetReadFromInputString()\n\nWhether to read from an input string as opposed to a file, which\nis the default.\n"},
  {(char*)"ReadFromInputStringOn", PyvtkArrayDataReader_ReadFromInputStringOn, METH_VARARGS,
   (char*)"V.ReadFromInputStringOn()\nC++: void ReadFromInputStringOn()\n\nWhether to read from an input string as opposed to a file, which\nis the default.\n"},
  {(char*)"ReadFromInputStringOff", PyvtkArrayDataReader_ReadFromInputStringOff, METH_VARARGS,
   (char*)"V.ReadFromInputStringOff()\nC++: void ReadFromInputStringOff()\n\nWhether to read from an input string as opposed to a file, which\nis the default.\n"},
  {(char*)"Read", PyvtkArrayDataReader_Read, METH_VARARGS | METH_STATIC,
   (char*)"V.Read(string) -> vtkArrayData\nC++: static vtkArrayData *Read(vtkStdString str)\n\nRead an arbitrary array from a string.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkArrayDataReader_StaticNew()
{
  return vtkArrayDataReader::New();
}

PyObject *PyVTKClass_vtkArrayDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkArrayDataReader_StaticNew,
    PyvtkArrayDataReader_Methods,
    "vtkArrayDataReader", modulename,
    NULL, NULL,
    PyvtkArrayDataReader_Doc(),
    PyVTKClass_vtkArrayDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkArrayDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkArrayDataReader -  Reads vtkArrayData written by\nvtkArrayDataWriter.\n\n",
    "Superclass: vtkArrayDataAlgorithm\n\n",
    "Reads vtkArrayData data written with vtkArrayDataWriter.\n\nOutputs:\n  Output port 0: vtkArrayData containing a collection of vtkArrays.\n\nSee Also:\n\nvtkArrayDataWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrayDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArrayDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrayDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

