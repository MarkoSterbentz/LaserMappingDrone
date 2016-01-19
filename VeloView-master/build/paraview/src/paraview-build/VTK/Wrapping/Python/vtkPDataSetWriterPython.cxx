// python wrapper for vtkPDataSetWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPDataSetWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPDataSetWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPDataSetWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetWriterNew
extern "C" { PyObject *PyVTKClass_vtkDataSetWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetWriterNew
#endif

static const char **PyvtkPDataSetWriter_Doc();


static PyObject *
PyvtkPDataSetWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPDataSetWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPDataSetWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPDataSetWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPDataSetWriter::NewInstance());

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
PyvtkPDataSetWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPDataSetWriter *tempr = vtkPDataSetWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Write() :
      op->vtkPDataSetWriter::Write());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

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
      op->vtkPDataSetWriter::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkPDataSetWriter::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

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
      op->vtkPDataSetWriter::SetGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkPDataSetWriter::GetGhostLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_SetStartPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

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
      op->vtkPDataSetWriter::SetStartPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_GetStartPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStartPiece() :
      op->vtkPDataSetWriter::GetStartPiece());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_SetEndPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

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
      op->vtkPDataSetWriter::SetEndPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_GetEndPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEndPiece() :
      op->vtkPDataSetWriter::GetEndPiece());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_SetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePattern(temp0);
      }
    else
      {
      op->vtkPDataSetWriter::SetFilePattern(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_GetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFilePattern() :
      op->vtkPDataSetWriter::GetFilePattern());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_SetUseRelativeFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRelativeFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseRelativeFileNames(temp0);
      }
    else
      {
      op->vtkPDataSetWriter::SetUseRelativeFileNames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_GetUseRelativeFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRelativeFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseRelativeFileNames() :
      op->vtkPDataSetWriter::GetUseRelativeFileNames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_UseRelativeFileNamesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRelativeFileNamesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseRelativeFileNamesOn();
      }
    else
      {
      op->vtkPDataSetWriter::UseRelativeFileNamesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_UseRelativeFileNamesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRelativeFileNamesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseRelativeFileNamesOff();
      }
    else
      {
      op->vtkPDataSetWriter::UseRelativeFileNamesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

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
      op->vtkPDataSetWriter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPDataSetWriter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDataSetWriter *op = static_cast<vtkPDataSetWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPDataSetWriter::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPDataSetWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkPDataSetWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPDataSetWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPDataSetWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPDataSetWriter\nC++: vtkPDataSetWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPDataSetWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPDataSetWriter\nC++: vtkPDataSetWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Write", PyvtkPDataSetWriter_Write, METH_VARARGS,
   (char*)"V.Write() -> int\nC++: virtual int Write()\n\nWrite the pvtk file and cooresponding vtk files.\n"},
  {(char*)"SetNumberOfPieces", PyvtkPDataSetWriter_SetNumberOfPieces, METH_VARARGS,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int num)\n\nThis is how many pieces the whole data set will be divided into.\n"},
  {(char*)"GetNumberOfPieces", PyvtkPDataSetWriter_GetNumberOfPieces, METH_VARARGS,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nThis is how many pieces the whole data set will be divided into.\n"},
  {(char*)"SetGhostLevel", PyvtkPDataSetWriter_SetGhostLevel, METH_VARARGS,
   (char*)"V.SetGhostLevel(int)\nC++: void SetGhostLevel(int a)\n\nExtra ghost cells will be written out to each piece file if this\nvalue is larger than 0.\n"},
  {(char*)"GetGhostLevel", PyvtkPDataSetWriter_GetGhostLevel, METH_VARARGS,
   (char*)"V.GetGhostLevel() -> int\nC++: int GetGhostLevel()\n\nExtra ghost cells will be written out to each piece file if this\nvalue is larger than 0.\n"},
  {(char*)"SetStartPiece", PyvtkPDataSetWriter_SetStartPiece, METH_VARARGS,
   (char*)"V.SetStartPiece(int)\nC++: void SetStartPiece(int a)\n\nThis is the range of pieces that that this writer is responsible\nfor writing.  All pieces must be written by some process.  The\nprocess that writes piece 0 also writes the pvtk file that lists\nall the piece file names.\n"},
  {(char*)"GetStartPiece", PyvtkPDataSetWriter_GetStartPiece, METH_VARARGS,
   (char*)"V.GetStartPiece() -> int\nC++: int GetStartPiece()\n\nThis is the range of pieces that that this writer is responsible\nfor writing.  All pieces must be written by some process.  The\nprocess that writes piece 0 also writes the pvtk file that lists\nall the piece file names.\n"},
  {(char*)"SetEndPiece", PyvtkPDataSetWriter_SetEndPiece, METH_VARARGS,
   (char*)"V.SetEndPiece(int)\nC++: void SetEndPiece(int a)\n\nThis is the range of pieces that that this writer is responsible\nfor writing.  All pieces must be written by some process.  The\nprocess that writes piece 0 also writes the pvtk file that lists\nall the piece file names.\n"},
  {(char*)"GetEndPiece", PyvtkPDataSetWriter_GetEndPiece, METH_VARARGS,
   (char*)"V.GetEndPiece() -> int\nC++: int GetEndPiece()\n\nThis is the range of pieces that that this writer is responsible\nfor writing.  All pieces must be written by some process.  The\nprocess that writes piece 0 also writes the pvtk file that lists\nall the piece file names.\n"},
  {(char*)"SetFilePattern", PyvtkPDataSetWriter_SetFilePattern, METH_VARARGS,
   (char*)"V.SetFilePattern(string)\nC++: void SetFilePattern(char *)\n\nThis file pattern uses the file name and piece number to contruct\na file name for the piece file.\n"},
  {(char*)"GetFilePattern", PyvtkPDataSetWriter_GetFilePattern, METH_VARARGS,
   (char*)"V.GetFilePattern() -> string\nC++: char *GetFilePattern()\n\nThis file pattern uses the file name and piece number to contruct\na file name for the piece file.\n"},
  {(char*)"SetUseRelativeFileNames", PyvtkPDataSetWriter_SetUseRelativeFileNames, METH_VARARGS,
   (char*)"V.SetUseRelativeFileNames(int)\nC++: void SetUseRelativeFileNames(int a)\n\nThis flag determines whether to use absolute paths for the piece\nfiles. By default the pieces are put in the main directory, and\nthe piece file names in the meta data pvtk file are relative to\nthis directory. This should make moving the whole lot to another\ndirectory, an easier task.\n"},
  {(char*)"GetUseRelativeFileNames", PyvtkPDataSetWriter_GetUseRelativeFileNames, METH_VARARGS,
   (char*)"V.GetUseRelativeFileNames() -> int\nC++: int GetUseRelativeFileNames()\n\nThis flag determines whether to use absolute paths for the piece\nfiles. By default the pieces are put in the main directory, and\nthe piece file names in the meta data pvtk file are relative to\nthis directory. This should make moving the whole lot to another\ndirectory, an easier task.\n"},
  {(char*)"UseRelativeFileNamesOn", PyvtkPDataSetWriter_UseRelativeFileNamesOn, METH_VARARGS,
   (char*)"V.UseRelativeFileNamesOn()\nC++: void UseRelativeFileNamesOn()\n\nThis flag determines whether to use absolute paths for the piece\nfiles. By default the pieces are put in the main directory, and\nthe piece file names in the meta data pvtk file are relative to\nthis directory. This should make moving the whole lot to another\ndirectory, an easier task.\n"},
  {(char*)"UseRelativeFileNamesOff", PyvtkPDataSetWriter_UseRelativeFileNamesOff, METH_VARARGS,
   (char*)"V.UseRelativeFileNamesOff()\nC++: void UseRelativeFileNamesOff()\n\nThis flag determines whether to use absolute paths for the piece\nfiles. By default the pieces are put in the main directory, and\nthe piece file names in the meta data pvtk file are relative to\nthis directory. This should make moving the whole lot to another\ndirectory, an easier task.\n"},
  {(char*)"SetController", PyvtkPDataSetWriter_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nController used to communicate data type of blocks. By default,\nthe global controller is used. If you want another controller to\nbe used, set it with this.\n"},
  {(char*)"GetController", PyvtkPDataSetWriter_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nController used to communicate data type of blocks. By default,\nthe global controller is used. If you want another controller to\nbe used, set it with this.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPDataSetWriter_StaticNew()
{
  return vtkPDataSetWriter::New();
}

PyObject *PyVTKClass_vtkPDataSetWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPDataSetWriter_StaticNew,
    PyvtkPDataSetWriter_Methods,
    "vtkPDataSetWriter", modulename,
    NULL, NULL,
    PyvtkPDataSetWriter_Doc(),
    PyVTKClass_vtkDataSetWriterNew(modulename));
  return cls;
}

const char **PyvtkPDataSetWriter_Doc()
{
  static const char *docstring[] = {
    "vtkPDataSetWriter - Manages writing pieces of a data set.\n\n",
    "Superclass: vtkDataSetWriter\n\n",
    "vtkPDataSetWriter will write a piece of a file, and will also create\na metadata file that lists all of the files in a data set.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPDataSetWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPDataSetWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPDataSetWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

