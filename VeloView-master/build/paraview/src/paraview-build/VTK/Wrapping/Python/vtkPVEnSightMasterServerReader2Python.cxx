// python wrapper for vtkPVEnSightMasterServerReader2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVEnSightMasterServerReader2.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVEnSightMasterServerReader2(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVEnSightMasterServerReader2New(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPGenericEnSightReaderNew
extern "C" { PyObject *PyVTKClass_vtkPGenericEnSightReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkPGenericEnSightReaderNew
#endif

static const char **PyvtkPVEnSightMasterServerReader2_Doc();


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVEnSightMasterServerReader2::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVEnSightMasterServerReader2::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVEnSightMasterServerReader2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVEnSightMasterServerReader2::NewInstance());

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
PyvtkPVEnSightMasterServerReader2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVEnSightMasterServerReader2 *tempr = vtkPVEnSightMasterServerReader2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPVEnSightMasterServerReader2::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

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
      op->vtkPVEnSightMasterServerReader2::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkPVEnSightMasterServerReader2::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkPVEnSightMasterServerReader2::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_SetCaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCaseFileName(temp0);
      }
    else
      {
      op->vtkPVEnSightMasterServerReader2::SetCaseFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkPVEnSightMasterServerReader2::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkPVEnSightMasterServerReader2::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkPVEnSightMasterServerReader2::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkPVEnSightMasterServerReader2::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkPVEnSightMasterServerReader2::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkPVEnSightMasterServerReader2::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkPVEnSightMasterServerReader2::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCellArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkPVEnSightMasterServerReader2::SetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_SetByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToBigEndian();
      }
    else
      {
      op->vtkPVEnSightMasterServerReader2::SetByteOrderToBigEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_SetByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToLittleEndian();
      }
    else
      {
      op->vtkPVEnSightMasterServerReader2::SetByteOrderToLittleEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_SetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrder(temp0);
      }
    else
      {
      op->vtkPVEnSightMasterServerReader2::SetByteOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetByteOrder() :
      op->vtkPVEnSightMasterServerReader2::GetByteOrder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetByteOrderAsString() :
      op->vtkPVEnSightMasterServerReader2::GetByteOrderAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVEnSightMasterServerReader2_Methods[] = {
  {(char*)"GetClassName", PyvtkPVEnSightMasterServerReader2_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVEnSightMasterServerReader2_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVEnSightMasterServerReader2_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVEnSightMasterServerReader2\nC++: vtkPVEnSightMasterServerReader2 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVEnSightMasterServerReader2_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVEnSightMasterServerReader2\nC++: vtkPVEnSightMasterServerReader2 *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetController", PyvtkPVEnSightMasterServerReader2_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nThis class uses MPI communication mechanisms to verify the\nintegrity of all case files in the master file.  The get method\ninterface must use vtkMultiProcessController instead of\nvtkMPIController because Tcl wrapping requires the class's\nwrapper to be defined, but it is not defined if MPI is not on. In\nclient-server mode, we may still need to create an instance of\nthis class on the client process even if MPI is not compiled in.\n"},
  {(char*)"SetController", PyvtkPVEnSightMasterServerReader2_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(\n    vtkMultiProcessController *controller)\n\nThis class uses MPI communication mechanisms to verify the\nintegrity of all case files in the master file.  The get method\ninterface must use vtkMultiProcessController instead of\nvtkMPIController because Tcl wrapping requires the class's\nwrapper to be defined, but it is not defined if MPI is not on. In\nclient-server mode, we may still need to create an instance of\nthis class on the client process even if MPI is not compiled in.\n"},
  {(char*)"CanReadFile", PyvtkPVEnSightMasterServerReader2_CanReadFile, METH_VARARGS,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *)\n\nReturn whether we can read the file given.\n"},
  {(char*)"GetNumberOfPieces", PyvtkPVEnSightMasterServerReader2_GetNumberOfPieces, METH_VARARGS,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nGet the number of pieces in the file.  Valid after\nUpdateInformation.\n"},
  {(char*)"SetCaseFileName", PyvtkPVEnSightMasterServerReader2_SetCaseFileName, METH_VARARGS,
   (char*)"V.SetCaseFileName(string)\nC++: void SetCaseFileName(const char *fileName)\n\nSet the name of the file to be read.\n"},
  {(char*)"GetNumberOfPointArrays", PyvtkPVEnSightMasterServerReader2_GetNumberOfPointArrays, METH_VARARGS,
   (char*)"V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nGet the number of point or cell arrays available in the input.\n"},
  {(char*)"GetNumberOfCellArrays", PyvtkPVEnSightMasterServerReader2_GetNumberOfCellArrays, METH_VARARGS,
   (char*)"V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nGet the number of point or cell arrays available in the input.\n"},
  {(char*)"GetPointArrayName", PyvtkPVEnSightMasterServerReader2_GetPointArrayName, METH_VARARGS,
   (char*)"V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nGet the name of the point or cell array with the given index in\nthe input.\n"},
  {(char*)"GetCellArrayName", PyvtkPVEnSightMasterServerReader2_GetCellArrayName, METH_VARARGS,
   (char*)"V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nGet the name of the point or cell array with the given index in\nthe input.\n"},
  {(char*)"GetPointArrayStatus", PyvtkPVEnSightMasterServerReader2_GetPointArrayStatus, METH_VARARGS,
   (char*)"V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"GetCellArrayStatus", PyvtkPVEnSightMasterServerReader2_GetCellArrayStatus, METH_VARARGS,
   (char*)"V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"SetPointArrayStatus", PyvtkPVEnSightMasterServerReader2_SetPointArrayStatus, METH_VARARGS,
   (char*)"V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"SetCellArrayStatus", PyvtkPVEnSightMasterServerReader2_SetCellArrayStatus, METH_VARARGS,
   (char*)"V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"SetByteOrderToBigEndian", PyvtkPVEnSightMasterServerReader2_SetByteOrderToBigEndian, METH_VARARGS,
   (char*)"V.SetByteOrderToBigEndian()\nC++: void SetByteOrderToBigEndian()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"SetByteOrderToLittleEndian", PyvtkPVEnSightMasterServerReader2_SetByteOrderToLittleEndian, METH_VARARGS,
   (char*)"V.SetByteOrderToLittleEndian()\nC++: void SetByteOrderToLittleEndian()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"SetByteOrder", PyvtkPVEnSightMasterServerReader2_SetByteOrder, METH_VARARGS,
   (char*)"V.SetByteOrder(int)\nC++: void SetByteOrder(int byteOrder)\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"GetByteOrder", PyvtkPVEnSightMasterServerReader2_GetByteOrder, METH_VARARGS,
   (char*)"V.GetByteOrder() -> int\nC++: int GetByteOrder()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"GetByteOrderAsString", PyvtkPVEnSightMasterServerReader2_GetByteOrderAsString, METH_VARARGS,
   (char*)"V.GetByteOrderAsString() -> string\nC++: const char *GetByteOrderAsString()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVEnSightMasterServerReader2_StaticNew()
{
  return vtkPVEnSightMasterServerReader2::New();
}

PyObject *PyVTKClass_vtkPVEnSightMasterServerReader2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVEnSightMasterServerReader2_StaticNew,
    PyvtkPVEnSightMasterServerReader2_Methods,
    "vtkPVEnSightMasterServerReader2", modulename,
    NULL, NULL,
    PyvtkPVEnSightMasterServerReader2_Doc(),
    PyVTKClass_vtkPGenericEnSightReaderNew(modulename));
  return cls;
}

const char **PyvtkPVEnSightMasterServerReader2_Doc()
{
  static const char *docstring[] = {
    "vtkPVEnSightMasterServerReader2 - \n\n",
    "Superclass: vtkPGenericEnSightReader\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVEnSightMasterServerReader2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVEnSightMasterServerReader2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVEnSightMasterServerReader2", o) != 0)
    {
    Py_DECREF(o);
    }

}

