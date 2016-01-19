// python wrapper for vtkPVEnSightMasterServerReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVEnSightMasterServerReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVEnSightMasterServerReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVEnSightMasterServerReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGenericEnSightReaderNew
extern "C" { PyObject *PyVTKClass_vtkGenericEnSightReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkGenericEnSightReaderNew
#endif

static const char **PyvtkPVEnSightMasterServerReader_Doc();


static PyObject *
PyvtkPVEnSightMasterServerReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader *op = static_cast<vtkPVEnSightMasterServerReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVEnSightMasterServerReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader *op = static_cast<vtkPVEnSightMasterServerReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVEnSightMasterServerReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader *op = static_cast<vtkPVEnSightMasterServerReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVEnSightMasterServerReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVEnSightMasterServerReader::NewInstance());

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
PyvtkPVEnSightMasterServerReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVEnSightMasterServerReader *tempr = vtkPVEnSightMasterServerReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader *op = static_cast<vtkPVEnSightMasterServerReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPVEnSightMasterServerReader::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader *op = static_cast<vtkPVEnSightMasterServerReader *>(vp);

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
      op->vtkPVEnSightMasterServerReader::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader *op = static_cast<vtkPVEnSightMasterServerReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkPVEnSightMasterServerReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader *op = static_cast<vtkPVEnSightMasterServerReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkPVEnSightMasterServerReader::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVEnSightMasterServerReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPVEnSightMasterServerReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVEnSightMasterServerReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVEnSightMasterServerReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVEnSightMasterServerReader\nC++: vtkPVEnSightMasterServerReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVEnSightMasterServerReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVEnSightMasterServerReader\nC++: vtkPVEnSightMasterServerReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetController", PyvtkPVEnSightMasterServerReader_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nThis class uses MPI communication mechanisms to verify the\nintegrity of all case files in the master file.  The get method\ninterface must use vtkMultiProcessController instead of\nvtkMPIController because Tcl wrapping requires the class's\nwrapper to be defined, but it is not defined if MPI is not on. In\nclient-server mode, we may still need to create an instance of\nthis class on the client process even if MPI is not compiled in.\n"},
  {(char*)"SetController", PyvtkPVEnSightMasterServerReader_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(\n    vtkMultiProcessController *controller)\n\nThis class uses MPI communication mechanisms to verify the\nintegrity of all case files in the master file.  The get method\ninterface must use vtkMultiProcessController instead of\nvtkMPIController because Tcl wrapping requires the class's\nwrapper to be defined, but it is not defined if MPI is not on. In\nclient-server mode, we may still need to create an instance of\nthis class on the client process even if MPI is not compiled in.\n"},
  {(char*)"CanReadFile", PyvtkPVEnSightMasterServerReader_CanReadFile, METH_VARARGS,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *)\n\nReturn whether we can read the file given.\n"},
  {(char*)"GetNumberOfPieces", PyvtkPVEnSightMasterServerReader_GetNumberOfPieces, METH_VARARGS,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nGet the number of pieces in the file.  Valid after\nUpdateInformation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVEnSightMasterServerReader_StaticNew()
{
  return vtkPVEnSightMasterServerReader::New();
}

PyObject *PyVTKClass_vtkPVEnSightMasterServerReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVEnSightMasterServerReader_StaticNew,
    PyvtkPVEnSightMasterServerReader_Methods,
    "vtkPVEnSightMasterServerReader", modulename,
    NULL, NULL,
    PyvtkPVEnSightMasterServerReader_Doc(),
    PyVTKClass_vtkGenericEnSightReaderNew(modulename));
  return cls;
}

const char **PyvtkPVEnSightMasterServerReader_Doc()
{
  static const char *docstring[] = {
    "vtkPVEnSightMasterServerReader - \n\n",
    "Superclass: vtkGenericEnSightReader\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVEnSightMasterServerReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVEnSightMasterServerReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVEnSightMasterServerReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

