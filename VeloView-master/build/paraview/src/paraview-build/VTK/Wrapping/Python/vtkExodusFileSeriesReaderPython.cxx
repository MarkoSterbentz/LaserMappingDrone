// python wrapper for vtkExodusFileSeriesReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExodusFileSeriesReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExodusFileSeriesReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExodusFileSeriesReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkFileSeriesReaderNew
extern "C" { PyObject *PyVTKClass_vtkFileSeriesReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkFileSeriesReaderNew
#endif

static const char **PyvtkExodusFileSeriesReader_Doc();


static PyObject *
PyvtkExodusFileSeriesReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusFileSeriesReader *op = static_cast<vtkExodusFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExodusFileSeriesReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusFileSeriesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusFileSeriesReader *op = static_cast<vtkExodusFileSeriesReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExodusFileSeriesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusFileSeriesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusFileSeriesReader *op = static_cast<vtkExodusFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExodusFileSeriesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExodusFileSeriesReader::NewInstance());

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
PyvtkExodusFileSeriesReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExodusFileSeriesReader *tempr = vtkExodusFileSeriesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusFileSeriesReader_Methods[] = {
  {(char*)"GetClassName", PyvtkExodusFileSeriesReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExodusFileSeriesReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExodusFileSeriesReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExodusFileSeriesReader\nC++: vtkExodusFileSeriesReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExodusFileSeriesReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExodusFileSeriesReader\nC++: vtkExodusFileSeriesReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExodusFileSeriesReader_StaticNew()
{
  return vtkExodusFileSeriesReader::New();
}

PyObject *PyVTKClass_vtkExodusFileSeriesReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExodusFileSeriesReader_StaticNew,
    PyvtkExodusFileSeriesReader_Methods,
    "vtkExodusFileSeriesReader", modulename,
    NULL, NULL,
    PyvtkExodusFileSeriesReader_Doc(),
    PyVTKClass_vtkFileSeriesReaderNew(modulename));
  return cls;
}

const char **PyvtkExodusFileSeriesReader_Doc()
{
  static const char *docstring[] = {
    "vtkExodusFileSeriesReader - meta-reader to read Exodus file series\nfrom simulation restarts\n\n",
    "Superclass: vtkFileSeriesReader\n\n",
    "Add some special sauce to the superclass that allows it to work with\nthe parallel Exodus reader.  Specifically, changing the file name\ncauses the selected output arrays to be cleared out.  This class\nsaves and restores the information.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExodusFileSeriesReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExodusFileSeriesReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExodusFileSeriesReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

