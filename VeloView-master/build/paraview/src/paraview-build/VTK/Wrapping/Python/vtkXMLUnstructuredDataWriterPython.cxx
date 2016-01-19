// python wrapper for vtkXMLUnstructuredDataWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkXMLUnstructuredDataWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLUnstructuredDataWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLUnstructuredDataWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLWriterNew
#endif

static const char **PyvtkXMLUnstructuredDataWriter_Doc();


static PyObject *
PyvtkXMLUnstructuredDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLUnstructuredDataWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLUnstructuredDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLUnstructuredDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLUnstructuredDataWriter::NewInstance());

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
PyvtkXMLUnstructuredDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLUnstructuredDataWriter *tempr = vtkXMLUnstructuredDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataWriter_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPieces(temp0);
      }
    else
      {
      op->vtkXMLUnstructuredDataWriter::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataWriter_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkXMLUnstructuredDataWriter::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataWriter_SetWritePiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWritePiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWritePiece(temp0);
      }
    else
      {
      op->vtkXMLUnstructuredDataWriter::SetWritePiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataWriter_GetWritePiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWritePiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWritePiece() :
      op->vtkXMLUnstructuredDataWriter::GetWritePiece());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGhostLevel(temp0);
      }
    else
      {
      op->vtkXMLUnstructuredDataWriter::SetGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkXMLUnstructuredDataWriter::GetGhostLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLUnstructuredDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLUnstructuredDataWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLUnstructuredDataWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLUnstructuredDataWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLUnstructuredDataWriter\nC++: vtkXMLUnstructuredDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLUnstructuredDataWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLUnstructuredDataWriter\nC++: vtkXMLUnstructuredDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfPieces", PyvtkXMLUnstructuredDataWriter_SetNumberOfPieces, METH_VARARGS,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int a)\n\nGet/Set the number of pieces used to stream the image through the\npipeline while writing to the file.\n"},
  {(char*)"GetNumberOfPieces", PyvtkXMLUnstructuredDataWriter_GetNumberOfPieces, METH_VARARGS,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nGet/Set the number of pieces used to stream the image through the\npipeline while writing to the file.\n"},
  {(char*)"SetWritePiece", PyvtkXMLUnstructuredDataWriter_SetWritePiece, METH_VARARGS,
   (char*)"V.SetWritePiece(int)\nC++: void SetWritePiece(int a)\n\nGet/Set the piece to write to the file.  If this is negative or\nequal to the NumberOfPieces, all pieces will be written.\n"},
  {(char*)"GetWritePiece", PyvtkXMLUnstructuredDataWriter_GetWritePiece, METH_VARARGS,
   (char*)"V.GetWritePiece() -> int\nC++: int GetWritePiece()\n\nGet/Set the piece to write to the file.  If this is negative or\nequal to the NumberOfPieces, all pieces will be written.\n"},
  {(char*)"SetGhostLevel", PyvtkXMLUnstructuredDataWriter_SetGhostLevel, METH_VARARGS,
   (char*)"V.SetGhostLevel(int)\nC++: void SetGhostLevel(int a)\n\nGet/Set the ghost level used to pad each piece.\n"},
  {(char*)"GetGhostLevel", PyvtkXMLUnstructuredDataWriter_GetGhostLevel, METH_VARARGS,
   (char*)"V.GetGhostLevel() -> int\nC++: int GetGhostLevel()\n\nGet/Set the ghost level used to pad each piece.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLUnstructuredDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLUnstructuredDataWriter_Methods,
    "vtkXMLUnstructuredDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLUnstructuredDataWriter_Doc(),
    PyVTKClass_vtkXMLWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLUnstructuredDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLUnstructuredDataWriter - Superclass for VTK XML unstructured\ndata writers.\n\n",
    "Superclass: vtkXMLWriter\n\n",
    "vtkXMLUnstructuredDataWriter provides VTK XML writing functionality\nthat is common among all the unstructured data formats.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLUnstructuredDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLUnstructuredDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLUnstructuredDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

