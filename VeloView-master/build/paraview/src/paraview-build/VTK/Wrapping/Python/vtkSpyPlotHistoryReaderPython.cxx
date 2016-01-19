// python wrapper for vtkSpyPlotHistoryReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSpyPlotHistoryReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSpyPlotHistoryReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSpyPlotHistoryReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkSpyPlotHistoryReader_Doc();


static PyObject *
PyvtkSpyPlotHistoryReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSpyPlotHistoryReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotHistoryReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpyPlotHistoryReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotHistoryReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSpyPlotHistoryReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpyPlotHistoryReader::NewInstance());

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
PyvtkSpyPlotHistoryReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSpyPlotHistoryReader *tempr = vtkSpyPlotHistoryReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotHistoryReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

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
      op->vtkSpyPlotHistoryReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotHistoryReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSpyPlotHistoryReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotHistoryReader_SetCommentCharacter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommentCharacter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCommentCharacter(temp0);
      }
    else
      {
      op->vtkSpyPlotHistoryReader::SetCommentCharacter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotHistoryReader_GetCommentCharacter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommentCharacter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetCommentCharacter() :
      op->vtkSpyPlotHistoryReader::GetCommentCharacter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotHistoryReader_SetDelimeter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelimeter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDelimeter(temp0);
      }
    else
      {
      op->vtkSpyPlotHistoryReader::SetDelimeter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotHistoryReader_GetDelimeter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelimeter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotHistoryReader *op = static_cast<vtkSpyPlotHistoryReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetDelimeter() :
      op->vtkSpyPlotHistoryReader::GetDelimeter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSpyPlotHistoryReader_Methods[] = {
  {(char*)"GetClassName", PyvtkSpyPlotHistoryReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSpyPlotHistoryReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSpyPlotHistoryReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSpyPlotHistoryReader\nC++: vtkSpyPlotHistoryReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSpyPlotHistoryReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSpyPlotHistoryReader\nC++: vtkSpyPlotHistoryReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkSpyPlotHistoryReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet and set the file name. It is either the name of the case file\nor the name of the single binary file.\n"},
  {(char*)"GetFileName", PyvtkSpyPlotHistoryReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet and set the file name. It is either the name of the case file\nor the name of the single binary file.\n"},
  {(char*)"SetCommentCharacter", PyvtkSpyPlotHistoryReader_SetCommentCharacter, METH_VARARGS,
   (char*)"V.SetCommentCharacter(string)\nC++: void SetCommentCharacter(char *)\n\nGet and set the comment character for the file\n"},
  {(char*)"GetCommentCharacter", PyvtkSpyPlotHistoryReader_GetCommentCharacter, METH_VARARGS,
   (char*)"V.GetCommentCharacter() -> string\nC++: char *GetCommentCharacter()\n\nGet and set the comment character for the file\n"},
  {(char*)"SetDelimeter", PyvtkSpyPlotHistoryReader_SetDelimeter, METH_VARARGS,
   (char*)"V.SetDelimeter(string)\nC++: void SetDelimeter(char *)\n\nGet and set the delimeter character for the file\n"},
  {(char*)"GetDelimeter", PyvtkSpyPlotHistoryReader_GetDelimeter, METH_VARARGS,
   (char*)"V.GetDelimeter() -> string\nC++: char *GetDelimeter()\n\nGet and set the delimeter character for the file\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSpyPlotHistoryReader_StaticNew()
{
  return vtkSpyPlotHistoryReader::New();
}

PyObject *PyVTKClass_vtkSpyPlotHistoryReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSpyPlotHistoryReader_StaticNew,
    PyvtkSpyPlotHistoryReader_Methods,
    "vtkSpyPlotHistoryReader", modulename,
    NULL, NULL,
    PyvtkSpyPlotHistoryReader_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSpyPlotHistoryReader_Doc()
{
  static const char *docstring[] = {
    "vtkSpyPlotHistoryReader - Read SPCTH Spy Plot history file format\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "vtkSpyPlotHistoryReader is a reader that reads SPCTH Spy Plot history\nfile format files. Each row in the history files represents a time\nstep and columns represent points and properties for the points\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSpyPlotHistoryReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSpyPlotHistoryReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSpyPlotHistoryReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

