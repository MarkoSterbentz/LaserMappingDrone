// python wrapper for vtkEnSightMasterServerReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEnSightMasterServerReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEnSightMasterServerReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEnSightMasterServerReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGenericEnSightReaderNew
extern "C" { PyObject *PyVTKClass_vtkGenericEnSightReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkGenericEnSightReaderNew
#endif

static const char **PyvtkEnSightMasterServerReader_Doc();


static PyObject *
PyvtkEnSightMasterServerReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEnSightMasterServerReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnSightMasterServerReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEnSightMasterServerReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnSightMasterServerReader::NewInstance());

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
PyvtkEnSightMasterServerReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEnSightMasterServerReader *tempr = vtkEnSightMasterServerReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_DetermineFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetermineFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->DetermineFileName(temp0) :
      op->vtkEnSightMasterServerReader::DetermineFileName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_GetPieceCaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceCaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPieceCaseFileName() :
      op->vtkEnSightMasterServerReader::GetPieceCaseFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_SetCurrentPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentPiece(temp0);
      }
    else
      {
      op->vtkEnSightMasterServerReader::SetCurrentPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_GetCurrentPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCurrentPiece() :
      op->vtkEnSightMasterServerReader::GetCurrentPiece());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkEnSightMasterServerReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEnSightMasterServerReader_Methods[] = {
  {(char*)"GetClassName", PyvtkEnSightMasterServerReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEnSightMasterServerReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEnSightMasterServerReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEnSightMasterServerReader\nC++: vtkEnSightMasterServerReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEnSightMasterServerReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEnSightMasterServerReader\nC++: vtkEnSightMasterServerReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DetermineFileName", PyvtkEnSightMasterServerReader_DetermineFileName, METH_VARARGS,
   (char*)"V.DetermineFileName(int) -> int\nC++: int DetermineFileName(int piece)\n\nDetermine which file should be read for piece\n"},
  {(char*)"GetPieceCaseFileName", PyvtkEnSightMasterServerReader_GetPieceCaseFileName, METH_VARARGS,
   (char*)"V.GetPieceCaseFileName() -> string\nC++: char *GetPieceCaseFileName()\n\nGet the file name that will be read.\n"},
  {(char*)"SetCurrentPiece", PyvtkEnSightMasterServerReader_SetCurrentPiece, METH_VARARGS,
   (char*)"V.SetCurrentPiece(int)\nC++: void SetCurrentPiece(int a)\n\nSet or get the current piece.\n"},
  {(char*)"GetCurrentPiece", PyvtkEnSightMasterServerReader_GetCurrentPiece, METH_VARARGS,
   (char*)"V.GetCurrentPiece() -> int\nC++: int GetCurrentPiece()\n\nSet or get the current piece.\n"},
  {(char*)"CanReadFile", PyvtkEnSightMasterServerReader_CanReadFile, METH_VARARGS,
   (char*)"V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *fname)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEnSightMasterServerReader_StaticNew()
{
  return vtkEnSightMasterServerReader::New();
}

PyObject *PyVTKClass_vtkEnSightMasterServerReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEnSightMasterServerReader_StaticNew,
    PyvtkEnSightMasterServerReader_Methods,
    "vtkEnSightMasterServerReader", modulename,
    NULL, NULL,
    PyvtkEnSightMasterServerReader_Doc(),
    PyVTKClass_vtkGenericEnSightReaderNew(modulename));
  return cls;
}

const char **PyvtkEnSightMasterServerReader_Doc()
{
  static const char *docstring[] = {
    "vtkEnSightMasterServerReader - reader for compund EnSight files\n\n",
    "Superclass: vtkGenericEnSightReader\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEnSightMasterServerReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEnSightMasterServerReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEnSightMasterServerReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

