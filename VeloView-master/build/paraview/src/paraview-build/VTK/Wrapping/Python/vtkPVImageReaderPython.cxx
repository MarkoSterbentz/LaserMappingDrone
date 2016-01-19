// python wrapper for vtkPVImageReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVImageReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVImageReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVImageReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageReaderNew
extern "C" { PyObject *PyVTKClass_vtkImageReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageReaderNew
#endif

static const char **PyvtkPVImageReader_Doc();


static PyObject *
PyvtkPVImageReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageReader *op = static_cast<vtkPVImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVImageReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageReader *op = static_cast<vtkPVImageReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVImageReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImageReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImageReader *op = static_cast<vtkPVImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVImageReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVImageReader::NewInstance());

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
PyvtkPVImageReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVImageReader *tempr = vtkPVImageReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVImageReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPVImageReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVImageReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVImageReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVImageReader\nC++: vtkPVImageReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVImageReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVImageReader\nC++: vtkPVImageReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVImageReader_StaticNew()
{
  return vtkPVImageReader::New();
}

PyObject *PyVTKClass_vtkPVImageReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVImageReader_StaticNew,
    PyvtkPVImageReader_Methods,
    "vtkPVImageReader", modulename,
    NULL, NULL,
    PyvtkPVImageReader_Doc(),
    PyVTKClass_vtkImageReaderNew(modulename));
  return cls;
}

const char **PyvtkPVImageReader_Doc()
{
  static const char *docstring[] = {
    "vtkPVImageReader - ImageReader that automatically switch between\n\n",
    "Superclass: vtkImageReader\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVImageReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVImageReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVImageReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

