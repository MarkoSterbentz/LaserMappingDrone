// python wrapper for vtkPieceRequestFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkPieceRequestFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPieceRequestFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPieceRequestFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkPieceRequestFilter_Doc();


static PyObject *
PyvtkPieceRequestFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPieceRequestFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPieceRequestFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPieceRequestFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPieceRequestFilter::NewInstance());

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
PyvtkPieceRequestFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPieceRequestFilter *tempr = vtkPieceRequestFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

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
      op->vtkPieceRequestFilter::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_GetNumberOfPiecesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPiecesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPiecesMinValue() :
      op->vtkPieceRequestFilter::GetNumberOfPiecesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_GetNumberOfPiecesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPiecesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPiecesMaxValue() :
      op->vtkPieceRequestFilter::GetNumberOfPiecesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkPieceRequestFilter::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_SetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPiece(temp0);
      }
    else
      {
      op->vtkPieceRequestFilter::SetPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_GetPieceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPieceMinValue() :
      op->vtkPieceRequestFilter::GetPieceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_GetPieceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPieceMaxValue() :
      op->vtkPieceRequestFilter::GetPieceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPiece() :
      op->vtkPieceRequestFilter::GetPiece());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkPieceRequestFilter::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPieceRequestFilter_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkPieceRequestFilter::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPieceRequestFilter_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPieceRequestFilter_GetOutput_s1(self, args);
    case 1:
      return PyvtkPieceRequestFilter_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkPieceRequestFilter_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkPieceRequestFilter::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPieceRequestFilter_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0, temp1);
      }
    else
      {
      op->vtkPieceRequestFilter::SetInputData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPieceRequestFilter_SetInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPieceRequestFilter_SetInputData_s1(self, args);
    case 2:
      return PyvtkPieceRequestFilter_SetInputData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return NULL;
}


static PyMethodDef PyvtkPieceRequestFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPieceRequestFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPieceRequestFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPieceRequestFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPieceRequestFilter\nC++: vtkPieceRequestFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPieceRequestFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPieceRequestFilter\nC++: vtkPieceRequestFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfPieces", PyvtkPieceRequestFilter_SetNumberOfPieces, METH_VARARGS,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int)\n\nThe total number of pieces.\n"},
  {(char*)"GetNumberOfPiecesMinValue", PyvtkPieceRequestFilter_GetNumberOfPiecesMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfPiecesMinValue() -> int\nC++: int GetNumberOfPiecesMinValue()\n\nThe total number of pieces.\n"},
  {(char*)"GetNumberOfPiecesMaxValue", PyvtkPieceRequestFilter_GetNumberOfPiecesMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfPiecesMaxValue() -> int\nC++: int GetNumberOfPiecesMaxValue()\n\nThe total number of pieces.\n"},
  {(char*)"GetNumberOfPieces", PyvtkPieceRequestFilter_GetNumberOfPieces, METH_VARARGS,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nThe total number of pieces.\n"},
  {(char*)"SetPiece", PyvtkPieceRequestFilter_SetPiece, METH_VARARGS,
   (char*)"V.SetPiece(int)\nC++: void SetPiece(int)\n\nThe piece to extract.\n"},
  {(char*)"GetPieceMinValue", PyvtkPieceRequestFilter_GetPieceMinValue, METH_VARARGS,
   (char*)"V.GetPieceMinValue() -> int\nC++: int GetPieceMinValue()\n\nThe piece to extract.\n"},
  {(char*)"GetPieceMaxValue", PyvtkPieceRequestFilter_GetPieceMaxValue, METH_VARARGS,
   (char*)"V.GetPieceMaxValue() -> int\nC++: int GetPieceMaxValue()\n\nThe piece to extract.\n"},
  {(char*)"GetPiece", PyvtkPieceRequestFilter_GetPiece, METH_VARARGS,
   (char*)"V.GetPiece() -> int\nC++: int GetPiece()\n\nThe piece to extract.\n"},
  {(char*)"GetOutput", PyvtkPieceRequestFilter_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkDataObject\nC++: vtkDataObject *GetOutput()\nV.GetOutput(int) -> vtkDataObject\nC++: vtkDataObject *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"SetInputData", PyvtkPieceRequestFilter_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkDataObject)\nC++: void SetInputData(vtkDataObject *)\nV.SetInputData(int, vtkDataObject)\nC++: void SetInputData(int, vtkDataObject *)\n\nSet an input of this algorithm.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPieceRequestFilter_StaticNew()
{
  return vtkPieceRequestFilter::New();
}

PyObject *PyVTKClass_vtkPieceRequestFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPieceRequestFilter_StaticNew,
    PyvtkPieceRequestFilter_Methods,
    "vtkPieceRequestFilter", modulename,
    NULL, NULL,
    PyvtkPieceRequestFilter_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPieceRequestFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPieceRequestFilter - Sets the piece request for upstream filters.\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "Sends the piece and number of pieces to upstream filters; passes the\ninput to the output unmodified.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPieceRequestFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPieceRequestFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPieceRequestFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

