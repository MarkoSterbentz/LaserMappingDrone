// python wrapper for vtkSTLReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSTLReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSTLReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSTLReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSTLReader_Doc();


static PyObject *
PyvtkSTLReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSTLReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSTLReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSTLReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSTLReader::NewInstance());

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
PyvtkSTLReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSTLReader *tempr = vtkSTLReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSTLReader::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

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
      op->vtkSTLReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSTLReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMerging(temp0);
      }
    else
      {
      op->vtkSTLReader::SetMerging(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMerging() :
      op->vtkSTLReader::GetMerging());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOn();
      }
    else
      {
      op->vtkSTLReader::MergingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOff();
      }
    else
      {
      op->vtkSTLReader::MergingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_SetScalarTags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTags(temp0);
      }
    else
      {
      op->vtkSTLReader::SetScalarTags(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_GetScalarTags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarTags() :
      op->vtkSTLReader::GetScalarTags());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_ScalarTagsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarTagsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarTagsOn();
      }
    else
      {
      op->vtkSTLReader::ScalarTagsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_ScalarTagsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarTagsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarTagsOff();
      }
    else
      {
      op->vtkSTLReader::ScalarTagsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkSTLReader::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkSTLReader::GetLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSTLReader_Methods[] = {
  {(char*)"GetClassName", PyvtkSTLReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSTLReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSTLReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSTLReader\nC++: vtkSTLReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSTLReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSTLReader\nC++: vtkSTLReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkSTLReader_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverload standard modified time function. If locator is modified,\nthen this object is modified as well.\n"},
  {(char*)"SetFileName", PyvtkSTLReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of stereo lithography file.\n"},
  {(char*)"GetFileName", PyvtkSTLReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of stereo lithography file.\n"},
  {(char*)"SetMerging", PyvtkSTLReader_SetMerging, METH_VARARGS,
   (char*)"V.SetMerging(int)\nC++: void SetMerging(int a)\n\nTurn on/off merging of points/triangles.\n"},
  {(char*)"GetMerging", PyvtkSTLReader_GetMerging, METH_VARARGS,
   (char*)"V.GetMerging() -> int\nC++: int GetMerging()\n\nTurn on/off merging of points/triangles.\n"},
  {(char*)"MergingOn", PyvtkSTLReader_MergingOn, METH_VARARGS,
   (char*)"V.MergingOn()\nC++: void MergingOn()\n\nTurn on/off merging of points/triangles.\n"},
  {(char*)"MergingOff", PyvtkSTLReader_MergingOff, METH_VARARGS,
   (char*)"V.MergingOff()\nC++: void MergingOff()\n\nTurn on/off merging of points/triangles.\n"},
  {(char*)"SetScalarTags", PyvtkSTLReader_SetScalarTags, METH_VARARGS,
   (char*)"V.SetScalarTags(int)\nC++: void SetScalarTags(int a)\n\nTurn on/off tagging of solids with scalars.\n"},
  {(char*)"GetScalarTags", PyvtkSTLReader_GetScalarTags, METH_VARARGS,
   (char*)"V.GetScalarTags() -> int\nC++: int GetScalarTags()\n\nTurn on/off tagging of solids with scalars.\n"},
  {(char*)"ScalarTagsOn", PyvtkSTLReader_ScalarTagsOn, METH_VARARGS,
   (char*)"V.ScalarTagsOn()\nC++: void ScalarTagsOn()\n\nTurn on/off tagging of solids with scalars.\n"},
  {(char*)"ScalarTagsOff", PyvtkSTLReader_ScalarTagsOff, METH_VARARGS,
   (char*)"V.ScalarTagsOff()\nC++: void ScalarTagsOff()\n\nTurn on/off tagging of solids with scalars.\n"},
  {(char*)"SetLocator", PyvtkSTLReader_SetLocator, METH_VARARGS,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkSTLReader_GetLocator, METH_VARARGS,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSpecify a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSTLReader_StaticNew()
{
  return vtkSTLReader::New();
}

PyObject *PyVTKClass_vtkSTLReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSTLReader_StaticNew,
    PyvtkSTLReader_Methods,
    "vtkSTLReader", modulename,
    NULL, NULL,
    PyvtkSTLReader_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSTLReader_Doc()
{
  static const char *docstring[] = {
    "vtkSTLReader - read ASCII or binary stereo lithography files\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSTLReader is a source object that reads ASCII or binary stereo\nlithography files (.stl files). The FileName must be specified to\nvtkSTLReader. The object automatically detects whether the file is\nASCII or binary.\n\n.stl files are quite inefficient since they duplicate vertex\ndefinitions. By setting the Merging boolean you can control whether\nthe point data is merged after reading. Merging is per",
    "formed by\ndefault, however, merging requires a large amount of temporary\nstorage since a 3D hash table must be constructed.\n\nCaveats:\n\nBinary files written on one system may not be readable on other\nsystems. vtkSTLWriter uses VAX or PC byte ordering and swaps bytes on\nother systems.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSTLReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSTLReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSTLReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

