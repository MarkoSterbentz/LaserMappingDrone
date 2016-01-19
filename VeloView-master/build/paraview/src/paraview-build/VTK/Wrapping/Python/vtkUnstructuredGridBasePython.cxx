// python wrapper for vtkUnstructuredGridBase
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUnstructuredGridBase.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUnstructuredGridBase(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUnstructuredGridBaseNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPointSetNew
extern "C" { PyObject *PyVTKClass_vtkPointSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetNew
#endif

static const char **PyvtkUnstructuredGridBase_Doc();


static PyObject *
PyvtkUnstructuredGridBase_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkUnstructuredGridBase::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridBase::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
    {
    vtkUnstructuredGridBase *tempr = vtkUnstructuredGridBase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGridBase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridBase::NewInstance());

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
PyvtkUnstructuredGridBase_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkUnstructuredGridBase::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  vtkIdType temp0 = 1000;
  int temp1 = 1000;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    op->Allocate(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkUnstructuredGridBase::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_InsertNextCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  int temp0;
  vtkIdType temp1;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkIdType tempr = op->InsertNextCell(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridBase_InsertNextCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  int temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    vtkIdType tempr = op->InsertNextCell(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridBase_InsertNextCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  int temp0;
  vtkIdType temp1;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  vtkIdType temp3;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp4, save4, size4);

    vtkIdType tempr = op->InsertNextCell(temp0, temp1, temp2, temp3, temp4);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
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

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridBase_InsertNextCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkUnstructuredGridBase_InsertNextCell_s1(self, args);
    case 2:
      return PyvtkUnstructuredGridBase_InsertNextCell_s2(self, args);
    case 5:
      return PyvtkUnstructuredGridBase_InsertNextCell_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextCell");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGridBase_ReplaceCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  vtkIdType temp0;
  int temp1;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    op->ReplaceCell(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_GetIdsOfCellsOfType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdsOfCellsOfType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  int temp0;
  vtkIdTypeArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
    {
    op->GetIdsOfCellsOfType(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_IsHomogeneous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsHomogeneous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->IsHomogeneous();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkUnstructuredGridBase *tempr = vtkUnstructuredGridBase::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridBase_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkUnstructuredGridBase *tempr = vtkUnstructuredGridBase::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridBase_GetData_Methods[] = {
  {NULL, PyvtkUnstructuredGridBase_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkUnstructuredGridBase_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkUnstructuredGridBase_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGridBase_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkUnstructuredGridBase_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkUnstructuredGridBase_Methods[] = {
  {(char*)"IsTypeOf", PyvtkUnstructuredGridBase_IsTypeOf, METH_VARARGS | METH_STATIC,
   (char*)"V.IsTypeOf(string) -> int\nC++: static int IsTypeOf(const char *type)\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridBase_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: virtual int IsA(const char *type)\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGridBase_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObjectBase) -> vtkUnstructuredGridBase\nC++: static vtkUnstructuredGridBase *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridBase_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUnstructuredGridBase\nC++: vtkUnstructuredGridBase *NewInstance()\n\n"},
  {(char*)"GetDataObjectType", PyvtkUnstructuredGridBase_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\n"},
  {(char*)"Allocate", PyvtkUnstructuredGridBase_Allocate, METH_VARARGS,
   (char*)"V.Allocate(int, int)\nC++: virtual void Allocate(vtkIdType numCells=1000,\n    int extSize=1000)\n\nAllocate memory for the number of cells indicated. extSize is not\nused.\n"},
  {(char*)"DeepCopy", PyvtkUnstructuredGridBase_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"InsertNextCell", PyvtkUnstructuredGridBase_InsertNextCell, METH_VARARGS,
   (char*)"V.InsertNextCell(int, int, [int, ...]) -> int\nC++: virtual vtkIdType InsertNextCell(int type, vtkIdType npts,\n    vtkIdType *ptIds)\nV.InsertNextCell(int, vtkIdList) -> int\nC++: virtual vtkIdType InsertNextCell(int type, vtkIdList *ptIds)\nV.InsertNextCell(int, int, [int, ...], int, [int, ...]) -> int\nC++: virtual vtkIdType InsertNextCell(int type, vtkIdType npts,\n    vtkIdType *ptIds, vtkIdType nfaces, vtkIdType *faces)\n\nInsert/create cell in object by type and list of point ids\ndefining cell topology. Most cells require just a type which\nimplicitly defines a set of points and their ordering. For\nnon-polyhedron cell type, npts is the number of unique points in\nthe cell. pts are the list of global point Ids. For polyhedron\ncell, a special input format is required. npts is the number of\nfaces in the cell. ptIds is the list of face stream:\n(numFace0Pts, id1, id2, id3, numFace1Pts,id1, id2, id3, ...)\n"},
  {(char*)"ReplaceCell", PyvtkUnstructuredGridBase_ReplaceCell, METH_VARARGS,
   (char*)"V.ReplaceCell(int, int, [int, ...])\nC++: virtual void ReplaceCell(vtkIdType cellId, int npts,\n    vtkIdType *pts)\n\nReplace the points defining cell \"cellId\" with a new set of\npoints. This operator is (typically) used when links from points\nto cells have not been built (i.e., BuildLinks() has not been\nexecuted). Use the operator ReplaceLinkedCell() to replace a cell\nwhen cell structure has been built.\n"},
  {(char*)"GetIdsOfCellsOfType", PyvtkUnstructuredGridBase_GetIdsOfCellsOfType, METH_VARARGS,
   (char*)"V.GetIdsOfCellsOfType(int, vtkIdTypeArray)\nC++: virtual void GetIdsOfCellsOfType(int type,\n    vtkIdTypeArray *array)\n\nFill vtkIdTypeArray container with list of cell Ids.  This method\ntraverses all cells and, for a particular cell type, inserts the\ncell Id into the container.\n"},
  {(char*)"IsHomogeneous", PyvtkUnstructuredGridBase_IsHomogeneous, METH_VARARGS,
   (char*)"V.IsHomogeneous() -> int\nC++: virtual int IsHomogeneous()\n\nTraverse cells and determine if cells are all of the same type.\n"},
  {(char*)"GetData", PyvtkUnstructuredGridBase_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkUnstructuredGridBase\nC++: static vtkUnstructuredGridBase *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkUnstructuredGridBase\nC++: static vtkUnstructuredGridBase *GetData(\n    vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkUnstructuredGridBaseNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkUnstructuredGridBase_Methods,
    "vtkUnstructuredGridBase", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridBase_Doc(),
    PyVTKClass_vtkPointSetNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridBase_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridBase - dataset represents arbitrary combinations\n\n",
    "Superclass: vtkPointSet\n\n",
    "vtkUnstructuredGridBase defines the core vtkUnstructuredGrid API,\nomitting functions that are implementation dependent.\n\nSee Also:\n\nvtkMappedDataArray vtkUnstructuredGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridBase(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridBaseNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridBase", o) != 0)
    {
    Py_DECREF(o);
    }

}

