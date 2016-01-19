// python wrapper for vtkTecplotReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTecplotReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTecplotReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTecplotReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkTecplotReader_Doc();


static PyObject *
PyvtkTecplotReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTecplotReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTecplotReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTecplotReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTecplotReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTecplotReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTecplotReader::NewInstance());

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
PyvtkTecplotReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTecplotReader *tempr = vtkTecplotReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTecplotReader_GetNumberOfVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVariables() :
      op->vtkTecplotReader::GetNumberOfVariables());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTecplotReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkTecplotReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTecplotReader_GetDataTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDataTitle() :
      op->vtkTecplotReader::GetDataTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTecplotReader_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocks() :
      op->vtkTecplotReader::GetNumberOfBlocks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTecplotReader_GetBlockName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetBlockName(temp0) :
      op->vtkTecplotReader::GetBlockName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTecplotReader_GetNumberOfDataAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDataAttributes() :
      op->vtkTecplotReader::GetNumberOfDataAttributes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTecplotReader_GetDataAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDataAttributeName(temp0) :
      op->vtkTecplotReader::GetDataAttributeName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTecplotReader_IsDataAttributeCellBased_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDataAttributeCellBased");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsDataAttributeCellBased(temp0) :
      op->vtkTecplotReader::IsDataAttributeCellBased(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTecplotReader_IsDataAttributeCellBased_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDataAttributeCellBased");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsDataAttributeCellBased(temp0) :
      op->vtkTecplotReader::IsDataAttributeCellBased(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTecplotReader_IsDataAttributeCellBased_Methods[] = {
  {NULL, PyvtkTecplotReader_IsDataAttributeCellBased_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkTecplotReader_IsDataAttributeCellBased_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTecplotReader_IsDataAttributeCellBased(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTecplotReader_IsDataAttributeCellBased_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsDataAttributeCellBased");
  return NULL;
}



static PyObject *
PyvtkTecplotReader_GetNumberOfDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDataArrays() :
      op->vtkTecplotReader::GetNumberOfDataArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTecplotReader_GetDataArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDataArrayName(temp0) :
      op->vtkTecplotReader::GetDataArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTecplotReader_GetDataArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataArrayStatus(temp0) :
      op->vtkTecplotReader::GetDataArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTecplotReader_SetDataArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotReader *op = static_cast<vtkTecplotReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDataArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkTecplotReader::SetDataArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTecplotReader_Methods[] = {
  {(char*)"GetClassName", PyvtkTecplotReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTecplotReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTecplotReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTecplotReader\nC++: vtkTecplotReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTecplotReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTecplotReader\nC++: vtkTecplotReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfVariables", PyvtkTecplotReader_GetNumberOfVariables, METH_VARARGS,
   (char*)"V.GetNumberOfVariables() -> int\nC++: int GetNumberOfVariables()\n\nGet the number of all variables (including 3D coordinates).\n"},
  {(char*)"SetFileName", PyvtkTecplotReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(const char *fileName)\n\nSpecify a Tecplot ASCII file for data loading.\n"},
  {(char*)"GetDataTitle", PyvtkTecplotReader_GetDataTitle, METH_VARARGS,
   (char*)"V.GetDataTitle() -> string\nC++: const char *GetDataTitle()\n\nGet the Tecplot data title.\n"},
  {(char*)"GetNumberOfBlocks", PyvtkTecplotReader_GetNumberOfBlocks, METH_VARARGS,
   (char*)"V.GetNumberOfBlocks() -> int\nC++: int GetNumberOfBlocks()\n\nGet the number of blocks (i.e., zones in Tecplot terms).\n"},
  {(char*)"GetBlockName", PyvtkTecplotReader_GetBlockName, METH_VARARGS,
   (char*)"V.GetBlockName(int) -> string\nC++: const char *GetBlockName(int blockIdx)\n\nGet the name of a block specified by a zero-based index. NULL is\nreturned for an invalid block index.\n"},
  {(char*)"GetNumberOfDataAttributes", PyvtkTecplotReader_GetNumberOfDataAttributes, METH_VARARGS,
   (char*)"V.GetNumberOfDataAttributes() -> int\nC++: int GetNumberOfDataAttributes()\n\nGet the number of standard data attributes (node-based and\ncell-based), excluding 3D coordinates.\n"},
  {(char*)"GetDataAttributeName", PyvtkTecplotReader_GetDataAttributeName, METH_VARARGS,
   (char*)"V.GetDataAttributeName(int) -> string\nC++: const char *GetDataAttributeName(int attrIndx)\n\nGet the name of a zero-based data attribute (not 3D coordinates).\nNULL is returned for an invalid attribute index.\n"},
  {(char*)"IsDataAttributeCellBased", PyvtkTecplotReader_IsDataAttributeCellBased, METH_VARARGS,
   (char*)"V.IsDataAttributeCellBased(string) -> int\nC++: int IsDataAttributeCellBased(const char *attrName)\nV.IsDataAttributeCellBased(int) -> int\nC++: int IsDataAttributeCellBased(int attrIndx)\n\nGet the type (0 for node-based and 1 for cell-based) of a\nspecified data attribute (not 3D coordinates). -1 is returned for\nan invalid attribute name.\n"},
  {(char*)"GetNumberOfDataArrays", PyvtkTecplotReader_GetNumberOfDataArrays, METH_VARARGS,
   (char*)"V.GetNumberOfDataArrays() -> int\nC++: int GetNumberOfDataArrays()\n\nGet the number of all data attributes (point data and cell data).\n"},
  {(char*)"GetDataArrayName", PyvtkTecplotReader_GetDataArrayName, METH_VARARGS,
   (char*)"V.GetDataArrayName(int) -> string\nC++: const char *GetDataArrayName(int arrayIdx)\n\nGet the name of a data array specified by the zero-based index\n(arrayIdx).\n"},
  {(char*)"GetDataArrayStatus", PyvtkTecplotReader_GetDataArrayStatus, METH_VARARGS,
   (char*)"V.GetDataArrayStatus(string) -> int\nC++: int GetDataArrayStatus(const char *arayName)\n\nGet the status of a specific data array (0: un-selected; 1:\nselected).\n"},
  {(char*)"SetDataArrayStatus", PyvtkTecplotReader_SetDataArrayStatus, METH_VARARGS,
   (char*)"V.SetDataArrayStatus(string, int)\nC++: void SetDataArrayStatus(const char *arayName, int bChecked)\n\nSet the status of a specific data array (0: de-select; 1: select)\nspecified by the name.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTecplotReader_StaticNew()
{
  return vtkTecplotReader::New();
}

PyObject *PyVTKClass_vtkTecplotReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTecplotReader_StaticNew,
    PyvtkTecplotReader_Methods,
    "vtkTecplotReader", modulename,
    NULL, NULL,
    PyvtkTecplotReader_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTecplotReader_Doc()
{
  static const char *docstring[] = {
    "vtkTecplotReader - A concrete class to read an ASCII Tecplot file.\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkTecplotReader parses an ASCII Tecplot file to get a\nvtkMultiBlockDataSet\n object made up of several vtkDataSet objects, of which each is of\ntype\n either vtkStructuredGrid or vtkUnstructuredGrid. Each vtkDataSet\nobject\n maintains the geometry, topology, and some associated attributes\ndescribing\n physical properties.\n\n\n Tecplot treats 3D coordinates (only one or two coordinates might be\n explicit",
    "ly specified in a file) as varaibles too, whose names (e.g.,\n 'X' / 'x' / 'I', 'Y' / 'y' / 'J', 'Z' / 'z' / 'K') are provided in\nthe\n variables list (the 'VARIABLES' section). These names are then\nfollowed\n in the list by those of other traditional variables or attributes\n(node-\n based and / or cell-based data with the mode specified via token\n'VAR\n LOCATION', to be extracted to create vtkPointDat",
    "a and / or\nvtkCellData).\n Each zone described afterwards (in the 'ZONE's section) provides the\n specific values of the aforementioned variables (including 3D\ncoordinates),\n in the same order as indicated by the variable-names list, through\neither\n POINT-packing (i.e., tuple-based storage) or BLOCK-packing\n(component-based\n storage). In particular, the first / description line of  each zone\ntells\n ",
    "the type of all the  constituent cells as the connectivity /\ntopology\n information. In other words, the entire dataset is made up of\nmultiple zones\n (blocks), of which each maintains a set of cells of the same type\n('BRICK',\n 'TRIANGLE', 'QUADRILATERAL', 'TETRAHEDRON', and 'POINT' in Tecplot\nterms).\n In addition, the description line of each zone specifies the zone\nname,\n dimensionality informatio",
    "n (size of each dimension for a structured\nzone),\n number of nodes, and number of cells. Information about the file\nformat is\n available at http://download.tecplot.com/360/dataformat.pdf.\n\nCaveats:\n\n\n vtkTecplotReader is currently a simplified ASCII Tecplot reader and\nsome\n functionalities (e.g., extraction of sections 'GEOMETRY', 'TEXT',\nand 'DATA\n SETAUXDATA', access to multiple time steps, in a",
    "ddition to the\nconstruction\n of vtkRectilinearGrid and vtkImageData objects) are not supported.\n\nThanks:\n\n\n This class is a VTK implementation of VisIt's ASCII Tecplot reader.\n\nSee Also:\n\n\n vtkPoints vtkStructuredGrid vtkUnstructuredGrid vtkPointData\nvtkCellData\n vtkDataSet vtkMultiBlockDataSet\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTecplotReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTecplotReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTecplotReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

