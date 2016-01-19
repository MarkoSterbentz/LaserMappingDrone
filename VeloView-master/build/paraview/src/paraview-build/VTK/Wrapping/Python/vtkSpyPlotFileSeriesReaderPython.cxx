// python wrapper for vtkSpyPlotFileSeriesReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSpyPlotFileSeriesReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSpyPlotFileSeriesReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSpyPlotFileSeriesReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkFileSeriesReaderNew
extern "C" { PyObject *PyVTKClass_vtkFileSeriesReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkFileSeriesReaderNew
#endif

static const char **PyvtkSpyPlotFileSeriesReader_Doc();


static PyObject *
PyvtkSpyPlotFileSeriesReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotFileSeriesReader *op = static_cast<vtkSpyPlotFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSpyPlotFileSeriesReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotFileSeriesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotFileSeriesReader *op = static_cast<vtkSpyPlotFileSeriesReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpyPlotFileSeriesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpyPlotFileSeriesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotFileSeriesReader *op = static_cast<vtkSpyPlotFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSpyPlotFileSeriesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpyPlotFileSeriesReader::NewInstance());

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
PyvtkSpyPlotFileSeriesReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSpyPlotFileSeriesReader *tempr = vtkSpyPlotFileSeriesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSpyPlotFileSeriesReader_Methods[] = {
  {(char*)"GetClassName", PyvtkSpyPlotFileSeriesReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSpyPlotFileSeriesReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSpyPlotFileSeriesReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSpyPlotFileSeriesReader\nC++: vtkSpyPlotFileSeriesReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSpyPlotFileSeriesReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSpyPlotFileSeriesReader\nC++: vtkSpyPlotFileSeriesReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSpyPlotFileSeriesReader_StaticNew()
{
  return vtkSpyPlotFileSeriesReader::New();
}

PyObject *PyVTKClass_vtkSpyPlotFileSeriesReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSpyPlotFileSeriesReader_StaticNew,
    PyvtkSpyPlotFileSeriesReader_Methods,
    "vtkSpyPlotFileSeriesReader", modulename,
    NULL, NULL,
    PyvtkSpyPlotFileSeriesReader_Doc(),
    PyVTKClass_vtkFileSeriesReaderNew(modulename));
  return cls;
}

const char **PyvtkSpyPlotFileSeriesReader_Doc()
{
  static const char *docstring[] = {
    "vtkSpyPlotFileSeriesReader - no description provided.\n\n",
    "Superclass: vtkFileSeriesReader\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSpyPlotFileSeriesReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSpyPlotFileSeriesReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSpyPlotFileSeriesReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

