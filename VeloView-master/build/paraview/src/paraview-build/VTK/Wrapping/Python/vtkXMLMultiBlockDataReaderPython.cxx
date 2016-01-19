// python wrapper for vtkXMLMultiBlockDataReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLMultiBlockDataReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLMultiBlockDataReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLMultiBlockDataReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLCompositeDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLCompositeDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLCompositeDataReaderNew
#endif

static const char **PyvtkXMLMultiBlockDataReader_Doc();


static PyObject *
PyvtkXMLMultiBlockDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMultiBlockDataReader *op = static_cast<vtkXMLMultiBlockDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLMultiBlockDataReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMultiBlockDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMultiBlockDataReader *op = static_cast<vtkXMLMultiBlockDataReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLMultiBlockDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMultiBlockDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMultiBlockDataReader *op = static_cast<vtkXMLMultiBlockDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLMultiBlockDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLMultiBlockDataReader::NewInstance());

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
PyvtkXMLMultiBlockDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLMultiBlockDataReader *tempr = vtkXMLMultiBlockDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLMultiBlockDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLMultiBlockDataReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLMultiBlockDataReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLMultiBlockDataReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLMultiBlockDataReader\nC++: vtkXMLMultiBlockDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLMultiBlockDataReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLMultiBlockDataReader\nC++: vtkXMLMultiBlockDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLMultiBlockDataReader_StaticNew()
{
  return vtkXMLMultiBlockDataReader::New();
}

PyObject *PyVTKClass_vtkXMLMultiBlockDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLMultiBlockDataReader_StaticNew,
    PyvtkXMLMultiBlockDataReader_Methods,
    "vtkXMLMultiBlockDataReader", modulename,
    NULL, NULL,
    PyvtkXMLMultiBlockDataReader_Doc(),
    PyVTKClass_vtkXMLCompositeDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLMultiBlockDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLMultiBlockDataReader - Reader for multi-block datasets\n\n",
    "Superclass: vtkXMLCompositeDataReader\n\n",
    "vtkXMLMultiBlockDataReader reads the VTK XML multi-block data file\nformat. XML multi-block data files are meta-files that point to a\nlist of serial VTK XML files. When reading in parallel, it will\ndistribute sub-blocks among processor. If the number of sub-blocks is\nless than the number of processors, some processors will not have any\nsub-blocks for that block. If the number of sub-blocks is large",
    "r than\nthe number of processors, each processor will possibly have more than\n1 sub-block.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLMultiBlockDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLMultiBlockDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLMultiBlockDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

