// python wrapper for vtkXMLPDataWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLPDataWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLPDataWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLPDataWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLWriterNew
#endif

static const char **PyvtkXMLPDataWriter_Doc();


static PyObject *
PyvtkXMLPDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLPDataWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLPDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPDataWriter::NewInstance());

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
PyvtkXMLPDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLPDataWriter *tempr = vtkXMLPDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

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
      op->vtkXMLPDataWriter::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkXMLPDataWriter::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_SetStartPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartPiece(temp0);
      }
    else
      {
      op->vtkXMLPDataWriter::SetStartPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_GetStartPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStartPiece() :
      op->vtkXMLPDataWriter::GetStartPiece());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_SetEndPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndPiece(temp0);
      }
    else
      {
      op->vtkXMLPDataWriter::SetEndPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_GetEndPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEndPiece() :
      op->vtkXMLPDataWriter::GetEndPiece());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

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
      op->vtkXMLPDataWriter::SetGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkXMLPDataWriter::GetGhostLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_SetWriteSummaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteSummaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteSummaryFile(temp0);
      }
    else
      {
      op->vtkXMLPDataWriter::SetWriteSummaryFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_GetWriteSummaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteSummaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWriteSummaryFile() :
      op->vtkXMLPDataWriter::GetWriteSummaryFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_WriteSummaryFileOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteSummaryFileOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteSummaryFileOn();
      }
    else
      {
      op->vtkXMLPDataWriter::WriteSummaryFileOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_WriteSummaryFileOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteSummaryFileOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteSummaryFileOff();
      }
    else
      {
      op->vtkXMLPDataWriter::WriteSummaryFileOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkXMLPDataWriter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkXMLPDataWriter::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPDataWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPDataWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPDataWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLPDataWriter\nC++: vtkXMLPDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPDataWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPDataWriter\nC++: vtkXMLPDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfPieces", PyvtkXMLPDataWriter_SetNumberOfPieces, METH_VARARGS,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int a)\n\nGet/Set the number of pieces that are being written in parallel.\n"},
  {(char*)"GetNumberOfPieces", PyvtkXMLPDataWriter_GetNumberOfPieces, METH_VARARGS,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nGet/Set the number of pieces that are being written in parallel.\n"},
  {(char*)"SetStartPiece", PyvtkXMLPDataWriter_SetStartPiece, METH_VARARGS,
   (char*)"V.SetStartPiece(int)\nC++: void SetStartPiece(int a)\n\nGet/Set the range of pieces assigned to this writer.\n"},
  {(char*)"GetStartPiece", PyvtkXMLPDataWriter_GetStartPiece, METH_VARARGS,
   (char*)"V.GetStartPiece() -> int\nC++: int GetStartPiece()\n\nGet/Set the range of pieces assigned to this writer.\n"},
  {(char*)"SetEndPiece", PyvtkXMLPDataWriter_SetEndPiece, METH_VARARGS,
   (char*)"V.SetEndPiece(int)\nC++: void SetEndPiece(int a)\n\nGet/Set the range of pieces assigned to this writer.\n"},
  {(char*)"GetEndPiece", PyvtkXMLPDataWriter_GetEndPiece, METH_VARARGS,
   (char*)"V.GetEndPiece() -> int\nC++: int GetEndPiece()\n\nGet/Set the range of pieces assigned to this writer.\n"},
  {(char*)"SetGhostLevel", PyvtkXMLPDataWriter_SetGhostLevel, METH_VARARGS,
   (char*)"V.SetGhostLevel(int)\nC++: void SetGhostLevel(int a)\n\nGet/Set the ghost level used for this writer's piece.\n"},
  {(char*)"GetGhostLevel", PyvtkXMLPDataWriter_GetGhostLevel, METH_VARARGS,
   (char*)"V.GetGhostLevel() -> int\nC++: int GetGhostLevel()\n\nGet/Set the ghost level used for this writer's piece.\n"},
  {(char*)"SetWriteSummaryFile", PyvtkXMLPDataWriter_SetWriteSummaryFile, METH_VARARGS,
   (char*)"V.SetWriteSummaryFile(int)\nC++: virtual void SetWriteSummaryFile(int flag)\n\nGet/Set whether the writer should write the summary file that\nrefers to all of the pieces' individual files. This is on by\ndefault. Note that only the first process writes the summary\nfile.\n"},
  {(char*)"GetWriteSummaryFile", PyvtkXMLPDataWriter_GetWriteSummaryFile, METH_VARARGS,
   (char*)"V.GetWriteSummaryFile() -> int\nC++: int GetWriteSummaryFile()\n\nGet/Set whether the writer should write the summary file that\nrefers to all of the pieces' individual files. This is on by\ndefault. Note that only the first process writes the summary\nfile.\n"},
  {(char*)"WriteSummaryFileOn", PyvtkXMLPDataWriter_WriteSummaryFileOn, METH_VARARGS,
   (char*)"V.WriteSummaryFileOn()\nC++: void WriteSummaryFileOn()\n\nGet/Set whether the writer should write the summary file that\nrefers to all of the pieces' individual files. This is on by\ndefault. Note that only the first process writes the summary\nfile.\n"},
  {(char*)"WriteSummaryFileOff", PyvtkXMLPDataWriter_WriteSummaryFileOff, METH_VARARGS,
   (char*)"V.WriteSummaryFileOff()\nC++: void WriteSummaryFileOff()\n\nGet/Set whether the writer should write the summary file that\nrefers to all of the pieces' individual files. This is on by\ndefault. Note that only the first process writes the summary\nfile.\n"},
  {(char*)"SetController", PyvtkXMLPDataWriter_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nController used to communicate data type of blocks. By default,\nthe global controller is used. If you want another controller to\nbe used, set it with this.\n"},
  {(char*)"GetController", PyvtkXMLPDataWriter_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nController used to communicate data type of blocks. By default,\nthe global controller is used. If you want another controller to\nbe used, set it with this.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLPDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLPDataWriter_Methods,
    "vtkXMLPDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLPDataWriter_Doc(),
    PyVTKClass_vtkXMLWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPDataWriter - Write data in a parallel XML format.\n\n",
    "Superclass: vtkXMLWriter\n\n",
    "vtkXMLPDataWriter is the superclass for all XML parallel data set\nwriters.  It provides functionality needed for writing parallel\nformats, such as the selection of which writer writes the summary\nfile and what range of pieces are assigned to each serial writer.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

