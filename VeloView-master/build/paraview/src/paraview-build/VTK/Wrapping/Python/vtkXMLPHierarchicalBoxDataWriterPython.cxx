// python wrapper for vtkXMLPHierarchicalBoxDataWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLPHierarchicalBoxDataWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLPHierarchicalBoxDataWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLPHierarchicalBoxDataWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLPUniformGridAMRWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLPUniformGridAMRWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPUniformGridAMRWriterNew
#endif

static const char **PyvtkXMLPHierarchicalBoxDataWriter_Doc();


static PyObject *
PyvtkXMLPHierarchicalBoxDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPHierarchicalBoxDataWriter *op = static_cast<vtkXMLPHierarchicalBoxDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLPHierarchicalBoxDataWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPHierarchicalBoxDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPHierarchicalBoxDataWriter *op = static_cast<vtkXMLPHierarchicalBoxDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPHierarchicalBoxDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPHierarchicalBoxDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPHierarchicalBoxDataWriter *op = static_cast<vtkXMLPHierarchicalBoxDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLPHierarchicalBoxDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPHierarchicalBoxDataWriter::NewInstance());

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
PyvtkXMLPHierarchicalBoxDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLPHierarchicalBoxDataWriter *tempr = vtkXMLPHierarchicalBoxDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPHierarchicalBoxDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPHierarchicalBoxDataWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPHierarchicalBoxDataWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPHierarchicalBoxDataWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLPHierarchicalBoxDataWriter\nC++: vtkXMLPHierarchicalBoxDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPHierarchicalBoxDataWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPHierarchicalBoxDataWriter\nC++: vtkXMLPHierarchicalBoxDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPHierarchicalBoxDataWriter_StaticNew()
{
  return vtkXMLPHierarchicalBoxDataWriter::New();
}

PyObject *PyVTKClass_vtkXMLPHierarchicalBoxDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPHierarchicalBoxDataWriter_StaticNew,
    PyvtkXMLPHierarchicalBoxDataWriter_Methods,
    "vtkXMLPHierarchicalBoxDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLPHierarchicalBoxDataWriter_Doc(),
    PyVTKClass_vtkXMLPUniformGridAMRWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPHierarchicalBoxDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPHierarchicalBoxDataWriter - parallel writer for\n\n",
    "Superclass: vtkXMLPUniformGridAMRWriter\n\n",
    "vtkXMLPHierarchicalBoxDataWriter is an empty subclass of\nvtkXMLPUniformGridAMRWriter for backwards compatibility.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPHierarchicalBoxDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPHierarchicalBoxDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPHierarchicalBoxDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

