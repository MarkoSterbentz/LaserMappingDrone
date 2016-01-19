// python wrapper for vtkISIReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkISIReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkISIReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkISIReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkISIReader_Doc();


static PyObject *
PyvtkISIReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkISIReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkISIReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkISIReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkISIReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkISIReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkISIReader::NewInstance());

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
PyvtkISIReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkISIReader *tempr = vtkISIReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkISIReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkISIReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkISIReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

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
      op->vtkISIReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkISIReader_GetDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetDelimiter() :
      op->vtkISIReader::GetDelimiter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkISIReader_SetDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDelimiter(temp0);
      }
    else
      {
      op->vtkISIReader::SetDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkISIReader_GetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxRecords() :
      op->vtkISIReader::GetMaxRecords());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkISIReader_SetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

  int temp0;
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
      op->vtkISIReader::SetMaxRecords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkISIReader_Methods[] = {
  {(char*)"GetClassName", PyvtkISIReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkISIReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkISIReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkISIReader\nC++: vtkISIReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkISIReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkISIReader\nC++: vtkISIReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkISIReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet/get the file to load\n"},
  {(char*)"SetFileName", PyvtkISIReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet/get the file to load\n"},
  {(char*)"GetDelimiter", PyvtkISIReader_GetDelimiter, METH_VARARGS,
   (char*)"V.GetDelimiter() -> string\nC++: char *GetDelimiter()\n\nSet/get the delimiter to be used for concatenating field data\n(default: \";\")\n"},
  {(char*)"SetDelimiter", PyvtkISIReader_SetDelimiter, METH_VARARGS,
   (char*)"V.SetDelimiter(string)\nC++: void SetDelimiter(char *)\n\nSet/get the delimiter to be used for concatenating field data\n(default: \";\")\n"},
  {(char*)"GetMaxRecords", PyvtkISIReader_GetMaxRecords, METH_VARARGS,
   (char*)"V.GetMaxRecords() -> int\nC++: int GetMaxRecords()\n\nSet/get the maximum number of records to read from the file (zero\n= unlimited)\n"},
  {(char*)"SetMaxRecords", PyvtkISIReader_SetMaxRecords, METH_VARARGS,
   (char*)"V.SetMaxRecords(int)\nC++: void SetMaxRecords(int a)\n\nSet/get the maximum number of records to read from the file (zero\n= unlimited)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkISIReader_StaticNew()
{
  return vtkISIReader::New();
}

PyObject *PyVTKClass_vtkISIReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkISIReader_StaticNew,
    PyvtkISIReader_Methods,
    "vtkISIReader", modulename,
    NULL, NULL,
    PyvtkISIReader_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkISIReader_Doc()
{
  static const char *docstring[] = {
    "vtkISIReader - reader for ISI files\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "ISI is a tagged format for expressing bibliographic citations.  Data\nis structured as a collection of records with each record composed of\none-to-many fields.  See\n\nhttp://isibasic.com/help/helpprn.html#dialog_export_format\n\nfor details.  vtkISIReader will convert an ISI file into a vtkTable,\nwith the set of table columns determined dynamically from the\ncontents of the file.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkISIReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkISIReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkISIReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

