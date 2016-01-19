// python wrapper for vtkXMLGenericDataObjectReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLGenericDataObjectReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLGenericDataObjectReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLGenericDataObjectReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLDataReaderNew
#endif

static const char **PyvtkXMLGenericDataObjectReader_Doc();


static PyObject *
PyvtkXMLGenericDataObjectReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLGenericDataObjectReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLGenericDataObjectReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLGenericDataObjectReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLGenericDataObjectReader::NewInstance());

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
PyvtkXMLGenericDataObjectReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLGenericDataObjectReader *tempr = vtkXMLGenericDataObjectReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkXMLGenericDataObjectReader::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLGenericDataObjectReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkXMLGenericDataObjectReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLGenericDataObjectReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLGenericDataObjectReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLGenericDataObjectReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkXMLGenericDataObjectReader_GetHierarchicalBoxDataSetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalBoxDataSetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHierarchicalBoxDataSet *tempr = (ap.IsBound() ?
      op->GetHierarchicalBoxDataSetOutput() :
      op->vtkXMLGenericDataObjectReader::GetHierarchicalBoxDataSetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetHyperOctreeOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHyperOctreeOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperOctree *tempr = (ap.IsBound() ?
      op->GetHyperOctreeOutput() :
      op->vtkXMLGenericDataObjectReader::GetHyperOctreeOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetImageDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImageDataOutput() :
      op->vtkXMLGenericDataObjectReader::GetImageDataOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetMultiBlockDataSetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiBlockDataSetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiBlockDataSet *tempr = (ap.IsBound() ?
      op->GetMultiBlockDataSetOutput() :
      op->vtkXMLGenericDataObjectReader::GetMultiBlockDataSetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetPolyDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyDataOutput() :
      op->vtkXMLGenericDataObjectReader::GetPolyDataOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetRectilinearGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRectilinearGrid *tempr = (ap.IsBound() ?
      op->GetRectilinearGridOutput() :
      op->vtkXMLGenericDataObjectReader::GetRectilinearGridOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetStructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetStructuredGridOutput() :
      op->vtkXMLGenericDataObjectReader::GetStructuredGridOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetUnstructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetUnstructuredGridOutput() :
      op->vtkXMLGenericDataObjectReader::GetUnstructuredGridOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkXMLGenericDataObjectReader::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkXMLGenericDataObjectReader::GetNumberOfCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_SetupEmptyOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupEmptyOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetupEmptyOutput();
      }
    else
      {
      op->vtkXMLGenericDataObjectReader::SetupEmptyOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_ReadOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  char *temp0 = NULL;
  bool temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->ReadOutputType(temp0, temp1) :
      op->vtkXMLGenericDataObjectReader::ReadOutputType(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLGenericDataObjectReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLGenericDataObjectReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLGenericDataObjectReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLGenericDataObjectReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLGenericDataObjectReader\nC++: vtkXMLGenericDataObjectReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLGenericDataObjectReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLGenericDataObjectReader\nC++: vtkXMLGenericDataObjectReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkXMLGenericDataObjectReader_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkDataObject\nC++: vtkDataObject *GetOutput()\nV.GetOutput(int) -> vtkDataObject\nC++: vtkDataObject *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {(char*)"GetHierarchicalBoxDataSetOutput", PyvtkXMLGenericDataObjectReader_GetHierarchicalBoxDataSetOutput, METH_VARARGS,
   (char*)"V.GetHierarchicalBoxDataSetOutput() -> vtkHierarchicalBoxDataSet\nC++: vtkHierarchicalBoxDataSet *GetHierarchicalBoxDataSetOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetHyperOctreeOutput", PyvtkXMLGenericDataObjectReader_GetHyperOctreeOutput, METH_VARARGS,
   (char*)"V.GetHyperOctreeOutput() -> vtkHyperOctree\nC++: vtkHyperOctree *GetHyperOctreeOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetImageDataOutput", PyvtkXMLGenericDataObjectReader_GetImageDataOutput, METH_VARARGS,
   (char*)"V.GetImageDataOutput() -> vtkImageData\nC++: vtkImageData *GetImageDataOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetMultiBlockDataSetOutput", PyvtkXMLGenericDataObjectReader_GetMultiBlockDataSetOutput, METH_VARARGS,
   (char*)"V.GetMultiBlockDataSetOutput() -> vtkMultiBlockDataSet\nC++: vtkMultiBlockDataSet *GetMultiBlockDataSetOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetPolyDataOutput", PyvtkXMLGenericDataObjectReader_GetPolyDataOutput, METH_VARARGS,
   (char*)"V.GetPolyDataOutput() -> vtkPolyData\nC++: vtkPolyData *GetPolyDataOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetRectilinearGridOutput", PyvtkXMLGenericDataObjectReader_GetRectilinearGridOutput, METH_VARARGS,
   (char*)"V.GetRectilinearGridOutput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetRectilinearGridOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetStructuredGridOutput", PyvtkXMLGenericDataObjectReader_GetStructuredGridOutput, METH_VARARGS,
   (char*)"V.GetStructuredGridOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetUnstructuredGridOutput", PyvtkXMLGenericDataObjectReader_GetUnstructuredGridOutput, METH_VARARGS,
   (char*)"V.GetUnstructuredGridOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetNumberOfPoints", PyvtkXMLGenericDataObjectReader_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nOverridden method.\n"},
  {(char*)"GetNumberOfCells", PyvtkXMLGenericDataObjectReader_GetNumberOfCells, METH_VARARGS,
   (char*)"V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells()\n\nOverridden method.\n"},
  {(char*)"SetupEmptyOutput", PyvtkXMLGenericDataObjectReader_SetupEmptyOutput, METH_VARARGS,
   (char*)"V.SetupEmptyOutput()\nC++: void SetupEmptyOutput()\n\nOverridden method. Not Used. Delegated.\n"},
  {(char*)"ReadOutputType", PyvtkXMLGenericDataObjectReader_ReadOutputType, METH_VARARGS,
   (char*)"V.ReadOutputType(string, bool) -> int\nC++: virtual int ReadOutputType(const char *name, bool &parallel)\n\nThis method can be used to find out the type of output expected\nwithout needing to read the whole file.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLGenericDataObjectReader_StaticNew()
{
  return vtkXMLGenericDataObjectReader::New();
}

PyObject *PyVTKClass_vtkXMLGenericDataObjectReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLGenericDataObjectReader_StaticNew,
    PyvtkXMLGenericDataObjectReader_Methods,
    "vtkXMLGenericDataObjectReader", modulename,
    NULL, NULL,
    PyvtkXMLGenericDataObjectReader_Doc(),
    PyVTKClass_vtkXMLDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLGenericDataObjectReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLGenericDataObjectReader - Read any type of vtk data object\n\n",
    "Superclass: vtkXMLDataReader\n\n",
    "vtkXMLGenericDataObjectReader reads any type of vtk data object\nencoded in XML format.\n\nSee Also:\n\nvtkGenericDataObjectReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLGenericDataObjectReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLGenericDataObjectReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLGenericDataObjectReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

