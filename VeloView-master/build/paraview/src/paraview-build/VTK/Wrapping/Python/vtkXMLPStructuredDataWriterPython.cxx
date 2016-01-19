// python wrapper for vtkXMLPStructuredDataWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkXMLPStructuredDataWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLPStructuredDataWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLPStructuredDataWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLPDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLPDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPDataWriterNew
#endif

static const char **PyvtkXMLPStructuredDataWriter_Doc();


static PyObject *
PyvtkXMLPStructuredDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredDataWriter *op = static_cast<vtkXMLPStructuredDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLPStructuredDataWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredDataWriter *op = static_cast<vtkXMLPStructuredDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPStructuredDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredDataWriter *op = static_cast<vtkXMLPStructuredDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLPStructuredDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPStructuredDataWriter::NewInstance());

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
PyvtkXMLPStructuredDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLPStructuredDataWriter *tempr = vtkXMLPStructuredDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPStructuredDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPStructuredDataWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPStructuredDataWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPStructuredDataWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLPStructuredDataWriter\nC++: vtkXMLPStructuredDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPStructuredDataWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPStructuredDataWriter\nC++: vtkXMLPStructuredDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLPStructuredDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLPStructuredDataWriter_Methods,
    "vtkXMLPStructuredDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLPStructuredDataWriter_Doc(),
    PyVTKClass_vtkXMLPDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPStructuredDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPStructuredDataWriter - Superclass for PVTK XML structured data\nwriters.\n\n",
    "Superclass: vtkXMLPDataWriter\n\n",
    "vtkXMLPStructuredDataWriter provides PVTK XML writing functionality\nthat is common among all the parallel structured data formats.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPStructuredDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPStructuredDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPStructuredDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

