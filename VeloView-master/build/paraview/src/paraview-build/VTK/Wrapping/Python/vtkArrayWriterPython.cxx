// python wrapper for vtkArrayWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkArrayWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkArrayWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkArrayWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkArrayWriter_Doc();


static PyObject *
PyvtkArrayWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkArrayWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArrayWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayWriter::NewInstance());

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
PyvtkArrayWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkArrayWriter *tempr = vtkArrayWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

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
      op->vtkArrayWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkArrayWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_SetBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBinary(temp0);
      }
    else
      {
      op->vtkArrayWriter::SetBinary(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_GetBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBinary() :
      op->vtkArrayWriter::GetBinary());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_BinaryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryOn();
      }
    else
      {
      op->vtkArrayWriter::BinaryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_BinaryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryOff();
      }
    else
      {
      op->vtkArrayWriter::BinaryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetOutputString() :
      op->vtkArrayWriter::GetOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

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
      op->vtkArrayWriter::SetWriteToOutputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkArrayWriter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOn();
      }
    else
      {
      op->vtkArrayWriter::WriteToOutputStringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOff();
      }
    else
      {
      op->vtkArrayWriter::WriteToOutputStringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayWriter_Write_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Write() :
      op->vtkArrayWriter::Write());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkArrayWriter_Write_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  vtkStdString temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    bool tempr = (ap.IsBound() ?
      op->Write(temp0, temp1) :
      op->vtkArrayWriter::Write(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkArrayWriter_Write_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Write");

  vtkArray *temp0 = NULL;
  vtkStdString temp1;
  bool temp2 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    bool tempr = vtkArrayWriter::Write(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkArrayWriter_Write_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayWriter *op = static_cast<vtkArrayWriter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->Write(temp0) :
      op->vtkArrayWriter::Write(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkArrayWriter_Write_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Write");

  vtkArray *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkStdString tempr = vtkArrayWriter::Write(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkArrayWriter_Write_Methods[] = {
  {NULL, PyvtkArrayWriter_Write_s2, METH_VARARGS,
   (char*)"@s|O bool"},
  {NULL, PyvtkArrayWriter_Write_s3, METH_VARARGS | METH_STATIC,
   (char*)"Os|O *vtkArray bool"},
  {NULL, PyvtkArrayWriter_Write_s4, METH_VARARGS,
   (char*)"@O bool"},
  {NULL, PyvtkArrayWriter_Write_s5, METH_VARARGS | METH_STATIC,
   (char*)"O|O *vtkArray bool"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkArrayWriter_Write(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayWriter_Write_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkArrayWriter_Write_s1(self, args);
    case 1:
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Write");
  return NULL;
}


static PyMethodDef PyvtkArrayWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkArrayWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArrayWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArrayWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkArrayWriter\nC++: vtkArrayWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkArrayWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkArrayWriter\nC++: vtkArrayWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkArrayWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet / set the filename where data will be stored (when used as a\nfilter).\n"},
  {(char*)"GetFileName", PyvtkArrayWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet / set the filename where data will be stored (when used as a\nfilter).\n"},
  {(char*)"SetBinary", PyvtkArrayWriter_SetBinary, METH_VARARGS,
   (char*)"V.SetBinary(int)\nC++: void SetBinary(int a)\n\nGet / set whether data will be written in binary format (when\nused as a filter).\n"},
  {(char*)"GetBinary", PyvtkArrayWriter_GetBinary, METH_VARARGS,
   (char*)"V.GetBinary() -> int\nC++: int GetBinary()\n\nGet / set whether data will be written in binary format (when\nused as a filter).\n"},
  {(char*)"BinaryOn", PyvtkArrayWriter_BinaryOn, METH_VARARGS,
   (char*)"V.BinaryOn()\nC++: void BinaryOn()\n\nGet / set whether data will be written in binary format (when\nused as a filter).\n"},
  {(char*)"BinaryOff", PyvtkArrayWriter_BinaryOff, METH_VARARGS,
   (char*)"V.BinaryOff()\nC++: void BinaryOff()\n\nGet / set whether data will be written in binary format (when\nused as a filter).\n"},
  {(char*)"GetOutputString", PyvtkArrayWriter_GetOutputString, METH_VARARGS,
   (char*)"V.GetOutputString() -> string\nC++: virtual vtkStdString GetOutputString()\n\nThe output string. This is only set when WriteToOutputString is\nset.\n"},
  {(char*)"SetWriteToOutputString", PyvtkArrayWriter_SetWriteToOutputString, METH_VARARGS,
   (char*)"V.SetWriteToOutputString(bool)\nC++: void SetWriteToOutputString(bool a)\n\nWhether to output to a string instead of to a file, which is the\ndefault.\n"},
  {(char*)"GetWriteToOutputString", PyvtkArrayWriter_GetWriteToOutputString, METH_VARARGS,
   (char*)"V.GetWriteToOutputString() -> bool\nC++: bool GetWriteToOutputString()\n\nWhether to output to a string instead of to a file, which is the\ndefault.\n"},
  {(char*)"WriteToOutputStringOn", PyvtkArrayWriter_WriteToOutputStringOn, METH_VARARGS,
   (char*)"V.WriteToOutputStringOn()\nC++: void WriteToOutputStringOn()\n\nWhether to output to a string instead of to a file, which is the\ndefault.\n"},
  {(char*)"WriteToOutputStringOff", PyvtkArrayWriter_WriteToOutputStringOff, METH_VARARGS,
   (char*)"V.WriteToOutputStringOff()\nC++: void WriteToOutputStringOff()\n\nWhether to output to a string instead of to a file, which is the\ndefault.\n"},
  {(char*)"Write", PyvtkArrayWriter_Write, METH_VARARGS,
   (char*)"V.Write() -> int\nC++: virtual int Write()\nV.Write(string, bool) -> bool\nC++: bool Write(const vtkStdString &FileName,\n    bool WriteBinary=false)\nV.Write(vtkArray, string, bool) -> bool\nC++: static bool Write(vtkArray *array,\n    const vtkStdString &file_name, bool WriteBinary=false)\nV.Write(bool) -> string\nC++: vtkStdString Write(bool WriteBinary)\nV.Write(vtkArray, bool) -> string\nC++: static vtkStdString Write(vtkArray *array,\n    bool WriteBinary=false)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkArrayWriter_StaticNew()
{
  return vtkArrayWriter::New();
}

PyObject *PyVTKClass_vtkArrayWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkArrayWriter_StaticNew,
    PyvtkArrayWriter_Methods,
    "vtkArrayWriter", modulename,
    NULL, NULL,
    PyvtkArrayWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkArrayWriter_Doc()
{
  static const char *docstring[] = {
    "vtkArrayWriter - Serialize sparse and dense arrays to a file or\nstream.\n\n",
    "Superclass: vtkWriter\n\n",
    "vtkArrayWriter serializes sparse and dense array data using a\ntext-based format that is human-readable and easily parsed (default\noption).  The WriteBinary array option can be used to serialize the\nsparse and dense array data using a binary format that is optimized\nfor rapid throughput.\n\nvtkArrayWriter can be used in two distinct ways: first, it can be\nused as a normal pipeline filter, which write",
    "s its inputs to a file. \nAlternatively, static methods are provided for writing vtkArray\ninstances to files or arbitrary c++ streams.\n\nInputs:\n  Input port 0: (required) vtkArrayData object containing a single\nsparse or dense\n                           array.\n\nOutput Format:\n  See\nhttp://www.kitware.com/InfovisWiki/index.php/N-Way_Array_File_Formats\nfor\n  details on how vtkArrayWriter encodes data",
    ".\n\nSee Also:\n\nvtkArrayReader\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrayWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArrayWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrayWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

