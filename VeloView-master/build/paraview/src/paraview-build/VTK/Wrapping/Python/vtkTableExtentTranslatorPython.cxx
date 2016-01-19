// python wrapper for vtkTableExtentTranslator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTableExtentTranslator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTableExtentTranslator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTableExtentTranslatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExtentTranslatorNew
extern "C" { PyObject *PyVTKClass_vtkExtentTranslatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtentTranslatorNew
#endif

static const char **PyvtkTableExtentTranslator_Doc();


static PyObject *
PyvtkTableExtentTranslator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTableExtentTranslator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableExtentTranslator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTableExtentTranslator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableExtentTranslator::NewInstance());

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
PyvtkTableExtentTranslator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTableExtentTranslator *tempr = vtkTableExtentTranslator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

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
      op->vtkTableExtentTranslator::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_SetNumberOfPiecesInTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPiecesInTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPiecesInTable(temp0);
      }
    else
      {
      op->vtkTableExtentTranslator::SetNumberOfPiecesInTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_GetNumberOfPiecesInTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPiecesInTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPiecesInTable() :
      op->vtkTableExtentTranslator::GetNumberOfPiecesInTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_PieceToExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->PieceToExtent() :
      op->vtkTableExtentTranslator::PieceToExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_PieceToExtentByPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtentByPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->PieceToExtentByPoints() :
      op->vtkTableExtentTranslator::PieceToExtentByPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_PieceToExtentThreadSafe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtentThreadSafe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int *temp3 = NULL;
  int *save3 = NULL;
  int small3[8];
  int size3 = 0;
  int *temp4 = NULL;
  int *save4 = NULL;
  int small4[8];
  int size4 = 0;
  int temp5;
  int temp6;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new int[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new int[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->PieceToExtentThreadSafe(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkTableExtentTranslator::PieceToExtentThreadSafe(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_SetExtentForPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentForPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetExtentForPiece(temp0, temp1);
      }
    else
      {
      op->vtkTableExtentTranslator::SetExtentForPiece(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_GetExtentForPiece_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentForPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetExtentForPiece(temp0, temp1);
      }
    else
      {
      op->vtkTableExtentTranslator::GetExtentForPiece(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkTableExtentTranslator_GetExtentForPiece_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentForPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetExtentForPiece(temp0) :
      op->vtkTableExtentTranslator::GetExtentForPiece(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTableExtentTranslator_GetExtentForPiece(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTableExtentTranslator_GetExtentForPiece_s1(self, args);
    case 1:
      return PyvtkTableExtentTranslator_GetExtentForPiece_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetExtentForPiece");
  return NULL;
}



static PyObject *
PyvtkTableExtentTranslator_SetMaximumGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumGhostLevel(temp0);
      }
    else
      {
      op->vtkTableExtentTranslator::SetMaximumGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_GetMaximumGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumGhostLevel() :
      op->vtkTableExtentTranslator::GetMaximumGhostLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_SetPieceAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPieceAvailable(temp0, temp1);
      }
    else
      {
      op->vtkTableExtentTranslator::SetPieceAvailable(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_GetPieceAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPieceAvailable(temp0) :
      op->vtkTableExtentTranslator::GetPieceAvailable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTableExtentTranslator_Methods[] = {
  {(char*)"GetClassName", PyvtkTableExtentTranslator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTableExtentTranslator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTableExtentTranslator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTableExtentTranslator\nC++: vtkTableExtentTranslator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTableExtentTranslator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTableExtentTranslator\nC++: vtkTableExtentTranslator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfPieces", PyvtkTableExtentTranslator_SetNumberOfPieces, METH_VARARGS,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int pieces)\n\n"},
  {(char*)"SetNumberOfPiecesInTable", PyvtkTableExtentTranslator_SetNumberOfPiecesInTable, METH_VARARGS,
   (char*)"V.SetNumberOfPiecesInTable(int)\nC++: void SetNumberOfPiecesInTable(int pieces)\n\nSet the real number of pieces in the extent table.\n"},
  {(char*)"GetNumberOfPiecesInTable", PyvtkTableExtentTranslator_GetNumberOfPiecesInTable, METH_VARARGS,
   (char*)"V.GetNumberOfPiecesInTable() -> int\nC++: int GetNumberOfPiecesInTable()\n\nSet the real number of pieces in the extent table.\n"},
  {(char*)"PieceToExtent", PyvtkTableExtentTranslator_PieceToExtent, METH_VARARGS,
   (char*)"V.PieceToExtent() -> int\nC++: int PieceToExtent()\n\nCalled to translate the current piece into an extent.  This is\nnot thread safe.\n"},
  {(char*)"PieceToExtentByPoints", PyvtkTableExtentTranslator_PieceToExtentByPoints, METH_VARARGS,
   (char*)"V.PieceToExtentByPoints() -> int\nC++: int PieceToExtentByPoints()\n\nNot supported by this subclass of vtkExtentTranslator.\n"},
  {(char*)"PieceToExtentThreadSafe", PyvtkTableExtentTranslator_PieceToExtentThreadSafe, METH_VARARGS,
   (char*)"V.PieceToExtentThreadSafe(int, int, int, [int, ...], [int, ...],\n    int, int) -> int\nC++: int PieceToExtentThreadSafe(int piece, int numPieces,\n    int ghostLevel, int *wholeExtent, int *resultExtent,\n    int splitMode, int byPoints)\n\nNot supported by this subclass of vtkExtentTranslator.\n"},
  {(char*)"SetExtentForPiece", PyvtkTableExtentTranslator_SetExtentForPiece, METH_VARARGS,
   (char*)"V.SetExtentForPiece(int, [int, ...])\nC++: virtual void SetExtentForPiece(int piece, int *extent)\n\nSet the extent to be used for a piece.  This sets the extent\ntable entry for the piece.\n"},
  {(char*)"GetExtentForPiece", PyvtkTableExtentTranslator_GetExtentForPiece, METH_VARARGS,
   (char*)"V.GetExtentForPiece(int, [int, ...])\nC++: virtual void GetExtentForPiece(int piece, int *extent)\nV.GetExtentForPiece(int) -> (int, ...)\nC++: virtual int *GetExtentForPiece(int piece)\n\nGet the extent table entry for the given piece.  This is only for\ncode that is setting up the table.  Extent translation should\nalways be done through the PieceToExtent method.\n"},
  {(char*)"SetMaximumGhostLevel", PyvtkTableExtentTranslator_SetMaximumGhostLevel, METH_VARARGS,
   (char*)"V.SetMaximumGhostLevel(int)\nC++: void SetMaximumGhostLevel(int a)\n\nSet the maximum ghost level that can be requested.  This can be\nused by a reader to make sure an extent request does not go\noutside the boundaries of the piece's file.\n"},
  {(char*)"GetMaximumGhostLevel", PyvtkTableExtentTranslator_GetMaximumGhostLevel, METH_VARARGS,
   (char*)"V.GetMaximumGhostLevel() -> int\nC++: int GetMaximumGhostLevel()\n\nSet the maximum ghost level that can be requested.  This can be\nused by a reader to make sure an extent request does not go\noutside the boundaries of the piece's file.\n"},
  {(char*)"SetPieceAvailable", PyvtkTableExtentTranslator_SetPieceAvailable, METH_VARARGS,
   (char*)"V.SetPieceAvailable(int, int)\nC++: virtual void SetPieceAvailable(int piece, int available)\n\nGet/Set whether the given piece is available.  Requesting a piece\nthat is not available will produce errors in the pipeline.\n"},
  {(char*)"GetPieceAvailable", PyvtkTableExtentTranslator_GetPieceAvailable, METH_VARARGS,
   (char*)"V.GetPieceAvailable(int) -> int\nC++: virtual int GetPieceAvailable(int piece)\n\nGet/Set whether the given piece is available.  Requesting a piece\nthat is not available will produce errors in the pipeline.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTableExtentTranslator_StaticNew()
{
  return vtkTableExtentTranslator::New();
}

PyObject *PyVTKClass_vtkTableExtentTranslatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTableExtentTranslator_StaticNew,
    PyvtkTableExtentTranslator_Methods,
    "vtkTableExtentTranslator", modulename,
    NULL, NULL,
    PyvtkTableExtentTranslator_Doc(),
    PyVTKClass_vtkExtentTranslatorNew(modulename));
  return cls;
}

const char **PyvtkTableExtentTranslator_Doc()
{
  static const char *docstring[] = {
    "vtkTableExtentTranslator - Extent translation through lookup table.\n\n",
    "Superclass: vtkExtentTranslator\n\n",
    "vtkTableExtentTranslator provides a vtkExtentTranslator that is\nprogrammed with a specific extent corresponding to each piece number.\n Readers can provide this to an application to allow the pipeline to\nexecute using the same piece breakdown that is provided in the input\nfile.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTableExtentTranslator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTableExtentTranslatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTableExtentTranslator", o) != 0)
    {
    Py_DECREF(o);
    }

}

