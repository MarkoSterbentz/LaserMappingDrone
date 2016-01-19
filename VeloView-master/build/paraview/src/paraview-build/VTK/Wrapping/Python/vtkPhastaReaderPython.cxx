// python wrapper for vtkPhastaReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPhastaReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPhastaReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPhastaReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkPhastaReader_Doc();


static PyObject *
PyvtkPhastaReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPhastaReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPhastaReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPhastaReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPhastaReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPhastaReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPhastaReader::NewInstance());

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
PyvtkPhastaReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPhastaReader *tempr = vtkPhastaReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPhastaReader_SetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeometryFileName(temp0);
      }
    else
      {
      op->vtkPhastaReader::SetGeometryFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPhastaReader_GetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetGeometryFileName() :
      op->vtkPhastaReader::GetGeometryFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPhastaReader_SetFieldFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldFileName(temp0);
      }
    else
      {
      op->vtkPhastaReader::SetFieldFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPhastaReader_GetFieldFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFieldFileName() :
      op->vtkPhastaReader::GetFieldFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPhastaReader_ClearFieldInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFieldInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearFieldInfo();
      }
    else
      {
      op->vtkPhastaReader::ClearFieldInfo();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPhastaReader_SetFieldInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  int temp3;
  int temp4;
  char *temp5 = NULL;
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
      op->SetFieldInfo(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkPhastaReader::SetFieldInfo(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPhastaReader_SetCachedGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCachedGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  vtkUnstructuredGrid *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid"))
    {
    if (ap.IsBound())
      {
      op->SetCachedGrid(temp0);
      }
    else
      {
      op->vtkPhastaReader::SetCachedGrid(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPhastaReader_GetCachedGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCachedGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhastaReader *op = static_cast<vtkPhastaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetCachedGrid() :
      op->vtkPhastaReader::GetCachedGrid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPhastaReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPhastaReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPhastaReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPhastaReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPhastaReader\nC++: vtkPhastaReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPhastaReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPhastaReader\nC++: vtkPhastaReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGeometryFileName", PyvtkPhastaReader_SetGeometryFileName, METH_VARARGS,
   (char*)"V.SetGeometryFileName(string)\nC++: void SetGeometryFileName(char *)\n\nSpecify file name of Phasta geometry file to read.\n"},
  {(char*)"GetGeometryFileName", PyvtkPhastaReader_GetGeometryFileName, METH_VARARGS,
   (char*)"V.GetGeometryFileName() -> string\nC++: char *GetGeometryFileName()\n\nSpecify file name of Phasta geometry file to read.\n"},
  {(char*)"SetFieldFileName", PyvtkPhastaReader_SetFieldFileName, METH_VARARGS,
   (char*)"V.SetFieldFileName(string)\nC++: void SetFieldFileName(char *)\n\nSpecify file name of Phasta field file to read.\n"},
  {(char*)"GetFieldFileName", PyvtkPhastaReader_GetFieldFileName, METH_VARARGS,
   (char*)"V.GetFieldFileName() -> string\nC++: char *GetFieldFileName()\n\nSpecify file name of Phasta field file to read.\n"},
  {(char*)"ClearFieldInfo", PyvtkPhastaReader_ClearFieldInfo, METH_VARARGS,
   (char*)"V.ClearFieldInfo()\nC++: void ClearFieldInfo()\n\nClear/Set info. in FieldInfoMap for object of\nvtkPhastaReaderInternal\n"},
  {(char*)"SetFieldInfo", PyvtkPhastaReader_SetFieldInfo, METH_VARARGS,
   (char*)"V.SetFieldInfo(string, string, int, int, int, string)\nC++: void SetFieldInfo(const char *paraviewFieldTag,\n    const char *phastaFieldTag, int index, int numOfComps,\n    int dataDependency, const char *dataType)\n\nClear/Set info. in FieldInfoMap for object of\nvtkPhastaReaderInternal\n"},
  {(char*)"SetCachedGrid", PyvtkPhastaReader_SetCachedGrid, METH_VARARGS,
   (char*)"V.SetCachedGrid(vtkUnstructuredGrid)\nC++: void SetCachedGrid(vtkUnstructuredGrid *)\n\n"},
  {(char*)"GetCachedGrid", PyvtkPhastaReader_GetCachedGrid, METH_VARARGS,
   (char*)"V.GetCachedGrid() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetCachedGrid()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPhastaReader_StaticNew()
{
  return vtkPhastaReader::New();
}

PyObject *PyVTKClass_vtkPhastaReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPhastaReader_StaticNew,
    PyvtkPhastaReader_Methods,
    "vtkPhastaReader", modulename,
    NULL, NULL,
    PyvtkPhastaReader_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPhastaReader_Doc()
{
  static const char *docstring[] = {
    "vtkPhastaReader - Reader for RPI's PHASTA software\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkPhastaReader reads RPI's Scorec's PHASTA (Parallel Hierarchic\nAdaptive Stabilized Transient Analysis) dumps.  See\nhttp://www.scorec.rpi.edu/software_products.html or contact Scorec\nfor information on PHASTA.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPhastaReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPhastaReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPhastaReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

