// python wrapper for vtkCellTypes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCellTypes.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCellTypes(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCellTypesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCellTypes_Doc();


static PyObject *
PyvtkCellTypes_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCellTypes::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellTypes::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellTypes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellTypes::NewInstance());

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
PyvtkCellTypes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCellTypes *tempr = vtkCellTypes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  int temp0 = 512;
  int temp1 = 1000;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkCellTypes::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_InsertCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  int temp0;
  unsigned char temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->InsertCell(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCellTypes::InsertCell(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_InsertNextCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  unsigned char temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1) :
      op->vtkCellTypes::InsertNextCell(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_SetCellTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  int temp0;
  vtkUnsignedCharArray *temp1 = NULL;
  vtkIntArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp2, "vtkIntArray"))
    {
    if (ap.IsBound())
      {
      op->SetCellTypes(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCellTypes::SetCellTypes(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_GetCellLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellLocation(temp0) :
      op->vtkCellTypes::GetCellLocation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_DeleteCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DeleteCell(temp0);
      }
    else
      {
      op->vtkCellTypes::DeleteCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_GetNumberOfTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTypes() :
      op->vtkCellTypes::GetNumberOfTypes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_IsType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsType(temp0) :
      op->vtkCellTypes::IsType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_InsertNextType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextType(temp0) :
      op->vtkCellTypes::InsertNextType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned char tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkCellTypes::GetCellType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkCellTypes::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkCellTypes::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkCellTypes::GetActualMemorySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  vtkCellTypes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellTypes"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkCellTypes::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_GetClassNameFromTypeId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetClassNameFromTypeId");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = vtkCellTypes::GetClassNameFromTypeId(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_GetTypeIdFromClassName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTypeIdFromClassName");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkCellTypes::GetTypeIdFromClassName(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellTypes_IsLinear(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsLinear");

  unsigned char temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkCellTypes::IsLinear(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCellTypes_Methods[] = {
  {(char*)"GetClassName", PyvtkCellTypes_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCellTypes_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCellTypes_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCellTypes\nC++: vtkCellTypes *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCellTypes_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCellTypes\nC++: vtkCellTypes *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Allocate", PyvtkCellTypes_Allocate, METH_VARARGS,
   (char*)"V.Allocate(int, int) -> int\nC++: int Allocate(int sz=512, int ext=1000)\n\nAllocate memory for this array. Delete old storage only if\nnecessary.\n"},
  {(char*)"InsertCell", PyvtkCellTypes_InsertCell, METH_VARARGS,
   (char*)"V.InsertCell(int, int, int)\nC++: void InsertCell(int id, unsigned char type, int loc)\n\nAdd a cell at specified id.\n"},
  {(char*)"InsertNextCell", PyvtkCellTypes_InsertNextCell, METH_VARARGS,
   (char*)"V.InsertNextCell(int, int) -> int\nC++: vtkIdType InsertNextCell(unsigned char type, int loc)\n\nAdd a cell to the object in the next available slot.\n"},
  {(char*)"SetCellTypes", PyvtkCellTypes_SetCellTypes, METH_VARARGS,
   (char*)"V.SetCellTypes(int, vtkUnsignedCharArray, vtkIntArray)\nC++: void SetCellTypes(int ncells,\n    vtkUnsignedCharArray *cellTypes, vtkIntArray *cellLocations)\n\nSpecify a group of cell types.\n"},
  {(char*)"GetCellLocation", PyvtkCellTypes_GetCellLocation, METH_VARARGS,
   (char*)"V.GetCellLocation(int) -> int\nC++: vtkIdType GetCellLocation(int cellId)\n\nReturn the location of the cell in the associated vtkCellArray.\n"},
  {(char*)"DeleteCell", PyvtkCellTypes_DeleteCell, METH_VARARGS,
   (char*)"V.DeleteCell(int)\nC++: void DeleteCell(vtkIdType cellId)\n\nDelete cell by setting to NULL cell type.\n"},
  {(char*)"GetNumberOfTypes", PyvtkCellTypes_GetNumberOfTypes, METH_VARARGS,
   (char*)"V.GetNumberOfTypes() -> int\nC++: vtkIdType GetNumberOfTypes()\n\nReturn the number of types in the list.\n"},
  {(char*)"IsType", PyvtkCellTypes_IsType, METH_VARARGS,
   (char*)"V.IsType(int) -> int\nC++: int IsType(unsigned char type)\n\nReturn 1 if type specified is contained in list; 0 otherwise.\n"},
  {(char*)"InsertNextType", PyvtkCellTypes_InsertNextType, METH_VARARGS,
   (char*)"V.InsertNextType(int) -> int\nC++: vtkIdType InsertNextType(unsigned char type)\n\nAdd the type specified to the end of the list. Range checking is\nperformed.\n"},
  {(char*)"GetCellType", PyvtkCellTypes_GetCellType, METH_VARARGS,
   (char*)"V.GetCellType(int) -> int\nC++: unsigned char GetCellType(int cellId)\n\nReturn the type of cell.\n"},
  {(char*)"Squeeze", PyvtkCellTypes_Squeeze, METH_VARARGS,
   (char*)"V.Squeeze()\nC++: void Squeeze()\n\nReclaim any extra memory.\n"},
  {(char*)"Reset", PyvtkCellTypes_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\nInitialize object without releasing memory.\n"},
  {(char*)"GetActualMemorySize", PyvtkCellTypes_GetActualMemorySize, METH_VARARGS,
   (char*)"V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the memory in kilobytes consumed by this cell type array.\nUsed to support streaming and reading/writing data. The value\nreturned is guaranteed to be greater than or equal to the memory\nrequired to actually represent the data represented by this\nobject. The information returned is valid only after the pipeline\nhas been updated.\n"},
  {(char*)"DeepCopy", PyvtkCellTypes_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkCellTypes)\nC++: void DeepCopy(vtkCellTypes *src)\n\nStandard DeepCopy method.  Since this object contains no\nreference to other objects, there is no ShallowCopy.\n"},
  {(char*)"GetClassNameFromTypeId", PyvtkCellTypes_GetClassNameFromTypeId, METH_VARARGS | METH_STATIC,
   (char*)"V.GetClassNameFromTypeId(int) -> string\nC++: static const char *GetClassNameFromTypeId(int typeId)\n\nGiven an int (as defined in vtkCellType.h) identifier for a class\nreturn it's classname.\n"},
  {(char*)"GetTypeIdFromClassName", PyvtkCellTypes_GetTypeIdFromClassName, METH_VARARGS | METH_STATIC,
   (char*)"V.GetTypeIdFromClassName(string) -> int\nC++: static int GetTypeIdFromClassName(const char *classname)\n\nGiven a data object classname, return it's int identified (as\ndefined in vtkCellType.h)\n"},
  {(char*)"IsLinear", PyvtkCellTypes_IsLinear, METH_VARARGS | METH_STATIC,
   (char*)"V.IsLinear(int) -> int\nC++: static int IsLinear(unsigned char type)\n\nThis convenience method is a fast check to determine if a cell\ntype represents a linear or nonlinear cell.  This is generally\nmuch more efficient than getting the appropriate vtkCell and\nchecking its IsLinear method.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCellTypes_StaticNew()
{
  return vtkCellTypes::New();
}

PyObject *PyVTKClass_vtkCellTypesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCellTypes_StaticNew,
    PyvtkCellTypes_Methods,
    "vtkCellTypes", modulename,
    NULL, NULL,
    PyvtkCellTypes_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCellTypes_Doc()
{
  static const char *docstring[] = {
    "vtkCellTypes - object provides direct access to cells in vtkCellArray\nand type information\n\n",
    "Superclass: vtkObject\n\n",
    "This class is a supplemental object to vtkCellArray to allow random\naccess into cells as well as representing cell type information.  The\n\"location\" field is the location in the vtkCellArray list in terms of\nan integer offset.  An integer offset was used instead of a pointer\nfor easy storage and inter-process communication. The type\ninformation is defined in the file vtkCellType.h.\n\nCaveats:\n\nSome",
    "times this class is used to pass type information independent of\nthe random access (i.e., location) information. For example, see\nvtkDataSet::GetCellTypes(). If you use the class in this way, you can\nuse a location value of -1.\n\nSee Also:\n\nvtkCellArray vtkCellLinks\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellTypes(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellTypesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellTypes", o) != 0)
    {
    Py_DECREF(o);
    }

}

