// python wrapper for vtkDelimitedTextWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkDelimitedTextWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDelimitedTextWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDelimitedTextWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkDelimitedTextWriter_Doc();


static PyObject *
PyvtkDelimitedTextWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDelimitedTextWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDelimitedTextWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDelimitedTextWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDelimitedTextWriter::NewInstance());

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
PyvtkDelimitedTextWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDelimitedTextWriter *tempr = vtkDelimitedTextWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_SetFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldDelimiter(temp0);
      }
    else
      {
      op->vtkDelimitedTextWriter::SetFieldDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDelimiter() :
      op->vtkDelimitedTextWriter::GetFieldDelimiter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_SetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStringDelimiter(temp0);
      }
    else
      {
      op->vtkDelimitedTextWriter::SetStringDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetStringDelimiter() :
      op->vtkDelimitedTextWriter::GetStringDelimiter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

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
      op->vtkDelimitedTextWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDelimitedTextWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_SetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseStringDelimiter(temp0);
      }
    else
      {
      op->vtkDelimitedTextWriter::SetUseStringDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseStringDelimiter() :
      op->vtkDelimitedTextWriter::GetUseStringDelimiter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteToOutputString(temp0);
      }
    else
      {
      op->vtkDelimitedTextWriter::SetWriteToOutputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkDelimitedTextWriter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOn();
      }
    else
      {
      op->vtkDelimitedTextWriter::WriteToOutputStringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOff();
      }
    else
      {
      op->vtkDelimitedTextWriter::WriteToOutputStringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_RegisterAndGetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterAndGetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->RegisterAndGetOutputString() :
      op->vtkDelimitedTextWriter::RegisterAndGetOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetString(temp0) :
      op->vtkDelimitedTextWriter::GetString(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDelimitedTextWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkDelimitedTextWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDelimitedTextWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDelimitedTextWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDelimitedTextWriter\nC++: vtkDelimitedTextWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDelimitedTextWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDelimitedTextWriter\nC++: vtkDelimitedTextWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFieldDelimiter", PyvtkDelimitedTextWriter_SetFieldDelimiter, METH_VARARGS,
   (char*)"V.SetFieldDelimiter(string)\nC++: void SetFieldDelimiter(char *)\n\nGet/Set the delimiter use to separate fields (\",\" by default.)\n"},
  {(char*)"GetFieldDelimiter", PyvtkDelimitedTextWriter_GetFieldDelimiter, METH_VARARGS,
   (char*)"V.GetFieldDelimiter() -> string\nC++: char *GetFieldDelimiter()\n\nGet/Set the delimiter use to separate fields (\",\" by default.)\n"},
  {(char*)"SetStringDelimiter", PyvtkDelimitedTextWriter_SetStringDelimiter, METH_VARARGS,
   (char*)"V.SetStringDelimiter(string)\nC++: void SetStringDelimiter(char *)\n\nGet/Set the delimiter used for string data, if any eg. double\nquotes(\").\n"},
  {(char*)"GetStringDelimiter", PyvtkDelimitedTextWriter_GetStringDelimiter, METH_VARARGS,
   (char*)"V.GetStringDelimiter() -> string\nC++: char *GetStringDelimiter()\n\nGet/Set the delimiter used for string data, if any eg. double\nquotes(\").\n"},
  {(char*)"SetFileName", PyvtkDelimitedTextWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the filename for the file.\n"},
  {(char*)"GetFileName", PyvtkDelimitedTextWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the filename for the file.\n"},
  {(char*)"SetUseStringDelimiter", PyvtkDelimitedTextWriter_SetUseStringDelimiter, METH_VARARGS,
   (char*)"V.SetUseStringDelimiter(bool)\nC++: void SetUseStringDelimiter(bool a)\n\nGet/Set if StringDelimiter must be used for string data. True by\ndefault.\n"},
  {(char*)"GetUseStringDelimiter", PyvtkDelimitedTextWriter_GetUseStringDelimiter, METH_VARARGS,
   (char*)"V.GetUseStringDelimiter() -> bool\nC++: bool GetUseStringDelimiter()\n\nGet/Set if StringDelimiter must be used for string data. True by\ndefault.\n"},
  {(char*)"SetWriteToOutputString", PyvtkDelimitedTextWriter_SetWriteToOutputString, METH_VARARGS,
   (char*)"V.SetWriteToOutputString(bool)\nC++: void SetWriteToOutputString(bool a)\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"GetWriteToOutputString", PyvtkDelimitedTextWriter_GetWriteToOutputString, METH_VARARGS,
   (char*)"V.GetWriteToOutputString() -> bool\nC++: bool GetWriteToOutputString()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"WriteToOutputStringOn", PyvtkDelimitedTextWriter_WriteToOutputStringOn, METH_VARARGS,
   (char*)"V.WriteToOutputStringOn()\nC++: void WriteToOutputStringOn()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"WriteToOutputStringOff", PyvtkDelimitedTextWriter_WriteToOutputStringOff, METH_VARARGS,
   (char*)"V.WriteToOutputStringOff()\nC++: void WriteToOutputStringOff()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"RegisterAndGetOutputString", PyvtkDelimitedTextWriter_RegisterAndGetOutputString, METH_VARARGS,
   (char*)"V.RegisterAndGetOutputString() -> string\nC++: char *RegisterAndGetOutputString()\n\nThis convenience method returns the string, sets the IVAR to\nNULL, so that the user is responsible for deleting the string.\n"},
  {(char*)"GetString", PyvtkDelimitedTextWriter_GetString, METH_VARARGS,
   (char*)"V.GetString(string) -> string\nC++: vtkStdString GetString(vtkStdString string)\n\nInternal method: Returns the \"string\" with the \"StringDelimiter\"\nif UseStringDelimiter is true.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDelimitedTextWriter_StaticNew()
{
  return vtkDelimitedTextWriter::New();
}

PyObject *PyVTKClass_vtkDelimitedTextWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDelimitedTextWriter_StaticNew,
    PyvtkDelimitedTextWriter_Methods,
    "vtkDelimitedTextWriter", modulename,
    NULL, NULL,
    PyvtkDelimitedTextWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkDelimitedTextWriter_Doc()
{
  static const char *docstring[] = {
    "vtkDelimitedTextWriter - Delimited text writer for vtkTable\n\n",
    "Superclass: vtkWriter\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDelimitedTextWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDelimitedTextWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDelimitedTextWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

