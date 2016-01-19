// python wrapper for vtkWindBladeReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkWindBladeReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWindBladeReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWindBladeReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
#endif

static const char **PyvtkWindBladeReader_Doc();


static PyObject *
PyvtkWindBladeReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWindBladeReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWindBladeReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWindBladeReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWindBladeReader::NewInstance());

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
PyvtkWindBladeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWindBladeReader *tempr = vtkWindBladeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_SetFilename(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilename");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilename(temp0);
      }
    else
      {
      op->vtkWindBladeReader::SetFilename(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetFilename(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilename");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFilename() :
      op->vtkWindBladeReader::GetFilename());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

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
      op->vtkWindBladeReader::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindBladeReader_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

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
      op->vtkWindBladeReader::SetWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindBladeReader_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkWindBladeReader_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkWindBladeReader_SetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return NULL;
}



static PyObject *
PyvtkWindBladeReader_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkWindBladeReader::GetWholeExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_SetSubExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

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
      op->SetSubExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkWindBladeReader::SetSubExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindBladeReader_SetSubExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSubExtent(temp0);
      }
    else
      {
      op->vtkWindBladeReader::SetSubExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindBladeReader_SetSubExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkWindBladeReader_SetSubExtent_s1(self, args);
    case 1:
      return PyvtkWindBladeReader_SetSubExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSubExtent");
  return NULL;
}



static PyObject *
PyvtkWindBladeReader_GetSubExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSubExtent() :
      op->vtkWindBladeReader::GetSubExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetFieldOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetFieldOutput() :
      op->vtkWindBladeReader::GetFieldOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetBladeOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBladeOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetBladeOutput() :
      op->vtkWindBladeReader::GetBladeOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetGroundOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroundOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetGroundOutput() :
      op->vtkWindBladeReader::GetGroundOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkWindBladeReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkWindBladeReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkWindBladeReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

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
      op->vtkWindBladeReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllPointArrays();
      }
    else
      {
      op->vtkWindBladeReader::DisableAllPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindBladeReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindBladeReader *op = static_cast<vtkWindBladeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllPointArrays();
      }
    else
      {
      op->vtkWindBladeReader::EnableAllPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkWindBladeReader_Methods[] = {
  {(char*)"GetClassName", PyvtkWindBladeReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWindBladeReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWindBladeReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWindBladeReader\nC++: vtkWindBladeReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWindBladeReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWindBladeReader\nC++: vtkWindBladeReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFilename", PyvtkWindBladeReader_SetFilename, METH_VARARGS,
   (char*)"V.SetFilename(string)\nC++: void SetFilename(char *)\n\n"},
  {(char*)"GetFilename", PyvtkWindBladeReader_GetFilename, METH_VARARGS,
   (char*)"V.GetFilename() -> string\nC++: char *GetFilename()\n\n"},
  {(char*)"SetWholeExtent", PyvtkWindBladeReader_SetWholeExtent, METH_VARARGS,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {(char*)"GetWholeExtent", PyvtkWindBladeReader_GetWholeExtent, METH_VARARGS,
   (char*)"V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {(char*)"SetSubExtent", PyvtkWindBladeReader_SetSubExtent, METH_VARARGS,
   (char*)"V.SetSubExtent(int, int, int, int, int, int)\nC++: void SetSubExtent(int, int, int, int, int, int)\nV.SetSubExtent((int, int, int, int, int, int))\nC++: void SetSubExtent(int a[6])\n\n"},
  {(char*)"GetSubExtent", PyvtkWindBladeReader_GetSubExtent, METH_VARARGS,
   (char*)"V.GetSubExtent() -> (int, int, int, int, int, int)\nC++: int *GetSubExtent()\n\n"},
  {(char*)"GetFieldOutput", PyvtkWindBladeReader_GetFieldOutput, METH_VARARGS,
   (char*)"V.GetFieldOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetFieldOutput()\n\nGet the reader's output\n"},
  {(char*)"GetBladeOutput", PyvtkWindBladeReader_GetBladeOutput, METH_VARARGS,
   (char*)"V.GetBladeOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetBladeOutput()\n\nGet the reader's output\n"},
  {(char*)"GetGroundOutput", PyvtkWindBladeReader_GetGroundOutput, METH_VARARGS,
   (char*)"V.GetGroundOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetGroundOutput()\n\nGet the reader's output\n"},
  {(char*)"GetNumberOfPointArrays", PyvtkWindBladeReader_GetNumberOfPointArrays, METH_VARARGS,
   (char*)"V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"GetPointArrayName", PyvtkWindBladeReader_GetPointArrayName, METH_VARARGS,
   (char*)"V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {(char*)"GetPointArrayStatus", PyvtkWindBladeReader_GetPointArrayStatus, METH_VARARGS,
   (char*)"V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\n"},
  {(char*)"SetPointArrayStatus", PyvtkWindBladeReader_SetPointArrayStatus, METH_VARARGS,
   (char*)"V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\n"},
  {(char*)"DisableAllPointArrays", PyvtkWindBladeReader_DisableAllPointArrays, METH_VARARGS,
   (char*)"V.DisableAllPointArrays()\nC++: void DisableAllPointArrays()\n\n"},
  {(char*)"EnableAllPointArrays", PyvtkWindBladeReader_EnableAllPointArrays, METH_VARARGS,
   (char*)"V.EnableAllPointArrays()\nC++: void EnableAllPointArrays()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWindBladeReader_StaticNew()
{
  return vtkWindBladeReader::New();
}

PyObject *PyVTKClass_vtkWindBladeReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWindBladeReader_StaticNew,
    PyvtkWindBladeReader_Methods,
    "vtkWindBladeReader", modulename,
    NULL, NULL,
    PyvtkWindBladeReader_Doc(),
    PyVTKClass_vtkStructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkWindBladeReader_Doc()
{
  static const char *docstring[] = {
    "vtkWindBladeReader - class for reading WindBlade data files\n\n",
    "Superclass: vtkStructuredGridAlgorithm\n\n",
    "vtkWindBladeReader is a source object that reads WindBlade files\nwhich are block binary files with tags before and after each block\ngiving the number of bytes within the block.  The number of data\nvariables dumped varies.  There are 3 output ports with the first\nbeing a structured grid with irregular spacing in the Z dimension.\nThe second is an unstructured grid only read on on process 0 and used\n",
    "to represent the blade.  The third is also a structured grid with\nirregular spacing on the Z dimension.  Only the first and second\noutput ports have time dependent data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWindBladeReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWindBladeReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWindBladeReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

