// python wrapper for vtkNetCDFCAMReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkNetCDFCAMReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNetCDFCAMReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNetCDFCAMReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkNetCDFCAMReader_Doc();


static PyObject *
PyvtkNetCDFCAMReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNetCDFCAMReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNetCDFCAMReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNetCDFCAMReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNetCDFCAMReader::NewInstance());

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
PyvtkNetCDFCAMReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNetCDFCAMReader *tempr = vtkNetCDFCAMReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkNetCDFCAMReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

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
      op->vtkNetCDFCAMReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkNetCDFCAMReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SetConnectivityFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConnectivityFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConnectivityFileName(temp0);
      }
    else
      {
      op->vtkNetCDFCAMReader::SetConnectivityFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetConnectivityFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnectivityFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetConnectivityFileName() :
      op->vtkNetCDFCAMReader::GetConnectivityFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SingleLevelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleLevelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SingleLevelOn();
      }
    else
      {
      op->vtkNetCDFCAMReader::SingleLevelOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SingleLevelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleLevelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SingleLevelOff();
      }
    else
      {
      op->vtkNetCDFCAMReader::SingleLevelOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SetSingleLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSingleLevel(temp0);
      }
    else
      {
      op->vtkNetCDFCAMReader::SetSingleLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetSingleLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSingleLevelMinValue() :
      op->vtkNetCDFCAMReader::GetSingleLevelMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetSingleLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSingleLevelMaxValue() :
      op->vtkNetCDFCAMReader::GetSingleLevelMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetSingleLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSingleLevel() :
      op->vtkNetCDFCAMReader::GetSingleLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SetCellLayerRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLayerRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellLayerRight(temp0);
      }
    else
      {
      op->vtkNetCDFCAMReader::SetCellLayerRight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetCellLayerRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLayerRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellLayerRight() :
      op->vtkNetCDFCAMReader::GetCellLayerRight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkNetCDFCAMReader_Methods[] = {
  {(char*)"GetClassName", PyvtkNetCDFCAMReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNetCDFCAMReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNetCDFCAMReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNetCDFCAMReader\nC++: vtkNetCDFCAMReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNetCDFCAMReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNetCDFCAMReader\nC++: vtkNetCDFCAMReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CanReadFile", PyvtkNetCDFCAMReader_CanReadFile, METH_VARARGS | METH_STATIC,
   (char*)"V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *fileName)\n\nReturns 1 if this file can be read and 0 if the file cannot be\nread. Because NetCDF CAM files come in pairs and we only check\none of the files, the result is not definitive.  Invalid files\nmay still return 1 although a valid file will never return 0.\n"},
  {(char*)"SetFileName", PyvtkNetCDFCAMReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(const char *fileName)\n\n"},
  {(char*)"GetFileName", PyvtkNetCDFCAMReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\n"},
  {(char*)"SetConnectivityFileName", PyvtkNetCDFCAMReader_SetConnectivityFileName, METH_VARARGS,
   (char*)"V.SetConnectivityFileName(string)\nC++: void SetConnectivityFileName(const char *fileName)\n\n"},
  {(char*)"GetConnectivityFileName", PyvtkNetCDFCAMReader_GetConnectivityFileName, METH_VARARGS,
   (char*)"V.GetConnectivityFileName() -> string\nC++: char *GetConnectivityFileName()\n\n"},
  {(char*)"SingleLevelOn", PyvtkNetCDFCAMReader_SingleLevelOn, METH_VARARGS,
   (char*)"V.SingleLevelOn()\nC++: void SingleLevelOn()\n\nSet whether or not to read a single level.  A value of one\nindicates that only a single level will be read in. The NetCDF\nvariables loaded will then be ones with dimensions of (time,\nncols).  This will result in a surface grid. Otherwise a\nvolumetric grid will be created (if lev > 1) and the variables\nwith dimensions of (time, lev, ncols) will be read in. By\ndefault, SingleLevel = 0.\n"},
  {(char*)"SingleLevelOff", PyvtkNetCDFCAMReader_SingleLevelOff, METH_VARARGS,
   (char*)"V.SingleLevelOff()\nC++: void SingleLevelOff()\n\nSet whether or not to read a single level.  A value of one\nindicates that only a single level will be read in. The NetCDF\nvariables loaded will then be ones with dimensions of (time,\nncols).  This will result in a surface grid. Otherwise a\nvolumetric grid will be created (if lev > 1) and the variables\nwith dimensions of (time, lev, ncols) will be read in. By\ndefault, SingleLevel = 0.\n"},
  {(char*)"SetSingleLevel", PyvtkNetCDFCAMReader_SetSingleLevel, METH_VARARGS,
   (char*)"V.SetSingleLevel(int)\nC++: void SetSingleLevel(int)\n\nSet whether or not to read a single level.  A value of one\nindicates that only a single level will be read in. The NetCDF\nvariables loaded will then be ones with dimensions of (time,\nncols).  This will result in a surface grid. Otherwise a\nvolumetric grid will be created (if lev > 1) and the variables\nwith dimensions of (time, lev, ncols) will be read in. By\ndefault, SingleLevel = 0.\n"},
  {(char*)"GetSingleLevelMinValue", PyvtkNetCDFCAMReader_GetSingleLevelMinValue, METH_VARARGS,
   (char*)"V.GetSingleLevelMinValue() -> int\nC++: int GetSingleLevelMinValue()\n\nSet whether or not to read a single level.  A value of one\nindicates that only a single level will be read in. The NetCDF\nvariables loaded will then be ones with dimensions of (time,\nncols).  This will result in a surface grid. Otherwise a\nvolumetric grid will be created (if lev > 1) and the variables\nwith dimensions of (time, lev, ncols) will be read in. By\ndefault, SingleLevel = 0.\n"},
  {(char*)"GetSingleLevelMaxValue", PyvtkNetCDFCAMReader_GetSingleLevelMaxValue, METH_VARARGS,
   (char*)"V.GetSingleLevelMaxValue() -> int\nC++: int GetSingleLevelMaxValue()\n\nSet whether or not to read a single level.  A value of one\nindicates that only a single level will be read in. The NetCDF\nvariables loaded will then be ones with dimensions of (time,\nncols).  This will result in a surface grid. Otherwise a\nvolumetric grid will be created (if lev > 1) and the variables\nwith dimensions of (time, lev, ncols) will be read in. By\ndefault, SingleLevel = 0.\n"},
  {(char*)"GetSingleLevel", PyvtkNetCDFCAMReader_GetSingleLevel, METH_VARARGS,
   (char*)"V.GetSingleLevel() -> int\nC++: int GetSingleLevel()\n\nSet whether or not to read a single level.  A value of one\nindicates that only a single level will be read in. The NetCDF\nvariables loaded will then be ones with dimensions of (time,\nncols).  This will result in a surface grid. Otherwise a\nvolumetric grid will be created (if lev > 1) and the variables\nwith dimensions of (time, lev, ncols) will be read in. By\ndefault, SingleLevel = 0.\n"},
  {(char*)"SetCellLayerRight", PyvtkNetCDFCAMReader_SetCellLayerRight, METH_VARARGS,
   (char*)"V.SetCellLayerRight(int)\nC++: void SetCellLayerRight(int a)\n\nSpecify which \"side\" of the domain to add the connecting cells\nat.  0 indicates left side and 1 indicates right side. The\ndefault is the right side.\n"},
  {(char*)"GetCellLayerRight", PyvtkNetCDFCAMReader_GetCellLayerRight, METH_VARARGS,
   (char*)"V.GetCellLayerRight() -> int\nC++: int GetCellLayerRight()\n\nSpecify which \"side\" of the domain to add the connecting cells\nat.  0 indicates left side and 1 indicates right side. The\ndefault is the right side.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNetCDFCAMReader_StaticNew()
{
  return vtkNetCDFCAMReader::New();
}

PyObject *PyVTKClass_vtkNetCDFCAMReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNetCDFCAMReader_StaticNew,
    PyvtkNetCDFCAMReader_Methods,
    "vtkNetCDFCAMReader", modulename,
    NULL, NULL,
    PyvtkNetCDFCAMReader_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkNetCDFCAMReader_Doc()
{
  static const char *docstring[] = {
    "vtkNetCDFCAMReader - Read unstructured NetCDF CAM files.\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "Reads in a NetCDF CAM (Community Atmospheric Model) file and produces\nand unstructured grid.  The grid is actually unstructured in the X\nand Y directions and rectilinear in the Z direction with all hex\ncells.  The reader requires 2 NetCDF files.  The first is the cell\nconnectivity file which has the quad connectivity in the plane. The\nother connectivity file has all of the point and field informat",
    "ion.\nCurrently this reader ignores time that may exist in the points file.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNetCDFCAMReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNetCDFCAMReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNetCDFCAMReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

