// python wrapper for vtkGaussianCubeReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGaussianCubeReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGaussianCubeReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGaussianCubeReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMoleculeReaderBaseNew
extern "C" { PyObject *PyVTKClass_vtkMoleculeReaderBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkMoleculeReaderBaseNew
#endif

static const char **PyvtkGaussianCubeReader_Doc();


static PyObject *
PyvtkGaussianCubeReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGaussianCubeReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianCubeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGaussianCubeReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianCubeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGaussianCubeReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGaussianCubeReader::NewInstance());

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
PyvtkGaussianCubeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGaussianCubeReader *tempr = vtkGaussianCubeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianCubeReader_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkGaussianCubeReader::GetTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianCubeReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

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
      op->vtkGaussianCubeReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianCubeReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkGaussianCubeReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianCubeReader_GetGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetGridOutput() :
      op->vtkGaussianCubeReader::GetGridOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGaussianCubeReader_Methods[] = {
  {(char*)"GetClassName", PyvtkGaussianCubeReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGaussianCubeReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGaussianCubeReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGaussianCubeReader\nC++: vtkGaussianCubeReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGaussianCubeReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGaussianCubeReader\nC++: vtkGaussianCubeReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetTransform", PyvtkGaussianCubeReader_GetTransform, METH_VARARGS,
   (char*)"V.GetTransform() -> vtkTransform\nC++: vtkTransform *GetTransform()\n\n"},
  {(char*)"SetFileName", PyvtkGaussianCubeReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\n"},
  {(char*)"GetFileName", PyvtkGaussianCubeReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\n"},
  {(char*)"GetGridOutput", PyvtkGaussianCubeReader_GetGridOutput, METH_VARARGS,
   (char*)"V.GetGridOutput() -> vtkImageData\nC++: vtkImageData *GetGridOutput()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGaussianCubeReader_StaticNew()
{
  return vtkGaussianCubeReader::New();
}

PyObject *PyVTKClass_vtkGaussianCubeReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGaussianCubeReader_StaticNew,
    PyvtkGaussianCubeReader_Methods,
    "vtkGaussianCubeReader", modulename,
    NULL, NULL,
    PyvtkGaussianCubeReader_Doc(),
    PyVTKClass_vtkMoleculeReaderBaseNew(modulename));
  return cls;
}

const char **PyvtkGaussianCubeReader_Doc()
{
  static const char *docstring[] = {
    "vtkGaussianCubeReader - read ASCII Gaussian Cube Data files\n\n",
    "Superclass: vtkMoleculeReaderBase\n\n",
    "vtkGaussianCubeReader is a source object that reads ASCII files\nfollowing the description in http://www.gaussian.com/00000430.htm The\nFileName must be specified.\n\nThanks:\n\nDr. Jean M. Favre who developed and contributed this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGaussianCubeReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGaussianCubeReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGaussianCubeReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

