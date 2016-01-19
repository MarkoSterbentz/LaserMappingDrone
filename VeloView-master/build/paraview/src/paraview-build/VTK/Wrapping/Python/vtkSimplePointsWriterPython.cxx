// python wrapper for vtkSimplePointsWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSimplePointsWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSimplePointsWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSimplePointsWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetWriterNew
extern "C" { PyObject *PyVTKClass_vtkDataSetWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetWriterNew
#endif

static const char **PyvtkSimplePointsWriter_Doc();


static PyObject *
PyvtkSimplePointsWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimplePointsWriter *op = static_cast<vtkSimplePointsWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSimplePointsWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimplePointsWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimplePointsWriter *op = static_cast<vtkSimplePointsWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSimplePointsWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimplePointsWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimplePointsWriter *op = static_cast<vtkSimplePointsWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSimplePointsWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSimplePointsWriter::NewInstance());

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
PyvtkSimplePointsWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSimplePointsWriter *tempr = vtkSimplePointsWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimplePointsWriter_GetDecimalPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecimalPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimplePointsWriter *op = static_cast<vtkSimplePointsWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDecimalPrecision() :
      op->vtkSimplePointsWriter::GetDecimalPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimplePointsWriter_SetDecimalPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDecimalPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimplePointsWriter *op = static_cast<vtkSimplePointsWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDecimalPrecision(temp0);
      }
    else
      {
      op->vtkSimplePointsWriter::SetDecimalPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSimplePointsWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkSimplePointsWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSimplePointsWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSimplePointsWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSimplePointsWriter\nC++: vtkSimplePointsWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSimplePointsWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSimplePointsWriter\nC++: vtkSimplePointsWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDecimalPrecision", PyvtkSimplePointsWriter_GetDecimalPrecision, METH_VARARGS,
   (char*)"V.GetDecimalPrecision() -> int\nC++: int GetDecimalPrecision()\n\n"},
  {(char*)"SetDecimalPrecision", PyvtkSimplePointsWriter_SetDecimalPrecision, METH_VARARGS,
   (char*)"V.SetDecimalPrecision(int)\nC++: void SetDecimalPrecision(int a)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSimplePointsWriter_StaticNew()
{
  return vtkSimplePointsWriter::New();
}

PyObject *PyVTKClass_vtkSimplePointsWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSimplePointsWriter_StaticNew,
    PyvtkSimplePointsWriter_Methods,
    "vtkSimplePointsWriter", modulename,
    NULL, NULL,
    PyvtkSimplePointsWriter_Doc(),
    PyVTKClass_vtkDataSetWriterNew(modulename));
  return cls;
}

const char **PyvtkSimplePointsWriter_Doc()
{
  static const char *docstring[] = {
    "vtkSimplePointsWriter - write a file of xyz coordinates\n\n",
    "Superclass: vtkDataSetWriter\n\n",
    "vtkSimplePointsWriter writes a simple file of xyz coordinates\n\nSee Also:\n\nvtkSimplePointsReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSimplePointsWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSimplePointsWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSimplePointsWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

