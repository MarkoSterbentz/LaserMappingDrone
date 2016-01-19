// python wrapper for vtkAMRFlashReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRFlashReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRFlashReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRFlashReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAMRBaseReaderNew
extern "C" { PyObject *PyVTKClass_vtkAMRBaseReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkAMRBaseReaderNew
#endif

static const char **PyvtkAMRFlashReader_Doc();


static PyObject *
PyvtkAMRFlashReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFlashReader *op = static_cast<vtkAMRFlashReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRFlashReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFlashReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFlashReader *op = static_cast<vtkAMRFlashReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRFlashReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFlashReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFlashReader *op = static_cast<vtkAMRFlashReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRFlashReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRFlashReader::NewInstance());

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
PyvtkAMRFlashReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRFlashReader *tempr = vtkAMRFlashReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFlashReader_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFlashReader *op = static_cast<vtkAMRFlashReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocks() :
      op->vtkAMRFlashReader::GetNumberOfBlocks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFlashReader_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFlashReader *op = static_cast<vtkAMRFlashReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkAMRFlashReader::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFlashReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFlashReader *op = static_cast<vtkAMRFlashReader *>(vp);

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
      op->vtkAMRFlashReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRFlashReader_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRFlashReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRFlashReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRFlashReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRFlashReader\nC++: vtkAMRFlashReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRFlashReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRFlashReader\nC++: vtkAMRFlashReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfBlocks", PyvtkAMRFlashReader_GetNumberOfBlocks, METH_VARARGS,
   (char*)"V.GetNumberOfBlocks() -> int\nC++: int GetNumberOfBlocks()\n\nSee vtkAMRBaseReader::GetNumberOfBlocks\n"},
  {(char*)"GetNumberOfLevels", PyvtkAMRFlashReader_GetNumberOfLevels, METH_VARARGS,
   (char*)"V.GetNumberOfLevels() -> int\nC++: int GetNumberOfLevels()\n\nSee vtkAMRBaseReader::GetNumberOfLevels\n"},
  {(char*)"SetFileName", PyvtkAMRFlashReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(const char *fileName)\n\nSee vtkAMRBaseReader::SetFileName\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRFlashReader_StaticNew()
{
  return vtkAMRFlashReader::New();
}

PyObject *PyVTKClass_vtkAMRFlashReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRFlashReader_StaticNew,
    PyvtkAMRFlashReader_Methods,
    "vtkAMRFlashReader", modulename,
    NULL, NULL,
    PyvtkAMRFlashReader_Doc(),
    PyVTKClass_vtkAMRBaseReaderNew(modulename));
  return cls;
}

const char **PyvtkAMRFlashReader_Doc()
{
  static const char *docstring[] = {
    "vtkAMREnzoReader.h -- Reader for Flash AMR datasets.\n\n",
    "Superclass: vtkAMRBaseReader\n\n",
    "A concrete instance of vtkAMRBaseReader that implements functionality\nfor reading Flash AMR datasets.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRFlashReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRFlashReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRFlashReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

