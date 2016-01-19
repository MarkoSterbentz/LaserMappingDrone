// python wrapper for vtkCMLMoleculeReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCMLMoleculeReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCMLMoleculeReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCMLMoleculeReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMoleculeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMoleculeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMoleculeAlgorithmNew
#endif

static const char **PyvtkCMLMoleculeReader_Doc();


static PyObject *
PyvtkCMLMoleculeReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCMLMoleculeReader *op = static_cast<vtkCMLMoleculeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCMLMoleculeReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCMLMoleculeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCMLMoleculeReader *op = static_cast<vtkCMLMoleculeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCMLMoleculeReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCMLMoleculeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCMLMoleculeReader *op = static_cast<vtkCMLMoleculeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCMLMoleculeReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCMLMoleculeReader::NewInstance());

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
PyvtkCMLMoleculeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCMLMoleculeReader *tempr = vtkCMLMoleculeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCMLMoleculeReader_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCMLMoleculeReader *op = static_cast<vtkCMLMoleculeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMolecule *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkCMLMoleculeReader::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCMLMoleculeReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCMLMoleculeReader *op = static_cast<vtkCMLMoleculeReader *>(vp);

  vtkMolecule *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMolecule"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkCMLMoleculeReader::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCMLMoleculeReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCMLMoleculeReader *op = static_cast<vtkCMLMoleculeReader *>(vp);

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
      op->vtkCMLMoleculeReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCMLMoleculeReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCMLMoleculeReader *op = static_cast<vtkCMLMoleculeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkCMLMoleculeReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCMLMoleculeReader_Methods[] = {
  {(char*)"GetClassName", PyvtkCMLMoleculeReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCMLMoleculeReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCMLMoleculeReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCMLMoleculeReader\nC++: vtkCMLMoleculeReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCMLMoleculeReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCMLMoleculeReader\nC++: vtkCMLMoleculeReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkCMLMoleculeReader_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkMolecule\nC++: vtkMolecule *GetOutput()\n\nGet/Set the output (vtkMolecule) that the reader will fill\n"},
  {(char*)"SetOutput", PyvtkCMLMoleculeReader_SetOutput, METH_VARARGS,
   (char*)"V.SetOutput(vtkMolecule)\nC++: void SetOutput(vtkMolecule *)\n\nGet/Set the output (vtkMolecule) that the reader will fill\n"},
  {(char*)"SetFileName", PyvtkCMLMoleculeReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the name of the CML file\n"},
  {(char*)"GetFileName", PyvtkCMLMoleculeReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the name of the CML file\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCMLMoleculeReader_StaticNew()
{
  return vtkCMLMoleculeReader::New();
}

PyObject *PyVTKClass_vtkCMLMoleculeReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCMLMoleculeReader_StaticNew,
    PyvtkCMLMoleculeReader_Methods,
    "vtkCMLMoleculeReader", modulename,
    NULL, NULL,
    PyvtkCMLMoleculeReader_Doc(),
    PyVTKClass_vtkMoleculeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCMLMoleculeReader_Doc()
{
  static const char *docstring[] = {
    "vtkCMLMoleculeReader - Read a CML file and output a\n\n",
    "Superclass: vtkMoleculeAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCMLMoleculeReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCMLMoleculeReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCMLMoleculeReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

