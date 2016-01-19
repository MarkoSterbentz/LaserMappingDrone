// python wrapper for vtkCSVWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkCSVWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCSVWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCSVWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkCSVWriter_Doc();


static PyObject *
PyvtkCSVWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCSVWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCSVWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCSVWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCSVWriter::NewInstance());

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
PyvtkCSVWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCSVWriter *tempr = vtkCSVWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_SetFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

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
      op->vtkCSVWriter::SetFieldDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDelimiter() :
      op->vtkCSVWriter::GetFieldDelimiter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_SetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

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
      op->vtkCSVWriter::SetStringDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetStringDelimiter() :
      op->vtkCSVWriter::GetStringDelimiter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

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
      op->vtkCSVWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkCSVWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_SetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

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
      op->vtkCSVWriter::SetUseStringDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseStringDelimiter() :
      op->vtkCSVWriter::GetUseStringDelimiter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_SetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPrecision(temp0);
      }
    else
      {
      op->vtkCSVWriter::SetPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPrecisionMinValue() :
      op->vtkCSVWriter::GetPrecisionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPrecisionMaxValue() :
      op->vtkCSVWriter::GetPrecisionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPrecision() :
      op->vtkCSVWriter::GetPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_SetUseScientificNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseScientificNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseScientificNotation(temp0);
      }
    else
      {
      op->vtkCSVWriter::SetUseScientificNotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetUseScientificNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseScientificNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseScientificNotation() :
      op->vtkCSVWriter::GetUseScientificNotation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_UseScientificNotationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseScientificNotationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseScientificNotationOn();
      }
    else
      {
      op->vtkCSVWriter::UseScientificNotationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_UseScientificNotationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseScientificNotationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseScientificNotationOff();
      }
    else
      {
      op->vtkCSVWriter::UseScientificNotationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetString(temp0) :
      op->vtkCSVWriter::GetString(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCSVWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkCSVWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCSVWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCSVWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCSVWriter\nC++: vtkCSVWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCSVWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCSVWriter\nC++: vtkCSVWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFieldDelimiter", PyvtkCSVWriter_SetFieldDelimiter, METH_VARARGS,
   (char*)"V.SetFieldDelimiter(string)\nC++: void SetFieldDelimiter(char *)\n\nGet/Set the delimiter use to separate fields (\",\" by default.)\n"},
  {(char*)"GetFieldDelimiter", PyvtkCSVWriter_GetFieldDelimiter, METH_VARARGS,
   (char*)"V.GetFieldDelimiter() -> string\nC++: char *GetFieldDelimiter()\n\nGet/Set the delimiter use to separate fields (\",\" by default.)\n"},
  {(char*)"SetStringDelimiter", PyvtkCSVWriter_SetStringDelimiter, METH_VARARGS,
   (char*)"V.SetStringDelimiter(string)\nC++: void SetStringDelimiter(char *)\n\nGet/Set the delimiter used for string data, if any eg. double\nquotes(\").\n"},
  {(char*)"GetStringDelimiter", PyvtkCSVWriter_GetStringDelimiter, METH_VARARGS,
   (char*)"V.GetStringDelimiter() -> string\nC++: char *GetStringDelimiter()\n\nGet/Set the delimiter used for string data, if any eg. double\nquotes(\").\n"},
  {(char*)"SetFileName", PyvtkCSVWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the filename for the file.\n"},
  {(char*)"GetFileName", PyvtkCSVWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the filename for the file.\n"},
  {(char*)"SetUseStringDelimiter", PyvtkCSVWriter_SetUseStringDelimiter, METH_VARARGS,
   (char*)"V.SetUseStringDelimiter(bool)\nC++: void SetUseStringDelimiter(bool a)\n\nGet/Set if StringDelimiter must be used for string data. True by\ndefault.\n"},
  {(char*)"GetUseStringDelimiter", PyvtkCSVWriter_GetUseStringDelimiter, METH_VARARGS,
   (char*)"V.GetUseStringDelimiter() -> bool\nC++: bool GetUseStringDelimiter()\n\nGet/Set if StringDelimiter must be used for string data. True by\ndefault.\n"},
  {(char*)"SetPrecision", PyvtkCSVWriter_SetPrecision, METH_VARARGS,
   (char*)"V.SetPrecision(int)\nC++: void SetPrecision(int)\n\nGet/Set the precision to use for printing numeric values. Default\nis 5.\n"},
  {(char*)"GetPrecisionMinValue", PyvtkCSVWriter_GetPrecisionMinValue, METH_VARARGS,
   (char*)"V.GetPrecisionMinValue() -> int\nC++: int GetPrecisionMinValue()\n\nGet/Set the precision to use for printing numeric values. Default\nis 5.\n"},
  {(char*)"GetPrecisionMaxValue", PyvtkCSVWriter_GetPrecisionMaxValue, METH_VARARGS,
   (char*)"V.GetPrecisionMaxValue() -> int\nC++: int GetPrecisionMaxValue()\n\nGet/Set the precision to use for printing numeric values. Default\nis 5.\n"},
  {(char*)"GetPrecision", PyvtkCSVWriter_GetPrecision, METH_VARARGS,
   (char*)"V.GetPrecision() -> int\nC++: int GetPrecision()\n\nGet/Set the precision to use for printing numeric values. Default\nis 5.\n"},
  {(char*)"SetUseScientificNotation", PyvtkCSVWriter_SetUseScientificNotation, METH_VARARGS,
   (char*)"V.SetUseScientificNotation(bool)\nC++: void SetUseScientificNotation(bool a)\n\nGet/Set whether scientific notation is used for numeric values.\n"},
  {(char*)"GetUseScientificNotation", PyvtkCSVWriter_GetUseScientificNotation, METH_VARARGS,
   (char*)"V.GetUseScientificNotation() -> bool\nC++: bool GetUseScientificNotation()\n\nGet/Set whether scientific notation is used for numeric values.\n"},
  {(char*)"UseScientificNotationOn", PyvtkCSVWriter_UseScientificNotationOn, METH_VARARGS,
   (char*)"V.UseScientificNotationOn()\nC++: void UseScientificNotationOn()\n\nGet/Set whether scientific notation is used for numeric values.\n"},
  {(char*)"UseScientificNotationOff", PyvtkCSVWriter_UseScientificNotationOff, METH_VARARGS,
   (char*)"V.UseScientificNotationOff()\nC++: void UseScientificNotationOff()\n\nGet/Set whether scientific notation is used for numeric values.\n"},
  {(char*)"GetString", PyvtkCSVWriter_GetString, METH_VARARGS,
   (char*)"V.GetString(string) -> string\nC++: vtkStdString GetString(vtkStdString string)\n\nInternal method: decortes the \"string\" with the \"StringDelimiter\"\nif UseStringDelimiter is true.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCSVWriter_StaticNew()
{
  return vtkCSVWriter::New();
}

PyObject *PyVTKClass_vtkCSVWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCSVWriter_StaticNew,
    PyvtkCSVWriter_Methods,
    "vtkCSVWriter", modulename,
    NULL, NULL,
    PyvtkCSVWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkCSVWriter_Doc()
{
  static const char *docstring[] = {
    "vtkCSVWriter - CSV writer for vtkTable\n\n",
    "Superclass: vtkWriter\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCSVWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCSVWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCSVWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

