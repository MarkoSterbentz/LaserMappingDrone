// python wrapper for vtkDicer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDicer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDicer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDicerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkDicer_Doc();


static PyObject *
PyvtkDicer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDicer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDicer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDicer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDicer::NewInstance());

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
PyvtkDicer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDicer *tempr = vtkDicer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_SetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldData(temp0);
      }
    else
      {
      op->vtkDicer::SetFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldData() :
      op->vtkDicer::GetFieldData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_FieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FieldDataOn();
      }
    else
      {
      op->vtkDicer::FieldDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_FieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FieldDataOff();
      }
    else
      {
      op->vtkDicer::FieldDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_SetDiceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiceMode(temp0);
      }
    else
      {
      op->vtkDicer::SetDiceMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetDiceModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiceModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDiceModeMinValue() :
      op->vtkDicer::GetDiceModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetDiceModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiceModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDiceModeMaxValue() :
      op->vtkDicer::GetDiceModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetDiceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDiceMode() :
      op->vtkDicer::GetDiceMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_SetDiceModeToNumberOfPointsPerPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiceModeToNumberOfPointsPerPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDiceModeToNumberOfPointsPerPiece();
      }
    else
      {
      op->vtkDicer::SetDiceModeToNumberOfPointsPerPiece();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_SetDiceModeToSpecifiedNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiceModeToSpecifiedNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDiceModeToSpecifiedNumberOfPieces();
      }
    else
      {
      op->vtkDicer::SetDiceModeToSpecifiedNumberOfPieces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_SetDiceModeToMemoryLimitPerPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiceModeToMemoryLimitPerPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDiceModeToMemoryLimitPerPiece();
      }
    else
      {
      op->vtkDicer::SetDiceModeToMemoryLimitPerPiece();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfActualPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfActualPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfActualPieces() :
      op->vtkDicer::GetNumberOfActualPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_SetNumberOfPointsPerPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPointsPerPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPointsPerPiece(temp0);
      }
    else
      {
      op->vtkDicer::SetNumberOfPointsPerPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPointsPerPieceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerPieceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerPieceMinValue() :
      op->vtkDicer::GetNumberOfPointsPerPieceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPointsPerPieceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerPieceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerPieceMaxValue() :
      op->vtkDicer::GetNumberOfPointsPerPieceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPointsPerPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerPiece() :
      op->vtkDicer::GetNumberOfPointsPerPiece());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

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
      op->vtkDicer::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPiecesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPiecesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPiecesMinValue() :
      op->vtkDicer::GetNumberOfPiecesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPiecesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPiecesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPiecesMaxValue() :
      op->vtkDicer::GetNumberOfPiecesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkDicer::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_SetMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMemoryLimit(temp0);
      }
    else
      {
      op->vtkDicer::SetMemoryLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetMemoryLimitMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryLimitMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMemoryLimitMinValue() :
      op->vtkDicer::GetMemoryLimitMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetMemoryLimitMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryLimitMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMemoryLimitMaxValue() :
      op->vtkDicer::GetMemoryLimitMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMemoryLimit() :
      op->vtkDicer::GetMemoryLimit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDicer_Methods[] = {
  {(char*)"GetClassName", PyvtkDicer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDicer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDicer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDicer\nC++: vtkDicer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDicer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDicer\nC++: vtkDicer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFieldData", PyvtkDicer_SetFieldData, METH_VARARGS,
   (char*)"V.SetFieldData(int)\nC++: void SetFieldData(int a)\n\nSet/Get the flag which controls whether to generate point scalar\ndata or point field data. If this flag is off, scalar data is\ngenerated.  Otherwise, field data is generated. Note that the\ngenerated the data are integer numbers indicating which piece a\nparticular point belongs to.\n"},
  {(char*)"GetFieldData", PyvtkDicer_GetFieldData, METH_VARARGS,
   (char*)"V.GetFieldData() -> int\nC++: int GetFieldData()\n\nSet/Get the flag which controls whether to generate point scalar\ndata or point field data. If this flag is off, scalar data is\ngenerated.  Otherwise, field data is generated. Note that the\ngenerated the data are integer numbers indicating which piece a\nparticular point belongs to.\n"},
  {(char*)"FieldDataOn", PyvtkDicer_FieldDataOn, METH_VARARGS,
   (char*)"V.FieldDataOn()\nC++: void FieldDataOn()\n\nSet/Get the flag which controls whether to generate point scalar\ndata or point field data. If this flag is off, scalar data is\ngenerated.  Otherwise, field data is generated. Note that the\ngenerated the data are integer numbers indicating which piece a\nparticular point belongs to.\n"},
  {(char*)"FieldDataOff", PyvtkDicer_FieldDataOff, METH_VARARGS,
   (char*)"V.FieldDataOff()\nC++: void FieldDataOff()\n\nSet/Get the flag which controls whether to generate point scalar\ndata or point field data. If this flag is off, scalar data is\ngenerated.  Otherwise, field data is generated. Note that the\ngenerated the data are integer numbers indicating which piece a\nparticular point belongs to.\n"},
  {(char*)"SetDiceMode", PyvtkDicer_SetDiceMode, METH_VARARGS,
   (char*)"V.SetDiceMode(int)\nC++: void SetDiceMode(int)\n\nSpecify the method to determine how many pieces the data should\nbe broken into. By default, the number of points per piece is\nused.\n"},
  {(char*)"GetDiceModeMinValue", PyvtkDicer_GetDiceModeMinValue, METH_VARARGS,
   (char*)"V.GetDiceModeMinValue() -> int\nC++: int GetDiceModeMinValue()\n\nSpecify the method to determine how many pieces the data should\nbe broken into. By default, the number of points per piece is\nused.\n"},
  {(char*)"GetDiceModeMaxValue", PyvtkDicer_GetDiceModeMaxValue, METH_VARARGS,
   (char*)"V.GetDiceModeMaxValue() -> int\nC++: int GetDiceModeMaxValue()\n\nSpecify the method to determine how many pieces the data should\nbe broken into. By default, the number of points per piece is\nused.\n"},
  {(char*)"GetDiceMode", PyvtkDicer_GetDiceMode, METH_VARARGS,
   (char*)"V.GetDiceMode() -> int\nC++: int GetDiceMode()\n\nSpecify the method to determine how many pieces the data should\nbe broken into. By default, the number of points per piece is\nused.\n"},
  {(char*)"SetDiceModeToNumberOfPointsPerPiece", PyvtkDicer_SetDiceModeToNumberOfPointsPerPiece, METH_VARARGS,
   (char*)"V.SetDiceModeToNumberOfPointsPerPiece()\nC++: void SetDiceModeToNumberOfPointsPerPiece()\n\nSpecify the method to determine how many pieces the data should\nbe broken into. By default, the number of points per piece is\nused.\n"},
  {(char*)"SetDiceModeToSpecifiedNumberOfPieces", PyvtkDicer_SetDiceModeToSpecifiedNumberOfPieces, METH_VARARGS,
   (char*)"V.SetDiceModeToSpecifiedNumberOfPieces()\nC++: void SetDiceModeToSpecifiedNumberOfPieces()\n\nSpecify the method to determine how many pieces the data should\nbe broken into. By default, the number of points per piece is\nused.\n"},
  {(char*)"SetDiceModeToMemoryLimitPerPiece", PyvtkDicer_SetDiceModeToMemoryLimitPerPiece, METH_VARARGS,
   (char*)"V.SetDiceModeToMemoryLimitPerPiece()\nC++: void SetDiceModeToMemoryLimitPerPiece()\n\nSpecify the method to determine how many pieces the data should\nbe broken into. By default, the number of points per piece is\nused.\n"},
  {(char*)"GetNumberOfActualPieces", PyvtkDicer_GetNumberOfActualPieces, METH_VARARGS,
   (char*)"V.GetNumberOfActualPieces() -> int\nC++: int GetNumberOfActualPieces()\n\nUse the following method after the filter has updated to\ndetermine the actual number of pieces the data was separated\ninto.\n"},
  {(char*)"SetNumberOfPointsPerPiece", PyvtkDicer_SetNumberOfPointsPerPiece, METH_VARARGS,
   (char*)"V.SetNumberOfPointsPerPiece(int)\nC++: void SetNumberOfPointsPerPiece(int)\n\nControl piece size based on the maximum number of points per\npiece. (This ivar has effect only when the DiceMode is set to\nSetDiceModeToNumberOfPoints().)\n"},
  {(char*)"GetNumberOfPointsPerPieceMinValue", PyvtkDicer_GetNumberOfPointsPerPieceMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfPointsPerPieceMinValue() -> int\nC++: int GetNumberOfPointsPerPieceMinValue()\n\nControl piece size based on the maximum number of points per\npiece. (This ivar has effect only when the DiceMode is set to\nSetDiceModeToNumberOfPoints().)\n"},
  {(char*)"GetNumberOfPointsPerPieceMaxValue", PyvtkDicer_GetNumberOfPointsPerPieceMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfPointsPerPieceMaxValue() -> int\nC++: int GetNumberOfPointsPerPieceMaxValue()\n\nControl piece size based on the maximum number of points per\npiece. (This ivar has effect only when the DiceMode is set to\nSetDiceModeToNumberOfPoints().)\n"},
  {(char*)"GetNumberOfPointsPerPiece", PyvtkDicer_GetNumberOfPointsPerPiece, METH_VARARGS,
   (char*)"V.GetNumberOfPointsPerPiece() -> int\nC++: int GetNumberOfPointsPerPiece()\n\nControl piece size based on the maximum number of points per\npiece. (This ivar has effect only when the DiceMode is set to\nSetDiceModeToNumberOfPoints().)\n"},
  {(char*)"SetNumberOfPieces", PyvtkDicer_SetNumberOfPieces, METH_VARARGS,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int)\n\nSet/Get the number of pieces the object is to be separated into.\n(This ivar has effect only when the DiceMode is set to\nSetDiceModeToSpecifiedNumber()). Note that the ivar\nNumberOfPieces is a target - depending on the particulars of the\ndata, more or less number of pieces than the target value may be\ncreated.\n"},
  {(char*)"GetNumberOfPiecesMinValue", PyvtkDicer_GetNumberOfPiecesMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfPiecesMinValue() -> int\nC++: int GetNumberOfPiecesMinValue()\n\nSet/Get the number of pieces the object is to be separated into.\n(This ivar has effect only when the DiceMode is set to\nSetDiceModeToSpecifiedNumber()). Note that the ivar\nNumberOfPieces is a target - depending on the particulars of the\ndata, more or less number of pieces than the target value may be\ncreated.\n"},
  {(char*)"GetNumberOfPiecesMaxValue", PyvtkDicer_GetNumberOfPiecesMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfPiecesMaxValue() -> int\nC++: int GetNumberOfPiecesMaxValue()\n\nSet/Get the number of pieces the object is to be separated into.\n(This ivar has effect only when the DiceMode is set to\nSetDiceModeToSpecifiedNumber()). Note that the ivar\nNumberOfPieces is a target - depending on the particulars of the\ndata, more or less number of pieces than the target value may be\ncreated.\n"},
  {(char*)"GetNumberOfPieces", PyvtkDicer_GetNumberOfPieces, METH_VARARGS,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nSet/Get the number of pieces the object is to be separated into.\n(This ivar has effect only when the DiceMode is set to\nSetDiceModeToSpecifiedNumber()). Note that the ivar\nNumberOfPieces is a target - depending on the particulars of the\ndata, more or less number of pieces than the target value may be\ncreated.\n"},
  {(char*)"SetMemoryLimit", PyvtkDicer_SetMemoryLimit, METH_VARARGS,
   (char*)"V.SetMemoryLimit(int)\nC++: void SetMemoryLimit(unsigned long)\n\nControl piece size based on a memory limit.  (This ivar has\neffect only when the DiceMode is set to\nSetDiceModeToMemoryLimit()). The memory limit should be set in\nkilobytes.\n"},
  {(char*)"GetMemoryLimitMinValue", PyvtkDicer_GetMemoryLimitMinValue, METH_VARARGS,
   (char*)"V.GetMemoryLimitMinValue() -> int\nC++: unsigned long GetMemoryLimitMinValue()\n\nControl piece size based on a memory limit.  (This ivar has\neffect only when the DiceMode is set to\nSetDiceModeToMemoryLimit()). The memory limit should be set in\nkilobytes.\n"},
  {(char*)"GetMemoryLimitMaxValue", PyvtkDicer_GetMemoryLimitMaxValue, METH_VARARGS,
   (char*)"V.GetMemoryLimitMaxValue() -> int\nC++: unsigned long GetMemoryLimitMaxValue()\n\nControl piece size based on a memory limit.  (This ivar has\neffect only when the DiceMode is set to\nSetDiceModeToMemoryLimit()). The memory limit should be set in\nkilobytes.\n"},
  {(char*)"GetMemoryLimit", PyvtkDicer_GetMemoryLimit, METH_VARARGS,
   (char*)"V.GetMemoryLimit() -> int\nC++: unsigned long GetMemoryLimit()\n\nControl piece size based on a memory limit.  (This ivar has\neffect only when the DiceMode is set to\nSetDiceModeToMemoryLimit()). The memory limit should be set in\nkilobytes.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDicerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDicer_Methods,
    "vtkDicer", modulename,
    NULL, NULL,
    PyvtkDicer_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDicer_Doc()
{
  static const char *docstring[] = {
    "vtkDicer - abstract superclass to divide dataset into pieces\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "Subclasses of vtkDicer divides the input dataset into separate\npieces.  These pieces can then be operated on by other filters (e.g.,\nvtkThreshold). One application is to break very large polygonal\nmodels into pieces and performing viewing and occlusion culling on\nthe pieces. Multiple pieces can also be streamed through the\nvisualization pipeline.\n\nTo use this filter, you must specify the execution",
    " mode of the\nfilter; i.e., set the way that the piece size is controlled (do this\nby setting the DiceMode ivar). The filter does not change the\ngeometry or topology of the input dataset, rather it generates\ninteger numbers that indicate which piece a particular point belongs\nto (i.e., it modifies the point and cell attribute data). The integer\nnumber can be placed into the output scalar data, or t",
    "he output field\ndata.\n\nCaveats:\n\nThe number of pieces generated may not equal the specified number of\npieces. Use the method GetNumberOfActualPieces() after filter\nexecution to get the actual number of pieces generated.\n\nSee Also:\n\nvtkOBBDicer vtkConnectedDicer vtkSpatialDicer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDicer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDicerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDicer", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_DICE_MODE_NUMBER_OF_POINTS", 0 },
        { "VTK_DICE_MODE_SPECIFIED_NUMBER", 1 },
        { "VTK_DICE_MODE_MEMORY_LIMIT", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

