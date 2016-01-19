// python wrapper for vtkAMREnzoReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMREnzoReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMREnzoReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMREnzoReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAMRBaseReaderNew
extern "C" { PyObject *PyVTKClass_vtkAMRBaseReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkAMRBaseReaderNew
#endif

static const char **PyvtkAMREnzoReader_Doc();


static PyObject *
PyvtkAMREnzoReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMREnzoReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMREnzoReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMREnzoReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMREnzoReader::NewInstance());

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
PyvtkAMREnzoReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMREnzoReader *tempr = vtkAMREnzoReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_SetConvertToCGS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertToCGS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertToCGS(temp0);
      }
    else
      {
      op->vtkAMREnzoReader::SetConvertToCGS(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_GetConvertToCGS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertToCGS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetConvertToCGS() :
      op->vtkAMREnzoReader::GetConvertToCGS());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_ConvertToCGSOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertToCGSOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertToCGSOn();
      }
    else
      {
      op->vtkAMREnzoReader::ConvertToCGSOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_ConvertToCGSOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertToCGSOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertToCGSOff();
      }
    else
      {
      op->vtkAMREnzoReader::ConvertToCGSOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocks() :
      op->vtkAMREnzoReader::GetNumberOfBlocks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkAMREnzoReader::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

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
      op->vtkAMREnzoReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAMREnzoReader_Methods[] = {
  {(char*)"GetClassName", PyvtkAMREnzoReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMREnzoReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMREnzoReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMREnzoReader\nC++: vtkAMREnzoReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMREnzoReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMREnzoReader\nC++: vtkAMREnzoReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetConvertToCGS", PyvtkAMREnzoReader_SetConvertToCGS, METH_VARARGS,
   (char*)"V.SetConvertToCGS(int)\nC++: void SetConvertToCGS(int a)\n\nSet/Get whether data should be converted to CGS\n"},
  {(char*)"GetConvertToCGS", PyvtkAMREnzoReader_GetConvertToCGS, METH_VARARGS,
   (char*)"V.GetConvertToCGS() -> int\nC++: int GetConvertToCGS()\n\nSet/Get whether data should be converted to CGS\n"},
  {(char*)"ConvertToCGSOn", PyvtkAMREnzoReader_ConvertToCGSOn, METH_VARARGS,
   (char*)"V.ConvertToCGSOn()\nC++: void ConvertToCGSOn()\n\nSet/Get whether data should be converted to CGS\n"},
  {(char*)"ConvertToCGSOff", PyvtkAMREnzoReader_ConvertToCGSOff, METH_VARARGS,
   (char*)"V.ConvertToCGSOff()\nC++: void ConvertToCGSOff()\n\nSet/Get whether data should be converted to CGS\n"},
  {(char*)"GetNumberOfBlocks", PyvtkAMREnzoReader_GetNumberOfBlocks, METH_VARARGS,
   (char*)"V.GetNumberOfBlocks() -> int\nC++: int GetNumberOfBlocks()\n\nSee vtkAMRBaseReader::GetNumberOfBlocks\n"},
  {(char*)"GetNumberOfLevels", PyvtkAMREnzoReader_GetNumberOfLevels, METH_VARARGS,
   (char*)"V.GetNumberOfLevels() -> int\nC++: int GetNumberOfLevels()\n\nSee vtkAMRBaseReader::GetNumberOfLevels\n"},
  {(char*)"SetFileName", PyvtkAMREnzoReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(const char *fileName)\n\nSee vtkAMRBaseReader::SetFileName\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMREnzoReader_StaticNew()
{
  return vtkAMREnzoReader::New();
}

PyObject *PyVTKClass_vtkAMREnzoReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMREnzoReader_StaticNew,
    PyvtkAMREnzoReader_Methods,
    "vtkAMREnzoReader", modulename,
    NULL, NULL,
    PyvtkAMREnzoReader_Doc(),
    PyVTKClass_vtkAMRBaseReaderNew(modulename));
  return cls;
}

const char **PyvtkAMREnzoReader_Doc()
{
  static const char *docstring[] = {
    "vtkAMREnzoReader.h -- Reader for Enzo AMR datasets.\n\n",
    "Superclass: vtkAMRBaseReader\n\n",
    "A concrete instance of vtkAMRBaseReader that implements functionality\nfor reading Enzo AMR datasets.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMREnzoReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMREnzoReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMREnzoReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

