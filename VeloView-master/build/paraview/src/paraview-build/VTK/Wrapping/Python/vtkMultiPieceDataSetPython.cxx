// python wrapper for vtkMultiPieceDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMultiPieceDataSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMultiPieceDataSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMultiPieceDataSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectTreeNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectTreeNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectTreeNew
#endif

static const char **PyvtkMultiPieceDataSet_Doc();


static PyObject *
PyvtkMultiPieceDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMultiPieceDataSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiPieceDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiPieceDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiPieceDataSet::NewInstance());

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
PyvtkMultiPieceDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMultiPieceDataSet *tempr = vtkMultiPieceDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkMultiPieceDataSet::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  unsigned int temp0;
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
      op->vtkMultiPieceDataSet::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkMultiPieceDataSet::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetPiece(temp0) :
      op->vtkMultiPieceDataSet::GetPiece(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_GetPieceAsDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceAsDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetPieceAsDataObject(temp0) :
      op->vtkMultiPieceDataSet::GetPieceAsDataObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_SetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  unsigned int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetPiece(temp0, temp1);
      }
    else
      {
      op->vtkMultiPieceDataSet::SetPiece(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_HasMetaData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->HasMetaData(temp0) :
      op->vtkMultiPieceDataSet::HasMetaData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiPieceDataSet_HasMetaData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
    {
    int tempr = (ap.IsBound() ?
      op->HasMetaData(temp0) :
      op->vtkMultiPieceDataSet::HasMetaData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiPieceDataSet_HasMetaData_Methods[] = {
  {NULL, PyvtkMultiPieceDataSet_HasMetaData_s1, METH_VARARGS,
   (char*)"@I"},
  {NULL, PyvtkMultiPieceDataSet_HasMetaData_s2, METH_VARARGS,
   (char*)"@O *vtkCompositeDataIterator"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiPieceDataSet_HasMetaData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiPieceDataSet_HasMetaData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "HasMetaData");
  return NULL;
}



static PyObject *
PyvtkMultiPieceDataSet_GetMetaData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetMetaData(temp0) :
      op->vtkMultiPieceDataSet::GetMetaData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiPieceDataSet_GetMetaData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetMetaData(temp0) :
      op->vtkMultiPieceDataSet::GetMetaData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiPieceDataSet_GetMetaData_Methods[] = {
  {NULL, PyvtkMultiPieceDataSet_GetMetaData_s1, METH_VARARGS,
   (char*)"@I"},
  {NULL, PyvtkMultiPieceDataSet_GetMetaData_s2, METH_VARARGS,
   (char*)"@O *vtkCompositeDataIterator"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiPieceDataSet_GetMetaData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiPieceDataSet_GetMetaData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetMetaData");
  return NULL;
}



static PyObject *
PyvtkMultiPieceDataSet_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkMultiPieceDataSet *tempr = vtkMultiPieceDataSet::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiPieceDataSet_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkMultiPieceDataSet *tempr = vtkMultiPieceDataSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiPieceDataSet_GetData_Methods[] = {
  {NULL, PyvtkMultiPieceDataSet_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkMultiPieceDataSet_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiPieceDataSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiPieceDataSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkMultiPieceDataSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkMultiPieceDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkMultiPieceDataSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMultiPieceDataSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMultiPieceDataSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMultiPieceDataSet\nC++: vtkMultiPieceDataSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMultiPieceDataSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMultiPieceDataSet\nC++: vtkMultiPieceDataSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkMultiPieceDataSet_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {(char*)"SetNumberOfPieces", PyvtkMultiPieceDataSet_SetNumberOfPieces, METH_VARARGS,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(unsigned int numpieces)\n\nSet the number of pieces. This will cause allocation if the new\nnumber of pieces is greater than the current size. All new pieces\nare initialized to null.\n"},
  {(char*)"GetNumberOfPieces", PyvtkMultiPieceDataSet_GetNumberOfPieces, METH_VARARGS,
   (char*)"V.GetNumberOfPieces() -> int\nC++: unsigned int GetNumberOfPieces()\n\nReturns the number of pieces.\n"},
  {(char*)"GetPiece", PyvtkMultiPieceDataSet_GetPiece, METH_VARARGS,
   (char*)"V.GetPiece(int) -> vtkDataSet\nC++: vtkDataSet *GetPiece(unsigned int pieceno)\n\nReturns the piece at the given index.\n"},
  {(char*)"GetPieceAsDataObject", PyvtkMultiPieceDataSet_GetPieceAsDataObject, METH_VARARGS,
   (char*)"V.GetPieceAsDataObject(int) -> vtkDataObject\nC++: vtkDataObject *GetPieceAsDataObject(unsigned int pieceno)\n\nReturns the piece at the given index.\n"},
  {(char*)"SetPiece", PyvtkMultiPieceDataSet_SetPiece, METH_VARARGS,
   (char*)"V.SetPiece(int, vtkDataObject)\nC++: void SetPiece(unsigned int pieceno, vtkDataObject *piece)\n\nSets the data object as the given piece. The total number of\npieces will be resized to fit the requested piece no.\n"},
  {(char*)"HasMetaData", PyvtkMultiPieceDataSet_HasMetaData, METH_VARARGS,
   (char*)"V.HasMetaData(int) -> int\nC++: int HasMetaData(unsigned int piece)\nV.HasMetaData(vtkCompositeDataIterator) -> int\nC++: virtual int HasMetaData(vtkCompositeDataIterator *iter)\n\nReturns true if meta-data is available for a given piece.\n"},
  {(char*)"GetMetaData", PyvtkMultiPieceDataSet_GetMetaData, METH_VARARGS,
   (char*)"V.GetMetaData(int) -> vtkInformation\nC++: vtkInformation *GetMetaData(unsigned int pieceno)\nV.GetMetaData(vtkCompositeDataIterator) -> vtkInformation\nC++: virtual vtkInformation *GetMetaData(\n    vtkCompositeDataIterator *iter)\n\nReturns the meta-data for the piece. If none is already present,\na new vtkInformation object will be allocated. Use HasMetaData to\navoid allocating vtkInformation objects.\n"},
  {(char*)"GetData", PyvtkMultiPieceDataSet_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkMultiPieceDataSet\nC++: static vtkMultiPieceDataSet *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkMultiPieceDataSet\nC++: static vtkMultiPieceDataSet *GetData(vtkInformationVector *v,\n     int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMultiPieceDataSet_StaticNew()
{
  return vtkMultiPieceDataSet::New();
}

PyObject *PyVTKClass_vtkMultiPieceDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMultiPieceDataSet_StaticNew,
    PyvtkMultiPieceDataSet_Methods,
    "vtkMultiPieceDataSet", modulename,
    NULL, NULL,
    PyvtkMultiPieceDataSet_Doc(),
    PyVTKClass_vtkDataObjectTreeNew(modulename));
  return cls;
}

const char **PyvtkMultiPieceDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkMultiPieceDataSet - composite dataset to encapsulates pieces of\n\n",
    "Superclass: vtkDataObjectTree\n\n",
    "A vtkMultiPieceDataSet dataset groups multiple data pieces together.\nFor example, say that a simulation broke a volume into 16 piece so\nthat each piece can be processed with 1 process in parallel. We want\nto load this volume in a visualization cluster of 4 nodes. Each node\nwill get 4 pieces, not necessarily forming a whole rectangular piece.\nIn this case, it is not possible to append the 4 pieces ",
    "together into\na vtkImageData. In this case, these 4 pieces can be collected\ntogether using a vtkMultiPieceDataSet. Note that vtkMultiPieceDataSet\nis intended to be included in other composite datasets eg.\nvtkMultiBlockDataSet, vtkHierarchicalBoxDataSet. Hence the lack of\nalgorithms producting vtkMultiPieceDataSet.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMultiPieceDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMultiPieceDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMultiPieceDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

