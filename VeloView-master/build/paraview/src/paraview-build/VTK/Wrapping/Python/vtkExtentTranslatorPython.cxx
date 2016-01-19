// python wrapper for vtkExtentTranslator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtentTranslator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtentTranslator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtentTranslatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkExtentTranslator_Doc();

#ifndef DECLARED_PyvtkExtentTranslator_Modes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkExtentTranslator_Modes_Type;
#define DECLARED_PyvtkExtentTranslator_Modes_Type
#endif

PyTypeObject PyvtkExtentTranslator_Modes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Modes", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkExtentTranslator_Modes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkExtentTranslator_Modes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkExtentTranslator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtentTranslator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtentTranslator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtentTranslator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtentTranslator::NewInstance());

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
PyvtkExtentTranslator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtentTranslator *tempr = vtkExtentTranslator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkExtentTranslator::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtentTranslator_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0);
      }
    else
      {
      op->vtkExtentTranslator::SetWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtentTranslator_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkExtentTranslator_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkExtentTranslator_SetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return NULL;
}



static PyObject *
PyvtkExtentTranslator_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkExtentTranslator::GetWholeExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkExtentTranslator::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtentTranslator_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetExtent(temp0);
      }
    else
      {
      op->vtkExtentTranslator::SetExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtentTranslator_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkExtentTranslator_SetExtent_s1(self, args);
    case 1:
      return PyvtkExtentTranslator_SetExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return NULL;
}



static PyObject *
PyvtkExtentTranslator_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkExtentTranslator::GetExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

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
      op->vtkExtentTranslator::SetPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPiece() :
      op->vtkExtentTranslator::GetPiece());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

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
      op->vtkExtentTranslator::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkExtentTranslator::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

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
      op->vtkExtentTranslator::SetGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkExtentTranslator::GetGhostLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_PieceToExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->PieceToExtent() :
      op->vtkExtentTranslator::PieceToExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_PieceToExtentByPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtentByPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->PieceToExtentByPoints() :
      op->vtkExtentTranslator::PieceToExtentByPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_PieceToExtentThreadSafe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtentThreadSafe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

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
      op->vtkExtentTranslator::PieceToExtentThreadSafe(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkExtentTranslator_SetSplitModeToBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitModeToBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSplitModeToBlock();
      }
    else
      {
      op->vtkExtentTranslator::SetSplitModeToBlock();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetSplitModeToXSlab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitModeToXSlab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSplitModeToXSlab();
      }
    else
      {
      op->vtkExtentTranslator::SetSplitModeToXSlab();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetSplitModeToYSlab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitModeToYSlab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSplitModeToYSlab();
      }
    else
      {
      op->vtkExtentTranslator::SetSplitModeToYSlab();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetSplitModeToZSlab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitModeToZSlab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSplitModeToZSlab();
      }
    else
      {
      op->vtkExtentTranslator::SetSplitModeToZSlab();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_GetSplitMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSplitMode() :
      op->vtkExtentTranslator::GetSplitMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetSplitPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

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
      op->SetSplitPath(temp0, temp1);
      }
    else
      {
      op->vtkExtentTranslator::SetSplitPath(temp0, temp1);
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
PyvtkExtentTranslator_UPDATE_SPLIT_MODE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_SPLIT_MODE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerRequestKey *tempr = vtkExtentTranslator::UPDATE_SPLIT_MODE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtentTranslator_Methods[] = {
  {(char*)"GetClassName", PyvtkExtentTranslator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtentTranslator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtentTranslator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtentTranslator\nC++: vtkExtentTranslator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtentTranslator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtentTranslator\nC++: vtkExtentTranslator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWholeExtent", PyvtkExtentTranslator_SetWholeExtent, METH_VARARGS,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {(char*)"GetWholeExtent", PyvtkExtentTranslator_GetWholeExtent, METH_VARARGS,
   (char*)"V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {(char*)"SetExtent", PyvtkExtentTranslator_SetExtent, METH_VARARGS,
   (char*)"V.SetExtent(int, int, int, int, int, int)\nC++: void SetExtent(int, int, int, int, int, int)\nV.SetExtent((int, int, int, int, int, int))\nC++: void SetExtent(int a[6])\n\n"},
  {(char*)"GetExtent", PyvtkExtentTranslator_GetExtent, METH_VARARGS,
   (char*)"V.GetExtent() -> (int, int, int, int, int, int)\nC++: int *GetExtent()\n\n"},
  {(char*)"SetPiece", PyvtkExtentTranslator_SetPiece, METH_VARARGS,
   (char*)"V.SetPiece(int)\nC++: void SetPiece(int a)\n\nSet the Piece/NumPieces. Set the WholeExtent and then call\nPieceToExtent. The result can be obtained from the Extent ivar.\n"},
  {(char*)"GetPiece", PyvtkExtentTranslator_GetPiece, METH_VARARGS,
   (char*)"V.GetPiece() -> int\nC++: int GetPiece()\n\nSet the Piece/NumPieces. Set the WholeExtent and then call\nPieceToExtent. The result can be obtained from the Extent ivar.\n"},
  {(char*)"SetNumberOfPieces", PyvtkExtentTranslator_SetNumberOfPieces, METH_VARARGS,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int a)\n\nSet the Piece/NumPieces. Set the WholeExtent and then call\nPieceToExtent. The result can be obtained from the Extent ivar.\n"},
  {(char*)"GetNumberOfPieces", PyvtkExtentTranslator_GetNumberOfPieces, METH_VARARGS,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nSet the Piece/NumPieces. Set the WholeExtent and then call\nPieceToExtent. The result can be obtained from the Extent ivar.\n"},
  {(char*)"SetGhostLevel", PyvtkExtentTranslator_SetGhostLevel, METH_VARARGS,
   (char*)"V.SetGhostLevel(int)\nC++: void SetGhostLevel(int a)\n\nSet the Piece/NumPieces. Set the WholeExtent and then call\nPieceToExtent. The result can be obtained from the Extent ivar.\n"},
  {(char*)"GetGhostLevel", PyvtkExtentTranslator_GetGhostLevel, METH_VARARGS,
   (char*)"V.GetGhostLevel() -> int\nC++: int GetGhostLevel()\n\nSet the Piece/NumPieces. Set the WholeExtent and then call\nPieceToExtent. The result can be obtained from the Extent ivar.\n"},
  {(char*)"PieceToExtent", PyvtkExtentTranslator_PieceToExtent, METH_VARARGS,
   (char*)"V.PieceToExtent() -> int\nC++: virtual int PieceToExtent()\n\nThese are the main methods that should be called. These methods\nare responsible for converting a piece to an extent. The\nsignatures without arguments are only thread safe when each\nthread accesses a different instance. The signatures with\narguments are fully thread safe.\n"},
  {(char*)"PieceToExtentByPoints", PyvtkExtentTranslator_PieceToExtentByPoints, METH_VARARGS,
   (char*)"V.PieceToExtentByPoints() -> int\nC++: virtual int PieceToExtentByPoints()\n\nThese are the main methods that should be called. These methods\nare responsible for converting a piece to an extent. The\nsignatures without arguments are only thread safe when each\nthread accesses a different instance. The signatures with\narguments are fully thread safe.\n"},
  {(char*)"PieceToExtentThreadSafe", PyvtkExtentTranslator_PieceToExtentThreadSafe, METH_VARARGS,
   (char*)"V.PieceToExtentThreadSafe(int, int, int, [int, ...], [int, ...],\n    int, int) -> int\nC++: virtual int PieceToExtentThreadSafe(int piece, int numPieces,\n     int ghostLevel, int *wholeExtent, int *resultExtent,\n    int splitMode, int byPoints)\n\nThese are the main methods that should be called. These methods\nare responsible for converting a piece to an extent. The\nsignatures without arguments are only thread safe when each\nthread accesses a different instance. The signatures with\narguments are fully thread safe.\n"},
  {(char*)"SetSplitModeToBlock", PyvtkExtentTranslator_SetSplitModeToBlock, METH_VARARGS,
   (char*)"V.SetSplitModeToBlock()\nC++: void SetSplitModeToBlock()\n\nHow should the streamer break up extents. Block mode tries to\nbreak an extent up into cube blocks.  It always chooses the\nlargest axis to split. Slab mode first breaks up the Z axis.  If\nit gets to one slice, then it starts breaking up other axes.\n"},
  {(char*)"SetSplitModeToXSlab", PyvtkExtentTranslator_SetSplitModeToXSlab, METH_VARARGS,
   (char*)"V.SetSplitModeToXSlab()\nC++: void SetSplitModeToXSlab()\n\nHow should the streamer break up extents. Block mode tries to\nbreak an extent up into cube blocks.  It always chooses the\nlargest axis to split. Slab mode first breaks up the Z axis.  If\nit gets to one slice, then it starts breaking up other axes.\n"},
  {(char*)"SetSplitModeToYSlab", PyvtkExtentTranslator_SetSplitModeToYSlab, METH_VARARGS,
   (char*)"V.SetSplitModeToYSlab()\nC++: void SetSplitModeToYSlab()\n\nHow should the streamer break up extents. Block mode tries to\nbreak an extent up into cube blocks.  It always chooses the\nlargest axis to split. Slab mode first breaks up the Z axis.  If\nit gets to one slice, then it starts breaking up other axes.\n"},
  {(char*)"SetSplitModeToZSlab", PyvtkExtentTranslator_SetSplitModeToZSlab, METH_VARARGS,
   (char*)"V.SetSplitModeToZSlab()\nC++: void SetSplitModeToZSlab()\n\nHow should the streamer break up extents. Block mode tries to\nbreak an extent up into cube blocks.  It always chooses the\nlargest axis to split. Slab mode first breaks up the Z axis.  If\nit gets to one slice, then it starts breaking up other axes.\n"},
  {(char*)"GetSplitMode", PyvtkExtentTranslator_GetSplitMode, METH_VARARGS,
   (char*)"V.GetSplitMode() -> int\nC++: int GetSplitMode()\n\nHow should the streamer break up extents. Block mode tries to\nbreak an extent up into cube blocks.  It always chooses the\nlargest axis to split. Slab mode first breaks up the Z axis.  If\nit gets to one slice, then it starts breaking up other axes.\n"},
  {(char*)"SetSplitPath", PyvtkExtentTranslator_SetSplitPath, METH_VARARGS,
   (char*)"V.SetSplitPath(int, [int, ...])\nC++: void SetSplitPath(int len, int *splitpath)\n\n"},
  {(char*)"UPDATE_SPLIT_MODE", PyvtkExtentTranslator_UPDATE_SPLIT_MODE, METH_VARARGS | METH_STATIC,
   (char*)"V.UPDATE_SPLIT_MODE() -> vtkInformationIntegerRequestKey\nC++: static vtkInformationIntegerRequestKey *UPDATE_SPLIT_MODE()\n\nKey used to request a particular split mode. This is used by\nvtkStreamingDemandDrivenPipeline.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtentTranslator_StaticNew()
{
  return vtkExtentTranslator::New();
}

PyObject *PyVTKClass_vtkExtentTranslatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtentTranslator_StaticNew,
    PyvtkExtentTranslator_Methods,
    "vtkExtentTranslator", modulename,
    NULL, NULL,
    PyvtkExtentTranslator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkExtentTranslator_Modes_Type);
    PyvtkExtentTranslator_Modes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkExtentTranslator_Modes_Type;
    if (o && PyDict_SetItemString(d, (char *)"Modes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkExtentTranslator::Modes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "X_SLAB_MODE", vtkExtentTranslator::X_SLAB_MODE },
          { "Y_SLAB_MODE", vtkExtentTranslator::Y_SLAB_MODE },
          { "Z_SLAB_MODE", vtkExtentTranslator::Z_SLAB_MODE },
          { "BLOCK_MODE", vtkExtentTranslator::BLOCK_MODE },
        };

      o = PyvtkExtentTranslator_Modes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkExtentTranslator_Doc()
{
  static const char *docstring[] = {
    "vtkExtentTranslator - Generates a structured extent from unstructured.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkExtentTranslator generates a structured extent from an\nunstructured extent.  It uses a recursive scheme that splits the\nlargest axis.  A hard coded extent can be used for a starting point.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtentTranslator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtentTranslatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtentTranslator", o) != 0)
    {
    Py_DECREF(o);
    }

}

