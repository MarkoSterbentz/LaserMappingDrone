// python wrapper for vtkXMLPUnstructuredDataReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLPUnstructuredDataReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLPUnstructuredDataReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLPUnstructuredDataReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLPDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLPDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPDataReaderNew
#endif

static const char **PyvtkXMLPUnstructuredDataReader_Doc();


static PyObject *
PyvtkXMLPUnstructuredDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredDataReader *op = static_cast<vtkXMLPUnstructuredDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLPUnstructuredDataReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredDataReader *op = static_cast<vtkXMLPUnstructuredDataReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPUnstructuredDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredDataReader *op = static_cast<vtkXMLPUnstructuredDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLPUnstructuredDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPUnstructuredDataReader::NewInstance());

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
PyvtkXMLPUnstructuredDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLPUnstructuredDataReader *tempr = vtkXMLPUnstructuredDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredDataReader_CopyOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredDataReader *op = static_cast<vtkXMLPUnstructuredDataReader *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyOutputInformation(temp0, temp1);
      }
    else
      {
      op->vtkXMLPUnstructuredDataReader::CopyOutputInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPUnstructuredDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPUnstructuredDataReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPUnstructuredDataReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPUnstructuredDataReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLPUnstructuredDataReader\nC++: vtkXMLPUnstructuredDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPUnstructuredDataReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPUnstructuredDataReader\nC++: vtkXMLPUnstructuredDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CopyOutputInformation", PyvtkXMLPUnstructuredDataReader_CopyOutputInformation, METH_VARARGS,
   (char*)"V.CopyOutputInformation(vtkInformation, int)\nC++: virtual void CopyOutputInformation(vtkInformation *outInfo,\n    int port)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLPUnstructuredDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLPUnstructuredDataReader_Methods,
    "vtkXMLPUnstructuredDataReader", modulename,
    NULL, NULL,
    PyvtkXMLPUnstructuredDataReader_Doc(),
    PyVTKClass_vtkXMLPDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLPUnstructuredDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPUnstructuredDataReader - Superclass for parallel unstructured\ndata XML readers.\n\n",
    "Superclass: vtkXMLPDataReader\n\n",
    "vtkXMLPUnstructuredDataReader provides functionality common to all\nparallel unstructured data format readers.\n\nSee Also:\n\nvtkXMLPPolyDataReader vtkXMLPUnstructuredGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPUnstructuredDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPUnstructuredDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPUnstructuredDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

