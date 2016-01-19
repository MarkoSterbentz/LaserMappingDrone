// python wrapper for vtkDataObjectWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkDataObjectWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataObjectWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataObjectWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkDataObjectWriter_Doc();


static PyObject *
PyvtkDataObjectWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataObjectWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObjectWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObjectWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObjectWriter::NewInstance());

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
PyvtkDataObjectWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataObjectWriter *tempr = vtkDataObjectWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

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
      op->vtkDataObjectWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDataObjectWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeader(temp0);
      }
    else
      {
      op->vtkDataObjectWriter::SetHeader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetHeader() :
      op->vtkDataObjectWriter::GetHeader());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileType(temp0);
      }
    else
      {
      op->vtkDataObjectWriter::SetFileType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFileType() :
      op->vtkDataObjectWriter::GetFileType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFileTypeToASCII(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToASCII");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileTypeToASCII();
      }
    else
      {
      op->vtkDataObjectWriter::SetFileTypeToASCII();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFileTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileTypeToBinary();
      }
    else
      {
      op->vtkDataObjectWriter::SetFileTypeToBinary();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  int temp0;
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
      op->vtkDataObjectWriter::SetWriteToOutputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOn();
      }
    else
      {
      op->vtkDataObjectWriter::WriteToOutputStringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOff();
      }
    else
      {
      op->vtkDataObjectWriter::WriteToOutputStringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkDataObjectWriter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetOutputString() :
      op->vtkDataObjectWriter::GetOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetOutputStdString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStdString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetOutputStdString() :
      op->vtkDataObjectWriter::GetOutputStdString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetOutputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputStringLength() :
      op->vtkDataObjectWriter::GetOutputStringLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetBinaryOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryOutputString() :
      op->vtkDataObjectWriter::GetBinaryOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldDataName(temp0);
      }
    else
      {
      op->vtkDataObjectWriter::SetFieldDataName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDataName() :
      op->vtkDataObjectWriter::GetFieldDataName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataObjectWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkDataObjectWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataObjectWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataObjectWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataObjectWriter\nC++: vtkDataObjectWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataObjectWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataObjectWriter\nC++: vtkDataObjectWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkDataObjectWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(const char *filename)\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"GetFileName", PyvtkDataObjectWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"SetHeader", PyvtkDataObjectWriter_SetHeader, METH_VARARGS,
   (char*)"V.SetHeader(string)\nC++: void SetHeader(const char *header)\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"GetHeader", PyvtkDataObjectWriter_GetHeader, METH_VARARGS,
   (char*)"V.GetHeader() -> string\nC++: char *GetHeader()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"SetFileType", PyvtkDataObjectWriter_SetFileType, METH_VARARGS,
   (char*)"V.SetFileType(int)\nC++: void SetFileType(int type)\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"GetFileType", PyvtkDataObjectWriter_GetFileType, METH_VARARGS,
   (char*)"V.GetFileType() -> int\nC++: int GetFileType()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"SetFileTypeToASCII", PyvtkDataObjectWriter_SetFileTypeToASCII, METH_VARARGS,
   (char*)"V.SetFileTypeToASCII()\nC++: void SetFileTypeToASCII()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"SetFileTypeToBinary", PyvtkDataObjectWriter_SetFileTypeToBinary, METH_VARARGS,
   (char*)"V.SetFileTypeToBinary()\nC++: void SetFileTypeToBinary()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"SetWriteToOutputString", PyvtkDataObjectWriter_SetWriteToOutputString, METH_VARARGS,
   (char*)"V.SetWriteToOutputString(int)\nC++: void SetWriteToOutputString(int b)\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"WriteToOutputStringOn", PyvtkDataObjectWriter_WriteToOutputStringOn, METH_VARARGS,
   (char*)"V.WriteToOutputStringOn()\nC++: void WriteToOutputStringOn()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"WriteToOutputStringOff", PyvtkDataObjectWriter_WriteToOutputStringOff, METH_VARARGS,
   (char*)"V.WriteToOutputStringOff()\nC++: void WriteToOutputStringOff()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"GetWriteToOutputString", PyvtkDataObjectWriter_GetWriteToOutputString, METH_VARARGS,
   (char*)"V.GetWriteToOutputString() -> int\nC++: int GetWriteToOutputString()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"GetOutputString", PyvtkDataObjectWriter_GetOutputString, METH_VARARGS,
   (char*)"V.GetOutputString() -> string\nC++: char *GetOutputString()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"GetOutputStdString", PyvtkDataObjectWriter_GetOutputStdString, METH_VARARGS,
   (char*)"V.GetOutputStdString() -> string\nC++: vtkStdString GetOutputStdString()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"GetOutputStringLength", PyvtkDataObjectWriter_GetOutputStringLength, METH_VARARGS,
   (char*)"V.GetOutputStringLength() -> int\nC++: int GetOutputStringLength()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"GetBinaryOutputString", PyvtkDataObjectWriter_GetBinaryOutputString, METH_VARARGS,
   (char*)"V.GetBinaryOutputString() -> (int, ...)\nC++: unsigned char *GetBinaryOutputString()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"SetFieldDataName", PyvtkDataObjectWriter_SetFieldDataName, METH_VARARGS,
   (char*)"V.SetFieldDataName(string)\nC++: void SetFieldDataName(const char *fieldname)\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {(char*)"GetFieldDataName", PyvtkDataObjectWriter_GetFieldDataName, METH_VARARGS,
   (char*)"V.GetFieldDataName() -> string\nC++: char *GetFieldDataName()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataObjectWriter_StaticNew()
{
  return vtkDataObjectWriter::New();
}

PyObject *PyVTKClass_vtkDataObjectWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataObjectWriter_StaticNew,
    PyvtkDataObjectWriter_Methods,
    "vtkDataObjectWriter", modulename,
    NULL, NULL,
    PyvtkDataObjectWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkDataObjectWriter_Doc()
{
  static const char *docstring[] = {
    "vtkDataObjectWriter - write vtk field data\n\n",
    "Superclass: vtkWriter\n\n",
    "vtkDataObjectWriter is a source object that writes ASCII or binary\nfield data files in vtk format. Field data is a general form of data\nin matrix form.\n\nCaveats:\n\nBinary files written on one system may not be readable on other\nsystems.\n\nSee Also:\n\nvtkFieldData vtkFieldDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataObjectWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataObjectWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataObjectWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

