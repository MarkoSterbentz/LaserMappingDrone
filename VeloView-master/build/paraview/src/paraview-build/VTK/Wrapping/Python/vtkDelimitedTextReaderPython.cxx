// python wrapper for vtkDelimitedTextReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkUnicodeString.h"
#include "vtkDelimitedTextReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDelimitedTextReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDelimitedTextReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkDelimitedTextReader_Doc();


static PyObject *
PyvtkDelimitedTextReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDelimitedTextReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDelimitedTextReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDelimitedTextReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDelimitedTextReader::NewInstance());

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
PyvtkDelimitedTextReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDelimitedTextReader *tempr = vtkDelimitedTextReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDelimitedTextReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

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
      op->vtkDelimitedTextReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetInputString() :
      op->vtkDelimitedTextReader::GetInputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetInputString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputString(temp0, temp1);
      }
    else
      {
      op->vtkDelimitedTextReader::SetInputString(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDelimitedTextReader_SetInputString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

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
      op->vtkDelimitedTextReader::SetInputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDelimitedTextReader_SetInputString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDelimitedTextReader_SetInputString_s1(self, args);
    case 1:
      return PyvtkDelimitedTextReader_SetInputString_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputString");
  return NULL;
}



static PyObject *
PyvtkDelimitedTextReader_GetInputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInputStringLength() :
      op->vtkDelimitedTextReader::GetInputStringLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  int temp0;
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
      op->vtkDelimitedTextReader::SetReadFromInputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReadFromInputString() :
      op->vtkDelimitedTextReader::GetReadFromInputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_ReadFromInputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadFromInputStringOn();
      }
    else
      {
      op->vtkDelimitedTextReader::ReadFromInputStringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_ReadFromInputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadFromInputStringOff();
      }
    else
      {
      op->vtkDelimitedTextReader::ReadFromInputStringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUnicodeCharacterSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnicodeCharacterSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetUnicodeCharacterSet() :
      op->vtkDelimitedTextReader::GetUnicodeCharacterSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUnicodeCharacterSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnicodeCharacterSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUnicodeCharacterSet(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetUnicodeCharacterSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUTF8RecordDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUTF8RecordDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUTF8RecordDelimiters(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetUTF8RecordDelimiters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUTF8RecordDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUTF8RecordDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetUTF8RecordDelimiters() :
      op->vtkDelimitedTextReader::GetUTF8RecordDelimiters());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUnicodeRecordDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnicodeRecordDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUnicodeRecordDelimiters(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetUnicodeRecordDelimiters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUnicodeRecordDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnicodeRecordDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnicodeString tempr = (ap.IsBound() ?
      op->GetUnicodeRecordDelimiters() :
      op->vtkDelimitedTextReader::GetUnicodeRecordDelimiters());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetFieldDelimiterCharacters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDelimiterCharacters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldDelimiterCharacters(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetFieldDelimiterCharacters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetFieldDelimiterCharacters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDelimiterCharacters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDelimiterCharacters() :
      op->vtkDelimitedTextReader::GetFieldDelimiterCharacters());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUTF8FieldDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUTF8FieldDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUTF8FieldDelimiters(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetUTF8FieldDelimiters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUTF8FieldDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUTF8FieldDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetUTF8FieldDelimiters() :
      op->vtkDelimitedTextReader::GetUTF8FieldDelimiters());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUnicodeFieldDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnicodeFieldDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUnicodeFieldDelimiters(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetUnicodeFieldDelimiters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUnicodeFieldDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnicodeFieldDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnicodeString tempr = (ap.IsBound() ?
      op->GetUnicodeFieldDelimiters() :
      op->vtkDelimitedTextReader::GetUnicodeFieldDelimiters());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char tempr = (ap.IsBound() ?
      op->GetStringDelimiter() :
      op->vtkDelimitedTextReader::GetStringDelimiter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char temp0;
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
      op->vtkDelimitedTextReader::SetStringDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUTF8StringDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUTF8StringDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUTF8StringDelimiters(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetUTF8StringDelimiters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUTF8StringDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUTF8StringDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetUTF8StringDelimiters() :
      op->vtkDelimitedTextReader::GetUTF8StringDelimiters());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUnicodeStringDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnicodeStringDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUnicodeStringDelimiters(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetUnicodeStringDelimiters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUnicodeStringDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnicodeStringDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnicodeString tempr = (ap.IsBound() ?
      op->GetUnicodeStringDelimiters() :
      op->vtkDelimitedTextReader::GetUnicodeStringDelimiters());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

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
      op->vtkDelimitedTextReader::SetUseStringDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseStringDelimiter() :
      op->vtkDelimitedTextReader::GetUseStringDelimiter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_UseStringDelimiterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStringDelimiterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseStringDelimiterOn();
      }
    else
      {
      op->vtkDelimitedTextReader::UseStringDelimiterOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_UseStringDelimiterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStringDelimiterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseStringDelimiterOff();
      }
    else
      {
      op->vtkDelimitedTextReader::UseStringDelimiterOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetHaveHeaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHaveHeaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetHaveHeaders() :
      op->vtkDelimitedTextReader::GetHaveHeaders());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetHaveHeaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHaveHeaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHaveHeaders(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetHaveHeaders(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetMergeConsecutiveDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeConsecutiveDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMergeConsecutiveDelimiters(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetMergeConsecutiveDelimiters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetMergeConsecutiveDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeConsecutiveDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetMergeConsecutiveDelimiters() :
      op->vtkDelimitedTextReader::GetMergeConsecutiveDelimiters());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_MergeConsecutiveDelimitersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeConsecutiveDelimitersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergeConsecutiveDelimitersOn();
      }
    else
      {
      op->vtkDelimitedTextReader::MergeConsecutiveDelimitersOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_MergeConsecutiveDelimitersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeConsecutiveDelimitersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergeConsecutiveDelimitersOff();
      }
    else
      {
      op->vtkDelimitedTextReader::MergeConsecutiveDelimitersOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxRecords() :
      op->vtkDelimitedTextReader::GetMaxRecords());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxRecords(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetMaxRecords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetDetectNumericColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDetectNumericColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDetectNumericColumns(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetDetectNumericColumns(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetDetectNumericColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDetectNumericColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDetectNumericColumns() :
      op->vtkDelimitedTextReader::GetDetectNumericColumns());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_DetectNumericColumnsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetectNumericColumnsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DetectNumericColumnsOn();
      }
    else
      {
      op->vtkDelimitedTextReader::DetectNumericColumnsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_DetectNumericColumnsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetectNumericColumnsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DetectNumericColumnsOff();
      }
    else
      {
      op->vtkDelimitedTextReader::DetectNumericColumnsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetForceDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForceDouble(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetForceDouble(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetForceDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetForceDouble() :
      op->vtkDelimitedTextReader::GetForceDouble());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_ForceDoubleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceDoubleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceDoubleOn();
      }
    else
      {
      op->vtkDelimitedTextReader::ForceDoubleOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_ForceDoubleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceDoubleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceDoubleOff();
      }
    else
      {
      op->vtkDelimitedTextReader::ForceDoubleOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetTrimWhitespacePriorToNumericConversion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrimWhitespacePriorToNumericConversion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTrimWhitespacePriorToNumericConversion(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetTrimWhitespacePriorToNumericConversion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetTrimWhitespacePriorToNumericConversion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrimWhitespacePriorToNumericConversion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetTrimWhitespacePriorToNumericConversion() :
      op->vtkDelimitedTextReader::GetTrimWhitespacePriorToNumericConversion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_TrimWhitespacePriorToNumericConversionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TrimWhitespacePriorToNumericConversionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TrimWhitespacePriorToNumericConversionOn();
      }
    else
      {
      op->vtkDelimitedTextReader::TrimWhitespacePriorToNumericConversionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_TrimWhitespacePriorToNumericConversionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TrimWhitespacePriorToNumericConversionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TrimWhitespacePriorToNumericConversionOff();
      }
    else
      {
      op->vtkDelimitedTextReader::TrimWhitespacePriorToNumericConversionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetDefaultIntegerValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultIntegerValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultIntegerValue(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetDefaultIntegerValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetDefaultIntegerValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultIntegerValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDefaultIntegerValue() :
      op->vtkDelimitedTextReader::GetDefaultIntegerValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetDefaultDoubleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultDoubleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultDoubleValue(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetDefaultDoubleValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetDefaultDoubleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultDoubleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDefaultDoubleValue() :
      op->vtkDelimitedTextReader::GetDefaultDoubleValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPedigreeIdArrayName(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetPedigreeIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPedigreeIdArrayName() :
      op->vtkDelimitedTextReader::GetPedigreeIdArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePedigreeIds(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetGeneratePedigreeIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePedigreeIds() :
      op->vtkDelimitedTextReader::GetGeneratePedigreeIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GeneratePedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePedigreeIdsOn();
      }
    else
      {
      op->vtkDelimitedTextReader::GeneratePedigreeIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GeneratePedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePedigreeIdsOff();
      }
    else
      {
      op->vtkDelimitedTextReader::GeneratePedigreeIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetOutputPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPedigreeIds(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetOutputPedigreeIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetOutputPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetOutputPedigreeIds() :
      op->vtkDelimitedTextReader::GetOutputPedigreeIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_OutputPedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputPedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputPedigreeIdsOn();
      }
    else
      {
      op->vtkDelimitedTextReader::OutputPedigreeIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_OutputPedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputPedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputPedigreeIdsOff();
      }
    else
      {
      op->vtkDelimitedTextReader::OutputPedigreeIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetLastError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetLastError() :
      op->vtkDelimitedTextReader::GetLastError());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetReplacementCharacter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplacementCharacter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReplacementCharacter(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetReplacementCharacter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetReplacementCharacter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementCharacter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetReplacementCharacter() :
      op->vtkDelimitedTextReader::GetReplacementCharacter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDelimitedTextReader_Methods[] = {
  {(char*)"GetClassName", PyvtkDelimitedTextReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDelimitedTextReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDelimitedTextReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDelimitedTextReader\nC++: vtkDelimitedTextReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDelimitedTextReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDelimitedTextReader\nC++: vtkDelimitedTextReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkDelimitedTextReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecifies the delimited text file to be loaded.\n"},
  {(char*)"SetFileName", PyvtkDelimitedTextReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecifies the delimited text file to be loaded.\n"},
  {(char*)"GetInputString", PyvtkDelimitedTextReader_GetInputString, METH_VARARGS,
   (char*)"V.GetInputString() -> string\nC++: char *GetInputString()\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {(char*)"SetInputString", PyvtkDelimitedTextReader_SetInputString, METH_VARARGS,
   (char*)"V.SetInputString(string, int)\nC++: void SetInputString(const char *in, int len)\nV.SetInputString(string)\nC++: void SetInputString(const vtkStdString &input)\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {(char*)"GetInputStringLength", PyvtkDelimitedTextReader_GetInputStringLength, METH_VARARGS,
   (char*)"V.GetInputStringLength() -> int\nC++: int GetInputStringLength()\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {(char*)"SetReadFromInputString", PyvtkDelimitedTextReader_SetReadFromInputString, METH_VARARGS,
   (char*)"V.SetReadFromInputString(int)\nC++: void SetReadFromInputString(int a)\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {(char*)"GetReadFromInputString", PyvtkDelimitedTextReader_GetReadFromInputString, METH_VARARGS,
   (char*)"V.GetReadFromInputString() -> int\nC++: int GetReadFromInputString()\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {(char*)"ReadFromInputStringOn", PyvtkDelimitedTextReader_ReadFromInputStringOn, METH_VARARGS,
   (char*)"V.ReadFromInputStringOn()\nC++: void ReadFromInputStringOn()\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {(char*)"ReadFromInputStringOff", PyvtkDelimitedTextReader_ReadFromInputStringOff, METH_VARARGS,
   (char*)"V.ReadFromInputStringOff()\nC++: void ReadFromInputStringOff()\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {(char*)"GetUnicodeCharacterSet", PyvtkDelimitedTextReader_GetUnicodeCharacterSet, METH_VARARGS,
   (char*)"V.GetUnicodeCharacterSet() -> string\nC++: char *GetUnicodeCharacterSet()\n\nSpecifies the character set used in the input file.  Valid\ncharacter set names will be drawn from the list maintained by the\nInternet Assigned Name Authority at\n\n\n  http://www.iana.org/assignments/character-sets\n\nWhere multiple aliases are provided for a character set, the\npreferred MIME name will be used.  vtkUnicodeDelimitedTextReader\ncurrently supports \"US-ASCII\", \"UTF-8\", \"UTF-16\", \"UTF-16BE\", and\n\"UTF-16LE\" character sets.\n"},
  {(char*)"SetUnicodeCharacterSet", PyvtkDelimitedTextReader_SetUnicodeCharacterSet, METH_VARARGS,
   (char*)"V.SetUnicodeCharacterSet(string)\nC++: void SetUnicodeCharacterSet(char *)\n\nSpecifies the character set used in the input file.  Valid\ncharacter set names will be drawn from the list maintained by the\nInternet Assigned Name Authority at\n\n\n  http://www.iana.org/assignments/character-sets\n\nWhere multiple aliases are provided for a character set, the\npreferred MIME name will be used.  vtkUnicodeDelimitedTextReader\ncurrently supports \"US-ASCII\", \"UTF-8\", \"UTF-16\", \"UTF-16BE\", and\n\"UTF-16LE\" character sets.\n"},
  {(char*)"SetUTF8RecordDelimiters", PyvtkDelimitedTextReader_SetUTF8RecordDelimiters, METH_VARARGS,
   (char*)"V.SetUTF8RecordDelimiters(string)\nC++: void SetUTF8RecordDelimiters(const char *delimiters)\n\nSpecify the character(s) that will be used to separate records.\nThe order of characters in the string does not matter.  Defaults\nto \"\\r\\n\".\n"},
  {(char*)"GetUTF8RecordDelimiters", PyvtkDelimitedTextReader_GetUTF8RecordDelimiters, METH_VARARGS,
   (char*)"V.GetUTF8RecordDelimiters() -> string\nC++: const char *GetUTF8RecordDelimiters()\n\nSpecify the character(s) that will be used to separate records.\nThe order of characters in the string does not matter.  Defaults\nto \"\\r\\n\".\n"},
  {(char*)"SetUnicodeRecordDelimiters", PyvtkDelimitedTextReader_SetUnicodeRecordDelimiters, METH_VARARGS,
   (char*)"V.SetUnicodeRecordDelimiters(unicode)\nC++: void SetUnicodeRecordDelimiters(\n    const vtkUnicodeString &delimiters)\n\nSpecify the character(s) that will be used to separate records.\nThe order of characters in the string does not matter.  Defaults\nto \"\\r\\n\".\n"},
  {(char*)"GetUnicodeRecordDelimiters", PyvtkDelimitedTextReader_GetUnicodeRecordDelimiters, METH_VARARGS,
   (char*)"V.GetUnicodeRecordDelimiters() -> unicode\nC++: vtkUnicodeString GetUnicodeRecordDelimiters()\n\nSpecify the character(s) that will be used to separate records.\nThe order of characters in the string does not matter.  Defaults\nto \"\\r\\n\".\n"},
  {(char*)"SetFieldDelimiterCharacters", PyvtkDelimitedTextReader_SetFieldDelimiterCharacters, METH_VARARGS,
   (char*)"V.SetFieldDelimiterCharacters(string)\nC++: void SetFieldDelimiterCharacters(char *)\n\nSpecify the character(s) that will be used to separate fields. \nFor example, set this to \",\" for a comma-separated value file. \nSet it to \".:;\" for a file where columns can be separated by a\nperiod, colon or semicolon.  The order of the characters in the\nstring does not matter.  Defaults to a comma.\n"},
  {(char*)"GetFieldDelimiterCharacters", PyvtkDelimitedTextReader_GetFieldDelimiterCharacters, METH_VARARGS,
   (char*)"V.GetFieldDelimiterCharacters() -> string\nC++: char *GetFieldDelimiterCharacters()\n\nSpecify the character(s) that will be used to separate fields. \nFor example, set this to \",\" for a comma-separated value file. \nSet it to \".:;\" for a file where columns can be separated by a\nperiod, colon or semicolon.  The order of the characters in the\nstring does not matter.  Defaults to a comma.\n"},
  {(char*)"SetUTF8FieldDelimiters", PyvtkDelimitedTextReader_SetUTF8FieldDelimiters, METH_VARARGS,
   (char*)"V.SetUTF8FieldDelimiters(string)\nC++: void SetUTF8FieldDelimiters(const char *delimiters)\n\n"},
  {(char*)"GetUTF8FieldDelimiters", PyvtkDelimitedTextReader_GetUTF8FieldDelimiters, METH_VARARGS,
   (char*)"V.GetUTF8FieldDelimiters() -> string\nC++: const char *GetUTF8FieldDelimiters()\n\n"},
  {(char*)"SetUnicodeFieldDelimiters", PyvtkDelimitedTextReader_SetUnicodeFieldDelimiters, METH_VARARGS,
   (char*)"V.SetUnicodeFieldDelimiters(unicode)\nC++: void SetUnicodeFieldDelimiters(\n    const vtkUnicodeString &delimiters)\n\n"},
  {(char*)"GetUnicodeFieldDelimiters", PyvtkDelimitedTextReader_GetUnicodeFieldDelimiters, METH_VARARGS,
   (char*)"V.GetUnicodeFieldDelimiters() -> unicode\nC++: vtkUnicodeString GetUnicodeFieldDelimiters()\n\n"},
  {(char*)"GetStringDelimiter", PyvtkDelimitedTextReader_GetStringDelimiter, METH_VARARGS,
   (char*)"V.GetStringDelimiter() -> char\nC++: char GetStringDelimiter()\n\nGet/set the character that will begin and end strings.  Microsoft\nExcel, for example, will export the following format:\n\n\"First Field\",\"Second Field\",\"Field, With, Commas\",\"Fourth Field\"\n\nThe third field has a comma in it.  By using a string delimiter,\nthis will be correctly read.  The delimiter defaults to '\"'.\n"},
  {(char*)"SetStringDelimiter", PyvtkDelimitedTextReader_SetStringDelimiter, METH_VARARGS,
   (char*)"V.SetStringDelimiter(char)\nC++: void SetStringDelimiter(char a)\n\nGet/set the character that will begin and end strings.  Microsoft\nExcel, for example, will export the following format:\n\n\"First Field\",\"Second Field\",\"Field, With, Commas\",\"Fourth Field\"\n\nThe third field has a comma in it.  By using a string delimiter,\nthis will be correctly read.  The delimiter defaults to '\"'.\n"},
  {(char*)"SetUTF8StringDelimiters", PyvtkDelimitedTextReader_SetUTF8StringDelimiters, METH_VARARGS,
   (char*)"V.SetUTF8StringDelimiters(string)\nC++: void SetUTF8StringDelimiters(const char *delimiters)\n\n"},
  {(char*)"GetUTF8StringDelimiters", PyvtkDelimitedTextReader_GetUTF8StringDelimiters, METH_VARARGS,
   (char*)"V.GetUTF8StringDelimiters() -> string\nC++: const char *GetUTF8StringDelimiters()\n\n"},
  {(char*)"SetUnicodeStringDelimiters", PyvtkDelimitedTextReader_SetUnicodeStringDelimiters, METH_VARARGS,
   (char*)"V.SetUnicodeStringDelimiters(unicode)\nC++: void SetUnicodeStringDelimiters(\n    const vtkUnicodeString &delimiters)\n\n"},
  {(char*)"GetUnicodeStringDelimiters", PyvtkDelimitedTextReader_GetUnicodeStringDelimiters, METH_VARARGS,
   (char*)"V.GetUnicodeStringDelimiters() -> unicode\nC++: vtkUnicodeString GetUnicodeStringDelimiters()\n\n"},
  {(char*)"SetUseStringDelimiter", PyvtkDelimitedTextReader_SetUseStringDelimiter, METH_VARARGS,
   (char*)"V.SetUseStringDelimiter(bool)\nC++: void SetUseStringDelimiter(bool a)\n\nSet/get whether to use the string delimiter.  Defaults to on.\n"},
  {(char*)"GetUseStringDelimiter", PyvtkDelimitedTextReader_GetUseStringDelimiter, METH_VARARGS,
   (char*)"V.GetUseStringDelimiter() -> bool\nC++: bool GetUseStringDelimiter()\n\nSet/get whether to use the string delimiter.  Defaults to on.\n"},
  {(char*)"UseStringDelimiterOn", PyvtkDelimitedTextReader_UseStringDelimiterOn, METH_VARARGS,
   (char*)"V.UseStringDelimiterOn()\nC++: void UseStringDelimiterOn()\n\nSet/get whether to use the string delimiter.  Defaults to on.\n"},
  {(char*)"UseStringDelimiterOff", PyvtkDelimitedTextReader_UseStringDelimiterOff, METH_VARARGS,
   (char*)"V.UseStringDelimiterOff()\nC++: void UseStringDelimiterOff()\n\nSet/get whether to use the string delimiter.  Defaults to on.\n"},
  {(char*)"GetHaveHeaders", PyvtkDelimitedTextReader_GetHaveHeaders, METH_VARARGS,
   (char*)"V.GetHaveHeaders() -> bool\nC++: bool GetHaveHeaders()\n\nSet/get whether to treat the first line of the file as headers.\nThe default is false (no headers).\n"},
  {(char*)"SetHaveHeaders", PyvtkDelimitedTextReader_SetHaveHeaders, METH_VARARGS,
   (char*)"V.SetHaveHeaders(bool)\nC++: void SetHaveHeaders(bool a)\n\nSet/get whether to treat the first line of the file as headers.\nThe default is false (no headers).\n"},
  {(char*)"SetMergeConsecutiveDelimiters", PyvtkDelimitedTextReader_SetMergeConsecutiveDelimiters, METH_VARARGS,
   (char*)"V.SetMergeConsecutiveDelimiters(bool)\nC++: void SetMergeConsecutiveDelimiters(bool a)\n\nSet/get whether to merge successive delimiters.  Use this if (for\nexample) your fields are separated by spaces but you don't know\nexactly how many.\n"},
  {(char*)"GetMergeConsecutiveDelimiters", PyvtkDelimitedTextReader_GetMergeConsecutiveDelimiters, METH_VARARGS,
   (char*)"V.GetMergeConsecutiveDelimiters() -> bool\nC++: bool GetMergeConsecutiveDelimiters()\n\nSet/get whether to merge successive delimiters.  Use this if (for\nexample) your fields are separated by spaces but you don't know\nexactly how many.\n"},
  {(char*)"MergeConsecutiveDelimitersOn", PyvtkDelimitedTextReader_MergeConsecutiveDelimitersOn, METH_VARARGS,
   (char*)"V.MergeConsecutiveDelimitersOn()\nC++: void MergeConsecutiveDelimitersOn()\n\nSet/get whether to merge successive delimiters.  Use this if (for\nexample) your fields are separated by spaces but you don't know\nexactly how many.\n"},
  {(char*)"MergeConsecutiveDelimitersOff", PyvtkDelimitedTextReader_MergeConsecutiveDelimitersOff, METH_VARARGS,
   (char*)"V.MergeConsecutiveDelimitersOff()\nC++: void MergeConsecutiveDelimitersOff()\n\nSet/get whether to merge successive delimiters.  Use this if (for\nexample) your fields are separated by spaces but you don't know\nexactly how many.\n"},
  {(char*)"GetMaxRecords", PyvtkDelimitedTextReader_GetMaxRecords, METH_VARARGS,
   (char*)"V.GetMaxRecords() -> int\nC++: vtkIdType GetMaxRecords()\n\nSpecifies the maximum number of records to read from the file. \nLimiting the number of records to read is useful for previewing\nthe contents of a file.\n"},
  {(char*)"SetMaxRecords", PyvtkDelimitedTextReader_SetMaxRecords, METH_VARARGS,
   (char*)"V.SetMaxRecords(int)\nC++: void SetMaxRecords(vtkIdType a)\n\nSpecifies the maximum number of records to read from the file. \nLimiting the number of records to read is useful for previewing\nthe contents of a file.\n"},
  {(char*)"SetDetectNumericColumns", PyvtkDelimitedTextReader_SetDetectNumericColumns, METH_VARARGS,
   (char*)"V.SetDetectNumericColumns(bool)\nC++: void SetDetectNumericColumns(bool a)\n\nWhen set to true, the reader will detect numeric columns and\ncreate vtkDoubleArray or vtkIntArray for those instead of\nvtkStringArray. Default is off.\n"},
  {(char*)"GetDetectNumericColumns", PyvtkDelimitedTextReader_GetDetectNumericColumns, METH_VARARGS,
   (char*)"V.GetDetectNumericColumns() -> bool\nC++: bool GetDetectNumericColumns()\n\nWhen set to true, the reader will detect numeric columns and\ncreate vtkDoubleArray or vtkIntArray for those instead of\nvtkStringArray. Default is off.\n"},
  {(char*)"DetectNumericColumnsOn", PyvtkDelimitedTextReader_DetectNumericColumnsOn, METH_VARARGS,
   (char*)"V.DetectNumericColumnsOn()\nC++: void DetectNumericColumnsOn()\n\nWhen set to true, the reader will detect numeric columns and\ncreate vtkDoubleArray or vtkIntArray for those instead of\nvtkStringArray. Default is off.\n"},
  {(char*)"DetectNumericColumnsOff", PyvtkDelimitedTextReader_DetectNumericColumnsOff, METH_VARARGS,
   (char*)"V.DetectNumericColumnsOff()\nC++: void DetectNumericColumnsOff()\n\nWhen set to true, the reader will detect numeric columns and\ncreate vtkDoubleArray or vtkIntArray for those instead of\nvtkStringArray. Default is off.\n"},
  {(char*)"SetForceDouble", PyvtkDelimitedTextReader_SetForceDouble, METH_VARARGS,
   (char*)"V.SetForceDouble(bool)\nC++: void SetForceDouble(bool a)\n\nWhen set to true and DetectNumericColumns is also true, forces\nall numeric columns to vtkDoubleArray even if they contain only\ninteger values. Default is off.\n"},
  {(char*)"GetForceDouble", PyvtkDelimitedTextReader_GetForceDouble, METH_VARARGS,
   (char*)"V.GetForceDouble() -> bool\nC++: bool GetForceDouble()\n\nWhen set to true and DetectNumericColumns is also true, forces\nall numeric columns to vtkDoubleArray even if they contain only\ninteger values. Default is off.\n"},
  {(char*)"ForceDoubleOn", PyvtkDelimitedTextReader_ForceDoubleOn, METH_VARARGS,
   (char*)"V.ForceDoubleOn()\nC++: void ForceDoubleOn()\n\nWhen set to true and DetectNumericColumns is also true, forces\nall numeric columns to vtkDoubleArray even if they contain only\ninteger values. Default is off.\n"},
  {(char*)"ForceDoubleOff", PyvtkDelimitedTextReader_ForceDoubleOff, METH_VARARGS,
   (char*)"V.ForceDoubleOff()\nC++: void ForceDoubleOff()\n\nWhen set to true and DetectNumericColumns is also true, forces\nall numeric columns to vtkDoubleArray even if they contain only\ninteger values. Default is off.\n"},
  {(char*)"SetTrimWhitespacePriorToNumericConversion", PyvtkDelimitedTextReader_SetTrimWhitespacePriorToNumericConversion, METH_VARARGS,
   (char*)"V.SetTrimWhitespacePriorToNumericConversion(bool)\nC++: void SetTrimWhitespacePriorToNumericConversion(bool a)\n\nWhen DetectNumericColumns is set to true, whether to trim\nwhitespace from strings prior to conversion to a numeric. Default\nis false to preserve backward compatibility.\n\nvtkVariant handles whitespace inconsistently, so trim it before\nwe try to convert it.  For example:\n\nvtkVariant(\"  2.0\").ToDouble() == 2.0 <-- leading whitespace is\nnot a problem vtkVariant(\"  2.0  \").ToDouble() == NaN <--\ntrailing whitespace is a problem vtkVariant(\"  infinity \n\").ToDouble() == NaN <-- any whitespace is a problem\n\nIn these cases, trimming the whitespace gives us the result we\nexpect: 2.0 and INF respectively.\n"},
  {(char*)"GetTrimWhitespacePriorToNumericConversion", PyvtkDelimitedTextReader_GetTrimWhitespacePriorToNumericConversion, METH_VARARGS,
   (char*)"V.GetTrimWhitespacePriorToNumericConversion() -> bool\nC++: bool GetTrimWhitespacePriorToNumericConversion()\n\nWhen DetectNumericColumns is set to true, whether to trim\nwhitespace from strings prior to conversion to a numeric. Default\nis false to preserve backward compatibility.\n\nvtkVariant handles whitespace inconsistently, so trim it before\nwe try to convert it.  For example:\n\nvtkVariant(\"  2.0\").ToDouble() == 2.0 <-- leading whitespace is\nnot a problem vtkVariant(\"  2.0  \").ToDouble() == NaN <--\ntrailing whitespace is a problem vtkVariant(\"  infinity \n\").ToDouble() == NaN <-- any whitespace is a problem\n\nIn these cases, trimming the whitespace gives us the result we\nexpect: 2.0 and INF respectively.\n"},
  {(char*)"TrimWhitespacePriorToNumericConversionOn", PyvtkDelimitedTextReader_TrimWhitespacePriorToNumericConversionOn, METH_VARARGS,
   (char*)"V.TrimWhitespacePriorToNumericConversionOn()\nC++: void TrimWhitespacePriorToNumericConversionOn()\n\nWhen DetectNumericColumns is set to true, whether to trim\nwhitespace from strings prior to conversion to a numeric. Default\nis false to preserve backward compatibility.\n\nvtkVariant handles whitespace inconsistently, so trim it before\nwe try to convert it.  For example:\n\nvtkVariant(\"  2.0\").ToDouble() == 2.0 <-- leading whitespace is\nnot a problem vtkVariant(\"  2.0  \").ToDouble() == NaN <--\ntrailing whitespace is a problem vtkVariant(\"  infinity \n\").ToDouble() == NaN <-- any whitespace is a problem\n\nIn these cases, trimming the whitespace gives us the result we\nexpect: 2.0 and INF respectively.\n"},
  {(char*)"TrimWhitespacePriorToNumericConversionOff", PyvtkDelimitedTextReader_TrimWhitespacePriorToNumericConversionOff, METH_VARARGS,
   (char*)"V.TrimWhitespacePriorToNumericConversionOff()\nC++: void TrimWhitespacePriorToNumericConversionOff()\n\nWhen DetectNumericColumns is set to true, whether to trim\nwhitespace from strings prior to conversion to a numeric. Default\nis false to preserve backward compatibility.\n\nvtkVariant handles whitespace inconsistently, so trim it before\nwe try to convert it.  For example:\n\nvtkVariant(\"  2.0\").ToDouble() == 2.0 <-- leading whitespace is\nnot a problem vtkVariant(\"  2.0  \").ToDouble() == NaN <--\ntrailing whitespace is a problem vtkVariant(\"  infinity \n\").ToDouble() == NaN <-- any whitespace is a problem\n\nIn these cases, trimming the whitespace gives us the result we\nexpect: 2.0 and INF respectively.\n"},
  {(char*)"SetDefaultIntegerValue", PyvtkDelimitedTextReader_SetDefaultIntegerValue, METH_VARARGS,
   (char*)"V.SetDefaultIntegerValue(int)\nC++: void SetDefaultIntegerValue(int a)\n\nWhen DetectNumericColumns is set to true, the reader use this\nvalue to populate the vtkIntArray where empty strings are found.\nDefault is 0.\n"},
  {(char*)"GetDefaultIntegerValue", PyvtkDelimitedTextReader_GetDefaultIntegerValue, METH_VARARGS,
   (char*)"V.GetDefaultIntegerValue() -> int\nC++: int GetDefaultIntegerValue()\n\nWhen DetectNumericColumns is set to true, the reader use this\nvalue to populate the vtkIntArray where empty strings are found.\nDefault is 0.\n"},
  {(char*)"SetDefaultDoubleValue", PyvtkDelimitedTextReader_SetDefaultDoubleValue, METH_VARARGS,
   (char*)"V.SetDefaultDoubleValue(float)\nC++: void SetDefaultDoubleValue(double a)\n\nWhen DetectNumericColumns is set to true, the reader use this\nvalue to populate the vtkDoubleArray where empty strings are\nfound. Default is 0.0\n"},
  {(char*)"GetDefaultDoubleValue", PyvtkDelimitedTextReader_GetDefaultDoubleValue, METH_VARARGS,
   (char*)"V.GetDefaultDoubleValue() -> float\nC++: double GetDefaultDoubleValue()\n\nWhen DetectNumericColumns is set to true, the reader use this\nvalue to populate the vtkDoubleArray where empty strings are\nfound. Default is 0.0\n"},
  {(char*)"SetPedigreeIdArrayName", PyvtkDelimitedTextReader_SetPedigreeIdArrayName, METH_VARARGS,
   (char*)"V.SetPedigreeIdArrayName(string)\nC++: void SetPedigreeIdArrayName(char *)\n\nThe name of the array for generating or assigning pedigree ids\n(default \"id\").\n"},
  {(char*)"GetPedigreeIdArrayName", PyvtkDelimitedTextReader_GetPedigreeIdArrayName, METH_VARARGS,
   (char*)"V.GetPedigreeIdArrayName() -> string\nC++: char *GetPedigreeIdArrayName()\n\nThe name of the array for generating or assigning pedigree ids\n(default \"id\").\n"},
  {(char*)"SetGeneratePedigreeIds", PyvtkDelimitedTextReader_SetGeneratePedigreeIds, METH_VARARGS,
   (char*)"V.SetGeneratePedigreeIds(bool)\nC++: void SetGeneratePedigreeIds(bool a)\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {(char*)"GetGeneratePedigreeIds", PyvtkDelimitedTextReader_GetGeneratePedigreeIds, METH_VARARGS,
   (char*)"V.GetGeneratePedigreeIds() -> bool\nC++: bool GetGeneratePedigreeIds()\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {(char*)"GeneratePedigreeIdsOn", PyvtkDelimitedTextReader_GeneratePedigreeIdsOn, METH_VARARGS,
   (char*)"V.GeneratePedigreeIdsOn()\nC++: void GeneratePedigreeIdsOn()\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {(char*)"GeneratePedigreeIdsOff", PyvtkDelimitedTextReader_GeneratePedigreeIdsOff, METH_VARARGS,
   (char*)"V.GeneratePedigreeIdsOff()\nC++: void GeneratePedigreeIdsOff()\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {(char*)"SetOutputPedigreeIds", PyvtkDelimitedTextReader_SetOutputPedigreeIds, METH_VARARGS,
   (char*)"V.SetOutputPedigreeIds(bool)\nC++: void SetOutputPedigreeIds(bool a)\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {(char*)"GetOutputPedigreeIds", PyvtkDelimitedTextReader_GetOutputPedigreeIds, METH_VARARGS,
   (char*)"V.GetOutputPedigreeIds() -> bool\nC++: bool GetOutputPedigreeIds()\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {(char*)"OutputPedigreeIdsOn", PyvtkDelimitedTextReader_OutputPedigreeIdsOn, METH_VARARGS,
   (char*)"V.OutputPedigreeIdsOn()\nC++: void OutputPedigreeIdsOn()\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {(char*)"OutputPedigreeIdsOff", PyvtkDelimitedTextReader_OutputPedigreeIdsOff, METH_VARARGS,
   (char*)"V.OutputPedigreeIdsOff()\nC++: void OutputPedigreeIdsOff()\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {(char*)"GetLastError", PyvtkDelimitedTextReader_GetLastError, METH_VARARGS,
   (char*)"V.GetLastError() -> string\nC++: vtkStdString GetLastError()\n\nReturns a human-readable description of the most recent error, if\nany. Otherwise, returns an empty string.  Note that the result is\nonly valid after calling Update().\n"},
  {(char*)"SetReplacementCharacter", PyvtkDelimitedTextReader_SetReplacementCharacter, METH_VARARGS,
   (char*)"V.SetReplacementCharacter(int)\nC++: void SetReplacementCharacter(vtkTypeUInt32 a)\n\nFallback character for use in the US-ASCII-WITH-FALLBACK\ncharacter set.  Any characters that have their 8th bit set will\nbe replaced with this code point.  Defaults to 'x'.\n"},
  {(char*)"GetReplacementCharacter", PyvtkDelimitedTextReader_GetReplacementCharacter, METH_VARARGS,
   (char*)"V.GetReplacementCharacter() -> int\nC++: vtkTypeUInt32 GetReplacementCharacter()\n\nFallback character for use in the US-ASCII-WITH-FALLBACK\ncharacter set.  Any characters that have their 8th bit set will\nbe replaced with this code point.  Defaults to 'x'.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDelimitedTextReader_StaticNew()
{
  return vtkDelimitedTextReader::New();
}

PyObject *PyVTKClass_vtkDelimitedTextReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDelimitedTextReader_StaticNew,
    PyvtkDelimitedTextReader_Methods,
    "vtkDelimitedTextReader", modulename,
    NULL, NULL,
    PyvtkDelimitedTextReader_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDelimitedTextReader_Doc()
{
  static const char *docstring[] = {
    "vtkDelimitedTextReader - reads in delimited ascii or unicode text\nfiles\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "vtkDelimitedTextReader is an interface for pulling in data from a\nflat, delimited ascii or unicode text file (delimiter can be any\ncharacter).\n\nThe behavior of the reader with respect to ascii or unicode input is\ncontrolled by the SetUnicodeCharacterSet() method.  By default\n(without calling SetUnicodeCharacterSet()), the reader will expect to\nread ascii text and will output vtkStdString columns. ",
    " Use the Set\nand Get methods to set delimiters that do not contain UTF8 in the\nname when operating the reader in default ascii mode.  If the\nSetUnicodeCharacterSet() method is called, the reader will output\nvtkUnicodeString columns in the output table.  In addition, it is\nnecessary to use the Set and Get methods that contain UTF8 in the\nname to specify delimiters when operating in unicode mode.\n\nT",
    "here is also a special character set US-ASCII-WITH-FALLBACK that\nwill treat the input text as ASCII no matter what.  If and when it\nencounters a character with its 8th bit set it will replace that\ncharacter with the code point ReplacementCharacter.  You may use this\nif you have text that belongs to a code page like LATIN9 or\nISO-8859-1 or friends: mostly ASCII but not entirely.  Eventually\nthis cl",
    "ass will acquire the ability to read gracefully text from any\ncode page, making this option obsolete.\n\nThis class emits ProgressEvent for every 100 lines it reads.\n\nThanks:\n\nThanks to Andy Wilson, Brian Wylie, Tim Shead, and Thomas Otahal from\nSandia National Laboratories for implementing this class.\n\nCaveats:\n\nThis reader assumes that the first line in the file (whether that's\nheaders or the firs",
    "t document) contains at least as many fields as\nany other line in the file.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDelimitedTextReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDelimitedTextReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDelimitedTextReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

