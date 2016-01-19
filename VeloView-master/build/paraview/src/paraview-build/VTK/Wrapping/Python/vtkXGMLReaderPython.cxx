// python wrapper for vtkXGMLReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXGMLReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXGMLReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXGMLReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUndirectedGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUndirectedGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUndirectedGraphAlgorithmNew
#endif

static const char **PyvtkXGMLReader_Doc();


static PyObject *
PyvtkXGMLReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXGMLReader *op = static_cast<vtkXGMLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXGMLReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXGMLReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXGMLReader *op = static_cast<vtkXGMLReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXGMLReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXGMLReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXGMLReader *op = static_cast<vtkXGMLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXGMLReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXGMLReader::NewInstance());

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
PyvtkXGMLReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXGMLReader *tempr = vtkXGMLReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXGMLReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXGMLReader *op = static_cast<vtkXGMLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkXGMLReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXGMLReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXGMLReader *op = static_cast<vtkXGMLReader *>(vp);

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
      op->vtkXGMLReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXGMLReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXGMLReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXGMLReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXGMLReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXGMLReader\nC++: vtkXGMLReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXGMLReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXGMLReader\nC++: vtkXGMLReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkXGMLReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nThe XGML file name.\n"},
  {(char*)"SetFileName", PyvtkXGMLReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nThe XGML file name.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXGMLReader_StaticNew()
{
  return vtkXGMLReader::New();
}

PyObject *PyVTKClass_vtkXGMLReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXGMLReader_StaticNew,
    PyvtkXGMLReader_Methods,
    "vtkXGMLReader", modulename,
    NULL, NULL,
    PyvtkXGMLReader_Doc(),
    PyVTKClass_vtkUndirectedGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkXGMLReader_Doc()
{
  static const char *docstring[] = {
    "vtkXGMLReader - Reads XGML graph files.\n\n",
    "Superclass: vtkUndirectedGraphAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXGMLReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXGMLReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXGMLReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

