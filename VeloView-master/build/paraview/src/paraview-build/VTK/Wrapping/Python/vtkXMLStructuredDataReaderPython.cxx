// python wrapper for vtkXMLStructuredDataReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLStructuredDataReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLStructuredDataReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLStructuredDataReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLDataReaderNew
#endif

static const char **PyvtkXMLStructuredDataReader_Doc();


static PyObject *
PyvtkXMLStructuredDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLStructuredDataReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLStructuredDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLStructuredDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLStructuredDataReader::NewInstance());

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
PyvtkXMLStructuredDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLStructuredDataReader *tempr = vtkXMLStructuredDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkXMLStructuredDataReader::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkXMLStructuredDataReader::GetNumberOfCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_SetWholeSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWholeSlices(temp0);
      }
    else
      {
      op->vtkXMLStructuredDataReader::SetWholeSlices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_GetWholeSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWholeSlices() :
      op->vtkXMLStructuredDataReader::GetWholeSlices());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_WholeSlicesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WholeSlicesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WholeSlicesOn();
      }
    else
      {
      op->vtkXMLStructuredDataReader::WholeSlicesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_WholeSlicesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WholeSlicesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WholeSlicesOff();
      }
    else
      {
      op->vtkXMLStructuredDataReader::WholeSlicesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataReader_CopyOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataReader *op = static_cast<vtkXMLStructuredDataReader *>(vp);

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
      op->vtkXMLStructuredDataReader::CopyOutputInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLStructuredDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLStructuredDataReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLStructuredDataReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLStructuredDataReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLStructuredDataReader\nC++: vtkXMLStructuredDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLStructuredDataReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLStructuredDataReader\nC++: vtkXMLStructuredDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfPoints", PyvtkXMLStructuredDataReader_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nGet the number of points in the output.\n"},
  {(char*)"GetNumberOfCells", PyvtkXMLStructuredDataReader_GetNumberOfCells, METH_VARARGS,
   (char*)"V.GetNumberOfCells() -> int\nC++: virtual vtkIdType GetNumberOfCells()\n\nGet the number of cells in the output.\n"},
  {(char*)"SetWholeSlices", PyvtkXMLStructuredDataReader_SetWholeSlices, METH_VARARGS,
   (char*)"V.SetWholeSlices(int)\nC++: void SetWholeSlices(int a)\n\nGet/Set whether the reader gets a whole slice from disk when only\na rectangle inside it is needed.  This mode reads more data than\nnecessary, but prevents many short reads from interacting poorly\nwith the compression and encoding schemes.\n"},
  {(char*)"GetWholeSlices", PyvtkXMLStructuredDataReader_GetWholeSlices, METH_VARARGS,
   (char*)"V.GetWholeSlices() -> int\nC++: int GetWholeSlices()\n\nGet/Set whether the reader gets a whole slice from disk when only\na rectangle inside it is needed.  This mode reads more data than\nnecessary, but prevents many short reads from interacting poorly\nwith the compression and encoding schemes.\n"},
  {(char*)"WholeSlicesOn", PyvtkXMLStructuredDataReader_WholeSlicesOn, METH_VARARGS,
   (char*)"V.WholeSlicesOn()\nC++: void WholeSlicesOn()\n\nGet/Set whether the reader gets a whole slice from disk when only\na rectangle inside it is needed.  This mode reads more data than\nnecessary, but prevents many short reads from interacting poorly\nwith the compression and encoding schemes.\n"},
  {(char*)"WholeSlicesOff", PyvtkXMLStructuredDataReader_WholeSlicesOff, METH_VARARGS,
   (char*)"V.WholeSlicesOff()\nC++: void WholeSlicesOff()\n\nGet/Set whether the reader gets a whole slice from disk when only\na rectangle inside it is needed.  This mode reads more data than\nnecessary, but prevents many short reads from interacting poorly\nwith the compression and encoding schemes.\n"},
  {(char*)"CopyOutputInformation", PyvtkXMLStructuredDataReader_CopyOutputInformation, METH_VARARGS,
   (char*)"V.CopyOutputInformation(vtkInformation, int)\nC++: virtual void CopyOutputInformation(vtkInformation *outInfo,\n    int port)\n\nFor the specified port, copy the information this reader sets up\nin SetupOutputInformation to outInfo\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLStructuredDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLStructuredDataReader_Methods,
    "vtkXMLStructuredDataReader", modulename,
    NULL, NULL,
    PyvtkXMLStructuredDataReader_Doc(),
    PyVTKClass_vtkXMLDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLStructuredDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLStructuredDataReader - Superclass for structured data XML\nreaders.\n\n",
    "Superclass: vtkXMLDataReader\n\n",
    "vtkXMLStructuredDataReader provides functionality common to all\nstructured data format readers.\n\nSee Also:\n\nvtkXMLImageDataReader vtkXMLStructuredGridReader\nvtkXMLRectilinearGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLStructuredDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLStructuredDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLStructuredDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

