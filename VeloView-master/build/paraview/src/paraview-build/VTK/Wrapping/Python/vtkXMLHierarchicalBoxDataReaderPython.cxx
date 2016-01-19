// python wrapper for vtkXMLHierarchicalBoxDataReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLHierarchicalBoxDataReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLHierarchicalBoxDataReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLHierarchicalBoxDataReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLUniformGridAMRReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLUniformGridAMRReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLUniformGridAMRReaderNew
#endif

static const char **PyvtkXMLHierarchicalBoxDataReader_Doc();


static PyObject *
PyvtkXMLHierarchicalBoxDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataReader *op = static_cast<vtkXMLHierarchicalBoxDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLHierarchicalBoxDataReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataReader *op = static_cast<vtkXMLHierarchicalBoxDataReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLHierarchicalBoxDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataReader *op = static_cast<vtkXMLHierarchicalBoxDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLHierarchicalBoxDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLHierarchicalBoxDataReader::NewInstance());

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
PyvtkXMLHierarchicalBoxDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLHierarchicalBoxDataReader *tempr = vtkXMLHierarchicalBoxDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLHierarchicalBoxDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLHierarchicalBoxDataReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLHierarchicalBoxDataReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLHierarchicalBoxDataReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLHierarchicalBoxDataReader\nC++: vtkXMLHierarchicalBoxDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLHierarchicalBoxDataReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLHierarchicalBoxDataReader\nC++: vtkXMLHierarchicalBoxDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLHierarchicalBoxDataReader_StaticNew()
{
  return vtkXMLHierarchicalBoxDataReader::New();
}

PyObject *PyVTKClass_vtkXMLHierarchicalBoxDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLHierarchicalBoxDataReader_StaticNew,
    PyvtkXMLHierarchicalBoxDataReader_Methods,
    "vtkXMLHierarchicalBoxDataReader", modulename,
    NULL, NULL,
    PyvtkXMLHierarchicalBoxDataReader_Doc(),
    PyVTKClass_vtkXMLUniformGridAMRReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLHierarchicalBoxDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLHierarchicalBoxDataReader - Reader for hierarchical datasets\n\n",
    "Superclass: vtkXMLUniformGridAMRReader\n\n",
    "vtkXMLHierarchicalBoxDataReader is an empty subclass of\nvtkXMLUniformGridAMRReader. This is only for backwards compatibility.\nNewer code should simply use vtkXMLUniformGridAMRReader.\n\nCaveats:\n\nThe reader supports reading v1.1 and above. For older versions, use\nvtkXMLHierarchicalBoxDataFileConverter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLHierarchicalBoxDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLHierarchicalBoxDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLHierarchicalBoxDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

