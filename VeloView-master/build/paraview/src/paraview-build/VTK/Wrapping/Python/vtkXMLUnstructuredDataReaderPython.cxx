// python wrapper for vtkXMLUnstructuredDataReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLUnstructuredDataReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLUnstructuredDataReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLUnstructuredDataReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLDataReaderNew
#endif

static const char **PyvtkXMLUnstructuredDataReader_Doc();


static PyObject *
PyvtkXMLUnstructuredDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLUnstructuredDataReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLUnstructuredDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLUnstructuredDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLUnstructuredDataReader::NewInstance());

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
PyvtkXMLUnstructuredDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLUnstructuredDataReader *tempr = vtkXMLUnstructuredDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkXMLUnstructuredDataReader::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkXMLUnstructuredDataReader::GetNumberOfCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_SetupUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetupUpdateExtent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXMLUnstructuredDataReader::SetupUpdateExtent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_CopyOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

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
      op->vtkXMLUnstructuredDataReader::CopyOutputInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLUnstructuredDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLUnstructuredDataReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLUnstructuredDataReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLUnstructuredDataReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLUnstructuredDataReader\nC++: vtkXMLUnstructuredDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLUnstructuredDataReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLUnstructuredDataReader\nC++: vtkXMLUnstructuredDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfPoints", PyvtkXMLUnstructuredDataReader_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nGet the number of points in the output.\n"},
  {(char*)"GetNumberOfCells", PyvtkXMLUnstructuredDataReader_GetNumberOfCells, METH_VARARGS,
   (char*)"V.GetNumberOfCells() -> int\nC++: virtual vtkIdType GetNumberOfCells()\n\nGet the number of cells in the output.\n"},
  {(char*)"SetupUpdateExtent", PyvtkXMLUnstructuredDataReader_SetupUpdateExtent, METH_VARARGS,
   (char*)"V.SetupUpdateExtent(int, int, int)\nC++: void SetupUpdateExtent(int piece, int numberOfPieces,\n    int ghostLevel)\n\nSetup the reader as if the given update extent were requested by\nits output.  This can be used after an UpdateInformation to\nvalidate GetNumberOfPoints() and GetNumberOfCells() without\nactually reading data.\n"},
  {(char*)"CopyOutputInformation", PyvtkXMLUnstructuredDataReader_CopyOutputInformation, METH_VARARGS,
   (char*)"V.CopyOutputInformation(vtkInformation, int)\nC++: virtual void CopyOutputInformation(vtkInformation *outInfo,\n    int port)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLUnstructuredDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLUnstructuredDataReader_Methods,
    "vtkXMLUnstructuredDataReader", modulename,
    NULL, NULL,
    PyvtkXMLUnstructuredDataReader_Doc(),
    PyVTKClass_vtkXMLDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLUnstructuredDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLUnstructuredDataReader - Superclass for unstructured data XML\nreaders.\n\n",
    "Superclass: vtkXMLDataReader\n\n",
    "vtkXMLUnstructuredDataReader provides functionality common to all\nunstructured data format readers.\n\nSee Also:\n\nvtkXMLPolyDataReader vtkXMLUnstructuredGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLUnstructuredDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLUnstructuredDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLUnstructuredDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

