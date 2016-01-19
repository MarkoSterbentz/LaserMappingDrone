// python wrapper for vtkNrrdReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkNrrdReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNrrdReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNrrdReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageReaderNew
extern "C" { PyObject *PyVTKClass_vtkImageReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageReaderNew
#endif

static const char **PyvtkNrrdReader_Doc();


static PyObject *
PyvtkNrrdReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNrrdReader *op = static_cast<vtkNrrdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNrrdReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNrrdReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNrrdReader *op = static_cast<vtkNrrdReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNrrdReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNrrdReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNrrdReader *op = static_cast<vtkNrrdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNrrdReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNrrdReader::NewInstance());

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
PyvtkNrrdReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNrrdReader *tempr = vtkNrrdReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNrrdReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNrrdReader *op = static_cast<vtkNrrdReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkNrrdReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkNrrdReader_Methods[] = {
  {(char*)"GetClassName", PyvtkNrrdReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNrrdReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNrrdReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNrrdReader\nC++: vtkNrrdReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNrrdReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNrrdReader\nC++: vtkNrrdReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CanReadFile", PyvtkNrrdReader_CanReadFile, METH_VARARGS,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *filename)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNrrdReader_StaticNew()
{
  return vtkNrrdReader::New();
}

PyObject *PyVTKClass_vtkNrrdReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNrrdReader_StaticNew,
    PyvtkNrrdReader_Methods,
    "vtkNrrdReader", modulename,
    NULL, NULL,
    PyvtkNrrdReader_Doc(),
    PyVTKClass_vtkImageReaderNew(modulename));
  return cls;
}

const char **PyvtkNrrdReader_Doc()
{
  static const char *docstring[] = {
    "vtkNrrdReader - Read nrrd files file system\n\n",
    "Superclass: vtkImageReader\n\n",
    "Bugs:\n\nThere are several limitations on what type of nrrd files we can read.\n This reader only supports nrrd files in raw or ascii format.  Other\nencodings like hex will result in errors.  When reading in detached\nheaders, this only supports reading one file that is detached.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNrrdReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNrrdReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNrrdReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

