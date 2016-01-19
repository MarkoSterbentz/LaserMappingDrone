// python wrapper for vtkArrayDataWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkArrayDataWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkArrayDataWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkArrayDataWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkArrayDataWriter_Doc();


static PyObject *
PyvtkArrayDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkArrayDataWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArrayDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayDataWriter::NewInstance());

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
PyvtkArrayDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkArrayDataWriter *tempr = vtkArrayDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

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
      op->vtkArrayDataWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkArrayDataWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_SetBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

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
      op->vtkArrayDataWriter::SetBinary(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_GetBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBinary() :
      op->vtkArrayDataWriter::GetBinary());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_BinaryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryOn();
      }
    else
      {
      op->vtkArrayDataWriter::BinaryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_BinaryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryOff();
      }
    else
      {
      op->vtkArrayDataWriter::BinaryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetOutputString() :
      op->vtkArrayDataWriter::GetOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

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
      op->vtkArrayDataWriter::SetWriteToOutputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkArrayDataWriter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOn();
      }
    else
      {
      op->vtkArrayDataWriter::WriteToOutputStringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOff();
      }
    else
      {
      op->vtkArrayDataWriter::WriteToOutputStringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_Write_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Write() :
      op->vtkArrayDataWriter::Write());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkArrayDataWriter_Write_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  vtkStdString temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    bool tempr = (ap.IsBound() ?
      op->Write(temp0, temp1) :
      op->vtkArrayDataWriter::Write(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkArrayDataWriter_Write_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Write");

  vtkArrayData *temp0 = NULL;
  vtkStdString temp1;
  bool temp2 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkArrayData") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    bool tempr = vtkArrayDataWriter::Write(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkArrayDataWriter_Write_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->Write(temp0) :
      op->vtkArrayDataWriter::Write(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkArrayDataWriter_Write_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Write");

  vtkArrayData *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkArrayData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkStdString tempr = vtkArrayDataWriter::Write(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkArrayDataWriter_Write_Methods[] = {
  {NULL, PyvtkArrayDataWriter_Write_s2, METH_VARARGS,
   (char*)"@s|O bool"},
  {NULL, PyvtkArrayDataWriter_Write_s3, METH_VARARGS | METH_STATIC,
   (char*)"Os|O *vtkArrayData bool"},
  {NULL, PyvtkArrayDataWriter_Write_s4, METH_VARARGS,
   (char*)"@O bool"},
  {NULL, PyvtkArrayDataWriter_Write_s5, METH_VARARGS | METH_STATIC,
   (char*)"O|O *vtkArrayData bool"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkArrayDataWriter_Write(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayDataWriter_Write_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkArrayDataWriter_Write_s1(self, args);
    case 1:
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Write");
  return NULL;
}


static PyMethodDef PyvtkArrayDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkArrayDataWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArrayDataWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArrayDataWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkArrayDataWriter\nC++: vtkArrayDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkArrayDataWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkArrayDataWriter\nC++: vtkArrayDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkArrayDataWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet / set the filename where data will be stored (when used as a\nfilter).\n"},
  {(char*)"GetFileName", PyvtkArrayDataWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet / set the filename where data will be stored (when used as a\nfilter).\n"},
  {(char*)"SetBinary", PyvtkArrayDataWriter_SetBinary, METH_VARARGS,
   (char*)"V.SetBinary(int)\nC++: void SetBinary(int a)\n\nGet / set whether data will be written in binary format (when\nused as a filter).\n"},
  {(char*)"GetBinary", PyvtkArrayDataWriter_GetBinary, METH_VARARGS,
   (char*)"V.GetBinary() -> int\nC++: int GetBinary()\n\nGet / set whether data will be written in binary format (when\nused as a filter).\n"},
  {(char*)"BinaryOn", PyvtkArrayDataWriter_BinaryOn, METH_VARARGS,
   (char*)"V.BinaryOn()\nC++: void BinaryOn()\n\nGet / set whether data will be written in binary format (when\nused as a filter).\n"},
  {(char*)"BinaryOff", PyvtkArrayDataWriter_BinaryOff, METH_VARARGS,
   (char*)"V.BinaryOff()\nC++: void BinaryOff()\n\nGet / set whether data will be written in binary format (when\nused as a filter).\n"},
  {(char*)"GetOutputString", PyvtkArrayDataWriter_GetOutputString, METH_VARARGS,
   (char*)"V.GetOutputString() -> string\nC++: virtual vtkStdString GetOutputString()\n\nThe output string. This is only set when WriteToOutputString is\nset.\n"},
  {(char*)"SetWriteToOutputString", PyvtkArrayDataWriter_SetWriteToOutputString, METH_VARARGS,
   (char*)"V.SetWriteToOutputString(bool)\nC++: void SetWriteToOutputString(bool a)\n\nWhether to output to a string instead of to a file, which is the\ndefault.\n"},
  {(char*)"GetWriteToOutputString", PyvtkArrayDataWriter_GetWriteToOutputString, METH_VARARGS,
   (char*)"V.GetWriteToOutputString() -> bool\nC++: bool GetWriteToOutputString()\n\nWhether to output to a string instead of to a file, which is the\ndefault.\n"},
  {(char*)"WriteToOutputStringOn", PyvtkArrayDataWriter_WriteToOutputStringOn, METH_VARARGS,
   (char*)"V.WriteToOutputStringOn()\nC++: void WriteToOutputStringOn()\n\nWhether to output to a string instead of to a file, which is the\ndefault.\n"},
  {(char*)"WriteToOutputStringOff", PyvtkArrayDataWriter_WriteToOutputStringOff, METH_VARARGS,
   (char*)"V.WriteToOutputStringOff()\nC++: void WriteToOutputStringOff()\n\nWhether to output to a string instead of to a file, which is the\ndefault.\n"},
  {(char*)"Write", PyvtkArrayDataWriter_Write, METH_VARARGS,
   (char*)"V.Write() -> int\nC++: virtual int Write()\nV.Write(string, bool) -> bool\nC++: bool Write(const vtkStdString &FileName,\n    bool WriteBinary=false)\nV.Write(vtkArrayData, string, bool) -> bool\nC++: static bool Write(vtkArrayData *array,\n    const vtkStdString &file_name, bool WriteBinary=false)\nV.Write(bool) -> string\nC++: vtkStdString Write(bool WriteBinary)\nV.Write(vtkArrayData, bool) -> string\nC++: static vtkStdString Write(vtkArrayData *array,\n    bool WriteBinary=false)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkArrayDataWriter_StaticNew()
{
  return vtkArrayDataWriter::New();
}

PyObject *PyVTKClass_vtkArrayDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkArrayDataWriter_StaticNew,
    PyvtkArrayDataWriter_Methods,
    "vtkArrayDataWriter", modulename,
    NULL, NULL,
    PyvtkArrayDataWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkArrayDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkArrayDataWriter - Serialize vtkArrayData to a file or stream.\n\n",
    "Superclass: vtkWriter\n\n",
    "vtkArrayDataWriter serializes vtkArrayData using a text-based format\nthat is human-readable and easily parsed (default option).  The\nWriteBinary array option can be used to serialize the vtkArrayData\nusing a binary format that is optimized for rapid throughput.\n\nvtkArrayDataWriter can be used in two distinct ways: first, it can be\nused as a normal pipeline filter, which writes its inputs to a file",
    ". \nAlternatively, static methods are provided for writing vtkArrayData\ninstances to files or arbitrary c++ streams.\n\nInputs:\n  Input port 0: (required) vtkArrayData object.\n\nOutput Format:\n  See\nhttp://www.kitware.com/InfovisWiki/index.php/N-Way_Array_File_Formats\nfor\n  details on how vtkArrayDataWriter encodes data.\n\nSee Also:\n\nvtkArrayDataReader\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sa",
    "ndia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrayDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArrayDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrayDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

