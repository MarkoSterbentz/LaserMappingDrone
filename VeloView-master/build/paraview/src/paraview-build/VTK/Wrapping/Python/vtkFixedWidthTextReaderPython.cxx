// python wrapper for vtkFixedWidthTextReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkFixedWidthTextReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFixedWidthTextReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFixedWidthTextReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkFixedWidthTextReader_Doc();


static PyObject *
PyvtkFixedWidthTextReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFixedWidthTextReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFixedWidthTextReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFixedWidthTextReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFixedWidthTextReader::NewInstance());

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
PyvtkFixedWidthTextReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFixedWidthTextReader *tempr = vtkFixedWidthTextReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkFixedWidthTextReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

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
      op->vtkFixedWidthTextReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_SetFieldWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldWidth(temp0);
      }
    else
      {
      op->vtkFixedWidthTextReader::SetFieldWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_GetFieldWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldWidth() :
      op->vtkFixedWidthTextReader::GetFieldWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_SetStripWhiteSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStripWhiteSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStripWhiteSpace(temp0);
      }
    else
      {
      op->vtkFixedWidthTextReader::SetStripWhiteSpace(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_GetStripWhiteSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStripWhiteSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetStripWhiteSpace() :
      op->vtkFixedWidthTextReader::GetStripWhiteSpace());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_StripWhiteSpaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StripWhiteSpaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StripWhiteSpaceOn();
      }
    else
      {
      op->vtkFixedWidthTextReader::StripWhiteSpaceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_StripWhiteSpaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StripWhiteSpaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StripWhiteSpaceOff();
      }
    else
      {
      op->vtkFixedWidthTextReader::StripWhiteSpaceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_GetHaveHeaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHaveHeaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetHaveHeaders() :
      op->vtkFixedWidthTextReader::GetHaveHeaders());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_SetHaveHeaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHaveHeaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

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
      op->vtkFixedWidthTextReader::SetHaveHeaders(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_HaveHeadersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HaveHeadersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HaveHeadersOn();
      }
    else
      {
      op->vtkFixedWidthTextReader::HaveHeadersOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_HaveHeadersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HaveHeadersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HaveHeadersOff();
      }
    else
      {
      op->vtkFixedWidthTextReader::HaveHeadersOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFixedWidthTextReader_Methods[] = {
  {(char*)"GetClassName", PyvtkFixedWidthTextReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFixedWidthTextReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFixedWidthTextReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFixedWidthTextReader\nC++: vtkFixedWidthTextReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFixedWidthTextReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFixedWidthTextReader\nC++: vtkFixedWidthTextReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkFixedWidthTextReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\n"},
  {(char*)"SetFileName", PyvtkFixedWidthTextReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\n"},
  {(char*)"SetFieldWidth", PyvtkFixedWidthTextReader_SetFieldWidth, METH_VARARGS,
   (char*)"V.SetFieldWidth(int)\nC++: void SetFieldWidth(int a)\n\nSet/get the field width\n"},
  {(char*)"GetFieldWidth", PyvtkFixedWidthTextReader_GetFieldWidth, METH_VARARGS,
   (char*)"V.GetFieldWidth() -> int\nC++: int GetFieldWidth()\n\nSet/get the field width\n"},
  {(char*)"SetStripWhiteSpace", PyvtkFixedWidthTextReader_SetStripWhiteSpace, METH_VARARGS,
   (char*)"V.SetStripWhiteSpace(bool)\nC++: void SetStripWhiteSpace(bool a)\n\nIf set, this flag will cause the reader to strip whitespace from\nthe beginning and ending of each field.  Defaults to off.\n"},
  {(char*)"GetStripWhiteSpace", PyvtkFixedWidthTextReader_GetStripWhiteSpace, METH_VARARGS,
   (char*)"V.GetStripWhiteSpace() -> bool\nC++: bool GetStripWhiteSpace()\n\nIf set, this flag will cause the reader to strip whitespace from\nthe beginning and ending of each field.  Defaults to off.\n"},
  {(char*)"StripWhiteSpaceOn", PyvtkFixedWidthTextReader_StripWhiteSpaceOn, METH_VARARGS,
   (char*)"V.StripWhiteSpaceOn()\nC++: void StripWhiteSpaceOn()\n\nIf set, this flag will cause the reader to strip whitespace from\nthe beginning and ending of each field.  Defaults to off.\n"},
  {(char*)"StripWhiteSpaceOff", PyvtkFixedWidthTextReader_StripWhiteSpaceOff, METH_VARARGS,
   (char*)"V.StripWhiteSpaceOff()\nC++: void StripWhiteSpaceOff()\n\nIf set, this flag will cause the reader to strip whitespace from\nthe beginning and ending of each field.  Defaults to off.\n"},
  {(char*)"GetHaveHeaders", PyvtkFixedWidthTextReader_GetHaveHeaders, METH_VARARGS,
   (char*)"V.GetHaveHeaders() -> bool\nC++: bool GetHaveHeaders()\n\nSet/get whether to treat the first line of the file as headers.\n"},
  {(char*)"SetHaveHeaders", PyvtkFixedWidthTextReader_SetHaveHeaders, METH_VARARGS,
   (char*)"V.SetHaveHeaders(bool)\nC++: void SetHaveHeaders(bool a)\n\nSet/get whether to treat the first line of the file as headers.\n"},
  {(char*)"HaveHeadersOn", PyvtkFixedWidthTextReader_HaveHeadersOn, METH_VARARGS,
   (char*)"V.HaveHeadersOn()\nC++: void HaveHeadersOn()\n\nSet/get whether to treat the first line of the file as headers.\n"},
  {(char*)"HaveHeadersOff", PyvtkFixedWidthTextReader_HaveHeadersOff, METH_VARARGS,
   (char*)"V.HaveHeadersOff()\nC++: void HaveHeadersOff()\n\nSet/get whether to treat the first line of the file as headers.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFixedWidthTextReader_StaticNew()
{
  return vtkFixedWidthTextReader::New();
}

PyObject *PyVTKClass_vtkFixedWidthTextReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFixedWidthTextReader_StaticNew,
    PyvtkFixedWidthTextReader_Methods,
    "vtkFixedWidthTextReader", modulename,
    NULL, NULL,
    PyvtkFixedWidthTextReader_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkFixedWidthTextReader_Doc()
{
  static const char *docstring[] = {
    "vtkFixedWidthTextReader - reader for pulling in text files with\nfixed-width fields\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "vtkFixedWidthTextReader reads in a table from a text file where each\ncolumn occupies a certain number of characters.\n\nThis class emits ProgressEvent for every 100 lines it reads.\n\nCaveats:\n\nThis first version of the reader will assume that all fields have the\nsame width.  It also assumes that the first line in the file has at\nleast as many fields (i.e. at least as many characters) as any other\nlin",
    "e in the file.\n\nThanks:\n\nThanks to Andy Wilson from Sandia National Laboratories for\nimplementing this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFixedWidthTextReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFixedWidthTextReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFixedWidthTextReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

