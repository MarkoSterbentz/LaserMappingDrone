// python wrapper for vtkJavaScriptDataWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkJavaScriptDataWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkJavaScriptDataWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkJavaScriptDataWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkJavaScriptDataWriter_Doc();


static PyObject *
PyvtkJavaScriptDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkJavaScriptDataWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkJavaScriptDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkJavaScriptDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkJavaScriptDataWriter::NewInstance());

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
PyvtkJavaScriptDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkJavaScriptDataWriter *tempr = vtkJavaScriptDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_SetVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVariableName(temp0);
      }
    else
      {
      op->vtkJavaScriptDataWriter::SetVariableName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_GetVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetVariableName() :
      op->vtkJavaScriptDataWriter::GetVariableName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

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
      op->vtkJavaScriptDataWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkJavaScriptDataWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_SetIncludeFieldNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeFieldNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIncludeFieldNames(temp0);
      }
    else
      {
      op->vtkJavaScriptDataWriter::SetIncludeFieldNames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJavaScriptDataWriter_GetIncludeFieldNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeFieldNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJavaScriptDataWriter *op = static_cast<vtkJavaScriptDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIncludeFieldNames() :
      op->vtkJavaScriptDataWriter::GetIncludeFieldNames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkJavaScriptDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkJavaScriptDataWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkJavaScriptDataWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkJavaScriptDataWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkJavaScriptDataWriter\nC++: vtkJavaScriptDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkJavaScriptDataWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkJavaScriptDataWriter\nC++: vtkJavaScriptDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVariableName", PyvtkJavaScriptDataWriter_SetVariableName, METH_VARARGS,
   (char*)"V.SetVariableName(string)\nC++: void SetVariableName(char *)\n\nGet/set the name of the Javascript variable that the dataset will\nbe assigned to. The default value is \"data\", so the javascript\ncode generated by the filter will look like this: \"var data = [ ...\n];\". If VariableName is set to NULL, then no assignment statement\nwill be generated (i.e., only \"[ ... ];\" will be generated).\n"},
  {(char*)"GetVariableName", PyvtkJavaScriptDataWriter_GetVariableName, METH_VARARGS,
   (char*)"V.GetVariableName() -> string\nC++: char *GetVariableName()\n\nGet/set the name of the Javascript variable that the dataset will\nbe assigned to. The default value is \"data\", so the javascript\ncode generated by the filter will look like this: \"var data = [ ...\n];\". If VariableName is set to NULL, then no assignment statement\nwill be generated (i.e., only \"[ ... ];\" will be generated).\n"},
  {(char*)"SetFileName", PyvtkJavaScriptDataWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the filename for the file.\n"},
  {(char*)"GetFileName", PyvtkJavaScriptDataWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the filename for the file.\n"},
  {(char*)"SetIncludeFieldNames", PyvtkJavaScriptDataWriter_SetIncludeFieldNames, METH_VARARGS,
   (char*)"V.SetIncludeFieldNames(bool)\nC++: void SetIncludeFieldNames(bool a)\n\nGet/Set the whether or not to include field names When field\nnames are on you will get data output that looks like this: var\ndata=[\n      {foo:3,time:\"2009-11-04 16:09:42\",bar:1 },\n      {foo:5,time:\"2009-11-04 16:11:22\",bar:0 }, without field\nnames the data will be an array of arrays like this: var data=[\n      [3,\"2009-11-04 16:09:42\",1],\n      [5,\"2009-11-04 16:11:22\",0],\n\nDefault is ON (true)\n"},
  {(char*)"GetIncludeFieldNames", PyvtkJavaScriptDataWriter_GetIncludeFieldNames, METH_VARARGS,
   (char*)"V.GetIncludeFieldNames() -> bool\nC++: bool GetIncludeFieldNames()\n\nGet/Set the whether or not to include field names When field\nnames are on you will get data output that looks like this: var\ndata=[\n      {foo:3,time:\"2009-11-04 16:09:42\",bar:1 },\n      {foo:5,time:\"2009-11-04 16:11:22\",bar:0 }, without field\nnames the data will be an array of arrays like this: var data=[\n      [3,\"2009-11-04 16:09:42\",1],\n      [5,\"2009-11-04 16:11:22\",0],\n\nDefault is ON (true)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkJavaScriptDataWriter_StaticNew()
{
  return vtkJavaScriptDataWriter::New();
}

PyObject *PyVTKClass_vtkJavaScriptDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkJavaScriptDataWriter_StaticNew,
    PyvtkJavaScriptDataWriter_Methods,
    "vtkJavaScriptDataWriter", modulename,
    NULL, NULL,
    PyvtkJavaScriptDataWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkJavaScriptDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkJavaScriptDataWriter - A Javascript data writer for vtkTable\n\n",
    "Superclass: vtkWriter\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkJavaScriptDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkJavaScriptDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkJavaScriptDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

