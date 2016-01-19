// python wrapper for vtkXMLFileReadTester
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLFileReadTester.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLFileReadTester(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLFileReadTesterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLParserNew
extern "C" { PyObject *PyVTKClass_vtkXMLParserNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLParserNew
#endif

static const char **PyvtkXMLFileReadTester_Doc();


static PyObject *
PyvtkXMLFileReadTester_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLFileReadTester::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLFileReadTester::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLFileReadTester *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLFileReadTester::NewInstance());

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
PyvtkXMLFileReadTester_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLFileReadTester *tempr = vtkXMLFileReadTester::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_TestReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TestReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->TestReadFile() :
      op->vtkXMLFileReadTester::TestReadFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

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
      op->vtkXMLFileReadTester::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkXMLFileReadTester::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_GetFileDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileDataType() :
      op->vtkXMLFileReadTester::GetFileDataType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_GetFileVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileVersion() :
      op->vtkXMLFileReadTester::GetFileVersion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLFileReadTester_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLFileReadTester_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLFileReadTester_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLFileReadTester_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLFileReadTester\nC++: vtkXMLFileReadTester *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLFileReadTester_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLFileReadTester\nC++: vtkXMLFileReadTester *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"TestReadFile", PyvtkXMLFileReadTester_TestReadFile, METH_VARARGS,
   (char*)"V.TestReadFile() -> int\nC++: int TestReadFile()\n\nTry to read the file given by FileName.  Returns 1 if the file is\na VTK XML file, and 0 otherwise.\n"},
  {(char*)"SetFileName", PyvtkXMLFileReadTester_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the name of the file tested by TestReadFile().\n"},
  {(char*)"GetFileName", PyvtkXMLFileReadTester_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the name of the file tested by TestReadFile().\n"},
  {(char*)"GetFileDataType", PyvtkXMLFileReadTester_GetFileDataType, METH_VARARGS,
   (char*)"V.GetFileDataType() -> string\nC++: char *GetFileDataType()\n\nGet the data type of the XML file tested.  If the file could not\nbe read, returns NULL.\n"},
  {(char*)"GetFileVersion", PyvtkXMLFileReadTester_GetFileVersion, METH_VARARGS,
   (char*)"V.GetFileVersion() -> string\nC++: char *GetFileVersion()\n\nGet the file version of the XML file tested.  If the file could\nnot be read, returns NULL.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLFileReadTester_StaticNew()
{
  return vtkXMLFileReadTester::New();
}

PyObject *PyVTKClass_vtkXMLFileReadTesterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLFileReadTester_StaticNew,
    PyvtkXMLFileReadTester_Methods,
    "vtkXMLFileReadTester", modulename,
    NULL, NULL,
    PyvtkXMLFileReadTester_Doc(),
    PyVTKClass_vtkXMLParserNew(modulename));
  return cls;
}

const char **PyvtkXMLFileReadTester_Doc()
{
  static const char *docstring[] = {
    "vtkXMLFileReadTester - Utility class for vtkXMLReader and subclasses.\n\n",
    "Superclass: vtkXMLParser\n\n",
    "vtkXMLFileReadTester reads the smallest part of a file necessary to\ndetermine whether it is a VTK XML file.  If so, it extracts the file\ntype and version number.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLFileReadTester(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLFileReadTesterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLFileReadTester", o) != 0)
    {
    Py_DECREF(o);
    }

}

